module PPU(
  input clk,
  input reset,
  //Memory_Interface와 상호작용하는 신호들.
  output reg mem_ena,
  output reg mem_r_ena,
  output reg mem_w_ena,
  output reg [15:0] mem_ad,
  output reg [7:0] mem_w_data,
  input [7:0] mem_r_data,
  //PPU_io_register에서 오는 관련 I/O register 값 신호들.
  input [7:0] LCDC,
  input [7:0] STAT,// STAT은 STAT_$FF41 모듈에서 옴.
  input [7:0] SCY,
  input [7:0] SCX,
  input [7:0] LY, // LY는 LY_$FF44 모듈에서 옴.
  input [7:0] LYC,
  input [7:0] BGP,
  input [7:0] OBP0,
  input [7:0] OBP1,
  input [7:0] WX,
  input [7:0] WY,
  //화면에 나가야 할 픽셀값을 보내줘야 함.
  output reg [1:0] pixel_data, //2비트 짜리 픽셀 한개의 데이터. 0 = White, 1 = Light gray, 2 = Dark gray, 3 = Black
  output reg pixel_valid, //이 신호가 같이 1이어야지 유효한 pixel_data임.
  output reg hsync, //이 신호가 1이면 이 픽셀은 다음줄이라는 뜻임. 즉 한 프레임의 각 144개의 줄의 제일 왼쪽 첫번째 픽셀데이터임을 나타냄. 한 프레임에 144번 1이 되어야 한다는 소리임.
  output reg vsync, //이 신호가 1이면 이 픽셀은 다음 프레임이라는 뜻임. 즉 한 프레임의 첫번째 scanline의 제일 왼쪽 첫번째 픽셀데이터임을 나타냄.
  //IF_$FF0F에게 신호를 보내서 인터럽트 일으키게 해줘야 함.
  output reg irq_vblank, //이 신호가 1이면 클럭에지때 IF가 세팅됨.
  output reg irq_LCD,
  //STAT_$FF41 모듈로 STAT[2:0]을 설정하기 위한 신호. [7:3]부분은 반영되지 않음.
  output reg [7:0] PPU_STAT_w_data,
  output reg PPU_STAT_w_ena,
  //LY_$FF44 모듈로 LY[7:0]을 설정하기 위한 신호.
  output reg [7:0] PPU_LY_w_data,
  output reg PPU_LY_w_ena
);
  //한 프레임은 154개의 scanline으로 구성되고 0-143 scanline 동안 화면이 한줄 한줄 위에서 아래로, 왼쪽에서 오른쪽으로 그려짐. 144-153구간은 Vblank 구간임.
  //1dot은 4MHz clk에서 클럭에지 사이 시간이라고 생각하면 됨. clk edge - 1dot - clk edge - 1dot - clk edge. 이런 느낌임.
  //각 scanline은 총 80dot + 376dot = 456dot소요 되고. vblank 기간은 총 10개의 144-153까지의 scanline소요 시간이므로 10 * 456 = 4560dot임.
  //PPU는 LCDC[7](LCD Enable)이 1이 되면
  //PPU는 cpu와 동일한 4MHz clk을 공유해야 하고 LCDC[7](LCD Enable)이 1이 되는 4MHz클럭에지에서 PPU는 LY=0, Mode 2 (OAM Search)부터 시작함.
  
  //LCDC 레지스터 정리
  //bit7: LCD Enable. 0 = Off; 1 = On
  //bit6: Window tile map area.  0 = 9800–9BFF; 1 = 9C00–9FFF
  //bit5: Window enable. 0 = Off; 1 = On
  //bit4: BG & Window Tile Addressing Select. 0: “$8800 method”. 1: “$8000 method”. 오브젝트는 항상 $8000 addressing mode를 사용함.
  //bit3: BG tile map area. 0 = 9800–9BFF; 1 = 9C00–9FFF
  //bit2: OBJ size. 0 = 8×8; 1 = 8×16
  //bit1: OBJ enable. 0 = Off; 1 = On
  //bit0: BG & Window enable. 0 = Off; 1 = On
  
  //STAT 레지스터 정리.
  //bit7: 사용되지 않음. 항상 1로 설정해야 함.
  //bit6: LYC=LY INT. LYC=LY일 때 인터럽트 발생 여부 설정
  //bit5: Mode 2 INT. 모드 2(OAM Search) 진입 시 인터럽트 발생 설정
  //bit4: Mode 1 INT. 모드 1(V-Blank) 진입 시 인터럽트 발생 설정
  //bit3: Mode 0 INT. 모드 0(H-Blank) 진입 시 인터럽트 발생 설정
  //bit2: LYC == LY 여부 플래그. 0: 불일치, 1: 일치.
  //bit 1-0: PPU Mode(0-3). PPU가 비활성화 상태이면(LCDC.7 == 0) 00으로 설정되어야 함.  $LY($FF44) 레지스터도 즉시 0이 되어야 함.
  
  //OAM 데이터 정리. 
  //하나의 오브젝트랑 4 바이트고 최대 40개의 오브젝트 정보를 저장할수 있음. 그래서 160바이트임. 
  //byte 0: Y Position. Y = Object’s vertical position on the screen + 16.
  //byte 1: X Position. X = Object’s horizontal position on the screen + 8.
  //byte 2: Tile Index. 8*8 size일때 - 16'h8000 + (16 * Tile Index)에서부터 16바이트까지. (무조건 $8000 method)
  //예를 들어 Tile Index가 0이면 OBJ타일은 $8000-$800F임. Tile Index가 1이면 OBJ타일은 $8010-$801F임. Tile Index가 255이면 OBJ 타일은 $8FF0-$8FFF임.
  //8*16 size이면 위쪽 타일 인덱스는 Tile Index & 16'hFE이고 아래쪽 타일 인덱스는 Tile Index & 16'h01임.
  
  //byte 3: Attributes/Flags. 바로 아래 자세히 설명.
  // |
  //bit7: Priority.
  //구체적으로 OBJ 픽셀이 0이면 Priority값은 고려하지 않고 무조건 BG, Win 픽셀이 출력됨. OBJ 픽셀이 0이 아니고(1-3) Priority가 1이면 BG, Win 픽셀이 1-3이면 배경이 출력되고, BG, Win 픽셀이 0이면 OBJ가 출력됨.
  //또한 OBJ 픽셀이 0이 아니고(1-3) Priority가 0이면 OBJ 픽셀을 출력함.
  //bit6: Y flip. 상하 반전 (0: 정상, 1: 거꾸로) 
  //bit5: X flip. 좌우 반전 (0: 정상, 1: 거꾸로) 
  //bit4: DMG palette. 팔레트 선택 (0: OBP0, 1: OBP1) 
  //bit 3-0: DMG에서는 사용되지 않음.
  
  //생각 정리. 일단 mode3, mode0 타이밍 정확하게 맞출 생각하지 말고 일단 mode3를 172dot로 고정하고 mode1을 204dot로 고정하자. 
  //OAM_SCAN은 80dot로 정해져 있고, OAM에서 Y position 싹 읽어오고 line_counter랑 비교해서( (Y position - 16) <= line_counter <= (Y position - 16) + 7 ) 선착순으로 10개 OBJ 선정해야 함.
  //그 10개의 OBJ의 Priority 비트랑, Y flip, X filp, DMG palette, Tile Index 저장하고, 이 정보들 바탕으로 이 scanline의 OBJ타일정보가 들어있는 [319:0]크기의 배열(160개의 픽셀의 개당 2비트씩 데이터)을 구성하자.
  //OBJ가 없는 구간은 2'b00으로 넣어서 투명인걸로 하면 될듯? 어차피 BG, Win의 [319:0]크기의 배열이랑 합칠거임.
  //이러면 메모리 입출력은 일단 Y position 싹 읽으려면 40번 필요하고, 10개의 OBJ의 추가 바이트 읽으려면 3 * 10 = 30번 추가. 그리고 타일데이터 읽어오려면 한줄당 2바이트씩 10번이니 20번 추가임. 총 90번의 메모리 입출력이 필요함.
  //80dot면 빠듯하기는 한데 메모리 입출력이랑 연산이랑, 레지스터 갱신이랑 겹쳐서 하면 가능하기는 할듯?
  
  //m2에지, m3에지, m4에지, m1에지(n dot 지남.), m2에지, m3에지, m4에지, m1에지(DRAW_PIXEL로 main_state 변경.) 
  //메 클럭에지마다 메모리 읽기 요청하고, 클럭에지마다 mem_r_data 받으면서 동시에 메모리 읽기 요청하는 수법으로 1dot당 2번까지 읽기 가능할듯? 이러면 45dot면 90번 입출력 가능함.
  //m2에지(mem_r_ena <= 1;), m3에지(mem_r_ena <= 1; mem_r_data받아서 연산중), m4에지(연산한거 저장, mem_r_data 받아서 연산중), m1에지(main_state변경, 연산한거 저장)
  
  //mode3(drawing pixel)는 172dot안에 필요한 작업을 끝내야 함. 그리고 실시간으로 output인 pixel_data[1:0]를 내보내야 함. 
  //pixel_data 출력할때 LDCD[0](BG & Window enable), LCDC[5](Window enable), LCDC[1](OBJ enable)고려 해서 출력을 결정해야 함. 그리고 일단 팔레트는 무시하자. 
  //LCDC[6](Window tile map area.  0 = 9800–9BFF; 1 = 9C00–9FFF), LCDC[3](BG tile map area. 0 = 9800–9BFF; 1 = 9C00–9FFF), LCDC[4](0: “$8800 method”. 1: “$8000 method”) 고려해서 메모리 주소 계산해야 함.
  //일단 BG_buffer[7:0][1:0]만든다음에, obj_scanline이랑 비교해가면서 pixel_data, pixel_valid를 매 dot마다 하나씩 출력해주면 172dot안에 얼추 가능할듯. 
  //메모리 읽기는 타일맵이랑 타일 데이터 둘다 읽어야 하고 32 * 32 이므로 타일맵때문에 Win이랑 BG중에서 32byte 읽어야 하고, 타일 데이터는 총 160pixel이고 8pixel당 2byte이므로 40byte읽어야 함. 
  //그런데 SCX때문에 최악의 경우에 41byte읽어야 할수도 있음. 그러면 총 72-73byte이고 대충 40dot만에 읽을 수 있기는 함.
  
  //256*256 픽셀 타일맵에서의 현재 출력해야 하는 픽셀 좌표는 map_x, map_y로 나타낸다고 하자. 그러면 map_x = SCX + sub_counter_2(매 dot마다 증가) % 256, map_y = SCY + line_counter % 256. 
  //%256은 map_x, map_y를 8비트 unsigned로 선언하면 오버플로우때문에 자연스럽게 구현됨. (map_x[7:3], map_y[7:3])은 타일의 좌표를 나타내고, (map_x[2:0], map_y[2:0])는 해당 타일에서의 좌표를 나타냄.
  //window는 (WX - 7 <= sub_counter_2) && (WY <= line_counter)인 구간에서 출력되어야 함. 이때 Window 타일 맵에서의 좌표를 win_x[7:0], win_y라고 하면 win_x = sub_counter_2 - (WX - 7), win_y = line_counter - WY
  //WX가 0-6일때는 win_x = sub_counter_2 + 7 - WX 임.
  
  //매 scanline의 매 dot에서 (WX <= sub_counter_2 + 7) && (WY <= line_counter)를 검사하고 해당되는 dot에서부터 BG대신 Win을 출력해야 함.
  //
  
  //모든 I/O 레지스터나 메모리값은 cpu에 의해 m4에지때 갱신됨.
  
  
  reg [3:0] clk_counter; //16MHz 클럭에 따라서 0 - 1 - 2 - 3 - 0 - 1 - 2 - 3을 반복함.
  reg T_cycle_ena;
  
  reg [31:0] m_clk_counter; //16MHz클럭에 따라서 증가하면서 타이밍 맞춰서 FSM의 상태를 바꾸기 위해서 선언했음.
  
  reg [4:0] main_state; //mode 2: 80dot, mode 3 + mode 0: 376dot, mode 1: 4560dot.
  parameter IDLE = 0, OAM_SCAN = 1, DRAW_PIXEL = 2, VBLANK = 3;
  
  reg [7:0] line_counter; //처음에 0에서 시작해서 153까지 증가함. (0-143까지는 실제 화면이 출력되는 구간이고, 144-153까지는 vblank 구간임.)
  
  assign T_cycle_ena = (clk_counter == 3);
  
  reg mode0_enter; //이 값이 1이면 클럭에지때 mode0으로 설정됨.
  reg mode1_enter;
  reg mode2_enter;
  reg mode3_enter;
  
  reg [39:0] oam_scan; //40비트 짜리이고 40개의 오브젝트정보를 스캔해서 해당 scanline에 포함되는 오브젝트는 1로 저장함. 
  reg [9:0] [15:0] obj_ad; //여기에 유효한 오브젝트 선착순 10개의 OAM에서의 시작 주소(byte 0)가 저장됨. 
  reg [9:0] [7:0] obj_y; // +16된 값임. 읽어온값이 그대로 저장됨.
  reg [9:0] [7:0] obj_x; // +8된 값임. 읽어온값이 그대로 저장됨.
  reg [9:0] [7:0] obj_tile_index;
  reg [9:0] [7:0] obj_flag;
  reg [3:0] array_index; //40개의 OBJ정보들을 탐색하면서 해당 scanline의 유효한 OBJ이면 1씩 증가함. obj_y의 index를 가르키기 위해서 사용됨. 나중에 다른 용도로도 사용될 수도 있음.
  reg [3:0] valid_obj_counter;
  reg [255:0] [1:0] obj_scanline; //해당 scanline에서 오브젝트들 픽셀배열. 나중에 BG, Win scanline 배열이랑 합칠 예정임. 오브젝트가 없는 부분은 0으로 표시함.
  reg [255:0] obj_priority; //그냥 크기를 [255:0]으로 늘려주었음. 나중에 [159:0]부분만 사용할 예정임. X position값에 따라서 값 쓰기 로직을 만들때 번거로워서 이렇게 수정함...
  reg [255:0] obj_palette;
  reg [255:0] [7:0] obj_x_buffer;
  
  reg [15:0] sub_state; 
  parameter OAM_40_SCAN = 1, OAM_X_SCAN = 2, OAM_INDEX_SCAN = 3, OAM_FLAG_SCAN = 4, OAM_OBJ_SCANLINE = 5, TILE_FETCH = 6; 
  reg [15:0] sub_counter_1; //sub_state에서 사용하는 전용 카운터 1번.
  reg [15:0] sub_counter_2; //sub_state에서 사용하는 전용 카운터 2번.
  reg [15:0] sub_counter_3; //sub_state에서 사용하는 전용 카운터 3번.
  
  reg [3:0] mode3_state; //픽셀 출력을 담당하는 FSM을 하나 더 만들었음. 타일 읽기는 sub_state의 TILE_FETCH가 담당함.
  reg [7:0] mode3_counter_1; //mode3_state 전용 카운터.
  
  wire [7:0] map_x = SCX[7:0] + sub_counter_2[7:0]; //sub_counter_2는 0-159까지의 값으로 해당 scanline에서 display의 x좌표를 나타냄.
  wire [7:0] map_y = SCY[7:0] + line_counter[7:0]; //map_y는 BG타일맵에서의 y좌표를 나타냄.
  wire [7:0] win_x = (WX <= 6) ? sub_counter_2 + 7 - WX : sub_counter_2 - (WX - 7); //(WX <= sub_counter_2 + 7) && (WY <= line_counter)이 성립하는 상황에서만 의미있는 값임. Window 타일맵에서의 x좌표를 나타냄.
  wire [7:0] win_y = line_counter - WY; //(WX <= sub_counter_2 + 7) && (WY <= line_counter)이 성립하는 상황에서만 의미있는 값임. Window 타일맵에서의 y좌표를 나타냄.
  reg [255:0] [1:0] tile_buffer;
  reg [7:0] tile_buffer_index; //사용하지 않음.
  
  integer i;
  
  wire [7:0] obj_row = line_counter[7:0] + 8'd16 - obj_y[array_index][7:0]; //0-15사이의 값으로 타일의 몇번째 줄이 해당 scanline에 그려져야 하는지 나타냄.
  
  wire is_win_active = (WX <= sub_counter_2 + 7) && (WY <= line_counter) && (LCDC[5] == 1); //현재 sub_counter_2가 나타내는 픽셀이 Win인지 BG인지 나타냄.
  wire [2:0] pixel_offset = is_win_active ? win_x[2:0] : map_x[2:0]; 
  wire [7:0] shifted_data = mem_r_data << pixel_offset;
  
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      clk_counter <= 0;
      mem_ena <= 0;
      mem_r_ena <= 0;
      mem_w_ena <= 0;
      mem_ad <= 0;
      mem_w_data <= 0;
      
      main_state <= IDLE; //main_state, sub_state 모두 초기화 해줌.
      m_clk_counter <= 0; //main_state에서 사용함.
      line_counter <= 0; //main_state에서 사용함. 
      
      sub_state <= IDLE; 
      sub_counter_1 <= 0; //sub_state에서 사용함.
      sub_counter_2 <= 0; //sub_state에서 사용함.
      sub_counter_3 <= 0;
      
      oam_scan <= 0;
      obj_ad <= 0;
      obj_y <= 0;
      obj_x <= 0;
      obj_tile_index <= 0;
      obj_flag <= 0;
      obj_scanline <= 0;
      obj_priority <= 0;
      obj_palette <= 0;
      array_index <= 0;
      valid_obj_counter <= 0;
      // 초기화 예시 (보통 for문을 사용해 160개를 한 번에 비웁니다)
      for (i = 0; i < 256; i = i + 1) begin
        obj_x_buffer[i] <= 8'hFF; // 255로 초기화
      end
      tile_buffer <= 0;
      tile_buffer_index <= 0;
      
      mode3_state <= 0;
      mode3_counter_1 <= 0;
      
    end
    else begin
      mem_ena <= 0;
      mem_r_ena <= 0;
      mem_w_ena <= 0;
      mem_ad <= 0;
      mem_w_data <= 0;
      
      pixel_valid <= 0;
      pixel_data <= 0;
      hsync <= 0;
      vsync <= 0;

      
      case(main_state)
        IDLE: begin //LCDC 레지스터는 m4에지에 바뀜. 따라서 t1에지(m1에지)에 main_state는 OAM_SCAN으로 변경됨.
          if(LCDC[7] == 1) begin
            main_state <= OAM_SCAN;
            sub_state <= OAM_40_SCAN; //sub_state를 main_state와 동시에 OAM_40_SCAN으로 바꾸어줌. OAM_40_SCAN은 m1에지때에만 설정돼야함.
            m_clk_counter <= 0;
            line_counter <= 0; //line_counter = LY임.
            sub_counter_1 <= 0;
            sub_counter_2 <= 0;
            sub_counter_3 <= 0;
            oam_scan <= 0; //OAM_SCAN으로 가기전에 싹 초기화해줌.
            obj_ad <= 0;
            obj_y <= 0;
            obj_x <= 0;
            obj_tile_index <= 0;
            obj_flag <= 0;
            obj_scanline <= 0;
            obj_priority <= 0;
            obj_palette <= 0;
            array_index <= 0;
            valid_obj_counter <= 0;
            for (i = 0; i < 256; i = i + 1) begin
              obj_x_buffer[i] <= 8'hFF; // 255로 초기화
            end
          end
          else if(LCDC[7] == 0) begin
            main_state <= IDLE;
          end
        end
        OAM_SCAN: begin //총 80dot()동안 머물러야 함. m1(시작. m_clk_counter = 0) - m2(에지. m_clk_counter = 1) - m3 - m4 - m1(1dot지남.) - m2 - m3 - m4 - m1(2dot지남. m_clk_counter = 8)
          if(m_clk_counter == 319) begin //m4에지때 m_clk_counter가 319가 되고 m1에지(80dot지남.)때 0으로 초기화 됨.
            m_clk_counter <= 0;
            main_state <= DRAW_PIXEL;
            sub_state <= TILE_FETCH;
            sub_counter_1 <= 0;
            sub_counter_2 <= 0;
            sub_counter_3 <= 0;
            tile_buffer[255:0][1:0] <= 0; //TILE_FETCH로 진입할때 무조건 초기화 해줘야 함.
            tile_buffer_index <= 0;
            
            mode3_state <= 1;
            mode3_counter_1 <= 0;
          end
          else begin
            m_clk_counter <= m_clk_counter + 1;
            main_state <= OAM_SCAN;
          end
        end
        DRAW_PIXEL: begin //mode3(drawing pixel), mode1(hblank)까지 포함해서 총 376dot동안 머물러야 함. mode3, mode1기간은 상황에 따라 달라짐.
          if(m_clk_counter == 1503) begin  //m1(시작. m_clk_counter = 0) - m2(에지. m_clk_counter = 1) - m3 - m4 - m1(1dot지남.) - m2 - m3 - m4 - m1(2dot지남. m_clk_counter = 8)
            m_clk_counter <= 0; //376 * 4 = 1504임.
            if(line_counter == 143) begin
              main_state <= VBLANK;
              line_counter <= line_counter + 1; //144로 증가하고 최종적으로 153까지 증가해야 함.
            end
            else begin
              main_state <= OAM_SCAN; //main_state는 OAM_SCAN으로 가면서 sub_state는 OAM_40_SCAN으로 이동
              line_counter <= line_counter + 1;
              sub_state <= OAM_40_SCAN; 
              sub_counter_1 <= 0;
              sub_counter_2 <= 0;
              sub_counter_3 <= 0;
              oam_scan <= 0;
              obj_ad <= 0;
              obj_y <= 0;
              obj_x <= 0;
              obj_tile_index <= 0;
              obj_flag <= 0;
              obj_scanline <= 0;
              obj_priority <= 0;
              obj_palette <= 0;
              array_index <= 0;
              valid_obj_counter <= 0;
              for (i = 0; i < 256; i = i + 1) begin
                obj_x_buffer[i] <= 8'hFF; // 255로 초기화
              end
            end
          end
          else begin
            m_clk_counter <= m_clk_counter + 1;
            main_state <= DRAW_PIXEL;
          end
        end
        VBLANK: begin //mode1로 총 4560dot 만큼 머물러야 함.
          if(LCDC[7] == 0) begin //만약 LCD Enable 비트가 꺼져 있다면 IDLE 상태로 즉시 가야 함. 타이밍 문제는 없을것 같음. LCDC는 m4에지때 바뀌기 때문에 그러면 m1에지때 main_state가 바뀌게 되는데 그러면 
            main_state <= IDLE; //다시 LCDC가 바뀌는 타이밍은 m4이기 때문에 타이밍이 어긋나지 않음. 만약에 OAM_SCAM, DRAW_PIXEL때 LCDC를 바꿨더라도 VBLANK에 진입하고(m1에지) 다음에지(m2에지)때 IDLE로 가기때문에 
            m_clk_counter <= 0; //m4에지때 LCDC가 다시 1로 바뀌고 m1에지에서 OAM_SCAN으로 가는 타이밍은 동일함.
            line_counter <= 0;
          end
          else begin
            if(m_clk_counter == 1823) begin //456 * 4 = 1824임.
              m_clk_counter <= 0;
              if(line_counter == 153) begin
                line_counter <= 0;
                main_state <= OAM_SCAN; //main_state는 OAM_SCAN으로 가면서 sub_state는 OAM_40_SCAN으로 이동하고 m_clk_counter, line_counter, sub_counter_1, sub_counter_2모두 초기화시켜줌.
                sub_state <= OAM_40_SCAN; 
                sub_counter_1 <= 0;
                sub_counter_2 <= 0;
                sub_counter_3 <= 0;
                obj_ad <= 0;
                oam_scan <= 0;
                obj_y <= 0;
                obj_x <= 0;
                obj_tile_index <= 0;
                obj_flag <= 0;
                obj_scanline <= 0;
                obj_priority <= 0;
                obj_palette <= 0;
                array_index <= 0;
                valid_obj_counter <= 0;
                for (i = 0; i < 256; i = i + 1) begin
                  obj_x_buffer[i] <= 8'hFF; // 255로 초기화
                end
              end
              else begin
                line_counter <= line_counter + 1;
                main_state <= VBLANK;
              end
            end
            else begin
              m_clk_counter <= m_clk_counter + 1;
              main_state <= VBLANK;
            end
          end
        end
      endcase
      
      case(sub_state)
        IDLE: begin //대기 상태. 아무것도 안함.
        end
        OAM_40_SCAN: begin//이 상태는 m1에지때에 설정됨.
          case(sub_counter_1) //sub_counter_1은 각 에지때의 동작을 기술하기 위해 사용되고, sub_counter_2는 메모리 주소계산을 위해서 사용됨. sub_counter_3는 반복 횟수를 나타내기 위해서 사용됨.
            0: begin //m2에지
              mem_ena <= 1;
              mem_r_ena <= 1;
              mem_w_ena <= 0;
              mem_ad[15:0] <= 16'hFE00 + sub_counter_2; //OAM은 16'hFE00부터 시작함. 그리고 Y position 4 byte중 byte 0임. 
              sub_counter_1 <= 1;
              sub_counter_2 <= sub_counter_2 + 4; //이러면 다음 오브젝트 부분의 byte 0을 가르키게 됨.
              sub_state <= OAM_40_SCAN; //main_state에서와 sub_state에서 동시에 sub_state를 설정하면 sub_state부분이 밑에있기 때문에 여기가 우선순위가 높음. 그렇지만 그런일이 일어나지 않도록 조심해야 함.
            end
            1: begin //m3에지
              mem_ena <= 1;
              mem_r_ena <= 1;
              mem_w_ena <= 0;
              mem_ad[15:0] <= 16'hFE00 + sub_counter_2;
              sub_counter_1 <= 2;
              sub_counter_2 <= sub_counter_2 + 4;
              sub_state <= OAM_40_SCAN;
            end
            2: begin //m4에지
              sub_counter_1 <= 3;
              sub_state <= OAM_40_SCAN; //8*8 모드일때. (Y position - 16) <= line_counter <= (Y position - 16) + 7, 이걸 정리하면 Y position <= line_counter + 16 <= Y position + 7임.
              case(LCDC[2]) 
                0: begin //8 * 8 OBJ 모드일때.
                  if(({1'b0, mem_r_data[7:0]} <= {1'b0, line_counter[7:0]} + 9'd16) && ({1'b0, line_counter[7:0]} + 9'd16 <= {1'b0, mem_r_data[7:0]} + 9'd7 )) begin
                    oam_scan[((sub_counter_2 - 8) >> 2)] <= 1'b1; 
                    if(array_index >= 10) begin //만약에 한 scanline에서 유효 OBJ가 10개 이상이면 더이상은 저장해두지 않음.
                      
                    end
                    else begin
                      obj_ad[array_index][15:0] <= 16'hFE00 + (sub_counter_2 - 8); //해당 오브젝트의 byte 0 주소.
                      obj_y[array_index][7:0] <= mem_r_data[7:0];
                      array_index <= array_index + 1;
                    end
                  end
                end
                1: begin //8 * 16 OBJ 모드일때. (Y position - 16) <= line_counter <= (Y position - 16) + 15
                  if(({1'b0, mem_r_data[7:0]} <= {1'b0, line_counter[7:0]} + 9'd16) && ({1'b0, line_counter[7:0]} + 9'd16 <= {1'b0, mem_r_data[7:0]} + 9'd15 )) begin
                    oam_scan[((sub_counter_2 - 8) >> 2)] <= 1'b1; 
                    if(array_index >= 10) begin //만약에 한 scanline에서 유효 OBJ가 10개 이상이면 더이상은 저장해두지 않음.
                      
                    end
                    else begin
                      obj_ad[array_index][15:0] <= 16'hFE00 + (sub_counter_2 - 8); //해당 오브젝트의 byte 0 주소.
                      obj_y[array_index][7:0] <= mem_r_data[7:0];
                      array_index <= array_index + 1;
                    end
                  end
                end
              endcase
            end
            3: begin //m1에지(m1에지때 1dot 지남.)
              if(sub_counter_3 == 19) begin //20번 반복후 sub_state는 OAM_X_SCAN로 이동하고 모든 카운터값을 초기화 함.
                sub_counter_1 <= 0; //obj_ad, obj_y, obj_x, obj_tile_index, obj_flag는 초기화해서는 안됨. 
                sub_counter_2 <= 0;
                sub_counter_3 <= 0;
                array_index <= 0; //만약에 array_index가 10미만이라면 한 scanline에 오브젝트가 10개 미만인 상황임.
                valid_obj_counter <= array_index; //오브젝트 개수를 기억해 둠. 유효한 오브젝트가 scanline당 10개 미만이면 가짜 데이터가 obj_scanline에 써지는걸 막기 위해서임.
                sub_state <= OAM_X_SCAN; //
              end
              else begin
                sub_counter_1 <= 0;
                sub_counter_3 <= sub_counter_3 + 1; //이 값은 반복 횟수를 나타냄.
                sub_state <= OAM_40_SCAN; //
              end
              
              case(LCDC[2]) 
                0: begin //8 * 8 OBJ 모드일때.
                  if(({1'b0, mem_r_data[7:0]} <= {1'b0, line_counter[7:0]} + 9'd16) && ({1'b0, line_counter[7:0]} + 9'd16 <= {1'b0, mem_r_data[7:0]} + 9'd7 )) begin
                    oam_scan[((sub_counter_2 - 4) >> 2)] <= 1'b1; 
                    if(array_index >= 10) begin //만약에 한 scanline에서 유효 OBJ가 10개 이상이면 더이상은 저장해두지 않음.
                      
                    end
                    else begin
                      obj_ad[array_index][15:0] <= 16'hFE00 + (sub_counter_2 - 4); //해당 오브젝트의 byte 0 주소.
                      obj_y[array_index][7:0] <= mem_r_data[7:0];
                      array_index <= (sub_counter_3 == 19) ? 0: array_index + 1; //만약 (sub_counter_3 == 19)이면 array_index를 0으로 초기화 해줘야 함.
                      if(sub_counter_3 == 19) valid_obj_counter <= array_index + 1; //마지막 클럭에서 mem_r_data보니까 유효한 오브젝트인걸로 확인되면 array_index + 1을 저장해 주어야 일관성이 유지됨. 오류날뻔.
                    end
                  end
                end
                1: begin //8 * 16 OBJ 모드일때. (Y position - 16) <= line_counter <= (Y position - 16) + 15
                  if(({1'b0, mem_r_data[7:0]} <= {1'b0, line_counter[7:0]} + 9'd16) && ({1'b0, line_counter[7:0]} + 9'd16 <= {1'b0, mem_r_data[7:0]} + 9'd15 )) begin
                    oam_scan[((sub_counter_2 - 4) >> 2)] <= 1'b1; 
                    if(array_index >= 10) begin //만약에 한 scanline에서 유효 OBJ가 10개 이상이면 더이상은 저장해두지 않음.
                      
                    end
                    else begin
                      obj_ad[array_index][15:0] <= 16'hFE00 + (sub_counter_2 - 4); //해당 오브젝트의 byte 0 주소.
                      obj_y[array_index][7:0] <= mem_r_data[7:0];
                      array_index <= (sub_counter_3 == 19) ? 0: array_index + 1; //만약 (sub_counter_3 == 19)이면 array_index를 0으로 초기화 해줘야 함.
                      if(sub_counter_3 == 19) valid_obj_counter <= array_index + 1; //마지막 클럭에서 mem_r_data보니까 유효한 오브젝트인걸로 확인되면 array_index + 1을 저장해 주어야 일관성이 유지됨. 오류날뻔.
                    end
                  end
                end
              endcase
              
            end 
          endcase
        end
        OAM_X_SCAN: begin //sub_counter_1은 각 에지때의 동작을 기술하기 위해 사용되고, sub_counter_2는 메모리 주소계산을 위해서 사용됨. sub_counter_3는 반복 횟수를 나타내기 위해서 사용됨.
          case(sub_counter_1)
            0: begin //m2에지
              sub_counter_1 <= 1;
              sub_state <= OAM_X_SCAN;
              mem_ena <= 1;
              mem_w_ena <= 0;
              mem_r_ena <= 1;
              mem_ad[15:0] <= obj_ad[array_index][15:0] + 1; //array_index는 처음에 OAM_X_SCAN으로 올때 0으로 초기화된 상황임. obj_ad에는 byte 0 주소가 들어있어서 1 더해줘야 함.
              array_index <= array_index + 1;
            end
            1: begin //m3에지
              sub_counter_1 <= 2;
              sub_state <= OAM_X_SCAN;
              mem_ena <= 1;
              mem_w_ena <= 0;
              mem_r_ena <= 1;
              mem_ad[15:0] <= obj_ad[array_index][15:0] + 1;
              array_index <= array_index + 1;
            end
            2: begin //m4에지
              sub_counter_1 <= 3;
              sub_state <= OAM_X_SCAN;
              obj_x[array_index - 2][7:0] <= mem_r_data[7:0];
            end
            3: begin //m1에지(m1에지때 1dot 지남.)
              if(sub_counter_3 == 4) begin //5번 반복후 sub_state는 OAM_INDEX_SCAN으로 가고 카운더들은 초기화 됨.
                sub_state <= OAM_INDEX_SCAN;
                sub_counter_1 <= 0;
                sub_counter_2 <= 0;
                sub_counter_3 <= 0;
                array_index <= 0;
              end
              else begin
                sub_counter_3 <= sub_counter_3 + 1;
                sub_counter_1 <= 0;
                sub_state <= OAM_X_SCAN;
              end
              obj_x[array_index - 1][7:0] <= mem_r_data[7:0];
            end
          endcase
        end
        OAM_INDEX_SCAN: begin //sub_counter_1은 각 에지때의 동작을 기술하기 위해 사용되고, sub_counter_2는 메모리 주소계산을 위해서 사용됨. sub_counter_3는 반복 횟수를 나타내기 위해서 사용됨.
          case(sub_counter_1)
            0: begin //m2에지
              sub_counter_1 <= 1;
              sub_state <= OAM_INDEX_SCAN;
              mem_ena <= 1;
              mem_w_ena <= 0;
              mem_r_ena <= 1;
              mem_ad[15:0] <= obj_ad[array_index][15:0] + 2; 
              array_index <= array_index + 1;
            end
            1: begin //m3에지
              sub_counter_1 <= 2;
              sub_state <= OAM_INDEX_SCAN;
              mem_ena <= 1;
              mem_w_ena <= 0;
              mem_r_ena <= 1;
              mem_ad[15:0] <= obj_ad[array_index][15:0] + 2;
              array_index <= array_index + 1;
            end
            2: begin //m4에지
              sub_counter_1 <= 3;
              sub_state <= OAM_INDEX_SCAN;
              obj_tile_index[array_index - 2][7:0] <= mem_r_data[7:0];
            end
            3: begin //m1에지(m1에지때 1dot 지남.)
              if(sub_counter_3 == 4) begin //5번 반복후 sub_state는 OAM_FLAG_SCAN으로 가고 카운더들은 초기화 됨.
                sub_state <= OAM_FLAG_SCAN;
                sub_counter_1 <= 0;
                sub_counter_2 <= 0;
                sub_counter_3 <= 0;
                array_index <= 0;
              end
              else begin
                sub_counter_3 <= sub_counter_3 + 1;
                sub_counter_1 <= 0;
                sub_state <= OAM_INDEX_SCAN;
              end
              obj_tile_index[array_index - 1][7:0] <= mem_r_data[7:0];
            end
          endcase
        end
        OAM_FLAG_SCAN: begin
          case(sub_counter_1)
            0: begin //m2에지
              sub_counter_1 <= 1;
              sub_state <= OAM_FLAG_SCAN;
              mem_ena <= 1;
              mem_w_ena <= 0;
              mem_r_ena <= 1;
              mem_ad[15:0] <= obj_ad[array_index][15:0] + 3; 
              array_index <= array_index + 1;
            end
            1: begin //m3에지
              sub_counter_1 <= 2;
              sub_state <= OAM_FLAG_SCAN;
              mem_ena <= 1;
              mem_w_ena <= 0;
              mem_r_ena <= 1;
              mem_ad[15:0] <= obj_ad[array_index][15:0] + 3;
              array_index <= array_index + 1;
            end
            2: begin //m4에지
              sub_counter_1 <= 3;
              sub_state <= OAM_FLAG_SCAN;
              obj_flag[array_index - 2][7:0] <= mem_r_data[7:0];
            end
            3: begin //m1에지(m1에지때 1dot 지남.)
              if(sub_counter_3 == 4) begin //5번 반복후 sub_state는 OAM_OBJ_SCANLINE으로 가고 카운더들은 초기화 함.
                sub_state <= OAM_OBJ_SCANLINE;
                sub_counter_1 <= 0;
                sub_counter_2 <= 0;
                sub_counter_3 <= 0;
                array_index <= 0;
              end
              else begin
                sub_counter_3 <= sub_counter_3 + 1;
                sub_counter_1 <= 0;
                sub_state <= OAM_FLAG_SCAN;
              end
              obj_flag[array_index - 1][7:0] <= mem_r_data[7:0];
            end
          endcase
        end
        OAM_OBJ_SCANLINE: begin //이 sub_state로 올떄까지 35dot 지난 상황임(Y position: 20dot, X position: 5dot, index: 5dot, flag: 5dot)
          case(sub_counter_1) //oam_scan, obj_ad, obj_x, obj_y, obj_tile_index, obj_flag까지 다 채워진 상황임. 이제 obj_scanline[159:0][1:0], obj_priority[159:0], obj_x_buffer[159:0][7:0]만 남았음.
            0: begin //총 20번의 메모리 읽기가 필요하므로 10dot 걸릴 예정임. 만약 LCDC[1](OBJ Enable)이 0 이라면 obj_scanline은 싹다 0으로 설정해야 함.
              sub_counter_1 <= 1;
              sub_state <= OAM_OBJ_SCANLINE;
              array_index <= array_index; //array_index는 증가하면 안됨. 2바이트를 읽어야 하기 때문임.
              mem_ena <= 1;
              mem_w_ena <= 0;
              mem_r_ena <= 1;
              case(LCDC[2]) //priority, Y flip, X flip을 고려해야 함.
                0: begin //8 * 8 OBJ 모드일떄. 
                  if(obj_flag[array_index][6] == 1) begin //Y flip이 1일떄
                    mem_ad[15:0] <= {4'h8, obj_tile_index[array_index][7:0], 4'h0} + ((8'd7 - obj_row[7:0]) << 1); // 7 - obj_row로 계산해야 함.
                  end
                  else if(obj_flag[array_index][6] == 0) begin //Y flip이 0일떄. 일반적인 경우.
                    mem_ad[15:0] <= {4'h8, obj_tile_index[array_index][7:0], 4'h0} + (obj_row[7:0] << 1); //X flip은 메모리에서 값을 읽어온후 obj_scanline에 쓸때 고려해야 함.
                  end
                  //mem_ad[15:0] <= {4'h8, obj_tile_index[array_index][7:0], 4'h0} + (({8'h00, line_counter} + 16'h10 - {8'h00, obj_y[array_index][7:0]}) << 1);
                  //타일의몇번쨰줄인지 = line_counter - 타일의 첫번째줄Y좌표(signed) = line_counter - (Y position - 16) = line_counter + 16 - Y position(unsigned). 이 값은 무조건 0~7이 나와야 함.
                  //주소계산 = {4'h8, obj_tile_index[array_index][7:0], 4'h0} + (타일의 몇번째 줄인지(0-7) << 1)
                end
                1: begin //8 * 16 OBJ 모드일떄.
                  if(obj_flag[array_index][6] == 1) begin //Y flip이 1일떄
                    if((8'd15 - obj_row[7:0]) >= 8) begin //읽어야 할 타일 row가 8-15일때, 즉 bottom 8×8 tile.
                      mem_ad[15:0] <= {4'h8, (obj_tile_index[array_index][7:0] | 8'h01), 4'h0} + ((8'd15 - obj_row[7:0] - 8'd8) << 1);
                    end
                    else if((8'd15 - obj_row[7:0]) <= 7) begin //읽어야 할 타일 row가 0-7일때, 즉 top 8×8 tile.
                      mem_ad[15:0] <= {4'h8, (obj_tile_index[array_index][7:0] & 8'hFE), 4'h0} + ((8'd15 - obj_row[7:0]) << 1);
                    end
                  end
                  else if(obj_flag[array_index][6] == 0) begin //Y flip이 0일떄. 일반적인 경우.
                    if(obj_row[7:0] >= 8) begin //8-15일때, 즉 bottom 8×8 tile.
                      mem_ad[15:0] <= {4'h8, (obj_tile_index[array_index][7:0] | 8'h01), 4'h0} + ((obj_row[7:0] - 8'd8) << 1);
                    end
                    else begin //0-7일때, 즉 top 8×8 tile.
                      mem_ad[15:0] <= {4'h8, (obj_tile_index[array_index][7:0] & 8'hFE), 4'h0} + (obj_row[7:0] << 1);
                    end
                  end
                end
              endcase
            end
            1: begin //m3에지
              sub_counter_1 <= 2;
              sub_state <= OAM_OBJ_SCANLINE;
              array_index <= array_index; //array_index는 m1에지에서 증가시킬 예정임. 그 전까지는 값을 유지해야 함.
              mem_ena <= 1;
              mem_w_ena <= 0;
              mem_r_ena <= 1;
              case(LCDC[2]) //priority, Y flip, X flip을 고려해야 함.
                0: begin //8 * 8 OBJ 모드일떄. 
                  if(obj_flag[array_index][6] == 1) begin //Y flip이 1일떄
                    mem_ad[15:0] <= {4'h8, obj_tile_index[array_index][7:0], 4'h0} + ((8'd7 - obj_row[7:0]) << 1) + 1; //X flip은 메모리에서 값을 읽어온후 obj_scanline에 쓸때 고려해야 함.
                  end
                  else if(obj_flag[array_index][6] == 0) begin //Y flip이 0일떄. 일반적인 경우.
                    mem_ad[15:0] <= {4'h8, obj_tile_index[array_index][7:0], 4'h0} + (obj_row[7:0] << 1) + 1;
                  end
                end
                1: begin //8 * 16 OBJ 모드일떄.
                  if(obj_flag[array_index][6] == 1) begin //Y flip이 1일떄
                    if((8'd15 - obj_row[7:0]) >= 8) begin //읽어야 할 타일 row가 8-15일때, 즉 bottom 8×8 tile.
                      mem_ad[15:0] <= {4'h8, (obj_tile_index[array_index][7:0] | 8'h01), 4'h0} + ((8'd15 - obj_row[7:0] - 8'd8) << 1) + 1;
                    end
                    else if((8'd15 - obj_row[7:0]) <= 7) begin //읽어야 할 타일 row가 0-7일때, 즉 top 8×8 tile.
                      mem_ad[15:0] <= {4'h8, (obj_tile_index[array_index][7:0] & 8'hFE), 4'h0} + ((8'd15 - obj_row[7:0]) << 1) + 1;
                    end
                  end
                  else if(obj_flag[array_index][6] == 0) begin //Y flip이 0일떄. 일반적인 경우.
                    if(obj_row[7:0] >= 8) begin //8-15일때, 즉 bottom 8×8 tile.
                      mem_ad[15:0] <= {4'h8, (obj_tile_index[array_index][7:0] | 8'h01), 4'h0} + ((obj_row[7:0] - 8'd8) << 1) + 1;
                    end
                    else begin //0-7일때, 즉 top 8×8 tile.
                      mem_ad[15:0] <= {4'h8, (obj_tile_index[array_index][7:0] & 8'hFE), 4'h0} + (obj_row[7:0] << 1) + 1;
                    end
                  end
                end
              endcase
            end
            2: begin //m4에지
              sub_counter_1 <= 3;
              sub_state <= OAM_OBJ_SCANLINE;
              if (array_index < valid_obj_counter) begin //유효한 오브젝트 개수만큼만 obj_scanline, obj_x_buffer, obj_priority에 반영되어야 함.!!!
              case(obj_flag[array_index][5]) //일단 obj_x[array_index]에서 X position에 따라서 obj_scanline의 어떤 위치에 써야할지 결정해야 함.
                1'b0: begin //X flip 이 0일때. 일반적인 경우.
                  if(obj_x[array_index] == 0 || obj_x[array_index] >= 168) begin //화면에 안나오는 경우.
                  end
                  else begin //픽셀 일부, 혹은 전체가 화면에 나오는 경우.
                    if(obj_x[array_index] - 8'd8 < 160) begin //obj_x[array_index] - 8가 음수여도 unsigned이기 때문에 160보다 큰 값이 됨.
                      if(obj_x_buffer[obj_x[array_index] - 8'd8][7:0] > obj_x[array_index][7:0]) begin //obj_x_buffer는 전부 255로 초기화 되어 있으므로 정상적으로 동작함.
                        obj_scanline[obj_x[array_index] - 8'd8][0] <= mem_r_data[7];
                      end
                    end
                    if(obj_x[array_index] - 8'd7 < 160) begin //obj_x[array_index] - 8가 음수여도 unsigned이기 때문에 160보다 큰 값이 됨.
                      if(obj_x_buffer[obj_x[array_index] - 8'd7][7:0] > obj_x[array_index][7:0]) begin //obj_x_buffer는 전부 255로 초기화 되어 있으므로 정상적으로 동작함.
                        obj_scanline[obj_x[array_index] - 8'd7][0] <= mem_r_data[6];
                      end
                    end
                    if(obj_x[array_index] - 8'd6 < 160) begin //obj_x[array_index] - 8가 음수여도 unsigned이기 때문에 160보다 큰 값이 됨.
                      if(obj_x_buffer[obj_x[array_index] - 8'd6][7:0] > obj_x[array_index][7:0]) begin //obj_x_buffer는 전부 255로 초기화 되어 있으므로 정상적으로 동작함.
                        obj_scanline[obj_x[array_index] - 8'd6][0] <= mem_r_data[5];
                      end
                    end
                    if(obj_x[array_index] - 8'd5 < 160) begin //obj_x[array_index] - 8가 음수여도 unsigned이기 때문에 160보다 큰 값이 됨.
                      if(obj_x_buffer[obj_x[array_index] - 8'd5][7:0] > obj_x[array_index][7:0]) begin //obj_x_buffer는 전부 255로 초기화 되어 있으므로 정상적으로 동작함.
                        obj_scanline[obj_x[array_index] - 8'd5][0] <= mem_r_data[4];
                      end
                    end
                    if(obj_x[array_index] - 8'd4 < 160) begin //obj_x[array_index] - 8가 음수여도 unsigned이기 때문에 160보다 큰 값이 됨.
                      if(obj_x_buffer[obj_x[array_index] - 8'd4][7:0] > obj_x[array_index][7:0]) begin //obj_x_buffer는 전부 255로 초기화 되어 있으므로 정상적으로 동작함.
                        obj_scanline[obj_x[array_index] - 8'd4][0] <= mem_r_data[3];
                      end
                    end
                    if(obj_x[array_index] - 8'd3 < 160) begin //obj_x[array_index] - 8가 음수여도 unsigned이기 때문에 160보다 큰 값이 됨.
                      if(obj_x_buffer[obj_x[array_index] - 8'd3][7:0] > obj_x[array_index][7:0]) begin //obj_x_buffer는 전부 255로 초기화 되어 있으므로 정상적으로 동작함.
                        obj_scanline[obj_x[array_index] - 8'd3][0] <= mem_r_data[2];
                      end
                    end
                    if(obj_x[array_index] - 8'd2 < 160) begin //obj_x[array_index] - 8가 음수여도 unsigned이기 때문에 160보다 큰 값이 됨.
                      if(obj_x_buffer[obj_x[array_index] - 8'd2][7:0] > obj_x[array_index][7:0]) begin //obj_x_buffer는 전부 255로 초기화 되어 있으므로 정상적으로 동작함.
                        obj_scanline[obj_x[array_index] - 8'd2][0] <= mem_r_data[1];
                      end
                    end
                    if(obj_x[array_index] - 8'd1 < 160) begin //obj_x[array_index] - 8가 음수여도 unsigned이기 때문에 160보다 큰 값이 됨.
                      if(obj_x_buffer[obj_x[array_index] - 8'd1][7:0] > obj_x[array_index][7:0]) begin //obj_x_buffer는 전부 255로 초기화 되어 있으므로 정상적으로 동작함.
                        obj_scanline[obj_x[array_index] - 8'd1][0] <= mem_r_data[0];
                      end
                    end
                  end
                end
                1'b1: begin //X flip 이 1일때.
                  if(obj_x[array_index] == 0 || obj_x[array_index] >= 168) begin //화면에 안나오는 경우.
                  end
                  else begin //픽셀이 화면에 나오는 경우.
                    if(obj_x[array_index] - 8'd8 < 160) begin //obj_x[array_index] - 8가 음수여도 unsigned이기 때문에 160보다 큰 값이 됨.
                      if(obj_x_buffer[obj_x[array_index] - 8'd8][7:0] > obj_x[array_index][7:0]) begin //obj_x_buffer는 전부 255로 초기화 되어 있으므로 정상적으로 동작함.
                        obj_scanline[obj_x[array_index] - 8'd8][0] <= mem_r_data[0];
                      end
                    end
                    if(obj_x[array_index] - 8'd7 < 160) begin //obj_x[array_index] - 8가 음수여도 unsigned이기 때문에 160보다 큰 값이 됨.
                      if(obj_x_buffer[obj_x[array_index] - 8'd7][7:0] > obj_x[array_index][7:0]) begin //obj_x_buffer는 전부 255로 초기화 되어 있으므로 정상적으로 동작함.
                        obj_scanline[obj_x[array_index] - 8'd7][0] <= mem_r_data[1];
                      end
                    end
                    if(obj_x[array_index] - 8'd6 < 160) begin //obj_x[array_index] - 8가 음수여도 unsigned이기 때문에 160보다 큰 값이 됨.
                      if(obj_x_buffer[obj_x[array_index] - 8'd6][7:0] > obj_x[array_index][7:0]) begin //obj_x_buffer는 전부 255로 초기화 되어 있으므로 정상적으로 동작함.
                        obj_scanline[obj_x[array_index] - 8'd6][0] <= mem_r_data[2];
                      end
                    end
                    if(obj_x[array_index] - 8'd5 < 160) begin //obj_x[array_index] - 8가 음수여도 unsigned이기 때문에 160보다 큰 값이 됨.
                      if(obj_x_buffer[obj_x[array_index] - 8'd5][7:0] > obj_x[array_index][7:0]) begin //obj_x_buffer는 전부 255로 초기화 되어 있으므로 정상적으로 동작함.
                        obj_scanline[obj_x[array_index] - 8'd5][0] <= mem_r_data[3];
                      end
                    end
                    if(obj_x[array_index] - 8'd4 < 160) begin //obj_x[array_index] - 8가 음수여도 unsigned이기 때문에 160보다 큰 값이 됨.
                      if(obj_x_buffer[obj_x[array_index] - 8'd4][7:0] > obj_x[array_index][7:0]) begin //obj_x_buffer는 전부 255로 초기화 되어 있으므로 정상적으로 동작함.
                        obj_scanline[obj_x[array_index] - 8'd4][0] <= mem_r_data[4];
                      end
                    end
                    if(obj_x[array_index] - 8'd3 < 160) begin //obj_x[array_index] - 8가 음수여도 unsigned이기 때문에 160보다 큰 값이 됨.
                      if(obj_x_buffer[obj_x[array_index] - 8'd3][7:0] > obj_x[array_index][7:0]) begin //obj_x_buffer는 전부 255로 초기화 되어 있으므로 정상적으로 동작함.
                        obj_scanline[obj_x[array_index] - 8'd3][0] <= mem_r_data[5];
                      end
                    end
                    if(obj_x[array_index] - 8'd2 < 160) begin //obj_x[array_index] - 8가 음수여도 unsigned이기 때문에 160보다 큰 값이 됨.
                      if(obj_x_buffer[obj_x[array_index] - 8'd2][7:0] > obj_x[array_index][7:0]) begin //obj_x_buffer는 전부 255로 초기화 되어 있으므로 정상적으로 동작함.
                        obj_scanline[obj_x[array_index] - 8'd2][0] <= mem_r_data[6];
                      end
                    end
                    if(obj_x[array_index] - 8'd1 < 160) begin //obj_x[array_index] - 8가 음수여도 unsigned이기 때문에 160보다 큰 값이 됨.
                      if(obj_x_buffer[obj_x[array_index] - 8'd1][7:0] > obj_x[array_index][7:0]) begin //obj_x_buffer는 전부 255로 초기화 되어 있으므로 정상적으로 동작함.
                        obj_scanline[obj_x[array_index] - 8'd1][0] <= mem_r_data[7];
                      end
                    end
                  end
                end
              endcase
              end //if (array_index < valid_obj_counter) 의 end
            end
            3: begin //m1에지
              if(sub_counter_3 == 9) begin //10번 반복 함.
                sub_counter_1 <= 0;
                sub_counter_2 <= 0;
                sub_counter_3 <= 0;
                array_index <= 0;
                sub_state <= IDLE; //다음 sub_state로 이동. 이제 mode3까지 대기해야 함.
              end
              else begin
                sub_counter_3 <= sub_counter_3 + 1;
                sub_counter_1 <= 0;
                array_index <= array_index + 1; //중요!!! 
                sub_state <= OAM_OBJ_SCANLINE;
              end
              
              if (array_index < valid_obj_counter) begin //유효한 오브젝트 개수만큼만 obj_scanline, obj_x_buffer, obj_priority에 반영되어야 함.!!!
              case(obj_flag[array_index][5])
                1'b0: begin //X flip 이 0일때.
                  if(obj_x[array_index] == 0 || obj_x[array_index] >= 168) begin //화면에 안나오는 경우.
                  end
                  else begin //픽셀이 화면에 나오는 경우.
                    if(obj_x[array_index] - 8'd8 < 160) begin //obj_x[array_index] - 8가 음수여도 unsigned이기 때문에 160보다 큰 값이 됨.
                      if(obj_x_buffer[obj_x[array_index] - 8'd8][7:0] >= obj_x[array_index][7:0]) begin //obj_x_buffer는 전부 255로 초기화 되어 있으므로 정상적으로 동작함.
                        obj_scanline[obj_x[array_index] - 8'd8][1] <= mem_r_data[7];
                        obj_x_buffer[obj_x[array_index] - 8'd8][7:0] <= obj_x[array_index][7:0];
                        obj_priority[obj_x[array_index] - 8'd8] <= obj_flag[array_index][7];
                        obj_palette[obj_x[array_index] - 8'd8] <= obj_flag[array_index][4];
                      end
                    end
                    if(obj_x[array_index] - 8'd7 < 160) begin //obj_x[array_index] - 8가 음수여도 unsigned이기 때문에 160보다 큰 값이 됨.
                      if(obj_x_buffer[obj_x[array_index] - 8'd7][7:0] >= obj_x[array_index][7:0]) begin //obj_x_buffer는 전부 255로 초기화 되어 있으므로 정상적으로 동작함.
                        obj_scanline[obj_x[array_index] - 8'd7][1] <= mem_r_data[6];
                        obj_x_buffer[obj_x[array_index] - 8'd7][7:0] <= obj_x[array_index][7:0];
                        obj_priority[obj_x[array_index] - 8'd7] <= obj_flag[array_index][7];
                        obj_palette[obj_x[array_index] - 8'd7] <= obj_flag[array_index][4];
                      end
                    end
                    if(obj_x[array_index] - 8'd6 < 160) begin //obj_x[array_index] - 8가 음수여도 unsigned이기 때문에 160보다 큰 값이 됨.
                      if(obj_x_buffer[obj_x[array_index] - 8'd6][7:0] >= obj_x[array_index][7:0]) begin //obj_x_buffer는 전부 255로 초기화 되어 있으므로 정상적으로 동작함.
                        obj_scanline[obj_x[array_index] - 8'd6][1] <= mem_r_data[5];
                        obj_x_buffer[obj_x[array_index] - 8'd6][7:0] <= obj_x[array_index][7:0];
                        obj_priority[obj_x[array_index] - 8'd6] <= obj_flag[array_index][7];
                        obj_palette[obj_x[array_index] - 8'd6] <= obj_flag[array_index][4];
                      end
                    end
                    if(obj_x[array_index] - 8'd5 < 160) begin //obj_x[array_index] - 8가 음수여도 unsigned이기 때문에 160보다 큰 값이 됨.
                      if(obj_x_buffer[obj_x[array_index] - 8'd5][7:0] >= obj_x[array_index][7:0]) begin //obj_x_buffer는 전부 255로 초기화 되어 있으므로 정상적으로 동작함.
                        obj_scanline[obj_x[array_index] - 8'd5][1] <= mem_r_data[4];
                        obj_x_buffer[obj_x[array_index] - 8'd5][7:0] <= obj_x[array_index][7:0];
                        obj_priority[obj_x[array_index] - 8'd5] <= obj_flag[array_index][7];
                        obj_palette[obj_x[array_index] - 8'd5] <= obj_flag[array_index][4];
                      end
                    end
                    if(obj_x[array_index] - 8'd4 < 160) begin //obj_x[array_index] - 8가 음수여도 unsigned이기 때문에 160보다 큰 값이 됨.
                      if(obj_x_buffer[obj_x[array_index] - 8'd4][7:0] >= obj_x[array_index][7:0]) begin //obj_x_buffer는 전부 255로 초기화 되어 있으므로 정상적으로 동작함.
                        obj_scanline[obj_x[array_index] - 8'd4][1] <= mem_r_data[3];
                        obj_x_buffer[obj_x[array_index] - 8'd4][7:0] <= obj_x[array_index][7:0];
                        obj_priority[obj_x[array_index] - 8'd4] <= obj_flag[array_index][7];
                        obj_palette[obj_x[array_index] - 8'd4] <= obj_flag[array_index][4];
                      end
                    end
                    if(obj_x[array_index] - 8'd3 < 160) begin //obj_x[array_index] - 8가 음수여도 unsigned이기 때문에 160보다 큰 값이 됨.
                      if(obj_x_buffer[obj_x[array_index] - 8'd3][7:0] >= obj_x[array_index][7:0]) begin //obj_x_buffer는 전부 255로 초기화 되어 있으므로 정상적으로 동작함.
                        obj_scanline[obj_x[array_index] - 8'd3][1] <= mem_r_data[2];
                        obj_x_buffer[obj_x[array_index] - 8'd3][7:0] <= obj_x[array_index][7:0];
                        obj_priority[obj_x[array_index] - 8'd3] <= obj_flag[array_index][7];
                        obj_palette[obj_x[array_index] - 8'd3] <= obj_flag[array_index][4];
                      end
                    end
                    if(obj_x[array_index] - 8'd2 < 160) begin //obj_x[array_index] - 8가 음수여도 unsigned이기 때문에 160보다 큰 값이 됨.
                      if(obj_x_buffer[obj_x[array_index] - 8'd2][7:0] >= obj_x[array_index][7:0]) begin //obj_x_buffer는 전부 255로 초기화 되어 있으므로 정상적으로 동작함.
                        obj_scanline[obj_x[array_index] - 8'd2][1] <= mem_r_data[1];
                        obj_x_buffer[obj_x[array_index] - 8'd2][7:0] <= obj_x[array_index][7:0];
                        obj_priority[obj_x[array_index] - 8'd2] <= obj_flag[array_index][7];
                        obj_palette[obj_x[array_index] - 8'd2] <= obj_flag[array_index][4];
                      end
                    end
                    if(obj_x[array_index] - 8'd1 < 160) begin //obj_x[array_index] - 8가 음수여도 unsigned이기 때문에 160보다 큰 값이 됨.
                      if(obj_x_buffer[obj_x[array_index] - 8'd1][7:0] >= obj_x[array_index][7:0]) begin //obj_x_buffer는 전부 255로 초기화 되어 있으므로 정상적으로 동작함.
                        obj_scanline[obj_x[array_index] - 8'd1][1] <= mem_r_data[0];
                        obj_x_buffer[obj_x[array_index] - 8'd1][7:0] <= obj_x[array_index][7:0];
                        obj_priority[obj_x[array_index] - 8'd1] <= obj_flag[array_index][7];
                        obj_palette[obj_x[array_index] - 8'd1] <= obj_flag[array_index][4];
                      end
                    end
                  end
                end
                1'b1: begin //X flip 이 1일때.
                  if(obj_x[array_index] == 0 || obj_x[array_index] >= 168) begin //화면에 안나오는 경우.
                  end
                  else begin //픽셀이 화면에 나오는 경우.
                    if(obj_x[array_index] - 8'd8 < 160) begin //obj_x[array_index] - 8가 음수여도 unsigned이기 때문에 160보다 큰 값이 됨.
                      if(obj_x_buffer[obj_x[array_index] - 8'd8][7:0] >= obj_x[array_index][7:0]) begin //obj_x_buffer는 전부 255로 초기화 되어 있으므로 정상적으로 동작함.
                        obj_scanline[obj_x[array_index] - 8'd8][1] <= mem_r_data[0];
                        obj_x_buffer[obj_x[array_index] - 8'd8][7:0] <= obj_x[array_index][7:0];
                        obj_priority[obj_x[array_index] - 8'd8] <= obj_flag[array_index][7];
                        obj_palette[obj_x[array_index] - 8'd8] <= obj_flag[array_index][4];
                      end
                    end
                    if(obj_x[array_index] - 8'd7 < 160) begin //obj_x[array_index] - 8가 음수여도 unsigned이기 때문에 160보다 큰 값이 됨.
                      if(obj_x_buffer[obj_x[array_index] - 8'd7][7:0] >= obj_x[array_index][7:0]) begin //obj_x_buffer는 전부 255로 초기화 되어 있으므로 정상적으로 동작함.
                        obj_scanline[obj_x[array_index] - 8'd7][1] <= mem_r_data[1];
                        obj_x_buffer[obj_x[array_index] - 8'd7][7:0] <= obj_x[array_index][7:0];
                        obj_priority[obj_x[array_index] - 8'd7] <= obj_flag[array_index][7];
                        obj_palette[obj_x[array_index] - 8'd7] <= obj_flag[array_index][4];
                      end
                    end
                    if(obj_x[array_index] - 8'd6 < 160) begin //obj_x[array_index] - 8가 음수여도 unsigned이기 때문에 160보다 큰 값이 됨.
                      if(obj_x_buffer[obj_x[array_index] - 8'd6][7:0] >= obj_x[array_index][7:0]) begin //obj_x_buffer는 전부 255로 초기화 되어 있으므로 정상적으로 동작함.
                        obj_scanline[obj_x[array_index] - 8'd6][1] <= mem_r_data[2];
                        obj_x_buffer[obj_x[array_index] - 8'd6][7:0] <= obj_x[array_index][7:0];
                        obj_priority[obj_x[array_index] - 8'd6] <= obj_flag[array_index][7];
                        obj_palette[obj_x[array_index] - 8'd6] <= obj_flag[array_index][4];
                      end
                    end
                    if(obj_x[array_index] - 8'd5 < 160) begin //obj_x[array_index] - 8가 음수여도 unsigned이기 때문에 160보다 큰 값이 됨.
                      if(obj_x_buffer[obj_x[array_index] - 8'd5][7:0] >= obj_x[array_index][7:0]) begin //obj_x_buffer는 전부 255로 초기화 되어 있으므로 정상적으로 동작함.
                        obj_scanline[obj_x[array_index] - 8'd5][1] <= mem_r_data[3];
                        obj_x_buffer[obj_x[array_index] - 8'd5][7:0] <= obj_x[array_index][7:0];
                        obj_priority[obj_x[array_index] - 8'd5] <= obj_flag[array_index][7];
                        obj_palette[obj_x[array_index] - 8'd5] <= obj_flag[array_index][4];
                      end
                    end
                    if(obj_x[array_index] - 8'd4 < 160) begin //obj_x[array_index] - 8가 음수여도 unsigned이기 때문에 160보다 큰 값이 됨.
                      if(obj_x_buffer[obj_x[array_index] - 8'd4][7:0] >= obj_x[array_index][7:0]) begin //obj_x_buffer는 전부 255로 초기화 되어 있으므로 정상적으로 동작함.
                        obj_scanline[obj_x[array_index] - 8'd4][1] <= mem_r_data[4];
                        obj_x_buffer[obj_x[array_index] - 8'd4][7:0] <= obj_x[array_index][7:0];
                        obj_priority[obj_x[array_index] - 8'd4] <= obj_flag[array_index][7];
                        obj_palette[obj_x[array_index] - 8'd4] <= obj_flag[array_index][4];
                      end
                    end
                    if(obj_x[array_index] - 8'd3 < 160) begin //obj_x[array_index] - 8가 음수여도 unsigned이기 때문에 160보다 큰 값이 됨.
                      if(obj_x_buffer[obj_x[array_index] - 8'd3][7:0] >= obj_x[array_index][7:0]) begin //obj_x_buffer는 전부 255로 초기화 되어 있으므로 정상적으로 동작함.
                        obj_scanline[obj_x[array_index] - 8'd3][1] <= mem_r_data[5];
                        obj_x_buffer[obj_x[array_index] - 8'd3][7:0] <= obj_x[array_index][7:0];
                        obj_priority[obj_x[array_index] - 8'd3] <= obj_flag[array_index][7];
                        obj_palette[obj_x[array_index] - 8'd3] <= obj_flag[array_index][4];
                      end
                    end
                    if(obj_x[array_index] - 8'd2 < 160) begin //obj_x[array_index] - 8가 음수여도 unsigned이기 때문에 160보다 큰 값이 됨.
                      if(obj_x_buffer[obj_x[array_index] - 8'd2][7:0] >= obj_x[array_index][7:0]) begin //obj_x_buffer는 전부 255로 초기화 되어 있으므로 정상적으로 동작함.
                        obj_scanline[obj_x[array_index] - 8'd2][1] <= mem_r_data[6];
                        obj_x_buffer[obj_x[array_index] - 8'd2][7:0] <= obj_x[array_index][7:0];
                        obj_priority[obj_x[array_index] - 8'd2] <= obj_flag[array_index][7];
                        obj_palette[obj_x[array_index] - 8'd2] <= obj_flag[array_index][4];
                      end
                    end
                    if(obj_x[array_index] - 8'd1 < 160) begin //obj_x[array_index] - 8가 음수여도 unsigned이기 때문에 160보다 큰 값이 됨.
                      if(obj_x_buffer[obj_x[array_index] - 8'd1][7:0] >= obj_x[array_index][7:0]) begin //obj_x_buffer는 전부 255로 초기화 되어 있으므로 정상적으로 동작함.
                        obj_scanline[obj_x[array_index] - 8'd1][1] <= mem_r_data[7];
                        obj_x_buffer[obj_x[array_index] - 8'd1][7:0] <= obj_x[array_index][7:0];
                        obj_priority[obj_x[array_index] - 8'd1] <= obj_flag[array_index][7];
                        obj_palette[obj_x[array_index] - 8'd1] <= obj_flag[array_index][4];
                      end
                    end
                  end
                end
              endcase
              end //if (array_index < valid_obj_counter) 의 end
            end //m1에지 end
          endcase
        end //OAM_OBJ_SCANLINE:의 end
        TILE_FETCH: begin //mode3에서 VRAM읽기는 이 sub_state에서 독점함. 다른 FSM에서는 메모리 읽기를 시도해서는 안됨.
          //pixel_data 출력할때 LDCD[0](BG & Window enable), LCDC[5](Window enable), LCDC[1](OBJ enable)고려 해서 출력을 결정해야 함. 그리고 일단 팔레트는 무시하자. 
          //LCDC[6](Window tile map area.  0 = 9800–9BFF; 1 = 9C00–9FFF), LCDC[3](BG tile map area. 0 = 9800–9BFF; 1 = 9C00–9FFF), LCDC[4](0: “$8800 method”. 1: “$8000 method”) 고려해서 메모리 주소 계산해야 함.
          //(map_x[7:3], map_y[7:3])은 타일의 좌표를 나타내고, (map_x[2:0], map_y[2:0])는 해당 타일에서의 좌표를 나타냄.
          case(sub_counter_1) //sub_counter_2는 display의 x좌표를 나타내는 값으로 사용됨(0-159). map_x, win_x값이 sub_counter_2에 의해서 결정되므로 주의해서 사용해야 함.
            0: begin //m2에지
              sub_counter_1 <= 1;
              sub_state <= TILE_FETCH;
              if((WX <= sub_counter_2 + 7) && (WY <= line_counter) && (LCDC[5] == 1)) begin //Win 타일을 읽어야 하는 상황일때. LCDC[5](Window enable)는 1인 상황.
                mem_ena <= 1;
                mem_r_ena <= 1;
                mem_w_ena <= 0;
                case(LCDC[6]) //LCDC[6](Window tile map area.  0 = 9800–9BFF; 1 = 9C00–9FFF)
                  1'b0: begin //9800–9BFF
                    case(LCDC[4])
                      1'b0: begin //$8800 method
                        mem_ad[15:0] <= 16'h9800 +{6'b0, win_y[7:3], win_x[7:3]};
                      end
                      1'b1: begin //$8000 method
                        mem_ad[15:0] <= 16'h9800 +{6'b0, win_y[7:3], win_x[7:3]};
                      end
                    endcase
                  end
                  1'b1: begin //9C00–9FFF
                    case(LCDC[4])
                      1'b0: begin //$8800 method
                        mem_ad[15:0] <= 16'h9C00 +{6'b0, win_y[7:3], win_x[7:3]};
                      end
                      1'b1: begin //$8000 method
                        mem_ad[15:0] <= 16'h9C00 +{6'b0, win_y[7:3], win_x[7:3]};
                      end
                    endcase
                  end
                endcase
              end
              else begin //BG 타일을 읽어야 하는 상황일때.
                mem_ena <= 1;
                mem_r_ena <= 1;
                mem_w_ena <= 0;
                case(LCDC[3]) //LCDC[3](BG tile map area. 0 = 9800–9BFF; 1 = 9C00–9FFF)
                  1'b0: begin //9800–9BFF
                    case(LCDC[4])
                      1'b0: begin //$8800 method
                        mem_ad[15:0] <= 16'h9800 +{6'b0, map_y[7:3], map_x[7:3]};
                      end
                      1'b1: begin //$8000 method
                        mem_ad[15:0] <= 16'h9800 +{6'b0, map_y[7:3], map_x[7:3]};
                      end
                    endcase
                  end
                  1'b1: begin //9C00–9FFF
                    case(LCDC[4])
                      1'b0: begin //$8800 method
                        mem_ad[15:0] <= 16'h9C00 +{6'b0, map_y[7:3], map_x[7:3]};
                      end
                      1'b1: begin //$8000 method
                        mem_ad[15:0] <= 16'h9C00 +{6'b0, map_y[7:3], map_x[7:3]};
                      end
                    endcase
                  end
                endcase
              end
            end
            1: begin //m3에지
              sub_counter_1 <= 2;
              sub_state <= TILE_FETCH;
            end
            2: begin //m4에지
              sub_counter_1 <= 3;
              sub_state <= TILE_FETCH;
              sub_counter_3[7:0] <= mem_r_data[7:0]; //sub_counter_3를 mem_r_data를 저장할 임시 레지스터로 사용하겠음. 
              if((WX <= sub_counter_2 + 7) && (WY <= line_counter) && (LCDC[5] == 1)) begin //Win 타일데이터 읽어야 하는 상황. sub_counter_2는 바뀌지 않았음.
                mem_ena <= 1;
                mem_r_ena <= 1;
                mem_w_ena <= 0;
                case(LCDC[4])
                  1'b0: begin //$8800 method
                    mem_ad[15:0] <= 16'h9000 + {{4{mem_r_data[7]}}, mem_r_data[7:0], win_y[2:0], 1'b0};
                  end
                  1'b1: begin //$8000 method
                    mem_ad[15:0] <= 16'h8000 + {4'b0, mem_r_data[7:0], win_y[2:0], 1'b0};
                  end
                endcase
              end
              else begin //BG 타일데이터 읽어야 하는 상황.
                mem_ena <= 1;
                mem_r_ena <= 1;
                mem_w_ena <= 0;
                case(LCDC[4])
                  1'b0: begin //$8800 method
                    mem_ad[15:0] <= 16'h9000 + {{4{mem_r_data[7]}}, mem_r_data[7:0], map_y[2:0], 1'b0};
                  end
                  1'b1: begin //$8000 method
                    mem_ad[15:0] <= 16'h8000 + {4'b0, mem_r_data[7:0], map_y[2:0], 1'b0};
                  end
                endcase
              end
            end
            3: begin //m1에지(1dot지남)
              sub_counter_1 <= 4;
              sub_state <= TILE_FETCH;
              if((WX <= sub_counter_2 + 7) && (WY <= line_counter) && (LCDC[5] == 1)) begin //Win 타일데이터 읽어야 하는 상황. sub_counter_2는 바뀌지 않았음.
                mem_ena <= 1;
                mem_r_ena <= 1;
                mem_w_ena <= 0;
                case(LCDC[4])
                  1'b0: begin //$8800 method
                    mem_ad[15:0] <= 16'h9000 + {{4{sub_counter_3[7]}}, sub_counter_3[7:0], win_y[2:0], 1'b1};
                  end
                  1'b1: begin //$8000 method
                    mem_ad[15:0] <= 16'h8000 + {4'b0, sub_counter_3[7:0], win_y[2:0], 1'b1};
                  end
                endcase
              end
              else begin //BG 타일데이터 읽어야 하는 상황.
                mem_ena <= 1;
                mem_r_ena <= 1;
                mem_w_ena <= 0;
                case(LCDC[4])
                  1'b0: begin //$8800 method
                    mem_ad[15:0] <= 16'h9000 + {{4{sub_counter_3[7]}}, sub_counter_3[7:0], map_y[2:0], 1'b1};
                  end
                  1'b1: begin //$8000 method
                    mem_ad[15:0] <= 16'h8000 + {4'b0, sub_counter_3[7:0], map_y[2:0], 1'b1};
                  end
                endcase
              end
            end
            4: begin //m2에지. 
              sub_counter_1 <= 5;
              sub_state <= TILE_FETCH;
              tile_buffer[sub_counter_2][0] <= shifted_data[7];
              tile_buffer[sub_counter_2 + 1][0] <= shifted_data[6];
              tile_buffer[sub_counter_2 + 2][0] <= shifted_data[5];
              tile_buffer[sub_counter_2 + 3][0] <= shifted_data[4];
              tile_buffer[sub_counter_2 + 4][0] <= shifted_data[3];
              tile_buffer[sub_counter_2 + 5][0] <= shifted_data[2];
              tile_buffer[sub_counter_2 + 6][0] <= shifted_data[1];
              tile_buffer[sub_counter_2 + 7][0] <= shifted_data[0];
            end
            5: begin //m3에지
              sub_counter_1 <= 6;
              sub_state <= TILE_FETCH;
              tile_buffer[sub_counter_2][1] <= shifted_data[7];
              tile_buffer[sub_counter_2 + 1][1] <= shifted_data[6];
              tile_buffer[sub_counter_2 + 2][1] <= shifted_data[5];
              tile_buffer[sub_counter_2 + 3][1] <= shifted_data[4];
              tile_buffer[sub_counter_2 + 4][1] <= shifted_data[3];
              tile_buffer[sub_counter_2 + 5][1] <= shifted_data[2];
              tile_buffer[sub_counter_2 + 6][1] <= shifted_data[1];
              tile_buffer[sub_counter_2 + 7][1] <= shifted_data[0];
            end
            6: begin //m4에지
              sub_counter_1 <= 7;
              sub_state <= TILE_FETCH;
            end
            7: begin //m1에지(2dot지남)
              if(LCDC[5] == 0) begin //LCDC[5](Window enable)이 0일떄. BG타일만 출력하는 상황임. 
                if(sub_counter_2 == 0 ) begin
                  sub_counter_2 <= 8 - map_x[2:0]; 
                  sub_counter_1 <= 0; 
                  sub_state <= TILE_FETCH;
                end
                else if(sub_counter_2 + 8 > 159) begin
                  sub_counter_2 <= 0;
                  sub_counter_1 <= 0;
                  sub_counter_3 <= 0;
                  sub_state <= IDLE;
                end
                else begin
                  sub_counter_2 <= sub_counter_2 + 8;
                  sub_counter_1 <= 0; //다시 처음으로 이동해서 타일맵이랑 데이터읽기를 반복함.
                  sub_state <= TILE_FETCH;
                end
              end
              else begin //LCDC[5](Window enable)이 1일떄
              if((WX <= sub_counter_2 + 7) && (WY <= line_counter)) begin //Win 타일을 읽어온 상황일때. 
                if(sub_counter_2 == 0 ) begin //처음부터 Win타일을 출력하는 경우. WX는 0-7인 상황임. 8부터는 BG타일에서 픽셀하나 읽고 Win타일을 읽는 상황임.
                  sub_counter_2 <= 8 - win_x[2:0]; 
                  sub_counter_1 <= 0; //다시 처음으로 이동해서 타일맵이랑 데이터읽기를 반복함.
                  sub_state <= TILE_FETCH;
                end
                else if(sub_counter_2 + 8 > 159) begin //다 읽었으면 초기화하고 IDLE로 이동.
                  sub_counter_2 <= 0;
                  sub_counter_1 <= 0;
                  sub_counter_3 <= 0;
                  sub_state <= IDLE;
                end
                else begin
                  sub_counter_2 <= sub_counter_2 + 8;
                  sub_counter_1 <= 0; //다시 처음으로 이동해서 타일맵이랑 데이터읽기를 반복함.
                  sub_state <= TILE_FETCH;
                end
              end
              else begin //BG 타일을 읽어온 상황일때.
                if(sub_counter_2 == 0 ) begin //초기값일때. 즉 처음 한번만 이 조건을 만족함.
                  if((WX <= sub_counter_2 + 7 - map_x[2:0] + 7) && (WY <= line_counter)) begin //sub_counter_2가 0일떄는 BG픽셀이지만 바로 Win 픽셀이 나오는 경우.
                    sub_counter_2 <= (WX >= 7) ? WX - 7 : 7 - WX; //어차피 sub_counter_2가 0인 상황이면 WX <= 0 + 7을 만족하지 않는 상황이므로 WX는 8이상임.
                    sub_counter_1 <= 0; //다시 처음으로 이동해서 타일맵이랑 데이터읽기를 반복함.
                    sub_state <= TILE_FETCH;
                  end
                  else begin //sub_counter_2가 0이고 타일중간부터 시작했건 처음부터 시작했건 BG타일 마지막 픽셀까지 출력되야 하는 일반적인 경우.
                    sub_counter_2 <= 8 - map_x[2:0]; //map_x[2:0]이 0이면 타일의 8개 픽셀이 다 나오는 것이므로 9번째 픽셀을 그려야 하는것이 되고, 만약에 5이면 타일의 3개의 픽셀만 display되는 것이므로 4번째 픽셀을 그려야 하는것임.
                    sub_counter_1 <= 0; //다시 처음으로 이동해서 타일맵이랑 데이터읽기를 반복함.
                    sub_state <= TILE_FETCH;
                  end
                end
                else if((WX <= sub_counter_2 + 7 + 7) && (WY <= line_counter)) begin //중간에 sub_counter_2는 BG타일 시작점을 가르키고 있고 그 타일을 전부 출력하지 못하고 Win타일이 출력되는 경우. 
                  sub_counter_2 <=  sub_counter_2 + ((WX - 7) - sub_counter_2);
                  sub_counter_1 <= 0; //다시 처음으로 이동해서 타일맵이랑 데이터읽기를 반복함.
                  sub_state <= TILE_FETCH;
                end
                else if(sub_counter_2 + 8 > 159) begin //마지막까지 BG타일이 줄력되는 경우. 이때 마지막 타일을 막 읽어온 경우.
                  sub_counter_2 <= 0;
                  sub_counter_1 <= 0;
                  sub_counter_3 <= 0;
                  sub_state <= IDLE;
                end
                else begin 
                  sub_counter_2 <= sub_counter_2 + 8;
                  sub_counter_1 <= 0; //다시 처음으로 이동해서 타일맵이랑 데이터읽기를 반복함.
                  sub_state <= TILE_FETCH;
                end
              end
              end//LCDC[5](Window enable)이 1일때의 end
            end
          endcase //case(sub_counter_1)의 endcase
        end //TILE_FETCH: 의 end
      endcase //case(sub_state)의 end
      
      case(mode3_state) //mode3 시작하고 12dot동안 대기한다음에 매 dot당 1 pixel씩 출력 시작 해야 함.
        IDLE: begin //obj_scanline[255:0][1:0], tile_buffer[255:0][1:0], obj_priority[255:0], obj_palette[255:0], LDCD[0](BG & Window enable), LCDC[1](OBJ enable) 고려해서
          //output인 pixel_data[1:0], pixel_valid 출력해야함.
        end //pixel_data[1:0]은 0 = White, 1 = Light gray, 2 = Dark gray, 3 = Black.
        1: begin //m1에지때 sub_state는 TILE_FETCH가 되는 동시에 mode3_state는 1이 됨. 시작하고 12dot동안 tile_buffer에 최소 41픽셀은 채워짐.
          if(mode3_counter_1 == 47) begin //최악의 경우에도 BG 1픽셀, Win 8픽셀, win 8픽셀..... Win 1픽셀, Win 8픽셀, Win 8픽셀.... BG 1픽셀, BG 8픽셀, BG 8픽셀.... 12dot 대기후 1dot당 1픽셀씩 출력해도 문제없을듯.
            mode3_counter_1 <= 0; //밑에서 재활용하므로 꼭 0으로 초기화 해줘야 함.
            mode3_state <= 2;
          end
          else begin
            mode3_counter_1 <= mode3_counter_1 + 1;
            mode3_state <= 1;
          end
        end
        2: begin //m2에지. 12dot 대기 후 픽셀출력 시작. 총 160번 반복.
          mode3_state <= 3;
        end
        3: begin //m3에지
          mode3_state <= 4;
        end
        4: begin //m4에지
          mode3_state <= 5;
        end
        5: begin //m1에지(1dot 지남)
          if(mode3_counter_1 == 159) begin //160번 반복후 mode3_state는 IDLE로 이동.
            mode3_counter_1 <= 0;
            mode3_state <= IDLE;
            hsync <= 1;
            if(line_counter == 159) vsync <= 1;
          end
          else begin
            mode3_counter_1 <= mode3_counter_1 + 1;
            mode3_state <= 2;
          end
          case({LCDC[0], LCDC[1]}) //{BG & Window enable, OBJ enable}. pixel_data[1:0]은 0 = White, 1 = Light gray, 2 = Dark gray, 3 = Black.
            2'b00: begin //아무것도 출력되지 않는상황. 모든 픽셀이 0으로 고정.
              pixel_data[1:0] <= 0;
              pixel_valid <= 1;
            end
            2'b01: begin //OBJ만 출력되는 상황. OBJ외의 픽셀은 전부 0으로 고정.
              case(obj_scanline[mode3_counter_1][1:0])
                2'b00: begin
                  pixel_data[1:0] <= 0;
                  pixel_valid <= 1;
                end
                2'b01: begin
                  case(obj_palette[mode3_counter_1])
                    1'b0: begin //OBP0
                      pixel_data[1:0] <= OBP0[3:2];
                      pixel_valid <= 1;
                    end
                    1'b1: begin //OBP1
                      pixel_data[1:0] <= OBP1[3:2];
                      pixel_valid <= 1;
                    end
                  endcase
                end
                2'b10: begin
                  case(obj_palette[mode3_counter_1])
                    1'b0: begin //OBP0
                      pixel_data[1:0] <= OBP0[5:4];
                      pixel_valid <= 1;
                    end
                    1'b1: begin //OBP1
                      pixel_data[1:0] <= OBP1[5:4];
                      pixel_valid <= 1;
                    end
                  endcase
                end
                2'b11: begin
                  case(obj_palette[mode3_counter_1])
                    1'b0: begin //OBP0
                      pixel_data[1:0] <= OBP0[7:6];
                      pixel_valid <= 1;
                    end
                    1'b1: begin //OBP1
                      pixel_data[1:0] <= OBP1[7:6];
                      pixel_valid <= 1;
                    end
                  endcase
                end
              endcase
            end 
            2'b10: begin //BG & Win만 출력되는 상황.
              case(tile_buffer[mode3_counter_1][1:0])
                2'b00: begin
                  pixel_data[1:0] <= BGP[1:0];
                  pixel_valid <= 1;
                end
                2'b01: begin
                  pixel_data[1:0] <= BGP[3:2];
                  pixel_valid <= 1;
                end
                2'b10: begin
                  pixel_data[1:0] <= BGP[5:4];
                  pixel_valid <= 1;
                end
                2'b11: begin
                  pixel_data[1:0] <= BGP[7:6];
                  pixel_valid <= 1;
                end
              endcase
            end
            2'b11: begin //전부 출력되는 상황. 
              //OBJ 픽셀이 0이면 Priority값은 고려하지 않고 무조건 BG, Win 픽셀이 출력됨. OBJ 픽셀이 0이 아니고(1-3) Priority가 1이면 BG, Win 픽셀이 1-3이면 배경이 출력되고, BG, Win 픽셀이 0이면 OBJ가 출력됨.
              if(obj_priority[mode3_counter_1] == 1) begin //priority가 1일때.
                if(obj_scanline[mode3_counter_1][1:0] == 2'b0) begin //BG, Win 픽셀 출력.
                  case(tile_buffer[mode3_counter_1][1:0])
                    2'b00: begin
                      pixel_data[1:0] <= BGP[1:0];
                      pixel_valid <= 1;
                    end
                    2'b01: begin
                      pixel_data[1:0] <= BGP[3:2];
                      pixel_valid <= 1;
                    end
                    2'b10: begin
                      pixel_data[1:0] <= BGP[5:4];
                      pixel_valid <= 1;
                    end
                    2'b11: begin
                      pixel_data[1:0] <= BGP[7:6];
                      pixel_valid <= 1;
                    end
                  endcase
                end
                else begin
                  if(tile_buffer[mode3_counter_1][1:0] == 0) begin //OBJ 출력.
                    case(obj_palette[mode3_counter_1])
                      1'b0: begin
                        case(obj_scanline[mode3_counter_1][1:0])
                          2'b00: begin //이때는 위 if(obj_scanline[mode3_counter_1][1:0] == 2'b0)문을 만족하게 되어 여기 코드는 실행되지 않음.
                          end
                          2'b01: begin
                            pixel_data[1:0] <= OBP0[3:2];
                            pixel_valid <= 1;
                          end
                          2'b10: begin
                            pixel_data[1:0] <= OBP0[5:4];
                            pixel_valid <= 1;
                          end
                          2'b11: begin
                            pixel_data[1:0] <= OBP0[7:6];
                            pixel_valid <= 1;
                          end
                        endcase
                      end
                      1'b1: begin
                        case(obj_scanline[mode3_counter_1][1:0])
                          2'b00: begin //이때는 위 if(obj_scanline[mode3_counter_1][1:0] == 2'b0)문을 만족하게 되어 여기 코드는 실행되지 않음.
                          end
                          2'b01: begin
                            pixel_data[1:0] <= OBP1[3:2];
                            pixel_valid <= 1;
                          end
                          2'b10: begin
                            pixel_data[1:0] <= OBP1[5:4];
                            pixel_valid <= 1;
                          end
                          2'b11: begin
                            pixel_data[1:0] <= OBP1[7:6];
                            pixel_valid <= 1;
                          end
                        endcase
                      end
                    endcase
                  end
                  else begin //BG, Win 픽셀 출력.
                    case(tile_buffer[mode3_counter_1][1:0])
                      2'b00: begin //이떄는 위 if(tile_buffer[mode3_counter_1][1:0] == 0)문을 만족하게 되어 여기 코드는 실행되지 않음.
                      end
                      2'b01: begin
                        pixel_data[1:0] <= BGP[3:2];
                        pixel_valid <= 1;
                      end
                      2'b10: begin
                        pixel_data[1:0] <= BGP[5:4];
                        pixel_valid <= 1;
                      end
                      2'b11: begin
                        pixel_data[1:0] <= BGP[7:6];
                        pixel_valid <= 1;
                      end
                    endcase
                  end
                end
              end //if(obj_priority[mode3_counter_1] == 1)의 end
              else if(obj_priority[mode3_counter_1] == 0) begin //priority가 0일때. 
                if(obj_scanline[mode3_counter_1][1:0] == 2'b0) begin //tile_buffer 값 출력함.
                  case(tile_buffer[mode3_counter_1][1:0]) 
                    2'b00: begin
                      pixel_data[1:0] <= BGP[1:0];
                      pixel_valid <= 1;
                    end
                    2'b01: begin
                      pixel_data[1:0] <= BGP[3:2];
                      pixel_valid <= 1;
                    end
                    2'b10: begin
                      pixel_data[1:0] <= BGP[5:4];
                      pixel_valid <= 1;
                    end
                    2'b11: begin
                      pixel_data[1:0] <= BGP[7:6];
                      pixel_valid <= 1;
                    end
                  endcase
                end
                else begin //obj_scanline 값 출력함.
                  case(obj_palette[mode3_counter_1])
                    1'b0: begin
                      case(obj_scanline[mode3_counter_1][1:0]) 
                        2'b00: begin //이때는 위 if문을 만족하게 되어 여기 코드는 실행되지 않음.
                        end
                        2'b01: begin
                          pixel_data[1:0] <= OBP0[3:2];
                          pixel_valid <= 1;
                        end
                        2'b10: begin
                          pixel_data[1:0] <= OBP0[5:4];
                          pixel_valid <= 1;
                        end
                        2'b11: begin
                          pixel_data[1:0] <= OBP0[7:6];
                          pixel_valid <= 1;
                        end
                      endcase
                    end
                    1'b1: begin
                      case(obj_scanline[mode3_counter_1][1:0]) 
                        2'b00: begin //이때는 위 if문을 만족하게 되어 여기 코드는 실행되지 않음.
                        end
                        2'b01: begin
                          pixel_data[1:0] <= OBP1[3:2];
                          pixel_valid <= 1;
                        end
                        2'b10: begin
                          pixel_data[1:0] <= OBP1[5:4];
                          pixel_valid <= 1;
                        end
                        2'b11: begin
                          pixel_data[1:0] <= OBP1[7:6];
                          pixel_valid <= 1;
                        end
                      endcase
                    end
                  endcase //case(obj_palette[mode3_counter_1])의 endcase
                end
              end //else if(obj_priority[mode3_counter_1] == 0) 의 end
            end
          endcase //case({LCDC[0], LCDC[1]})의 endcase
        end
      endcase //case(mode3_state)의 end
      
      
      if(clk_counter == 3) begin //clk_counter는 16MHz의 속도로 0 -> 1 -> 2 -> 3 -> 0 -> 1 -> 2 -> 3 -> 0을 반복하게 됨.
        clk_counter <= 0;
      end
      else begin
        clk_counter <= clk_counter + 1;
      end
      
      if(T_cycle_ena) begin //이 블록안 코드는 CPU와 동일한 4MHz T_cycle 에지마다 실행됨.
        
      end
      
    end
  end //always @(posedge clk or posedge reset)의 end
  
  always @(*) begin
    PPU_LY_w_ena = 0;
    PPU_LY_w_data = 0;
    PPU_STAT_w_ena = 0;
    PPU_STAT_w_data = STAT; //중요! STAT의 특정 비트만을 바꾸기 위해서 PPU_STAT_w_ena를 1로 만드는 경우가 있을수 있으므로 나머지 비트들은 기존값을 유지해야 함.
    irq_vblank = 0;
    irq_LCD = 0;
    
    mode0_enter = 0;
    mode1_enter = 0;
    mode2_enter = 0;
    mode3_enter = 0;
    
    
    case(main_state) //LY 레지스터 설정 로직과 mode판별 로직. 위의 always @(posedge clk or posedge reset)의 코드를 옮겨와서 blocking 할당을 활용하기 위해서 이렇게 구현했음.
      IDLE: begin //여기서 mode3(Drawing pixels)은 무조건 172dot이고 mode0(Horizontal blank)은 무조건 204dot이라고 가정한 상황임!!!!!! 일단 구현 난이도를 낮추기 위해 이렇게 가정했음.
        if(LCDC[7] == 1) begin
          PPU_LY_w_ena = 1;
          PPU_LY_w_data[7:0] = 0;
          mode2_enter = 1; //mode2_enter 1로 설정.
        end 
      end
      OAM_SCAN: begin
        if(m_clk_counter == 319) begin
          mode3_enter = 1; //mode3_enter 1로 설정.
        end
      end
      DRAW_PIXEL: begin
        if(m_clk_counter == 687) begin //172 * 4 = 688임.
          mode0_enter = 1; //mode0_enter 1로 설정.
        end
        if(m_clk_counter == 1503) begin
          if(line_counter == 143) begin
            mode1_enter = 1; //mode1_enter 1로 설정.
          end
          else begin
            mode2_enter = 1; //mode2_enter 1로 설정.
          end
          PPU_LY_w_ena = 1;
          PPU_LY_w_data[7:0] = line_counter + 1;
        end
      end
      VBLANK: begin
        if(LCDC[7] == 0) begin
          PPU_LY_w_ena = 1;
          PPU_LY_w_data[7:0] = 0;
        end
        else if(m_clk_counter == 1823) begin
          if(line_counter == 153) begin
            PPU_LY_w_ena = 1;
            PPU_LY_w_data[7:0] = 0;
          end
          else begin
            PPU_LY_w_ena = 1;
            PPU_LY_w_data[7:0] = line_counter + 1;
          end
        end
      end
    endcase
    
    if(PPU_LY_w_ena & (LYC == PPU_LY_w_data)) begin //LY에 LYC와 값을 쓰려고 하면 동시에 STAT[2](LYC == LY 여부 플래그)가 1로 설정됨.
      PPU_STAT_w_ena = 1;
      PPU_STAT_w_data[2] = 1;
      if(mode0_enter) begin 
        PPU_STAT_w_data[1:0] = 0;
      end
      else if(mode1_enter) begin
        PPU_STAT_w_data[1:0] = 1;
      end
      else if(mode2_enter) begin
        PPU_STAT_w_data[1:0] = 2;
      end
      else if(mode3_enter) begin
        PPU_STAT_w_data[1:0] = 3;
      end
      else begin
        PPU_STAT_w_data[1:0] = STAT[1:0];
      end
    end
    else if(PPU_LY_w_ena & (LYC != PPU_LY_w_data)) begin //만약 LY에 LYC와 다른 값을 쓰려고 하면 STAT[2]는 0으로 다시 변경됨. 즉 STAT[2]는 LY에 변경타이밍에 맞춰서 계속 설정되는 구조임.
      PPU_STAT_w_ena = 1;
      PPU_STAT_w_data[2] = 0;
      if(mode0_enter) begin 
        PPU_STAT_w_data[1:0] = 0;
      end
      else if(mode1_enter) begin
        PPU_STAT_w_data[1:0] = 1;
      end
      else if(mode2_enter) begin
        PPU_STAT_w_data[1:0] = 2;
      end
      else if(mode3_enter) begin
        PPU_STAT_w_data[1:0] = 3;
      end
      else begin
        PPU_STAT_w_data[1:0] = STAT[1:0];
      end
    end
    else begin
      if(mode0_enter) begin 
        PPU_STAT_w_ena = 1;
        PPU_STAT_w_data[1:0] = 0;
        PPU_STAT_w_data[2] = STAT[2];
      end
      else if(mode1_enter) begin
        PPU_STAT_w_ena = 1;
        PPU_STAT_w_data[1:0] = 1;
        PPU_STAT_w_data[2] = STAT[2];
      end
      else if(mode2_enter) begin
        PPU_STAT_w_ena = 1;
        PPU_STAT_w_data[1:0] = 2;
        PPU_STAT_w_data[2] = STAT[2];
      end
      else if(mode3_enter) begin
        PPU_STAT_w_ena = 1;
        PPU_STAT_w_data[1:0] = 3;
        PPU_STAT_w_data[2] = STAT[2];
      end
    end
    
    if(STAT[6] && PPU_STAT_w_ena && (PPU_STAT_w_data[2] == 1)) begin //LYC=LY일 때 인터럽트 발생 여부 설정. if-else if 구조가 아니라 if-if-if... 구조이기 때문에 4개의 조건중 아무거나 하나만 만족해도 LCD 인터럽트가 발생함.
      irq_LCD = 1;
    end
    if(STAT[5] && mode2_enter) begin //모드 2(OAM Search) 진입 시 인터럽트 발생 설정
      irq_LCD = 1;
    end
    if(STAT[4] && mode1_enter) begin //모드 1(V-Blank) 진입 시 인터럽트 발생 설정
      irq_LCD = 1;
    end
    if(STAT[3] && mode0_enter) begin //모드 0(H-Blank) 진입 시 인터럽트 발생 설정
      irq_LCD = 1;
    end
    
    if(mode1_enter) begin
      irq_vblank = 1; //mode1 진입시 vblank 인터럽트 설정
    end
    
    
  end //always @(*)문의 end
  
endmodule
