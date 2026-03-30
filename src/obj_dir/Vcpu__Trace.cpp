// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcpu__Syms.h"


void Vcpu::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vcpu__Syms* __restrict vlSymsp = static_cast<Vcpu__Syms*>(userp);
    Vcpu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vcpu::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vcpu__Syms* __restrict vlSymsp = static_cast<Vcpu__Syms*>(userp);
    Vcpu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgCData(oldp+0,((0xe0U | (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg))),8);
            tracep->chgCData(oldp+1,((0xe0U | (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg))),8);
            tracep->chgCData(oldp+2,(vlTOPp->top__DOT__u_io_register__DOT__inst_PPU_IO__DOT__LCDC_reg),8);
            tracep->chgCData(oldp+3,(vlTOPp->top__DOT__u_io_register__DOT__inst_STAT__DOT__STAT_reg),8);
            tracep->chgCData(oldp+4,(vlTOPp->top__DOT__u_io_register__DOT__inst_PPU_IO__DOT__SCY_reg),8);
            tracep->chgCData(oldp+5,(vlTOPp->top__DOT__u_io_register__DOT__inst_PPU_IO__DOT__SCX_reg),8);
            tracep->chgCData(oldp+6,(vlTOPp->top__DOT__u_io_register__DOT__inst_PPU_IO__DOT__WX_reg),8);
            tracep->chgCData(oldp+7,(vlTOPp->top__DOT__u_io_register__DOT__inst_PPU_IO__DOT__WY_reg),8);
            tracep->chgCData(oldp+8,(vlTOPp->top__DOT__u_io_register__DOT__inst_PPU_IO__DOT__BGP_reg),8);
            tracep->chgCData(oldp+9,(vlTOPp->top__DOT__u_io_register__DOT__inst_PPU_IO__DOT__OBP0_reg),8);
            tracep->chgCData(oldp+10,(vlTOPp->top__DOT__u_io_register__DOT__inst_PPU_IO__DOT__OBP1_reg),8);
            tracep->chgCData(oldp+11,(vlTOPp->top__DOT__u_io_register__DOT__inst_DMA__DOT__DMA_reg),8);
            tracep->chgCData(oldp+12,(vlTOPp->top__DOT__u_io_register__DOT__inst_LY__DOT__LY_reg),8);
            tracep->chgCData(oldp+13,(vlTOPp->top__DOT__u_io_register__DOT__inst_PPU_IO__DOT__LYC_reg),8);
            tracep->chgBit(oldp+14,(vlTOPp->top__DOT__cpu_mem_ena));
            tracep->chgSData(oldp+15,(vlTOPp->top__DOT__cpu_mem_ad),16);
            tracep->chgBit(oldp+16,(vlTOPp->top__DOT__cpu_mem_r_ena));
            tracep->chgBit(oldp+17,(vlTOPp->top__DOT__cpu_mem_w_ena));
            tracep->chgCData(oldp+18,(vlTOPp->top__DOT__cpu_mem_w_data),8);
            tracep->chgBit(oldp+19,(vlTOPp->top__DOT__ppu_mem_ena));
            tracep->chgSData(oldp+20,(vlTOPp->top__DOT__ppu_mem_ad),16);
            tracep->chgBit(oldp+21,(vlTOPp->top__DOT__ppu_mem_r_ena));
            tracep->chgBit(oldp+22,(vlTOPp->top__DOT__ppu_mem_w_ena));
            tracep->chgCData(oldp+23,(vlTOPp->top__DOT__ppu_mem_w_data),8);
            tracep->chgBit(oldp+24,(vlTOPp->top__DOT__dma_mem_ena));
            tracep->chgSData(oldp+25,(vlTOPp->top__DOT__dma_mem_ad),16);
            tracep->chgBit(oldp+26,(vlTOPp->top__DOT__dma_mem_r_ena));
            tracep->chgBit(oldp+27,(vlTOPp->top__DOT__dma_mem_w_ena));
            tracep->chgCData(oldp+28,(vlTOPp->top__DOT__dma_mem_w_data),8);
            tracep->chgCData(oldp+29,(vlTOPp->top__DOT__io_reg_r_data),8);
            tracep->chgBit(oldp+30,(vlTOPp->top__DOT__u_io_register__DOT__DMA_start));
            tracep->chgCData(oldp+31,(vlTOPp->top__DOT__irq_clear),8);
            tracep->chgBit(oldp+32,(vlTOPp->top__DOT__irq_LCD));
            tracep->chgBit(oldp+33,(vlTOPp->top__DOT__irq_vblank));
            tracep->chgBit(oldp+34,(vlTOPp->top__DOT__PPU_STAT_w_ena));
            tracep->chgCData(oldp+35,(vlTOPp->top__DOT__PPU_STAT_w_data),8);
            tracep->chgBit(oldp+36,(vlTOPp->top__DOT__PPU_LY_w_ena));
            tracep->chgCData(oldp+37,(vlTOPp->top__DOT__PPU_LY_w_data),8);
            tracep->chgBit(oldp+38,(vlTOPp->top__DOT__u_CPU__DOT__halt));
            tracep->chgCData(oldp+39,(vlTOPp->top__DOT__u_CPU__DOT__A),8);
            tracep->chgCData(oldp+40,(vlTOPp->top__DOT__u_CPU__DOT__F),8);
            tracep->chgCData(oldp+41,(vlTOPp->top__DOT__u_CPU__DOT__B),8);
            tracep->chgCData(oldp+42,(vlTOPp->top__DOT__u_CPU__DOT__C),8);
            tracep->chgCData(oldp+43,(vlTOPp->top__DOT__u_CPU__DOT__D),8);
            tracep->chgCData(oldp+44,(vlTOPp->top__DOT__u_CPU__DOT__E),8);
            tracep->chgCData(oldp+45,(vlTOPp->top__DOT__u_CPU__DOT__H),8);
            tracep->chgCData(oldp+46,(vlTOPp->top__DOT__u_CPU__DOT__L),8);
            tracep->chgSData(oldp+47,(vlTOPp->top__DOT__u_CPU__DOT__PC),16);
            tracep->chgSData(oldp+48,(vlTOPp->top__DOT__u_CPU__DOT__SP),16);
            tracep->chgCData(oldp+49,(vlTOPp->top__DOT__u_CPU__DOT__main_state),8);
            tracep->chgBit(oldp+50,(vlTOPp->top__DOT__u_CPU__DOT__IME));
            tracep->chgBit(oldp+51,(vlTOPp->top__DOT__u_CPU__DOT__IME_on));
            tracep->chgBit(oldp+52,(vlTOPp->top__DOT__u_CPU__DOT__IME_off));
            tracep->chgBit(oldp+53,(vlTOPp->top__DOT__u_CPU__DOT__EI_pending));
            tracep->chgBit(oldp+54,(vlTOPp->top__DOT__u_CPU__DOT__EI_pending_on));
            tracep->chgCData(oldp+55,(vlTOPp->top__DOT__u_CPU__DOT__IF_reg),8);
            tracep->chgCData(oldp+56,(vlTOPp->top__DOT__u_CPU__DOT__Operand_r8_ad),8);
            tracep->chgCData(oldp+57,(vlTOPp->top__DOT__u_CPU__DOT__Dest_r8),8);
            tracep->chgBit(oldp+58,(vlTOPp->top__DOT__u_CPU__DOT__Condition));
            tracep->chgCData(oldp+59,(vlTOPp->top__DOT__u_CPU__DOT__Operand_r16_ad),8);
            tracep->chgSData(oldp+60,(vlTOPp->top__DOT__u_CPU__DOT__Dest_r16mem),16);
            tracep->chgSData(oldp+61,(vlTOPp->top__DOT__u_CPU__DOT__Source_r16mem),16);
            tracep->chgCData(oldp+62,(vlTOPp->top__DOT__u_CPU__DOT__register_r16stk_ad),8);
            tracep->chgCData(oldp+63,(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter),8);
            tracep->chgCData(oldp+64,(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next),8);
            tracep->chgCData(oldp+65,(vlTOPp->top__DOT__u_CPU__DOT__opcode),8);
            tracep->chgBit(oldp+66,(vlTOPp->top__DOT__u_CPU__DOT__opcode_valid));
            tracep->chgBit(oldp+67,(vlTOPp->top__DOT__u_CPU__DOT__prefix_valid));
            tracep->chgCData(oldp+68,(vlTOPp->top__DOT__u_CPU__DOT__my_clk_counter),4);
            tracep->chgBit(oldp+69,((3U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__my_clk_counter))));
            tracep->chgCData(oldp+70,(vlTOPp->top__DOT__u_CPU__DOT__mem_state),4);
            tracep->chgCData(oldp+71,(vlTOPp->top__DOT__u_CPU__DOT__next_main_state),8);
            tracep->chgBit(oldp+72,(vlTOPp->top__DOT__u_CPU__DOT__reg_w_ena));
            tracep->chgCData(oldp+73,(vlTOPp->top__DOT__u_CPU__DOT__reg_ad),8);
            tracep->chgCData(oldp+74,(vlTOPp->top__DOT__u_CPU__DOT__reg_ad_2),8);
            tracep->chgBit(oldp+75,(vlTOPp->top__DOT__u_CPU__DOT__PC_plus_ena));
            tracep->chgSData(oldp+76,(vlTOPp->top__DOT__u_CPU__DOT__mem_ad_reg),16);
            tracep->chgCData(oldp+77,(vlTOPp->top__DOT__u_CPU__DOT__mem_w_data_reg),8);
            tracep->chgBit(oldp+78,(vlTOPp->top__DOT__u_CPU__DOT__mem_w_ena_reg));
            tracep->chgBit(oldp+79,(vlTOPp->top__DOT__u_CPU__DOT__mem_r_ena_reg));
            tracep->chgCData(oldp+80,(vlTOPp->top__DOT__u_CPU__DOT__mem_out_reg),8);
            tracep->chgBit(oldp+81,(vlTOPp->top__DOT__u_CPU__DOT__mem_control_r_ena));
            tracep->chgBit(oldp+82,(vlTOPp->top__DOT__u_CPU__DOT__mem_control_w_ena));
            tracep->chgSData(oldp+83,(vlTOPp->top__DOT__u_CPU__DOT__mem_control_ad),16);
            tracep->chgCData(oldp+84,(vlTOPp->top__DOT__u_CPU__DOT__tem_reg),8);
            tracep->chgBit(oldp+85,(vlTOPp->top__DOT__u_CPU__DOT__tem_reg_w_ena));
            tracep->chgCData(oldp+86,(vlTOPp->top__DOT__u_CPU__DOT__imm8_reg),8);
            tracep->chgBit(oldp+87,(vlTOPp->top__DOT__u_CPU__DOT__imm8_reg_clear));
            tracep->chgSData(oldp+88,(vlTOPp->top__DOT__u_CPU__DOT__imm16_reg),16);
            tracep->chgBit(oldp+89,(vlTOPp->top__DOT__u_CPU__DOT__imm16_reg_clear));
            tracep->chgCData(oldp+90,(vlTOPp->top__DOT__u_CPU__DOT__a_8),8);
            tracep->chgCData(oldp+91,(vlTOPp->top__DOT__u_CPU__DOT__alu_op_8),5);
            tracep->chgBit(oldp+92,(vlTOPp->top__DOT__u_CPU__DOT__cin_8));
            tracep->chgCData(oldp+93,((0xf8U | (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_TAC__DOT__TAC_reg))),8);
            tracep->chgCData(oldp+94,(vlTOPp->top__DOT__u_io_register__DOT__inst_TMA__DOT__TMA_reg),8);
            tracep->chgBit(oldp+95,(vlTOPp->top__DOT__u_io_register__DOT__irq_timer_wire));
            tracep->chgCData(oldp+96,(vlTOPp->top__DOT__u_io_register__DOT__div_r_data),8);
            tracep->chgCData(oldp+97,(vlTOPp->top__DOT__u_io_register__DOT__tima_r_data),8);
            tracep->chgCData(oldp+98,(vlTOPp->top__DOT__u_io_register__DOT__tma_r_data),8);
            tracep->chgCData(oldp+99,(vlTOPp->top__DOT__u_io_register__DOT__tac_r_data),8);
            tracep->chgCData(oldp+100,(vlTOPp->top__DOT__u_io_register__DOT__dma_r_data),8);
            tracep->chgCData(oldp+101,(vlTOPp->top__DOT__u_io_register__DOT__ppu_io_r_data),8);
            tracep->chgCData(oldp+102,(vlTOPp->top__DOT__u_io_register__DOT__stat_r_data),8);
            tracep->chgCData(oldp+103,(vlTOPp->top__DOT__u_io_register__DOT__ly_r_data),8);
            tracep->chgCData(oldp+104,(vlTOPp->top__DOT__u_io_register__DOT__r_state),4);
            tracep->chgCData(oldp+105,(vlTOPp->top__DOT__u_io_register__DOT__JOY),8);
            tracep->chgBit(oldp+106,(vlTOPp->top__DOT__u_io_register__DOT__irq_joypad));
            tracep->chgCData(oldp+107,(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg),8);
            tracep->chgCData(oldp+108,(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg),8);
            tracep->chgCData(oldp+109,(vlTOPp->top__DOT__u_io_register__DOT__inst_DIV__DOT__my_clk_counter),5);
            tracep->chgSData(oldp+110,(vlTOPp->top__DOT__u_io_register__DOT__inst_DIV__DOT__T_clk_counter),16);
            tracep->chgCData(oldp+111,(vlTOPp->top__DOT__u_io_register__DOT__inst_TIMA__DOT__TIMA),8);
            tracep->chgCData(oldp+112,(vlTOPp->top__DOT__u_io_register__DOT__inst_TIMA__DOT__my_clk_counter),4);
            tracep->chgSData(oldp+113,(vlTOPp->top__DOT__u_io_register__DOT__inst_TIMA__DOT__T_clk_counter),16);
            tracep->chgBit(oldp+114,(vlTOPp->top__DOT__u_io_register__DOT__inst_TIMA__DOT__T_cycle_ena));
            tracep->chgBit(oldp+115,(vlTOPp->top__DOT__u_io_register__DOT__inst_TIMA__DOT__M_cycle_ena));
            tracep->chgSData(oldp+116,(vlTOPp->top__DOT__u_io_register__DOT__inst_TIMA__DOT__M_4_counter),16);
            tracep->chgSData(oldp+117,(vlTOPp->top__DOT__u_io_register__DOT__inst_TIMA__DOT__M_16_counter),16);
            tracep->chgSData(oldp+118,(vlTOPp->top__DOT__u_io_register__DOT__inst_TIMA__DOT__M_64_counter),16);
            tracep->chgSData(oldp+119,(vlTOPp->top__DOT__u_io_register__DOT__inst_TIMA__DOT__M_256_counter),16);
            tracep->chgBit(oldp+120,(vlTOPp->top__DOT__u_io_register__DOT__inst_TIMA__DOT__TIMA_M_4_ena));
            tracep->chgBit(oldp+121,(vlTOPp->top__DOT__u_io_register__DOT__inst_TIMA__DOT__TIMA_M_16_ena));
            tracep->chgBit(oldp+122,(vlTOPp->top__DOT__u_io_register__DOT__inst_TIMA__DOT__TIMA_M_64_ena));
            tracep->chgBit(oldp+123,(vlTOPp->top__DOT__u_io_register__DOT__inst_TIMA__DOT__TIMA_M_256_ena));
            tracep->chgBit(oldp+124,(vlTOPp->top__DOT__u_io_register__DOT__inst_TIMA__DOT__TIMA_ena));
            tracep->chgBit(oldp+125,(vlTOPp->top__DOT__u_io_register__DOT__inst_TIMA__DOT__TIMA_overflow));
            tracep->chgCData(oldp+126,(vlTOPp->top__DOT__u_io_register__DOT__inst_TAC__DOT__TAC_reg),8);
            tracep->chgCData(oldp+127,(vlTOPp->top__DOT__u_PPU__DOT__clk_counter),4);
            tracep->chgBit(oldp+128,((3U == (IData)(vlTOPp->top__DOT__u_PPU__DOT__clk_counter))));
            tracep->chgIData(oldp+129,(vlTOPp->top__DOT__u_PPU__DOT__m_clk_counter),32);
            tracep->chgCData(oldp+130,(vlTOPp->top__DOT__u_PPU__DOT__main_state),5);
            tracep->chgCData(oldp+131,(vlTOPp->top__DOT__u_PPU__DOT__line_counter),8);
            tracep->chgBit(oldp+132,(vlTOPp->top__DOT__u_PPU__DOT__mode0_enter));
            tracep->chgBit(oldp+133,(vlTOPp->top__DOT__u_PPU__DOT__mode1_enter));
            tracep->chgBit(oldp+134,(vlTOPp->top__DOT__u_PPU__DOT__mode2_enter));
            tracep->chgBit(oldp+135,(vlTOPp->top__DOT__u_PPU__DOT__mode3_enter));
            tracep->chgQData(oldp+136,(vlTOPp->top__DOT__u_PPU__DOT__oam_scan),40);
            tracep->chgWData(oldp+138,(vlTOPp->top__DOT__u_PPU__DOT__obj_ad),160);
            tracep->chgWData(oldp+143,(vlTOPp->top__DOT__u_PPU__DOT__obj_y),80);
            tracep->chgWData(oldp+146,(vlTOPp->top__DOT__u_PPU__DOT__obj_x),80);
            tracep->chgWData(oldp+149,(vlTOPp->top__DOT__u_PPU__DOT__obj_tile_index),80);
            tracep->chgWData(oldp+152,(vlTOPp->top__DOT__u_PPU__DOT__obj_flag),80);
            tracep->chgCData(oldp+155,(vlTOPp->top__DOT__u_PPU__DOT__array_index),4);
            tracep->chgCData(oldp+156,(vlTOPp->top__DOT__u_PPU__DOT__valid_obj_counter),4);
            tracep->chgWData(oldp+157,(vlTOPp->top__DOT__u_PPU__DOT__obj_scanline),512);
            tracep->chgWData(oldp+173,(vlTOPp->top__DOT__u_PPU__DOT__obj_priority),256);
            tracep->chgWData(oldp+181,(vlTOPp->top__DOT__u_PPU__DOT__obj_palette),256);
            tracep->chgWData(oldp+189,(vlTOPp->top__DOT__u_PPU__DOT__obj_x_buffer),2048);
            tracep->chgSData(oldp+253,(vlTOPp->top__DOT__u_PPU__DOT__sub_state),16);
            tracep->chgSData(oldp+254,(vlTOPp->top__DOT__u_PPU__DOT__sub_counter_1),16);
            tracep->chgSData(oldp+255,(vlTOPp->top__DOT__u_PPU__DOT__sub_counter_2),16);
            tracep->chgSData(oldp+256,(vlTOPp->top__DOT__u_PPU__DOT__sub_counter_3),16);
            tracep->chgCData(oldp+257,(vlTOPp->top__DOT__u_PPU__DOT__mode3_state),4);
            tracep->chgCData(oldp+258,(vlTOPp->top__DOT__u_PPU__DOT__mode3_counter_1),8);
            tracep->chgCData(oldp+259,(vlTOPp->top__DOT__u_PPU__DOT__map_x),8);
            tracep->chgCData(oldp+260,(vlTOPp->top__DOT__u_PPU__DOT__map_y),8);
            tracep->chgCData(oldp+261,(vlTOPp->top__DOT__u_PPU__DOT__win_x),8);
            tracep->chgCData(oldp+262,(vlTOPp->top__DOT__u_PPU__DOT__win_y),8);
            tracep->chgWData(oldp+263,(vlTOPp->top__DOT__u_PPU__DOT__tile_buffer),512);
            tracep->chgCData(oldp+279,(vlTOPp->top__DOT__u_PPU__DOT__tile_buffer_index),8);
            tracep->chgIData(oldp+280,(vlTOPp->top__DOT__u_PPU__DOT__i),32);
            tracep->chgCData(oldp+281,(vlTOPp->top__DOT__u_PPU__DOT__obj_row),8);
            tracep->chgBit(oldp+282,(((((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_PPU_IO__DOT__WX_reg) 
                                        <= ((IData)(7U) 
                                            + (IData)(vlTOPp->top__DOT__u_PPU__DOT__sub_counter_2))) 
                                       & ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_PPU_IO__DOT__WY_reg) 
                                          <= (IData)(vlTOPp->top__DOT__u_PPU__DOT__line_counter))) 
                                      & ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_PPU_IO__DOT__LCDC_reg) 
                                         >> 5U))));
            tracep->chgCData(oldp+283,((7U & (((((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_PPU_IO__DOT__WX_reg) 
                                                 <= 
                                                 ((IData)(7U) 
                                                  + (IData)(vlTOPp->top__DOT__u_PPU__DOT__sub_counter_2))) 
                                                & ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_PPU_IO__DOT__WY_reg) 
                                                   <= (IData)(vlTOPp->top__DOT__u_PPU__DOT__line_counter))) 
                                               & ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_PPU_IO__DOT__LCDC_reg) 
                                                  >> 5U))
                                               ? (IData)(vlTOPp->top__DOT__u_PPU__DOT__win_x)
                                               : (IData)(vlTOPp->top__DOT__u_PPU__DOT__map_x)))),3);
            tracep->chgCData(oldp+284,(vlTOPp->top__DOT__u_OAM_DMA__DOT__state),4);
            tracep->chgCData(oldp+285,(vlTOPp->top__DOT__u_OAM_DMA__DOT__clk_counter),8);
            tracep->chgSData(oldp+286,(vlTOPp->top__DOT__u_OAM_DMA__DOT__real_clk_counter),16);
            tracep->chgCData(oldp+287,(vlTOPp->top__DOT__u_OAM_DMA__DOT__tem_reg),8);
            tracep->chgSData(oldp+288,(vlTOPp->top__DOT__u_OAM_DMA__DOT__r_ad_reg),16);
            tracep->chgSData(oldp+289,(vlTOPp->top__DOT__u_OAM_DMA__DOT__w_ad_reg),16);
            tracep->chgBit(oldp+290,(vlTOPp->top__DOT__u_OAM_DMA__DOT__w_end));
            tracep->chgBit(oldp+291,(vlTOPp->top__DOT__u_OAM_DMA__DOT__r_end));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[2U])) {
            tracep->chgCData(oldp+292,(vlTOPp->top__DOT__u_Memory_Interface__DOT__cpu_state),4);
            tracep->chgCData(oldp+293,(vlTOPp->top__DOT__u_Memory_Interface__DOT__ppu_state),4);
            tracep->chgCData(oldp+294,(vlTOPp->top__DOT__u_Memory_Interface__DOT__dma_state),4);
            tracep->chgCData(oldp+295,(vlTOPp->top__DOT__u_Memory_Interface__DOT__MBC1_0000_1FFF),8);
            tracep->chgCData(oldp+296,(vlTOPp->top__DOT__u_Memory_Interface__DOT__MBC1_2000_3FFF),5);
            tracep->chgCData(oldp+297,(vlTOPp->top__DOT__u_Memory_Interface__DOT__MBC1_4000_5FFF),2);
            tracep->chgBit(oldp+298,(vlTOPp->top__DOT__u_Memory_Interface__DOT__MBC1_6000_7FFF));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[3U])) {
            tracep->chgCData(oldp+299,(vlTOPp->top__DOT__cpu_mem_r_data),8);
            tracep->chgCData(oldp+300,(vlTOPp->top__DOT__ppu_mem_r_data),8);
            tracep->chgCData(oldp+301,(vlTOPp->top__DOT__dma_mem_r_data),8);
            tracep->chgBit(oldp+302,(vlTOPp->top__DOT__io_reg_ena));
            tracep->chgSData(oldp+303,(vlTOPp->top__DOT__io_reg_ad),16);
            tracep->chgBit(oldp+304,(vlTOPp->top__DOT__io_reg_r_ena));
            tracep->chgBit(oldp+305,(vlTOPp->top__DOT__io_reg_w_ena));
            tracep->chgCData(oldp+306,(vlTOPp->top__DOT__io_reg_w_data),8);
            tracep->chgCData(oldp+307,(vlTOPp->top__DOT__u_CPU__DOT__Operand_r8),8);
            tracep->chgCData(oldp+308,(vlTOPp->top__DOT__u_CPU__DOT__Source_r8),8);
            tracep->chgSData(oldp+309,(vlTOPp->top__DOT__u_CPU__DOT__Operand_r16),16);
            tracep->chgSData(oldp+310,(vlTOPp->top__DOT__u_CPU__DOT__register_r16stk),16);
            tracep->chgSData(oldp+311,(vlTOPp->top__DOT__u_CPU__DOT__reg_w_data),16);
            tracep->chgSData(oldp+312,(vlTOPp->top__DOT__u_CPU__DOT__reg_w_data_2),16);
            tracep->chgCData(oldp+313,(vlTOPp->top__DOT__u_CPU__DOT__mem_control_w_data),8);
            tracep->chgCData(oldp+314,(vlTOPp->top__DOT__u_CPU__DOT__tem_reg_w_data),8);
            tracep->chgCData(oldp+315,(vlTOPp->top__DOT__u_CPU__DOT__b_8),8);
            tracep->chgCData(oldp+316,(vlTOPp->top__DOT__u_CPU__DOT__flag_8),4);
            tracep->chgCData(oldp+317,(vlTOPp->top__DOT__u_CPU__DOT__alu_result_8),8);
            tracep->chgSData(oldp+318,(vlTOPp->top__DOT__u_CPU__DOT__ins00__DOT__tem9),9);
            tracep->chgCData(oldp+319,(vlTOPp->top__DOT__u_CPU__DOT__ins00__DOT__tem5),5);
            tracep->chgBit(oldp+320,(vlTOPp->top__DOT__u_io_register__DOT__IF_w_ena));
            tracep->chgBit(oldp+321,(vlTOPp->top__DOT__u_io_register__DOT__IE_w_ena));
            tracep->chgBit(oldp+322,(vlTOPp->top__DOT__u_io_register__DOT__div_w_ena));
            tracep->chgBit(oldp+323,(vlTOPp->top__DOT__u_io_register__DOT__div_r_ena));
            tracep->chgBit(oldp+324,(vlTOPp->top__DOT__u_io_register__DOT__tima_w_ena));
            tracep->chgBit(oldp+325,(vlTOPp->top__DOT__u_io_register__DOT__tima_r_ena));
            tracep->chgBit(oldp+326,(vlTOPp->top__DOT__u_io_register__DOT__tma_r_ena));
            tracep->chgBit(oldp+327,(vlTOPp->top__DOT__u_io_register__DOT__tma_w_ena));
            tracep->chgBit(oldp+328,(vlTOPp->top__DOT__u_io_register__DOT__tac_r_ena));
            tracep->chgBit(oldp+329,(vlTOPp->top__DOT__u_io_register__DOT__tac_w_ena));
            tracep->chgBit(oldp+330,(vlTOPp->top__DOT__u_io_register__DOT__dma_r_ena));
            tracep->chgBit(oldp+331,(vlTOPp->top__DOT__u_io_register__DOT__dma_w_ena));
            tracep->chgBit(oldp+332,(vlTOPp->top__DOT__u_io_register__DOT__ppu_io_r_ena));
            tracep->chgBit(oldp+333,(vlTOPp->top__DOT__u_io_register__DOT__ppu_io_w_ena));
            tracep->chgBit(oldp+334,(vlTOPp->top__DOT__u_io_register__DOT__stat_r_ena));
            tracep->chgBit(oldp+335,(vlTOPp->top__DOT__u_io_register__DOT__stat_w_ena));
            tracep->chgBit(oldp+336,(vlTOPp->top__DOT__u_io_register__DOT__ly_r_ena));
            tracep->chgBit(oldp+337,(vlTOPp->top__DOT__u_io_register__DOT__ly_w_ena));
            tracep->chgBit(oldp+338,(vlTOPp->top__DOT__u_io_register__DOT__joy_r_ena));
            tracep->chgBit(oldp+339,(vlTOPp->top__DOT__u_io_register__DOT__joy_w_ena));
            tracep->chgCData(oldp+340,(vlTOPp->top__DOT__u_io_register__DOT__next),4);
            tracep->chgCData(oldp+341,(vlTOPp->top__DOT__u_PPU__DOT__shifted_data),8);
            tracep->chgCData(oldp+342,(vlTOPp->top__DOT__u_Memory_Interface__DOT__bank_mask),7);
            tracep->chgCData(oldp+343,(vlTOPp->top__DOT__u_Memory_Interface__DOT__ram_mask),2);
            tracep->chgBit(oldp+344,(vlTOPp->top__DOT__u_Memory_Interface__DOT__dma_main_req));
            tracep->chgBit(oldp+345,(vlTOPp->top__DOT__u_Memory_Interface__DOT__dma_oam_req));
            tracep->chgBit(oldp+346,(vlTOPp->top__DOT__u_Memory_Interface__DOT__ppu_vram_req));
            tracep->chgBit(oldp+347,(vlTOPp->top__DOT__u_Memory_Interface__DOT__ppu_oam_req));
            tracep->chgBit(oldp+348,(vlTOPp->top__DOT__u_Memory_Interface__DOT__cpu_main_req));
            tracep->chgBit(oldp+349,(vlTOPp->top__DOT__u_Memory_Interface__DOT__cpu_hram_req));
            tracep->chgBit(oldp+350,(vlTOPp->top__DOT__u_Memory_Interface__DOT__cpu_vram_req));
            tracep->chgBit(oldp+351,(vlTOPp->top__DOT__u_Memory_Interface__DOT__cpu_oam_req));
            tracep->chgCData(oldp+352,(vlTOPp->top__DOT__u_Memory_Interface__DOT__cpu_next),4);
            tracep->chgCData(oldp+353,(vlTOPp->top__DOT__u_Memory_Interface__DOT__ppu_next),4);
            tracep->chgCData(oldp+354,(vlTOPp->top__DOT__u_Memory_Interface__DOT__dma_next),4);
            tracep->chgBit(oldp+355,(vlTOPp->top__DOT__u_Memory_Interface__DOT__MBC1_0000_w_ena));
            tracep->chgBit(oldp+356,(vlTOPp->top__DOT__u_Memory_Interface__DOT__MBC1_2000_w_ena));
            tracep->chgBit(oldp+357,(vlTOPp->top__DOT__u_Memory_Interface__DOT__MBC1_4000_w_ena));
            tracep->chgBit(oldp+358,(vlTOPp->top__DOT__u_Memory_Interface__DOT__MBC1_6000_w_ena));
            tracep->chgCData(oldp+359,(vlTOPp->top__DOT__u_Memory_Interface__DOT__MBC1_0000_w_data),8);
            tracep->chgCData(oldp+360,(vlTOPp->top__DOT__u_Memory_Interface__DOT__MBC1_2000_w_data),5);
            tracep->chgCData(oldp+361,(vlTOPp->top__DOT__u_Memory_Interface__DOT__MBC1_4000_w_data),2);
            tracep->chgBit(oldp+362,(vlTOPp->top__DOT__u_Memory_Interface__DOT__MBC1_6000_w_data));
        }
        tracep->chgBit(oldp+363,(vlTOPp->clk));
        tracep->chgBit(oldp+364,(vlTOPp->reset));
        tracep->chgBit(oldp+365,(vlTOPp->joypad_start));
        tracep->chgBit(oldp+366,(vlTOPp->joypad_select));
        tracep->chgBit(oldp+367,(vlTOPp->joypad_A));
        tracep->chgBit(oldp+368,(vlTOPp->joypad_B));
        tracep->chgBit(oldp+369,(vlTOPp->joypad_down));
        tracep->chgBit(oldp+370,(vlTOPp->joypad_up));
        tracep->chgBit(oldp+371,(vlTOPp->joypad_left));
        tracep->chgBit(oldp+372,(vlTOPp->joypad_right));
        tracep->chgBit(oldp+373,(vlTOPp->ROM_ena));
        tracep->chgIData(oldp+374,(vlTOPp->ROM_ad),21);
        tracep->chgBit(oldp+375,(vlTOPp->ROM_r_ena));
        tracep->chgBit(oldp+376,(vlTOPp->ROM_w_ena));
        tracep->chgCData(oldp+377,(vlTOPp->ROM_w_data),8);
        tracep->chgCData(oldp+378,(vlTOPp->ROM_r_data),8);
        tracep->chgBit(oldp+379,(vlTOPp->VRAM_ena));
        tracep->chgSData(oldp+380,(vlTOPp->VRAM_ad),16);
        tracep->chgBit(oldp+381,(vlTOPp->VRAM_r_ena));
        tracep->chgBit(oldp+382,(vlTOPp->VRAM_w_ena));
        tracep->chgCData(oldp+383,(vlTOPp->VRAM_w_data),8);
        tracep->chgCData(oldp+384,(vlTOPp->VRAM_r_data),8);
        tracep->chgBit(oldp+385,(vlTOPp->WRAM_ena));
        tracep->chgSData(oldp+386,(vlTOPp->WRAM_ad),16);
        tracep->chgBit(oldp+387,(vlTOPp->WRAM_r_ena));
        tracep->chgBit(oldp+388,(vlTOPp->WRAM_w_ena));
        tracep->chgCData(oldp+389,(vlTOPp->WRAM_w_data),8);
        tracep->chgCData(oldp+390,(vlTOPp->WRAM_r_data),8);
        tracep->chgBit(oldp+391,(vlTOPp->ERAM_ena));
        tracep->chgSData(oldp+392,(vlTOPp->ERAM_ad),15);
        tracep->chgBit(oldp+393,(vlTOPp->ERAM_r_ena));
        tracep->chgBit(oldp+394,(vlTOPp->ERAM_w_ena));
        tracep->chgCData(oldp+395,(vlTOPp->ERAM_w_data),8);
        tracep->chgCData(oldp+396,(vlTOPp->ERAM_r_data),8);
        tracep->chgBit(oldp+397,(vlTOPp->OAM_ena));
        tracep->chgSData(oldp+398,(vlTOPp->OAM_ad),16);
        tracep->chgBit(oldp+399,(vlTOPp->OAM_r_ena));
        tracep->chgBit(oldp+400,(vlTOPp->OAM_w_ena));
        tracep->chgCData(oldp+401,(vlTOPp->OAM_w_data),8);
        tracep->chgCData(oldp+402,(vlTOPp->OAM_r_data),8);
        tracep->chgBit(oldp+403,(vlTOPp->HRAM_ena));
        tracep->chgSData(oldp+404,(vlTOPp->HRAM_ad),16);
        tracep->chgBit(oldp+405,(vlTOPp->HRAM_r_ena));
        tracep->chgBit(oldp+406,(vlTOPp->HRAM_w_ena));
        tracep->chgCData(oldp+407,(vlTOPp->HRAM_w_data),8);
        tracep->chgCData(oldp+408,(vlTOPp->HRAM_r_data),8);
        tracep->chgCData(oldp+409,(vlTOPp->pixel_data),2);
        tracep->chgBit(oldp+410,(vlTOPp->pixel_valid));
        tracep->chgBit(oldp+411,(vlTOPp->hsync));
        tracep->chgBit(oldp+412,(vlTOPp->vsync));
        tracep->chgCData(oldp+413,(vlTOPp->MBC_version),4);
        tracep->chgCData(oldp+414,(vlTOPp->ROM_size),8);
        tracep->chgCData(oldp+415,(vlTOPp->RAM_size),8);
    }
}

void Vcpu::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vcpu__Syms* __restrict vlSymsp = static_cast<Vcpu__Syms*>(userp);
    Vcpu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
        vlTOPp->__Vm_traceActivity[2U] = 0U;
        vlTOPp->__Vm_traceActivity[3U] = 0U;
    }
}
