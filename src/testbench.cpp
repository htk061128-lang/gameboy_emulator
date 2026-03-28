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
}

struct ERAM
{
    uint8_t memory[32768]; // 32KiB
    uint8_t read_data;
    bool read_data_ena;
}

struct VRAM
{
    uint8_t memory[8192]; // 8KiB
    uint8_t read_data;
    bool read_data_ena;
}

struct WRAM
{
    uint8_t memory[4096]; // 4KiB
    uint8_t read_data;
    bool read_data_ena;
}

struct OAM
{
    uint8_t memory[160]; // 160 byte
    uint8_t read_data;
    bool read_data_ena;
}

struct HRAM
{
    uint8_t memory[127]; // 127 byte
    uint8_t read_data;
    bool read_data_ena;
}

int
main(int argc, char **argv)
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

    std::cout << "Simulation Starting..." << std::endl;

    ROM rom; // 구조체 선언.
    ERAM eram;
    VRAM vram;
    WRAM wram;
    OAM oam;
    HRAM hram;

    dut->MBC_version = 1; // MBC1으로 설정.
    dut->ROM_size = 6;    // 2MiB
    dut->RAM_size = 3;    // 32KiB

    dut->clk = 0;
    dut->eval();

    while (1)
    {
        dut->clk = 1;
        dut->eval();

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
