module CPU(
  //기본적 신호들
  input my_clk, //약 16MHz 신호라고 생각하면 됨. T-cycle은 약 4MHz이고 M-cycle은 약 1MHz라고 생각하면 됨. game boy cpu는 기본적으로 M-cycle에 맞춰서 동작함.
  input reset,
  //외부의 memory_interface 모듈과 상호작용할 신호들
  output reg mem_ena, //이 신호가 1이어야지 실제 메모리 모듈에 신호가 전달됨. 만약 0이면 memory_interface에서 걸러버림. 그래서 결과적으로 버스를 점유하지 않게됨.
  output reg [15:0] mem_ad, //주소는 16비트
  output reg [7:0] mem_w_data, //데이터는 8비트임
  output reg mem_w_ena,
  output reg mem_r_ena,
  input [7:0] mem_r_data,
  input [7:0] mem_r_data_valid,
  //interrupt 관련 신호들
  input [7:0] IE, //Interrupt Enable 레지스터, 
  input [7:0] IF, //Interrupt Flag 레지스터, 
  output reg [7:0] irq_clear, //IF_$$FF0F 모듈에 다이렉트로 전달해서 클럭에지때 irq_clear의 8개의 비트중에 1로 만든 비트에 해당하는 IF의 비트를 0으로 만듬.
  //cpu 상태관련 신호
  output reg halt, //HALT 명령어를 실행해서 인터럽트 신호가 올 때까지 더이상 명령어를 실행하지 않는 대기상태가 되면 1로 만들어줘서 외부 모듈에 알려주면 될듯.
  //디버깅용 output들
  output [7:0] A_debug,
  output [7:0] F_debug,
  output [7:0] B_debug,
  output [7:0] C_debug,
  output [7:0] D_debug,
  output [7:0] E_debug,
  output [7:0] H_debug,
  output [7:0] L_debug,
  output [15:0] PC_debug,
  output [15:0] SP_debug,
  output [7:0] main_state_debug,
  output IME_debug
  
);
  //memory_interface 모듈은 무조건 주소를 주면 다음 클럭에지에서 data가 나오게 되어있음. 그래서 버스가 사용중이거나 하면 쓰레기값을 반환하는 방식으로 구현함. 그래서 입출력이 완료될때까지 기다리는 구조가 아니고 그냥 조용히 실패하는 구조임. 
  
  reg IME; //Interrupt Master Enable 레지스터, CPU내부에 정의하고 이 값이 1이면 (IF & IE)가 1일때 헨들러를 실행하고 0이면 실행하지 않음.
  reg IME_on; //IME를 1로 설정하는 제어신호
  reg IME_off; //IME를 0으로 설정하는 제어신호
  reg EI_pending; //이 값이 1이면 다음 명령어 실행이 끝나고 fetch_T1으로 가는 동시에 IME를 1로 만들어주고, 0으로 설정됨.
  reg EI_pending_on; //always @(*) 안에서 EI_pending을 1로 만들어주면 클럭에지떄 EI_pending이 1로 설정됨.
  
  //CPU 내부 레지스터 정의
  reg [7:0] A; //Accumulator
  reg [7:0] F; //Flag register, F[7]은 Zero flag, F[6]은 Subtraction flag, F[5]은 Half carry flag, F[4]는 Carry flag임.
  reg [7:0] B;
  reg [7:0] C;
  reg [7:0] D;
  reg [7:0] E;
  reg [7:0] H;
  reg [7:0] L;
  reg [15:0] SP; //Stack Pointer
  reg [15:0] PC; //Program Counter
  //
  
  assign A_debug = A;
  assign F_debug = F;
  assign B_debug = B;
  assign C_debug = C;
  assign D_debug = D;
  assign E_debug = E;
  assign H_debug = H;
  assign L_debug = L;
  assign PC_debug = PC;
  assign SP_debug = SP;
  assign IME_debug = IME;
  
  assign main_state_debug = main_state;
  
  
  reg [7:0] IF_reg; //인터럽트를 실행할때 외부 모듈에서 들어오는 IF의 값을 저장해둘 용도로 정의해줌. 
  
  reg [7:0] Operand_r8; //opcode의 [2:0]에 해당하는 레지스터 번호에 대응하는 8비트 레지스터값을 나타내기 위해 사용됨.
  reg [7:0] Operand_r8_ad; //prefix명령어에서 rotate같은 명령어 구현하기 위해서 만든 변수. Operand_r8은 레지스터에 들어간 값이 담긴하면 여기에는 그 레지스터의 reg_ad가 담김
  reg [7:0] Dest_r8; //block 1의 ld r8, r8 명령어의 opcode [5:3]에 대응하는 8비트 레지스터의 내가 임의로 정해둔 reg_ad을 나타냄. Source_r8이랑 다르니까 주의해야 함!!  
  reg [7:0] Source_r8; //block 1의 ld r8, r8 명령어의 opcode [2:0]에 대응하는 8비트 레지스터 값을 나타냄. 결과적으로 Source_r8에 해당하는 레지스터값을 Dest_r8에 해당하는 레지스터로 옮기게 됨.
  reg Condition; //opcode[4:3]값과 현재 F레지스터의 carry flag나 zero flag 값에 의해서 1이냐 0이냐가 결정됨. 1이면 분기조건을 만족하는거고 0이면 비만족 하는 상황이라고 해석하면 됨.
  reg [15:0] Operand_r16;
  reg [7:0] Operand_r16_ad; //9: SP, 12: BC, 13: DE, 14: HL. 굳이 8비트나 필요없기는 함. 이 4개의 16비트 레지스터를 가르키기 위해 opcode[5:4] 2비트가 사용됨.
  reg [15:0] Dest_r16mem; //메모리 주소가 담김. ld [r16mem], a에서 A값을 저장할 메모리주소를 opcode[5:4]에 따라서 결정함.
  reg [15:0] Source_r16mem;
  reg [15:0] register_r16stk; //PUSH, POP 명령어에 사용되는 opcode[5:4]에 의해 결정되는 레지스터 값. 
  reg [7:0] register_r16stk_ad; //PUSH, POP 명령어에 사용되는 opcode[5:4]에 의해 결정되는 레지스터의 reg_ad값.
  
  
  reg [7:0] T_clk_counter; //T_clk_counter와 opcode에 의해서 제어신호가 즉시 결정됨.
  reg [7:0] T_clk_counter_next; //이 신호를 always @(*)안에서 결정하면 다음 T클럭 에지때 반영됨.
  
  reg [7:0] opcode; //mem_out_reg에 담긴 명령어가 이 레지스터에 저장됨
  reg opcode_valid; //이 신호가 1이어야지 opcode값이 유효함.
  reg prefix_valid; //이 신호가 1이면 opcode가 prefix instruction으로 해석됨. 이때 반드시 opcode_valid는 0으로 꺼줘야 함.
  
  reg [3:0] my_clk_counter; 
  wire T_cycle_ena; 
  wire M_cycle_ena;
  
  reg [3:0] mem_state; //메모리는 16MHz에 동기화되어 있지만 4MHz라는 속도에 맞추기 위해서 이 FSM을 만들었음.
  
  reg [7:0] main_state;
  reg [7:0] next_main_state; 
  
  //레지스터 저장 제어신호
  reg reg_w_ena;
  reg [7:0] reg_ad; //0: 아무동작 안함 1: A, 2: F, 3: B, 4: C, 5: D, 6: E, 7: H, 8: L, 9: SP, 10: PC, 11: AF, 12: BC, 13: DE, 14: HL 에 값이 쓰여짐.
  reg [15:0] reg_w_data; //8비트 레지스터에 저장하는거면 reg[7:0] 값을 저장하게 되고 나머지는 무시됨. 16비트 레지스터에 저장할때는 전부 저장됨.
  reg [7:0] reg_ad_2; //혹시 몰라서 동시에 2개의 레지스터에 저장이 가능하도록 만들어둘 예정.
  reg [15:0] reg_w_data_2;
  
  //PC 레지스터 1 증가 제어신호
  reg PC_plus_ena; 
  
  //이 신호들로 4MHz로 동작하는 if(T_cycle_ena)블럭에서 메모리 입출력을 해주면 됨.
  reg [15:0] mem_ad_reg; //4MHz에 맞추어서 메모리 입출력 신호를 보낼때 이 레지스터에 주소를 넣고, 
  reg [7:0] mem_w_data_reg; //이 레지스터에 w_data를 넣고
  reg mem_w_ena_reg; //이 두 레지스터들에 읽기인지 쓰기인지 제어신호를 넣고 mem_state를 1로 바꾸어주면,
  reg mem_r_ena_reg; 
  reg [7:0] mem_out_reg; //다음 T-cycle 클럭에지에서 이 레지스터에 mem_r_data가 저장됨. 결과적으로 4MHz기준으로 동기식 메모리 접근하는것 같게 추상화를 해줌.
  
  //always @(*)문 안에서 사용할 메모리 입출력 제어신호. 그니까 mem_ad는 16MHz에 동기화된 외부 메모리 모듈에 가고, mem_ad_reg는 4MHz에 맞춰서 always@(posedge clk)문의 if(T_cycle_ena)문 안에서 사용하고 mem_control_ad는 always@(*)문 안에서 디코딩 겸 제어신호만드는 거대한 case문에서 사용할 용도임.
  reg mem_control_r_ena;
  reg mem_control_w_ena;
  reg [15:0] mem_control_ad;
  reg [7:0] mem_control_w_data;
  wire [7:0] mem_control_r_data;
  
  //임시 저장 레지스터와 제어신호 정의. 
  reg [7:0] tem_reg; //여기에 값을 임시로 저장할 수 있음. T1에지에서 나온 값을 잠시 여기에 저장했다가 T4에지에서 사용하는등의 활용을 위해서 선언해줌.
  reg tem_reg_w_ena; //tem_reg 제어신호, 이 값이 1이면 T_clk 에지에서 값이 써짐. 그리고 다른 값을 쓰기 전까지는 무조건 유지됨.
  reg [7:0] tem_reg_w_data;
  
  //imm8이나, imm16을 임시적으로 저장해줄 레지스터들 정의
  reg [7:0] imm8_reg;
  reg imm8_reg_clear; //이 제어신호가 1이면 T_clk 에지때 imm8_reg를 0으로 초기화해줌.
  reg [15:0] imm16_reg;
  reg imm16_reg_clear; //이 제어신호가 1이면 T_clk 에지때 imm16_reg를 0으로 초기화해줌.
  
  parameter fetch_T1 = 0, fetch_T2 = 1, fetch_T3 = 2, fetch_T4 = 3, imm8_T1 = 4, imm8_T2 = 5, imm8_T3 = 6, imm8_T4 = 7;
  parameter imm16_T1 = 8, imm16_T2 = 9, imm16_T3 = 10, imm16_T4 = 11, prefix_T1 = 12, prefix_T2 = 13, prefix_T3 = 14, prefix_T4 = 15;
  parameter EXECUTE = 16, INTERRUPT = 17, HALT = 18, EXECUTE_prefix = 19, imm16_T5 = 20, imm16_T6 = 21, imm16_T7 = 22, imm16_T8 = 23, STOP = 24;
  
  assign T_cycle_ena = (my_clk_counter == 3); 
  
  assign mem_control_r_data = mem_out_reg;
  
  //ALU_8bit 모듈에 넣을 신호들
  reg [7:0] a_8;
  reg [7:0] b_8;
  reg [4:0] alu_op_8; //0이면 더하기. 1이면 빼기.
  reg cin_8;
  wire [3:0] flag_8;
  wire [7:0] alu_result_8;
  
  ALU_8bit ins00(
    .a(a_8),
    .b(b_8),
    .alu_op(alu_op_8),
    .cin(cin_8),
    .flag(flag_8), //output
    .result(alu_result_8) //output
  
  );
  
  
  always @(posedge my_clk or posedge reset) begin //my_clk 속도인 16MHz로 실행됨.
    if(reset) begin
      my_clk_counter <= 0;
      mem_state <= 0;
      main_state <= fetch_T1;
      opcode_valid <= 0;
      halt <= 0;
      EI_pending <= 0;
      T_clk_counter <= 0;
      PC <= 16'h0100; //PC 초기값 설정.
      SP <= 16'hFFFE;
      IME <= 0;
      
      irq_clear[7:0] <= 0;
      
      mem_ena <= 0;
      mem_w_ena <= 0;
      mem_r_ena <= 0;
      
      imm8_reg <= 0;
      imm16_reg <= 0;
      tem_reg <= 0;
      
      mem_w_ena_reg <= 0;
      mem_r_ena_reg <= 0;
    end
    else begin
      mem_ena <= 0; //초기값 설정.
      mem_w_ena <= 0;
      mem_r_ena <= 0;
      main_state <= main_state; //밑에서 바꾸지 않는한 기본적으로 계속 현재 상태를 유지하게 됨.
      mem_state <= mem_state;
      irq_clear[7:0] <= 0; //이 신호는 output으로 16MHz에 동기화되어있는 IF_reg 모듈에 가는것이므로 16MHz에 맞추어서 초기화 해줘야 함. 주의!. 특정 비트를 1로 만들면 실제 IF레지스터가 0으로 초기화됨.
      mem_out_reg <= mem_out_reg; //다음 메모리 입출력 요청이 있기 전까지는 절대 바뀌면 안됨!! 명시적으로 여기에 적어둠.
      
      
      if(my_clk_counter == 3) begin //my_clk_counter는 16MHz의 속도로 0 -> 1 -> 2 -> 3 -> 0 -> 1 -> 2 -> 3 -> 0을 반복하게 됨.
        my_clk_counter <= 0;
      end
      else begin
        my_clk_counter <= my_clk_counter + 1;
      end
      
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
      
      if(T_cycle_ena) begin //이 if문 블럭안은 4MHz로 실행됨. 여기 안에 4MHz로 실행되는 CPU코드를 넣으면 될듯.
        T_clk_counter <= T_clk_counter_next; //이 코드로 매 T클럭마다 T_clk_counter가 T_clk_counter_next로 갱신됨. my_clk마다 갱신되는것이 아닌것에 주의. 또한 밑에 T_clk_counter <= 이런 명령어가 있으면 그걸로 반영되기 떄문에 그 부분도 주의해야 함.
        opcode_valid <= opcode_valid; 
        tem_reg <= tem_reg; //tem_reg_w_ena로 값을 쓰기 전까지는 기존값을 무조건 유지해야 함. 명시적으로 미래의 내가 이해를 쉽게 하기 위해 적어주었음.
        halt <= 0; //output인 halt는 기본적으로 0으로 설정하고 main_state가 HALT일때만 1로 설정. 여기다 적는 이유는 my_cycle에  맞춰서 계속 초기화하면 안되고 T_cycle에 맞춰서 main_state가 뭔지에 따라서 결정되어야 하기 때문임.
        case(main_state)
          fetch_T1: begin //T1에지, M1에지
            main_state <= fetch_T2;
            mem_state <= 1; //이렇게 PC값을 읽어 오게 됨. 메모리 입출력 할때는 mem_state 1로 바꿔주는거 잊으면 안됨.
            mem_ad_reg <= PC; //ROM은 어차피 CPU만 사용하므로 타이밍 맞출 필요가 없음. VRAM이랑 I/O register만 주의하면 됨.
            mem_r_ena_reg <= 1;
            mem_w_ena_reg <= 0;
            opcode_valid <= 0;
          end
          fetch_T2: begin //T2에지
            main_state <= fetch_T3; //한 클럭 대기. T2에지때 mem_out_reg에 opcode가 담겨서 나옴.
            opcode_valid <= 0;
          end
          fetch_T3: begin //T3에지
            main_state <= fetch_T4;
            opcode <= mem_out_reg; //opcode에 나온 명령어를 담아줌. 이 opcode에 있는 값 기준으로 디코딩과 제어신호가 생성되게 됨.
            opcode_valid <= 1; //T3에지 에서 opcode에 값이 들어가는 동시에 opcode_valid도 1로 만들어서 always @(*)문에서 제어신호가 발생하게 해줌.
            T_clk_counter <= 0;//혹시 모르니 opcode에 mem_out_reg가 저장되는 동시에 T_clk_counter도 0으로 초기화 시켜줌.
          end
          fetch_T4: begin //T4에지. next_main_state는 는 always @(*)문에서 결정해줌.
            main_state <= next_main_state;
            T_clk_counter <= T_clk_counter_next;
            if(next_main_state == fetch_T1) begin
              opcode_valid <= 0; //1 M_cycle 명령어여서 실행 완료후 fetch_T1으로 state가 변경될 예정이면 T4에지에서 opcode_valid를 0으로 설정함으로써 다음 명령어가 opcode에 정상적으로 들어갈때까지 제어신호를 차단함.
              //EI 명령어가 직전에 실행되었다면 IME는 1로 설정되고 EI_pending은 0으로 설정됨.
              IME <= (EI_pending) ? 1 : IME; //여기서 1로 설정되어도 밑의 코드에 의해 IME_off신호가 1이라면 결과적으로 IME는 0로 설정됨.
              EI_pending <= 0;
              T_clk_counter <= 0;
            end
            else if(next_main_state == INTERRUPT) begin
              opcode_valid <= 0; //1 M_cycle 명령어 실행 완료 후 INTERRUPT로 state가 변경예정이면 마찬가지로 opcode_valid를 0으로 설정해 always @(*)에서 발생하는 제어신호 차단.
              T_clk_counter <= 1;
            end
            else if((next_main_state == imm8_T1) | (next_main_state == imm16_T1) | (next_main_state == prefix_T1)) begin
              opcode_valid <= 0;
            end
            else if (next_main_state == EXECUTE) begin
              opcode_valid <= 1;//실행완료까지 더 걸리는 명령어라면 opcode_valid를 1로 유지함으로써 T_cycle_counter값과 opcode의 조합으로 제어신호들이 발생하도록 허용함.
            end
            else if(next_main_state == HALT) begin
              opcode_valid <= 0; //halt 명령어가 실행될때 opcode_valid는 0으로 바꾸어줌.
              IME <= (EI_pending) ? 1 : IME; //직전에 실행된 명령어가 EI이고 이후 HALT가 실행되는 경우. 이때 main_state가 HALT가 되는 동시에 IME가 1로 설정되야 함!
              EI_pending <= 0;
            end
          end
          EXECUTE: begin 
            main_state <= next_main_state;
            T_clk_counter <= T_clk_counter_next; //위에 이미 써져있는 문장이지만 가독성을 위해서 한번 더 적어둠.
            if(next_main_state == fetch_T1) begin //명령어가 끝났을때
              opcode_valid <= 0; //불필요한 제어신호가 발생하지 않게 차단해주고 다음 명령어가 앞으로 실행될 것임.
              T_clk_counter <= 0; //까먹고 초기화 안했을까봐 fetch_T1으로 갈때 초기화 되도록 여기 한번 더 적어둠.
              //EI 명령어가 직전에 실행되었다면 IME는 1로 설정되고 EI_pending은 0으로 설정됨.
              IME <= (EI_pending) ? 1 : IME;
              EI_pending <= 0;
            end
            else if(next_main_state == EXECUTE) begin //계속 실행해야 할때
              opcode_valid <= 1; //always @(*)문 안의 거대한 case문에서 제어신호가 T_clk_counter에 맞추어서 발생해야 하므로 그걸 계속 허용시켜 줘야 함.
            end
            else if(next_main_state == INTERRUPT) begin //실행은 끝났는데 interrupt가 일어나야 하는 경우.
              opcode_valid <= 0; //인터럽트 로직이 실행되어야 하므로 불필요한 제어신호가 발생하지 않게 차단.
              T_clk_counter <= 1;
            end
          end
          imm8_T1: begin //T1에지
            main_state <= imm8_T2;
            T_clk_counter <= 2; //2로 설정하는 이유는 always @(*)의 거대한 case문 안에서 제어신호를 발생시킬때 case(T_clk_counter) 2: 이러면 T2에지 직전에 설정할 값을 작성하는 칸으로 만들었기 떄문임. 안 햇갈리려고 이렇게 만들었음.
            mem_state <= 1;
            mem_ad_reg <= PC + 1; //PC값은 명령어 실행 제일 마지막에 증가하므로 PC + 1을 mem_ad_reg에 넣음으로써 다음 바이트를 읽게 됨.
            mem_r_ena_reg <= 1;
            mem_w_ena_reg <= 0;
            PC <= PC + 1; //나중에 PC_plus_ena로 PC값을 1 증가시킬것이므로 미리 1 증가시켜서 다음 명령어를 나중에 가르키게 해줌.
          end
          imm8_T2: begin //T2에지
            main_state <= imm8_T3;
            T_clk_counter <= 3;
          end
          imm8_T3: begin //T3에지
            main_state <= imm8_T4;
            T_clk_counter <= 4;
            opcode_valid <= 1; //fetch_T4 -> imm8_T1으로 가면서 opcode_valid가 0이 되었기 때문에 T3에지에서 다시 1로 바꾸어 줌으로써 T4에지에서 반영될 제어신호가 always @(*)문의 case문에서 발생가능하게 해줌.
            imm8_reg[7:0] <= mem_out_reg; //읽은 값을 imm8_reg에 저장해줌.
          end
          imm8_T4: begin //T4에지
            main_state <= next_main_state;
            T_clk_counter <= T_clk_counter_next;
            if(next_main_state == EXECUTE) begin
              opcode_valid <= 1;
            end
            else if(next_main_state == fetch_T1) begin
              opcode_valid <= 0;
              T_clk_counter <= 0;
              //EI 명령어가 직전에 실행되었다면 IME는 1로 설정되고 EI_pending은 0으로 설정됨.
              IME <= (EI_pending) ? 1 : IME;
              EI_pending <= 0;
            end
            else if(next_main_state == INTERRUPT) begin
              opcode_valid <= 0;
              T_clk_counter <= 1;
            end
          end
          imm16_T1: begin //T1에지 (M2 에지)
            main_state <= imm16_T2;
            T_clk_counter <= 2;
            mem_state <= 1;
            mem_ad_reg <= PC + 1;
            mem_r_ena_reg <= 1;
            mem_w_ena_reg <= 0;
            PC <= PC + 1;
          end
          imm16_T2: begin //T2에지
            main_state <= imm16_T3;
            T_clk_counter <= 3;
          end
          imm16_T3: begin //T3에지
            main_state <= imm16_T4;
            T_clk_counter <= 4;
            imm16_reg[7:0] <= mem_out_reg; //원래PC + 1에서는 하위 바이트를 얻고 원래PC + 2에서는 상위 바이트를 얻음.
          end
          imm16_T4: begin //T4에지
            main_state <= imm16_T5;
            T_clk_counter <= 5;
          end
          imm16_T5: begin //T1에지 (M3 에지)
            main_state <= imm16_T6;
            T_clk_counter <= 6;
            mem_state <= 1;
            mem_ad_reg <= PC + 1; //이 PC는 1 증가한 상태고 여기서 1 더 증가시킨 주소를 읽음.
            mem_r_ena_reg <= 1; 
            mem_w_ena_reg <= 0;
            PC <= PC + 1; //이렇게 되면 PC는 처음에서 2 증가한 상황임. 다음 opcode를 읽으려면 나중에 PC_plus_ena로 1 더 증가시켜야 함.
          end 
          imm16_T6: begin //T2에지
            main_state <= imm16_T7;
            T_clk_counter <= 7;
          end
          imm16_T7: begin //T3에지
            main_state <= imm16_T8;
            T_clk_counter <= 8;
            imm16_reg[15:8] <= mem_out_reg; //이러면 imm16_reg에 온전한 16비트값이 저장되게 됨.
            opcode_valid <= 1; //opcode_valid를 1로 만듬으로써 제어신호가 다시 활성화되게 함.
          end
          imm16_T8: begin //T4에지
            main_state <= next_main_state;
            T_clk_counter <= T_clk_counter_next;
            if(next_main_state == EXECUTE) begin
              opcode_valid <= 1;
            end
            else if(next_main_state == fetch_T1) begin
              opcode_valid <= 0;
              T_clk_counter <= 0;
              //EI 명령어가 직전에 실행되었다면 IME는 1로 설정되고 EI_pending은 0으로 설정됨.
              IME <= (EI_pending) ? 1 : IME;
              EI_pending <= 0;
            end
            else if(next_main_state == INTERRUPT) begin
              opcode_valid <= 0;
              T_clk_counter <= 1;
            end
          end
          prefix_T1: begin //T1 에지. 
            main_state <= prefix_T2;
            mem_state <= 1;
            mem_ad_reg <= PC; //PC는 T4에지에서 이미 1 증가한 상황임. 따라서 PC값을 바로 주소로 줘야함.
            mem_r_ena_reg <= 1;
            mem_w_ena_reg <= 0;
            opcode_valid <= 0; //일단 opcode_valid를 0으로 T1에지때 만들고 prefix_valid를 T3에지때 1로 만들어서 prefix instruction으로 opcode가 해석되게 해야 함.
          end
          prefix_T2: begin //T2 에지
            main_state <= prefix_T3; 
          end
          prefix_T3: begin //T3 에지
            main_state <= prefix_T4;
            opcode <= mem_out_reg; //opcode에 $CB 다음 바이트가 저장되게 됨.
            opcode_valid <= 0; //T1에지때 0으로 만들었지만 그냥 혹시모르니 한번 더 써줌.
            prefix_valid <= 1; //opcode_valid는 0으로 만들고 prefix_valid는 1로 만들어서 always@(*)문의 올바른 case문이 작동되어서 제어신호가 알맞게 생성되도록 만들었음.
            T_clk_counter <= 0; //혹시 몰라서 적어둠.
          end
          prefix_T4: begin //T4 에지
            main_state <= next_main_state;
            T_clk_counter <= T_clk_counter_next;
            if(next_main_state == fetch_T1) begin //즉 8 T-cycle(2 M-cycle) 명령어인경우. 이때 fetch_T1으로 가서 다음 명령어를 실행해야 하므로 prefix_valid와 opcode_valid를 꺼줌.
              opcode_valid <= 0;
              prefix_valid <= 0;
              T_clk_counter <= 0;
              //EI 명령어가 직전에 실행되었다면 IME는 1로 설정되고 EI_pending은 0으로 설정됨.
              IME <= (EI_pending) ? 1 : IME;
              EI_pending <= 0;
            end
            else if(next_main_state == EXECUTE_prefix) begin //즉 12 T-cycle(3 M-cycle), 16 T-cycle(4 M-cycle) 명령어인 경우. main_state는 EXECUTE_prefix로 가면서 prefix_valid는 1로 유지하고 opcode_valid는 0으로 설정.
              opcode_valid <= 0;
              prefix_valid <= 1;
            end
            else if(next_main_state == INTERRUPT) begin //즉 8 T-cycle 명령어인데 인터럽트조건을 만족한 경우. 두 valid신호 모두 꺼주고 INTERRUPT로 가줘야 함.
              opcode_valid <= 0;
              prefix_valid <= 0;
              T_clk_counter <= 1;
            end
          end
          EXECUTE_prefix: begin
            main_state <= next_main_state;
            T_clk_counter <= T_clk_counter_next; //맨위에 이미 써져있는 문장이지만 햇갈림 방지를 위해 한번 더 적어둠.
            if(next_main_state == fetch_T1) begin //실행이 끝나고 다음 명령어를 fetch해야 하는 상황일 때.
              opcode_valid <= 0;
              prefix_valid <= 0;
              T_clk_counter <= 0;
              //EI 명령어가 직전에 실행되었다면 IME는 1로 설정되고 EI_pending은 0으로 설정됨.
              IME <= (EI_pending) ? 1 : IME;
              EI_pending <= 0;
            end
            else if(next_main_state == EXECUTE_prefix) begin //계속 실행해야 하는 경우. 제어신호 발생하게 prefix_valid를 1로 유지.
              opcode_valid <= 0;
              prefix_valid <= 1;
            end
            else if(next_main_state == INTERRUPT) begin //실행이 끝났는데 인터럽트 처리 해야하는 경우.
              opcode_valid <= 0;
              prefix_valid <= 0;
              T_clk_counter <= 1;
            end
          end
          INTERRUPT: begin 
            case(T_clk_counter) //main_state를 INTERRUPT로 바꿀때는 항상 동시에 T_clk_counter도 1로 설정해 줘야 함.
              1: begin //T1 에지, M1 에지
                T_clk_counter <= 2;
                main_state <= INTERRUPT;
                IF_reg <= IF; //IF를 IF_reg에 저장해둠.
              end
              2: begin //T2 에지
                T_clk_counter <= 3;
                main_state <= INTERRUPT;
              end
              3: begin //T3 에지
                T_clk_counter <= 4;
                main_state <= INTERRUPT;
              end
              4: begin //T4 에지
                T_clk_counter <= 5;
                main_state <= INTERRUPT;
              end
              5: begin //T1 에지, M2 에지
                T_clk_counter <= 6;
                main_state <= INTERRUPT;
                IME <= 0; //IME을 꺼줌.
              end
              6: begin //T2 에지
                T_clk_counter <= 7;
                main_state <= INTERRUPT;
              end
              7: begin //T3 에지
                T_clk_counter <= 8;
                main_state <= INTERRUPT;
              end
              8: begin //T4 에지
                T_clk_counter <= 9;
                main_state <= INTERRUPT;
              end
              9: begin //T1 에지, M3 에지
                T_clk_counter <= 10;
                main_state <= INTERRUPT;
              end
              10: begin //T2 에지
                T_clk_counter <= 11;
                main_state <= INTERRUPT;
                mem_state <= 1;
                mem_w_ena_reg <= 1;
                mem_r_ena_reg <= 0;
                mem_ad_reg[15:0] <= SP - 1;
                mem_w_data_reg[7:0] <= PC[15:8]; //little endian 방식이라서 SP - 1에 MSB가 들어가고, SP - 2에 LSB가 들어간다고 함.
                SP <= SP - 1;
              end
              11: begin //T3 에지
                T_clk_counter <= 12;
                main_state <= INTERRUPT;
              end
              12: begin //T4 에지
                T_clk_counter <= 13;
                main_state <= INTERRUPT;
              end
              13: begin //T1 에지, M4 에지
                T_clk_counter <= 14;
                main_state <= INTERRUPT;
              end
              14: begin //T2 에지
                T_clk_counter <= 15;
                main_state <= INTERRUPT;
                mem_state <= 1;
                mem_w_ena_reg <= 1;
                mem_r_ena_reg <= 0;
                mem_ad_reg[15:0] <= SP - 1;
                mem_w_data_reg[7:0] <= PC[7:0]; //little endian 방식이라서 SP - 1에 MSB가 들어가고, SP - 2에 LSB가 들어간다고 함.
                SP <= SP - 1;
              end
              15: begin //T3 에지
                T_clk_counter <= 16;
                main_state <= INTERRUPT;
              end
              16: begin //T4 에지
                T_clk_counter <= 17;
                main_state <= INTERRUPT;
              end
              17: begin //T1 에지, M5 에지
                T_clk_counter <= 18;
                main_state <= INTERRUPT;
                if(IF_reg[0] & IE[0]) PC[15:0] <= 16'h0040; //VBlank interrupt
                else if(IF_reg[1] & IE[1]) PC[15:0] <= 16'h0048; //STAT interrupt
                else if(IF_reg[2] & IE[2]) PC[15:0] <= 16'h0050; //Timer interrupt
                else if(IF_reg[3] & IE[3]) PC[15:0] <= 16'h0058; //Serial interrupt
                else if(IF_reg[4] & IE[4]) PC[15:0] <= 16'h0060; //Joypad interrupt
              end
              18: begin //T2 에지
                T_clk_counter <= 19;
                main_state <= INTERRUPT;
                if(IF_reg[0] & IE[0]) irq_clear[0] <= 1; //VBlank interrupt. irq_clear 신호를 보내서 외부 모듈의 IF레지스터를 초기화 시켜줌.
                else if(IF_reg[1] & IE[1]) irq_clear[1] <= 1; //STAT interrupt
                else if(IF_reg[2] & IE[2]) irq_clear[2] <= 1; //Timer interrupt
                else if(IF_reg[3] & IE[3]) irq_clear[3] <= 1; //Serial interrupt
                else if(IF_reg[4] & IE[4]) irq_clear[4] <= 1; //Joypad interrupt
              end
              19: begin //T3 에지
                T_clk_counter <= 20;
                main_state <= INTERRUPT;
              end
              20: begin //T4 에지
                T_clk_counter <= 0;
                main_state <= fetch_T1;
              end
            endcase
          end
          HALT: begin
            halt <= 1; //main_state가 HALT이면 output인 halt는 1로 설정.
            if(((IE[4:0] & IF[4:0]) != 5'b0) && IME) begin //인터럽트 요청이 오고 IME가 1인 상황이면 
              main_state <= INTERRUPT;
              T_clk_counter <= 1;
            end
            else if (((IE & IF) != 8'b0) && !IME) begin
              main_state <= fetch_T1;
              T_clk_counter <= 0;
            end
            else begin
              main_state <= HALT;
            end
          end
          STOP: begin
            if((IE[4] & IF[4]) && IME) begin //IE[4], IF[4]는 Joypad 인터럽트임.
              main_state <= INTERRUPT;
              T_clk_counter <= 1;
            end
            else if ((IE[4] & IF[4]) && !IME) begin
              main_state <= fetch_T1;
              T_clk_counter <= 0;
            end
            else begin
              main_state <= STOP;
            end
          end
          
        endcase
        
        if(reg_w_ena) begin
          case(reg_ad)
            0: begin //아무일도 안 일어남.
            end
            1: begin //A
              A <= reg_w_data[7:0];
            end
            2: begin //F
              F <= reg_w_data[7:0] & 8'b11110000; //F[3:0]은 무조건 0으로 설정.;
            end
            3: begin //B
              B <= reg_w_data[7:0];
            end
            4: begin //C
              C <= reg_w_data[7:0];
            end
            5: begin //D
              D <= reg_w_data[7:0];
            end
            6: begin //E
              E <= reg_w_data[7:0];
            end
            7: begin //H
              H <= reg_w_data[7:0];
            end
            8: begin //L
              L <= reg_w_data[7:0];
            end
            9: begin //SP
              SP <= reg_w_data[15:0];
            end
            10: begin //PC
              PC <= reg_w_data[15:0];
            end
            11: begin //AF
              {A, F} <= reg_w_data[15:0] & 16'b1111111111110000; //F[3:0]은 무조건 0으로 설정.
            end
            12: begin //BC
              {B, C} <= reg_w_data[15:0];
            end
            13: begin //DE
              {D, E} <= reg_w_data[15:0];
            end
            14: begin //HL
              {H, L} <= reg_w_data[15:0];
            end
          endcase
          
          case(reg_ad_2)
            0: begin //아무일도 안 일어남.
            end
            1: begin //A
              A <= reg_w_data_2[7:0];
            end
            2: begin //F
              F <= reg_w_data_2[7:0] & 8'b11110000; //F[3:0]은 무조건 0으로 설정.
            end
            3: begin //B
              B <= reg_w_data_2[7:0];
            end
            4: begin //C
              C <= reg_w_data_2[7:0];
            end
            5: begin //D
              D <= reg_w_data_2[7:0];
            end
            6: begin //E
              E <= reg_w_data_2[7:0];
            end
            7: begin //H
              H <= reg_w_data_2[7:0];
            end
            8: begin //L
              L <= reg_w_data_2[7:0];
            end
            9: begin //SP
              SP <= reg_w_data_2[15:0];
            end
            10: begin //PC
              PC <= reg_w_data_2[15:0];
            end
            11: begin //AF
              {A, F} <= reg_w_data_2[15:0] & 16'b1111111111110000; //F[3:0]은 무조건 0으로 설정.
            end
            12: begin //BC
              {B, C} <= reg_w_data_2[15:0];
            end
            13: begin //DE
              {D, E} <= reg_w_data_2[15:0];
            end
            14: begin //HL
              {H, L} <= reg_w_data_2[15:0];
            end
          endcase
        end
        
        if(EI_pending_on) begin
          EI_pending <= 1;
        end
        
        if(PC_plus_ena) begin
          PC <= PC + 1; //PC_plus_ena신호가 오면 심플하게 PC값을 1 증가시킴. reg_w_ena로도 PC값을 증가시킬수 있지만 PC증가는 항상 쓰이기 때문에 편의성을 위해서 만들었음.
        end
        
        if(IME_on) begin
          IME <= 1;
        end
        else if(IME_off) begin
          IME <= 0;
        end
        
        if(tem_reg_w_ena) begin
          tem_reg[7:0] <= tem_reg_w_data[7:0];
        end
        
        if(imm8_reg_clear) begin
          imm8_reg <= 0;
        end
        
        if(imm16_reg_clear) begin
          imm16_reg <= 0;
        end
        
        if(mem_control_w_ena) begin //mem_control_w_ena, mem_control_r_ena 신호로 메모리 입출력을 할 수 있음. 이 제어신호가 제일 밑에 있기때문에 우선순위가 가장 높음. 읽기때 데이터는 mem_out_reg 에 담기고 assign문으로 mem_control_r_data와 연결되어 있기 때문에 mem_out_reg나 mem_control_r_data는 사실상 같은 변수라고 생각하면 됨.
          mem_state <= 1;
          mem_w_ena_reg <= 1;
          mem_r_ena_reg <= 0;
          mem_ad_reg[15:0] <= mem_control_ad;
          mem_w_data_reg[7:0] <= mem_control_w_data;
        end
        else if(mem_control_r_ena) begin
          mem_state <= 1;
          mem_r_ena_reg <= 1;
          mem_w_ena_reg <= 0;
          mem_ad_reg[15:0] <= mem_control_ad;
        end
        
      end //if(T_cycle_ena) 블럭의 end
    end //reset밑 else 블럭의 end
  end //always @(posedge my_clk or posedge reset) 블럭의 end
  
  always @(*) begin
    reg_w_ena = 0; //기본적으로 0으로 설정. 특정 조건 만족하는 동안에는 1로 4개 my_clk 정도 유지될 것임. T-cycle에 따라서 cpu가 동작하기 때문임.
    next_main_state = main_state; //기본적으로 현재 상태값 가지게 설정.
    PC_plus_ena = 0; //제어신호들은 기본적으로 0으로 유지되게 만들어 줘야함.
    tem_reg_w_ena = 0;  //tem_reg 제어신호 기본값 설정.
    imm8_reg_clear = 0; //imm8_reg 제어신호 기본값 설정.
    imm16_reg_clear = 0;  //imm16_reg 제어신호 기본값 설정.
    T_clk_counter_next = 0;
    IME_on = 0;
    IME_off = 0;
    EI_pending_on = 0;
    
    mem_control_w_ena = 0;
    mem_control_r_ena = 0;
    
    mem_control_w_data = 0; //mem_control_r_data는 위에 assign문으로 mem_out_reg와 바로 연결되어 있음.
    mem_control_ad = 0;
    
    a_8 = 0; 
    b_8 = 0; 
    cin_8 = 0; 
    alu_op_8 = 0;
    
    reg_ad = 0; 
    reg_w_data = 0;
    reg_ad_2 = 0;      
    reg_w_data_2 = 0;
    
    Operand_r8 = 0; //기본값 설정.
    Operand_r8_ad = 0;
    Source_r8 = 0;
    Dest_r8 = 0;
    Condition = 0;
    Operand_r16 = 0;
    Operand_r16_ad = 0;
    Dest_r16mem = 0;
    Source_r16mem = 0;
    register_r16stk = 0;
    register_r16stk_ad = 0;
    
    if((opcode[7:6] == 2'b00) && !prefix_valid) begin //block 0일때. 
      case(opcode[5:3])
        0: Operand_r8 = B;
        1: Operand_r8 = C;
        2: Operand_r8 = D;
        3: Operand_r8 = E;
        4: Operand_r8 = H;
        5: Operand_r8 = L;
     //   6: 이 값이 6일때는 (HL)로 16비트 HL의 값을 주소로하는 8비트 메모리의 값을 나타냄. 
        7: Operand_r8 = A;
      endcase
    end
    else begin //block 2, prefix 명령어일때.
      case(opcode[2:0])
        0: Operand_r8 = B;
        1: Operand_r8 = C;
        2: Operand_r8 = D;
        3: Operand_r8 = E;
        4: Operand_r8 = H;
        5: Operand_r8 = L;
     //   6: 이 값이 6일때는 (HL)로 16비트 HL의 값을 주소로하는 8비트 메모리의 값을 나타냄. 
        7: Operand_r8 = A;
      endcase
    end
    
    
    if((opcode[7:6] == 2'b00) && !prefix_valid) begin //block 0일때. opcode[5:3]에 따라서 Operand_r8_ad가 정해짐
      case(opcode[5:3]) //Operand_r8_ad는 reg_ad 값을 나타내기 위한 것임. 그래서 내가 전에 정해둔 주소값이 담김.
        0: Operand_r8_ad = 3; //B
        1: Operand_r8_ad = 4; //C
        2: Operand_r8_ad = 5; //D
        3: Operand_r8_ad = 6; //E
        4: Operand_r8_ad = 7; //H
        5: Operand_r8_ad = 8; //L
     //   6: Operand_r8_ad = ;  
        7: Operand_r8_ad = 1; //A
      endcase  
    end
    else begin //block 2, prefix일때. opcode[2:0]에 따라서 값이 정해짐.
      case(opcode[2:0]) //Operand_r8_ad는 reg_ad 값을 나타내기 위한 것임. 그래서 내가 전에 정해둔 주소값이 담김.
        0: Operand_r8_ad = 3; //B
        1: Operand_r8_ad = 4; //C
        2: Operand_r8_ad = 5; //D
        3: Operand_r8_ad = 6; //E
        4: Operand_r8_ad = 7; //H
        5: Operand_r8_ad = 8; //L
     //   6: Operand_r8_ad = ;  
        7: Operand_r8_ad = 1; //A
      endcase
    end
    
    case(opcode[5:4])
      0: begin //BC
        Operand_r16 = {B, C};
        Operand_r16_ad = 12;
      end
      1: begin //DE
        Operand_r16 = {D, E};
        Operand_r16_ad = 13;
      end
      2: begin //HL
        Operand_r16 = {H, L};
        Operand_r16_ad = 14;
      end
      3: begin //SP
        Operand_r16 = SP;
        Operand_r16_ad = 9;
      end
    endcase
    
    case(opcode[2:0])
      0: Source_r8 = B;
      1: Source_r8 = C;
      2: Source_r8 = D;
      3: Source_r8 = E;
      4: Source_r8 = H;
      5: Source_r8 = L;
      //   6: Source_r8 = ; 6일때는 (HL)인데 ld A, (HL) 이런 명령어는 2 M-cycle이라서 따로 구현해줄 예정임.
      7: Source_r8 = A;
    endcase
    
    case(opcode[5:3]) //Source_r8 같은경우에는 가르키는 레지스터를 그대로 연결해주지만, Dest_r8은 reg_w_ad에 이용할거라서 내가 전에 정해둔 레지스터 주소가 담김.
      0: Dest_r8 = 3; //B. 참고-(reg_ad) 1: A, 2: F, 3: B, 4: C, 5: D, 6: E, 7: H, 8: L, 9: SP, 10: PC, 11: AF, 12: BC, 13: DE, 14: HL
      1: Dest_r8 = 4; //C
      2: Dest_r8 = 5; //D
      3: Dest_r8 = 6; //E
      4: Dest_r8 = 7; //H
      5: Dest_r8 = 8; //L
      //   6: Dest_r8 = ; 6일때는 (HL)인데 ld (HL), A 이런 명령어는 2 M-cycle이라서 따로 구현해줄 예정임.
      7: Dest_r8 = 1; //A
    endcase
    
    case(opcode[4:3])
      0: Condition = (F[7] == 1) ? 0 : 1; //cond = nz (Non Zero). F[7](zero flag)가 1이면 0이고 0이면 1임.
      1: Condition = (F[7] == 1) ? 1 : 0; //cond = z (Zero). zero flag가 1이면 1이고 0이면 0임.
      2: Condition = (F[4] == 1) ? 0 : 1; //cond = nc (Non Carry) F[4](carry flag)가 1이면 0이고 1이면 0임.
      3: Condition = (F[4] == 1) ? 1 : 0; //cond = c (Carry) carry flag가 1이면 1이고 0이면 0임.
    endcase
    
    case(opcode[5:4])
      0: begin
        Dest_r16mem = {B, C};
        Source_r16mem = {B, C};
        register_r16stk = {B, C};
        register_r16stk_ad[7:0] = 12;
      end
      1: begin
        Dest_r16mem = {D, E};
        Source_r16mem = {D, E};
        register_r16stk = {D, E};
        register_r16stk_ad[7:0] = 13;
      end
      2: begin
        Dest_r16mem = {H, L}; //hl+
        Source_r16mem = {H, L};
        register_r16stk = {H, L};
        register_r16stk_ad[7:0] = 14;
      end
      3: begin
        Dest_r16mem = {H, L}; //hl-
        Source_r16mem = {H, L};
        register_r16stk = {A, F};
        register_r16stk_ad[7:0] = 11;
      end
    endcase
    
    
    if(opcode_valid) begin //opcode_valid가 1이어야지 opcode와 T_clk_counter에 맞는 제어신호가 발생함. 
    case(opcode[7:6]) //opcode는 처음 T3에지에서 값이 결정됨. 
      2'b00: begin //block 0
        case(opcode[2:0])
          3'b000: begin
            if(opcode[5] == 1) begin //JR cond, imm8
              case(T_clk_counter)
                0: begin //M1의 T4에지
                  next_main_state = imm8_T1; 
                  T_clk_counter_next = 1;
                end
                4: begin //M2의 T4에지. M2의 T3에지에서 imm8_reg 나와서 사용가능. 그리고 PC도 이미 1 증가한 상태임.
                  if(Condition == 1) begin //조건 만족시 계속 진행. 이렇게 되면 총 실행시간은 12 T_cycle임.
                    next_main_state = EXECUTE;
                    T_clk_counter_next = 5;
                  end
                  else begin //조건 불만족시 다음 명령어 실행함. 이때 총 실행시간은 8 T_cycle임.
                    PC_plus_ena = 1; //이때 PC를 또 1 증가시켜서 처음PC + 2로 만들어줌. 분기가 일어나는 경우는 밑에서 증가시켜줄 거임.
                    if(((IE[4:0] & IF[4:0]) != 5'b0) && IME) begin
                      next_main_state = INTERRUPT;
                      T_clk_counter_next = 1;
                    end
                    else begin
                      next_main_state = fetch_T1;
                      T_clk_counter_next = 0;
                    end
                  end
                end
                5: begin //M3의 T1에지
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 6;
                end
                6: begin //T2 에지
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 7;
                end
                7: begin //T3 에지
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 8;
                end
                8: begin //T4 에지
                  reg_w_ena = 1;
                  reg_ad = 10; //PC에 쓸거임.
                  reg_w_data[15:0] =  PC + 16'd1 + {{8{imm8_reg[7]}}, imm8_reg[7:0]};
                  if(((IE[4:0] & IF[4:0]) != 5'b0) && IME) begin
                    next_main_state = INTERRUPT;
                    T_clk_counter_next = 1;
                  end
                  else begin
                    next_main_state = fetch_T1;
                    T_clk_counter_next = 0;
                  end
                end
              endcase
            end
            else if(opcode[5] == 0) begin
              case(opcode[4:3])
                2'b00: begin //NOP, 4 T_cycle  flag: - - - -
                  PC_plus_ena = 1;
                  if(((IE[4:0] & IF[4:0]) != 5'b0) && IME) begin 
                    next_main_state = INTERRUPT;
                    T_clk_counter_next = 1;
                  end
                  else begin
                    next_main_state = fetch_T1;
                    T_clk_counter_next = 0;
                  end
                end
                2'b01: begin //LD [imm16], sp
                  case(T_clk_counter)
                    0: begin //M1의 T4에지
                      next_main_state = imm16_T1;
                      T_clk_counter_next = 1;
                    end
                    8: begin //M3의 T4에지
                      next_main_state = EXECUTE;
                      T_clk_counter_next = 9;
                    end
                    9: begin //T1에지(M4에지)
                      next_main_state = EXECUTE;
                      T_clk_counter_next = 10;
                    end
                    10: begin //T2에지
                      next_main_state = EXECUTE;
                      T_clk_counter_next = 11;
                      mem_control_w_ena = 1;
                      mem_control_ad = imm16_reg[15:0];
                      mem_control_w_data = SP[7:0]; //SP레지스터는 PC레지스터랑 똑같이 8비트 레지스터 2개로 분리 불가능하게 처음부터 reg [15:0] PC; reg [15:0] SP; 이렇게 붙여서 선언했음.
                    end
                    11: begin //T3에지
                      next_main_state = EXECUTE;
                      T_clk_counter_next = 12;
                    end
                    12: begin //T4에지
                      next_main_state = EXECUTE;
                      T_clk_counter_next = 13;
                    end
                    13: begin //T1에지(M5에지)
                      next_main_state = EXECUTE;
                      T_clk_counter_next = 14;
                    end
                    14: begin //T2에지
                      next_main_state = EXECUTE;
                      T_clk_counter_next = 15;
                      mem_control_w_ena = 1;
                      mem_control_ad = imm16_reg[15:0] + 16'd1;
                      mem_control_w_data = SP[15:8];
                    end
                    15: begin //T3에지
                      next_main_state = EXECUTE;
                      T_clk_counter_next = 16;
                    end
                    16: begin //T4에지
                      imm16_reg_clear = 1; //마지막에 imm16_reg 초기화 해줌.
                      PC_plus_ena = 1;
                      if(((IE[4:0] & IF[4:0]) != 5'b0) && IME) begin 
                        next_main_state = INTERRUPT;
                        T_clk_counter_next = 1;
                      end
                      else begin
                        next_main_state = fetch_T1;
                        T_clk_counter_next = 0;
                      end
                    end
                  endcase
                end
                2'b10: begin //STOP, 4 T_cycle  flag: - - - -
                  reg_w_ena = 1;
                  reg_ad = 10; //PC에 쓸거임.
                  reg_w_data[15:0] = PC + 2; //PC는 2 증가시켜야 함. 
                  next_main_state = STOP;
                  T_clk_counter_next = 0;
                end
                2'b11: begin //JR imm8
                  case(T_clk_counter)
                    0: begin
                      next_main_state = imm8_T1;
                      T_clk_counter_next = 1;
                    end
                    4: begin //M2의 T4에지. main_state는 imm8_T4이고 next_main_state와 T_clk_counter_next를 정해줘야 함.
                      next_main_state = EXECUTE;
                      T_clk_counter_next = 5;
                    end
                    5: begin //T1에지 (M3 에지)
                      next_main_state = EXECUTE;
                      T_clk_counter_next = 6;
                    end
                    6: begin //T2에지
                      next_main_state = EXECUTE;
                      T_clk_counter_next = 7;
                    end
                    7: begin //T3에지
                      next_main_state = EXECUTE;
                      T_clk_counter_next = 8;
                    end
                    8: begin //T4에지
                      reg_w_ena = 1;
                      reg_ad = 10; //PC에 쓸거니 10으로 설정. 주의할점이 여기서는 PC값을 단순히 1증가시키는게 아니므로 PC_plus_ena를 사용하지 않고 reg_w_ena를 사용함. 1: A, 2: F, 3: B, 4: C, 5: D, 6: E, 7: H, 8: L, 9: SP, 10: PC, 11: AF, 12: BC, 13: DE, 14: HL
                      reg_w_data[15:0] = PC + 16'd1 + {{8{imm8_reg[7]}}, imm8_reg[7:0]}; //16비트 연산인데 imm_reg은 8비트 이므로 부호확장 해줘야 함. 주의할점이 점프명령어에서는 imm8_reg를 signed라고 봐야 한다는 점임.
                      imm8_reg_clear = 1; //imm8_reg 초기화.
                      if(((IE[4:0] & IF[4:0]) != 5'b0) && IME) begin //그리고 PC같은 경우에는 다음 바이트의 imm8을 읽기위해 여기서는 미리 1 증가되어 있으므로 PC + 2로 쓰면 안됨 !!!
                        next_main_state = INTERRUPT;
                        T_clk_counter_next = 1;
                      end
                      else begin
                        next_main_state = fetch_T1;
                        T_clk_counter_next = 0;
                      end
                    end
                  endcase
                end
              endcase
            end
          end
          3'b001: begin
            if(opcode[3] == 0) begin //LD r16, imm16
              case(T_clk_counter)
                0: begin //M1의 T4 에지
                  next_main_state = imm16_T1;
                  T_clk_counter_next = 1;
                end 
                8: begin //M3의 T4 에지. 이때 상태는 imm16_T8임.
                  reg_w_ena = 1;
                  reg_ad = Operand_r16_ad; //월래 Dest_16을 만들어서 하는게 의미상 맞는데 그냥 Operand_16을 재활용할 수가 있어보여서 이렇게 구현했음.
                  reg_w_data[15:0] = imm16_reg[15:0];
                  imm16_reg_clear = 1;
                  PC_plus_ena = 1;
                  if(((IE[4:0] & IF[4:0]) != 5'b0) && IME) begin
                    next_main_state = INTERRUPT;
                    T_clk_counter_next = 1;
                  end
                  else begin
                    next_main_state = fetch_T1;
                    T_clk_counter_next = 0;
                  end
                end
              endcase
            end
            else if(opcode[3] == 1) begin //ADD hl, r16
              case(T_clk_counter)
                0: begin //T4
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 1;
                end
                1: begin //T1
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 2;
                end
                2: begin //T2
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 3;
                end
                3: begin //T3
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 4;
                end 
                4: begin //T4 에지
                  reg_w_ena = 1;
                  reg_ad = 14; //HL에 쓰기
                  reg_w_data[15:0] = Operand_r16 + {H, L};
                  reg_ad_2 = 2; //플레그 바꿔줘야 함.
                  reg_w_data_2[7:0] = {F[7], 1'b0, ({1'b0, H[3:0], L[7:0]} + {1'b0, Operand_r16[11:0]} > 13'b0111111111111), ({1'b0, H[7:0], L[7:0]} + {1'b0, Operand_r16} > 17'b01111111111111111), 4'b0000}; //16비트 연산이라서 ALU_8bit 모듈을 못써서 이렇게 작성했음. half carry는 11번 비트에서 carry가 발생했는지를 나타내고 carry는 15번 비트에서 carry가 발생했는지 나타냄. 
                  PC_plus_ena = 1;
                  if(((IE[4:0] & IF[4:0]) != 5'b0) && IME) begin
                    next_main_state = INTERRUPT;
                    T_clk_counter_next = 1;
                  end
                  else begin
                    next_main_state = fetch_T1;
                    T_clk_counter_next = 0;
                  end
                end
              endcase
            end
          end
          3'b010: begin
            if(opcode[3] == 0) begin //LD [r16mem], a
              case(T_clk_counter)
                0: begin //M1의 T4에지
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 1;
                end
                1: begin //T1 에지
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 2;
                end
                2: begin //T2 에지
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 3;
                  mem_control_w_ena = 1;
                  mem_control_ad = Dest_r16mem;
                  mem_control_w_data = A; //A값을 메모리주소 Dest_r16mem에 씀
                end
                3: begin //T3 에지
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 4;
                end
                4: begin //T4 에지
                  if(opcode[5:4] == 2) begin//HL+
                    reg_w_ena = 1;
                    reg_ad = 14; //HL에 쓰기
                    reg_w_data[15:0] = {H, L} + 16'd1;
                  end
                  else if(opcode[5:4] == 3) begin //HL-
                    reg_w_ena = 1;
                    reg_ad = 14; //HL에 쓰기
                    reg_w_data[15:0] = {H, L} - 16'd1;
                  end
                  else begin //나머지 BC, DE인 경우에는 레지스터 쓰기는 일어나지 않음
                  end
                  PC_plus_ena = 1;
                  if(((IE[4:0] & IF[4:0]) != 5'b0) && IME) begin
                    next_main_state = INTERRUPT;
                    T_clk_counter_next = 1;
                  end
                  else begin
                    next_main_state = fetch_T1;
                    T_clk_counter_next = 0;
                  end
                end
              endcase
            end
            else if(opcode[3] == 1) begin //LD a, [r16mem]
              case(T_clk_counter) 
                0: begin //M1의 T4에지
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 1;
                end
                1: begin //T1에지
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 2;
                end
                2: begin //T2에지
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 3;
                  mem_control_r_ena = 1;
                  mem_control_ad = Source_r16mem;
                end
                3: begin //T3에지
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 4;
                end
                4: begin //T4에지
                  reg_w_ena = 1;
                  reg_ad = 1; //A에 쓰게됨.
                  reg_w_data[7:0] = mem_control_r_data[7:0]; //메모리에서 읽어온 값을 A에 씀.
                  if(opcode[5:4] == 2) begin//HL+
                    reg_ad_2 = 14; //HL에 쓰기
                    reg_w_data_2 = {H, L} + 16'd1;
                  end
                  else if(opcode[5:4] == 3) begin //HL-
                    reg_ad_2 = 14; //HL에 쓰기
                    reg_w_data_2 = {H, L} - 16'd1;
                  end
                  else begin //BC거나 DE일때는 증감 없음. 
                  end
                  PC_plus_ena = 1;
                  if(((IE[4:0] & IF[4:0]) != 5'b0) && IME) begin
                    next_main_state = INTERRUPT;
                    T_clk_counter_next = 1;
                  end
                  else begin
                    next_main_state = fetch_T1;
                    T_clk_counter_next = 0;
                  end
                end
              endcase
            end
          end
          3'b011: begin
            if(opcode[3] == 0) begin //INC r16
              case(T_clk_counter) 
                0: begin //M1의 T4에지
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 1;
                end
                1: begin //T1에지
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 2;
                end
                2: begin //T2에지
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 3;
                end
                3: begin //T3에지
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 4;
                end
                4: begin //T4에지
                  reg_w_ena = 1; //이 명령어에서는 F레지스터는 바꾸지 않음!!1
                  reg_ad = Operand_r16_ad;
                  reg_w_data[15:0] = Operand_r16 + 16'd1;
                  PC_plus_ena = 1;
                  if(((IE[4:0] & IF[4:0]) != 5'b0) && IME) begin
                    next_main_state = INTERRUPT;
                    T_clk_counter_next = 1;
                  end
                  else begin
                    next_main_state = fetch_T1;
                    T_clk_counter_next = 0;
                  end
                end
              endcase
            end
            else if(opcode[3] == 1) begin //DEC r16
              case(T_clk_counter) 
                0: begin //M1의 T4에지
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 1;
                end
                1: begin //T1에지
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 2;
                end
                2: begin //T2에지
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 3;
                end
                3: begin //T3에지
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 4;
                end
                4: begin //T4에지
                  reg_w_ena = 1; //이 명령어에서는 F레지스터는 바꾸지 않음!!1
                  reg_ad = Operand_r16_ad;
                  reg_w_data[15:0] = Operand_r16 - 16'd1;
                  PC_plus_ena = 1;
                  if(((IE[4:0] & IF[4:0]) != 5'b0) && IME) begin
                    next_main_state = INTERRUPT;
                    T_clk_counter_next = 1;
                  end
                  else begin
                    next_main_state = fetch_T1;
                    T_clk_counter_next = 0;
                  end
                end
              endcase
            end
          end
          3'b100: begin //INC r8
            if(opcode[5:3] == 6) begin //inc (HL) 일때.
              case(T_clk_counter)
                0: begin //M1의 T4에지
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 1;
                end
                1: begin //M2의 T1에지
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 2;
                end
                2: begin //T2에지
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 3;
                  mem_control_r_ena = 1;
                  mem_control_ad = {H, L};
                end
                3: begin //T3에지
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 4;
                end
                4: begin //T4에지
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 5;
                end
                5: begin //M3의 T1에지
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 6;
                end
                6: begin //T2에지
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 7;
                  mem_control_w_ena = 1;
                  mem_control_ad = {H, L};
                  mem_control_w_data = mem_control_r_data[7:0] + 8'd1; //decimal(10진수)라서 d임. 1을 8비트라고 명확히 정의를 해 놓아야지 FF -> 00으로 됨.
                  tem_reg_w_ena = 1; //tem_reg에 mem_control_w_data저장. 
                  tem_reg_w_data = mem_control_w_data;
                end
                7: begin //T3에지
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 8;
                end
                8: begin //T4에지
                  reg_w_ena = 1;
                  reg_ad = 2; //F레지스터에 쓸거임.
                  reg_w_data[7:0] = {(tem_reg[7:0] == 0), 1'b0, (mem_control_r_data[3:0] == 4'b1111), F[4], 4'b0000};
                  PC_plus_ena = 1;
                  if(((IE[4:0] & IF[4:0]) != 5'b0) && IME) begin
                    next_main_state = INTERRUPT;
                    T_clk_counter_next = 1;
                  end
                  else begin
                    next_main_state = fetch_T1;
                    T_clk_counter_next = 0;
                  end
                end
              endcase
            end
            else begin
              reg_w_ena = 1;
              reg_ad = Operand_r8_ad;
              reg_w_data[7:0] = Operand_r8 + 8'd1;
              reg_ad_2 = 2; //F레지스터에 flag값 써줘야 함.
              reg_w_data_2[7:0] = {(reg_w_data[7:0] == 0), 1'b0, (Operand_r8[3:0] == 4'b1111), F[4], 4'b0000}; //carry flag는 변경 X. 그리고 half carry는 하위 4비트가 1111인 경우에 1이 됨.
              PC_plus_ena = 1; //PC 1 증가.
              if(((IE[4:0] & IF[4:0]) != 5'b0) && IME) begin //인터럽트 해야하는 경우.
                next_main_state = INTERRUPT;
                T_clk_counter_next = 1;
              end
              else begin
                next_main_state = fetch_T1;
                T_clk_counter_next = 0;
              end
            end
          end
          3'b101: begin //DEC r8
            if(opcode[5:3] == 6) begin //dec (HL) 일때.
              case(T_clk_counter)
                0: begin //M1의 T4에지
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 1;
                end
                1: begin //M2의 T1에지
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 2;
                end
                2: begin //T2에지
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 3;
                  mem_control_r_ena = 1;
                  mem_control_ad = {H, L};
                end
                3: begin //T3에지
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 4;
                end
                4: begin //T4에지
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 5;
                end
                5: begin //M3의 T1에지
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 6;
                end
                6: begin //T2에지
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 7;
                  mem_control_w_ena = 1;
                  mem_control_ad = {H, L};
                  mem_control_w_data = mem_control_r_data[7:0] - 8'd1;
                  tem_reg_w_ena = 1; //tem_reg에 mem_control_w_data저장. 
                  tem_reg_w_data = mem_control_w_data;
                end
                7: begin //T3에지
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 8;
                end
                8: begin //T4에지
                  reg_w_ena = 1;
                  reg_ad = 2; //F레지스터에 쓸거임.
                  reg_w_data[7:0] = {(tem_reg == 0), 1'b1, (mem_control_r_data[3:0] == 4'b0000), F[4], 4'b0000};
                  PC_plus_ena = 1;
                  if(((IE[4:0] & IF[4:0]) != 5'b0) && IME) begin
                    next_main_state = INTERRUPT;
                    T_clk_counter_next = 1;
                  end
                  else begin
                    next_main_state = fetch_T1;
                    T_clk_counter_next = 0;
                  end
                end
              endcase
            end
            else begin
              reg_w_ena = 1;
              reg_ad = Operand_r8_ad;
              reg_w_data[7:0] = Operand_r8 - 8'd1;
              reg_ad_2 = 2; //F레지스터에 flag값 써줘야 함.
              reg_w_data_2[7:0] = {(reg_w_data[7:0] == 0), 1'b1, (Operand_r8[3:0] == 4'b0000), F[4], 4'b0000}; //carry flag는 변경 X. 그리고 half carry는 하위 4비트가 0000인 경우에 1이 됨.
              PC_plus_ena = 1; //PC 1 증가.
              if(((IE[4:0] & IF[4:0]) != 5'b0) && IME) begin //인터럽트 해야하는 경우.
                next_main_state = INTERRUPT;
                T_clk_counter_next = 1;
              end
              else begin
                next_main_state = fetch_T1;
                T_clk_counter_next = 0;
              end
            end
          end
          3'b110: begin //LD r8, imm8 
            if(opcode[5:3] == 6) begin //ld (HL), u8  12 T_cycle 명령어.
              case(T_clk_counter)
                0: begin //M1의 T4에지
                  next_main_state = imm8_T1;
                  T_clk_counter_next = 1;
                end
                4: begin //M2의 T4에지. M2의 T3에지에서 opcode_valid가 1로 다시 바뀌면서 T_clk_counter는 4로 설정됨.
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 5;
                end
                5: begin //T1 에지 (M3 에지)
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 6;
                end
                6: begin //T2 에지
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 7;
                  mem_control_w_ena = 1;
                  mem_control_ad = {H, L};
                  mem_control_w_data = imm8_reg;
                end
                7: begin //T3 에지
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 8;
                end
                8: begin //T4 에지
                  imm8_reg_clear = 1; //명령어가 끝날때 imm8_reg를 초기화시켜둠.
                  PC_plus_ena = 1; //PC 1 증가. main_state가 imm8_T1 -> imm8_T2로 갈때 PC는 이미 1 증가해서 다시 1만 증가시켜주면 됨. 결국 T4에지에서 PC는 처음PC + 2값이 됨.
                  if(((IE[4:0] & IF[4:0]) != 5'b0) && IME) begin
                    next_main_state = INTERRUPT;
                    T_clk_counter_next = 1;
                  end
                  else begin
                    next_main_state = fetch_T1;
                    T_clk_counter_next = 0;
                  end
                end
              endcase
            end
            else begin // 8 T_cycle. Dest_r8을 여기서는 재활용할수 있음. 똑같이 opcode[5:3]이고, reg_ad를 나타내는것도 같기 때문임.
              case(T_clk_counter)
                0: begin
                  next_main_state = imm8_T1;
                  T_clk_counter_next = 1;
                end
                4: begin //M2의 T4 에지. M2의 T3에지에서 opcode_valid가 1로 다시 바뀌면서 T_clk_counter는 4로 설정됨.
                  reg_w_ena = 1;
                  reg_ad = Dest_r8; //전에 만들어둔 Dest_R8을 재활용 함.
                  reg_w_data[7:0] = imm8_reg; //imm8_reg는 M2의 T3에지에서 값이 들어갔음.
                  imm8_reg_clear = 1; //imm8_reg를 초기화해줌. 굳이 할 필요는 없지만 파형볼때 좋을라고 해둠.
                  PC_plus_ena = 1; //PC 1 증가
                  if(((IE[4:0] & IF[4:0]) != 5'b0) && IME) begin
                    next_main_state = INTERRUPT;
                    T_clk_counter_next = 1;
                  end
                  else begin
                    next_main_state = fetch_T1;
                    T_clk_counter_next = 0;
                  end
                end
              endcase
            end
          end
          3'b111: begin
            case(opcode[5:3])
              3'b000: begin //RLCA (Rotate Left Circular Accumulator)	A의 비트를 왼쪽으로 회전. 7번 비트가 0번 비트와 Carry로 동시에 들어감. flag:	0 0 0 C
                reg_w_ena = 1;
                reg_ad = 11; //AF에 쓸거임
                reg_w_data[15:0] = {A[6:0], A[7], 1'b0, 1'b0, 1'b0, A[7], 4'b0000};
                PC_plus_ena = 1; 
                if(((IE[4:0] & IF[4:0]) != 5'b0) && IME) begin
                  next_main_state = INTERRUPT; 
                  T_clk_counter_next = 1;
                end
                else begin
                  next_main_state = fetch_T1;
                  T_clk_counter_next = 0;
                end
              end
              3'b001: begin //RRCA (Rotate Right Circular Accumulator)	A의 비트를 오른쪽으로 회전. 0번 비트가 7번 비트와 Carry로 동시에 들어감. flag: 0 0 0 C
                reg_w_ena = 1;
                reg_ad = 11; //AF에 쓸거임
                reg_w_data[15:0] = {A[0], A[7:1], 1'b0, 1'b0, 1'b0, A[0], 4'b0000};
                PC_plus_ena = 1; 
                if(((IE[4:0] & IF[4:0]) != 5'b0) && IME) begin
                  next_main_state = INTERRUPT; 
                  T_clk_counter_next = 1;
                end
                else begin
                  next_main_state = fetch_T1;
                  T_clk_counter_next = 0;
                end
              end
              3'b010: begin //RLA (Rotate Left Accumulator)	A와 Carry를 포함해 9비트 회전. 7번 비트 → Carry, 원래 Carry → 0번 비트. flag: 0 0 0 C
                reg_w_ena = 1;
                reg_ad = 11; //AF에 쓸거임
                reg_w_data[15:0] = {A[6:0], F[4], 1'b0, 1'b0, 1'b0, A[7], 4'b0000};
                PC_plus_ena = 1; 
                if(((IE[4:0] & IF[4:0]) != 5'b0) && IME) begin
                  next_main_state = INTERRUPT; 
                  T_clk_counter_next = 1;
                end
                else begin
                  next_main_state = fetch_T1;
                  T_clk_counter_next = 0;
                end
              end
              3'b011: begin //RRA (Rotate Right Accumulator)	A와 Carry를 포함해 9비트 회전. 0번 비트 → Carry, 원래 Carry → 7번 비트. flag: 0 0 0 C
                reg_w_ena = 1;
                reg_ad = 11; //AF에 쓸거임
                reg_w_data[15:0] = {F[4], A[7:1], 1'b0, 1'b0, 1'b0, A[0], 4'b0000};
                PC_plus_ena = 1; 
                if(((IE[4:0] & IF[4:0]) != 5'b0) && IME) begin
                  next_main_state = INTERRUPT; 
                  T_clk_counter_next = 1;
                end
                else begin
                  next_main_state = fetch_T1;
                  T_clk_counter_next = 0;
                end
              end
              3'b100: begin //DAA (Decimal Adjust Accumulator)	이진수 덧셈/뺄셈 결과를 BCD(10진수 표기법) 형식에 맞게 보정함. flag: Z - 0 C
                tem_reg_w_ena = 0; //위에 있지만 그냥 한번 더 적어줌.
                tem_reg_w_data = 0; //이미 tem_reg_w_ena = 0이기 때문에 아무일도 일어나지 않고 그냥 임시로 사용할 변수로 tem_reg_w_data를 사용했음. 새로 선언하기 귀찮았기 때문임.
                reg_w_ena = 1;
                reg_ad = 1; //A에 쓸거임.
                reg_ad_2 = 2; //F에 쓸거임.
                if(F[6] == 0) begin //subtraction flag가 0일때. 즉 전 연산이 더하기일때.
                  reg_w_data_2[4] = F[4]; //기본값 설정. 아래 조건문을 지나면서 reg_w_data_2[4]가 바뀔수 있음.
                  if(F[5] || (A[3:0] > 9)) begin
                    tem_reg_w_data = tem_reg_w_data + 8'h06; //tem_reg_w_data는 그냥 adjustment로 사용됨. 어차피 blocking이기 때문에 이렇게 해도 됨.
                  end
                  if(F[4] || (A[7:0] > 8'h99)) begin
                    tem_reg_w_data = tem_reg_w_data + 8'h60;
                    reg_w_data_2[4] = 1; //carry flag를 1로 set함.
                  end
                  reg_w_data[7:0] = A + tem_reg_w_data;
                  reg_w_data_2[7:5] = {(reg_w_data[7:0] == 0), F[6], 1'b0};
                  reg_w_data_2[3:0] = 4'b0000;
                end
                else if(F[6] == 1) begin //subtraction flag가 1일때. 즉 전 연산이 빼기일때.
                  if(F[5]) begin
                    tem_reg_w_data = tem_reg_w_data + 8'h06;
                  end
                  if(F[4]) begin
                    tem_reg_w_data = tem_reg_w_data + 8'h60;
                  end
                  reg_w_data[7:0] = A - tem_reg_w_data;
                  reg_w_data_2[7:0] = {(reg_w_data[7:0] == 0), F[6], 1'b0, F[4], 4'b0000};
                end
                PC_plus_ena = 1; //PC 1 증가.
                if(((IE[4:0] & IF[4:0]) != 5'b0) && IME) begin
                  next_main_state = INTERRUPT; 
                  T_clk_counter_next = 1;
                end
                else begin
                  next_main_state = fetch_T1;
                  T_clk_counter_next = 0;
                end
              end
              3'b101: begin //CPL (Complement Accumulator)	A 레지스터의 모든 비트를 반전(1의 보수). A = ~A 와 같음. flag: - 1 1 -
                reg_w_ena = 1;
                reg_ad = 11; //AF에 쓸거임
                reg_w_data[15:0] = {~A[7:0], F[7], 1'b1, 1'b1, F[4], 4'b0000};
                PC_plus_ena = 1; 
                if(((IE[4:0] & IF[4:0]) != 5'b0) && IME) begin
                  next_main_state = INTERRUPT; 
                  T_clk_counter_next = 1;
                end
                else begin
                  next_main_state = fetch_T1;
                  T_clk_counter_next = 0;
                end
              end
              3'b110: begin //SCF (Set Carry Flag)	Carry 플래그를 강제로 1로 세트함. flag: - 0 0 1
                reg_w_ena = 1;
                reg_ad = 2; //F에 쓸거임
                reg_w_data[7:0] = {F[7], 1'b0, 1'b0, 1'b1, 4'b0000};
                PC_plus_ena = 1; 
                if(((IE[4:0] & IF[4:0]) != 5'b0) && IME) begin
                  next_main_state = INTERRUPT; 
                  T_clk_counter_next = 1;
                end
                else begin
                  next_main_state = fetch_T1;
                  T_clk_counter_next = 0;
                end
              end
              3'b111: begin //CCF (Complement Carry Flag)	Carry 플래그 값을 뒤집음 (0이면 1로, 1이면 0으로). flag: - 0 0 C
                reg_w_ena = 1;
                reg_ad = 2; //F에 쓸거임
                reg_w_data[7:0] = {F[7], 1'b0, 1'b0, !F[4], 4'b0000};
                PC_plus_ena = 1; 
                if(((IE[4:0] & IF[4:0]) != 5'b0) && IME) begin
                  next_main_state = INTERRUPT; 
                  T_clk_counter_next = 1;
                end
                else begin
                  next_main_state = fetch_T1;
                  T_clk_counter_next = 0;
                end
              end
            endcase
          end
        endcase
      end
      2'b01: begin //block 1
        if(opcode == 8'b01110110) begin //halt 일때
          PC_plus_ena = 1; //PC는 조건 상관없이 일단 미리 증가시켜줌.
          if(((IE[4:0] & IF[4:0]) != 5'b0) && IME) begin //(IE & IF)가 0이 아니고 IME가 1일때
            next_main_state = INTERRUPT; //IME가 1이므로 인터럽트 핸들러를 실행시켜야 함.
            T_clk_counter_next = 1;
          end
          else if(((IE & IF) != 8'b0) && !IME) begin //else if이므로 (IE & IF)가 0이 아니고 IME가 0일때
            next_main_state = fetch_T1; //IME가 0이므로 인터럽트 핸들러를 실행하지 않고 바로 다음 명령어를 실행함.
            T_clk_counter_next = 0;
          end
          else begin //일반적인 경우.
            next_main_state = HALT; //HALT 상태가 되면서 인터럽트가 일어날때까지 무한 대기에 들어가게 됨.
            T_clk_counter_next = 0; 
          end
        end
        else begin //ld r8, r8
          if(opcode[2:0] == 6) begin //ld r8, (HL). 2 M-cycle이라서 따로 구현해줄 예정.
            case(T_clk_counter)
              0: begin //T_clk_counter의 초기값. 
                T_clk_counter_next = 1; //T4에지에서 T_clk_counter는 1이 됨.
                next_main_state = EXECUTE; //T4에지에서 main_state는 EXECUTE가 됨.
              end
              1: begin //T4에지에서 T_clk_counter가 1이 됨. 여기 제어신호는 T1에지에서 반영됨.
                T_clk_counter_next = 2;
                next_main_state = EXECUTE;
              end
              2: begin //T2에지
                T_clk_counter_next = 3;
                next_main_state = EXECUTE;
                mem_control_r_ena = 1;
                mem_control_ad = {H, L}; //HL에 담겨있는 값을 메모리 주소로 봐서 값을 읽어와야 함.
              end
              3: begin //T3에지
                T_clk_counter_next = 4;
                next_main_state = EXECUTE;
              end
              4: begin //T4에지
                reg_w_ena = 1;
                reg_ad = Dest_r8;
                reg_w_data[7:0] = mem_control_r_data; //T3에지에서 mem_out_reg에 값이 저장되고 그걸 T4에지에서 레지스터에 저장시켜줌. 아 그리고 reg_w_data[7:0] 에서 [7:0] 쓰는거 필수임. 8비트 쓸거면 [7:0] 16비트면 reg_w_data[15:0] 이렇게 해야함. 
                PC_plus_ena = 1; //PC 1 증가.
                if(((IE[4:0] & IF[4:0]) != 5'b0) && IME) begin //인터럽트 처리를 위한 if-else 문
                  next_main_state = INTERRUPT;
                  T_clk_counter_next = 1;
                end
                else begin
                  next_main_state = fetch_T1;
                  T_clk_counter_next = 0;
                end
              end
            endcase
          end
          else if(opcode[5:3] == 6) begin //ld (HL), r8. 마찬가지로 2 M-cycle로 따로 구현해줄 예정.
            case(T_clk_counter)
              0: begin //T_clk_counter의 초기값. 처음 opcode를 디코딩하면서 여기코드가 먼저 실행됨. T4에지.
                T_clk_counter_next = 1;
                next_main_state = EXECUTE;
              end
              1: begin //T1 에지
                T_clk_counter_next = 2;
                next_main_state = EXECUTE;
              end
              2: begin //T2 에지
                T_clk_counter_next = 3;
                next_main_state = EXECUTE;
                mem_control_w_ena = 1;
                mem_control_w_data = Source_r8;
                mem_control_ad = {H, L};
              end
              3: begin //T3 에지
                T_clk_counter_next = 4;
                next_main_state = EXECUTE;
              end
              4: begin //T4 에지
                PC_plus_ena = 1; //PC 증가.
                if(((IE[4:0] & IF[4:0]) != 5'b0) && IME) begin //인터럽트 처리를 위한 if-else 문
                  next_main_state = INTERRUPT;
                  T_clk_counter_next = 1;
                end
                else begin
                  next_main_state = fetch_T1;
                  T_clk_counter_next = 0;
                end
              end
            endcase
          end
          else begin //ld r8, r8. 단 Source_r8, Dest_r8 모두 (HL)이 아닌 경우로 1 M-cycle임.
            reg_w_ena = 1; //참고로 F레지스터는 이 명령어에서는 unmodified라서 쓰기를 안함.
            reg_ad = Dest_r8;
            reg_w_data[7:0] = Source_r8;
            PC_plus_ena = 1; //PC 1 증가 신호
            if(((IE[4:0] & IF[4:0]) != 5'b0) && IME) begin //인터럽트 검사.
              next_main_state = INTERRUPT;
              T_clk_counter_next = 1; //인터럽트가 일어날때 T4에지에서 T_clk_counter는 1로 갱신되게 됨. 평소에는 0임.
             end
             else begin
               next_main_state = fetch_T1; //T4에지에서 state는 fetch_T1으로 변하면서 T1에지에서 다음 명령어 실행이 시작되게 됨.
             end
          end
        end
      end
      2'b10: begin //block 2, 8-bit arithmetic 명령어들임
        case(opcode[5:3])
          3'b000: begin //ADD a, r8. 즉 A에 A + r8이 저장됨.
            if(opcode[2:0] == 6) begin //즉, add A, (HL) 이 명령어는 메모리에서 값을 읽어와야 해서 8T가 걸림
              case(T_clk_counter)
                0: begin //T4 에지
                  T_clk_counter_next = 1; 
                  next_main_state = EXECUTE;
                end
                1: begin //T1 에지
                  T_clk_counter_next = 2; 
                  next_main_state = EXECUTE;
                end
                2: begin //T2 에지
                  T_clk_counter_next = 3;
                  next_main_state = EXECUTE;
                  mem_control_r_ena = 1;
                  mem_control_ad = {H, L};
                end
                3: begin //T3 에지
                  T_clk_counter_next = 4;
                  next_main_state = EXECUTE;
                end
                4: begin //T4 에지
                  a_8 = A;
                  b_8 = mem_control_r_data;
                  cin_8 = 0;
                  alu_op_8 = 0;
                  reg_w_ena = 1; //레지스터 쓰기
                  reg_ad = 11; //AF에 쓸거기 때문에 11로 설정.
                  reg_w_data[15:0] = {alu_result_8[7:0], flag_8[3:0], 4'b0000};
                  PC_plus_ena = 1; //PC 1 증가 신호      
                  if(((IE[4:0] & IF[4:0]) != 5'b0) && IME) begin //인터럽트 처리를 위한 if-else 문
                    next_main_state = INTERRUPT;
                    T_clk_counter_next = 1;
                  end
                  else begin
                    next_main_state = fetch_T1;
                    T_clk_counter_next = 0;
                  end
                end
              endcase
            end //add A, (HL) 구현 end
            else begin
              a_8 = A;
              b_8 = Operand_r8;
              cin_8 = 0;
              alu_op_8 = 0; //0이면 더하기임.
              reg_w_ena = 1;
              reg_w_data[15:0] = {alu_result_8[7:0], flag_8[3:0], 4'b0000}; //A에는 alu_result_8을 쓰고, F레지스터를 바꿔줌.
              reg_ad = 11; //AF에 쓸거임. 
              PC_plus_ena = 1; //PC 1 증가 신호
              if(((IE[4:0] & IF[4:0]) != 5'b0) && IME) begin //인터럽트 검사. 인터럽트가 없으면 fetch_T1으로 main_state를 바꾸고 있다면 INTERRUPT로 바꿈.
                next_main_state = INTERRUPT;
                T_clk_counter_next = 1; //인터럽트가 일어날때 T4에지에서 T_clk_counter는 1로 갱신되게 됨. 
              end
              else begin
                next_main_state = fetch_T1; //T4에지에서 state는 fetch_T1으로 변하면서 다음 명령어가 실행되게 됨.
              end
            end
          end //3'b000 end
          3'b001: begin //ADC a, r8 (Add with Carry). A에 A + r8 + carry가 저장됨.
            if(opcode[2:0] == 6) begin //즉, adc A, (HL). 이거는 메모리 읽기가 있어서 따로 처리해줘야 함.
              case(T_clk_counter)
                0: begin //T4 에지
                  T_clk_counter_next = 1; 
                  next_main_state = EXECUTE;
                end
                1: begin //T1 에지
                  T_clk_counter_next = 2; 
                  next_main_state = EXECUTE;
                end
                2: begin //T2 에지
                  T_clk_counter_next = 3;
                  next_main_state = EXECUTE;
                  mem_control_r_ena = 1;
                  mem_control_ad = {H, L};
                end
                3: begin //T3 에지
                  T_clk_counter_next = 4;
                  next_main_state = EXECUTE;
                end
                4: begin //T4 에지
                  a_8 = A;
                  b_8 = mem_control_r_data;
                  cin_8 = F[4]; //F[4]는 carry flag 값임
                  alu_op_8 = 0; //더하기
                  reg_w_ena = 1;
                  reg_ad = 11; //AF에 쓸거기 때문에 11로 설정.
                  reg_w_data[15:0] = {alu_result_8[7:0], flag_8[3:0], 4'b0000};
                  PC_plus_ena = 1; //PC 1 증가 신호      
                  if(((IE[4:0] & IF[4:0]) != 5'b0) && IME) begin //인터럽트 처리를 위한 if-else 문
                    next_main_state = INTERRUPT;
                    T_clk_counter_next = 1;
                  end
                  else begin
                    next_main_state = fetch_T1;
                    T_clk_counter_next = 0;
                  end
                end
              endcase
            end
            else begin
              a_8 = A;
              b_8 = Operand_r8;
              cin_8 = F[4]; //F[4]는 carry flag 값임
              alu_op_8 = 0; //0이면 더하기임.
              reg_w_ena = 1;
              reg_w_data[15:0] = {alu_result_8[7:0], flag_8[3:0], 4'b0000}; //A에는 alu_result_8을 쓰고, F레지스터를 바꿔줌.
              reg_ad = 11; //AF에 쓸거임. 
              PC_plus_ena = 1; //PC 1 증가 신호      
              if(((IE[4:0] & IF[4:0]) != 5'b0) && IME) begin //인터럽트 검사. 인터럽트가 없으면 fetch_T1으로 main_state를 바꾸고 있다면 INTERRUPT로 바꿈.
                next_main_state = INTERRUPT;
                T_clk_counter_next = 1; //인터럽트가 일어날때 T4에지에서 T_clk_counter는 1로 갱신되게 됨. 
              end
              else begin
                next_main_state = fetch_T1; //T4에지에서 state는 fetch_T1으로 변하면서 다음 명령어가 실행되게 됨.
              end
            end
          end 
          3'b010: begin //SUB a, r8.
            if(opcode[2:0] == 6) begin //이때는 sub A, (HL)
              case(T_clk_counter)
                0: begin //T4 에지
                  T_clk_counter_next = 1; 
                  next_main_state = EXECUTE;
                end
                1: begin //T1 에지
                  T_clk_counter_next = 2; 
                  next_main_state = EXECUTE;
                end
                2: begin //T2 에지
                  T_clk_counter_next = 3;
                  next_main_state = EXECUTE;
                  mem_control_r_ena = 1;
                  mem_control_ad = {H, L};
                end
                3: begin //T3 에지
                  T_clk_counter_next = 4;
                  next_main_state = EXECUTE;
                end
                4: begin //T4 에지
                  a_8 = A;
                  b_8 = mem_control_r_data;
                  cin_8 = 0; 
                  alu_op_8 = 1; //빼기
                  reg_w_ena = 1;
                  reg_ad = 11; //AF에 쓸거기 때문에 11로 설정.
                  reg_w_data[15:0] = {alu_result_8[7:0], flag_8[3:0], 4'b0000};
                  PC_plus_ena = 1; //PC 1 증가 신호      
                  if(((IE[4:0] & IF[4:0]) != 5'b0) && IME) begin //인터럽트 처리를 위한 if-else 문
                    next_main_state = INTERRUPT;
                    T_clk_counter_next = 1;
                  end
                  else begin
                    next_main_state = fetch_T1;
                    T_clk_counter_next = 0;
                  end
                end
              endcase
            end
            else begin 
              a_8 = A;
              b_8 = Operand_r8;
              cin_8 = 0; 
              alu_op_8 = 1; //1이면 빼기임.
              reg_w_ena = 1;
              reg_w_data[15:0] = {alu_result_8[7:0], flag_8[3:0], 4'b0000}; //A에는 alu_result_8을 쓰고, F레지스터를 바꿔줌.
              reg_ad = 11; //AF에 쓸거임. 
              PC_plus_ena = 1; //PC 1 증가 신호      
              if(((IE[4:0] & IF[4:0]) != 5'b0) && IME) begin //인터럽트 검사. 인터럽트가 없으면 fetch_T1으로 main_state를 바꾸고 있다면 INTERRUPT로 바꿈.
                next_main_state = INTERRUPT;
                T_clk_counter_next = 1; //인터럽트가 일어날때 T4에지에서 T_clk_counter는 1로 갱신되게 됨. 
              end
              else begin
                next_main_state = fetch_T1; //T4에지에서 state는 fetch_T1으로 변하면서 다음 명령어가 실행되게 됨.
              end
            end
          end
          3'b011: begin //SBC a, r8 (Subtract with Carry).
            if(opcode[2:0] == 6) begin //이때는 sbc A, (HL)
              case(T_clk_counter)
                0: begin //T4 에지
                  T_clk_counter_next = 1; 
                  next_main_state = EXECUTE;
                end
                1: begin //T1 에지
                  T_clk_counter_next = 2; 
                  next_main_state = EXECUTE;
                end
                2: begin //T2 에지
                  T_clk_counter_next = 3;
                  next_main_state = EXECUTE;
                  mem_control_r_ena = 1;
                  mem_control_ad = {H, L};
                end
                3: begin //T3 에지
                  T_clk_counter_next = 4;
                  next_main_state = EXECUTE;
                end
                4: begin //T4 에지
                  a_8 = A;
                  b_8 = mem_control_r_data;
                  cin_8 = F[4]; //F[4]는 carry flag 값임
                  alu_op_8 = 1; //빼기
                  reg_w_ena = 1;
                  reg_ad = 11; //AF에 쓸거기 때문에 11로 설정.
                  reg_w_data[15:0] = {alu_result_8[7:0], flag_8[3:0], 4'b0000};
                  PC_plus_ena = 1; //PC 1 증가 신호      
                  if(((IE[4:0] & IF[4:0]) != 5'b0) && IME) begin //인터럽트 처리를 위한 if-else 문
                    next_main_state = INTERRUPT;
                    T_clk_counter_next = 1;
                  end
                  else begin
                    next_main_state = fetch_T1;
                    T_clk_counter_next = 0;
                  end
                end
              endcase
            end
            else begin
              a_8 = A;
              b_8 = Operand_r8;
              cin_8 = F[4]; //F[4]는 carry flag 값임
              alu_op_8 = 1; //1이면 빼기임.
              reg_w_ena = 1;
              reg_w_data[15:0] = {alu_result_8[7:0], flag_8[3:0], 4'b0000}; //A에는 alu_result_8을 쓰고, F레지스터를 바꿔줌.
              reg_ad = 11; //AF에 쓸거임. 
              PC_plus_ena = 1; //PC 1 증가 신호      
              if(((IE[4:0] & IF[4:0]) != 5'b0) && IME) begin //인터럽트 검사. 인터럽트가 없으면 fetch_T1으로 main_state를 바꾸고 있다면 INTERRUPT로 바꿈.
                next_main_state = INTERRUPT;
                T_clk_counter_next = 1; //인터럽트가 일어날때 T4에지에서 T_clk_counter는 1로 갱신되게 됨. 
              end
              else begin
                next_main_state = fetch_T1; //T4에지에서 state는 fetch_T1으로 변하면서 다음 명령어가 실행되게 됨.
              end
            end
          end
          3'b100: begin //AND a, r8.
            if(opcode[2:0] == 6) begin //이때 and A, (HL)
              case(T_clk_counter)
                0: begin //T4 에지
                  T_clk_counter_next = 1; 
                  next_main_state = EXECUTE;
                end
                1: begin //T1 에지
                  T_clk_counter_next = 2; 
                  next_main_state = EXECUTE;
                end
                2: begin //T2 에지
                  T_clk_counter_next = 3;
                  next_main_state = EXECUTE;
                  mem_control_r_ena = 1;
                  mem_control_ad = {H, L};
                end
                3: begin //T3 에지
                  T_clk_counter_next = 4;
                  next_main_state = EXECUTE;
                end
                4: begin //T4 에지
                  a_8 = A;
                  b_8 = mem_control_r_data;
                  cin_8 = 0;
                  alu_op_8 = 2; //AND 연산
                  reg_w_ena = 1;
                  reg_ad = 11; //AF에 쓸거기 때문에 11로 설정.
                  reg_w_data[15:0] = {alu_result_8[7:0], flag_8[3:0], 4'b0000};
                  PC_plus_ena = 1; //PC 1 증가 신호      
                  if(((IE[4:0] & IF[4:0]) != 5'b0) && IME) begin //인터럽트 처리를 위한 if-else 문
                    next_main_state = INTERRUPT;
                    T_clk_counter_next = 1;
                  end
                  else begin
                    next_main_state = fetch_T1;
                    T_clk_counter_next = 0;
                  end
                end
              endcase
            end
            else begin
              a_8 = A;
              b_8 = Operand_r8;
              cin_8 = 0; //어차피 and연산에는 반영안되서 그냥 0으로 일단 설정함.
              alu_op_8 = 2; //2이면 AND 연산임.
              reg_w_ena = 1;
              reg_w_data[15:0] = {alu_result_8[7:0], flag_8[3:0], 4'b0000}; //A에는 alu_result_8을 쓰고, F레지스터를 바꿔줌.
              reg_ad = 11; //AF에 쓸거임. 
              PC_plus_ena = 1; //PC 1 증가 신호      
              if(((IE[4:0] & IF[4:0]) != 5'b0) && IME) begin //인터럽트 검사. 인터럽트가 없으면 fetch_T1으로 main_state를 바꾸고 있다면 INTERRUPT로 바꿈.
                next_main_state = INTERRUPT;
                T_clk_counter_next = 1; //인터럽트가 일어날때 T4에지에서 T_clk_counter는 1로 갱신되게 됨. 
              end
              else begin
                next_main_state = fetch_T1; //T4에지에서 state는 fetch_T1으로 변하면서 다음 명령어가 실행되게 됨.
              end
            end
          end
          3'b101: begin //XOR a, r8.
            if(opcode[2:0] == 6) begin //xor A, (HL)일때
              case(T_clk_counter)
                0: begin //T4 에지
                  T_clk_counter_next = 1; 
                  next_main_state = EXECUTE;
                end
                1: begin //T1 에지
                  T_clk_counter_next = 2; 
                  next_main_state = EXECUTE;
                end
                2: begin //T2 에지
                  T_clk_counter_next = 3;
                  next_main_state = EXECUTE;
                  mem_control_r_ena = 1;
                  mem_control_ad = {H, L};
                end
                3: begin //T3 에지
                  T_clk_counter_next = 4;
                  next_main_state = EXECUTE;
                end
                4: begin //T4 에지
                  a_8 = A;
                  b_8 = mem_control_r_data;
                  cin_8 = 0; 
                  alu_op_8 = 3; //XOR 연산
                  reg_w_ena = 1;
                  reg_ad = 11; //AF에 쓸거기 때문에 11로 설정.
                  reg_w_data[15:0] = {alu_result_8[7:0], flag_8[3:0], 4'b0000};
                  PC_plus_ena = 1; //PC 1 증가 신호      
                  if(((IE[4:0] & IF[4:0]) != 5'b0) && IME) begin //인터럽트 처리를 위한 if-else 문
                    next_main_state = INTERRUPT;
                    T_clk_counter_next = 1;
                  end
                  else begin
                    next_main_state = fetch_T1;
                    T_clk_counter_next = 0;
                  end
                end
              endcase
            end
            else begin
              a_8 = A;
              b_8 = Operand_r8;
              cin_8 = 0; //어차피 연산에는 반영안되서 그냥 0으로 일단 설정함.
              alu_op_8 = 3; //3이면 XOR 연산임.
              reg_w_ena = 1;
              reg_w_data[15:0] = {alu_result_8[7:0], flag_8[3:0], 4'b0000}; //A에는 alu_result_8을 쓰고, F레지스터를 바꿔줌.
              reg_ad = 11; //AF에 쓸거임. 
              PC_plus_ena = 1; //PC 1 증가 신호      
              if(((IE[4:0] & IF[4:0]) != 5'b0) && IME) begin //인터럽트 검사. 인터럽트가 없으면 fetch_T1으로 main_state를 바꾸고 있다면 INTERRUPT로 바꿈.
                next_main_state = INTERRUPT;
                T_clk_counter_next = 1; //인터럽트가 일어날때 T4에지에서 T_clk_counter는 1로 갱신되게 됨. 
              end
              else begin
                next_main_state = fetch_T1; //T4에지에서 state는 fetch_T1으로 변하면서 다음 명령어가 실행되게 됨.
              end
            end
          end
          3'b110: begin //OR a, r8.
            if(opcode[2:0] == 6) begin //이때 or A, (HL)
              case(T_clk_counter)
                0: begin //T4 에지
                  T_clk_counter_next = 1; 
                  next_main_state = EXECUTE;
                end
                1: begin //T1 에지
                  T_clk_counter_next = 2; 
                  next_main_state = EXECUTE;
                end
                2: begin //T2 에지
                  T_clk_counter_next = 3;
                  next_main_state = EXECUTE;
                  mem_control_r_ena = 1;
                  mem_control_ad = {H, L};
                end
                3: begin //T3 에지
                  T_clk_counter_next = 4;
                  next_main_state = EXECUTE;
                end
                4: begin //T4 에지
                  a_8 = A;
                  b_8 = mem_control_r_data;
                  cin_8 = 0; 
                  alu_op_8 = 4; //OR연산
                  reg_w_ena = 1;
                  reg_ad = 11; //AF에 쓸거기 때문에 11로 설정.
                  reg_w_data[15:0] = {alu_result_8[7:0], flag_8[3:0], 4'b0000};
                  PC_plus_ena = 1; //PC 1 증가 신호      
                  if(((IE[4:0] & IF[4:0]) != 5'b0) && IME) begin //인터럽트 처리를 위한 if-else 문
                    next_main_state = INTERRUPT;
                    T_clk_counter_next = 1;
                  end
                  else begin
                    next_main_state = fetch_T1;
                    T_clk_counter_next = 0;
                  end
                end
              endcase
            end
            else begin
              a_8 = A;
              b_8 = Operand_r8;
              cin_8 = 0; //어차피 연산에는 반영안되서 그냥 0으로 일단 설정함.
              alu_op_8 = 4; //4이면 OR 연산임.
              reg_w_ena = 1;
              reg_w_data[15:0] = {alu_result_8[7:0], flag_8[3:0], 4'b0000}; //A에는 alu_result_8을 쓰고, F레지스터를 바꿔줌.
              reg_ad = 11; //AF에 쓸거임. 
              PC_plus_ena = 1; //PC 1 증가 신호      
              if(((IE[4:0] & IF[4:0]) != 5'b0) && IME) begin //인터럽트 검사. 인터럽트가 없으면 fetch_T1으로 main_state를 바꾸고 있다면 INTERRUPT로 바꿈.
                next_main_state = INTERRUPT;
                T_clk_counter_next = 1; //인터럽트가 일어날때 T4에지에서 T_clk_counter는 1로 갱신되게 됨. 
              end
              else begin
                next_main_state = fetch_T1; //T4에지에서 state는 fetch_T1으로 변하면서 다음 명령어가 실행되게 됨.
              end
            end
          end
          3'b111: begin //CP a, r8 (Compare).
            if(opcode[2:0] == 6) begin //cp A, (HL) 일때
              case(T_clk_counter)
                0: begin //T4 에지
                  T_clk_counter_next = 1; 
                  next_main_state = EXECUTE;
                end
                1: begin //T1 에지
                  T_clk_counter_next = 2; 
                  next_main_state = EXECUTE;
                end
                2: begin //T2 에지
                  T_clk_counter_next = 3;
                  next_main_state = EXECUTE;
                  mem_control_r_ena = 1;
                  mem_control_ad = {H, L};
                end
                3: begin //T3 에지
                  T_clk_counter_next = 4;
                  next_main_state = EXECUTE;
                end
                4: begin //T4 에지
                  a_8 = A;
                  b_8 = mem_control_r_data;
                  cin_8 = 0; 
                  alu_op_8 = 1; //빼기연산이 수행됨. 그러나 결과는 A에 반영되지 않고 F만 변경됨.
                  reg_w_ena = 1;
                  reg_ad = 2; //F에만 쓸거기 때문에 2로 설정.
                  reg_w_data[7:0] = {flag_8[3:0], 4'b0000};
                  PC_plus_ena = 1; //PC 1 증가 신호      
                  if(((IE[4:0] & IF[4:0]) != 5'b0) && IME) begin //인터럽트 처리를 위한 if-else 문
                    next_main_state = INTERRUPT;
                    T_clk_counter_next = 1;
                  end
                  else begin
                    next_main_state = fetch_T1;
                    T_clk_counter_next = 0;
                  end
                end
              endcase
            end
            else begin
              a_8 = A;
              b_8 = Operand_r8;
              cin_8 = 0; 
              alu_op_8 = 1; //내부적으로는 빼기 연산을 실행하지만 결과값은 저장되지 않고 플레그만 바뀜.
              reg_w_ena = 1;
              reg_w_data[7:0] = {flag_8[3:0], 4'b0000}; //A에는 값을 쓰지않고, F레지스터만 바꿔줌.
              reg_ad = 2; //F에만 쓸거라서 2로 설정함.
              PC_plus_ena = 1; //PC 1 증가 신호      
              if(((IE[4:0] & IF[4:0]) != 5'b0) && IME) begin //인터럽트 검사. 인터럽트가 없으면 fetch_T1으로 main_state를 바꾸고 있다면 INTERRUPT로 바꿈.
                next_main_state = INTERRUPT;
                T_clk_counter_next = 1; //인터럽트가 일어날때 T4에지에서 T_clk_counter는 1로 갱신되게 됨. 
              end
              else begin
                next_main_state = fetch_T1; //T4에지에서 state는 fetch_T1으로 변하면서 다음 명령어가 실행되게 됨.
              end
            end
          end
         endcase
      end
      2'b11: begin //block 3
`include "block3_decoder.svh" //너무 길어져서 따로 파일을 만들어서 작성함.
      end
    endcase //case(opcode[7:6]) 문의 endcase
    end //if(opcode_valid) 문의 end
    
`include "prefix_decoder.svh" //prefix 명령어 디코딩 부분은 파일이 너무 길어져서 edaplayground에서 저장이 안되서 prefix_decoder.sv로 옮겼음.
    

    
  end //always @(*) 블럭의 end
  
  
endmodule







module ALU_8bit(
  input [7:0] a,
  input [7:0] b,
  input [4:0] alu_op, //더하기, 빼기 등의 연산종류 나타냄. 여기서는 0이면 더하기, 1이면 빼기로 가정함.
  input cin, //Carry In
  output reg [3:0] flag, //{Zero flag(Z), Subtraction flag(N), Half carry flag(H), Carry flag(C)}
  output reg [7:0] result

);
  reg [8:0] tem9; //9비트 임시값. carry 값 알기 위해 필요함.
  reg [4:0] tem5; //5비트 임시값. half carry 값 알기 위해 필요함.
  always @(*) begin
    case(alu_op)
      0: begin //더하기
        result[7:0] = a[7:0] + b[7:0] + {7'b0, cin};
        tem9[8:0] = {1'b0, a[7:0]} + {1'b0, b[7:0]} + {8'b0, cin};
        tem5[4:0] = {1'b0, a[3:0]} + {1'b0, b[3:0]} + {4'b0, cin};
        flag[0] = tem9[8];
        flag[1] = tem5[4];
        flag[2] = 0; //더하기 이므로 subtraction 비트는 0임.
        flag[3] = (result == 0); //result가 0이면 1로 설정.
      end
      1: begin //빼기
        result[7:0] = a[7:0] - b[7:0] - {7'b0, cin};
        tem9[8:0] = {1'b0, a[7:0]} - {1'b0, b[7:0]} - {8'b0, cin};
        tem5[4:0] = {1'b0, a[3:0]} - {1'b0, b[3:0]} - {4'b0, cin};
        flag[0] = tem9[8];
        flag[1] = tem5[4];
        flag[2] = 1; //빼기 이므로 subtraction 비트는 1임.
        flag[3] = (result == 0); //result가 0이면 zero flag를 1로 설정. 
      end
      2: begin //AND 연산
        result[7:0] = a[7:0] & b[7:0];
        flag[0] = 0;
        flag[1] = 1; //왜인지는 모르겠지만 AND연산에서 half carry는 1로 설정된다고 함.
        flag[2] = 0;
        flag[3] = (result == 0);
      end
      3: begin //XOR 연산
        result[7:0] = a[7:0] ^ b[7:0];
        flag[0] = 0;
        flag[1] = 0;
        flag[2] = 0;
        flag[3] = (result == 0);
      end
      4: begin //OR 연산
        result[7:0] = a[7:0] | b[7:0];
        flag[0] = 0;
        flag[1] = 0;
        flag[2] = 0;
        flag[3] = (result == 0);
      end
      default: begin //래치생성 방지
        result = 0;
        flag = 0;
        tem9 = 0;
        tem5 = 0;
      end
    endcase
  end
endmodule
