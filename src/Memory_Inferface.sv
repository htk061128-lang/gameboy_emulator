module Memory_Interface( //이 모듈이 MBC1과 MBC1 register까지 포함할 예정임. MBC3도 구현할 예정임. 
  input clk,
  input reset,
  //cpu모듈과 상호작용하는 input, output들.
  input cpu_mem_ena, //이 신호가 1이면 버스를 사용하겠다는 신호임.
  input [15:0] cpu_mem_ad,
  input cpu_mem_w_ena,
  input cpu_mem_r_ena,
  input [7:0] cpu_w_data,
  output reg [7:0] cpu_r_data,
  //PPU와 상호작용하는 input, output들.
  input ppu_mem_ena, //이 신호가 1이면 버스를 사용하겠다는 신호임.
  input [15:0] ppu_mem_ad,
  input ppu_mem_w_ena,
  input ppu_mem_r_ena,
  input [7:0] ppu_w_data,
  output reg [7:0] ppu_r_data,
  //DMA와 상호작용하는 input, output들.
  input dma_mem_ena,
  input [15:0] dma_mem_ad,
  input dma_mem_w_ena,
  input dma_mem_r_ena,
  input [7:0] dma_w_data,
  output reg [7:0] dma_r_data,
  //메모리 모듈과 상호작용하는 신호들. verilator로 unsigned char 배열 이용해서 여기와 상호작용 시킬예정.
  output ROM_ena,
  output [20:0] ROM_ad, //MBC도 구현해야 해서 주소 크기는 [20:0]임. 최대 2MB이기 떄문. MBC1이나 MBC3이나 최대크기는 동일함.
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
  
  output ERAM_ena, //External RAM의 줄임말.
  output [14:0] ERAM_ad, //MBC도 구현해야 해서 주소 크기는 [14:0]임. 최대 32KB이기 떄문. MBC1이나 MBC3이나 최대크기는 동일함.
  output ERAM_r_ena,
  output ERAM_w_ena,
  output [7:0] ERAM_w_data,
  input [7:0] ERAM_r_data,
  
  output WRAM_ena,
  output [15:0] WRAM_ad,
  output WRAM_r_ena,
  output WRAM_w_ena,
  output [7:0] WRAM_w_data,
  input [7:0] WRAM_r_data,
  
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
  
  output io_reg_ena, //I/O register들은 각각 모듈로 만들고 그것들을 통합하는 모듈을 또 만들어서 여기에 붙여야 할듯. 여기서는 그냥 합쳐서 구현함.
  output [15:0] io_reg_ad,
  output io_reg_r_ena,
  output io_reg_w_ena,
  output [7:0] io_reg_w_data,
  input [7:0] io_reg_r_data,
  
  //noMBC, MBC1, MBC3 선택 신호.
  input [3:0] MBC_version, //1이면 MBC1이나 noMBC, 3이면 MBC3, 다른 값이면 그냥 noMBC로 가정됨. 처음부터 끝까지 계속 일관된 값으로 들어와야 함. 중간에 바뀌면 안됨. noMBC는 MBC1과 호환되므로 같이 묶었음.
  //카트리지 16'h0148에 ROM size가 명시되어 있어서 Number of ROM banks을 알수있음. 그래서 MBC1기준 최대 7비트중 3~4비트만 사용하게 될수도 있음. 이때 masking이 필요함.
  input [7:0] ROM_size, //이 값도 처음부터 끝까지 계속 일관된 값으로 들어와야 함!!!
  //카트리지 16'h0149에 RAM size 명시되어 있음. masking 위해 필요함.
  input [7:0] RAM_size
); 
  //버스가 총 4개 있다고 가정함. 따라서 동시에 CPU가 ROM을 읽으면서 PPU가 VRAM을 읽는등의 동작이 가능함. 그러나 CPU와 PPU가 동시에 VRAM에 접근하려 할때는 CPU의 접근은 차단됨. 일반적인 우선순위는 DMA > PPU > CPU임.
  //1. (CPU) - HRAM. 
  //2. (CPU vs DMA) - ROM, WRAM, RAM, I/O register.
  //3. (CPU vs PPU) - VRAM.
  //4. (CPU vs DMA vs PPU) - OAM.
  
  //ROM_size 값에 따른 실제 ROM크기 정리.
  //Value	ROM size	Number of ROM banks   필요비트 수
  //$00	    32 KiB	    2 (no banking)        1
  //$01	    64 KiB	    4                     2
  //$02	    128 KiB	    8                     3
  //$03	    256 KiB	    16                    4
  //$04	    512 KiB	    32                    5
  //$05	    1 MiB	    64                    6(여기부터 MBC1 기준으로 추가 2비트가 필요함.)
  //$06	    2 MiB	    128                   7(MBC1기준 추가 2비트 필요.)
  //$07	    4 MiB	    256
  //$08	    8 MiB	    512
  
  //RAM_size 값에 따른 실제 RAM크기 정리.
  //$00: no RAM. 
  //$01: Unused. 
  //$02: 8KiB. 
  //$03: 32KiB. 
  //$04: 128KiB. 
  //$05: 64KiB.
  
  reg [6:0] bank_mask; //MBC1에서 예를들어 ROM크기가 128KiB라면 bank number 비트는 3비트필요함. 그러면 총 7비트중 상위 4비트는 마스킹해야 해서 bank_mask = 7'b0000111;이렇게 하고 &연산해주는 거임.
  reg [1:0] ram_mask; //MBC1에서 RAM_size에 따라서 2비트짜리 MBC1_4000_5FFF를 마스킹 함.
  
  reg dma_main_req; //이 신호가 1이면 CPU는 ROM, WRAM, RAM, I/O register에 접근불가능 함.
  reg dma_oam_req; //이 신호가 1이면 PPU, CPU는 OAM에 접근불가능함.
  
  reg ppu_vram_req; //이 신호가 1이면 CPU는 VRAM에 접근불가능 함.
  reg ppu_oam_req; 
  
  reg cpu_main_req;
  reg cpu_hram_req;
  reg cpu_vram_req;
  reg cpu_oam_req;
  
  reg [3:0] cpu_state;
  reg [3:0] cpu_next;
  
  reg [3:0] ppu_state;
  reg [3:0] ppu_next;
  
  reg [3:0] dma_state;
  reg [3:0] dma_next;
  
  //MBC1 전용 레지스터들 선언.
  reg [7:0] MBC1_0000_1FFF; //RAM Enable (Write Only). [3:0]부분에 4'hA를 쓰면 External RAM을 사용가능하게 함. 다른값이 저장되어 있으면 External RAM 사용이 불가능해짐. 
  reg [4:0] MBC1_2000_3FFF; //ROM Bank Number (Write Only).
  reg [1:0] MBC1_4000_5FFF; //RAM Bank Number — or — Upper Bits of ROM Bank Number (Write Only).
  reg MBC1_6000_7FFF; //Banking Mode Select (Write Only). 
  
  reg MBC1_0000_w_ena; //MBC1_0000_1FFF에 쓰기 제어신호.
  reg MBC1_2000_w_ena; //MBC1_2000_3FFF에 쓰기 제어신호.
  reg MBC1_4000_w_ena; //MBC1_4000_5FFF에 쓰기 제어신호.
  reg MBC1_6000_w_ena; //MBC1_6000_7FFF에 쓰기 제어신호.
  
  reg [7:0] MBC1_0000_w_data;
  reg [4:0] MBC1_2000_w_data;
  reg [1:0] MBC1_4000_w_data;
  reg MBC1_6000_w_data;
  
  //MBC3 전용 레지스터들 선언.
  
  
  always @(*) begin
    cpu_r_data = 8'hFF; //초기값 설정.
    ppu_r_data = 8'hFF;
    dma_r_data = 8'hFF;
    
    dma_main_req = 0; //초기값 설정.
    dma_oam_req = 0;
    ppu_vram_req = 0;
    ppu_oam_req = 0;
    cpu_main_req = 0;
    cpu_hram_req = 0;
    cpu_vram_req = 0;
    cpu_oam_req = 0;
    
    cpu_next = 0; //기본적으로 밑의 코드에서 next를 명시적으로 지정해주지 않으면 계속 state는 0으로 유지됨.
    ppu_next = 0;
    dma_next = 0;
    
    VRAM_ena = 0;
    VRAM_ad = 0;
    VRAM_r_ena = 0;
    VRAM_w_ena = 0;
    VRAM_w_data = 0;
    
    ROM_ena = 0;
    ROM_ad = 0;
    ROM_r_ena = 0;
    ROM_w_ena = 0;
    ROM_w_data = 0;
    
    OAM_ena = 0;
    OAM_ad = 0;
    OAM_r_ena = 0;
    OAM_w_ena = 0;
    OAM_w_data = 0;
    
    HRAM_ena = 0;
    HRAM_ad = 0;
    HRAM_r_ena = 0;
    HRAM_w_ena = 0;
    HRAM_w_data = 0;
    
    WRAM_ena = 0;
    WRAM_ad = 0;
    WRAM_r_ena = 0;
    WRAM_w_ena = 0;
    WRAM_w_data = 0;
    
    ERAM_ena = 0;
    ERAM_ad = 0;
    ERAM_r_ena = 0;
    ERAM_w_ena = 0;
    ERAM_w_data = 0;
    
    io_reg_ena = 0;
    io_reg_ad = 0;
    io_reg_r_ena = 0;
    io_reg_w_ena = 0;
    io_reg_w_data = 0;
    
    MBC1_0000_w_ena = 0;
    MBC1_2000_w_ena = 0;
    MBC1_4000_w_ena = 0;
    MBC1_6000_w_ena = 0;
    
    MBC1_0000_w_data = 0;
    MBC1_2000_w_data = 0;
    MBC1_4000_w_data = 0;
    MBC1_6000_w_data = 0;
    
    bank_mask[6:0] = 7'b1111111; //초기값 설정.
    ram_mask[1:0] = 2'b11;
    
    case(ROM_size) //MBC1 기준.
      8'h00: begin //32KiB
        bank_mask[6:0] = 7'b0000001;
      end
      8'h01: begin //64KiB
        bank_mask[6:0] = 7'b0000011;
      end
      8'h02: begin //128KiB
        bank_mask[6:0] = 7'b0000111;
      end
      8'h03: begin //256KiB
        bank_mask[6:0] = 7'b0001111;
      end
      8'h04: begin //512KiB
        bank_mask[6:0] = 7'b0011111;
      end
      8'h05: begin //1 MiB
        bank_mask[6:0] = 7'b0111111; //여기부터는 MBC추가 2비트까지 붙여서 ROM_ad가 계산되어야 함.
      end
      8'h06: begin //2 MiB
        bank_mask[6:0] = 7'b1111111;
      end
    endcase
    
    case(RAM_size) 
      8'h00: begin //noRAM일때.
      end
      8'h02: begin //8KiB일때. 무조건 뱅크 0으로 고정시킴.
        ram_mask = 2'b00;
      end
      8'h03: begin //32KiB일때.
        ram_mask = 2'b11;
      end
    endcase
    
    if(cpu_mem_ena && ((cpu_mem_ad > 16'h7FFF) & (cpu_mem_ad < 16'hA000 ))) begin //cpu가 VRAM에 접근할때.
      cpu_vram_req = 1;
    end
    else if(cpu_mem_ena && ((cpu_mem_ad > 16'hFDFF) & (cpu_mem_ad < 16'hFEA0 ))) begin //cpu가 OAM에 접근할떄.
      cpu_oam_req = 1;
    end
    else if(cpu_mem_ena && ((cpu_mem_ad > 16'hFF7F) & (cpu_mem_ad < 16'hFFFF ))) begin //cpu가 HRAM에 접근할때. 
      cpu_hram_req = 1;
    end
    else if (cpu_mem_ena) begin //cpu가 ROM, WRAM, External RAM, I/O register에 접근할때.
      cpu_main_req = 1;
    end
    
    if(ppu_mem_ena && ((ppu_mem_ad > 16'h7FFF) & (ppu_mem_ad < 16'hA000))) begin //ppu가 VRAM에 접근할떄.
      ppu_vram_req = 1;
    end
    else if(ppu_mem_ena && ((ppu_mem_ad > 16'hFDFF) & (ppu_mem_ad < 16'hFEA0 ))) begin //ppu가 OAM에 접근할때.
      ppu_oam_req = 1;
    end
    
    if(dma_mem_ena && ((dma_mem_ad > 16'hFDFF) & (dma_mem_ad < 16'hFEA0 ))) begin //dma가 OAM에 접근할때.
      dma_oam_req = 1;
    end
    else if(dma_mem_ena) begin //dma가 oam을 제외한 부분에 접근할때.
      dma_main_req = 1;
    end
    
    case(cpu_state) 
      0: begin //초기상태
        cpu_r_data[7:0] = 8'hFF;
      end
      1: begin //cpu가 VRAM에서 읽은 데이터를 가져오는 경우.
        cpu_r_data[7:0] = VRAM_r_data[7:0]; 
      end
      2: begin //cpu가 HRAM에서 읽은 데이터를 가져오는 경우.
        cpu_r_data[7:0] = HRAM_r_data[7:0];
      end
      3: begin //cpu가 OAM에서 읽은 데이터를 가져오는 경우.
        cpu_r_data[7:0] = OAM_r_data[7:0];
      end
      4: begin //cpu가 ROM에서 읽은 데이터를 가져오는 경우.
        cpu_r_data[7:0] = ROM_r_data[7:0];
      end
      5: begin //cpu가 External RAM에서 읽은 데이터를 가져오는 경우.
        cpu_r_data[7:0] = ERAM_r_data[7:0];
      end
      6: begin //cpu가 WRAM에서 읽은 데이터를 가져오는 경우.
        cpu_r_data[7:0] = WRAM_r_data[7:0];
      end
      7: begin //cpu가 I/O registers에서 읽은 데이터를 가져오는 경우.
        cpu_r_data[7:0] = io_reg_r_data[7:0];
      end
    endcase
    
    case(ppu_state)
      0: begin //초기상태
        ppu_r_data[7:0] = 8'hFF;
      end
      1: begin //ppu가 VRAM에서 읽은 데이터를 가져오는 경우.
        ppu_r_data[7:0] = VRAM_r_data[7:0]; 
      end
      2: begin //ppu가 OAM에서 읽은 데이터를 가져오는 경우.
        ppu_r_data[7:0] = OAM_r_data[7:0];
      end
      3: begin
      end
    endcase
    
    case(dma_state)
      0: begin //초기상태
        dma_r_data[7:0] = 8'hFF;
      end
      1: begin //dma가 OAM에서 읽은 데이터를 가져오는 경우.
        dma_r_data[7:0] = OAM_r_data[7:0];
      end
      2: begin //dma가 ROM에서 읽은 데이터를 가져오는 경우.
        dma_r_data[7:0] = ROM_r_data[7:0];
      end
      3: begin //dma가 External RAM에서 읽은 데이터를 가져오는 경우.
        dma_r_data[7:0] = ERAM_r_data[7:0];
      end
      4: begin //dma가 WRAM에서 읽은 데이터를 가져오는 경우.
        dma_r_data[7:0] = WRAM_r_data[7:0];
      end
      5: begin //dma가 I/O registers에서 읽은 데이터를 가져오는 경우.
        dma_r_data[7:0] = io_reg_r_data[7:0];
      end
    endcase
    
    if(cpu_vram_req & ppu_vram_req) begin //이때 PPU가 우선순위가 높음.
      if(ppu_mem_r_ena) begin
        VRAM_ena = 1;
        VRAM_r_ena = 1;
        VRAM_w_ena = 0;
        VRAM_ad[15:0] = ppu_mem_ad[15:0];
        VRAM_w_data[7:0] = 8'hFF; //읽기일때는 그냥 FF로 설정했음.
        ppu_next = 1; //읽어온 데이터를 ppu_r_data에 주기위해서 ppu_state를 1로 만들어야 함.
      end
      else if(ppu_mem_w_ena) begin
        VRAM_ena = 1;
        VRAM_r_ena = 0;
        VRAM_w_ena = 1;
        VRAM_ad[15:0] = ppu_mem_ad[15:0];
        VRAM_w_data[7:0] = ppu_w_data[7:0];
        ppu_next = 0; //쓰기일때도 그냥 동일하게 ppu_state는 0을 유지함.
      end
      else begin //ppu_mem_ena가 1인데 쓰기, 읽기신호 모두 0일때.
        VRAM_ena = 0; //그냥 VRAM에 접근자체가 되지 않게 설정했음.
        VRAM_r_ena = 0;
        VRAM_w_ena = 0;
        ppu_next = 0;
      end
    end
    else if(cpu_vram_req) begin //else if이므로 cpu만 VRAM에 접근하려고 하는 상황임.
      if(cpu_mem_r_ena) begin
        VRAM_ena = 1;
        VRAM_r_ena = 1;
        VRAM_w_ena = 0;
        VRAM_ad[15:0] = cpu_mem_ad[15:0];
        VRAM_w_data[7:0] = 8'hFF;
        cpu_next = 1;
      end
      else if(cpu_mem_w_ena) begin
        VRAM_ena = 1;
        VRAM_r_ena = 0;
        VRAM_w_ena = 1;
        VRAM_ad[15:0] = cpu_mem_ad[15:0];
        VRAM_w_data[7:0] = cpu_w_data[7:0];
        cpu_next = 0;
      end
      else begin
        VRAM_ena = 0;
        VRAM_r_ena = 0;
        VRAM_w_ena = 0;
        cpu_next = 0;
      end
    end
    
    
    if(cpu_hram_req) begin //HRAM을 CPU만 접근할수 있기때문에 버스 충돌은 발생하지 않음.
      if(cpu_mem_r_ena) begin
        HRAM_ena = 1;
        HRAM_r_ena = 1;
        HRAM_w_ena = 0;
        HRAM_ad[15:0] = cpu_mem_ad[15:0];
        HRAM_w_data[7:0] = 8'hFF;
        cpu_next = 2; //cpu_state를 2로 바꿈으로써 HRAM_r_data를 cpu_r_data에 줄수있게 됨.
      end
      else if(cpu_mem_w_ena) begin
        HRAM_ena = 1;
        HRAM_r_ena = 0;
        HRAM_w_ena = 1;
        HRAM_ad[15:0] = cpu_mem_ad[15:0];
        HRAM_w_data[7:0] = cpu_w_data[7:0];
        cpu_next = 0;
      end
      else begin
        HRAM_ena = 0;
        HRAM_r_ena = 0;
        HRAM_w_ena = 0;
        cpu_next = 0;
      end
    end
    
    
    if(dma_oam_req) begin //DMA가 OAM에 접근할때.
      if(dma_mem_r_ena) begin
        OAM_ena = 1;
        OAM_r_ena = 1;
        OAM_w_ena = 0;
        OAM_ad[15:0] = dma_mem_ad[15:0];
        OAM_w_data[7:0] = 8'hFF;
        dma_next = 1; //dma_state를 1로 바꿈으로써 OAM_r_data를 dma_r_data에 줄수있게 됨.
      end
      else if(dma_mem_w_ena) begin
        OAM_ena = 1;
        OAM_r_ena = 0;
        OAM_w_ena = 1;
        OAM_ad[15:0] = dma_mem_ad[15:0];
        OAM_w_data[7:0] = dma_w_data[7:0];
        dma_next = 0;
      end
      else begin
        OAM_ena = 0;
        OAM_r_ena = 0;
        OAM_w_ena = 0;
        dma_next = 0;
      end
    end
    else if(ppu_oam_req) begin //DMA가 OAM에 접근하려고 하지 않고 PPU가 접근하려고 하는 상황.
      if(ppu_mem_r_ena) begin
        OAM_ena = 1;
        OAM_r_ena = 1;
        OAM_w_ena = 0;
        OAM_ad[15:0] = ppu_mem_ad[15:0];
        OAM_w_data[7:0] = 8'hFF;
        ppu_next = 2; //ppu_state를 2로 바꿈으로써 OAM_r_data를 ppu_r_data에 줄수있게 됨.
      end
      else if(ppu_mem_w_ena) begin
        OAM_ena = 1;
        OAM_r_ena = 0;
        OAM_w_ena = 1;
        OAM_ad[15:0] = ppu_mem_ad[15:0];
        OAM_w_data[7:0] = ppu_w_data[7:0];
        ppu_next = 0;
      end
      else begin
        OAM_ena = 0;
        OAM_r_ena = 0;
        OAM_w_ena = 0;
        ppu_next = 0;
      end
    end
    else if(cpu_oam_req) begin //오직 CPU만 OAM에 접근하려고 하는 경우.
      if(cpu_mem_r_ena) begin
        OAM_ena = 1;
        OAM_r_ena = 1;
        OAM_w_ena = 0;
        OAM_ad[15:0] = cpu_mem_ad[15:0];
        OAM_w_data[7:0] = 8'hFF;
        cpu_next = 3; //cpu_state를 3로 바꿈으로써 OAM_r_data를 cpu_mem_r_data에 줄수있게 됨.
      end
      else if(cpu_mem_w_ena) begin
        OAM_ena = 1;
        OAM_r_ena = 0;
        OAM_w_ena = 1;
        OAM_ad[15:0] = cpu_mem_ad[15:0];
        OAM_w_data[7:0] = cpu_w_data[7:0];
        cpu_next = 0;
      end
      else begin
        OAM_ena = 0;
        OAM_r_ena = 0;
        OAM_w_ena = 0;
        cpu_next = 0;
      end
    end
    
    if(MBC_version == 1) begin //즉 MBC1일때. 혹은 noMBC일때.
      if(dma_main_req) begin //dma가 ROM, External RAM, I/O register, WRAM등에 접근할때. 
        if(dma_mem_r_ena) begin
          case(1'b1)
            (dma_mem_ad >= 16'h0000 && dma_mem_ad <= 16'h3FFF): begin //ROM부분.
              case(MBC1_6000_7FFF)
                0: begin //mode 0(default) 일때.
                  ROM_ena = 1;
                  ROM_r_ena = 1;
                  ROM_w_ena = 0;
                  ROM_ad[20:0] = {2'b0, 5'b0, dma_mem_ad[13:0]};
                  ROM_w_data[7:0] = 8'hFF;
                  dma_next = 2; //dma_state가 2로 바뀌면서 ROM_r_data가 dma_r_data에 전달됨.
                end
                1: begin //mode 1 일때.
                  ROM_ena = 1;
                  ROM_r_ena = 1;
                  ROM_w_ena = 0;
                  ROM_ad[20:0] = {(bank_mask[6:0] & {MBC1_4000_5FFF[1:0], 5'b0}), dma_mem_ad[13:0]};
                  ROM_w_data[7:0] = 8'hFF;
                  dma_next = 2;
                end
              endcase
            end
            (dma_mem_ad >= 16'h4000 && dma_mem_ad <= 16'h7FFF): begin //ROM부분.
              case(MBC1_6000_7FFF)
                0: begin //mode 0(default) 일때.
                  ROM_ena = 1;
                  ROM_r_ena = 1;
                  ROM_w_ena = 0;
                  ROM_ad[20:0] = {(bank_mask[6:0] & {MBC1_4000_5FFF[1:0], MBC1_2000_3FFF[4:0]}), dma_mem_ad[13:0]};
                  ROM_w_data[7:0] = 8'hFF;
                  dma_next = 2; //dma_state가 2로 바뀌면서 ROM_r_data가 dma_r_data에 전달됨.
                end
                1: begin //mode 1 일때.
                  ROM_ena = 1;
                  ROM_r_ena = 1;
                  ROM_w_ena = 0;
                  ROM_ad[20:0] = {(bank_mask[6:0] & {MBC1_4000_5FFF[1:0], MBC1_2000_3FFF[4:0]}), dma_mem_ad[13:0]};
                  ROM_w_data[7:0] = 8'hFF;
                  dma_next = 2;
                end
              endcase
            end
            (dma_mem_ad >= 16'hA000 && dma_mem_ad <= 16'hBFFF): begin //External RAM 읽을떄.
              if((MBC1_0000_1FFF[3:0] == 4'hA) & (RAM_size != 8'h00)) begin //0000–1FFF — RAM Enable (Write Only) 신호가 1로 켜져있어야 접근이 가능함. 또한 No RAM이 아니어야 함.
                case(MBC1_6000_7FFF)
                    0: begin //mode 0(default) 일때.
                      ERAM_ena = 1;
                      ERAM_r_ena = 1;
                      ERAM_w_ena = 0;
                      ERAM_ad[14:0] = {2'b0, dma_mem_ad[12:0]};
                      ERAM_w_data[7:0] = 8'hFF;
                      dma_next = 3; //dma_state가 3로 바뀌면서 ERAM_r_data가 dma_r_data에 전달됨.
                    end
                    1: begin //mode 1 일때.
                      ERAM_ena = 1;
                      ERAM_r_ena = 1;
                      ERAM_w_ena = 0;
                      ERAM_ad[14:0] = {{ram_mask[1:0] & MBC1_4000_5FFF[1:0]}, dma_mem_ad[12:0]}; //ram_mask는 8KiB면 2'b00, 32KiB면 2'b11임.
                      ERAM_w_data[7:0] = 8'hFF;
                      dma_next = 3; //dma_state가 3로 바뀌면서 ERAM_r_data가 dma_r_data에 전달됨.
                    end
                endcase
              end
            end
            (dma_mem_ad >= 16'hC000 && dma_mem_ad <= 16'hDFFF): begin //WRAM을 읽을떄.
              WRAM_ena = 1;
              WRAM_r_ena = 1;
              WRAM_w_ena = 0;
              WRAM_ad[15:0] = dma_mem_ad[15:0];
              WRAM_w_data[7:0] = 8'hFF;
              dma_next = 4;
            end 
            (dma_mem_ad >= 16'hE000 && dma_mem_ad <= 16'hFDFF): begin //Echo RAM. WRAM부분과 똑같이 구현.
              WRAM_ena = 1;
              WRAM_r_ena = 1;
              WRAM_w_ena = 0;
              WRAM_ad[15:0] = dma_mem_ad[15:0] - 16'h2000;
              WRAM_w_data[7:0] = 8'hFF;
              dma_next = 4;
            end
            (dma_mem_ad >= 16'hFF00 && dma_mem_ad <= 16'hFF7F): begin //I/O register를 읽을떄.
              io_reg_ena = 1;
              io_reg_r_ena = 1;
              io_reg_w_ena = 0;
              io_reg_ad[15:0] = dma_mem_ad[15:0];
              io_reg_w_data[7:0] = 8'hFF;
              dma_next = 5; ////dma_state가 5로 바뀌면서 io_reg_r_data가 dma_r_data에 전달됨.
            end
            (dma_mem_ad == 16'hFFFF): begin //IE 레지스터 읽을떄. IE레지스터 모듈도 그냥 I/O registers 모듈에 다 집어넣어서 접근하게 할듯? 
            end
          endcase
        end
        else if(dma_mem_w_ena) begin //dma는 이 구간에서는 쓰기를 하지않음. OAM구간에서만 쓰기를 하기떄문에 꼭 구현할 필요는 없음.
          case(1'b1)
            (cpu_mem_ad >= 16'h0000 && cpu_mem_ad <= 16'h1FFF): begin //MBC1_0000_1FFF에 쓸때.
            end
            (cpu_mem_ad >= 16'h2000 && cpu_mem_ad <= 16'h3FFF): begin //MBC1_2000_3FFF에 쓸때.
            end
            (cpu_mem_ad >= 16'h4000 && cpu_mem_ad <= 16'h5FFF): begin //MBC1_4000_5FFF에 쓸때.
            end
            (cpu_mem_ad >= 16'h6000 && cpu_mem_ad <= 16'h7FFF): begin //MBC1_6000_7FFF에 쓸때.
            end
            (dma_mem_ad >= 16'hA000 && dma_mem_ad <= 16'hBFFF): begin //External RAM에 쓸때.
              if((MBC1_0000_1FFF[3:0] == 4'hA) & (RAM_size != 8'h00)) begin //0000–1FFF — RAM Enable (Write Only) 신호가 1로 켜져있어야 접근이 가능함. 또한 No RAM이 아니어야 함.
              end
            end
            (dma_mem_ad >= 16'hC000 && dma_mem_ad <= 16'hDFFF): begin //WRAM을 쓸때.
            end
            (dma_mem_ad >= 16'hE000 && dma_mem_ad <= 16'hFDFF): begin //Echo RAM.
            end
            (dma_mem_ad >= 16'hFF00 && dma_mem_ad <= 16'hFF7F): begin //I/O register에 쓸때.
            end
            (dma_mem_ad == 16'hFFFF): begin //IE 레지스터 쓸때.
            end
          endcase
        end
        else begin //dma_mem_r_ena, dma_mem_w_ena 둘다 0인 잘못된 상황.
        end
      end //if(dma_main_req)의 end
      else if(cpu_main_req) begin //dma는 접근하지 않고 cpu만 ROM, External RAM, I/O register, WRAM, IE에 접근할때.
        if(cpu_mem_r_ena) begin
          case(1'b1)
            (cpu_mem_ad >= 16'h0000 && cpu_mem_ad <= 16'h3FFF): begin //ROM부분.
              case(MBC1_6000_7FFF)
                0: begin //mode 0(default) 일때.
                  ROM_ena = 1;
                  ROM_r_ena = 1;
                  ROM_w_ena = 0;
                  ROM_ad[20:0] = {2'b0, 5'b0, cpu_mem_ad[13:0]};
                  ROM_w_data[7:0] = 8'hFF;
                  cpu_next = 4; //cpu_state가 4로 바뀌면서 ROM_r_data가 cpu_r_data에 전달됨.
                end
                1: begin //mode 1 일때.
                  ROM_ena = 1;
                  ROM_r_ena = 1;
                  ROM_w_ena = 0;
                  ROM_ad[20:0] = {(bank_mask[6:0] & {MBC1_4000_5FFF[1:0], 5'b0}), cpu_mem_ad[13:0]};
                  ROM_w_data[7:0] = 8'hFF;
                  cpu_next = 4;
                end
              endcase
            end
            (cpu_mem_ad >= 16'h4000 && cpu_mem_ad <= 16'h7FFF): begin //ROM부분. 
              case(MBC1_6000_7FFF)
                0: begin //mode 0(default) 일때.
                  ROM_ena = 1;
                  ROM_r_ena = 1;
                  ROM_w_ena = 0;
                  ROM_ad[20:0] = {(bank_mask[6:0] & {MBC1_4000_5FFF[1:0], MBC1_2000_3FFF[4:0]}), cpu_mem_ad[13:0]};
                  ROM_w_data[7:0] = 8'hFF;
                  cpu_next = 4;
                end
                1: begin //mode 1 일때. 여기서는 똑같음.
                  ROM_ena = 1;
                  ROM_r_ena = 1;
                  ROM_w_ena = 0;
                  ROM_ad[20:0] = {(bank_mask[6:0] & {MBC1_4000_5FFF[1:0], MBC1_2000_3FFF[4:0]}), cpu_mem_ad[13:0]};
                  ROM_w_data[7:0] = 8'hFF;
                  cpu_next = 4;
                end
              endcase
            end
            (cpu_mem_ad >= 16'hA000 && cpu_mem_ad <= 16'hBFFF): begin //External RAM을 읽으려고 할때.
              if((MBC1_0000_1FFF[3:0] == 4'hA) & (RAM_size != 8'h00)) begin //0000–1FFF — RAM Enable (Write Only) 신호가 1로 켜져있어야 접근이 가능함. 또한 No RAM이 아니어야 함.
                case(MBC1_6000_7FFF)
                  0: begin //mode 0(default) 일때.
                    ERAM_ena = 1;
                    ERAM_r_ena = 1;
                    ERAM_w_ena = 0;
                    ERAM_ad[14:0] = {2'b0, cpu_mem_ad[12:0]};
                    ERAM_w_data[7:0] = 8'hFF;
                    cpu_next = 5; //cpu_state가 5로 바뀌면서 ERAM_r_data가 cpu_r_data에 전달됨.
                  end
                  1: begin //mode 1 일때.
                    ERAM_ena = 1;
                    ERAM_r_ena = 1;
                    ERAM_w_ena = 0;
                    ERAM_ad[14:0] = {{ram_mask[1:0] & MBC1_4000_5FFF[1:0]}, cpu_mem_ad[12:0]}; //ram_mask는 8KiB면 2'b00, 32KiB면 2'b11임.
                    ERAM_w_data[7:0] = 8'hFF;
                    cpu_next = 5; //cpu_state가 5로 바뀌면서 ERAM_r_data가 cpu_r_data에 전달됨.
                  end
                endcase
              end
            end
            (cpu_mem_ad >= 16'hC000 && cpu_mem_ad <= 16'hDFFF): begin //WRAM을 읽을때.
              WRAM_ena = 1;
              WRAM_r_ena = 1;
              WRAM_w_ena = 0;
              WRAM_ad[15:0] = cpu_mem_ad[15:0];
              cpu_next = 6; //cpu_state가 6로 바뀌면서 WRAM_r_data가 cpu_r_data에 전달됨.
            end
            (cpu_mem_ad >= 16'hE000 && cpu_mem_ad <= 16'hFDFF): begin //Echo RAM. 이 부분은 WRAM이랑 똑같이 구현되어서 이 주소에 접근하는건 그냥 WRAM에 접근하는거랑 똑같이 취급됨.
              WRAM_ena = 1;
              WRAM_r_ena = 1;
              WRAM_w_ena = 0;
              WRAM_ad[15:0] = cpu_mem_ad[15:0] - 16'h2000;
              cpu_next = 6; //cpu_state가 6로 바뀌면서 WRAM_r_data가 cpu_r_data에 전달됨.
            end
            (cpu_mem_ad >= 16'hFF00 && cpu_mem_ad <= 16'hFF7F): begin //I/O register을 읽을때.
              io_reg_ena = 1;
              io_reg_r_ena = 1;
              io_reg_w_ena = 0;
              io_reg_ad[15:0] = cpu_mem_ad[15:0];
              cpu_next = 7; //cpu_state가 7로 바뀌면서 io_reg_r_data가 cpu_r_data에 전달됨.
            end
            (cpu_mem_ad == 16'hFFFF): begin //IE 레지스터를 읽을때. IE 모듈도 I/O registers 모듈에 통합해서 접근하게 구현할거 같아서 그냥 비워둠.
            end
          endcase
        end
        else if(cpu_mem_w_ena) begin
          case(1'b1)
            (cpu_mem_ad >= 16'h0000 && cpu_mem_ad <= 16'h1FFF): begin //MBC1_0000_1FFF 레지스터에 쓸때.
              MBC1_0000_w_ena = 1;
              MBC1_0000_w_data[7:0] = cpu_w_data[7:0];
            end
            (cpu_mem_ad >= 16'h2000 && cpu_mem_ad <= 16'h3FFF): begin //MBC1_2000_3FFF 레지스터에 쓸때.
              MBC1_2000_w_ena = 1;
              MBC1_2000_w_data[4:0] = cpu_w_data[4:0]; //이때 5'b00000을 써도 자동으로 5'b00001이 써짐. 따라서 5'b00000을 쓰는것은 불가능함.
            end
            (cpu_mem_ad >= 16'h4000 && cpu_mem_ad <= 16'h5FFF): begin //MBC1_4000_5FFF 레지스터에 쓸때.
              MBC1_4000_w_ena = 1;
              MBC1_4000_w_data[1:0] = cpu_w_data[1:0];
            end
            (cpu_mem_ad >= 16'h6000 && cpu_mem_ad <= 16'h7FFF): begin //MBC1_6000_7FFF 레지스터에 쓸때.
              MBC1_6000_w_ena = 1;
              MBC1_6000_w_data = cpu_w_data[0];
            end
            (cpu_mem_ad >= 16'hA000 && cpu_mem_ad <= 16'hBFFF): begin //External RAM을 쓰려고 할때.
              if((MBC1_0000_1FFF[3:0] == 4'hA) & (RAM_size != 8'h00)) begin //0000–1FFF — RAM Enable (Write Only) 신호가 1로 켜져있어야 접근이 가능함. 또한 No RAM이 아니어야 함.
                case(MBC1_6000_7FFF)
                  0: begin //mode 0(default) 일때.
                    ERAM_ena = 1;
                    ERAM_r_ena = 0;
                    ERAM_w_ena = 1;
                    ERAM_ad[14:0] = {2'b0, cpu_mem_ad[12:0]};
                    ERAM_w_data[7:0] = cpu_w_data[7:0];
                    cpu_next = 0; 
                  end
                  1: begin //mode 1 일때.
                    ERAM_ena = 1;
                    ERAM_r_ena = 0;
                    ERAM_w_ena = 1;
                    ERAM_ad[14:0] = {{ram_mask[1:0] & MBC1_4000_5FFF[1:0]}, cpu_mem_ad[12:0]}; //ram_mask는 8KiB면 2'b00, 32KiB면 2'b11임.
                    ERAM_w_data[7:0] = cpu_w_data[7:0];
                    cpu_next = 0;
                  end
                endcase
              end
            end
            (cpu_mem_ad >= 16'hC000 && cpu_mem_ad <= 16'hDFFF): begin //WRAM에 쓸때.
              WRAM_ena = 1;
              WRAM_r_ena = 0;
              WRAM_w_ena = 1;
              WRAM_ad[15:0] = cpu_mem_ad[15:0];
              cpu_next = 0; 
            end
            (cpu_mem_ad >= 16'hE000 && cpu_mem_ad <= 16'hFDFF): begin //Echo RAM. 
              WRAM_ena = 1;
              WRAM_r_ena = 0;
              WRAM_w_ena = 1;
              WRAM_ad[15:0] = cpu_mem_ad[15:0] - 16'h2000; //16'h2000를 빼주어서 WRAM에 접근되게 함.
              cpu_next = 0; 
            end
            (cpu_mem_ad >= 16'hFF00 && cpu_mem_ad <= 16'hFF7F): begin //I/O register에 쓸때.
              io_reg_ena = 1;
              io_reg_r_ena = 0;
              io_reg_w_ena = 1;
              io_reg_ad[15:0] = cpu_mem_ad[15:0];
              cpu_next = 0; 
            end
            (cpu_mem_ad == 16'hFFFF): begin //IE 레지스터에 쓸때. IE도 I/O registers 모듈에 통합할 생각이어서 비워둠.
            end
          endcase
        end
        else begin //cpu_mem_r_ena, cpu_mem_w_ena 둘다 0일때. 버그난 상황.
        end
      end //else if(cpu_main_req)의 end
    end //if(MBC_version == 1)의 end
    else if(MBC_version == 3) begin //즉 MBC3일때. 즉 MBC3일때. 즉 MBC3일때. 즉 MBC3일때. 즉 MBC3일때. 즉 MBC3일때. 즉 MBC3일때. 즉 MBC3일때. 즉 MBC3일때. 즉 MBC3일때.
      if(dma_main_req) begin //dma가 ROM, External RAM, I/O register, WRAM등에 접근할때. 
        
      end //if(dma_main_req)의 end
      else if(cpu_main_req) begin //dma는 접근하지 않고 cpu만 ROM, External RAM, I/O register, WRAM, IE에 접근할때.
        if(cpu_mem_r_ena) begin
          case(1'b1)
            (cpu_mem_ad >= 16'h0000 && cpu_mem_ad <= 16'h3FFF): begin //ROM부분.
            end
            (cpu_mem_ad >= 16'h4000 && cpu_mem_ad <= 16'h7FFF): begin //ROM부분. 
            end
            (cpu_mem_ad >= 16'hA000 && cpu_mem_ad <= 16'hBFFF): begin //External RAM을 읽으려고 할때.
            end
            (cpu_mem_ad >= 16'hC000 && cpu_mem_ad <= 16'hDFFF): begin //WRAM을 읽을때.
            end
            (cpu_mem_ad >= 16'hE000 && cpu_mem_ad <= 16'hFDFF): begin //Echo RAM. 
            end
            (cpu_mem_ad >= 16'hFF00 && cpu_mem_ad <= 16'hFF7F): begin //I/O register을 읽을때.
            end
            (cpu_mem_ad == 16'hFFFF): begin //IE 레지스터를 읽을때.
            end
          endcase
        end
        else if(cpu_mem_w_ena) begin
          case(1'b1)
            (cpu_mem_ad >= 16'h0000 && cpu_mem_ad <= 16'h1FFF): begin //MBC3_0000_1FFF 레지스터에 쓸때.
            end
            (cpu_mem_ad >= 16'h2000 && cpu_mem_ad <= 16'h3FFF): begin //MBC3_2000_3FFF 레지스터에 쓸때.
            end
            (cpu_mem_ad >= 16'h4000 && cpu_mem_ad <= 16'h5FFF): begin //MBC3_4000_5FFF 레지스터에 쓸때.
            end
            (cpu_mem_ad >= 16'h6000 && cpu_mem_ad <= 16'h7FFF): begin //MBC3_6000_7FFF 레지스터에 쓸때.
            end
            (cpu_mem_ad >= 16'hA000 && cpu_mem_ad <= 16'hBFFF): begin //External RAM or MBC3_A000_BFFF을 쓰려고 할때.
            end
            (cpu_mem_ad >= 16'hC000 && cpu_mem_ad <= 16'hDFFF): begin //WRAM에 쓸때.
            end
            (cpu_mem_ad >= 16'hE000 && cpu_mem_ad <= 16'hFDFF): begin //Echo RAM. 
            end
            (cpu_mem_ad >= 16'hFF00 && cpu_mem_ad <= 16'hFF7F): begin //I/O register에 쓸때.
            end
            (cpu_mem_ad == 16'hFFFF): begin //IE 레지스터에 쓸때.
            end
          endcase
        end
        else begin //cpu_mem_r_ena, cpu_mem_w_ena 둘다 0일때. 버그난 상황.
        end
      end //else if(cpu_main_req)의 end
    end //else if(MBC_version == 3)의 end
    else begin //1, 3 이외의 숫자일떄는 오류임.
    end
            
    
  end //always @(*)의 end
  
  always @(posedge clk) begin
    if(reset) begin
      cpu_state <= 0;
      ppu_state <= 0;
      dma_state <= 0;
      MBC1_0000_1FFF[7:0] <= 0; //MBC1의 모든 레지스터들이 0으로 유지된다면 noMBC와의 호환성이 보장됨.
      MBC1_2000_3FFF[4:0] <= 5'b00001; //bank 1번으로 초기화 해야 함.
      MBC1_4000_5FFF[1:0] <= 0;
      MBC1_6000_7FFF <= 0;
      
    end
    else begin
      cpu_state <= cpu_next;
      ppu_state <= ppu_next;
      dma_state <= dma_next; 
      
      if(MBC1_0000_w_ena) begin //MBC1_0000_1FFF에 쓰기위한 제어신호.
        MBC1_0000_1FFF[7:0] <= MBC1_0000_w_data[7:0];
      end
      
      if(MBC1_2000_w_ena) begin //MBC1_2000_3FFF에 쓰기위한 제어신호.
        if(MBC1_2000_w_data[4:0] == 5'b00000) begin //5'b00000을 쓰려고 하면 자동으로 5'b00001이 써짐.
          MBC1_2000_3FFF[4:0] <= 5'b00001;
        end
        else begin
          MBC1_2000_3FFF[4:0] <= MBC1_2000_w_data[4:0];
        end
      end
      
      if(MBC1_4000_w_ena) begin //MBC1_4000_5FFF에 쓰기위한 제어신호.
        MBC1_4000_5FFF[1:0] <= MBC1_4000_w_data[1:0];
      end
      
      if(MBC1_6000_w_ena) begin //MBC1_6000_7FFF에 쓰기위한 제어신호.
        MBC1_6000_7FFF <= MBC1_6000_w_data;
      end
      
    end
  end
  
endmodule
