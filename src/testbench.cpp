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
    Verilated::traceEverOn(true);
    VerilatedVcdC *m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 5);
    m_trace->open("waveform.vcd");

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
        0x9BBC0FFF, // 0: 가장 밝음 (White)
        0x8BAC0FFF, // 1: 밝은 회색 (Light Gray)
        0x306230FF, // 2: 어두운 회색 (Dark Gray)
        0x0F380FFF  // 3: 가장 어두움 (Black)
    };
    int j = 0; // pixelbuffer의 인덱스를 저장함.

    SDL_Event event; // 이벤트 처리 위해 선언.
    bool is_running = true;

    std::cout << "Simulation Starting..." << std::endl;

    ROM rom; // 구조체 선언.
    ERAM eram;
    VRAM vram;
    WRAM wram;
    OAM oam;
    HRAM hram;

    for (int i = 0; i < 32768; i++) // 2097152 대신 32768 사용
    {
        rom.memory[i] = game_data[i];
    }
    dut->MBC_version = 1; // MBC1으로 설정.
    dut->ROM_size = 6;    // 2MiB
    dut->RAM_size = 3;    // 32KiB
    dut->reset = 0;

    dut->clk = 0;
    dut->eval();

    dut->reset = 1;
    dut->clk = 1;
    dut->eval();

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
            SDL_Delay(16); // CPU를 100% 쓰지 않도록 약간의 딜레이 (약 60FPS 타겟)
        }
        else if (dut->pixel_valid)
        {
            pixelbuffer[j] = palette[dut->pixel_data];
            j = j + 1;
        }

        dut->joypad_A = 0;
        dut->joypad_B = 0;
        dut->joypad_left = 0;
        dut->joypad_right = 0;
        dut->joypad_up = 0;
        dut->joypad_down = 0;
        dut->joypad_start = 0;
        dut->joypad_select = 0;

        while (SDL_PollEvent(&event))
        {
            if (event.type == SDL_QUIT)
                is_running = false;

            if (event.type == SDL_KEYDOWN)
            {
                switch (event.key.keysym.sym)
                {
                case SDLK_UP: /* 위 로직 */
                    dut->joypad_up = 1;
                    break;
                case SDLK_DOWN: /* 아래 로직 */
                    dut->joypad_down = 1;
                    break;
                case SDLK_LEFT: /* 왼쪽 로직 */
                    dut->joypad_left = 1;
                    break;
                case SDLK_RIGHT: /* 오른쪽 로직 */
                    dut->joypad_right = 1;
                    break;
                case SDLK_z: /* Z 로직 */
                    dut->joypad_A = 1;
                    break;
                case SDLK_x: /* X 로직 */
                    dut->joypad_B = 1;
                    break;
                case SDLK_c: /* C 로직 */
                    dut->joypad_start = 1;
                    break;
                case SDLK_v: /* V 로직 */
                    dut->joypad_select = 1;
                    break;
                case SDLK_ESCAPE:
                    is_running = false;
                    break;
                }
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
        }

        dut->clk = 0;
        dut->eval();
    }

    std::cout << "\nSimulation Finished!" << std::endl;
    m_trace->close();
    dut->final();
    delete dut;
    delete m_trace;

    return 0;
}
