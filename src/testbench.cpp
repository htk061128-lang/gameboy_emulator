#include <SDL2/SDL.h>
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vtop.h"
#include "rom_data.h"

#include <stdint.h>

// verilator -Wall -Wno-fatal --cc --trace --top-module top *.sv --exe testbench.cpp -CFLAGS "$(sdl2-config --cflags)" -LDFLAGS "$(sdl2-config --libs)" --build -j $(nproc) && ./obj_dir/Vtop
void setup_test_rom(uint8_t *memory)
{
    // [0] 메모리 싹 비우기 (0x00)
    for (int i = 0; i < 32768; i++) memory[i] = 0;

    // ==========================================
    // [1] V-Blank 인터럽트 핸들러 ($0040)
    // ==========================================
    // PPU가 V-Blank를 알리면 CPU는 여기로 강제 점프해야 합니다!
    uint16_t p = 0x0040;
    memory[p++] = 0xF5;             // PUSH AF (레지스터 백업)
    memory[p++] = 0x3E; memory[p++] = 0x01; // LD A, $01
    memory[p++] = 0xE0; memory[p++] = 0x80; // LDH ($80), A  <- HRAM($FF80)에 1을 써서 "나 깼어!"라고 표시
    memory[p++] = 0xF1;             // POP AF (레지스터 복구)
    memory[p++] = 0xD9;             // RETI (인터럽트 종료 및 IME=1 복구)

    // ==========================================
    // [2] 부팅 진입점 ($0100)
    // ==========================================
    p = 0x0100;
    memory[p++] = 0x00;             // NOP
    memory[p++] = 0xC3; 
    memory[p++] = 0x50; 
    memory[p++] = 0x01;             // JP $0150

    // ==========================================
    // [DATA] 타일 및 맵 데이터
    // ==========================================
    // 타일 0: 텅 빈 공간
    for(int i=0; i<16; i++) memory[0x0500 + i] = 0x00;
    
    // 타일 1: 대각선 빗살무늬 패턴 (스크롤 확인할 때 시각적으로 잘 보임)
    uint8_t tile_pattern[] = {
        0xCC, 0x00, 0x66, 0x00, 0x33, 0x00, 0x99, 0x00,
        0xCC, 0x00, 0x66, 0x00, 0x33, 0x00, 0x99, 0x00
    };
    for(int i=0; i<16; i++) memory[0x0510 + i] = tile_pattern[i];

    // BG 타일맵 ($0600~$09FF) -> 체크무늬로 채우기
    for(int i=0; i<1024; i++) {
        int x = i % 32;
        int y = i / 32;
        memory[0x0600 + i] = ((x + y) % 2 == 0) ? 1 : 0;
    }

    // ==========================================
    // [3] 메인 초기화 루틴 ($0150)
    // ==========================================
    p = 0x0150;
    memory[p++] = 0xF3;             // DI (인터럽트 일단 끄기)
    memory[p++] = 0x31; memory[p++] = 0x00; memory[p++] = 0xE0; // LD SP, $E000 (스택 포인터 설정! 매우 중요!)

    // --- VRAM 복사 람다 함수 ---
    auto emit_copy = [&](uint16_t src, uint16_t dst, uint16_t size) {
        memory[p++] = 0x21; memory[p++] = dst & 0xFF; memory[p++] = dst >> 8; // LD HL, dst
        memory[p++] = 0x11; memory[p++] = src & 0xFF; memory[p++] = src >> 8; // LD DE, src
        memory[p++] = 0x01; memory[p++] = size & 0xFF; memory[p++] = size >> 8; // LD BC, size
        memory[p++] = 0x1A; // LD A, (DE)
        memory[p++] = 0x22; // LD (HL+), A
        memory[p++] = 0x13; // INC DE
        memory[p++] = 0x0B; // DEC BC
        memory[p++] = 0x78; // LD A, B
        memory[p++] = 0xB1; // OR C
        memory[p++] = 0x20; memory[p++] = 0xF8; // JR NZ, -8
    };

    emit_copy(0x0500, 0x8000, 32);   // 타일 복사
    emit_copy(0x0600, 0x9800, 1024); // 맵 복사

    // 팔레트 및 위치 초기화
    memory[p++] = 0x3E; memory[p++] = 0xE4; memory[p++] = 0xE0; memory[p++] = 0x47; // BGP = $E4
    memory[p++] = 0xAF; // XOR A (A=0)
    memory[p++] = 0xE0; memory[p++] = 0x42; // SCY = 0
    memory[p++] = 0xE0; memory[p++] = 0x43; // SCX = 0

    // LCD 켜기
    memory[p++] = 0x3E; memory[p++] = 0x91; 
    memory[p++] = 0xE0; memory[p++] = 0x40; // LCDC = $91

    // ==========================================
    // [4] 인터럽트 대기 지옥 (The Core Test)
    // ==========================================
    // 1. 확인용 플래그 HRAM($FF80)을 0으로 세팅
    memory[p++] = 0xAF; // XOR A
    memory[p++] = 0xE0; memory[p++] = 0x80; // LDH ($80), A 

    // 2. V-Blank 인터럽트 수신 허용 (IE 레지스터 = 1)
    memory[p++] = 0x3E; memory[p++] = 0x01; // LD A, 1
    memory[p++] = 0xEA; memory[p++] = 0xFF; memory[p++] = 0xFF; // LD ($FFFF), A

    // 3. 마스터 스위치 ON (IME = 1)
    memory[p++] = 0xFB; // EI

    // 4. 대기 루프 시작
    uint16_t wait_loop = p;
    memory[p++] = 0x76;             // HALT (CPU 수면 상태 진입. PPU가 깨워주길 기다림)
    memory[p++] = 0x00;             // NOP  (Halt bug 방지용)
    memory[p++] = 0xF0; memory[p++] = 0x80; // LDH A, ($80) (플래그 확인)
    memory[p++] = 0xB7;             // OR A (A가 0인지 체크)
    memory[p++] = 0x28; memory[p++] = 0xF9; // JR Z, -7 (여전히 0이면 HALT로 다시 점프!)

    // ==========================================
    // [5] 테스트 성공! (무한 자동 스크롤 루프)
    // ==========================================
    // 이 코드가 실행된다는 것은 인터럽트 처리 후 무사히 돌아왔다는 뜻입니다.
    uint16_t success_loop = p;
    
    // V-Blank 대기 (한 프레임 1번 스크롤용)
    memory[p++] = 0xF0; memory[p++] = 0x44; // LDH A, ($44)
    memory[p++] = 0xFE; memory[p++] = 0x90; // CP 144
    memory[p++] = 0x20; memory[p++] = 0xFA; // JR NZ, -6
    
    // 배경을 자동으로 왼쪽으로 스크롤 (SCX++)
    memory[p++] = 0xF0; memory[p++] = 0x43; // LDH A, ($43)
    memory[p++] = 0x3C;             // INC A
    memory[p++] = 0xE0; memory[p++] = 0x43; // LDH ($43), A

    // V-Blank 벗어날 때까지 대기
    memory[p++] = 0xF0; memory[p++] = 0x44; // LDH A, ($44)
    memory[p++] = 0xFE; memory[p++] = 0x90; // CP 144
    memory[p++] = 0x28; memory[p++] = 0xFA; // JR Z, -6

    // 무한 반복
    memory[p++] = 0x18; memory[p++] = (uint8_t)((success_loop - (p + 1)) & 0xFF);
}

