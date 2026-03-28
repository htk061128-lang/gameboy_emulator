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



int main(int argc, char** argv) {
    // 1. Verilator 초기화
    Verilated::commandArgs(argc, argv);

    // 2. CPU 인스턴스 생성
    Vtop* dut = new Vtop;

    // 3. 파형 추적 설정
    Verilated::traceEverOn(true);
    VerilatedVcdC* m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 5);
    m_trace->open("waveform.vcd");

    std::cout << "Simulation Starting..." << std::endl;

    while(1) {
        dut->clk = 1;
        dut->eval();


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
