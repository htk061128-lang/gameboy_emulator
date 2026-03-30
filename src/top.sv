module top( //미리 선언해둠. 여기에 지금까지 만든 모든 모듈을 싹 담고 연결해줄 거임.
  input clk,
  input reset,
  //조이패드 input들, 값이 1이면 눌러지고 있다는 의미임.
  input joypad_start,
  input joypad_select,
  input joypad_A,
  input joypad_B,
  input joypad_down,
  input joypad_up,
  input joypad_left,
  input joypad_right,
  //ROM, WRAM, ERAM, WRAM, OAM, HRAM은 외부 테스트 벤치에서 구현해 줘야 함.
  output ROM_ena,
  output [20:0] ROM_ad, //Banking으로 인해 최대 2MiB이기 떄문.
  output ROM_r_ena,
  output ROM_w_ena,
  output [7:0] ROM_w_data,
  input [7:0] ROM_r_data,
  output VRAM_ena,
  output [15:0] VRAM_ad,
  output VRAM_r_ena,
  output VRAM_w_ena,
  output [7:0] VRAM_w_data,
  input [7:0] VRAM_r_data,
  output WRAM_ena,
  output [15:0] WRAM_ad,
  output WRAM_r_ena,
  output WRAM_w_ena,
  output [7:0] WRAM_w_data,
  input [7:0] WRAM_r_data,
  output ERAM_ena,
  output [14:0] ERAM_ad, //Banking으로 인해 최대 32KiB이기 때문.
  output ERAM_r_ena,
  output ERAM_w_ena,
  output [7:0] ERAM_w_data,
  input [7:0] ERAM_r_data,
  output OAM_ena,
  output [15:0] OAM_ad,
  output OAM_r_ena,
  output OAM_w_ena,
  output [7:0] OAM_w_data,
  input [7:0] OAM_r_data,
  output HRAM_ena,
  output [15:0] HRAM_ad,
  output HRAM_r_ena,
  output HRAM_w_ena,
  output [7:0] HRAM_w_data,
  input [7:0] HRAM_r_data,
  
  output [1:0] pixel_data, //0: White, 1: Light gray, 2: Dark gray, 3: Black
  output pixel_valid,
  output hsync,
  output vsync,
  
  input [3:0] MBC_version, //1: MBC1, 3: MBC3
  input [7:0] ROM_size, //0: 32KiB, 1: 64KiB, 2: 128KiB, 3: 256KiB, 4: 512KiB, 5: 1MiB, 6: 2MiB
  input [7:0] RAM_size, //0: noRAM, 1: unused, 2: 8KiB, 3: 32KiB

  output IF_out,
  output IE_out,
  output LCDC_out,
  output JOY_out
);
  //나중에 햇갈릴것 같아서 정리해둠.
  //모듈은 크게 CPU, Memory_Interface, io_register, OAM_DMA, PPU, IF_$FF0F, DMA_$FF46, PPU_io_register, STAT_$FF41, LY_$FF44가 있음.
  //CPU와 Memory_interface를 연결하고 IF_$FF0F, IE_$FFFF로부터 IF와 IE를 받아와야 함. 그리고 CPU의 output인 irq_clear는 IF_$FF0F의 input으로 연결해 줘야 함.
  //IF_$FF0F는 PPU로부터 irq_vblank, irq_LCD를 받아오고, TIMA_$FF05로부터 irq_timer을 받아와야 함. 또 CPU로부터 irq_clear를 받아와야 함.
  //Memory_Interface는 verilator testbench로 ROM, WRAM, RAM, OAM, HRAM등의 신호들과 상호작용 시키고, io_register와 연결해서 I/O register들을 연결해야 함.
  //io_register는 여러 독립된 I/O register 모듈들(IF_$FF0F, TMA_$FF06등등) 각각을 연결해주고 PPU와 관련된 I/O register들 모음인 PPU_io_register과도 연결시켜줘야 함.
  //PPU에서는 PPU_STAT_w_data, PPU_STAT_w_ena, PPU_LY_w_data, PPU_LY_w_ena로 STAT_FF41과 LY_$FF44와 상호작용 시켜줘야 하고 PPU_io_register과 STAT_FF41, LY_$FF44 로부터 각종 레지스터값을 실시간으로 받아와야 함.
  
  assign IF_out = IF;
  assign IE_out = IE;
  assign LCDC_out = LCDC;
  assign JOY_out = JOY;

  //output을 받아서 다른 모듈의 input으로 넣어줄 I/O register들.
  wire [7:0] IF;
  wire [7:0] IE;
  wire [7:0] LCDC;
  wire [7:0] STAT;
  wire [7:0] SCY;
  wire [7:0] SCX;
  wire [7:0] WX;
  wire [7:0] WY;
  wire [7:0] BGP;
  wire [7:0] OBP0;
  wire [7:0] OBP1;
  wire [7:0] DMA;
  wire [7:0] LY;
  wire [7:0] LYC;
  wire [7:0] JOY;
  
  wire cpu_mem_ena;
  wire [15:0] cpu_mem_ad;
  wire cpu_mem_r_ena;
  wire cpu_mem_w_ena;
  wire [7:0] cpu_mem_w_data;
  wire [7:0] cpu_mem_r_data;
  
  wire ppu_mem_ena;
  wire [15:0] ppu_mem_ad;
  wire ppu_mem_r_ena;
  wire ppu_mem_w_ena;
  wire [7:0] ppu_mem_w_data;
  wire [7:0] ppu_mem_r_data;
  
  wire dma_mem_ena;
  wire [15:0] dma_mem_ad;
  wire dma_mem_r_ena;
  wire dma_mem_w_ena;
  wire [7:0] dma_mem_w_data;
  wire [7:0] dma_mem_r_data;
  
  wire io_reg_ena;
  wire [15:0] io_reg_ad;
  wire io_reg_r_ena;
  wire io_reg_w_ena;
  wire [7:0] io_reg_w_data;
  wire [7:0] io_reg_r_data;
  
  wire DMA_start;
  
  wire [7:0] irq_clear;
  wire irq_joypad;
  wire irq_LCD;
  wire irq_vblank;
  wire irq_serial = 0;
  
  wire cpu_stop = 0;
  
  wire PPU_STAT_w_ena;
  wire [7:0] PPU_STAT_w_data;
  wire PPU_LY_w_ena;
  wire [7:0] PPU_LY_w_data;
  
  
  
  
  // ==========================================
  // CPU Module Instantiation
  // ==========================================
  CPU u_CPU (
    .my_clk             (clk),
    .reset              (reset),
    .mem_ena            (cpu_mem_ena), //out
    .mem_ad             (cpu_mem_ad), //out
    .mem_w_data         (cpu_mem_w_data), //out
    .mem_w_ena          (cpu_mem_w_ena), //out
    .mem_r_ena          (cpu_mem_r_ena), //out
    .mem_r_data         (cpu_mem_r_data),
    .mem_r_data_valid   (),
    .IE                 (IE),
    .IF                 (IF),
    .irq_clear          (irq_clear), //out
    .halt               (), //out
    .A_debug            (), //out
    .F_debug            (), //out
    .B_debug            (), //out
    .C_debug            (), //out
    .D_debug            (), //out
    .E_debug            (), //out
    .H_debug            (), //out
    .L_debug            (), //out
    .PC_debug           (), //out
    .SP_debug           (), //out
    .main_state_debug   () //out
  );

  // ==========================================
  // I/O Register Module Instantiation
  // ==========================================
  io_register u_io_register (
    .clk                (clk),
    .reset              (reset),
    .io_reg_ena         (io_reg_ena),
    .io_reg_ad          (io_reg_ad),
    .io_reg_r_ena       (io_reg_r_ena),
    .io_reg_w_ena       (io_reg_w_ena),
    .io_reg_w_data      (io_reg_w_data),
    .io_reg_r_data      (io_reg_r_data), //out
    .IF_out             (IF), //out
    .IE_out             (IE), //out
    .TAC_out            (), //out
    .TMA_out            (), //out
    .STAT_out           (STAT), //out
    .LY_out             (LY), //out
    .LCDC_out           (LCDC), //out
    .SCY_out            (SCY), //out
    .SCX_out            (SCX), //out
    .LYC_out            (LYC), //out
    .BGP_out            (BGP), //out
    .OBP0_out           (OBP0), //out
    .OBP1_out           (OBP1), //out
    .WX_out             (WX), //out
    .WY_out             (WY), //out
    .DMA_out            (DMA), //out
    .JOY_out            (JOY), //out
    .irq_clear          (irq_clear),
    .DMA_start_out      (DMA_start), //out
    .irq_vblank         (irq_vblank), 
    .irq_LCD            (irq_LCD),
    .irq_serial         (irq_serial),
    .cpu_stop           (cpu_stop),
    .PPU_STAT_w_ena     (PPU_STAT_w_ena),
    .PPU_STAT_w_data    (PPU_STAT_w_data),
    .PPU_LY_w_ena       (PPU_LY_w_ena),
    .PPU_LY_w_data      (PPU_LY_w_data),
    .joypad_start       (joypad_start),
    .joypad_select      (joypad_select),
    .joypad_A           (joypad_A),
    .joypad_B           (joypad_B),
    .joypad_down        (joypad_down),
    .joypad_up          (joypad_up),
    .joypad_left        (joypad_left),
    .joypad_right       (joypad_right)
  );

  // ==========================================
  // PPU Module Instantiation
  // ==========================================
  PPU u_PPU (
    .clk                (clk),
    .reset              (reset),
    .mem_ena            (ppu_mem_ena), //out
    .mem_r_ena          (ppu_mem_r_ena), //out
    .mem_w_ena          (ppu_mem_w_ena), //out
    .mem_ad             (ppu_mem_ad), //out
    .mem_w_data         (ppu_mem_w_data), //out
    .mem_r_data         (ppu_mem_r_data),
    .LCDC               (LCDC),
    .STAT               (STAT),
    .SCY                (SCY),
    .SCX                (SCX),
    .LY                 (LY),
    .LYC                (LYC),
    .BGP                (BGP),
    .OBP0               (OBP0),
    .OBP1               (OBP1),
    .WX                 (WX),
    .WY                 (WY),
    .pixel_data         (pixel_data), //out
    .pixel_valid        (pixel_valid), //out
    .hsync              (hsync), //out
    .vsync              (vsync), //out
    .irq_vblank         (irq_vblank), //out
    .irq_LCD            (irq_LCD), //out
    .PPU_STAT_w_data    (PPU_STAT_w_data), //out
    .PPU_STAT_w_ena     (PPU_STAT_w_ena), //out
    .PPU_LY_w_data      (PPU_LY_w_data), //out
    .PPU_LY_w_ena       (PPU_LY_w_ena) //out
  );

  // ==========================================
  // Memory Interface Module Instantiation
  // ==========================================
  Memory_Interface u_Memory_Interface (
    .clk                (clk),
    .reset              (reset),
    .cpu_mem_ena        (cpu_mem_ena),
    .cpu_mem_ad         (cpu_mem_ad),
    .cpu_mem_w_ena      (cpu_mem_w_ena),
    .cpu_mem_r_ena      (cpu_mem_r_ena),
    .cpu_w_data         (cpu_mem_w_data),
    .cpu_r_data         (cpu_mem_r_data), //out
    .ppu_mem_ena        (ppu_mem_ena),
    .ppu_mem_ad         (ppu_mem_ad),
    .ppu_mem_w_ena      (ppu_mem_w_ena),
    .ppu_mem_r_ena      (ppu_mem_r_ena), 
    .ppu_w_data         (ppu_mem_w_data),
    .ppu_r_data         (ppu_mem_r_data), //out
    .dma_mem_ena        (dma_mem_ena),
    .dma_mem_ad         (dma_mem_ad),
    .dma_mem_w_ena      (dma_mem_w_ena),
    .dma_mem_r_ena      (dma_mem_r_ena),
    .dma_w_data         (dma_mem_w_data),
    .dma_r_data         (dma_mem_r_data), //out
    .ROM_ena            (ROM_ena), //out
    .ROM_ad             (ROM_ad), //out
    .ROM_r_ena          (ROM_r_ena), //out
    .ROM_w_ena          (ROM_w_ena), //out
    .ROM_w_data         (ROM_w_data), //out
    .ROM_r_data         (ROM_r_data), 
    .VRAM_ena           (VRAM_ena), //out
    .VRAM_ad            (VRAM_ad), //out
    .VRAM_r_ena         (VRAM_r_ena), //out
    .VRAM_w_ena         (VRAM_w_ena), //out
    .VRAM_w_data        (VRAM_w_data), //out
    .VRAM_r_data        (VRAM_r_data), 
    .ERAM_ena           (ERAM_ena), //out
    .ERAM_ad            (ERAM_ad), //out 
    .ERAM_r_ena         (ERAM_r_ena), //out
    .ERAM_w_ena         (ERAM_w_ena), //out
    .ERAM_w_data        (ERAM_w_data), //out
    .ERAM_r_data        (ERAM_r_data), 
    .WRAM_ena           (WRAM_ena), //out
    .WRAM_ad            (WRAM_ad), //out
    .WRAM_r_ena         (WRAM_r_ena), //out
    .WRAM_w_ena         (WRAM_w_ena), //out
    .WRAM_w_data        (WRAM_w_data), //out
    .WRAM_r_data        (WRAM_r_data), 
    .OAM_ena            (OAM_ena), //out
    .OAM_ad             (OAM_ad), //out
    .OAM_r_ena          (OAM_r_ena), //out
    .OAM_w_ena          (OAM_w_ena), //out
    .OAM_w_data         (OAM_w_data), //out
    .OAM_r_data         (OAM_r_data),
    .HRAM_ena           (HRAM_ena), //out
    .HRAM_ad            (HRAM_ad), //out
    .HRAM_r_ena         (HRAM_r_ena), //out
    .HRAM_w_ena         (HRAM_w_ena), //out
    .HRAM_w_data        (HRAM_w_data), //out
    .HRAM_r_data        (HRAM_r_data), 
    .io_reg_ena         (io_reg_ena), //out
    .io_reg_ad          (io_reg_ad), //out
    .io_reg_r_ena       (io_reg_r_ena), //out
    .io_reg_w_ena       (io_reg_w_ena), //out
    .io_reg_w_data      (io_reg_w_data), //out
    .io_reg_r_data      (io_reg_r_data), 
    .MBC_version        (MBC_version),
    .ROM_size           (ROM_size),
    .RAM_size           (RAM_size)
  );

  // ==========================================
  // OAM DMA Module Instantiation
  // ==========================================
  OAM_DMA u_OAM_DMA (
    .clk                (clk),
    .reset              (reset),
    .mem_ena            (dma_mem_ena), //out
    .mem_r_ena          (dma_mem_r_ena), //out
    .mem_w_ena          (dma_mem_w_ena), //out
    .mem_ad             (dma_mem_ad), //out
    .mem_w_data         (dma_mem_w_data), //out
    .mem_r_data         (dma_mem_r_data), 
    .DMA                (DMA), 
    .DMA_start          (DMA_start)
  );
  
  
endmodule
