module io_register( //Memory_Interface와 직접적으로 상호작용하면서 I/O레지스터와 연결해주는 모듈임.
  input clk,
  input reset,
  //Memory_Interface모듈과 상호작용 하는 신호들.
  input io_reg_ena,
  input [15:0] io_reg_ad,
  input io_reg_r_ena,
  input io_reg_w_ena,
  input [7:0] io_reg_w_data,
  output reg [7:0] io_reg_r_data,
  //I/O register output들.
  output [7:0] IF_out, //CPU모듈
  output [7:0] IE_out, //CPU모듈
  output [7:0] TAC_out,
  output [7:0] TMA_out,
  output [7:0] STAT_out,
  output [7:0] LY_out,
  output [7:0] LCDC_out,
  output [7:0] SCY_out,
  output [7:0] SCX_out,
  output [7:0] LYC_out,
  output [7:0] BGP_out,
  output [7:0] OBP0_out,
  output [7:0] OBP1_out,
  output [7:0] WX_out,
  output [7:0] WY_out,
  output [7:0] DMA_out,//DMA모듈
  output [7:0] JOY_out,
  
  input [7:0] irq_clear, //CPU모듈이 IF_$FF0F모듈에 전달하는 신호.
  output DMA_start_out, //DMA모듈로 전달되는 신호.
  input irq_vblank, //PPU모듈이 IF_FF0F모듈에 전달하는 신호.
  input irq_LCD, //PPU모듈이 IF_FF0F모듈에 전달하는 신호.
  //input irq_joypad, //외부 테스트 벤치에서 IF_$FF0F모듈로 전달하는 신호.
  input irq_serial,
  
  input cpu_stop, //DIV_$FF04에 넣어줄 input신호.
   
  //PPU가 STAT, LY 레지스터 다이렉트로 값을 쓰기위한 신호.
  input PPU_STAT_w_ena,
  input [7:0] PPU_STAT_w_data,
  input PPU_LY_w_ena,
  input [7:0] PPU_LY_w_data,
  
  //JOY 레지스터의 값을 외부 테스트 벤치에서 바꾸기 위한 신호.
  input joypad_start,
  input joypad_select,
  input joypad_A,
  input joypad_B,
  input joypad_down,
  input joypad_up,
  input joypad_left,
  input joypad_right
); 
  //이 모듈하위에 I/O register 모듈들을 다 넣어줄 예정임.
  
  assign IF_out = IF;
  assign IE_out = IE;
  assign TAC_out = TAC;
  assign TMA_out = TMA;
  assign STAT_out = STAT;
  assign LY_out = LY;
  assign LCDC_out = LCDC;
  assign SCY_out = SCY;
  assign SCX_out = SCX;
  assign LYC_out = LYC;
  assign BGP_out = BGP;
  assign OBP0_out = OBP0;
  assign OBP1_out = OBP1;
  assign WX_out = WX;
  assign WY_out = WY;
  assign DMA_out = DMA;
  assign JOY_out = JOY;
  
  assign DMA_start_out = DMA_start;
  
  //모두 각각의 I/O register모듈의 output을 받아주는 wire 신호임.
  wire [7:0] IF;
  wire [7:0] IE;
  wire [7:0] TAC;
  wire [7:0] TMA;
  wire [7:0] DIV;
  wire [7:0] TIMA;
  wire [7:0] STAT;
  wire [7:0] LY;
  wire [7:0] LCDC, SCY, SCX, LYC, BGP, OBP0, OBP1, WX, WY;
  wire [7:0] DMA;
  
  wire DMA_start;
  
  // Timer에서 IF 레지스터로 가는 인터럽트 신호
  wire irq_timer_wire;

  //각 모듈에 전달할 읽기, 쓰기 제어신호.
  reg IF_w_ena; //IF값은 읽기신호 없어도 그냥 실시간으로 output으로 뱉기 때문에 필요없음.
  
  reg IE_w_ena; //IE값은 읽기신호 없어도 그냥 실시간으로 output으로 뱉기 때문에 필요없음.
  
  wire [7:0] div_r_data;
  reg div_w_ena; 
  reg div_r_ena;
  
  wire [7:0] tima_r_data;
  reg tima_w_ena;
  reg tima_r_ena;
  
  wire [7:0] tma_r_data;
  reg tma_r_ena;
  reg tma_w_ena;
  
  wire [7:0] tac_r_data;
  reg tac_r_ena;
  reg tac_w_ena;
  
  wire [7:0] dma_r_data;
  reg dma_r_ena;
  reg dma_w_ena;
  
  wire [7:0] ppu_io_r_data;
  reg ppu_io_r_ena;
  reg ppu_io_w_ena;
  
  wire [7:0] stat_r_data;
  reg stat_r_ena;
  reg stat_w_ena;
  
  wire [7:0] ly_r_data;
  reg ly_r_ena;
  reg ly_w_ena;
  
  reg joy_r_ena; //JOY 레지스터는 따로 모듈없이 여기에다가 만들겠음.
  reg joy_w_ena;
  
  reg [3:0] r_state; //읽기값을 적절한 곳으로 넣어주기 위한 state.
  reg [3:0] next;
  
  reg [7:0] JOY; //여기에 따로 모듈로 분리하지 않고 JOY레지스터 선언했음. joypad_up, joypad_down등을 input으로 받아서 JOY레지스터에 쓰기를 구현하고, irq_joypad를 생성해서 IF_$FF0F모듈로 전달해야 함.
  reg irq_joypad;
  

  // ===========================================================================
  // I/O 레지스터 모듈 인스턴스화 (Instantiation)
  // ===========================================================================

  // 1. Interrupt Flag ($FF0F)
  IF_$FF0F inst_IF (
    .clk        (clk),
    .reset      (reset),
    .ad         (io_reg_ad),
    .w_data     (io_reg_w_data),
    .w_ena      (IF_w_ena),
    .IF         (IF), 
    .irq_clear  (irq_clear), // CPU 모듈에서 연결, input
    .irq_joypad (irq_joypad),// Joypad 모듈에서 연결, 내부신호.
    .irq_serial (irq_serial),// Serial 모듈에서 연결, input
    .irq_timer  (irq_timer_wire), // TIMA 모듈의 출력과 연결, 내부신호.
    .irq_LCD    (irq_LCD),   // PPU 모듈에서 연결, input
    .irq_vblank (irq_vblank) // PPU 모듈에서 연결, input
  );

  // 2. Interrupt Enable ($FFFF)
  IE_$FFFF inst_IE (
    .clk        (clk),
    .reset      (reset),
    .ad         (io_reg_ad),
    .w_data     (io_reg_w_data),
    .w_ena      (IE_w_ena),
    .IE         (IE)
  );

  // 3. Divider Register ($FF04)
  DIV_$FF04 inst_DIV (
    .clk        (clk),
    .reset      (reset),
    .ad         (io_reg_ad),
    .w_data     (io_reg_w_data),
    .w_ena      (div_w_ena),
    .r_ena      (div_r_ena),
    .r_data     (div_r_data),
    .cpu_stop   (cpu_stop)   // CPU 모듈에서 연결 (STOP 명령어 상태)
  );

  // 4. Timer Counter ($FF05)
  TIMA_$FF05 inst_TIMA (
    .clk        (clk),
    .reset      (reset),
    .ad         (io_reg_ad),
    .w_data     (io_reg_w_data),
    .w_ena      (tima_w_ena),
    .r_ena      (tima_r_ena),
    .r_data     (tima_r_data),
    .TAC        (TAC), //input
    .TMA        (TMA), //input
    .irq_timer  (irq_timer_wire) // IF 모듈로 전달됨
  );

  // 5. Timer Modulo ($FF06)
  TMA_$FF06 inst_TMA (
    .clk        (clk),
    .reset      (reset),
    .ad         (io_reg_ad),
    .w_data     (io_reg_w_data),
    .w_ena      (tma_w_ena),
    .r_ena      (tma_r_ena),
    .r_data     (tma_r_data),
    .TMA        (TMA)
  );

  // 6. Timer Control ($FF07)
  TAC_$FF07 inst_TAC (
    .clk        (clk),
    .reset      (reset),
    .ad         (io_reg_ad),
    .w_data     (io_reg_w_data),
    .w_ena      (tac_w_ena),
    .r_ena      (tac_r_ena),
    .r_data     (tac_r_data),
    .TAC        (TAC)
  );

  // 7. OAM DMA ($FF46)
  DMA_$FF46 inst_DMA (
    .clk        (clk),
    .reset      (reset),
    .ad         (io_reg_ad),
    .w_data     (io_reg_w_data),
    .w_ena      (dma_w_ena),
    .r_ena      (dma_r_ena),
    .r_data     (dma_r_data),
    .DMA        (DMA),
    .DMA_start  (DMA_start) // DMA 컨트롤러/FSM으로 전달
  );

  // 8. PPU I/O Registers (LCDC, SCY, SCX, LYC, BGP, OBP0, OBP1, WX, WY)
  PPU_io_register inst_PPU_IO (
    .clk        (clk),
    .reset      (reset),
    .ad         (io_reg_ad),
    .w_data     (io_reg_w_data),
    .w_ena      (ppu_io_w_ena),
    .r_ena      (ppu_io_r_ena),
    .r_data     (ppu_io_r_data),
    .LCDC       (LCDC),
    .SCY        (SCY),
    .SCX        (SCX),
    .LYC        (LYC),
    .BGP        (BGP),
    .OBP0       (OBP0),
    .OBP1       (OBP1),
    .WX         (WX),
    .WY         (WY)
  );

  // 9. LCD Status ($FF41)
  STAT_$FF41 inst_STAT (
    .clk            (clk),
    .reset          (reset),
    .ad             (io_reg_ad),
    .w_data         (io_reg_w_data),
    .w_ena          (stat_w_ena),
    .r_ena          (stat_r_ena),
    .r_data         (stat_r_data),
    .PPU_STAT_w_data(PPU_STAT_w_data), // PPU 모듈에서 연결
    .PPU_STAT_w_ena (PPU_STAT_w_ena),  // PPU 모듈에서 연결
    .STAT           (STAT)
  );

  // 10. LCD Y-Coordinate ($FF44)
  LY_$FF44 inst_LY (
    .clk          (clk),
    .reset        (reset),
    .ad           (io_reg_ad),
    .w_data       (io_reg_w_data),
    .w_ena        (ly_w_ena),
    .r_ena        (ly_r_ena),
    .r_data       (ly_r_data),
    .PPU_LY_w_data(PPU_LY_w_data), // PPU 모듈에서 연결
    .PPU_LY_w_ena (PPU_LY_w_ena),  // PPU 모듈에서 연결
    .LY           (LY)
  );

  always @(*) begin
    IF_w_ena = 0;
    IE_w_ena = 0;
    div_r_ena = 0;
    div_w_ena = 0;
    tima_r_ena = 0;
    tima_w_ena = 0;
    tma_r_ena = 0;
    tma_w_ena = 0; 
    tac_r_ena = 0;
    tac_w_ena = 0;
    dma_r_ena = 0;
    dma_w_ena = 0;
    ppu_io_r_ena = 0;
    ppu_io_w_ena = 0;
    stat_r_ena = 0;
    stat_w_ena = 0;
    ly_r_ena = 0;
    ly_w_ena = 0;
    
    joy_r_ena = 0;
    joy_w_ena = 0;
    
    io_reg_r_data = 0;
    
    next = 0;
    
    if(io_reg_ena & io_reg_r_ena) begin //읽기.
      case(1'b1)
        (io_reg_ad == 16'hFF00): begin //P1/JOYP
          joy_r_ena = 1;
          joy_w_ena = 0;
          next = 1;
        end
        (io_reg_ad == 16'hFF04): begin //DIV
          div_r_ena = 1;
          div_w_ena = 0;
          next = 2;
        end
        (io_reg_ad == 16'hFF05): begin //TIMA
          tima_r_ena = 1;
          tima_w_ena = 0; 
          next = 3;
        end
        (io_reg_ad == 16'hFF06): begin //TMA
          tma_r_ena = 1;
          tma_w_ena = 0;
          next = 4;
        end
        (io_reg_ad == 16'hFF07): begin //TAC
          tac_r_ena = 1;
          tac_w_ena = 0;
          next = 5;
        end
        (io_reg_ad == 16'hFF0F): begin //IF
          next = 6;
        end
        (io_reg_ad == 16'hFF40): begin //LCDC
          ppu_io_r_ena = 1;
          ppu_io_w_ena = 0;
          next = 7;
        end
        (io_reg_ad == 16'hFF41): begin //STAT
          stat_r_ena = 1;
          stat_w_ena = 0;
          next = 10;
        end
        (io_reg_ad == 16'hFF42): begin //SCY
          ppu_io_r_ena = 1;
          ppu_io_w_ena = 0;
          next = 7;
        end
        (io_reg_ad == 16'hFF43): begin //SCX
          ppu_io_r_ena = 1;
          ppu_io_w_ena = 0;
          next = 7;
        end
        (io_reg_ad == 16'hFF44): begin //LY
          ly_r_ena = 1;
          ly_w_ena = 0;
          next = 11;
        end
        (io_reg_ad == 16'hFF45): begin //LYC
          ppu_io_r_ena = 1;
          ppu_io_w_ena = 0;
          next = 7;
        end
        (io_reg_ad == 16'hFF46): begin //DMA
          dma_r_ena = 1;
          dma_w_ena = 0;
          next = 8;
        end
        (io_reg_ad == 16'hFF47): begin //BGP
          ppu_io_r_ena = 1;
          ppu_io_w_ena = 0;
          next = 7;
        end
        (io_reg_ad == 16'hFF48): begin //OBP0
          ppu_io_r_ena = 1;
          ppu_io_w_ena = 0;
          next = 7;
        end 
        (io_reg_ad == 16'hFF49): begin //OBP1
          ppu_io_r_ena = 1;
          ppu_io_w_ena = 0;
          next = 7;
        end
        (io_reg_ad == 16'hFF4A): begin //WY
          ppu_io_r_ena = 1;
          ppu_io_w_ena = 0;
          next = 7;
        end
        (io_reg_ad == 16'hFF4B): begin //WX
          ppu_io_r_ena = 1;
          ppu_io_w_ena = 0;
          next = 7;
        end
        (io_reg_ad == 16'hFFFF): begin //IE
          next = 9;
        end
        default: begin //기타 정의되지 않는 값들.
        end
      endcase
    end
      
    if(io_reg_ena & io_reg_w_ena) begin //쓰기.
      case(1'b1)
        (io_reg_ad == 16'hFF00): begin //P1/JOYP
          joy_r_ena = 0;
          joy_w_ena = 1;
        end
        (io_reg_ad == 16'hFF04): begin //DIV
          div_r_ena = 0;
          div_w_ena = 1;
        end
        (io_reg_ad == 16'hFF05): begin //TIMA
          tima_r_ena = 0;
          tima_w_ena = 1; 
        end
        (io_reg_ad == 16'hFF06): begin //TMA
          tma_r_ena = 0;
          tma_w_ena = 1;
        end
        (io_reg_ad == 16'hFF07): begin //TAC
          tac_r_ena = 0;
          tac_w_ena = 1;
        end
        (io_reg_ad == 16'hFF0F): begin //IF
          IF_w_ena = 1;
        end
        (io_reg_ad == 16'hFF40): begin //LCDC
          ppu_io_r_ena = 0;
          ppu_io_w_ena = 1;
        end
        (io_reg_ad == 16'hFF41): begin //STAT
          stat_r_ena = 0;
          stat_w_ena = 1;
        end
        (io_reg_ad == 16'hFF42): begin //SCY
          ppu_io_r_ena = 0;
          ppu_io_w_ena = 1;
        end
        (io_reg_ad == 16'hFF43): begin //SCX
          ppu_io_r_ena = 0;
          ppu_io_w_ena = 1;
        end
        (io_reg_ad == 16'hFF44): begin //LY
          ly_r_ena = 0;
          ly_w_ena = 1;
        end
        (io_reg_ad == 16'hFF45): begin //LYC
          ppu_io_r_ena = 0;
          ppu_io_w_ena = 1;
        end
        (io_reg_ad == 16'hFF46): begin //DMA
          dma_r_ena = 0;
          dma_w_ena = 1;
        end
        (io_reg_ad == 16'hFF47): begin //BGP
          ppu_io_r_ena = 0;
          ppu_io_w_ena = 1;
        end
        (io_reg_ad == 16'hFF48): begin //OBP0
          ppu_io_r_ena = 0;
          ppu_io_w_ena = 1;
        end 
        (io_reg_ad == 16'hFF49): begin //OBP1
          ppu_io_r_ena = 0;
          ppu_io_w_ena = 1;
        end
        (io_reg_ad == 16'hFF4A): begin //WY
          ppu_io_r_ena = 0;
          ppu_io_w_ena = 1;
        end
        (io_reg_ad == 16'hFF4B): begin //WX
          ppu_io_r_ena = 0;
          ppu_io_w_ena = 1;
        end
        (io_reg_ad == 16'hFFFF): begin //IE
          IE_w_ena = 1;
        end
        default: begin //기타 정의되지 않는 값들.
        end
      endcase
    end
    
    case(r_state)
      0: begin //초기 상태.
      end
      1: begin //JOY
        io_reg_r_data[7:0] = JOY;
      end
      2: begin //DIV
        io_reg_r_data[7:0] = div_r_data[7:0];
      end
      3: begin //TIMA
        io_reg_r_data[7:0] = tima_r_data[7:0];
      end
      4: begin //TMA
        io_reg_r_data[7:0] = tma_r_data[7:0];
      end
      5: begin //TAC
        io_reg_r_data[7:0] = tac_r_data[7:0];
      end
      6: begin //IF
        io_reg_r_data[7:0] = IF;
      end
      7: begin //PPU_io
        io_reg_r_data[7:0] = ppu_io_r_data[7:0];
      end
      8: begin //DMA
        io_reg_r_data[7:0] = dma_r_data[7:0];
      end
      9: begin //IE
        io_reg_r_data[7:0] = IE;
      end
      10: begin //STAT
        io_reg_r_data[7:0] = stat_r_data[7:0];
      end
      11: begin //LY
        io_reg_r_data[7:0] = ly_r_data[7:0];
      end
    endcase
    
  end
  
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      r_state <= 0;
      JOY[7:0] <= 8'b11111111;
      irq_joypad <= 0;
    end
    else begin
      r_state <= next;
      irq_joypad <= 0;
      
      JOY[7:6] <= 2'b11;

      if(joy_w_ena) begin
        JOY[5:4] <= io_reg_w_data[5:4];
      end
      
      case(JOY[5:4])
        2'b00: begin //8개 신호 전부 JOY[3:0]에 반영. 눌리면 0이고 안눌리면 1임.
          JOY[3:0] <= {!(joypad_start | joypad_down), !(joypad_select | joypad_up), !(joypad_B | joypad_left), !(joypad_A | joypad_right)};
          if(((~{!(joypad_start | joypad_down), !(joypad_select | joypad_up), !(joypad_B | joypad_left), !(joypad_A | joypad_right)}) & JOY[3:0]) != 4'b0000) begin
            irq_joypad <= 1;
          end
        end
        2'b10: begin //방향키만 JOY[3:0]에 반영.
          JOY[3:0] <= {!(joypad_down), !(joypad_up), !(joypad_left), !(joypad_right)};
          if(((~{!(joypad_down), !(joypad_up), !(joypad_left), !(joypad_right)}) & JOY[3:0]) != 4'b0000) begin
            irq_joypad <= 1;
          end
        end
        2'b01: begin //액션버튼만 JOY[3:0]에 반영.
          JOY[3:0] <= {!(joypad_start), !(joypad_select), !(joypad_B), !(joypad_A)};
          if(((~{!(joypad_start), !(joypad_select), !(joypad_B), !(joypad_A)}) & JOY[3:0]) != 4'b0000) begin
            irq_joypad <= 1;
          end
        end
        2'b11: begin //JOY[3:0]은 4'b1111으로 고정됨.
          JOY[3:0] <= 4'b1111;
          if(((~4'b1111) & JOY[3:0]) != 4'b0000) begin
            irq_joypad <= 1;
          end
        end
      endcase
      
    end
  end
  
endmodule
//I/O register들은 각각의 레지스터들을 하나의 모듈로 만들어야 할것 같음. 

module IF_$FF0F ( //Interrupt Flag 레지스터.
  input clk,
  input reset,
  //메모리 입출력 명령어에 의한 접근, BUS를 통해서 접근되는 구조.
  input [15:0] ad,
  input [7:0] w_data,
  input w_ena,
  output [7:0] IF, //IF 레지스터의 값을 실시간으로 output으로 보냄.
  //다이렉트 제어신호, BUS를 통해서 접근하는것이 아니라 다이렉트로 제어신호를 보내서 레지스터 쓰기를 할수있음.
  input [7:0] irq_clear, //CPU가 IF를 보고 처리(clear)한 인터럽트에 해당하는 비트는 0으로 만듬.
  input irq_joypad, //irq_clear 레지스터에 해당하는 비트를 1로 만들어서 이 모듈에 보내주면 그 비트를 IF레지스터에서 0으로 클럭에지에서 만들어 줌.
  input irq_serial,
  input irq_timer,
  input irq_LCD,
  input irq_vblank //우서순위는 vblank > LCD > timer > serial > joypad 순임.

);
  reg [7:0] IF_reg; //내부에 FF0F에 mapping 되어있는 IF레지스터를 선언함.
  assign IF = IF_reg | 8'b11100000; //output인 IF는 그냥 assign문으로 IF_reg를 그대로 output으로 보내줌. 안쓰는 비트는 항상 1로 해줘야 한다고 함.
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      IF_reg <= 0;
    end
    else begin
      if(irq_joypad) begin //interrupt 제어신호가 오면 바로 해당하는 IF_reg의 비트를 1로 바꾸어 줌.
        IF_reg[4] <= 1;
      end
      if(irq_serial) begin
        IF_reg[3] <= 1;
      end
      if(irq_timer) begin
        IF_reg[2] <= 1;
      end
      if(irq_LCD) begin
        IF_reg[1] <= 1;
      end
      if(irq_vblank) begin
        IF_reg[0] <= 1;
      end
      
      if(irq_clear[4]) begin //CPU가 joypad 인터럽트 헨들러로 이동하게 되면 irq_clear[4]를 1로 만들어서 이 모듈에 보내면 즉시 IF_reg[4]를 0으로 만들어 줌.
        IF_reg[4] <= 0;
      end
      if(irq_clear[3]) begin 
        IF_reg[3] <= 0;
      end
      if(irq_clear[2]) begin //마찬가지로 CPU가 타이머 인터럽트 처리를 할때 irq_clear[2]를 1로 만들어서 이 모듈에 보내주면 IF_reg[2]는 0으로 갱신됨.
        IF_reg[2] <= 0;
      end
      if(irq_clear[1]) begin 
        IF_reg[1] <= 0;
      end
      if(irq_clear[0]) begin 
        IF_reg[0] <= 0;
      end
      //이 코드를 제일 밑에 둠으로써 우선순위를 높임. 우선순위는 명령어에 의한 입출력 > CPU의 clear요청 > 외부 하드웨어에 의한 요청 순으로 일단 설정했음.
      if(w_ena & (ad == 16'hFF0F)) begin //bus를 통해서 메모리 쓰기 신호가 오면
        IF_reg <= w_data;
      end
    end
  end
endmodule

module IE_$FFFF( //Interrupt Enable 레지스터
  input clk,
  input reset,
  //메모리 입출력 명령어에 의한 접근, BUS를 통해서 접근되는 구조.
  input [15:0] ad,
  input [7:0] w_data,
  input w_ena,
  output [7:0] IE //IE 레지스터의 값을 실시간으로 output으로 보냄.
  

);
  reg [7:0] IE_reg;
  assign IE = IE_reg | 8'b11100000; //안쓰는 상위 3비트는 항상 1로 읽혀야 한다고 함.
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      IE_reg <= 0;
    end
    else begin
      if(w_ena & (ad == 16'hFFFF)) begin
        IE_reg <= w_data;
      end
    end
  end
endmodule

module DIV_$FF04 ( //Divider register. 16384Hz속도로 증가하고 어떤값이든 쓰면 0으로 리셋됨. stop명령어 실행시 리셋되고 끝나면 다시 증가함.
  input clk, //16MHz clk에 동기화 됨.
  input reset,
  input w_ena,
  input r_ena,
  input [15:0] ad,
  input [7:0] w_data,
  output reg [7:0] r_data,
  //cpu가 stop 상태이면 0을 유지해야 함.
  input cpu_stop
);
  reg [4:0] my_clk_counter; //16MHz의 my_clk 에지마다 1씩 증가하고 0 - 1 - 2 - 3 - 0 - 1 - 2 - 3을 반복함.
  reg [15:0] T_clk_counter; //4MHz의 T-cycle마다 1씩 증가함.
  
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      my_clk_counter <= 0;
      T_clk_counter <= 0;
      r_data <= 0;
    end
    else begin
      if(my_clk_counter == 3) begin
        my_clk_counter <= 0;
        T_clk_counter <= T_clk_counter + 16'd1; //이러면 4MHz마다 1씩 증가함.
      end
      else if (my_clk_counter < 3)begin //즉 0, 1, 2일떄
        my_clk_counter <= my_clk_counter + 1;
      end
      else if(my_clk_counter > 3) begin //혹시 3을 넘었으면 바로 0으로 초기화해서 정상적으로 작동하게 해줌.
        my_clk_counter <= 0;
      end
      
      if(r_ena && (ad == 16'hFF04)) begin
        r_data <= T_clk_counter[15:8]; //T_clk_counter는 4.194304MHz로 증가하므로 [15:8]부분은 (4.194304 * 1Hz) / 256(2의 8승) = 16384Hz 속도로 증가함. 
      end
      else begin
        r_data <= 0;
      end
      
      if(w_ena && (ad == 16'hFF04)) begin
        T_clk_counter[15:0] <= 16'b0; //w_data와 관계없이 0으로 초기화 함.
        my_clk_counter <= 0;
      end
      
      if(cpu_stop) begin
        T_clk_counter[15:0] <= 16'b0; //제일 밑에 있으므로 T_clk_counter는 cpu_stop신호가 있으면 가장 높은 우선순위로 무조건 0으로 유지됨.
      end
      
      
    end
  end
  
endmodule

module TIMA_$FF05 ( //Timer counter. TAC register ($FF07)에 의해 정해진 속도만큼 증가함. 오버플로 발생시 TMA레지스터에서 지정된 값으로 리셋되면서 인터럽트 호출됨.
  input clk, //16MHz 클럭임.
  input reset,
  //버스로 주고받는 값들.
  input [15:0] ad,
  input w_ena,
  input r_ena,
  input [7:0] w_data,
  output reg [7:0] r_data,
  //TAC_$FF07에서 받는 신호
  input [7:0] TAC, //TAC값을 실시간으로 받아서 bit2가 1이면 증가. bit0-1값에 따라서 증가속도 결정함. 이 값은 16MHz 클럭에 같이 동기화 되어있어 클럭에지에 맞춰서 변한다고 가정함.
  //TMA_$FF06에서 받는 신호
  input [7:0] TMA, //TMA값을 실시간으로 받아서 이 값으로 오버플로시 리셋함.
  //IF_$FF0F에 보낼 신호.
  output reg irq_timer //주의할점이 이 신호를 보낸 다음 클럭에지에서 IF가 세팅됨.
);
  reg[7:0] TIMA;
  
  reg [3:0] my_clk_counter; //16MHz속도로 증가하고 0 - 1 - 2 - 3 - 0 - 1 - 2 - 3 이렇게 변함.
  reg [15:0] T_clk_counter; //4MHz속도로 증가함.
  
  reg T_cycle_ena; 
  reg M_cycle_ena;
  
  reg [15:0] M_4_counter; //0 - 1 - 2 - 3 - 0 - 1 - 2 - 3 - 0 이렇게 M_cycle에 맞춰서 증가함.
  reg [15:0] M_16_counter; //0 - 1 - 2 ... 14 - 15 - 0 - 1... 이렇게 증가.
  reg [15:0] M_64_counter;
  reg [15:0] M_256_counter;
  
  reg TIMA_M_4_ena; //이 값이 1일때 TIMA는 M_4_counter가 3 -> 0 이 시점에서 매번 증가함.
  reg TIMA_M_16_ena; //이 값이 1일때 TIMA는 M_16_counter가 15 -> 0 이 시점에서 매번 증가함.
  reg TIMA_M_64_ena;
  reg TIMA_M_256_ena;
  
  reg TIMA_ena; //이 값이 1이어야지 TIMA는 증가함.
  reg TIMA_overflow;
  
  always @(*) begin
    T_cycle_ena = 0;
    M_cycle_ena = 0;
    TIMA_ena = 0;
    TIMA_M_4_ena = 0;
    TIMA_M_16_ena = 0;
    TIMA_M_64_ena = 0;
    TIMA_M_256_ena = 0;
    
    if(my_clk_counter == 3) begin
      T_cycle_ena = 1;
    end
    
    if(T_clk_counter == 3) begin
      M_cycle_ena = 1;
    end
    
    if(TAC[2] == 1) begin //Enable이 1일때. TIMA는 증가함.
      TIMA_ena = 1;
    end
    else if(TAC[2] == 0) begin //Enable이 0일때. TIMA는 정지함.
      TIMA_ena = 0;
    end
    
    case(TAC[1:0])
      0: begin //256M_cycle마다 증가.
        TIMA_M_4_ena = 0;
        TIMA_M_16_ena = 0;
        TIMA_M_64_ena = 0;
        TIMA_M_256_ena = 1;
      end
      1: begin //4M_cycle마다 증가.
        TIMA_M_4_ena = 1;
        TIMA_M_16_ena = 0;
        TIMA_M_64_ena = 0;
        TIMA_M_256_ena = 0;
      end
      2: begin //16M_cycle마다 증가.
        TIMA_M_4_ena = 0;
        TIMA_M_16_ena = 1;
        TIMA_M_64_ena = 0;
        TIMA_M_256_ena = 0;
      end
      3: begin //64M_cycle마다 증가.
        TIMA_M_4_ena = 0;
        TIMA_M_16_ena = 0;
        TIMA_M_64_ena = 1;
        TIMA_M_256_ena = 0;
      end
    endcase
  end
  
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      my_clk_counter <= 0;
      T_clk_counter <= 0;
      r_data <= 0;
      M_4_counter <= 0; //초기화. 절대 이 카운터의 값이 4 이상이어서는 안됨.
      M_16_counter <= 0;  //초기화. 절대 이 카운터의 값이 16 이상이어서는 안됨.
      M_64_counter <= 0;  //초기화. 절대 이 카운터의 값이 64 이상이어서는 안됨.
      M_256_counter <= 0;  //초기화. 절대 이 카운터의 값이 256 이상이어서는 안됨.
      TIMA_overflow <= 0;
      irq_timer <= 0;
    end
    else begin
      r_data <= 0;
      irq_timer <= 0; //16MHz기준으로 초기값 정해줌. 한 클럭동안 1이었다가 다음 클럭때 바로 0으로 되야 함.
      
      if(w_ena && (ad == 16'hFF05)) begin //cpu가 읽기나 쓰기요청을 T_clk 에지 사이사이에 보내기 때문에 TIMA에 동시에 쓰려고 해서 겹치지는 않을듯? my_clk_counter가 모든 모듈에서 공통이기에 이 논리가 성립함.
        TIMA[7:0] <= w_data;
      end
      
      if(r_ena && (ad == 16'hFF05)) begin
        r_data <= TIMA[7:0];
      end
      
      if(my_clk_counter == 3) begin
        my_clk_counter <= 0;
        if(T_clk_counter == 3) begin
          T_clk_counter <= 0;
        end
        else if(T_clk_counter < 3) begin
          T_clk_counter <= T_clk_counter + 1;
        end
        else if(T_clk_counter > 3) begin
          T_clk_counter <= 0;
        end
      end
      else if(my_clk_counter < 3) begin
        my_clk_counter <= my_clk_counter + 1;
      end
      else if(my_clk_counter > 3) begin
        my_clk_counter <= 0;
      end
      
      if(T_cycle_ena) begin //여기 코드들은 4MHz에 맞춰서 작동함.
        
        
        if(M_cycle_ena) begin //여기 코드들은 1MHz에 맞춰서 작동함.
          
          TIMA_overflow <= 0; //초기값 설정. 밑의 코드에서 1로 바꿔주면 1M_cycle만큼 유지되고 다시 0으로 꺼짐.
          
          if(M_4_counter == 3) begin
            M_4_counter <= 0;
            if(TIMA_ena && TIMA_M_4_ena) begin
              TIMA <= TIMA + 8'd1; //TIMA 1증가.
              if(TIMA == 8'hFF) begin
                TIMA_overflow <= 1; //TIMA가 FF -> 00으로 가는 동시에 TIMA_overflow가 1로 설정되고 다음 M_cycle에지때 
              end
            end
          end
          else if(M_4_counter < 3) begin
            M_4_counter <= M_4_counter + 1;
          end
          else if(M_4_counter > 3) begin
            M_4_counter <= 0;
          end
          
          
          if(M_16_counter == 15) begin
            M_16_counter <= 0;
            if(TIMA_ena && TIMA_M_16_ena) begin
              TIMA <= TIMA + 8'd1; //TIMA 1증가.
              if(TIMA == 8'hFF) begin
                TIMA_overflow <= 1; //TIMA가 FF -> 00으로 가는 동시에 TIMA_overflow가 1로 설정되고 다음 M_cycle에지때 
              end
            end
          end
          else if(M_16_counter < 15) begin
            M_16_counter <= M_16_counter + 1;
          end
          else if(M_4_counter > 15) begin
            M_16_counter <= 0;
          end
          
          
          if(M_64_counter == 63) begin
            M_64_counter <= 0;
            if(TIMA_ena && TIMA_M_64_ena) begin
              TIMA <= TIMA + 8'd1; //TIMA 1증가.
              if(TIMA == 8'hFF) begin
                TIMA_overflow <= 1; //TIMA가 FF -> 00으로 가는 동시에 TIMA_overflow가 1로 설정되고 다음 M_cycle에지때 
              end
            end
          end
          else if(M_64_counter < 63) begin
            M_64_counter <= M_64_counter + 1;
          end
          else if(M_64_counter > 63) begin
            M_64_counter <= 0;
          end
          
          
          if(M_256_counter == 255) begin
            M_256_counter <= 0;
            if(TIMA_ena && TIMA_M_256_ena) begin
              TIMA <= TIMA + 8'd1; //TIMA 1증가.
              if(TIMA == 8'hFF) begin
                TIMA_overflow <= 1; //TIMA가 FF -> 00으로 가는 동시에 TIMA_overflow가 1로 설정되고 다음 M_cycle에지때 
              end
            end
          end
          else if(M_256_counter < 255) begin
            M_256_counter <= M_256_counter + 1;
          end
          else if(M_256_counter > 255) begin
            M_256_counter <= 0;
          end
          
          if(TIMA_overflow && (TIMA == 8'h00)) begin //1 M_cycle동안 16'h00 유지 후 TMA로 초기화 함. 
            TIMA[7:0] <= TMA[7:0]; //TIMA를 외부에서 input으로 들어오는 TMA로 초기화 함.
            irq_timer <= 1; //이러면 IF레지스터는 한클럭 늦게 세팅되기는 함. 그래도 어차피 cpu는 T_cycle에 따라서 작동하기 때문에 문제는 크게 없을듯?
          end
          
        end 
      end
      
      
    end
  end
  
  
endmodule

module TMA_$FF06 ( //Timer modulo. 여기값으로 TIMA가 오버플로시 리셋됨.
  input clk, //16MHz 클럭임.
  input reset,
  //버스로 주고받는 값들.
  input [15:0] ad,
  input w_ena,
  input r_ena,
  input [7:0] w_data,
  output reg [7:0] r_data,
  //TIMA_$FF05로 줄 신호.
  output [7:0] TMA
);
  reg [7:0] TMA_reg; //memory read 때문에 이렇게 했음.
  
  assign TMA = TMA_reg;
  
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      TMA_reg <= 0;
      r_data <= 0;
    end
    else begin
      if(w_ena && (ad == 16'hFF06)) begin
        TMA_reg[7:0] <= w_data[7:0];
      end
      
      if(r_ena && (ad == 16'hFF06)) begin
        r_data[7:0] <= TMA_reg[7:0];
      end
      
    end
  end

endmodule

module TAC_$FF07 ( //Timer control. bit2: enable, bit0-1: clk select.
  input clk, //16MHz 클럭임.
  input reset,
  //버스로 주고받는 값들.
  input [15:0] ad,
  input w_ena,
  input r_ena,
  input [7:0] w_data,
  output reg [7:0] r_data,
  //TIMA_$FF05로 줄 신호.
  output [7:0] TAC
);
  reg [7:0] TAC_reg;
  
  assign TAC = TAC_reg | 8'b11111000; //안쓰는 상위 3비트는 1로 읽혀야 함.
  
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      TAC_reg <= 0;
      r_data <= 0;
    end
    else begin
      if(w_ena && (ad == 16'hFF07)) begin
        TAC_reg <= w_data & 8'b00000111; //[7:3]은 0으로 고정시킴.
      end
      
      if(r_ena && (ad == 16'hFF07)) begin
        r_data <= TAC_reg;
      end
      
    end
  end
endmodule

module DMA_$FF46(
  input clk,
  input reset,
  //버스로 주고받는 값들.
  input [15:0] ad,
  input w_ena,
  input r_ena,
  input [7:0] w_data,
  output reg [7:0] r_data,
  //OAM_DMA로 줄 신호.
  output [7:0] DMA,
  output reg DMA_start //이 신호가 1이어야지 DMA를 시작해야 함.
);
  reg [7:0] DMA_reg;
  
  assign DMA = DMA_reg;
  
  always @(posedge clk or posedge reset) begin //Source: $XX00-$XX9F(XX = $00 to $DF) //Destination: $FE00-$FE9F

    if(reset) begin
      DMA_reg <= 0;
      DMA_start <= 0;
    end
    else begin
      DMA_start <= 0; //기본값 설정.
      if(w_ena && (ad == 16'hFF46)) begin
        DMA_reg <= w_data;
        DMA_start <= 1;
      end
      
      if(r_ena && (ad == 16'hFF46)) begin
        r_data <= DMA_reg;
        DMA_start <= 0;
      end
    end
  end
  
endmodule

module PPU_io_register( //이 모듈에서 PPU관련 레지스터들을 통합해서 관리하려고 함. 단 STAT과 LY는 분리해야 할듯.
  input clk,
  input reset,
  //버스로 주고받는 값들.
  input [15:0] ad,
  input w_ena,
  input r_ena,
  input [7:0] w_data,
  output reg [7:0] r_data,
  //PPU로 다이렉트로 주는 신호.
  output [7:0] LCDC,
  //output [7:0] STAT,
  output [7:0] SCY,
  output [7:0] SCX,
  //output [7:0] LY,
  output [7:0] LYC,
  output [7:0] BGP,
  output [7:0] OBP0,
  output [7:0] OBP1,
  output [7:0] WX,
  output [7:0] WY
);
  reg [7:0] LCDC_reg;
  //reg [7:0] STAT_reg;
  reg [7:0] SCY_reg;
  reg [7:0] SCX_reg;
  //reg [7:0] LY_reg;
  reg [7:0] LYC_reg;
  reg [7:0] BGP_reg;
  reg [7:0] OBP0_reg;
  reg [7:0] OBP1_reg;
  reg [7:0] WX_reg;
  reg [7:0] WY_reg;
  
  assign LCDC = LCDC_reg;
  //assign STAT = STAT_reg;
  assign SCY = SCY_reg;
  assign SCX = SCX_reg;
  //assign LY = LY_reg;
  assign LYC = LYC_reg;
  assign BGP = BGP_reg;
  assign OBP0 = OBP0_reg;
  assign OBP1 = OBP1_reg;
  assign WX = WX_reg;
  assign WY = WY_reg;
  
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      LCDC_reg <= 8'h91; //바로 PC를 $0100로 초기화하고 실행하려면 LCDC를 $91로 초기화해야 한다고 함.
      //STAT_reg <= 0;
      SCY_reg <= 0;
      SCX_reg <= 0;
     // LY_reg <= 0;
      LYC_reg <= 0;
      BGP_reg <= 0;
      OBP0_reg <= 0;
      OBP1_reg <= 0;
      WX_reg <= 0;
      WY_reg <= 0;
      r_data <= 0;
    end
    else begin
      case(ad)
        16'hFF40: begin
          if(w_ena) begin
            LCDC_reg <= w_data;
          end
          else if(r_ena) begin
            r_data <= LCDC_reg;
          end
          else begin
          end
        end
    /*    16'hFF41: begin
          if(w_ena) begin
            STAT_reg[6:3] <= w_data[6:3]; //bit7은 항상 1이어야 하고, bit0-2는 PPU가 설정해야 하는 부분임.
          end
          else if(r_ena) begin
            r_data <= STAT_reg;
          end
          else begin
          end 
        end */
        16'hFF42: begin
          if(w_ena) begin
            SCY_reg <= w_data;
          end
          else if(r_ena) begin
            r_data <= SCY_reg;
          end
          else begin
          end
        end
        16'hFF43: begin
          if(w_ena) begin
            SCX_reg <= w_data;
          end
          else if(r_ena) begin
            r_data <= SCX_reg;
          end
          else begin
          end
        end
      /*  16'hFF44: begin
          if(w_ena) begin
            LY_reg <= w_data;
          end
          else if(r_ena) begin
            r_data <= LYC;
          end
          else begin
          end 
        end */
        16'hFF45: begin
          if(w_ena) begin
            LYC_reg <= w_data;
          end
          else if(r_ena) begin
            r_data <= LYC_reg;
          end
          else begin
          end
        end
        16'hFF47: begin
          if(w_ena) begin
            BGP_reg <= w_data;
          end
          else if(r_ena) begin
            r_data <= BGP_reg;
          end
          else begin
          end
        end
        16'hFF48: begin
          if(w_ena) begin
            OBP0_reg <= w_data;
          end
          else if(r_ena) begin
            r_data <= OBP0_reg;
          end
          else begin
          end
        end
        16'hFF49: begin
          if(w_ena) begin
            OBP1_reg <= w_data;
          end
          else if(r_ena) begin
            r_data <= OBP1_reg;
          end
          else begin
          end
        end
        16'hFF4A: begin
          if(w_ena) begin
            WY_reg <= w_data;
          end
          else if(r_ena) begin
            r_data <= WY_reg;
          end
          else begin
          end
        end
        16'hFF4B: begin
          if(w_ena) begin
            WX_reg <= w_data;
          end
          else if(r_ena) begin
            r_data <= WX_reg;
          end
          else begin
          end
        end
      endcase
        
    end
  end
endmodule

module STAT_$FF41(
  input clk,
  input reset,
  //버스로 주고받는 값들. 거의 cpu가 사용함.
  input [15:0] ad,
  input w_ena,
  input r_ena,
  input [7:0] w_data,
  output reg [7:0] r_data,
  //PPU가 다이렉트로 설정하는 부분.
  input [7:0] PPU_STAT_w_data,
  input PPU_STAT_w_ena,
  //PPU로 다이렉트로 보내주는 부분. clk에지에 따라서 바뀜.
  output [7:0] STAT
);
  reg [7:0] STAT_reg;
  assign STAT = STAT_reg;
  
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      STAT_reg <= 8'b10000000;
      r_data <= 0;
    end
    else begin
      if(w_ena & (ad == 16'hFF41)) begin
        STAT_reg[6:3] <= w_data[6:3]; //[2:0]부분은 PPU만 설정함.
        STAT_reg[7] <= 1; //[7]은 사용되지 않으므로 항상 1임.
      end
      else if(r_ena & (ad == 16'hFF41)) begin
        r_data <= STAT_reg[7:0];
      end
      
      if(PPU_STAT_w_ena) begin
        STAT_reg[2:0] <= PPU_STAT_w_data[2:0];
        STAT_reg[7] <= 1; //[7]은 사용되지 않으므로 항상 1임.
      end
      
    end
  end
  
endmodule

module LY_$FF44(
  input clk,
  input reset,
  //버스로 주고받는 값들.
  input [15:0] ad,
  input w_ena,
  input r_ena,
  input [7:0] w_data,
  output reg [7:0] r_data,
  //PPU가 다이렉트로 설정하는 부분.
  input [7:0] PPU_LY_w_data,
  input PPU_LY_w_ena,
  output [7:0] LY
  
);
  reg [7:0] LY_reg;
  assign LY = LY_reg;
  
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      LY_reg <= 0;
      r_data <= 0;
    end
    else begin
      if(w_ena & (ad == 16'hFF44)) begin //사실 CPU는 읽기만 가능해야 하는데 쓰기도 가능하게 만듬. 그렇지만 어차피 밑의 코드에서 PPU 쓰기가 우선순위 높아서 상관없을듯?
        LY_reg[7:0] <= w_data[7:0]; 
      end
      else if(r_ena & (ad == 16'hFF44)) begin
        r_data <= LY_reg[7:0];
      end
      
      if(PPU_LY_w_ena) begin
        LY_reg[7:0] <= PPU_LY_w_data[7:0];
      end
      
    end
  end
  
endmodule
        
        
