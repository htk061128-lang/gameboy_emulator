module OAM_DMA(
  input clk, //16MHz clk.
  input reset,
  //Memory_Interface와 상호작용하는 신호들.
  output reg mem_ena,
  output reg mem_r_ena,
  output reg mem_w_ena,
  output reg [15:0] mem_ad,
  output reg [7:0] mem_w_data,
  input [7:0] mem_r_data,
  //DMA_$FF46에서 들어오는 신호들.
  input [7:0] DMA,
  input DMA_start //DMA_$FF46모듈로부터 들어오는 이 값이 1이 되는 순간부터 $XX00-$XX9F에서 값을 읽어서 $FE00-$FE9F로 복사해주면 됨. (XX = $00 to $DF). 160 * 4 = 640 T_cycle이 소요됨.
); 
  reg [3:0] state; //일단 4T_cycle에 읽기와 쓰기 1번씩 해야 함. 
  reg [7:0] clk_counter;
  reg [15:0] real_clk_counter;
  reg [7:0] tem_reg; //읽은값 임시 저장용 레지스터. 
  reg [15:0] r_ad_reg; //읽을 주소 저장 레지스터.
  reg [15:0] w_ad_reg; //쓸 값 저장용 레지스터.
  
  reg w_end;
  reg r_end;
  
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      state <= 0;
      mem_ena <= 0;
      mem_r_ena <= 0;
      mem_w_ena <= 0;
      mem_ad <= 0;
      mem_w_data <= 0;
      w_end <= 0;
      r_end <= 0;
      
      clk_counter <= 0;
      real_clk_counter <= 0;
      tem_reg <= 0;
      r_ad_reg <= 0;
      w_ad_reg <= 0;
    end
    else begin
      mem_ena <= 0; 
      mem_r_ena <= 0;
      mem_w_ena <= 0;
      mem_ad <= 0;
      mem_w_data <= 0;
      w_end <= 0;
      r_end <= 0;
      
      case(state) 
        0: begin //정지상태. 기본적으로 이 상태를 유지.
          if(DMA_start) begin
            state <= 1;
            clk_counter <= 0;
            r_ad_reg[15:0] <= {DMA[7:0], 8'h00}; //XX00으로 설정. XX9F까지 하나씩 읽어서 FE00-FE9F로 옮겨줘야 함.
            w_ad_reg[15:0] <= 16'hFE00; //OAM주소로 설정.
          end
          else begin 
            state <= 0;
          end
        end
        1: begin //T에지(m1에지)에서 state는 1이되고 m2, m3, m4에지까지 대기. 
          if(clk_counter == 3) begin
            state <= 2; //m4에지에서 state는 2로 변경됨.
            clk_counter <= 0; //clk_counter 0으로 초기화!!! state 2에서 써먹어야 해서 그럼.
          end
          else begin
            clk_counter <= clk_counter + 1; //
            state <= 1;
          end
        end
        2: begin //T1에지. 여기서부터 메모리 읽기와 쓰기가 시작. T1에지때 메모리 읽기요청. T3에지때 쓰기요청. 다음 T1에지때 읽기요청, T3에지때 쓰기요청으로 하면 될듯. 읽은값은 저장해서 간직해둬야 함.
          case(clk_counter)
            0: begin //T1에지.
              mem_ena <= 1;
              mem_r_ena <= 1;
              mem_w_ena <= 0;
              mem_ad[15:0] <= r_ad_reg[15:0]; //XX00에 읽기요청.
              r_ad_reg <= r_ad_reg + 1; //XX01로 변경됨.
              state <= 5;
              clk_counter <= 0;
            end 
            1: begin //m4에지. T3전까지 대기한후 state를 4로 바꿔줘야 함.
              if(real_clk_counter == 5) begin //m4에지에서 real_clk_counter가 5가 되고 T1에지에서 쓰기요청이 일어남.
                state <= 2;
                real_clk_counter <= 0; //초기화 해줌. 중요.
                clk_counter <= 2; //이제 state 2의 clk_counter가 2일때의 코드가 실행됨.
                mem_ena <= 1;
                mem_r_ena <= 0;
                mem_w_ena <= 1;
                mem_ad[15:0] <= w_ad_reg[15:0];
                w_ad_reg <= w_ad_reg + 1;
                mem_w_data[7:0] <= tem_reg[7:0];
                w_end <= 1;
              end
              else begin
                real_clk_counter <= real_clk_counter + 1; //m4에지에서 real_clk_counter는 1이되고 T2에지: 2, m2: 3 m3: 4 m4: 5 T3에지: 6 
                state <= 2;
              end
            end
            2: begin //읽기를 마쳤을때, 혹은 쓰기를 마쳤을때. 즉 T1의 m4에지때나, T3의 m2에지때임.
              if(w_end) begin 
                if(w_ad_reg[15:0] == 16'hFEA0) begin //즉, FE9F까지 쓰기를 완료했을때.
                  clk_counter <= 0;
                  real_clk_counter <= 0;
                  tem_reg <= 0;
                  r_ad_reg <= 0;
                  w_ad_reg <= 0;
                  state <= 0; //처음 상태로 돌아감.
                end
                else begin  //T3의 m2에지부터 작성하면 됨.
                  clk_counter <= 3;
                  real_clk_counter <= 0;
                  state <= 2;
                end
              end
              else if(r_end) begin //T1의 m4에지부터 작성해야 함.
                clk_counter <= 4;
                real_clk_counter <= 0;
                state <= 2;
              end
            end
            3: begin //T3의 m3에지. T1에지 직전에 state를 3으로 바꿔줘야 함.
              if(real_clk_counter == 5) begin //m3에지: 1 m4: 2 T4: 3 m2: 4 m3: 5 m4: 6 T1: 7
                state <= 3;
              end
              else begin
                real_clk_counter <= real_clk_counter + 1;
                state <= 2;
                clk_counter <= 3;
              end
            end
            4: begin //T2의 m1에지. T3에지 직전에 state를 4로 바꿔줘야 함.
              if(real_clk_counter == 3) begin //m4에지: 0 T2: 1 m2: 2 m3: 3 m4: 4 T3: 5
                state <= 4;
              end
              else begin
                real_clk_counter <= real_clk_counter + 1;
                state <= 2;
                clk_counter <= 4;
              end
            end
          endcase
        end
        3: begin //메모리 읽기용. T1에지
          mem_ena <= 1;
          mem_r_ena <= 1;
          mem_w_ena <= 0;
          mem_ad[15:0] <= r_ad_reg[15:0];
          r_ad_reg <= r_ad_reg + 1;
          clk_counter <= 2;
          state <= 5;
        end
        4: begin //메모리 쓰기용. T3에지
          mem_ena <= 1;
          mem_r_ena <= 0;
          mem_w_ena <= 1;
          mem_ad[15:0] <= w_ad_reg[15:0];
          w_ad_reg <= w_ad_reg + 1;
          mem_w_data[7:0] <= tem_reg[7:0];
          clk_counter <= 2;
          state <= 2;
          w_end <= 1;
          real_clk_counter <= 0;
        end
        5: begin 
          state <= 6;
        end
        6: begin
          tem_reg[7:0] <= mem_r_data[7:0];
          state <= 2;
          r_end <= 1;
          real_clk_counter <= 0;
          if(clk_counter == 0) begin
            clk_counter <= 1;
          end
          else begin
            clk_counter <= clk_counter;
          end
        end
      endcase
    end
    
  end
  
endmodule
        //cpu의 메모리접근.
        //T에지(m1에지)(메모리 접근) - m2에지 - m3에지(주소, w_data, ena넣기) - m4에지(이때 쓰기적용되고, 읽기값 나옴. 이때 DMA_start 1이 됨.) - T에지(m1에지)(이때 state는 1로 변경.) - m2 - m3 - m3 - m4

/*
      case(mem_state)
        0: begin
          mem_state <= 0; //기본적으로 mem_state은 0으로 두고 계속 유지함.
        end
        1: begin //mem_state가 1이 되었다는것은 메모리 읽기 쓰기를 위해서 if(T_cycle_ena)블럭 안에서 T-cycle 에지(my1 에지)에 맞추어서 바꾼것이 되는거임.
          mem_state <= 2; //my2 에지 순간에 mem_state는 2로 바뀜.
        end
        2: begin //my3 에지 순간. 이때 외부의 memory_interface 모듈에 신호들을 전달함.
          mem_state <= 3;
          mem_ad <= mem_ad_reg;
          mem_w_data <= mem_w_data_reg;
          mem_ena <= 1; //중요!!!
          mem_w_ena <= mem_w_ena_reg;
          mem_r_ena <= mem_r_ena_reg;
        end
        3: begin //my4 에지 순간. 이 에지때 mem_r_data가 나옴.
          mem_state <= 4;
        end
        4: begin //my1(T2) 에지 순간.
          mem_state <= 0;
          mem_out_reg <= mem_r_data; //외부에서 들어보는 mem_r_data를 mem_out_reg에 담아줌.
        end
        5: begin 
        end
      endcase
      
*/
