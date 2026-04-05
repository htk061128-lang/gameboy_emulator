# gameboy_emulator
Verilog HDL로 개발 중인 Game Boy(1989) 에뮬레이터입니다. Verilator를 사용하여 시뮬레이션하며, SDL2 라이브러리를 통해 화면을 출력합니다.

개발기간: 26년 1월 ~ 26년 4월

사용언어: Verilog(CPU, PPU등의 모듈 개발), C++(테스트 벤치 작성)

사용도구: Verilator, SDL2
# 실행 방법
github codespace에서 다음 명령어를 입력하여 프로젝트를 빌드하고 시뮬레이터를 실행할 수 있습니다.
1. cd src
2. verilator -Wall -Wno-fatal --cc --top-module top *.sv --exe testbench.cpp -CFLAGS "$(sdl2-config --cflags)" -LDFLAGS "$(sdl2-config --libs)" --build -j $(nproc) && ./obj_dir/Vtop
# 구현 모듈
모든 모듈은 16MHz 클럭신호를 input으로 받는것으로 가정되어 개발되었습니다.

top.sv - 아래의 하위모듈들을 하나의 모듈로 통합한 모듈입니다. 

cpu.sv - Game Boy의 8-bit 8080-like Sharp CPU의 기능을 구현했습니다.

block3_decoder.svh - cpu.sv의 코드가 길어져서 분리된 파일로 opcode[7:6]이 2'b11인 명령어들(block3)을 디코딩해서 알맞은 제어신호를 발생시키는 코드를 포함합니다.

prefix_decoder.svh - cpu.sv의 코드가 길어져서 분리된 파일로 Game Boy의 prefix 명령어들을 디코딩하는 코드를 포함합니다.

PPU.sv - Game Boy의 160 * 144 픽셀 화면 출력을 담당합니다. VRAM(Video Memory), OAM(Object Attribute Memory)의 값을 읽고 타이밍에 맞추어 픽셀데이터를 output으로 보냅니다.

DMA.sv - Game Boy에서 주소 $FF46에 있는 DMA 레지스터의 값을 받아서 외부 메모리에서 순차적으로 값을 읽어서 OAM에 값을 쓰는 역할을 합니다.

Memory_Interface.sv - CPU, PPU, DMA의 메모리 제어신호를 input으로 받아서 우선순위에 따라 선별해서 외부 메모리에 전달하고, 외부 메모리로부터의 신호를 CPU, PPU, DMA로 전달해주는 역할을 수행합니다.

io_register.sv - Game Boy의 여러 Memory Mapped I/O register들을 통합해서 관리하기 위한 모듈입니다. 하위에 IE($FFFF, Interrupt enable), IF($FF0F, Interrupt flag), TIMA($FF05, Timer counter), STAT($FF41, LCD status)등의 Hardware Registers를 구현한 하위 모듈들이 포함되어 있습니다.
# 시뮬레이션
testbench.cpp - verilator를 사용하여 C++로 작성된 파일로 SDL2(Simple DirectMedia Layer) 라이브러리를 사용합니다. ROM, VRAM, WRAM, ERAM, OAM, HRAM등의 메모리들은 uint8_t형의 배열로 구현하였고, SDL2를 사용하여 top모듈이 보내는 pixel_data, pixel_valid신호들을 받아서 모니터에 화면을 출력하고, 키보드 입력을 받아서 top모듈에 전송합니다.
# Included ROMs for testing
rom_data.h - 테스트를 위해 2048.gb Created by Wyatt Ferguson(Licensed under MIT) 파일을 uint8_t 배열로 변환한 데이터를 포함합니다. 출처 - https://github.com/wyattferguson/2048-gb