int print_tile(uint8_t *vram)
{
    SDL_Window *window = SDL_CreateWindow(
        "game boy test",        // 창 제목
        SDL_WINDOWPOS_CENTERED, // X 위치
        SDL_WINDOWPOS_CENTERED, // Y 위치
        16 * 8 * 2,             // 창 너비, 16개의 타일을 2배 확대
        24 * 8 * 2,             // 창 높이, 24개의 타일을 2배 확대
        SDL_WINDOW_SHOWN        // 플래그
    );
    if (!window)
    {
        std::cerr << "Window 생성 실패: " << SDL_GetError() << std::endl;
        SDL_Quit();
        return 1;
    }

    SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED); // 렌더러 생성.

    // 5. 텍스처(Texture) 생성 (160x144 크기의 가상 도화지)
    SDL_Texture *texture = SDL_CreateTexture(
        renderer,
        SDL_PIXELFORMAT_ARGB8888,    // 픽셀 포맷 (Alpha, Red, Green, Blue 각각 8비트)
        SDL_TEXTUREACCESS_STREAMING, // CPU에서 픽셀 데이터를 자주 업데이트할 때 쓰는 옵션
        16 * 8,                      // 가로 128픽셀
        24 * 8);                     // 세로 192픽셀

    std::vector<uint32_t> pixelbuffer(16 * 8 * 24 * 8); // 128 * 192 개의 배열 생성. 각각 32비트.

    uint32_t palette[4] = {
        0xFFE0F8D0, // 0: 가장 밝은 녹색 (배경) - Alpha 100%
        0xFF88C070, // 1: 밝은 녹색
        0xFF346856, // 2: 어두운 녹색
        0xFF081820  // 3: 까만색 (사각형) - Alpha 100%
    };

    uint8_t tile_data[8][8];

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
        }
    }

    SDL_UpdateTexture(texture, nullptr, pixelbuffer.data(), 128 * sizeof(uint32_t));

    // 10. 렌더러 초기화 및 도화지를 창 크기에 맞춰 확대해서 복사
    SDL_RenderClear(renderer);
    SDL_RenderCopy(renderer, texture, nullptr, nullptr);

    // 11. 화면에 최종 출력
    SDL_RenderPresent(renderer);
    printf("tile display!\n");
}

