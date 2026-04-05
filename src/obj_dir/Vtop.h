// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VTOP_H_
#define _VTOP_H_  // guard

#include "verilated.h"

//==========

class Vtop__Syms;

//----------

VL_MODULE(Vtop) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(joypad_start,0,0);
    VL_IN8(joypad_select,0,0);
    VL_IN8(joypad_A,0,0);
    VL_IN8(joypad_B,0,0);
    VL_IN8(joypad_down,0,0);
    VL_IN8(joypad_up,0,0);
    VL_IN8(joypad_left,0,0);
    VL_IN8(joypad_right,0,0);
    VL_OUT8(ROM_ena,0,0);
    VL_OUT8(ROM_r_ena,0,0);
    VL_OUT8(ROM_w_ena,0,0);
    VL_OUT8(ROM_w_data,7,0);
    VL_IN8(ROM_r_data,7,0);
    VL_OUT8(VRAM_ena,0,0);
    VL_OUT8(VRAM_r_ena,0,0);
    VL_OUT8(VRAM_w_ena,0,0);
    VL_OUT8(VRAM_w_data,7,0);
    VL_IN8(VRAM_r_data,7,0);
    VL_OUT8(WRAM_ena,0,0);
    VL_OUT8(WRAM_r_ena,0,0);
    VL_OUT8(WRAM_w_ena,0,0);
    VL_OUT8(WRAM_w_data,7,0);
    VL_IN8(WRAM_r_data,7,0);
    VL_OUT8(ERAM_ena,0,0);
    VL_OUT8(ERAM_r_ena,0,0);
    VL_OUT8(ERAM_w_ena,0,0);
    VL_OUT8(ERAM_w_data,7,0);
    VL_IN8(ERAM_r_data,7,0);
    VL_OUT8(OAM_ena,0,0);
    VL_OUT8(OAM_r_ena,0,0);
    VL_OUT8(OAM_w_ena,0,0);
    VL_OUT8(OAM_w_data,7,0);
    VL_IN8(OAM_r_data,7,0);
    VL_OUT8(HRAM_ena,0,0);
    VL_OUT8(HRAM_r_ena,0,0);
    VL_OUT8(HRAM_w_ena,0,0);
    VL_OUT8(HRAM_w_data,7,0);
    VL_IN8(HRAM_r_data,7,0);
    VL_OUT8(pixel_data,1,0);
    VL_OUT8(pixel_valid,0,0);
    VL_OUT8(hsync,0,0);
    VL_OUT8(vsync,0,0);
    VL_IN8(MBC_version,3,0);
    VL_IN8(ROM_size,7,0);
    VL_IN8(RAM_size,7,0);
    VL_OUT8(IF_out,7,0);
    VL_OUT8(IE_out,7,0);
    VL_OUT8(LCDC_out,7,0);
    VL_OUT8(JOY_out,7,0);
    VL_OUT8(LY_out,7,0);
    VL_OUT8(IME_out,0,0);
    VL_OUT8(cpu_halt_out,0,0);
    VL_OUT16(VRAM_ad,15,0);
    VL_OUT16(WRAM_ad,15,0);
    VL_OUT16(ERAM_ad,14,0);
    VL_OUT16(OAM_ad,15,0);
    VL_OUT16(HRAM_ad,15,0);
    VL_OUT16(PC_out,15,0);
    VL_OUT(ROM_ad,20,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ top__DOT__cpu_mem_ena;
        CData/*0:0*/ top__DOT__cpu_mem_r_ena;
        CData/*0:0*/ top__DOT__cpu_mem_w_ena;
        CData/*7:0*/ top__DOT__cpu_mem_w_data;
        CData/*7:0*/ top__DOT__cpu_mem_r_data;
        CData/*0:0*/ top__DOT__ppu_mem_ena;
        CData/*0:0*/ top__DOT__ppu_mem_r_ena;
        CData/*0:0*/ top__DOT__ppu_mem_w_ena;
        CData/*7:0*/ top__DOT__ppu_mem_w_data;
        CData/*7:0*/ top__DOT__ppu_mem_r_data;
        CData/*0:0*/ top__DOT__dma_mem_ena;
        CData/*0:0*/ top__DOT__dma_mem_r_ena;
        CData/*0:0*/ top__DOT__dma_mem_w_ena;
        CData/*7:0*/ top__DOT__dma_mem_w_data;
        CData/*7:0*/ top__DOT__dma_mem_r_data;
        CData/*0:0*/ top__DOT__io_reg_ena;
        CData/*0:0*/ top__DOT__io_reg_r_ena;
        CData/*0:0*/ top__DOT__io_reg_w_ena;
        CData/*7:0*/ top__DOT__io_reg_w_data;
        CData/*7:0*/ top__DOT__io_reg_r_data;
        CData/*7:0*/ top__DOT__irq_clear;
        CData/*0:0*/ top__DOT__irq_LCD;
        CData/*0:0*/ top__DOT__irq_vblank;
        CData/*0:0*/ top__DOT__cpu_halt;
        CData/*0:0*/ top__DOT__PPU_STAT_w_ena;
        CData/*7:0*/ top__DOT__PPU_STAT_w_data;
        CData/*0:0*/ top__DOT__PPU_LY_w_ena;
        CData/*7:0*/ top__DOT__PPU_LY_w_data;
        CData/*0:0*/ top__DOT__u_CPU__DOT__IME;
        CData/*0:0*/ top__DOT__u_CPU__DOT__IME_on;
        CData/*0:0*/ top__DOT__u_CPU__DOT__IME_off;
        CData/*0:0*/ top__DOT__u_CPU__DOT__EI_pending;
        CData/*0:0*/ top__DOT__u_CPU__DOT__EI_pending_on;
        CData/*7:0*/ top__DOT__u_CPU__DOT__A;
        CData/*7:0*/ top__DOT__u_CPU__DOT__F;
        CData/*7:0*/ top__DOT__u_CPU__DOT__B;
        CData/*7:0*/ top__DOT__u_CPU__DOT__C;
        CData/*7:0*/ top__DOT__u_CPU__DOT__D;
        CData/*7:0*/ top__DOT__u_CPU__DOT__E;
        CData/*7:0*/ top__DOT__u_CPU__DOT__H;
        CData/*7:0*/ top__DOT__u_CPU__DOT__L;
        CData/*7:0*/ top__DOT__u_CPU__DOT__IF_reg;
        CData/*7:0*/ top__DOT__u_CPU__DOT__Operand_r8;
        CData/*7:0*/ top__DOT__u_CPU__DOT__Operand_r8_ad;
        CData/*7:0*/ top__DOT__u_CPU__DOT__Dest_r8;
        CData/*7:0*/ top__DOT__u_CPU__DOT__Source_r8;
        CData/*0:0*/ top__DOT__u_CPU__DOT__Condition;
        CData/*7:0*/ top__DOT__u_CPU__DOT__Operand_r16_ad;
        CData/*7:0*/ top__DOT__u_CPU__DOT__register_r16stk_ad;
        CData/*7:0*/ top__DOT__u_CPU__DOT__T_clk_counter;
        CData/*7:0*/ top__DOT__u_CPU__DOT__T_clk_counter_next;
        CData/*7:0*/ top__DOT__u_CPU__DOT__opcode;
        CData/*0:0*/ top__DOT__u_CPU__DOT__opcode_valid;
        CData/*0:0*/ top__DOT__u_CPU__DOT__prefix_valid;
        CData/*3:0*/ top__DOT__u_CPU__DOT__my_clk_counter;
        CData/*3:0*/ top__DOT__u_CPU__DOT__mem_state;
        CData/*7:0*/ top__DOT__u_CPU__DOT__main_state;
        CData/*7:0*/ top__DOT__u_CPU__DOT__next_main_state;
        CData/*0:0*/ top__DOT__u_CPU__DOT__reg_w_ena;
        CData/*7:0*/ top__DOT__u_CPU__DOT__reg_ad;
        CData/*7:0*/ top__DOT__u_CPU__DOT__reg_ad_2;
        CData/*0:0*/ top__DOT__u_CPU__DOT__PC_plus_ena;
        CData/*7:0*/ top__DOT__u_CPU__DOT__mem_w_data_reg;
        CData/*0:0*/ top__DOT__u_CPU__DOT__mem_w_ena_reg;
    };
    struct {
        CData/*0:0*/ top__DOT__u_CPU__DOT__mem_r_ena_reg;
        CData/*7:0*/ top__DOT__u_CPU__DOT__mem_out_reg;
        CData/*0:0*/ top__DOT__u_CPU__DOT__mem_control_r_ena;
        CData/*0:0*/ top__DOT__u_CPU__DOT__mem_control_w_ena;
        CData/*7:0*/ top__DOT__u_CPU__DOT__mem_control_w_data;
        CData/*7:0*/ top__DOT__u_CPU__DOT__tem_reg;
        CData/*0:0*/ top__DOT__u_CPU__DOT__tem_reg_w_ena;
        CData/*7:0*/ top__DOT__u_CPU__DOT__tem_reg_w_data;
        CData/*7:0*/ top__DOT__u_CPU__DOT__imm8_reg;
        CData/*0:0*/ top__DOT__u_CPU__DOT__imm8_reg_clear;
        CData/*0:0*/ top__DOT__u_CPU__DOT__imm16_reg_clear;
        CData/*7:0*/ top__DOT__u_CPU__DOT__a_8;
        CData/*7:0*/ top__DOT__u_CPU__DOT__b_8;
        CData/*4:0*/ top__DOT__u_CPU__DOT__alu_op_8;
        CData/*0:0*/ top__DOT__u_CPU__DOT__cin_8;
        CData/*3:0*/ top__DOT__u_CPU__DOT__flag_8;
        CData/*7:0*/ top__DOT__u_CPU__DOT__alu_result_8;
        CData/*4:0*/ top__DOT__u_CPU__DOT__ins00__DOT__tem5;
        CData/*0:0*/ top__DOT__u_io_register__DOT__DMA_start;
        CData/*0:0*/ top__DOT__u_io_register__DOT__irq_timer_wire;
        CData/*0:0*/ top__DOT__u_io_register__DOT__IF_w_ena;
        CData/*0:0*/ top__DOT__u_io_register__DOT__IE_w_ena;
        CData/*7:0*/ top__DOT__u_io_register__DOT__div_r_data;
        CData/*0:0*/ top__DOT__u_io_register__DOT__div_w_ena;
        CData/*0:0*/ top__DOT__u_io_register__DOT__div_r_ena;
        CData/*7:0*/ top__DOT__u_io_register__DOT__tima_r_data;
        CData/*0:0*/ top__DOT__u_io_register__DOT__tima_w_ena;
        CData/*0:0*/ top__DOT__u_io_register__DOT__tima_r_ena;
        CData/*7:0*/ top__DOT__u_io_register__DOT__tma_r_data;
        CData/*0:0*/ top__DOT__u_io_register__DOT__tma_r_ena;
        CData/*0:0*/ top__DOT__u_io_register__DOT__tma_w_ena;
        CData/*7:0*/ top__DOT__u_io_register__DOT__tac_r_data;
        CData/*0:0*/ top__DOT__u_io_register__DOT__tac_r_ena;
        CData/*0:0*/ top__DOT__u_io_register__DOT__tac_w_ena;
        CData/*7:0*/ top__DOT__u_io_register__DOT__dma_r_data;
        CData/*0:0*/ top__DOT__u_io_register__DOT__dma_r_ena;
        CData/*0:0*/ top__DOT__u_io_register__DOT__dma_w_ena;
        CData/*7:0*/ top__DOT__u_io_register__DOT__ppu_io_r_data;
        CData/*0:0*/ top__DOT__u_io_register__DOT__ppu_io_r_ena;
        CData/*0:0*/ top__DOT__u_io_register__DOT__ppu_io_w_ena;
        CData/*7:0*/ top__DOT__u_io_register__DOT__stat_r_data;
        CData/*0:0*/ top__DOT__u_io_register__DOT__stat_r_ena;
        CData/*0:0*/ top__DOT__u_io_register__DOT__stat_w_ena;
        CData/*7:0*/ top__DOT__u_io_register__DOT__ly_r_data;
        CData/*0:0*/ top__DOT__u_io_register__DOT__ly_r_ena;
        CData/*0:0*/ top__DOT__u_io_register__DOT__ly_w_ena;
        CData/*0:0*/ top__DOT__u_io_register__DOT__joy_w_ena;
        CData/*3:0*/ top__DOT__u_io_register__DOT__r_state;
        CData/*3:0*/ top__DOT__u_io_register__DOT__next;
        CData/*7:0*/ top__DOT__u_io_register__DOT__JOY;
        CData/*0:0*/ top__DOT__u_io_register__DOT__irq_joypad;
        CData/*7:0*/ top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg;
        CData/*7:0*/ top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg;
        CData/*4:0*/ top__DOT__u_io_register__DOT__inst_DIV__DOT__my_clk_counter;
        CData/*7:0*/ top__DOT__u_io_register__DOT__inst_TIMA__DOT__TIMA;
        CData/*3:0*/ top__DOT__u_io_register__DOT__inst_TIMA__DOT__my_clk_counter;
        CData/*0:0*/ top__DOT__u_io_register__DOT__inst_TIMA__DOT__T_cycle_ena;
        CData/*0:0*/ top__DOT__u_io_register__DOT__inst_TIMA__DOT__M_cycle_ena;
        CData/*0:0*/ top__DOT__u_io_register__DOT__inst_TIMA__DOT__TIMA_M_4_ena;
        CData/*0:0*/ top__DOT__u_io_register__DOT__inst_TIMA__DOT__TIMA_M_16_ena;
        CData/*0:0*/ top__DOT__u_io_register__DOT__inst_TIMA__DOT__TIMA_M_64_ena;
        CData/*0:0*/ top__DOT__u_io_register__DOT__inst_TIMA__DOT__TIMA_M_256_ena;
        CData/*0:0*/ top__DOT__u_io_register__DOT__inst_TIMA__DOT__TIMA_ena;
        CData/*0:0*/ top__DOT__u_io_register__DOT__inst_TIMA__DOT__TIMA_overflow;
    };
    struct {
        CData/*7:0*/ top__DOT__u_io_register__DOT__inst_TMA__DOT__TMA_reg;
        CData/*7:0*/ top__DOT__u_io_register__DOT__inst_TAC__DOT__TAC_reg;
        CData/*7:0*/ top__DOT__u_io_register__DOT__inst_DMA__DOT__DMA_reg;
        CData/*7:0*/ top__DOT__u_io_register__DOT__inst_PPU_IO__DOT__LCDC_reg;
        CData/*7:0*/ top__DOT__u_io_register__DOT__inst_PPU_IO__DOT__SCY_reg;
        CData/*7:0*/ top__DOT__u_io_register__DOT__inst_PPU_IO__DOT__SCX_reg;
        CData/*7:0*/ top__DOT__u_io_register__DOT__inst_PPU_IO__DOT__LYC_reg;
        CData/*7:0*/ top__DOT__u_io_register__DOT__inst_PPU_IO__DOT__BGP_reg;
        CData/*7:0*/ top__DOT__u_io_register__DOT__inst_PPU_IO__DOT__OBP0_reg;
        CData/*7:0*/ top__DOT__u_io_register__DOT__inst_PPU_IO__DOT__OBP1_reg;
        CData/*7:0*/ top__DOT__u_io_register__DOT__inst_PPU_IO__DOT__WX_reg;
        CData/*7:0*/ top__DOT__u_io_register__DOT__inst_PPU_IO__DOT__WY_reg;
        CData/*7:0*/ top__DOT__u_io_register__DOT__inst_STAT__DOT__STAT_reg;
        CData/*7:0*/ top__DOT__u_io_register__DOT__inst_LY__DOT__LY_reg;
        CData/*4:0*/ top__DOT__u_PPU__DOT__main_state;
        CData/*7:0*/ top__DOT__u_PPU__DOT__line_counter;
        CData/*0:0*/ top__DOT__u_PPU__DOT__mode0_enter;
        CData/*0:0*/ top__DOT__u_PPU__DOT__mode1_enter;
        CData/*0:0*/ top__DOT__u_PPU__DOT__mode2_enter;
        CData/*0:0*/ top__DOT__u_PPU__DOT__mode3_enter;
        WData/*79:0*/ top__DOT__u_PPU__DOT__obj_y[3];
        WData/*79:0*/ top__DOT__u_PPU__DOT__obj_x[3];
        WData/*79:0*/ top__DOT__u_PPU__DOT__obj_tile_index[3];
        WData/*79:0*/ top__DOT__u_PPU__DOT__obj_flag[3];
        CData/*3:0*/ top__DOT__u_PPU__DOT__array_index;
        CData/*3:0*/ top__DOT__u_PPU__DOT__valid_obj_counter;
        WData/*511:0*/ top__DOT__u_PPU__DOT__obj_scanline[16];
        WData/*2047:0*/ top__DOT__u_PPU__DOT__obj_x_buffer[64];
        CData/*3:0*/ top__DOT__u_PPU__DOT__mode3_state;
        CData/*7:0*/ top__DOT__u_PPU__DOT__mode3_counter_1;
        CData/*7:0*/ top__DOT__u_PPU__DOT__map_x;
        CData/*7:0*/ top__DOT__u_PPU__DOT__map_y;
        CData/*7:0*/ top__DOT__u_PPU__DOT__win_x;
        CData/*7:0*/ top__DOT__u_PPU__DOT__win_y;
        WData/*511:0*/ top__DOT__u_PPU__DOT__tile_buffer[16];
        CData/*7:0*/ top__DOT__u_PPU__DOT__obj_row;
        CData/*7:0*/ top__DOT__u_PPU__DOT__shifted_data;
        CData/*6:0*/ top__DOT__u_Memory_Interface__DOT__bank_mask;
        CData/*1:0*/ top__DOT__u_Memory_Interface__DOT__ram_mask;
        CData/*0:0*/ top__DOT__u_Memory_Interface__DOT__dma_main_req;
        CData/*0:0*/ top__DOT__u_Memory_Interface__DOT__dma_oam_req;
        CData/*0:0*/ top__DOT__u_Memory_Interface__DOT__ppu_vram_req;
        CData/*0:0*/ top__DOT__u_Memory_Interface__DOT__ppu_oam_req;
        CData/*0:0*/ top__DOT__u_Memory_Interface__DOT__cpu_main_req;
        CData/*0:0*/ top__DOT__u_Memory_Interface__DOT__cpu_hram_req;
        CData/*0:0*/ top__DOT__u_Memory_Interface__DOT__cpu_vram_req;
        CData/*0:0*/ top__DOT__u_Memory_Interface__DOT__cpu_oam_req;
        CData/*3:0*/ top__DOT__u_Memory_Interface__DOT__cpu_state;
        CData/*3:0*/ top__DOT__u_Memory_Interface__DOT__cpu_next;
        CData/*3:0*/ top__DOT__u_Memory_Interface__DOT__ppu_state;
        CData/*3:0*/ top__DOT__u_Memory_Interface__DOT__ppu_next;
        CData/*3:0*/ top__DOT__u_Memory_Interface__DOT__dma_state;
        CData/*3:0*/ top__DOT__u_Memory_Interface__DOT__dma_next;
        CData/*7:0*/ top__DOT__u_Memory_Interface__DOT__MBC1_0000_1FFF;
        CData/*4:0*/ top__DOT__u_Memory_Interface__DOT__MBC1_2000_3FFF;
        CData/*1:0*/ top__DOT__u_Memory_Interface__DOT__MBC1_4000_5FFF;
        CData/*0:0*/ top__DOT__u_Memory_Interface__DOT__MBC1_6000_7FFF;
        CData/*0:0*/ top__DOT__u_Memory_Interface__DOT__MBC1_0000_w_ena;
        CData/*0:0*/ top__DOT__u_Memory_Interface__DOT__MBC1_2000_w_ena;
        CData/*0:0*/ top__DOT__u_Memory_Interface__DOT__MBC1_4000_w_ena;
        CData/*0:0*/ top__DOT__u_Memory_Interface__DOT__MBC1_6000_w_ena;
        CData/*7:0*/ top__DOT__u_Memory_Interface__DOT__MBC1_0000_w_data;
        CData/*4:0*/ top__DOT__u_Memory_Interface__DOT__MBC1_2000_w_data;
        CData/*1:0*/ top__DOT__u_Memory_Interface__DOT__MBC1_4000_w_data;
    };
    struct {
        CData/*0:0*/ top__DOT__u_Memory_Interface__DOT__MBC1_6000_w_data;
        CData/*3:0*/ top__DOT__u_OAM_DMA__DOT__state;
        CData/*7:0*/ top__DOT__u_OAM_DMA__DOT__clk_counter;
        CData/*7:0*/ top__DOT__u_OAM_DMA__DOT__tem_reg;
        CData/*0:0*/ top__DOT__u_OAM_DMA__DOT__w_end;
        CData/*0:0*/ top__DOT__u_OAM_DMA__DOT__r_end;
        SData/*15:0*/ top__DOT__cpu_mem_ad;
        SData/*15:0*/ top__DOT__ppu_mem_ad;
        SData/*15:0*/ top__DOT__dma_mem_ad;
        SData/*15:0*/ top__DOT__io_reg_ad;
        SData/*15:0*/ top__DOT__u_CPU__DOT__SP;
        SData/*15:0*/ top__DOT__u_CPU__DOT__PC;
        SData/*15:0*/ top__DOT__u_CPU__DOT__Operand_r16;
        SData/*15:0*/ top__DOT__u_CPU__DOT__Dest_r16mem;
        SData/*15:0*/ top__DOT__u_CPU__DOT__Source_r16mem;
        SData/*15:0*/ top__DOT__u_CPU__DOT__register_r16stk;
        SData/*15:0*/ top__DOT__u_CPU__DOT__reg_w_data;
        SData/*15:0*/ top__DOT__u_CPU__DOT__reg_w_data_2;
        SData/*15:0*/ top__DOT__u_CPU__DOT__mem_ad_reg;
        SData/*15:0*/ top__DOT__u_CPU__DOT__mem_control_ad;
        SData/*15:0*/ top__DOT__u_CPU__DOT__imm16_reg;
        SData/*8:0*/ top__DOT__u_CPU__DOT__ins00__DOT__tem9;
        SData/*15:0*/ top__DOT__u_io_register__DOT__inst_DIV__DOT__T_clk_counter;
        SData/*15:0*/ top__DOT__u_io_register__DOT__inst_TIMA__DOT__T_clk_counter;
        SData/*15:0*/ top__DOT__u_io_register__DOT__inst_TIMA__DOT__M_4_counter;
        SData/*15:0*/ top__DOT__u_io_register__DOT__inst_TIMA__DOT__M_16_counter;
        SData/*15:0*/ top__DOT__u_io_register__DOT__inst_TIMA__DOT__M_64_counter;
        SData/*15:0*/ top__DOT__u_io_register__DOT__inst_TIMA__DOT__M_256_counter;
        WData/*159:0*/ top__DOT__u_PPU__DOT__obj_ad[5];
        SData/*15:0*/ top__DOT__u_PPU__DOT__sub_state;
        SData/*15:0*/ top__DOT__u_PPU__DOT__sub_counter_1;
        SData/*15:0*/ top__DOT__u_PPU__DOT__sub_counter_2;
        SData/*15:0*/ top__DOT__u_PPU__DOT__sub_counter_3;
        SData/*15:0*/ top__DOT__u_OAM_DMA__DOT__real_clk_counter;
        SData/*15:0*/ top__DOT__u_OAM_DMA__DOT__r_ad_reg;
        SData/*15:0*/ top__DOT__u_OAM_DMA__DOT__w_ad_reg;
        IData/*31:0*/ top__DOT__u_PPU__DOT__m_clk_counter;
        WData/*255:0*/ top__DOT__u_PPU__DOT__obj_priority[8];
        WData/*255:0*/ top__DOT__u_PPU__DOT__obj_palette[8];
        IData/*31:0*/ top__DOT__u_PPU__DOT__i;
        QData/*39:0*/ top__DOT__u_PPU__DOT__oam_scan;
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ top__DOT__u_PPU__DOT____Vlvbound1;
        CData/*7:0*/ top__DOT__u_PPU__DOT____Vlvbound3;
        CData/*0:0*/ top__DOT__u_PPU__DOT____Vlvbound4;
        CData/*7:0*/ top__DOT__u_PPU__DOT____Vlvbound6;
        CData/*0:0*/ top__DOT__u_PPU__DOT____Vlvbound7;
        CData/*7:0*/ top__DOT__u_PPU__DOT____Vlvbound9;
        CData/*0:0*/ top__DOT__u_PPU__DOT____Vlvbound10;
        CData/*7:0*/ top__DOT__u_PPU__DOT____Vlvbound12;
        CData/*7:0*/ top__DOT__u_PPU__DOT____Vlvbound13;
        CData/*7:0*/ top__DOT__u_PPU__DOT____Vlvbound14;
        CData/*7:0*/ top__DOT__u_PPU__DOT____Vlvbound15;
        CData/*7:0*/ top__DOT__u_PPU__DOT____Vlvbound16;
        CData/*7:0*/ top__DOT__u_PPU__DOT____Vlvbound17;
        CData/*7:0*/ top__DOT__u_PPU__DOT____Vlvbound18;
        CData/*7:0*/ __Vdly__top__DOT__u_CPU__DOT__tem_reg;
        CData/*3:0*/ __Vdly__top__DOT__u_CPU__DOT__mem_state;
        CData/*7:0*/ __Vdly__top__DOT__u_CPU__DOT__main_state;
        CData/*0:0*/ __Vdly__top__DOT__u_CPU__DOT__opcode_valid;
        CData/*0:0*/ __Vdly__top__DOT__u_CPU__DOT__EI_pending;
        CData/*7:0*/ __Vdly__top__DOT__u_CPU__DOT__T_clk_counter;
        CData/*0:0*/ __Vdly__top__DOT__u_CPU__DOT__IME;
        CData/*7:0*/ __Vdly__top__DOT__irq_clear;
        CData/*0:0*/ __Vdly__top__DOT__u_CPU__DOT__mem_w_ena_reg;
        CData/*0:0*/ __Vdly__top__DOT__u_CPU__DOT__mem_r_ena_reg;
        CData/*7:0*/ __Vdly__top__DOT__u_CPU__DOT__mem_out_reg;
        CData/*7:0*/ __Vdly__top__DOT__u_CPU__DOT__IF_reg;
        CData/*3:0*/ __Vdly__top__DOT__u_CPU__DOT__my_clk_counter;
        CData/*7:0*/ __Vdly__top__DOT__u_io_register__DOT__JOY;
        CData/*4:0*/ __Vdly__top__DOT__u_io_register__DOT__inst_DIV__DOT__my_clk_counter;
        CData/*3:0*/ __Vdly__top__DOT__u_io_register__DOT__inst_TIMA__DOT__my_clk_counter;
        CData/*0:0*/ __Vdly__top__DOT__u_io_register__DOT__inst_TIMA__DOT__TIMA_overflow;
        CData/*7:0*/ __Vdly__top__DOT__u_io_register__DOT__inst_TIMA__DOT__TIMA;
        CData/*4:0*/ __Vdly__top__DOT__u_PPU__DOT__main_state;
        CData/*7:0*/ __Vdly__top__DOT__u_PPU__DOT__line_counter;
        WData/*79:0*/ __Vdly__top__DOT__u_PPU__DOT__obj_x[3];
        WData/*79:0*/ __Vdly__top__DOT__u_PPU__DOT__obj_tile_index[3];
        WData/*79:0*/ __Vdly__top__DOT__u_PPU__DOT__obj_flag[3];
        WData/*511:0*/ __Vdly__top__DOT__u_PPU__DOT__obj_scanline[16];
        CData/*3:0*/ __Vdly__top__DOT__u_PPU__DOT__array_index;
        CData/*3:0*/ __Vdly__top__DOT__u_PPU__DOT__valid_obj_counter;
        WData/*2047:0*/ __Vdly__top__DOT__u_PPU__DOT__obj_x_buffer[64];
        WData/*511:0*/ __Vdly__top__DOT__u_PPU__DOT__tile_buffer[16];
        CData/*3:0*/ __Vdly__top__DOT__u_PPU__DOT__mode3_state;
        CData/*7:0*/ __Vdly__top__DOT__u_PPU__DOT__mode3_counter_1;
        CData/*3:0*/ __Vdly__top__DOT__u_OAM_DMA__DOT__state;
        CData/*0:0*/ __Vdly__top__DOT__u_OAM_DMA__DOT__w_end;
        CData/*0:0*/ __Vdly__top__DOT__u_OAM_DMA__DOT__r_end;
        CData/*7:0*/ __Vdly__top__DOT__u_OAM_DMA__DOT__clk_counter;
        CData/*7:0*/ __Vdly__top__DOT__u_OAM_DMA__DOT__tem_reg;
        CData/*0:0*/ __Vclklast__TOP__clk;
        CData/*0:0*/ __Vclklast__TOP__reset;
        CData/*3:0*/ __Vchglast__TOP__top__DOT__u_CPU__DOT__flag_8;
        CData/*7:0*/ __Vchglast__TOP__top__DOT__u_CPU__DOT__alu_result_8;
        SData/*15:0*/ top__DOT__u_PPU__DOT____Vlvbound2;
        SData/*15:0*/ top__DOT__u_PPU__DOT____Vlvbound5;
        SData/*15:0*/ top__DOT__u_PPU__DOT____Vlvbound8;
        SData/*15:0*/ top__DOT__u_PPU__DOT____Vlvbound11;
        SData/*15:0*/ __Vdly__top__DOT__u_CPU__DOT__PC;
        SData/*15:0*/ __Vdly__top__DOT__u_CPU__DOT__SP;
        SData/*15:0*/ __Vdly__top__DOT__u_io_register__DOT__inst_DIV__DOT__T_clk_counter;
        SData/*15:0*/ __Vdly__top__DOT__u_io_register__DOT__inst_TIMA__DOT__T_clk_counter;
        SData/*15:0*/ __Vdly__top__DOT__u_io_register__DOT__inst_TIMA__DOT__M_4_counter;
        SData/*15:0*/ __Vdly__top__DOT__u_io_register__DOT__inst_TIMA__DOT__M_16_counter;
        SData/*15:0*/ __Vdly__top__DOT__u_io_register__DOT__inst_TIMA__DOT__M_64_counter;
    };
    struct {
        SData/*15:0*/ __Vdly__top__DOT__u_io_register__DOT__inst_TIMA__DOT__M_256_counter;
        SData/*15:0*/ __Vdly__top__DOT__u_PPU__DOT__sub_state;
        SData/*15:0*/ __Vdly__top__DOT__u_PPU__DOT__sub_counter_1;
        SData/*15:0*/ __Vdly__top__DOT__u_PPU__DOT__sub_counter_2;
        SData/*15:0*/ __Vdly__top__DOT__u_PPU__DOT__sub_counter_3;
        WData/*159:0*/ __Vdly__top__DOT__u_PPU__DOT__obj_ad[5];
        SData/*15:0*/ __Vdly__top__DOT__u_OAM_DMA__DOT__real_clk_counter;
        SData/*15:0*/ __Vdly__top__DOT__u_OAM_DMA__DOT__r_ad_reg;
        SData/*15:0*/ __Vdly__top__DOT__u_OAM_DMA__DOT__w_ad_reg;
        IData/*31:0*/ __Vdly__top__DOT__u_PPU__DOT__m_clk_counter;
        WData/*255:0*/ __Vdly__top__DOT__u_PPU__DOT__obj_priority[8];
        WData/*255:0*/ __Vdly__top__DOT__u_PPU__DOT__obj_palette[8];
    };
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vtop__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtop);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vtop(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vtop();
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vtop__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vtop__Syms* symsp, bool first);
  private:
    static QData _change_request(Vtop__Syms* __restrict vlSymsp);
    static QData _change_request_1(Vtop__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__7(Vtop__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vtop__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__1(Vtop__Syms* __restrict vlSymsp);
    static void _sequent__TOP__2(Vtop__Syms* __restrict vlSymsp);
    static void _sequent__TOP__3(Vtop__Syms* __restrict vlSymsp);
    static void _sequent__TOP__4(Vtop__Syms* __restrict vlSymsp);
    static void _settle__TOP__5(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__6(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
