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

    while() {
        dut->my_clk = 1;
        dut->eval();


        dut->my_clk = 0;
        dut->eval();
    }



    std::cout << "\nSimulation Finished!" << std::endl;
    m_trace->close();
    dut->final();
    delete dut;
    delete m_trace;

    return 0;

}