// Game Boy 오리지널 해상도
const int GB_WIDTH = 160;
const int GB_HEIGHT = 144;
// 화면이 너무 작아서 보기 힘드므로 4배 확대해서 창을 띄웁니다.
const int SCALE = 4;

struct ROM
{
    uint8_t memory[2097152]; // 2MiB
    uint8_t read_data;       // 저장해두고 다음 클럭에 넘겨줄거임.
    bool read_data_ena;
};

struct ERAM
{
    uint8_t memory[32768]; // 32KiB
    uint8_t read_data;
    bool read_data_ena;
};

struct VRAM
{
    uint8_t memory[8192]; // 8KiB
    uint8_t read_data;
    bool read_data_ena;
};

struct WRAM
{
    uint8_t memory[4096]; // 4KiB
    uint8_t read_data;
    bool read_data_ena;
};

struct OAM
{
    uint8_t memory[160]; // 160 byte
    uint8_t read_data;
    bool read_data_ena;
};

struct HRAM
{
    uint8_t memory[127]; // 127 byte
    uint8_t read_data;
    bool read_data_ena;
};

int main(int argc, char **argv)
{
    // 1. Verilator 초기화
    Verilated::commandArgs(argc, argv);

    // 2. CPU 인스턴스 생성
    Vtop *dut = new Vtop;

    // 3. 파형 추적 설정
    // Verilated::traceEverOn(true);
    // VerilatedVcdC *m_trace = new VerilatedVcdC;
    // dut->trace(m_trace, 5);
    // m_trace->open("waveform.vcd");

    if (SDL_Init(SDL_INIT_VIDEO) < 0)
    { // SDL 초기화
        std::cerr << "SDL 초기화 실패: " << SDL_GetError() << std::endl;
        return 1;
    }

    // 2. 윈도우 생성
    SDL_Window *window = SDL_CreateWindow(
        "game boy test",        // 창 제목
        SDL_WINDOWPOS_CENTERED, // X 위치
        SDL_WINDOWPOS_CENTERED, // Y 위치
        GB_WIDTH * SCALE,       // 창 너비
        GB_HEIGHT * SCALE,      // 창 높이
        SDL_WINDOW_SHOWN        // 플래그
    );
    if (!window)
    {
        std::cerr << "Window 생성 실패: " << SDL_GetError() << std::endl;
        SDL_Quit();
        return 1;
    }

    SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED); // 렌더러 생성.

    // 5. 텍스처(Texture) 생성 (160x144 크기의 가상 도화지)
    SDL_Texture *texture = SDL_CreateTexture(
        renderer,
        SDL_PIXELFORMAT_ARGB8888,    // 픽셀 포맷 (Alpha, Red, Green, Blue 각각 8비트)
        SDL_TEXTUREACCESS_STREAMING, // CPU에서 픽셀 데이터를 자주 업데이트할 때 쓰는 옵션
        GB_WIDTH,
        GB_HEIGHT);

    std::vector<uint32_t> pixelbuffer(GB_WIDTH * GB_HEIGHT); // 160 * 144 개의 배열 생성. 각각 32비트.

    uint32_t palette[4] = {
        0xFFE0F8D0, // 0: 가장 밝은 녹색 (배경) - Alpha 100%
        0xFF88C070, // 1: 밝은 녹색
        0xFF346856, // 2: 어두운 녹색
        0xFF081820  // 3: 까만색 (사각형) - Alpha 100%
    };

    for (int i = 0; i < (160 * 144); i++)
    {
        pixelbuffer[i] = palette[0]; // pixelbuffer 초기화.
    }

    int j = 0; // pixelbuffer의 인덱스를 저장함.

    SDL_Event event; // 이벤트 처리 위해 선언.
    bool is_running = true;
    int sim_time = 0; // 매 클럭마다 1씩 증가함.
    int frame_counter = 0;
    int second_counter = 0;
    int second_counter_standard = SDL_GetTicks();
    int nextclk;
    int counter;

    uint32_t frame_start_time = SDL_GetTicks(); // 프레임이 출력이 끝난후의 시작을 측정하는 변수.

    std::cout << "Simulation Starting..." << std::endl;

    ROM rom; // 구조체 선언.
    ERAM eram;
    VRAM vram;
    WRAM wram;
    OAM oam;
    HRAM hram;

    for (int i = 0; i < 2097152; i++)
    {
        rom.memory[i] = 0;
    }

    setup_test_rom(rom.memory);
    /*for (int i = 0; i < 32768; i++)
    {
        rom.memory[i] = game_data[i];
    }*/

    for (int i = 0; i < 32768; i++)
    {
        eram.memory[i] = 0;
    }
    for (int i = 0; i < 8192; i++)
    {
        vram.memory[i] = 0;
    }
    for (int i = 0; i < 160; i++)
    {
        oam.memory[i] = 0;
    }
    for (int i = 0; i < 127; i++)
    {
        hram.memory[i] = 0;
    }
    for (int i = 0; i < 4096; i++)
    {
        wram.memory[i] = 0;
    }

    dut->joypad_A = 0;
    dut->joypad_B = 0;
    dut->joypad_start = 0;
    dut->joypad_select = 0;
    dut->joypad_up = 0;
    dut->joypad_down = 0;
    dut->joypad_right = 0;
    dut->joypad_left = 0;

    dut->MBC_version = 1; // MBC1으로 설정.
    dut->ROM_size = 6;    // 2MiB
    dut->RAM_size = 3;    // 32KiB

    dut->reset = 1;
    dut->clk = 0;
    dut->eval();

    dut->clk = 1;
    dut->eval();

    dut->reset = 0;
    dut->clk = 0;
    dut->eval();

    while (is_running)
    {
        dut->clk = 1;
        dut->eval();
        if (dut->pixel_valid & dut->vsync)
        { // 프레임 출력.
            pixelbuffer[j] = palette[dut->pixel_data];
            j = 0; // j는 초기화.
            // 9. 변경된 픽셀 데이터를 텍스처(도화지)에 복사
            SDL_UpdateTexture(texture, nullptr, pixelbuffer.data(), GB_WIDTH * sizeof(uint32_t));

            // 10. 렌더러 초기화 및 도화지를 창 크기에 맞춰 확대해서 복사
            SDL_RenderClear(renderer);
            SDL_RenderCopy(renderer, texture, nullptr, nullptr);

            // 11. 화면에 최종 출력
            SDL_RenderPresent(renderer);
            //printf("pixel display!!!\n");
            //printf("PC: %04X\n", dut->PC_out);
            frame_counter++;

            while (SDL_PollEvent(&event))
            {
                if (event.type == SDL_QUIT)
                    is_running = false;

                // 1. 키를 눌렀을 때 (상태를 1로 유지)
                if (event.type == SDL_KEYDOWN)
                {
                    switch (event.key.keysym.sym)
                    {
                    case SDLK_UP:
                        dut->joypad_up = 1;
                        break;
                    case SDLK_DOWN:
                        dut->joypad_down = 1;
                        break;
                    case SDLK_LEFT:
                        dut->joypad_left = 1;
                        break;
                    case SDLK_RIGHT:
                        dut->joypad_right = 1;
                        break;
                    case SDLK_z:
                        dut->joypad_A = 1;
                        break;
                    case SDLK_x:
                        dut->joypad_B = 1;
                        break;
                    case SDLK_c:
                        dut->joypad_start = 1;
                        break;
                    case SDLK_v:
                        dut->joypad_select = 1;
                        break;
                    case SDLK_ESCAPE:
                        is_running = false;
                        break;
                    }
                }
                // 2. 키를 뗐을 때 (상태를 0으로 복구)
                else if (event.type == SDL_KEYUP)
                {
                    switch (event.key.keysym.sym)
                    {
                    case SDLK_UP:
                        dut->joypad_up = 0;
                        break;
                    case SDLK_DOWN:
                        dut->joypad_down = 0;
                        break;
                    case SDLK_LEFT:
                        dut->joypad_left = 0;
                        break;
                    case SDLK_RIGHT:
                        dut->joypad_right = 0;
                        break;
                    case SDLK_z:
                        dut->joypad_A = 0;
                        break;
                    case SDLK_x:
                        dut->joypad_B = 0;
                        break;
                    case SDLK_c:
                        dut->joypad_start = 0;
                        break;
                    case SDLK_v:
                        dut->joypad_select = 0;
                        break;
                    }
                }
            }

            uint32_t frame_time = SDL_GetTicks() - frame_start_time;
            if (frame_time < 16)
            {
                SDL_Delay(16 - frame_time); // 16ms를 채우기 위해 남은 시간만 쉼
            }
            frame_start_time = SDL_GetTicks(); // 다음 프레임 시간 측정 시작
        }
        else if (dut->pixel_valid)
        {
            if (j < pixelbuffer.size())
            {
                pixelbuffer[j] = palette[dut->pixel_data];
                j++;
            }
            else
            {
                // 이 로그가 찍힌다면 PPU의 vsync 타이밍이 잘못된 것입니다!
                printf("Warning: Pixel index j out of bounds! j=%d\n", j);
                return 1;
            }
        }

        if (rom.read_data_ena) // 무조건 이 조건문이 위에 있어야 함. 그래야 연속 읽기가 문제없이 구현됨.
        {                      // 읽기 1클럭 지연 구현.
            rom.read_data_ena = 0;
            dut->ROM_r_data = rom.read_data;
        }
        if (dut->ROM_ena && dut->ROM_r_ena)
        {
            rom.read_data = rom.memory[dut->ROM_ad];
            rom.read_data_ena = 1;
            /*if (counter < 500)
            {
                printf("read_ROM, ad: %06X\n", dut->ROM_ad); // ROM 읽기 로그 출력.
                printf("PC: %04X\n", dut->PC_out);
                counter++;
            }*/
        }
        else if (dut->ROM_ena && dut->ROM_w_ena)
        {
            rom.memory[dut->ROM_ad] = dut->ROM_w_data;
        }

        if (eram.read_data_ena)
        {
            eram.read_data_ena = 0;
            dut->ERAM_r_data = eram.read_data;
        }
        if (dut->ERAM_ena && dut->ERAM_r_ena)
        {
            eram.read_data = eram.memory[dut->ERAM_ad];
            eram.read_data_ena = 1;
        }
        else if (dut->ERAM_ena && dut->ERAM_w_ena)
        {
            eram.memory[dut->ERAM_ad] = dut->ERAM_w_data;
        }

        if (hram.read_data_ena)
        {
            hram.read_data_ena = 0;
            dut->HRAM_r_data = hram.read_data;
        }
        if (dut->HRAM_ena && dut->HRAM_r_ena)
        {
            hram.read_data = hram.memory[dut->HRAM_ad - 0xFF80];
            hram.read_data_ena = 1;
        }
        else if (dut->HRAM_ena && dut->HRAM_w_ena)
        {
            hram.memory[dut->HRAM_ad - 0xFF80] = dut->HRAM_w_data;
        }

        if (oam.read_data_ena)
        {
            oam.read_data_ena = 0;
            dut->OAM_r_data = oam.read_data;
        }
        if (dut->OAM_ena && dut->OAM_r_ena)
        {
            oam.read_data = oam.memory[dut->OAM_ad - 0xFE00];
            oam.read_data_ena = 1;
        }
        else if (dut->OAM_ena && dut->OAM_w_ena)
        {
            oam.memory[dut->OAM_ad - 0xFE00] = dut->OAM_w_data;
        }

        if (vram.read_data_ena)
        {
            vram.read_data_ena = 0;
            dut->VRAM_r_data = vram.read_data;
        }
        if (dut->VRAM_ena && dut->VRAM_r_ena)
        {
            vram.read_data = vram.memory[dut->VRAM_ad - 0x8000];
            vram.read_data_ena = 1;
        }
        else if (dut->VRAM_ena && dut->VRAM_w_ena)
        {
            vram.memory[dut->VRAM_ad - 0x8000] = dut->VRAM_w_data;
            // printf("VRAM_write, ad: %04X\n", dut->VRAM_ad); // VRAM 쓰기 로그 출력.
            // printf("IF: %04X , IE: %04X, LCDC: %04X\n", dut->IF_out, dut->IE_out, dut->LCDC_out);
        }

        if (wram.read_data_ena)
        {
            wram.read_data_ena = 0;
            dut->WRAM_r_data = wram.read_data;
        }
        if (dut->WRAM_ena && dut->WRAM_r_ena)
        {
            wram.read_data = wram.memory[dut->WRAM_ad - 0xC000];
            wram.read_data_ena = 1;
        }
        else if (dut->WRAM_ena && dut->WRAM_w_ena)
        {
            wram.memory[dut->WRAM_ad - 0xC000] = dut->WRAM_w_data;
            /*if(dut->WRAM_ad == 0xC0BF){
                printf("C0BF write!, data: %02X", dut->WRAM_w_data);
            }*/
        }

        if (dut->top__DOT__cpu_mem_ad == 0xFF40 && dut->top__DOT__cpu_mem_ena)
        {
            printf("CPU $FF40 write, data: %02X\n", dut->top__DOT__cpu_mem_w_data);
            if (dut->top__DOT__io_reg_ena == 1 && dut->top__DOT__io_reg_ad == 0xFF40)
            {
                printf("LDCD_write, data: %02X\n", dut->top__DOT__io_reg_w_data);
            }
        }

        // PC가 0x0040 (V-Blank 인터럽트 핸들러)에 도착했는지 확인
        if (dut->PC_out == 0x0040)
        {
            printf("\n🔥🔥🔥 V-BLANK INTERRUPT TRIGGERED! 🔥🔥🔥\n\n");
        }

        // 루프에 갇혀 있을 때 CPU 내부의 인터럽트 상태 확인
        if (dut->PC_out == 0x1661)
        {
            // 주의: dut->IME_out, dut->IE_out, dut->IF_out은 top.sv에서 output으로 빼두어야 출력 가능합니다.
            printf("Waiting... IME: %d | IE: %02X | IF: %02X\n",
                   dut->IME_out, dut->IE_out, dut->IF_out);
        }

        if(dut->top__DOT__irq_vblank)
        {
            printf("vblank request! IE: %02X, IF: %02X, IME: %d\n", dut->IE_out, dut->IF_out, dut->IME_out);
        }

        if(dut->top__DOT__io_reg_ena && dut->top__DOT__io_reg_ad == 0xFFFF)
        {
            printf("CPU, IE write!, sim_time: %d\n", sim_time);
            nextclk = 1;
        }
        if(nextclk)
        {
            printf("IE : %02X\n", dut->IE_out);
            nextclk = 0;
        }

        if(dut->top__DOT__u_CPU__DOT__halt)
        {
            printf("halt!!\n");
        }

        if(dut->HRAM_ad == 0xFF80 && dut->HRAM_ena)
        {
            if(dut->HRAM_w_ena) {
            printf("CPU FF80 write!!, data: %02X, PC: %04X sim_time: %d\n", dut->HRAM_w_data, dut->PC_out, sim_time);
            }
        }


        /*if (dut->top__DOT__cpu_mem_ena && dut->top__DOT__cpu_mem_ad == 0xFF00)
        {
            if (dut->top__DOT__cpu_mem_r_ena)
            {
            }
            if (dut->top__DOT__cpu_mem_w_ena)
            {
                printf("CPU $FF00 wirte, data: %02X\n", dut->top__DOT__cpu_mem_w_data);
                if (dut->top__DOT__io_reg_ena && dut->top__DOT__io_reg_ad == 0xFF00 && dut->top__DOT__io_reg_w_ena && dut->top__DOT__io_reg_w_data == dut->top__DOT__cpu_mem_w_data)
                {
                    printf("JOY write, data: %02X\n", dut->top__DOT__io_reg_w_data);
                    if (dut->top__DOT__u_io_register__DOT__joy_w_ena)
                    {
                        printf("JOY[5:4] write!!!, JOY: %02X\n", dut->JOY_out);
                        nextclk = 1;
                    }
                }
            }
        }
        if (nextclk)
        {
            printf("JOY next: %02X\n", dut->JOY_out);
            nextclk = 0;
        }
        if (dut->vsync)
        {
            printf("Input Check -> UP:%d, DN:%d, LT:%d, RT:%d | JOY_REG:%02X\n",
                   dut->joypad_up, dut->joypad_down, dut->joypad_left, dut->joypad_right, dut->JOY_out);
        }*/

        /*
        if (second_counter > 1000)
        {
            second_counter_standard = SDL_GetTicks();
            printf("FPS: %d\n", frame_counter);
            frame_counter = 0;
        }
        else
        {
            second_counter = SDL_GetTicks() - second_counter_standard;
        }*/

        dut->clk = 0;
        dut->eval();

        sim_time++; // 매 클럭마다 1씩 증가.
    }

    std::cout << "\nSimulation Finished!" << std::endl;
    // m_trace->close();
    dut->final();
    delete dut;
    // delete m_trace;

    return 0;
}
