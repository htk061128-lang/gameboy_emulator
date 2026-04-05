// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop.h"
#include "Vtop__Syms.h"

void Vtop::_settle__TOP__6(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_settle__TOP__6\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->IF_out = (0xe0U | (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg));
    vlTOPp->IE_out = (0xe0U | (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg));
    vlTOPp->LCDC_out = vlTOPp->top__DOT__u_io_register__DOT__inst_PPU_IO__DOT__LCDC_reg;
    vlTOPp->LY_out = vlTOPp->top__DOT__u_io_register__DOT__inst_LY__DOT__LY_reg;
    vlTOPp->top__DOT__u_PPU__DOT__map_y = (0xffU & 
                                           ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_PPU_IO__DOT__SCY_reg) 
                                            + (IData)(vlTOPp->top__DOT__u_PPU__DOT__line_counter)));
    vlTOPp->top__DOT__u_PPU__DOT__win_y = (0xffU & 
                                           ((IData)(vlTOPp->top__DOT__u_PPU__DOT__line_counter) 
                                            - (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_PPU_IO__DOT__WY_reg)));
    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = vlTOPp->top__DOT__u_CPU__DOT__main_state;
    vlTOPp->top__DOT__u_CPU__DOT__PC_plus_ena = 0U;
    vlTOPp->top__DOT__u_CPU__DOT__imm16_reg_clear = 0U;
    vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0U;
    vlTOPp->top__DOT__u_CPU__DOT__Condition = 0U;
    if ((0U == (3U & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                      >> 3U)))) {
        vlTOPp->top__DOT__u_CPU__DOT__Condition = (
                                                   (0x80U 
                                                    & (IData)(vlTOPp->top__DOT__u_CPU__DOT__F))
                                                    ? 0U
                                                    : 1U);
    } else {
        if ((1U == (3U & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                          >> 3U)))) {
            vlTOPp->top__DOT__u_CPU__DOT__Condition 
                = ((0x80U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__F))
                    ? 1U : 0U);
        } else {
            if ((2U == (3U & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                              >> 3U)))) {
                vlTOPp->top__DOT__u_CPU__DOT__Condition 
                    = ((0x10U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__F))
                        ? 0U : 1U);
            } else {
                if ((3U == (3U & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                                  >> 3U)))) {
                    vlTOPp->top__DOT__u_CPU__DOT__Condition 
                        = ((0x10U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__F))
                            ? 1U : 0U);
                }
            }
        }
    }
    if (vlTOPp->top__DOT__u_CPU__DOT__opcode_valid) {
        if ((0x80U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                if ((0xcbU == (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0xcU;
                    vlTOPp->top__DOT__u_CPU__DOT__PC_plus_ena = 1U;
                    vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0U;
                } else {
                    if (((~ ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                             >> 5U)) & (0U == (7U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))))) {
                        if (((((((((0U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter)) 
                                   | (1U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                  | (2U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                 | (3U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                | (4U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                               | (5U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                              | (6U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                             | (7U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter)))) {
                            if ((0U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                            } else {
                                if ((1U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                    vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 2U;
                                } else {
                                    if ((2U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 3U;
                                    } else {
                                        if ((3U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 4U;
                                        } else {
                                            if ((4U 
                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                if (vlTOPp->top__DOT__u_CPU__DOT__Condition) {
                                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                    vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 5U;
                                                } else {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlTOPp->top__DOT__u_CPU__DOT__Condition)))) {
                                                        vlTOPp->top__DOT__u_CPU__DOT__PC_plus_ena = 1U;
                                                        if (
                                                            ((0U 
                                                              != 
                                                              (0xe0U 
                                                               | ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg) 
                                                                  & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg)))) 
                                                             & (IData)(vlTOPp->top__DOT__u_CPU__DOT__IME))) {
                                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x11U;
                                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                                        } else {
                                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0U;
                                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0U;
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (
                                                    (5U 
                                                     == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                    vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 6U;
                                                } else {
                                                    if (
                                                        (6U 
                                                         == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 7U;
                                                    } else {
                                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 8U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            if (((((((((8U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter)) 
                                       | (9U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                      | (0xaU == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                     | (0xbU == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                    | (0xcU == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                   | (0xdU == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                  | (0xeU == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                 | (0xfU == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter)))) {
                                if ((8U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                    vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 9U;
                                } else {
                                    if ((9U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0xaU;
                                    } else {
                                        if ((0xaU == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0xbU;
                                        } else {
                                            if ((0xbU 
                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0xcU;
                                            } else {
                                                if (
                                                    (0xcU 
                                                     == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                    vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0xdU;
                                                } else {
                                                    if (
                                                        (0xdU 
                                                         == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0xeU;
                                                    } else {
                                                        if (
                                                            (0xeU 
                                                             == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0xfU;
                                                        } else {
                                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0x10U;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                if ((0x10U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                    if (((0U != (0xe0U 
                                                 | ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg) 
                                                    & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg)))) 
                                         & (IData)(vlTOPp->top__DOT__u_CPU__DOT__IME))) {
                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x11U;
                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                    } else {
                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0U;
                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0U;
                                    }
                                }
                            }
                        }
                    } else {
                        if (((~ ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                                 >> 5U)) & (2U == (7U 
                                                   & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))))) {
                            if ((0U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 8U;
                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                            } else {
                                if ((8U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                    if (vlTOPp->top__DOT__u_CPU__DOT__Condition) {
                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 9U;
                                    } else {
                                        if ((1U & (~ (IData)(vlTOPp->top__DOT__u_CPU__DOT__Condition)))) {
                                            vlTOPp->top__DOT__u_CPU__DOT__PC_plus_ena = 1U;
                                            vlTOPp->top__DOT__u_CPU__DOT__imm16_reg_clear = 1U;
                                            if (((0U 
                                                  != 
                                                  (0xe0U 
                                                   | ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg) 
                                                      & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg)))) 
                                                 & (IData)(vlTOPp->top__DOT__u_CPU__DOT__IME))) {
                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x11U;
                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                            } else {
                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0U;
                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0U;
                                            }
                                        }
                                    }
                                } else {
                                    if ((9U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0xaU;
                                    } else {
                                        if ((0xaU == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0xbU;
                                        } else {
                                            if ((0xbU 
                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0xcU;
                                            } else {
                                                if (
                                                    (0xcU 
                                                     == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                    vlTOPp->top__DOT__u_CPU__DOT__imm16_reg_clear = 1U;
                                                    if (
                                                        ((0U 
                                                          != 
                                                          (0xe0U 
                                                           | ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg) 
                                                              & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg)))) 
                                                         & (IData)(vlTOPp->top__DOT__u_CPU__DOT__IME))) {
                                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x11U;
                                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                                    } else {
                                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0U;
                                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            if (((~ ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                                     >> 5U)) & (4U 
                                                == 
                                                (7U 
                                                 & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))))) {
                                if (((((((((0U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter)) 
                                           | (8U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                          | (9U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                         | (0xaU == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                        | (0xbU == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                       | (0xcU == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                      | (0xdU == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                     | (0xeU == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter)))) {
                                    if ((0U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 8U;
                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                    } else {
                                        if ((8U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                            if (vlTOPp->top__DOT__u_CPU__DOT__Condition) {
                                                vlTOPp->top__DOT__u_CPU__DOT__PC_plus_ena = 1U;
                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 9U;
                                            } else {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlTOPp->top__DOT__u_CPU__DOT__Condition)))) {
                                                    vlTOPp->top__DOT__u_CPU__DOT__PC_plus_ena = 1U;
                                                    vlTOPp->top__DOT__u_CPU__DOT__imm16_reg_clear = 1U;
                                                    if (
                                                        ((0U 
                                                          != 
                                                          (0xe0U 
                                                           | ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg) 
                                                              & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg)))) 
                                                         & (IData)(vlTOPp->top__DOT__u_CPU__DOT__IME))) {
                                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x11U;
                                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                                    } else {
                                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0U;
                                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0U;
                                                    }
                                                }
                                            }
                                        } else {
                                            if ((9U 
                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0xaU;
                                            } else {
                                                if (
                                                    (0xaU 
                                                     == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                    vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0xbU;
                                                } else {
                                                    if (
                                                        (0xbU 
                                                         == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0xcU;
                                                    } else {
                                                        if (
                                                            (0xcU 
                                                             == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0xdU;
                                                        } else {
                                                            if (
                                                                (0xdU 
                                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0xeU;
                                                            } else {
                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0xfU;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if ((0xfU == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0x10U;
                                    } else {
                                        if ((0x10U 
                                             == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0x11U;
                                        } else {
                                            if ((0x11U 
                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0x12U;
                                            } else {
                                                if (
                                                    (0x12U 
                                                     == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                    vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0x13U;
                                                } else {
                                                    if (
                                                        (0x13U 
                                                         == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0x14U;
                                                    } else {
                                                        if (
                                                            (0x14U 
                                                             == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                            vlTOPp->top__DOT__u_CPU__DOT__imm16_reg_clear = 1U;
                                                            if (
                                                                ((0U 
                                                                  != 
                                                                  (0xe0U 
                                                                   | ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg) 
                                                                      & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg)))) 
                                                                 & (IData)(vlTOPp->top__DOT__u_CPU__DOT__IME))) {
                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x11U;
                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                                            } else {
                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0U;
                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                if ((7U == (7U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                                    if (((((((((0U 
                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter)) 
                                               | (1U 
                                                  == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                              | (2U 
                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                             | (3U 
                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                            | (4U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                           | (5U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                          | (6U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                         | (7U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter)))) {
                                        if ((0U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                            vlTOPp->top__DOT__u_CPU__DOT__PC_plus_ena = 1U;
                                        } else {
                                            if ((1U 
                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 2U;
                                            } else {
                                                if (
                                                    (2U 
                                                     == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                    vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 3U;
                                                } else {
                                                    if (
                                                        (3U 
                                                         == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 4U;
                                                    } else {
                                                        if (
                                                            (4U 
                                                             == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 5U;
                                                        } else {
                                                            if (
                                                                (5U 
                                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 6U;
                                                            } else {
                                                                if (
                                                                    (6U 
                                                                     == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                    vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 7U;
                                                                } else {
                                                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                    vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 8U;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        if ((8U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 9U;
                                        } else {
                                            if ((9U 
                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0xaU;
                                            } else {
                                                if (
                                                    (0xaU 
                                                     == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                    vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0xbU;
                                                } else {
                                                    if (
                                                        (0xbU 
                                                         == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0xcU;
                                                    } else {
                                                        if (
                                                            (0xcU 
                                                             == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                            if (
                                                                ((0U 
                                                                  != 
                                                                  (0xe0U 
                                                                   | ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg) 
                                                                      & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg)))) 
                                                                 & (IData)(vlTOPp->top__DOT__u_CPU__DOT__IME))) {
                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x11U;
                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                                            } else {
                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0U;
                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if ((1U == (0xfU 
                                                & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                                        if ((((((((
                                                   (0U 
                                                    == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter)) 
                                                   | (1U 
                                                      == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                                  | (2U 
                                                     == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                                 | (3U 
                                                    == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                                | (4U 
                                                   == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                               | (5U 
                                                  == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                              | (6U 
                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                             | (7U 
                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter)))) {
                                            if ((0U 
                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                            } else {
                                                if (
                                                    (1U 
                                                     == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                    vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 2U;
                                                } else {
                                                    if (
                                                        (2U 
                                                         == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 3U;
                                                    } else {
                                                        if (
                                                            (3U 
                                                             == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 4U;
                                                        } else {
                                                            if (
                                                                (4U 
                                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 5U;
                                                            } else {
                                                                if (
                                                                    (5U 
                                                                     == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                    vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 6U;
                                                                } else {
                                                                    if (
                                                                        (6U 
                                                                         == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 7U;
                                                                    } else {
                                                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 8U;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            if ((8U 
                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 9U;
                                            } else {
                                                if (
                                                    (9U 
                                                     == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                    vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0xaU;
                                                } else {
                                                    if (
                                                        (0xaU 
                                                         == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0xbU;
                                                    } else {
                                                        if (
                                                            (0xbU 
                                                             == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0xcU;
                                                        } else {
                                                            if (
                                                                (0xcU 
                                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                vlTOPp->top__DOT__u_CPU__DOT__PC_plus_ena = 1U;
                                                                if (
                                                                    ((0U 
                                                                      != 
                                                                      (0xe0U 
                                                                       | ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg) 
                                                                          & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg)))) 
                                                                     & (IData)(vlTOPp->top__DOT__u_CPU__DOT__IME))) {
                                                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x11U;
                                                                    vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                                                } else {
                                                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0U;
                                                                    vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0U;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        if ((5U == 
                                             (0xfU 
                                              & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                                            if ((((
                                                   (((((0U 
                                                        == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter)) 
                                                       | (1U 
                                                          == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                                      | (2U 
                                                         == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                                     | (3U 
                                                        == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                                    | (4U 
                                                       == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                                   | (5U 
                                                      == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                                  | (6U 
                                                     == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                                 | (7U 
                                                    == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter)))) {
                                                if (
                                                    (0U 
                                                     == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                    vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                                } else {
                                                    if (
                                                        (1U 
                                                         == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 2U;
                                                    } else {
                                                        if (
                                                            (2U 
                                                             == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 3U;
                                                        } else {
                                                            if (
                                                                (3U 
                                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 4U;
                                                            } else {
                                                                if (
                                                                    (4U 
                                                                     == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                    vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 5U;
                                                                } else {
                                                                    if (
                                                                        (5U 
                                                                         == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 6U;
                                                                    } else {
                                                                        if (
                                                                            (6U 
                                                                             == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 7U;
                                                                        } else {
                                                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 8U;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (
                                                    (8U 
                                                     == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                    vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 9U;
                                                } else {
                                                    if (
                                                        (9U 
                                                         == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0xaU;
                                                    } else {
                                                        if (
                                                            (0xaU 
                                                             == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0xbU;
                                                        } else {
                                                            if (
                                                                (0xbU 
                                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0xcU;
                                                            } else {
                                                                if (
                                                                    (0xcU 
                                                                     == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                    vlTOPp->top__DOT__u_CPU__DOT__PC_plus_ena = 1U;
                                                                    if (
                                                                        ((0U 
                                                                          != 
                                                                          (0xe0U 
                                                                           | ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg) 
                                                                              & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg)))) 
                                                                         & (IData)(vlTOPp->top__DOT__u_CPU__DOT__IME))) {
                                                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x11U;
                                                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                                                    } else {
                                                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0U;
                                                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0U;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            if ((((
                                                   (((((6U 
                                                        == 
                                                        (0x3fU 
                                                         & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) 
                                                       | (0xeU 
                                                          == 
                                                          (0x3fU 
                                                           & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) 
                                                      | (0x16U 
                                                         == 
                                                         (0x3fU 
                                                          & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) 
                                                     | (0x1eU 
                                                        == 
                                                        (0x3fU 
                                                         & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) 
                                                    | (0x26U 
                                                       == 
                                                       (0x3fU 
                                                        & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) 
                                                   | (0x2eU 
                                                      == 
                                                      (0x3fU 
                                                       & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) 
                                                  | (0x36U 
                                                     == 
                                                     (0x3fU 
                                                      & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) 
                                                 | (0x3eU 
                                                    == 
                                                    (0x3fU 
                                                     & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))))) {
                                                if (
                                                    (6U 
                                                     == 
                                                     (0x3fU 
                                                      & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                                                    if (
                                                        (0U 
                                                         == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 4U;
                                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                                    } else {
                                                        if (
                                                            (4U 
                                                             == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                            vlTOPp->top__DOT__u_CPU__DOT__PC_plus_ena = 1U;
                                                            if (
                                                                ((0U 
                                                                  != 
                                                                  (0xe0U 
                                                                   | ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg) 
                                                                      & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg)))) 
                                                                 & (IData)(vlTOPp->top__DOT__u_CPU__DOT__IME))) {
                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x11U;
                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                                            } else {
                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0U;
                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0U;
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if (
                                                        (0xeU 
                                                         == 
                                                         (0x3fU 
                                                          & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                                                        if (
                                                            (0U 
                                                             == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 4U;
                                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                                        } else {
                                                            if (
                                                                (4U 
                                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                vlTOPp->top__DOT__u_CPU__DOT__PC_plus_ena = 1U;
                                                                if (
                                                                    ((0U 
                                                                      != 
                                                                      (0xe0U 
                                                                       | ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg) 
                                                                          & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg)))) 
                                                                     & (IData)(vlTOPp->top__DOT__u_CPU__DOT__IME))) {
                                                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x11U;
                                                                    vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                                                } else {
                                                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0U;
                                                                    vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0U;
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        if (
                                                            (0x16U 
                                                             == 
                                                             (0x3fU 
                                                              & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                                                            if (
                                                                (0U 
                                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 4U;
                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                                            } else {
                                                                if (
                                                                    (4U 
                                                                     == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                    vlTOPp->top__DOT__u_CPU__DOT__PC_plus_ena = 1U;
                                                                    if (
                                                                        ((0U 
                                                                          != 
                                                                          (0xe0U 
                                                                           | ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg) 
                                                                              & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg)))) 
                                                                         & (IData)(vlTOPp->top__DOT__u_CPU__DOT__IME))) {
                                                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x11U;
                                                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                                                    } else {
                                                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0U;
                                                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0U;
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            if (
                                                                (0x1eU 
                                                                 == 
                                                                 (0x3fU 
                                                                  & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                                                                if (
                                                                    (0U 
                                                                     == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 4U;
                                                                    vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                                                } else {
                                                                    if (
                                                                        (4U 
                                                                         == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                        vlTOPp->top__DOT__u_CPU__DOT__PC_plus_ena = 1U;
                                                                        if (
                                                                            ((0U 
                                                                              != 
                                                                              (0xe0U 
                                                                               | ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg) 
                                                                                & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg)))) 
                                                                             & (IData)(vlTOPp->top__DOT__u_CPU__DOT__IME))) {
                                                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x11U;
                                                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                                                        } else {
                                                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0U;
                                                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0U;
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                if (
                                                                    (0x26U 
                                                                     == 
                                                                     (0x3fU 
                                                                      & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                                                                    if (
                                                                        (0U 
                                                                         == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 4U;
                                                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                                                    } else {
                                                                        if (
                                                                            (4U 
                                                                             == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                            vlTOPp->top__DOT__u_CPU__DOT__PC_plus_ena = 1U;
                                                                            if (
                                                                                ((0U 
                                                                                != 
                                                                                (0xe0U 
                                                                                | ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg) 
                                                                                & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg)))) 
                                                                                & (IData)(vlTOPp->top__DOT__u_CPU__DOT__IME))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x11U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                                                            } else {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0U;
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (
                                                                        (0x2eU 
                                                                         == 
                                                                         (0x3fU 
                                                                          & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                                                                        if (
                                                                            (0U 
                                                                             == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 4U;
                                                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                                                        } else {
                                                                            if (
                                                                                (4U 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__PC_plus_ena = 1U;
                                                                                if (
                                                                                ((0U 
                                                                                != 
                                                                                (0xe0U 
                                                                                | ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg) 
                                                                                & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg)))) 
                                                                                & (IData)(vlTOPp->top__DOT__u_CPU__DOT__IME))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x11U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                                                                } else {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0U;
                                                                                }
                                                                            }
                                                                        }
                                                                    } else {
                                                                        if (
                                                                            (0x36U 
                                                                             == 
                                                                             (0x3fU 
                                                                              & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                                                                            if (
                                                                                (0U 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 4U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                                                            } else {
                                                                                if (
                                                                                (4U 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__PC_plus_ena = 1U;
                                                                                if (
                                                                                ((0U 
                                                                                != 
                                                                                (0xe0U 
                                                                                | ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg) 
                                                                                & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg)))) 
                                                                                & (IData)(vlTOPp->top__DOT__u_CPU__DOT__IME))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x11U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                                                                } else {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0U;
                                                                                }
                                                                                }
                                                                            }
                                                                        } else {
                                                                            if (
                                                                                (0U 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 4U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                                                            } else {
                                                                                if (
                                                                                (4U 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__PC_plus_ena = 1U;
                                                                                if (
                                                                                ((0U 
                                                                                != 
                                                                                (0xe0U 
                                                                                | ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg) 
                                                                                & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg)))) 
                                                                                & (IData)(vlTOPp->top__DOT__u_CPU__DOT__IME))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x11U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                                                                } else {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0U;
                                                                                }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (
                                                    ((((((((9U 
                                                            == 
                                                            (0x3fU 
                                                             & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) 
                                                           | (0x19U 
                                                              == 
                                                              (0x3fU 
                                                               & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) 
                                                          | (3U 
                                                             == 
                                                             (0x3fU 
                                                              & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) 
                                                         | (0x29U 
                                                            == 
                                                            (0x3fU 
                                                             & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) 
                                                        | (0xdU 
                                                           == 
                                                           (0x3fU 
                                                            & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) 
                                                       | (0x22U 
                                                          == 
                                                          (0x3fU 
                                                           & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) 
                                                      | (0x20U 
                                                         == 
                                                         (0x3fU 
                                                          & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) 
                                                     | (0x2aU 
                                                        == 
                                                        (0x3fU 
                                                         & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))))) {
                                                    if (
                                                        (9U 
                                                         == 
                                                         (0x3fU 
                                                          & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                                                        if (
                                                            ((((((((0U 
                                                                    == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter)) 
                                                                   | (1U 
                                                                      == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                                                  | (2U 
                                                                     == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                                                 | (3U 
                                                                    == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                                                | (4U 
                                                                   == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                                               | (5U 
                                                                  == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                                              | (6U 
                                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                                             | (7U 
                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter)))) {
                                                            if (
                                                                (0U 
                                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                                            } else {
                                                                if (
                                                                    (1U 
                                                                     == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                    vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 2U;
                                                                } else {
                                                                    if (
                                                                        (2U 
                                                                         == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 3U;
                                                                    } else {
                                                                        if (
                                                                            (3U 
                                                                             == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 4U;
                                                                        } else {
                                                                            if (
                                                                                (4U 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 5U;
                                                                            } else {
                                                                                if (
                                                                                (5U 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 6U;
                                                                                } else {
                                                                                if (
                                                                                (6U 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 7U;
                                                                                } else {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 8U;
                                                                                }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            if (
                                                                (8U 
                                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 9U;
                                                            } else {
                                                                if (
                                                                    (9U 
                                                                     == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                    vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0xaU;
                                                                } else {
                                                                    if (
                                                                        (0xaU 
                                                                         == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0xbU;
                                                                    } else {
                                                                        if (
                                                                            (0xbU 
                                                                             == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0xcU;
                                                                        } else {
                                                                            if (
                                                                                (0xcU 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                if (
                                                                                ((0U 
                                                                                != 
                                                                                (0xe0U 
                                                                                | ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg) 
                                                                                & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg)))) 
                                                                                & (IData)(vlTOPp->top__DOT__u_CPU__DOT__IME))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x11U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                                                                } else {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0U;
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        if (
                                                            (0x19U 
                                                             == 
                                                             (0x3fU 
                                                              & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                                                            if (
                                                                ((((((((0U 
                                                                        == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter)) 
                                                                       | (1U 
                                                                          == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                                                      | (2U 
                                                                         == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                                                     | (3U 
                                                                        == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                                                    | (4U 
                                                                       == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                                                   | (5U 
                                                                      == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                                                  | (6U 
                                                                     == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                                                 | (7U 
                                                                    == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter)))) {
                                                                if (
                                                                    (0U 
                                                                     == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                    vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                                                } else {
                                                                    if (
                                                                        (1U 
                                                                         == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 2U;
                                                                    } else {
                                                                        if (
                                                                            (2U 
                                                                             == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 3U;
                                                                        } else {
                                                                            if (
                                                                                (3U 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 4U;
                                                                            } else {
                                                                                if (
                                                                                (4U 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 5U;
                                                                                } else {
                                                                                if (
                                                                                (5U 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 6U;
                                                                                } else {
                                                                                if (
                                                                                (6U 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 7U;
                                                                                } else {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 8U;
                                                                                }
                                                                                }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                if (
                                                                    (8U 
                                                                     == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                    vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 9U;
                                                                } else {
                                                                    if (
                                                                        (9U 
                                                                         == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0xaU;
                                                                    } else {
                                                                        if (
                                                                            (0xaU 
                                                                             == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0xbU;
                                                                        } else {
                                                                            if (
                                                                                (0xbU 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0xcU;
                                                                            } else {
                                                                                if (
                                                                                (0xcU 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                if (
                                                                                (0U 
                                                                                != 
                                                                                (0xe0U 
                                                                                | ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg) 
                                                                                & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg))))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x11U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                                                                } else {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0U;
                                                                                }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            if (
                                                                (3U 
                                                                 == 
                                                                 (0x3fU 
                                                                  & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                                                                if (
                                                                    (0U 
                                                                     == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 8U;
                                                                    vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                                                } else {
                                                                    if (
                                                                        (8U 
                                                                         == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 9U;
                                                                    } else {
                                                                        if (
                                                                            (9U 
                                                                             == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0xaU;
                                                                        } else {
                                                                            if (
                                                                                (0xaU 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0xbU;
                                                                            } else {
                                                                                if (
                                                                                (0xbU 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0xcU;
                                                                                } else {
                                                                                if (
                                                                                (0xcU 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__imm16_reg_clear = 1U;
                                                                                if (
                                                                                ((0U 
                                                                                != 
                                                                                (0xe0U 
                                                                                | ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg) 
                                                                                & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg)))) 
                                                                                & (IData)(vlTOPp->top__DOT__u_CPU__DOT__IME))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x11U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                                                                } else {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0U;
                                                                                }
                                                                                }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                if (
                                                                    (0x29U 
                                                                     == 
                                                                     (0x3fU 
                                                                      & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                                                                    if (
                                                                        ((0U 
                                                                          != 
                                                                          (0xe0U 
                                                                           | ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg) 
                                                                              & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg)))) 
                                                                         & (IData)(vlTOPp->top__DOT__u_CPU__DOT__IME))) {
                                                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x11U;
                                                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                                                    } else {
                                                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0U;
                                                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0U;
                                                                    }
                                                                } else {
                                                                    if (
                                                                        (0xdU 
                                                                         == 
                                                                         (0x3fU 
                                                                          & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                                                                        if (
                                                                            ((((((((0U 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter)) 
                                                                                | (8U 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                                                                | (9U 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                                                                | (0xaU 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                                                                | (0xbU 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                                                               | (0xcU 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                                                              | (0xdU 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                                                             | (0xeU 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter)))) {
                                                                            if (
                                                                                (0U 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 8U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                                                            } else {
                                                                                if (
                                                                                (8U 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 9U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__PC_plus_ena = 1U;
                                                                                } else {
                                                                                if (
                                                                                (9U 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0xaU;
                                                                                } else {
                                                                                if (
                                                                                (0xaU 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0xbU;
                                                                                } else {
                                                                                if (
                                                                                (0xbU 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0xcU;
                                                                                } else {
                                                                                if (
                                                                                (0xcU 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0xdU;
                                                                                } else {
                                                                                if (
                                                                                (0xdU 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0xeU;
                                                                                } else {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0xfU;
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                            }
                                                                        } else {
                                                                            if (
                                                                                (0xfU 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0x10U;
                                                                            } else {
                                                                                if (
                                                                                (0x10U 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0x11U;
                                                                                } else {
                                                                                if (
                                                                                (0x11U 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0x12U;
                                                                                } else {
                                                                                if (
                                                                                (0x12U 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0x13U;
                                                                                } else {
                                                                                if (
                                                                                (0x13U 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0x14U;
                                                                                } else {
                                                                                if (
                                                                                (0x14U 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__imm16_reg_clear = 1U;
                                                                                if (
                                                                                ((0U 
                                                                                != 
                                                                                (0xe0U 
                                                                                | ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg) 
                                                                                & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg)))) 
                                                                                & (IData)(vlTOPp->top__DOT__u_CPU__DOT__IME))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x11U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                                                                } else {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0U;
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                            }
                                                                        }
                                                                    } else {
                                                                        if (
                                                                            (0x22U 
                                                                             == 
                                                                             (0x3fU 
                                                                              & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                                                                            if (
                                                                                (0U 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                                                            } else {
                                                                                if (
                                                                                (1U 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 2U;
                                                                                } else {
                                                                                if (
                                                                                (2U 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 3U;
                                                                                } else {
                                                                                if (
                                                                                (3U 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 4U;
                                                                                } else {
                                                                                if (
                                                                                (4U 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__PC_plus_ena = 1U;
                                                                                if (
                                                                                ((0U 
                                                                                != 
                                                                                (0xe0U 
                                                                                | ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg) 
                                                                                & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg)))) 
                                                                                & (IData)(vlTOPp->top__DOT__u_CPU__DOT__IME))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x11U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                                                                } else {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0U;
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                            }
                                                                        } else {
                                                                            if (
                                                                                (0x20U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                                                                                if (
                                                                                (0U 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 4U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                                                                } else {
                                                                                if (
                                                                                (4U 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 5U;
                                                                                } else {
                                                                                if (
                                                                                (5U 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 6U;
                                                                                } else {
                                                                                if (
                                                                                (6U 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 7U;
                                                                                } else {
                                                                                if (
                                                                                (7U 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 8U;
                                                                                } else {
                                                                                if (
                                                                                (8U 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__PC_plus_ena = 1U;
                                                                                if (
                                                                                ((0U 
                                                                                != 
                                                                                (0xe0U 
                                                                                | ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg) 
                                                                                & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg)))) 
                                                                                & (IData)(vlTOPp->top__DOT__u_CPU__DOT__IME))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x11U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                                                                } else {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0U;
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                            } else {
                                                                                if (
                                                                                (0U 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 8U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                                                                } else {
                                                                                if (
                                                                                (8U 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 9U;
                                                                                } else {
                                                                                if (
                                                                                (9U 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0xaU;
                                                                                } else {
                                                                                if (
                                                                                (0xaU 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0xbU;
                                                                                } else {
                                                                                if (
                                                                                (0xbU 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0xcU;
                                                                                } else {
                                                                                if (
                                                                                (0xcU 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__imm16_reg_clear = 1U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__PC_plus_ena = 1U;
                                                                                if (
                                                                                ((0U 
                                                                                != 
                                                                                (0xe0U 
                                                                                | ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg) 
                                                                                & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg)))) 
                                                                                & (IData)(vlTOPp->top__DOT__u_CPU__DOT__IME))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x11U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                                                                } else {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0U;
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if (
                                                        ((((((((0x32U 
                                                                == 
                                                                (0x3fU 
                                                                 & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) 
                                                               | (0x30U 
                                                                  == 
                                                                  (0x3fU 
                                                                   & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) 
                                                              | (0x3aU 
                                                                 == 
                                                                 (0x3fU 
                                                                  & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) 
                                                             | (0x28U 
                                                                == 
                                                                (0x3fU 
                                                                 & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) 
                                                            | (0x38U 
                                                               == 
                                                               (0x3fU 
                                                                & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) 
                                                           | (0x39U 
                                                              == 
                                                              (0x3fU 
                                                               & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) 
                                                          | (0x33U 
                                                             == 
                                                             (0x3fU 
                                                              & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) 
                                                         | (0x3bU 
                                                            == 
                                                            (0x3fU 
                                                             & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))))) {
                                                        if (
                                                            (0x32U 
                                                             == 
                                                             (0x3fU 
                                                              & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                                                            if (
                                                                (0U 
                                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                                            } else {
                                                                if (
                                                                    (1U 
                                                                     == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                    vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 2U;
                                                                } else {
                                                                    if (
                                                                        (2U 
                                                                         == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 3U;
                                                                    } else {
                                                                        if (
                                                                            (3U 
                                                                             == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 4U;
                                                                        } else {
                                                                            if (
                                                                                (4U 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__PC_plus_ena = 1U;
                                                                                if (
                                                                                ((0U 
                                                                                != 
                                                                                (0xe0U 
                                                                                | ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg) 
                                                                                & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg)))) 
                                                                                & (IData)(vlTOPp->top__DOT__u_CPU__DOT__IME))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x11U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                                                                } else {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0U;
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            if (
                                                                (0x30U 
                                                                 == 
                                                                 (0x3fU 
                                                                  & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                                                                if (
                                                                    (0U 
                                                                     == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 4U;
                                                                    vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                                                } else {
                                                                    if (
                                                                        (4U 
                                                                         == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 5U;
                                                                    } else {
                                                                        if (
                                                                            (5U 
                                                                             == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 6U;
                                                                        } else {
                                                                            if (
                                                                                (6U 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 7U;
                                                                            } else {
                                                                                if (
                                                                                (7U 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 8U;
                                                                                } else {
                                                                                if (
                                                                                (8U 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__PC_plus_ena = 1U;
                                                                                if (
                                                                                ((0U 
                                                                                != 
                                                                                (0xe0U 
                                                                                | ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg) 
                                                                                & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg)))) 
                                                                                & (IData)(vlTOPp->top__DOT__u_CPU__DOT__IME))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x11U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                                                                } else {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0U;
                                                                                }
                                                                                }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                if (
                                                                    (0x3aU 
                                                                     == 
                                                                     (0x3fU 
                                                                      & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                                                                    if (
                                                                        (0U 
                                                                         == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 8U;
                                                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                                                    } else {
                                                                        if (
                                                                            (8U 
                                                                             == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 9U;
                                                                        } else {
                                                                            if (
                                                                                (9U 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0xaU;
                                                                            } else {
                                                                                if (
                                                                                (0xaU 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0xbU;
                                                                                } else {
                                                                                if (
                                                                                (0xbU 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0xcU;
                                                                                } else {
                                                                                if (
                                                                                (0xcU 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__imm16_reg_clear = 1U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__PC_plus_ena = 1U;
                                                                                if (
                                                                                ((0U 
                                                                                != 
                                                                                (0xe0U 
                                                                                | ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg) 
                                                                                & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg)))) 
                                                                                & (IData)(vlTOPp->top__DOT__u_CPU__DOT__IME))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x11U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                                                                } else {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0U;
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (
                                                                        (0x28U 
                                                                         == 
                                                                         (0x3fU 
                                                                          & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                                                                        if (
                                                                            ((((((((0U 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter)) 
                                                                                | (4U 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                                                                | (5U 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                                                                | (6U 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                                                                | (7U 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                                                               | (8U 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                                                              | (9U 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                                                             | (0xaU 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter)))) {
                                                                            if (
                                                                                (0U 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 4U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                                                            } else {
                                                                                if (
                                                                                (4U 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 5U;
                                                                                } else {
                                                                                if (
                                                                                (5U 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 6U;
                                                                                } else {
                                                                                if (
                                                                                (6U 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 7U;
                                                                                } else {
                                                                                if (
                                                                                (7U 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 8U;
                                                                                } else {
                                                                                if (
                                                                                (8U 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 9U;
                                                                                } else {
                                                                                if (
                                                                                (9U 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0xaU;
                                                                                } else {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0xbU;
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                            }
                                                                        } else {
                                                                            if (
                                                                                (0xbU 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0xcU;
                                                                            } else {
                                                                                if (
                                                                                (0xcU 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__PC_plus_ena = 1U;
                                                                                if (
                                                                                ((0U 
                                                                                != 
                                                                                (0xe0U 
                                                                                | ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg) 
                                                                                & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg)))) 
                                                                                & (IData)(vlTOPp->top__DOT__u_CPU__DOT__IME))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x11U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                                                                } else {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0U;
                                                                                }
                                                                                }
                                                                            }
                                                                        }
                                                                    } else {
                                                                        if (
                                                                            (0x38U 
                                                                             == 
                                                                             (0x3fU 
                                                                              & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                                                                            if (
                                                                                (0U 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 4U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                                                            } else {
                                                                                if (
                                                                                (4U 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 5U;
                                                                                } else {
                                                                                if (
                                                                                (5U 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 6U;
                                                                                } else {
                                                                                if (
                                                                                (6U 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 7U;
                                                                                } else {
                                                                                if (
                                                                                (7U 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 8U;
                                                                                } else {
                                                                                if (
                                                                                (8U 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__PC_plus_ena = 1U;
                                                                                if (
                                                                                ((0U 
                                                                                != 
                                                                                (0xe0U 
                                                                                | ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg) 
                                                                                & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg)))) 
                                                                                & (IData)(vlTOPp->top__DOT__u_CPU__DOT__IME))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x11U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                                                                } else {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0U;
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                            }
                                                                        } else {
                                                                            if (
                                                                                (0x39U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                                                                                if (
                                                                                (0U 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                                                                } else {
                                                                                if (
                                                                                (1U 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 2U;
                                                                                } else {
                                                                                if (
                                                                                (2U 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 3U;
                                                                                } else {
                                                                                if (
                                                                                (3U 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 4U;
                                                                                } else {
                                                                                if (
                                                                                (4U 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__PC_plus_ena = 1U;
                                                                                if (
                                                                                ((0U 
                                                                                != 
                                                                                (0xe0U 
                                                                                | ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg) 
                                                                                & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg)))) 
                                                                                & (IData)(vlTOPp->top__DOT__u_CPU__DOT__IME))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x11U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                                                                } else {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0U;
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                            } else {
                                                                                if (
                                                                                (0x33U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__PC_plus_ena = 1U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0U;
                                                                                } else {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__PC_plus_ena = 1U;
                                                                                if (vlTOPp->top__DOT__u_CPU__DOT__IME) {
                                                                                if (
                                                                                ((0U 
                                                                                != 
                                                                                (0xe0U 
                                                                                | ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg) 
                                                                                & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg)))) 
                                                                                & (IData)(vlTOPp->top__DOT__u_CPU__DOT__IME))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x11U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                                                                } else {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                                                                }
                                                                                } else {
                                                                                if (
                                                                                (1U 
                                                                                & (~ (IData)(vlTOPp->top__DOT__u_CPU__DOT__IME)))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0U;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0U;
                                                                                }
                                                                                }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if ((0x20U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                            if ((6U == (7U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                                if ((0U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                    vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                } else {
                                    if ((1U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 2U;
                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                    } else {
                                        if ((2U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 3U;
                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                        } else {
                                            if ((3U 
                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 4U;
                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                            } else {
                                                if (
                                                    (4U 
                                                     == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                    vlTOPp->top__DOT__u_CPU__DOT__PC_plus_ena = 1U;
                                                    if (
                                                        ((0U 
                                                          != 
                                                          (0xe0U 
                                                           | ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg) 
                                                              & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg)))) 
                                                         & (IData)(vlTOPp->top__DOT__u_CPU__DOT__IME))) {
                                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x11U;
                                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                                    } else {
                                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0U;
                                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__u_CPU__DOT__PC_plus_ena = 1U;
                                if (((0U != (0xe0U 
                                             | ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg) 
                                                & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg)))) 
                                     & (IData)(vlTOPp->top__DOT__u_CPU__DOT__IME))) {
                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x11U;
                                    vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                } else {
                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0U;
                                }
                            }
                        } else {
                            if ((6U == (7U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                                if ((0U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                    vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                } else {
                                    if ((1U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 2U;
                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                    } else {
                                        if ((2U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 3U;
                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                        } else {
                                            if ((3U 
                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 4U;
                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                            } else {
                                                if (
                                                    (4U 
                                                     == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                    vlTOPp->top__DOT__u_CPU__DOT__PC_plus_ena = 1U;
                                                    if (
                                                        ((0U 
                                                          != 
                                                          (0xe0U 
                                                           | ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg) 
                                                              & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg)))) 
                                                         & (IData)(vlTOPp->top__DOT__u_CPU__DOT__IME))) {
                                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x11U;
                                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                                    } else {
                                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0U;
                                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__u_CPU__DOT__PC_plus_ena = 1U;
                                if (((0U != (0xe0U 
                                             | ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg) 
                                                & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg)))) 
                                     & (IData)(vlTOPp->top__DOT__u_CPU__DOT__IME))) {
                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x11U;
                                    vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                } else {
                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0U;
                                }
                            }
                        }
                    } else {
                        if ((8U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                            if ((6U == (7U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                                if ((0U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                    vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                } else {
                                    if ((1U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 2U;
                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                    } else {
                                        if ((2U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 3U;
                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                        } else {
                                            if ((3U 
                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 4U;
                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                            } else {
                                                if (
                                                    (4U 
                                                     == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                    vlTOPp->top__DOT__u_CPU__DOT__PC_plus_ena = 1U;
                                                    if (
                                                        ((0U 
                                                          != 
                                                          (0xe0U 
                                                           | ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg) 
                                                              & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg)))) 
                                                         & (IData)(vlTOPp->top__DOT__u_CPU__DOT__IME))) {
                                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x11U;
                                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                                    } else {
                                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0U;
                                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__u_CPU__DOT__PC_plus_ena = 1U;
                                if (((0U != (0xe0U 
                                             | ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg) 
                                                & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg)))) 
                                     & (IData)(vlTOPp->top__DOT__u_CPU__DOT__IME))) {
                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x11U;
                                    vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                } else {
                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0U;
                                }
                            }
                        } else {
                            if ((6U == (7U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                                if ((0U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                    vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                } else {
                                    if ((1U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 2U;
                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                    } else {
                                        if ((2U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 3U;
                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                        } else {
                                            if ((3U 
                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 4U;
                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                            } else {
                                                if (
                                                    (4U 
                                                     == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                    vlTOPp->top__DOT__u_CPU__DOT__PC_plus_ena = 1U;
                                                    if (
                                                        ((0U 
                                                          != 
                                                          (0xe0U 
                                                           | ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg) 
                                                              & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg)))) 
                                                         & (IData)(vlTOPp->top__DOT__u_CPU__DOT__IME))) {
                                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x11U;
                                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                                    } else {
                                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0U;
                                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__u_CPU__DOT__PC_plus_ena = 1U;
                                if (((0U != (0xe0U 
                                             | ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg) 
                                                & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg)))) 
                                     & (IData)(vlTOPp->top__DOT__u_CPU__DOT__IME))) {
                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x11U;
                                    vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                } else {
                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0U;
                                }
                            }
                        }
                    }
                } else {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                            if ((6U == (7U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                                if ((0U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                    vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                } else {
                                    if ((1U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 2U;
                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                    } else {
                                        if ((2U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 3U;
                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                        } else {
                                            if ((3U 
                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 4U;
                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                            } else {
                                                if (
                                                    (4U 
                                                     == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                    vlTOPp->top__DOT__u_CPU__DOT__PC_plus_ena = 1U;
                                                    if (
                                                        ((0U 
                                                          != 
                                                          (0xe0U 
                                                           | ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg) 
                                                              & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg)))) 
                                                         & (IData)(vlTOPp->top__DOT__u_CPU__DOT__IME))) {
                                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x11U;
                                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                                    } else {
                                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0U;
                                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__u_CPU__DOT__PC_plus_ena = 1U;
                                if (((0U != (0xe0U 
                                             | ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg) 
                                                & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg)))) 
                                     & (IData)(vlTOPp->top__DOT__u_CPU__DOT__IME))) {
                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x11U;
                                    vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                } else {
                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0U;
                                }
                            }
                        } else {
                            if ((6U == (7U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                                if ((0U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                    vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                } else {
                                    if ((1U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 2U;
                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                    } else {
                                        if ((2U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 3U;
                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                        } else {
                                            if ((3U 
                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 4U;
                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                            } else {
                                                if (
                                                    (4U 
                                                     == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                    vlTOPp->top__DOT__u_CPU__DOT__PC_plus_ena = 1U;
                                                    if (
                                                        ((0U 
                                                          != 
                                                          (0xe0U 
                                                           | ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg) 
                                                              & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg)))) 
                                                         & (IData)(vlTOPp->top__DOT__u_CPU__DOT__IME))) {
                                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x11U;
                                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                                    } else {
                                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0U;
                                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__u_CPU__DOT__PC_plus_ena = 1U;
                                if (((0U != (0xe0U 
                                             | ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg) 
                                                & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg)))) 
                                     & (IData)(vlTOPp->top__DOT__u_CPU__DOT__IME))) {
                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x11U;
                                    vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                } else {
                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0U;
                                }
                            }
                        }
                    } else {
                        if ((8U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                            if ((6U == (7U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                                if ((0U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                    vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                } else {
                                    if ((1U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 2U;
                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                    } else {
                                        if ((2U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 3U;
                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                        } else {
                                            if ((3U 
                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 4U;
                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                            } else {
                                                if (
                                                    (4U 
                                                     == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                    vlTOPp->top__DOT__u_CPU__DOT__PC_plus_ena = 1U;
                                                    if (
                                                        ((0U 
                                                          != 
                                                          (0xe0U 
                                                           | ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg) 
                                                              & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg)))) 
                                                         & (IData)(vlTOPp->top__DOT__u_CPU__DOT__IME))) {
                                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x11U;
                                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                                    } else {
                                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0U;
                                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__u_CPU__DOT__PC_plus_ena = 1U;
                                if (((0U != (0xe0U 
                                             | ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg) 
                                                & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg)))) 
                                     & (IData)(vlTOPp->top__DOT__u_CPU__DOT__IME))) {
                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x11U;
                                    vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                } else {
                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0U;
                                }
                            }
                        } else {
                            if ((6U == (7U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                                if ((0U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                    vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                } else {
                                    if ((1U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 2U;
                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                    } else {
                                        if ((2U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 3U;
                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                        } else {
                                            if ((3U 
                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 4U;
                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                            } else {
                                                if (
                                                    (4U 
                                                     == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                    vlTOPp->top__DOT__u_CPU__DOT__PC_plus_ena = 1U;
                                                    if (
                                                        ((0U 
                                                          != 
                                                          (0xe0U 
                                                           | ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg) 
                                                              & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg)))) 
                                                         & (IData)(vlTOPp->top__DOT__u_CPU__DOT__IME))) {
                                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x11U;
                                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                                    } else {
                                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0U;
                                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__u_CPU__DOT__PC_plus_ena = 1U;
                                if (((0U != (0xe0U 
                                             | ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg) 
                                                & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg)))) 
                                     & (IData)(vlTOPp->top__DOT__u_CPU__DOT__IME))) {
                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x11U;
                                    vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                } else {
                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0U;
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if ((0x40U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                if ((0x76U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                    vlTOPp->top__DOT__u_CPU__DOT__PC_plus_ena = 1U;
                    if (((0U != (0xe0U | ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg) 
                                          & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg)))) 
                         & (IData)(vlTOPp->top__DOT__u_CPU__DOT__IME))) {
                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x11U;
                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                    } else {
                        if (((0U != (0xe0U | ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg) 
                                              & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg)))) 
                             & (~ (IData)(vlTOPp->top__DOT__u_CPU__DOT__IME)))) {
                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0U;
                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0U;
                        } else {
                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x12U;
                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0U;
                        }
                    }
                } else {
                    if ((6U == (7U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                        if ((0U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                        } else {
                            if ((1U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 2U;
                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                            } else {
                                if ((2U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                    vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 3U;
                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                } else {
                                    if ((3U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 4U;
                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                    } else {
                                        if ((4U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                            vlTOPp->top__DOT__u_CPU__DOT__PC_plus_ena = 1U;
                                            if (((0U 
                                                  != 
                                                  (0xe0U 
                                                   | ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg) 
                                                      & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg)))) 
                                                 & (IData)(vlTOPp->top__DOT__u_CPU__DOT__IME))) {
                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x11U;
                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                            } else {
                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0U;
                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if ((6U == (7U & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                                          >> 3U)))) {
                            if ((0U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                            } else {
                                if ((1U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                    vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 2U;
                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                } else {
                                    if ((2U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 3U;
                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                    } else {
                                        if ((3U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 4U;
                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                        } else {
                                            if ((4U 
                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                vlTOPp->top__DOT__u_CPU__DOT__PC_plus_ena = 1U;
                                                if (
                                                    ((0U 
                                                      != 
                                                      (0xe0U 
                                                       | ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg) 
                                                          & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg)))) 
                                                     & (IData)(vlTOPp->top__DOT__u_CPU__DOT__IME))) {
                                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x11U;
                                                    vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                                } else {
                                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0U;
                                                    vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            vlTOPp->top__DOT__u_CPU__DOT__PC_plus_ena = 1U;
                            if (((0U != (0xe0U | ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg) 
                                                  & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg)))) 
                                 & (IData)(vlTOPp->top__DOT__u_CPU__DOT__IME))) {
                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x11U;
                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                            } else {
                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0U;
                            }
                        }
                    }
                }
            } else {
                if ((4U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                            if ((0x20U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                                if ((0x10U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                                    if ((8U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                                        vlTOPp->top__DOT__u_CPU__DOT__PC_plus_ena = 1U;
                                        if (((0U != 
                                              (0xe0U 
                                               | ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg) 
                                                  & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg)))) 
                                             & (IData)(vlTOPp->top__DOT__u_CPU__DOT__IME))) {
                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x11U;
                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                        } else {
                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0U;
                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0U;
                                        }
                                    } else {
                                        vlTOPp->top__DOT__u_CPU__DOT__PC_plus_ena = 1U;
                                        if (((0U != 
                                              (0xe0U 
                                               | ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg) 
                                                  & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg)))) 
                                             & (IData)(vlTOPp->top__DOT__u_CPU__DOT__IME))) {
                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x11U;
                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                        } else {
                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0U;
                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0U;
                                        }
                                    }
                                } else {
                                    if ((8U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                                        vlTOPp->top__DOT__u_CPU__DOT__PC_plus_ena = 1U;
                                        if (((0U != 
                                              (0xe0U 
                                               | ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg) 
                                                  & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg)))) 
                                             & (IData)(vlTOPp->top__DOT__u_CPU__DOT__IME))) {
                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x11U;
                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                        } else {
                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0U;
                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0U;
                                        }
                                    } else {
                                        vlTOPp->top__DOT__u_CPU__DOT__PC_plus_ena = 1U;
                                        if (((0U != 
                                              (0xe0U 
                                               | ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg) 
                                                  & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg)))) 
                                             & (IData)(vlTOPp->top__DOT__u_CPU__DOT__IME))) {
                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x11U;
                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                        } else {
                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0U;
                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0U;
                                        }
                                    }
                                }
                            } else {
                                if ((0x10U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                                    if ((8U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                                        vlTOPp->top__DOT__u_CPU__DOT__PC_plus_ena = 1U;
                                        if (((0U != 
                                              (0xe0U 
                                               | ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg) 
                                                  & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg)))) 
                                             & (IData)(vlTOPp->top__DOT__u_CPU__DOT__IME))) {
                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x11U;
                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                        } else {
                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0U;
                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0U;
                                        }
                                    } else {
                                        vlTOPp->top__DOT__u_CPU__DOT__PC_plus_ena = 1U;
                                        if (((0U != 
                                              (0xe0U 
                                               | ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg) 
                                                  & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg)))) 
                                             & (IData)(vlTOPp->top__DOT__u_CPU__DOT__IME))) {
                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x11U;
                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                        } else {
                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0U;
                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0U;
                                        }
                                    }
                                } else {
                                    if ((8U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                                        vlTOPp->top__DOT__u_CPU__DOT__PC_plus_ena = 1U;
                                        if (((0U != 
                                              (0xe0U 
                                               | ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg) 
                                                  & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg)))) 
                                             & (IData)(vlTOPp->top__DOT__u_CPU__DOT__IME))) {
                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x11U;
                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                        } else {
                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0U;
                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0U;
                                        }
                                    } else {
                                        vlTOPp->top__DOT__u_CPU__DOT__PC_plus_ena = 1U;
                                        if (((0U != 
                                              (0xe0U 
                                               | ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg) 
                                                  & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg)))) 
                                             & (IData)(vlTOPp->top__DOT__u_CPU__DOT__IME))) {
                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x11U;
                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                        } else {
                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0U;
                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0U;
                                        }
                                    }
                                }
                            }
                        } else {
                            if ((6U == (7U & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                                              >> 3U)))) {
                                if ((0U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 4U;
                                    vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                } else {
                                    if ((4U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 5U;
                                    } else {
                                        if ((5U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 6U;
                                        } else {
                                            if ((6U 
                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 7U;
                                            } else {
                                                if (
                                                    (7U 
                                                     == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                    vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 8U;
                                                } else {
                                                    if (
                                                        (8U 
                                                         == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                        vlTOPp->top__DOT__u_CPU__DOT__PC_plus_ena = 1U;
                                                        if (
                                                            ((0U 
                                                              != 
                                                              (0xe0U 
                                                               | ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg) 
                                                                  & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg)))) 
                                                             & (IData)(vlTOPp->top__DOT__u_CPU__DOT__IME))) {
                                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x11U;
                                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                                        } else {
                                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0U;
                                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0U;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                if ((0U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 4U;
                                    vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                } else {
                                    if ((4U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        vlTOPp->top__DOT__u_CPU__DOT__PC_plus_ena = 1U;
                                        if (((0U != 
                                              (0xe0U 
                                               | ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg) 
                                                  & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg)))) 
                                             & (IData)(vlTOPp->top__DOT__u_CPU__DOT__IME))) {
                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x11U;
                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                        } else {
                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0U;
                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0U;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if ((1U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                            if ((6U == (7U & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                                              >> 3U)))) {
                                if (((((((((0U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter)) 
                                           | (1U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                          | (2U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                         | (3U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                        | (4U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                       | (5U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                      | (6U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                     | (7U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter)))) {
                                    if ((0U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                    } else {
                                        if ((1U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 2U;
                                        } else {
                                            if ((2U 
                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 3U;
                                            } else {
                                                if (
                                                    (3U 
                                                     == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                    vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 4U;
                                                } else {
                                                    if (
                                                        (4U 
                                                         == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 5U;
                                                    } else {
                                                        if (
                                                            (5U 
                                                             == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 6U;
                                                        } else {
                                                            if (
                                                                (6U 
                                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 7U;
                                                            } else {
                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 8U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if ((8U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        vlTOPp->top__DOT__u_CPU__DOT__PC_plus_ena = 1U;
                                        if (((0U != 
                                              (0xe0U 
                                               | ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg) 
                                                  & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg)))) 
                                             & (IData)(vlTOPp->top__DOT__u_CPU__DOT__IME))) {
                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x11U;
                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                        } else {
                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0U;
                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0U;
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__u_CPU__DOT__PC_plus_ena = 1U;
                                if (((0U != (0xe0U 
                                             | ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg) 
                                                & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg)))) 
                                     & (IData)(vlTOPp->top__DOT__u_CPU__DOT__IME))) {
                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x11U;
                                    vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                } else {
                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0U;
                                    vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0U;
                                }
                            }
                        } else {
                            if ((6U == (7U & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                                              >> 3U)))) {
                                if (((((((((0U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter)) 
                                           | (1U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                          | (2U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                         | (3U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                        | (4U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                       | (5U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                      | (6U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                     | (7U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter)))) {
                                    if ((0U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                    } else {
                                        if ((1U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 2U;
                                        } else {
                                            if ((2U 
                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 3U;
                                            } else {
                                                if (
                                                    (3U 
                                                     == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                    vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 4U;
                                                } else {
                                                    if (
                                                        (4U 
                                                         == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 5U;
                                                    } else {
                                                        if (
                                                            (5U 
                                                             == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 6U;
                                                        } else {
                                                            if (
                                                                (6U 
                                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 7U;
                                                            } else {
                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 8U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if ((8U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        vlTOPp->top__DOT__u_CPU__DOT__PC_plus_ena = 1U;
                                        if (((0U != 
                                              (0xe0U 
                                               | ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg) 
                                                  & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg)))) 
                                             & (IData)(vlTOPp->top__DOT__u_CPU__DOT__IME))) {
                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x11U;
                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                        } else {
                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0U;
                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0U;
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__u_CPU__DOT__PC_plus_ena = 1U;
                                if (((0U != (0xe0U 
                                             | ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg) 
                                                & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg)))) 
                                     & (IData)(vlTOPp->top__DOT__u_CPU__DOT__IME))) {
                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x11U;
                                    vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                } else {
                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0U;
                                    vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0U;
                                }
                            }
                        }
                    }
                } else {
                    if ((2U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                            if ((8U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                                if ((8U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                                    if ((0U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                    } else {
                                        if ((1U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 2U;
                                        } else {
                                            if ((2U 
                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 3U;
                                            } else {
                                                if (
                                                    (3U 
                                                     == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                    vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 4U;
                                                } else {
                                                    if (
                                                        (4U 
                                                         == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                        vlTOPp->top__DOT__u_CPU__DOT__PC_plus_ena = 1U;
                                                        if (
                                                            ((0U 
                                                              != 
                                                              (0xe0U 
                                                               | ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg) 
                                                                  & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg)))) 
                                                             & (IData)(vlTOPp->top__DOT__u_CPU__DOT__IME))) {
                                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x11U;
                                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                                        } else {
                                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0U;
                                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0U;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                if ((0U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                    vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                } else {
                                    if ((1U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 2U;
                                    } else {
                                        if ((2U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 3U;
                                        } else {
                                            if ((3U 
                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 4U;
                                            } else {
                                                if (
                                                    (4U 
                                                     == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                    vlTOPp->top__DOT__u_CPU__DOT__PC_plus_ena = 1U;
                                                    if (
                                                        ((0U 
                                                          != 
                                                          (0xe0U 
                                                           | ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg) 
                                                              & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg)))) 
                                                         & (IData)(vlTOPp->top__DOT__u_CPU__DOT__IME))) {
                                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x11U;
                                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                                    } else {
                                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0U;
                                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            if ((8U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                                if ((8U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                                    if ((0U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                    } else {
                                        if ((1U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 2U;
                                        } else {
                                            if ((2U 
                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 3U;
                                            } else {
                                                if (
                                                    (3U 
                                                     == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                    vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 4U;
                                                } else {
                                                    if (
                                                        (4U 
                                                         == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                        vlTOPp->top__DOT__u_CPU__DOT__PC_plus_ena = 1U;
                                                        if (
                                                            ((0U 
                                                              != 
                                                              (0xe0U 
                                                               | ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg) 
                                                                  & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg)))) 
                                                             & (IData)(vlTOPp->top__DOT__u_CPU__DOT__IME))) {
                                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x11U;
                                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                                        } else {
                                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0U;
                                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0U;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                if ((0U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                    vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                } else {
                                    if ((1U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 2U;
                                    } else {
                                        if ((2U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 3U;
                                        } else {
                                            if ((3U 
                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 4U;
                                            } else {
                                                if (
                                                    (4U 
                                                     == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                    vlTOPp->top__DOT__u_CPU__DOT__PC_plus_ena = 1U;
                                                    if (
                                                        ((0U 
                                                          != 
                                                          (0xe0U 
                                                           | ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg) 
                                                              & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg)))) 
                                                         & (IData)(vlTOPp->top__DOT__u_CPU__DOT__IME))) {
                                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x11U;
                                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                                    } else {
                                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0U;
                                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if ((1U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                            if ((8U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                                if ((8U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                                    if ((0U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                    } else {
                                        if ((1U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 2U;
                                        } else {
                                            if ((2U 
                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 3U;
                                            } else {
                                                if (
                                                    (3U 
                                                     == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                    vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 4U;
                                                } else {
                                                    if (
                                                        (4U 
                                                         == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                        vlTOPp->top__DOT__u_CPU__DOT__PC_plus_ena = 1U;
                                                        if (
                                                            ((0U 
                                                              != 
                                                              (0xe0U 
                                                               | ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg) 
                                                                  & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg)))) 
                                                             & (IData)(vlTOPp->top__DOT__u_CPU__DOT__IME))) {
                                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x11U;
                                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                                        } else {
                                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0U;
                                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0U;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                if ((0U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 8U;
                                    vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                } else {
                                    if ((8U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        vlTOPp->top__DOT__u_CPU__DOT__imm16_reg_clear = 1U;
                                        vlTOPp->top__DOT__u_CPU__DOT__PC_plus_ena = 1U;
                                        if (((0U != 
                                              (0xe0U 
                                               | ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg) 
                                                  & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg)))) 
                                             & (IData)(vlTOPp->top__DOT__u_CPU__DOT__IME))) {
                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x11U;
                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                        } else {
                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0U;
                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0U;
                                        }
                                    }
                                }
                            }
                        } else {
                            if ((0x20U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                                if ((0U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 4U;
                                    vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                } else {
                                    if ((4U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        if (vlTOPp->top__DOT__u_CPU__DOT__Condition) {
                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 5U;
                                        } else {
                                            vlTOPp->top__DOT__u_CPU__DOT__PC_plus_ena = 1U;
                                            if (((0U 
                                                  != 
                                                  (0xe0U 
                                                   | ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg) 
                                                      & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg)))) 
                                                 & (IData)(vlTOPp->top__DOT__u_CPU__DOT__IME))) {
                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x11U;
                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                            } else {
                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0U;
                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0U;
                                            }
                                        }
                                    } else {
                                        if ((5U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 6U;
                                        } else {
                                            if ((6U 
                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 7U;
                                            } else {
                                                if (
                                                    (7U 
                                                     == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                    vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 8U;
                                                } else {
                                                    if (
                                                        (8U 
                                                         == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                        if (
                                                            ((0U 
                                                              != 
                                                              (0xe0U 
                                                               | ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg) 
                                                                  & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg)))) 
                                                             & (IData)(vlTOPp->top__DOT__u_CPU__DOT__IME))) {
                                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x11U;
                                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                                        } else {
                                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0U;
                                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0U;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                                              >> 5U)))) {
                                    if ((0x10U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                                        if ((8U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                                            if ((0U 
                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 4U;
                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                            } else {
                                                if (
                                                    (4U 
                                                     == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                    vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 5U;
                                                } else {
                                                    if (
                                                        (5U 
                                                         == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 6U;
                                                    } else {
                                                        if (
                                                            (6U 
                                                             == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 7U;
                                                        } else {
                                                            if (
                                                                (7U 
                                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 8U;
                                                            } else {
                                                                if (
                                                                    (8U 
                                                                     == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                    if (
                                                                        ((0U 
                                                                          != 
                                                                          (0xe0U 
                                                                           | ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg) 
                                                                              & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg)))) 
                                                                         & (IData)(vlTOPp->top__DOT__u_CPU__DOT__IME))) {
                                                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x11U;
                                                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                                                    } else {
                                                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0U;
                                                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0U;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x18U;
                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0U;
                                        }
                                    } else {
                                        if ((8U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                                            if ((((
                                                   (((((0U 
                                                        == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter)) 
                                                       | (8U 
                                                          == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                                      | (9U 
                                                         == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                                     | (0xaU 
                                                        == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                                    | (0xbU 
                                                       == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                                   | (0xcU 
                                                      == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                                  | (0xdU 
                                                     == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                                 | (0xeU 
                                                    == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter)))) {
                                                if (
                                                    (0U 
                                                     == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 8U;
                                                    vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                                } else {
                                                    if (
                                                        (8U 
                                                         == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 9U;
                                                    } else {
                                                        if (
                                                            (9U 
                                                             == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0xaU;
                                                        } else {
                                                            if (
                                                                (0xaU 
                                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0xbU;
                                                            } else {
                                                                if (
                                                                    (0xbU 
                                                                     == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                    vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0xcU;
                                                                } else {
                                                                    if (
                                                                        (0xcU 
                                                                         == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0xdU;
                                                                    } else {
                                                                        if (
                                                                            (0xdU 
                                                                             == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0xeU;
                                                                        } else {
                                                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0xfU;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (
                                                    (0xfU 
                                                     == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x10U;
                                                    vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0x10U;
                                                } else {
                                                    if (
                                                        (0x10U 
                                                         == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                        vlTOPp->top__DOT__u_CPU__DOT__imm16_reg_clear = 1U;
                                                        vlTOPp->top__DOT__u_CPU__DOT__PC_plus_ena = 1U;
                                                        if (
                                                            ((0U 
                                                              != 
                                                              (0xe0U 
                                                               | ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg) 
                                                                  & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg)))) 
                                                             & (IData)(vlTOPp->top__DOT__u_CPU__DOT__IME))) {
                                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x11U;
                                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                                        } else {
                                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0U;
                                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0U;
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            vlTOPp->top__DOT__u_CPU__DOT__PC_plus_ena = 1U;
                                            if (((0U 
                                                  != 
                                                  (0xe0U 
                                                   | ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg) 
                                                      & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg)))) 
                                                 & (IData)(vlTOPp->top__DOT__u_CPU__DOT__IME))) {
                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x11U;
                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                            } else {
                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0U;
                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->top__DOT__u_CPU__DOT__prefix_valid) {
        if ((0x80U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                if ((6U == (7U & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                                  >> 3U)))) {
                    if (((((((((0U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter)) 
                               | (1U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                              | (2U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                             | (3U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                            | (4U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                           | (5U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                          | (6U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                         | (7U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter)))) {
                        if ((0U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x13U;
                        } else {
                            if ((1U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 2U;
                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x13U;
                            } else {
                                if ((2U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                    vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 3U;
                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x13U;
                                } else {
                                    if ((3U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 4U;
                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x13U;
                                    } else {
                                        if ((4U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 5U;
                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x13U;
                                        } else {
                                            if ((5U 
                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 6U;
                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x13U;
                                            } else {
                                                if (
                                                    (6U 
                                                     == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                    vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 7U;
                                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x13U;
                                                } else {
                                                    vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 8U;
                                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x13U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if ((8U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                            vlTOPp->top__DOT__u_CPU__DOT__PC_plus_ena = 1U;
                            if (((0U != (0xe0U | ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg) 
                                                  & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg)))) 
                                 & (IData)(vlTOPp->top__DOT__u_CPU__DOT__IME))) {
                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x11U;
                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                            } else {
                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0U;
                            }
                        }
                    }
                } else {
                    vlTOPp->top__DOT__u_CPU__DOT__PC_plus_ena = 1U;
                    if (((0U != (0xe0U | ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg) 
                                          & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg)))) 
                         & (IData)(vlTOPp->top__DOT__u_CPU__DOT__IME))) {
                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x11U;
                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                    } else {
                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0U;
                    }
                }
            } else {
                if ((6U == (7U & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                                  >> 3U)))) {
                    if (((((((((0U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter)) 
                               | (1U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                              | (2U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                             | (3U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                            | (4U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                           | (5U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                          | (6U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                         | (7U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter)))) {
                        if ((0U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x13U;
                        } else {
                            if ((1U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 2U;
                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x13U;
                            } else {
                                if ((2U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                    vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 3U;
                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x13U;
                                } else {
                                    if ((3U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 4U;
                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x13U;
                                    } else {
                                        if ((4U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 5U;
                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x13U;
                                        } else {
                                            if ((5U 
                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 6U;
                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x13U;
                                            } else {
                                                if (
                                                    (6U 
                                                     == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                    vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 7U;
                                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x13U;
                                                } else {
                                                    vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 8U;
                                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x13U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if ((8U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                            vlTOPp->top__DOT__u_CPU__DOT__PC_plus_ena = 1U;
                            if (((0U != (0xe0U | ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg) 
                                                  & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg)))) 
                                 & (IData)(vlTOPp->top__DOT__u_CPU__DOT__IME))) {
                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x11U;
                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                            } else {
                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0U;
                            }
                        }
                    }
                } else {
                    vlTOPp->top__DOT__u_CPU__DOT__PC_plus_ena = 1U;
                    if (((0U != (0xe0U | ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg) 
                                          & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg)))) 
                         & (IData)(vlTOPp->top__DOT__u_CPU__DOT__IME))) {
                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x11U;
                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                    } else {
                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0U;
                    }
                }
            }
        } else {
            if ((0x40U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                if ((6U == (7U & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                                  >> 3U)))) {
                    if ((0U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x13U;
                    } else {
                        if ((1U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 2U;
                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x13U;
                        } else {
                            if ((2U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 3U;
                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x13U;
                            } else {
                                if ((3U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                    vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 4U;
                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x13U;
                                } else {
                                    if ((4U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        vlTOPp->top__DOT__u_CPU__DOT__PC_plus_ena = 1U;
                                        if (((0U != 
                                              (0xe0U 
                                               | ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg) 
                                                  & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg)))) 
                                             & (IData)(vlTOPp->top__DOT__u_CPU__DOT__IME))) {
                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x11U;
                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                        } else {
                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    vlTOPp->top__DOT__u_CPU__DOT__PC_plus_ena = 1U;
                    if (((0U != (0xe0U | ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg) 
                                          & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg)))) 
                         & (IData)(vlTOPp->top__DOT__u_CPU__DOT__IME))) {
                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x11U;
                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                    } else {
                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0U;
                    }
                }
            } else {
                if ((0x20U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                            if ((6U == (7U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                                if (((((((((0U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter)) 
                                           | (1U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                          | (2U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                         | (3U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                        | (4U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                       | (5U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                      | (6U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                     | (7U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter)))) {
                                    if ((0U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x13U;
                                    } else {
                                        if ((1U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 2U;
                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x13U;
                                        } else {
                                            if ((2U 
                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 3U;
                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x13U;
                                            } else {
                                                if (
                                                    (3U 
                                                     == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                    vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 4U;
                                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x13U;
                                                } else {
                                                    if (
                                                        (4U 
                                                         == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 5U;
                                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x13U;
                                                    } else {
                                                        if (
                                                            (5U 
                                                             == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 6U;
                                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x13U;
                                                        } else {
                                                            if (
                                                                (6U 
                                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 7U;
                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x13U;
                                                            } else {
                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 8U;
                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x13U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if ((8U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        vlTOPp->top__DOT__u_CPU__DOT__PC_plus_ena = 1U;
                                        if (((0U != 
                                              (0xe0U 
                                               | ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg) 
                                                  & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg)))) 
                                             & (IData)(vlTOPp->top__DOT__u_CPU__DOT__IME))) {
                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x11U;
                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                        } else {
                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0U;
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__u_CPU__DOT__PC_plus_ena = 1U;
                                if (((0U != (0xe0U 
                                             | ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg) 
                                                & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg)))) 
                                     & (IData)(vlTOPp->top__DOT__u_CPU__DOT__IME))) {
                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x11U;
                                    vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                } else {
                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0U;
                                }
                            }
                        } else {
                            if ((6U == (7U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                                if (((((((((0U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter)) 
                                           | (1U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                          | (2U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                         | (3U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                        | (4U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                       | (5U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                      | (6U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                     | (7U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter)))) {
                                    if ((0U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x13U;
                                    } else {
                                        if ((1U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 2U;
                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x13U;
                                        } else {
                                            if ((2U 
                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 3U;
                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x13U;
                                            } else {
                                                if (
                                                    (3U 
                                                     == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                    vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 4U;
                                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x13U;
                                                } else {
                                                    if (
                                                        (4U 
                                                         == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 5U;
                                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x13U;
                                                    } else {
                                                        if (
                                                            (5U 
                                                             == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 6U;
                                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x13U;
                                                        } else {
                                                            if (
                                                                (6U 
                                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 7U;
                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x13U;
                                                            } else {
                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 8U;
                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x13U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if ((8U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        vlTOPp->top__DOT__u_CPU__DOT__PC_plus_ena = 1U;
                                        if (((0U != 
                                              (0xe0U 
                                               | ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg) 
                                                  & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg)))) 
                                             & (IData)(vlTOPp->top__DOT__u_CPU__DOT__IME))) {
                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x11U;
                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                        } else {
                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0U;
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__u_CPU__DOT__PC_plus_ena = 1U;
                                if (((0U != (0xe0U 
                                             | ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg) 
                                                & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg)))) 
                                     & (IData)(vlTOPp->top__DOT__u_CPU__DOT__IME))) {
                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x11U;
                                    vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                } else {
                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0U;
                                    vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 0U;
                                }
                            }
                        }
                    } else {
                        if ((8U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                            if ((6U == (7U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                                if (((((((((0U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter)) 
                                           | (1U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                          | (2U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                         | (3U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                        | (4U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                       | (5U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                      | (6U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                     | (7U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter)))) {
                                    if ((0U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x13U;
                                    } else {
                                        if ((1U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 2U;
                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x13U;
                                        } else {
                                            if ((2U 
                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 3U;
                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x13U;
                                            } else {
                                                if (
                                                    (3U 
                                                     == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                    vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 4U;
                                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x13U;
                                                } else {
                                                    if (
                                                        (4U 
                                                         == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 5U;
                                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x13U;
                                                    } else {
                                                        if (
                                                            (5U 
                                                             == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 6U;
                                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x13U;
                                                        } else {
                                                            if (
                                                                (6U 
                                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 7U;
                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x13U;
                                                            } else {
                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 8U;
                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x13U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if ((8U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        vlTOPp->top__DOT__u_CPU__DOT__PC_plus_ena = 1U;
                                        if (((0U != 
                                              (0xe0U 
                                               | ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg) 
                                                  & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg)))) 
                                             & (IData)(vlTOPp->top__DOT__u_CPU__DOT__IME))) {
                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x11U;
                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                        } else {
                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0U;
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__u_CPU__DOT__PC_plus_ena = 1U;
                                if (((0U != (0xe0U 
                                             | ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg) 
                                                & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg)))) 
                                     & (IData)(vlTOPp->top__DOT__u_CPU__DOT__IME))) {
                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x11U;
                                    vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                } else {
                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0U;
                                }
                            }
                        } else {
                            if ((6U == (7U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                                if (((((((((0U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter)) 
                                           | (1U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                          | (2U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                         | (3U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                        | (4U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                       | (5U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                      | (6U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                     | (7U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter)))) {
                                    if ((0U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x13U;
                                    } else {
                                        if ((1U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 2U;
                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x13U;
                                        } else {
                                            if ((2U 
                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 3U;
                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x13U;
                                            } else {
                                                if (
                                                    (3U 
                                                     == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                    vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 4U;
                                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x13U;
                                                } else {
                                                    if (
                                                        (4U 
                                                         == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 5U;
                                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x13U;
                                                    } else {
                                                        if (
                                                            (5U 
                                                             == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 6U;
                                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x13U;
                                                        } else {
                                                            if (
                                                                (6U 
                                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 7U;
                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x13U;
                                                            } else {
                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 8U;
                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x13U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if ((8U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        vlTOPp->top__DOT__u_CPU__DOT__PC_plus_ena = 1U;
                                        if (((0U != 
                                              (0xe0U 
                                               | ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg) 
                                                  & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg)))) 
                                             & (IData)(vlTOPp->top__DOT__u_CPU__DOT__IME))) {
                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x11U;
                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                        } else {
                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0U;
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__u_CPU__DOT__PC_plus_ena = 1U;
                                if (((0U != (0xe0U 
                                             | ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg) 
                                                & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg)))) 
                                     & (IData)(vlTOPp->top__DOT__u_CPU__DOT__IME))) {
                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x11U;
                                    vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                } else {
                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0U;
                                }
                            }
                        }
                    }
                } else {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                            if ((6U == (7U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                                if (((((((((0U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter)) 
                                           | (1U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                          | (2U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                         | (3U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                        | (4U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                       | (5U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                      | (6U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                     | (7U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter)))) {
                                    if ((0U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x13U;
                                    } else {
                                        if ((1U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 2U;
                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x13U;
                                        } else {
                                            if ((2U 
                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 3U;
                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x13U;
                                            } else {
                                                if (
                                                    (3U 
                                                     == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                    vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 4U;
                                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x13U;
                                                } else {
                                                    if (
                                                        (4U 
                                                         == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 5U;
                                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x13U;
                                                    } else {
                                                        if (
                                                            (5U 
                                                             == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 6U;
                                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x13U;
                                                        } else {
                                                            if (
                                                                (6U 
                                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 7U;
                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x13U;
                                                            } else {
                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 8U;
                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x13U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if ((8U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        vlTOPp->top__DOT__u_CPU__DOT__PC_plus_ena = 1U;
                                        if (((0U != 
                                              (0xe0U 
                                               | ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg) 
                                                  & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg)))) 
                                             & (IData)(vlTOPp->top__DOT__u_CPU__DOT__IME))) {
                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x11U;
                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                        } else {
                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0U;
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__u_CPU__DOT__PC_plus_ena = 1U;
                                if (((0U != (0xe0U 
                                             | ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg) 
                                                & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg)))) 
                                     & (IData)(vlTOPp->top__DOT__u_CPU__DOT__IME))) {
                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x11U;
                                    vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                } else {
                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0U;
                                }
                            }
                        } else {
                            if ((6U == (7U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                                if (((((((((0U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter)) 
                                           | (1U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                          | (2U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                         | (3U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                        | (4U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                       | (5U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                      | (6U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                     | (7U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter)))) {
                                    if ((0U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x13U;
                                    } else {
                                        if ((1U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 2U;
                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x13U;
                                        } else {
                                            if ((2U 
                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 3U;
                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x13U;
                                            } else {
                                                if (
                                                    (3U 
                                                     == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                    vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 4U;
                                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x13U;
                                                } else {
                                                    if (
                                                        (4U 
                                                         == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 5U;
                                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x13U;
                                                    } else {
                                                        if (
                                                            (5U 
                                                             == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 6U;
                                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x13U;
                                                        } else {
                                                            if (
                                                                (6U 
                                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 7U;
                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x13U;
                                                            } else {
                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 8U;
                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x13U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if ((8U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        vlTOPp->top__DOT__u_CPU__DOT__PC_plus_ena = 1U;
                                        if (((0U != 
                                              (0xe0U 
                                               | ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg) 
                                                  & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg)))) 
                                             & (IData)(vlTOPp->top__DOT__u_CPU__DOT__IME))) {
                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x11U;
                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                        } else {
                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0U;
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__u_CPU__DOT__PC_plus_ena = 1U;
                                if (((0U != (0xe0U 
                                             | ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg) 
                                                & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg)))) 
                                     & (IData)(vlTOPp->top__DOT__u_CPU__DOT__IME))) {
                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x11U;
                                    vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                } else {
                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0U;
                                }
                            }
                        }
                    } else {
                        if ((8U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                            if ((6U == (7U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                                if (((((((((0U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter)) 
                                           | (1U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                          | (2U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                         | (3U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                        | (4U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                       | (5U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                      | (6U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                     | (7U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter)))) {
                                    if ((0U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x13U;
                                    } else {
                                        if ((1U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 2U;
                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x13U;
                                        } else {
                                            if ((2U 
                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 3U;
                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x13U;
                                            } else {
                                                if (
                                                    (3U 
                                                     == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                    vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 4U;
                                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x13U;
                                                } else {
                                                    if (
                                                        (4U 
                                                         == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 5U;
                                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x13U;
                                                    } else {
                                                        if (
                                                            (5U 
                                                             == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 6U;
                                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x13U;
                                                        } else {
                                                            if (
                                                                (6U 
                                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 7U;
                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x13U;
                                                            } else {
                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 8U;
                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x13U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if ((8U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        vlTOPp->top__DOT__u_CPU__DOT__PC_plus_ena = 1U;
                                        if (((0U != 
                                              (0xe0U 
                                               | ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg) 
                                                  & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg)))) 
                                             & (IData)(vlTOPp->top__DOT__u_CPU__DOT__IME))) {
                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x11U;
                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                        } else {
                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0U;
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__u_CPU__DOT__PC_plus_ena = 1U;
                                if (((0U != (0xe0U 
                                             | ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg) 
                                                & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg)))) 
                                     & (IData)(vlTOPp->top__DOT__u_CPU__DOT__IME))) {
                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x11U;
                                    vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                } else {
                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0U;
                                }
                            }
                        } else {
                            if ((6U == (7U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                                if (((((((((0U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter)) 
                                           | (1U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                          | (2U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                         | (3U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                        | (4U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                       | (5U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                      | (6U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                     | (7U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter)))) {
                                    if ((0U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x13U;
                                    } else {
                                        if ((1U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 2U;
                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x13U;
                                        } else {
                                            if ((2U 
                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 3U;
                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x13U;
                                            } else {
                                                if (
                                                    (3U 
                                                     == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                    vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 4U;
                                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x13U;
                                                } else {
                                                    if (
                                                        (4U 
                                                         == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                        vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 5U;
                                                        vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x13U;
                                                    } else {
                                                        if (
                                                            (5U 
                                                             == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 6U;
                                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x13U;
                                                        } else {
                                                            if (
                                                                (6U 
                                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 7U;
                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x13U;
                                                            } else {
                                                                vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 8U;
                                                                vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x13U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if ((8U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        vlTOPp->top__DOT__u_CPU__DOT__PC_plus_ena = 1U;
                                        if (((0U != 
                                              (0xe0U 
                                               | ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg) 
                                                  & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg)))) 
                                             & (IData)(vlTOPp->top__DOT__u_CPU__DOT__IME))) {
                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x11U;
                                            vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                        } else {
                                            vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0U;
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__u_CPU__DOT__PC_plus_ena = 1U;
                                if (((0U != (0xe0U 
                                             | ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg) 
                                                & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg)))) 
                                     & (IData)(vlTOPp->top__DOT__u_CPU__DOT__IME))) {
                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0x11U;
                                    vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter_next = 1U;
                                } else {
                                    vlTOPp->top__DOT__u_CPU__DOT__next_main_state = 0U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__u_PPU__DOT__map_x = (0xffU & 
                                           ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_PPU_IO__DOT__SCX_reg) 
                                            + (IData)(vlTOPp->top__DOT__u_PPU__DOT__sub_counter_2)));
    vlTOPp->top__DOT__u_PPU__DOT__win_x = (0xffU & 
                                           ((6U >= (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_PPU_IO__DOT__WX_reg))
                                             ? (((IData)(7U) 
                                                 + (IData)(vlTOPp->top__DOT__u_PPU__DOT__sub_counter_2)) 
                                                - (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_PPU_IO__DOT__WX_reg))
                                             : ((IData)(vlTOPp->top__DOT__u_PPU__DOT__sub_counter_2) 
                                                - ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_PPU_IO__DOT__WX_reg) 
                                                   - (IData)(7U)))));
    vlTOPp->top__DOT__PPU_LY_w_ena = 0U;
    vlTOPp->top__DOT__PPU_LY_w_data = 0U;
    vlTOPp->top__DOT__PPU_STAT_w_ena = 0U;
    vlTOPp->top__DOT__PPU_STAT_w_data = vlTOPp->top__DOT__u_io_register__DOT__inst_STAT__DOT__STAT_reg;
    vlTOPp->top__DOT__irq_vblank = 0U;
    vlTOPp->top__DOT__irq_LCD = 0U;
    vlTOPp->top__DOT__u_PPU__DOT__mode0_enter = 0U;
    vlTOPp->top__DOT__u_PPU__DOT__mode1_enter = 0U;
    vlTOPp->top__DOT__u_PPU__DOT__mode2_enter = 0U;
    vlTOPp->top__DOT__u_PPU__DOT__mode3_enter = 0U;
    if ((0U == (IData)(vlTOPp->top__DOT__u_PPU__DOT__main_state))) {
        if ((0x80U & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_PPU_IO__DOT__LCDC_reg))) {
            vlTOPp->top__DOT__PPU_LY_w_ena = 1U;
            vlTOPp->top__DOT__PPU_LY_w_data = 0U;
            vlTOPp->top__DOT__u_PPU__DOT__mode2_enter = 1U;
        }
    } else {
        if ((1U == (IData)(vlTOPp->top__DOT__u_PPU__DOT__main_state))) {
            if ((0x13fU == vlTOPp->top__DOT__u_PPU__DOT__m_clk_counter)) {
                vlTOPp->top__DOT__u_PPU__DOT__mode3_enter = 1U;
            }
        } else {
            if ((2U == (IData)(vlTOPp->top__DOT__u_PPU__DOT__main_state))) {
                if ((0x2afU == vlTOPp->top__DOT__u_PPU__DOT__m_clk_counter)) {
                    vlTOPp->top__DOT__u_PPU__DOT__mode0_enter = 1U;
                }
                if ((0x5dfU == vlTOPp->top__DOT__u_PPU__DOT__m_clk_counter)) {
                    if ((0x8fU == (IData)(vlTOPp->top__DOT__u_PPU__DOT__line_counter))) {
                        vlTOPp->top__DOT__u_PPU__DOT__mode1_enter = 1U;
                    } else {
                        vlTOPp->top__DOT__u_PPU__DOT__mode2_enter = 1U;
                    }
                    vlTOPp->top__DOT__PPU_LY_w_ena = 1U;
                    vlTOPp->top__DOT__PPU_LY_w_data 
                        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__u_PPU__DOT__line_counter)));
                }
            } else {
                if ((3U == (IData)(vlTOPp->top__DOT__u_PPU__DOT__main_state))) {
                    if ((0x80U & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_PPU_IO__DOT__LCDC_reg))) {
                        if ((0x71fU == vlTOPp->top__DOT__u_PPU__DOT__m_clk_counter)) {
                            if ((0x99U == (IData)(vlTOPp->top__DOT__u_PPU__DOT__line_counter))) {
                                vlTOPp->top__DOT__PPU_LY_w_ena = 1U;
                                vlTOPp->top__DOT__PPU_LY_w_data = 0U;
                            } else {
                                vlTOPp->top__DOT__PPU_LY_w_ena = 1U;
                                vlTOPp->top__DOT__PPU_LY_w_data 
                                    = (0xffU & ((IData)(1U) 
                                                + (IData)(vlTOPp->top__DOT__u_PPU__DOT__line_counter)));
                            }
                        }
                    } else {
                        vlTOPp->top__DOT__PPU_LY_w_ena = 1U;
                        vlTOPp->top__DOT__PPU_LY_w_data = 0U;
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->top__DOT__PPU_LY_w_ena) & 
         ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_PPU_IO__DOT__LYC_reg) 
          == (IData)(vlTOPp->top__DOT__PPU_LY_w_data)))) {
        vlTOPp->top__DOT__PPU_STAT_w_ena = 1U;
        vlTOPp->top__DOT__PPU_STAT_w_data = (4U | (IData)(vlTOPp->top__DOT__PPU_STAT_w_data));
        vlTOPp->top__DOT__PPU_STAT_w_data = ((0xfcU 
                                              & (IData)(vlTOPp->top__DOT__PPU_STAT_w_data)) 
                                             | ((IData)(vlTOPp->top__DOT__u_PPU__DOT__mode0_enter)
                                                 ? 0U
                                                 : 
                                                ((IData)(vlTOPp->top__DOT__u_PPU__DOT__mode1_enter)
                                                  ? 1U
                                                  : 
                                                 ((IData)(vlTOPp->top__DOT__u_PPU__DOT__mode2_enter)
                                                   ? 2U
                                                   : 
                                                  ((IData)(vlTOPp->top__DOT__u_PPU__DOT__mode3_enter)
                                                    ? 3U
                                                    : 
                                                   (3U 
                                                    & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_STAT__DOT__STAT_reg)))))));
    } else {
        if (((IData)(vlTOPp->top__DOT__PPU_LY_w_ena) 
             & ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_PPU_IO__DOT__LYC_reg) 
                != (IData)(vlTOPp->top__DOT__PPU_LY_w_data)))) {
            vlTOPp->top__DOT__PPU_STAT_w_ena = 1U;
            vlTOPp->top__DOT__PPU_STAT_w_data = (0xfbU 
                                                 & (IData)(vlTOPp->top__DOT__PPU_STAT_w_data));
            vlTOPp->top__DOT__PPU_STAT_w_data = ((0xfcU 
                                                  & (IData)(vlTOPp->top__DOT__PPU_STAT_w_data)) 
                                                 | ((IData)(vlTOPp->top__DOT__u_PPU__DOT__mode0_enter)
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlTOPp->top__DOT__u_PPU__DOT__mode1_enter)
                                                      ? 1U
                                                      : 
                                                     ((IData)(vlTOPp->top__DOT__u_PPU__DOT__mode2_enter)
                                                       ? 2U
                                                       : 
                                                      ((IData)(vlTOPp->top__DOT__u_PPU__DOT__mode3_enter)
                                                        ? 3U
                                                        : 
                                                       (3U 
                                                        & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_STAT__DOT__STAT_reg)))))));
        } else {
            if (vlTOPp->top__DOT__u_PPU__DOT__mode0_enter) {
                vlTOPp->top__DOT__PPU_STAT_w_ena = 1U;
                vlTOPp->top__DOT__PPU_STAT_w_data = 
                    (0xfcU & (IData)(vlTOPp->top__DOT__PPU_STAT_w_data));
                vlTOPp->top__DOT__PPU_STAT_w_data = 
                    ((0xfbU & (IData)(vlTOPp->top__DOT__PPU_STAT_w_data)) 
                     | (4U & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_STAT__DOT__STAT_reg)));
            } else {
                if (vlTOPp->top__DOT__u_PPU__DOT__mode1_enter) {
                    vlTOPp->top__DOT__PPU_STAT_w_ena = 1U;
                    vlTOPp->top__DOT__PPU_STAT_w_data 
                        = (1U | (0xfcU & (IData)(vlTOPp->top__DOT__PPU_STAT_w_data)));
                    vlTOPp->top__DOT__PPU_STAT_w_data 
                        = ((0xfbU & (IData)(vlTOPp->top__DOT__PPU_STAT_w_data)) 
                           | (4U & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_STAT__DOT__STAT_reg)));
                } else {
                    if (vlTOPp->top__DOT__u_PPU__DOT__mode2_enter) {
                        vlTOPp->top__DOT__PPU_STAT_w_ena = 1U;
                        vlTOPp->top__DOT__PPU_STAT_w_data 
                            = (2U | (0xfcU & (IData)(vlTOPp->top__DOT__PPU_STAT_w_data)));
                        vlTOPp->top__DOT__PPU_STAT_w_data 
                            = ((0xfbU & (IData)(vlTOPp->top__DOT__PPU_STAT_w_data)) 
                               | (4U & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_STAT__DOT__STAT_reg)));
                    } else {
                        if (vlTOPp->top__DOT__u_PPU__DOT__mode3_enter) {
                            vlTOPp->top__DOT__PPU_STAT_w_ena = 1U;
                            vlTOPp->top__DOT__PPU_STAT_w_data 
                                = (3U | (IData)(vlTOPp->top__DOT__PPU_STAT_w_data));
                            vlTOPp->top__DOT__PPU_STAT_w_data 
                                = ((0xfbU & (IData)(vlTOPp->top__DOT__PPU_STAT_w_data)) 
                                   | (4U & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_STAT__DOT__STAT_reg)));
                        }
                    }
                }
            }
        }
    }
    if (((((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_STAT__DOT__STAT_reg) 
           >> 6U) & (IData)(vlTOPp->top__DOT__PPU_STAT_w_ena)) 
         & ((IData)(vlTOPp->top__DOT__PPU_STAT_w_data) 
            >> 2U))) {
        vlTOPp->top__DOT__irq_LCD = 1U;
    }
    if ((((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_STAT__DOT__STAT_reg) 
          >> 5U) & (IData)(vlTOPp->top__DOT__u_PPU__DOT__mode2_enter))) {
        vlTOPp->top__DOT__irq_LCD = 1U;
    }
    if ((((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_STAT__DOT__STAT_reg) 
          >> 4U) & (IData)(vlTOPp->top__DOT__u_PPU__DOT__mode1_enter))) {
        vlTOPp->top__DOT__irq_LCD = 1U;
    }
    if ((((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_STAT__DOT__STAT_reg) 
          >> 3U) & (IData)(vlTOPp->top__DOT__u_PPU__DOT__mode0_enter))) {
        vlTOPp->top__DOT__irq_LCD = 1U;
    }
    if (vlTOPp->top__DOT__u_PPU__DOT__mode1_enter) {
        vlTOPp->top__DOT__irq_vblank = 1U;
    }
    vlTOPp->top__DOT__u_io_register__DOT__inst_TIMA__DOT__TIMA_M_256_ena = 0U;
    if ((0U == (3U & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_TAC__DOT__TAC_reg)))) {
        vlTOPp->top__DOT__u_io_register__DOT__inst_TIMA__DOT__TIMA_M_256_ena = 1U;
    } else {
        if ((1U == (3U & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_TAC__DOT__TAC_reg)))) {
            vlTOPp->top__DOT__u_io_register__DOT__inst_TIMA__DOT__TIMA_M_256_ena = 0U;
        } else {
            if ((2U == (3U & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_TAC__DOT__TAC_reg)))) {
                vlTOPp->top__DOT__u_io_register__DOT__inst_TIMA__DOT__TIMA_M_256_ena = 0U;
            } else {
                if ((3U == (3U & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_TAC__DOT__TAC_reg)))) {
                    vlTOPp->top__DOT__u_io_register__DOT__inst_TIMA__DOT__TIMA_M_256_ena = 0U;
                }
            }
        }
    }
    vlTOPp->top__DOT__u_io_register__DOT__inst_TIMA__DOT__TIMA_M_64_ena = 0U;
    if ((0U == (3U & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_TAC__DOT__TAC_reg)))) {
        vlTOPp->top__DOT__u_io_register__DOT__inst_TIMA__DOT__TIMA_M_64_ena = 0U;
    } else {
        if ((1U == (3U & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_TAC__DOT__TAC_reg)))) {
            vlTOPp->top__DOT__u_io_register__DOT__inst_TIMA__DOT__TIMA_M_64_ena = 0U;
        } else {
            if ((2U == (3U & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_TAC__DOT__TAC_reg)))) {
                vlTOPp->top__DOT__u_io_register__DOT__inst_TIMA__DOT__TIMA_M_64_ena = 0U;
            } else {
                if ((3U == (3U & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_TAC__DOT__TAC_reg)))) {
                    vlTOPp->top__DOT__u_io_register__DOT__inst_TIMA__DOT__TIMA_M_64_ena = 1U;
                }
            }
        }
    }
    vlTOPp->top__DOT__u_io_register__DOT__inst_TIMA__DOT__TIMA_M_16_ena = 0U;
    if ((0U == (3U & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_TAC__DOT__TAC_reg)))) {
        vlTOPp->top__DOT__u_io_register__DOT__inst_TIMA__DOT__TIMA_M_16_ena = 0U;
    } else {
        if ((1U == (3U & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_TAC__DOT__TAC_reg)))) {
            vlTOPp->top__DOT__u_io_register__DOT__inst_TIMA__DOT__TIMA_M_16_ena = 0U;
        } else {
            if ((2U == (3U & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_TAC__DOT__TAC_reg)))) {
                vlTOPp->top__DOT__u_io_register__DOT__inst_TIMA__DOT__TIMA_M_16_ena = 1U;
            } else {
                if ((3U == (3U & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_TAC__DOT__TAC_reg)))) {
                    vlTOPp->top__DOT__u_io_register__DOT__inst_TIMA__DOT__TIMA_M_16_ena = 0U;
                }
            }
        }
    }
    vlTOPp->top__DOT__u_io_register__DOT__inst_TIMA__DOT__TIMA_M_4_ena = 0U;
    if ((0U == (3U & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_TAC__DOT__TAC_reg)))) {
        vlTOPp->top__DOT__u_io_register__DOT__inst_TIMA__DOT__TIMA_M_4_ena = 0U;
    } else {
        if ((1U == (3U & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_TAC__DOT__TAC_reg)))) {
            vlTOPp->top__DOT__u_io_register__DOT__inst_TIMA__DOT__TIMA_M_4_ena = 1U;
        } else {
            if ((2U == (3U & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_TAC__DOT__TAC_reg)))) {
                vlTOPp->top__DOT__u_io_register__DOT__inst_TIMA__DOT__TIMA_M_4_ena = 0U;
            } else {
                if ((3U == (3U & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_TAC__DOT__TAC_reg)))) {
                    vlTOPp->top__DOT__u_io_register__DOT__inst_TIMA__DOT__TIMA_M_4_ena = 0U;
                }
            }
        }
    }
    vlTOPp->top__DOT__u_io_register__DOT__inst_TIMA__DOT__TIMA_ena = 0U;
    if ((1U & (0x3eU | ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_TAC__DOT__TAC_reg) 
                        >> 2U)))) {
        vlTOPp->top__DOT__u_io_register__DOT__inst_TIMA__DOT__TIMA_ena = 1U;
    } else {
        if ((1U & (~ (0x3eU | ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_TAC__DOT__TAC_reg) 
                               >> 2U))))) {
            vlTOPp->top__DOT__u_io_register__DOT__inst_TIMA__DOT__TIMA_ena = 0U;
        }
    }
    vlTOPp->top__DOT__u_io_register__DOT__inst_TIMA__DOT__M_cycle_ena = 0U;
    if ((3U == (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_TIMA__DOT__T_clk_counter))) {
        vlTOPp->top__DOT__u_io_register__DOT__inst_TIMA__DOT__M_cycle_ena = 1U;
    }
    vlTOPp->top__DOT__u_io_register__DOT__inst_TIMA__DOT__T_cycle_ena = 0U;
    if ((3U == (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_TIMA__DOT__my_clk_counter))) {
        vlTOPp->top__DOT__u_io_register__DOT__inst_TIMA__DOT__T_cycle_ena = 1U;
    }
    vlTOPp->JOY_out = vlTOPp->top__DOT__u_io_register__DOT__JOY;
    vlTOPp->top__DOT__io_reg_r_data = 0U;
    if (((((((((0U == (IData)(vlTOPp->top__DOT__u_io_register__DOT__r_state)) 
               | (1U == (IData)(vlTOPp->top__DOT__u_io_register__DOT__r_state))) 
              | (2U == (IData)(vlTOPp->top__DOT__u_io_register__DOT__r_state))) 
             | (3U == (IData)(vlTOPp->top__DOT__u_io_register__DOT__r_state))) 
            | (4U == (IData)(vlTOPp->top__DOT__u_io_register__DOT__r_state))) 
           | (5U == (IData)(vlTOPp->top__DOT__u_io_register__DOT__r_state))) 
          | (6U == (IData)(vlTOPp->top__DOT__u_io_register__DOT__r_state))) 
         | (7U == (IData)(vlTOPp->top__DOT__u_io_register__DOT__r_state)))) {
        if ((0U != (IData)(vlTOPp->top__DOT__u_io_register__DOT__r_state))) {
            vlTOPp->top__DOT__io_reg_r_data = ((1U 
                                                == (IData)(vlTOPp->top__DOT__u_io_register__DOT__r_state))
                                                ? (IData)(vlTOPp->top__DOT__u_io_register__DOT__JOY)
                                                : (
                                                   (2U 
                                                    == (IData)(vlTOPp->top__DOT__u_io_register__DOT__r_state))
                                                    ? (IData)(vlTOPp->top__DOT__u_io_register__DOT__div_r_data)
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlTOPp->top__DOT__u_io_register__DOT__r_state))
                                                     ? (IData)(vlTOPp->top__DOT__u_io_register__DOT__tima_r_data)
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlTOPp->top__DOT__u_io_register__DOT__r_state))
                                                      ? (IData)(vlTOPp->top__DOT__u_io_register__DOT__tma_r_data)
                                                      : 
                                                     ((5U 
                                                       == (IData)(vlTOPp->top__DOT__u_io_register__DOT__r_state))
                                                       ? (IData)(vlTOPp->top__DOT__u_io_register__DOT__tac_r_data)
                                                       : 
                                                      ((6U 
                                                        == (IData)(vlTOPp->top__DOT__u_io_register__DOT__r_state))
                                                        ? 
                                                       (0xe0U 
                                                        | (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg))
                                                        : (IData)(vlTOPp->top__DOT__u_io_register__DOT__ppu_io_r_data)))))));
        }
    } else {
        if ((8U == (IData)(vlTOPp->top__DOT__u_io_register__DOT__r_state))) {
            vlTOPp->top__DOT__io_reg_r_data = vlTOPp->top__DOT__u_io_register__DOT__dma_r_data;
        } else {
            if ((9U == (IData)(vlTOPp->top__DOT__u_io_register__DOT__r_state))) {
                vlTOPp->top__DOT__io_reg_r_data = (0xe0U 
                                                   | (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg));
            } else {
                if ((0xaU == (IData)(vlTOPp->top__DOT__u_io_register__DOT__r_state))) {
                    vlTOPp->top__DOT__io_reg_r_data 
                        = vlTOPp->top__DOT__u_io_register__DOT__stat_r_data;
                } else {
                    if ((0xbU == (IData)(vlTOPp->top__DOT__u_io_register__DOT__r_state))) {
                        vlTOPp->top__DOT__io_reg_r_data 
                            = vlTOPp->top__DOT__u_io_register__DOT__ly_r_data;
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__u_Memory_Interface__DOT__dma_main_req = 0U;
    vlTOPp->top__DOT__u_Memory_Interface__DOT__dma_oam_req = 0U;
    vlTOPp->top__DOT__u_Memory_Interface__DOT__ppu_vram_req = 0U;
    vlTOPp->top__DOT__u_Memory_Interface__DOT__ppu_oam_req = 0U;
    vlTOPp->top__DOT__u_Memory_Interface__DOT__cpu_main_req = 0U;
    vlTOPp->top__DOT__u_Memory_Interface__DOT__cpu_hram_req = 0U;
    vlTOPp->top__DOT__u_Memory_Interface__DOT__cpu_vram_req = 0U;
    vlTOPp->top__DOT__u_Memory_Interface__DOT__cpu_oam_req = 0U;
    vlTOPp->top__DOT__u_Memory_Interface__DOT__cpu_next = 0U;
    vlTOPp->top__DOT__u_Memory_Interface__DOT__ppu_next = 0U;
    vlTOPp->top__DOT__u_Memory_Interface__DOT__dma_next = 0U;
    vlTOPp->VRAM_ena = 0U;
    vlTOPp->VRAM_ad = 0U;
    vlTOPp->VRAM_r_ena = 0U;
    vlTOPp->VRAM_w_ena = 0U;
    vlTOPp->VRAM_w_data = 0U;
    vlTOPp->ROM_ena = 0U;
    vlTOPp->ROM_ad = 0U;
    vlTOPp->ROM_r_ena = 0U;
    vlTOPp->ROM_w_ena = 0U;
    vlTOPp->ROM_w_data = 0U;
    vlTOPp->OAM_ena = 0U;
    vlTOPp->OAM_ad = 0U;
    vlTOPp->OAM_r_ena = 0U;
    vlTOPp->OAM_w_ena = 0U;
    vlTOPp->OAM_w_data = 0U;
    vlTOPp->HRAM_ena = 0U;
    vlTOPp->HRAM_ad = 0U;
    vlTOPp->HRAM_r_ena = 0U;
    vlTOPp->HRAM_w_ena = 0U;
    vlTOPp->HRAM_w_data = 0U;
    vlTOPp->WRAM_ena = 0U;
    vlTOPp->WRAM_ad = 0U;
    vlTOPp->WRAM_r_ena = 0U;
    vlTOPp->WRAM_w_ena = 0U;
    vlTOPp->WRAM_w_data = 0U;
    vlTOPp->ERAM_ena = 0U;
    vlTOPp->ERAM_ad = 0U;
    vlTOPp->ERAM_r_ena = 0U;
    vlTOPp->ERAM_w_ena = 0U;
    vlTOPp->ERAM_w_data = 0U;
    vlTOPp->top__DOT__io_reg_ena = 0U;
    vlTOPp->top__DOT__io_reg_ad = 0U;
    vlTOPp->top__DOT__io_reg_r_ena = 0U;
    vlTOPp->top__DOT__io_reg_w_ena = 0U;
    vlTOPp->top__DOT__io_reg_w_data = 0U;
    vlTOPp->top__DOT__u_Memory_Interface__DOT__MBC1_0000_w_ena = 0U;
    vlTOPp->top__DOT__u_Memory_Interface__DOT__MBC1_2000_w_ena = 0U;
    vlTOPp->top__DOT__u_Memory_Interface__DOT__MBC1_4000_w_ena = 0U;
    vlTOPp->top__DOT__u_Memory_Interface__DOT__MBC1_6000_w_ena = 0U;
    vlTOPp->top__DOT__u_Memory_Interface__DOT__MBC1_0000_w_data = 0U;
    vlTOPp->top__DOT__u_Memory_Interface__DOT__MBC1_2000_w_data = 0U;
    vlTOPp->top__DOT__u_Memory_Interface__DOT__MBC1_4000_w_data = 0U;
    vlTOPp->top__DOT__u_Memory_Interface__DOT__MBC1_6000_w_data = 0U;
    vlTOPp->top__DOT__u_Memory_Interface__DOT__bank_mask = 0x7fU;
    vlTOPp->top__DOT__u_Memory_Interface__DOT__ram_mask = 3U;
    if ((0U == (IData)(vlTOPp->ROM_size))) {
        vlTOPp->top__DOT__u_Memory_Interface__DOT__bank_mask = 1U;
    } else {
        if ((1U == (IData)(vlTOPp->ROM_size))) {
            vlTOPp->top__DOT__u_Memory_Interface__DOT__bank_mask = 3U;
        } else {
            if ((2U == (IData)(vlTOPp->ROM_size))) {
                vlTOPp->top__DOT__u_Memory_Interface__DOT__bank_mask = 7U;
            } else {
                if ((3U == (IData)(vlTOPp->ROM_size))) {
                    vlTOPp->top__DOT__u_Memory_Interface__DOT__bank_mask = 0xfU;
                } else {
                    if ((4U == (IData)(vlTOPp->ROM_size))) {
                        vlTOPp->top__DOT__u_Memory_Interface__DOT__bank_mask = 0x1fU;
                    } else {
                        if ((5U == (IData)(vlTOPp->ROM_size))) {
                            vlTOPp->top__DOT__u_Memory_Interface__DOT__bank_mask = 0x3fU;
                        } else {
                            if ((6U == (IData)(vlTOPp->ROM_size))) {
                                vlTOPp->top__DOT__u_Memory_Interface__DOT__bank_mask = 0x7fU;
                            }
                        }
                    }
                }
            }
        }
    }
    if ((0U != (IData)(vlTOPp->RAM_size))) {
        if ((2U == (IData)(vlTOPp->RAM_size))) {
            vlTOPp->top__DOT__u_Memory_Interface__DOT__ram_mask = 0U;
        } else {
            if ((3U == (IData)(vlTOPp->RAM_size))) {
                vlTOPp->top__DOT__u_Memory_Interface__DOT__ram_mask = 3U;
            }
        }
    }
    if (((IData)(vlTOPp->top__DOT__cpu_mem_ena) & (
                                                   (0x7fffU 
                                                    < (IData)(vlTOPp->top__DOT__cpu_mem_ad)) 
                                                   & (0xa000U 
                                                      > (IData)(vlTOPp->top__DOT__cpu_mem_ad))))) {
        vlTOPp->top__DOT__u_Memory_Interface__DOT__cpu_vram_req = 1U;
    } else {
        if (((IData)(vlTOPp->top__DOT__cpu_mem_ena) 
             & ((0xfdffU < (IData)(vlTOPp->top__DOT__cpu_mem_ad)) 
                & (0xfea0U > (IData)(vlTOPp->top__DOT__cpu_mem_ad))))) {
            vlTOPp->top__DOT__u_Memory_Interface__DOT__cpu_oam_req = 1U;
        } else {
            if (((IData)(vlTOPp->top__DOT__cpu_mem_ena) 
                 & ((0xff7fU < (IData)(vlTOPp->top__DOT__cpu_mem_ad)) 
                    & (0xffffU > (IData)(vlTOPp->top__DOT__cpu_mem_ad))))) {
                vlTOPp->top__DOT__u_Memory_Interface__DOT__cpu_hram_req = 1U;
            } else {
                if (vlTOPp->top__DOT__cpu_mem_ena) {
                    vlTOPp->top__DOT__u_Memory_Interface__DOT__cpu_main_req = 1U;
                }
            }
        }
    }
    if (((IData)(vlTOPp->top__DOT__ppu_mem_ena) & (
                                                   (0x7fffU 
                                                    < (IData)(vlTOPp->top__DOT__ppu_mem_ad)) 
                                                   & (0xa000U 
                                                      > (IData)(vlTOPp->top__DOT__ppu_mem_ad))))) {
        vlTOPp->top__DOT__u_Memory_Interface__DOT__ppu_vram_req = 1U;
    } else {
        if (((IData)(vlTOPp->top__DOT__ppu_mem_ena) 
             & ((0xfdffU < (IData)(vlTOPp->top__DOT__ppu_mem_ad)) 
                & (0xfea0U > (IData)(vlTOPp->top__DOT__ppu_mem_ad))))) {
            vlTOPp->top__DOT__u_Memory_Interface__DOT__ppu_oam_req = 1U;
        }
    }
    if (((IData)(vlTOPp->top__DOT__dma_mem_ena) & (
                                                   (0xfdffU 
                                                    < (IData)(vlTOPp->top__DOT__dma_mem_ad)) 
                                                   & (0xfea0U 
                                                      > (IData)(vlTOPp->top__DOT__dma_mem_ad))))) {
        vlTOPp->top__DOT__u_Memory_Interface__DOT__dma_oam_req = 1U;
    } else {
        if (vlTOPp->top__DOT__dma_mem_ena) {
            vlTOPp->top__DOT__u_Memory_Interface__DOT__dma_main_req = 1U;
        }
    }
    if (vlTOPp->top__DOT__u_Memory_Interface__DOT__ppu_vram_req) {
        if (vlTOPp->top__DOT__ppu_mem_r_ena) {
            vlTOPp->VRAM_ena = 1U;
            vlTOPp->VRAM_r_ena = 1U;
            vlTOPp->VRAM_w_ena = 0U;
            vlTOPp->VRAM_ad = vlTOPp->top__DOT__ppu_mem_ad;
            vlTOPp->VRAM_w_data = 0xffU;
            vlTOPp->top__DOT__u_Memory_Interface__DOT__ppu_next = 1U;
        } else {
            if (vlTOPp->top__DOT__ppu_mem_w_ena) {
                vlTOPp->VRAM_ena = 1U;
                vlTOPp->VRAM_r_ena = 0U;
                vlTOPp->VRAM_w_ena = 1U;
                vlTOPp->VRAM_ad = vlTOPp->top__DOT__ppu_mem_ad;
                vlTOPp->VRAM_w_data = vlTOPp->top__DOT__ppu_mem_w_data;
                vlTOPp->top__DOT__u_Memory_Interface__DOT__ppu_next = 0U;
            } else {
                vlTOPp->VRAM_ena = 0U;
                vlTOPp->VRAM_r_ena = 0U;
                vlTOPp->VRAM_w_ena = 0U;
                vlTOPp->top__DOT__u_Memory_Interface__DOT__ppu_next = 0U;
            }
        }
    } else {
        if (vlTOPp->top__DOT__u_Memory_Interface__DOT__cpu_vram_req) {
            if (vlTOPp->top__DOT__cpu_mem_r_ena) {
                vlTOPp->VRAM_ena = 1U;
                vlTOPp->VRAM_r_ena = 1U;
                vlTOPp->VRAM_w_ena = 0U;
                vlTOPp->VRAM_ad = vlTOPp->top__DOT__cpu_mem_ad;
                vlTOPp->VRAM_w_data = 0xffU;
                vlTOPp->top__DOT__u_Memory_Interface__DOT__cpu_next = 1U;
            } else {
                if (vlTOPp->top__DOT__cpu_mem_w_ena) {
                    vlTOPp->VRAM_ena = 1U;
                    vlTOPp->VRAM_r_ena = 0U;
                    vlTOPp->VRAM_w_ena = 1U;
                    vlTOPp->VRAM_ad = vlTOPp->top__DOT__cpu_mem_ad;
                    vlTOPp->VRAM_w_data = vlTOPp->top__DOT__cpu_mem_w_data;
                    vlTOPp->top__DOT__u_Memory_Interface__DOT__cpu_next = 0U;
                } else {
                    vlTOPp->VRAM_ena = 0U;
                    vlTOPp->VRAM_r_ena = 0U;
                    vlTOPp->VRAM_w_ena = 0U;
                    vlTOPp->top__DOT__u_Memory_Interface__DOT__cpu_next = 0U;
                }
            }
        }
    }
    if (vlTOPp->top__DOT__u_Memory_Interface__DOT__cpu_hram_req) {
        if (vlTOPp->top__DOT__cpu_mem_r_ena) {
            vlTOPp->HRAM_ena = 1U;
            vlTOPp->HRAM_r_ena = 1U;
            vlTOPp->HRAM_w_ena = 0U;
            vlTOPp->HRAM_ad = vlTOPp->top__DOT__cpu_mem_ad;
            vlTOPp->HRAM_w_data = 0xffU;
            vlTOPp->top__DOT__u_Memory_Interface__DOT__cpu_next = 2U;
        } else {
            if (vlTOPp->top__DOT__cpu_mem_w_ena) {
                vlTOPp->HRAM_ena = 1U;
                vlTOPp->HRAM_r_ena = 0U;
                vlTOPp->HRAM_w_ena = 1U;
                vlTOPp->HRAM_ad = vlTOPp->top__DOT__cpu_mem_ad;
                vlTOPp->HRAM_w_data = vlTOPp->top__DOT__cpu_mem_w_data;
                vlTOPp->top__DOT__u_Memory_Interface__DOT__cpu_next = 0U;
            } else {
                vlTOPp->HRAM_ena = 0U;
                vlTOPp->HRAM_r_ena = 0U;
                vlTOPp->HRAM_w_ena = 0U;
                vlTOPp->top__DOT__u_Memory_Interface__DOT__cpu_next = 0U;
            }
        }
    }
    if (vlTOPp->top__DOT__u_Memory_Interface__DOT__dma_oam_req) {
        if (vlTOPp->top__DOT__dma_mem_r_ena) {
            vlTOPp->OAM_ena = 1U;
            vlTOPp->OAM_r_ena = 1U;
            vlTOPp->OAM_w_ena = 0U;
            vlTOPp->OAM_ad = vlTOPp->top__DOT__dma_mem_ad;
            vlTOPp->OAM_w_data = 0xffU;
            vlTOPp->top__DOT__u_Memory_Interface__DOT__dma_next = 1U;
        } else {
            if (vlTOPp->top__DOT__dma_mem_w_ena) {
                vlTOPp->OAM_ena = 1U;
                vlTOPp->OAM_r_ena = 0U;
                vlTOPp->OAM_w_ena = 1U;
                vlTOPp->OAM_ad = vlTOPp->top__DOT__dma_mem_ad;
                vlTOPp->OAM_w_data = vlTOPp->top__DOT__dma_mem_w_data;
                vlTOPp->top__DOT__u_Memory_Interface__DOT__dma_next = 0U;
            } else {
                vlTOPp->OAM_ena = 0U;
                vlTOPp->OAM_r_ena = 0U;
                vlTOPp->OAM_w_ena = 0U;
                vlTOPp->top__DOT__u_Memory_Interface__DOT__dma_next = 0U;
            }
        }
    } else {
        if (vlTOPp->top__DOT__u_Memory_Interface__DOT__ppu_oam_req) {
            if (vlTOPp->top__DOT__ppu_mem_r_ena) {
                vlTOPp->OAM_ena = 1U;
                vlTOPp->OAM_r_ena = 1U;
                vlTOPp->OAM_w_ena = 0U;
                vlTOPp->OAM_ad = vlTOPp->top__DOT__ppu_mem_ad;
                vlTOPp->OAM_w_data = 0xffU;
                vlTOPp->top__DOT__u_Memory_Interface__DOT__ppu_next = 2U;
            } else {
                if (vlTOPp->top__DOT__ppu_mem_w_ena) {
                    vlTOPp->OAM_ena = 1U;
                    vlTOPp->OAM_r_ena = 0U;
                    vlTOPp->OAM_w_ena = 1U;
                    vlTOPp->OAM_ad = vlTOPp->top__DOT__ppu_mem_ad;
                    vlTOPp->OAM_w_data = vlTOPp->top__DOT__ppu_mem_w_data;
                    vlTOPp->top__DOT__u_Memory_Interface__DOT__ppu_next = 0U;
                } else {
                    vlTOPp->OAM_ena = 0U;
                    vlTOPp->OAM_r_ena = 0U;
                    vlTOPp->OAM_w_ena = 0U;
                    vlTOPp->top__DOT__u_Memory_Interface__DOT__ppu_next = 0U;
                }
            }
        } else {
            if (vlTOPp->top__DOT__u_Memory_Interface__DOT__cpu_oam_req) {
                if (vlTOPp->top__DOT__cpu_mem_r_ena) {
                    vlTOPp->OAM_ena = 1U;
                    vlTOPp->OAM_r_ena = 1U;
                    vlTOPp->OAM_w_ena = 0U;
                    vlTOPp->OAM_ad = vlTOPp->top__DOT__cpu_mem_ad;
                    vlTOPp->OAM_w_data = 0xffU;
                    vlTOPp->top__DOT__u_Memory_Interface__DOT__cpu_next = 3U;
                } else {
                    if (vlTOPp->top__DOT__cpu_mem_w_ena) {
                        vlTOPp->OAM_ena = 1U;
                        vlTOPp->OAM_r_ena = 0U;
                        vlTOPp->OAM_w_ena = 1U;
                        vlTOPp->OAM_ad = vlTOPp->top__DOT__cpu_mem_ad;
                        vlTOPp->OAM_w_data = vlTOPp->top__DOT__cpu_mem_w_data;
                        vlTOPp->top__DOT__u_Memory_Interface__DOT__cpu_next = 0U;
                    } else {
                        vlTOPp->OAM_ena = 0U;
                        vlTOPp->OAM_r_ena = 0U;
                        vlTOPp->OAM_w_ena = 0U;
                        vlTOPp->top__DOT__u_Memory_Interface__DOT__cpu_next = 0U;
                    }
                }
            }
        }
    }
    if ((1U == (IData)(vlTOPp->MBC_version))) {
        if (vlTOPp->top__DOT__u_Memory_Interface__DOT__dma_main_req) {
            if (vlTOPp->top__DOT__dma_mem_r_ena) {
                if ((0x3fffU >= (IData)(vlTOPp->top__DOT__dma_mem_ad))) {
                    if (vlTOPp->top__DOT__u_Memory_Interface__DOT__MBC1_6000_7FFF) {
                        if (vlTOPp->top__DOT__u_Memory_Interface__DOT__MBC1_6000_7FFF) {
                            vlTOPp->ROM_ena = 1U;
                            vlTOPp->ROM_r_ena = 1U;
                            vlTOPp->ROM_w_ena = 0U;
                            vlTOPp->ROM_ad = ((((IData)(vlTOPp->top__DOT__u_Memory_Interface__DOT__bank_mask) 
                                                << 0xeU) 
                                               & ((IData)(vlTOPp->top__DOT__u_Memory_Interface__DOT__MBC1_4000_5FFF) 
                                                  << 0x13U)) 
                                              | (0x3fffU 
                                                 & (IData)(vlTOPp->top__DOT__dma_mem_ad)));
                            vlTOPp->ROM_w_data = 0xffU;
                            vlTOPp->top__DOT__u_Memory_Interface__DOT__dma_next = 2U;
                        }
                    } else {
                        vlTOPp->ROM_ena = 1U;
                        vlTOPp->ROM_r_ena = 1U;
                        vlTOPp->ROM_w_ena = 0U;
                        vlTOPp->ROM_ad = (0x3fffU & (IData)(vlTOPp->top__DOT__dma_mem_ad));
                        vlTOPp->ROM_w_data = 0xffU;
                        vlTOPp->top__DOT__u_Memory_Interface__DOT__dma_next = 2U;
                    }
                } else {
                    if (((0x4000U <= (IData)(vlTOPp->top__DOT__dma_mem_ad)) 
                         & (0x7fffU >= (IData)(vlTOPp->top__DOT__dma_mem_ad)))) {
                        if (vlTOPp->top__DOT__u_Memory_Interface__DOT__MBC1_6000_7FFF) {
                            if (vlTOPp->top__DOT__u_Memory_Interface__DOT__MBC1_6000_7FFF) {
                                vlTOPp->ROM_ena = 1U;
                                vlTOPp->ROM_r_ena = 1U;
                                vlTOPp->ROM_w_ena = 0U;
                                vlTOPp->ROM_ad = ((
                                                   ((IData)(vlTOPp->top__DOT__u_Memory_Interface__DOT__bank_mask) 
                                                    << 0xeU) 
                                                   & (((IData)(vlTOPp->top__DOT__u_Memory_Interface__DOT__MBC1_4000_5FFF) 
                                                       << 0x13U) 
                                                      | ((IData)(vlTOPp->top__DOT__u_Memory_Interface__DOT__MBC1_2000_3FFF) 
                                                         << 0xeU))) 
                                                  | (0x3fffU 
                                                     & (IData)(vlTOPp->top__DOT__dma_mem_ad)));
                                vlTOPp->ROM_w_data = 0xffU;
                                vlTOPp->top__DOT__u_Memory_Interface__DOT__dma_next = 2U;
                            }
                        } else {
                            vlTOPp->ROM_ena = 1U;
                            vlTOPp->ROM_r_ena = 1U;
                            vlTOPp->ROM_w_ena = 0U;
                            vlTOPp->ROM_ad = ((((IData)(vlTOPp->top__DOT__u_Memory_Interface__DOT__bank_mask) 
                                                << 0xeU) 
                                               & (((IData)(vlTOPp->top__DOT__u_Memory_Interface__DOT__MBC1_4000_5FFF) 
                                                   << 0x13U) 
                                                  | ((IData)(vlTOPp->top__DOT__u_Memory_Interface__DOT__MBC1_2000_3FFF) 
                                                     << 0xeU))) 
                                              | (0x3fffU 
                                                 & (IData)(vlTOPp->top__DOT__dma_mem_ad)));
                            vlTOPp->ROM_w_data = 0xffU;
                            vlTOPp->top__DOT__u_Memory_Interface__DOT__dma_next = 2U;
                        }
                    } else {
                        if (((0xa000U <= (IData)(vlTOPp->top__DOT__dma_mem_ad)) 
                             & (0xbfffU >= (IData)(vlTOPp->top__DOT__dma_mem_ad)))) {
                            if (((0xaU == (0xfU & (IData)(vlTOPp->top__DOT__u_Memory_Interface__DOT__MBC1_0000_1FFF))) 
                                 & (0U != (IData)(vlTOPp->RAM_size)))) {
                                if (vlTOPp->top__DOT__u_Memory_Interface__DOT__MBC1_6000_7FFF) {
                                    if (vlTOPp->top__DOT__u_Memory_Interface__DOT__MBC1_6000_7FFF) {
                                        vlTOPp->ERAM_ena = 1U;
                                        vlTOPp->ERAM_r_ena = 1U;
                                        vlTOPp->ERAM_w_ena = 0U;
                                        vlTOPp->ERAM_ad 
                                            = ((((IData)(vlTOPp->top__DOT__u_Memory_Interface__DOT__ram_mask) 
                                                 & (IData)(vlTOPp->top__DOT__u_Memory_Interface__DOT__MBC1_4000_5FFF)) 
                                                << 0xdU) 
                                               | (0x1fffU 
                                                  & (IData)(vlTOPp->top__DOT__dma_mem_ad)));
                                        vlTOPp->ERAM_w_data = 0xffU;
                                        vlTOPp->top__DOT__u_Memory_Interface__DOT__dma_next = 3U;
                                    }
                                } else {
                                    vlTOPp->ERAM_ena = 1U;
                                    vlTOPp->ERAM_r_ena = 1U;
                                    vlTOPp->ERAM_w_ena = 0U;
                                    vlTOPp->ERAM_ad 
                                        = (0x1fffU 
                                           & (IData)(vlTOPp->top__DOT__dma_mem_ad));
                                    vlTOPp->ERAM_w_data = 0xffU;
                                    vlTOPp->top__DOT__u_Memory_Interface__DOT__dma_next = 3U;
                                }
                            }
                        } else {
                            if (((0xc000U <= (IData)(vlTOPp->top__DOT__dma_mem_ad)) 
                                 & (0xdfffU >= (IData)(vlTOPp->top__DOT__dma_mem_ad)))) {
                                vlTOPp->WRAM_ena = 1U;
                                vlTOPp->WRAM_r_ena = 1U;
                                vlTOPp->WRAM_w_ena = 0U;
                                vlTOPp->WRAM_ad = vlTOPp->top__DOT__dma_mem_ad;
                                vlTOPp->WRAM_w_data = 0xffU;
                                vlTOPp->top__DOT__u_Memory_Interface__DOT__dma_next = 4U;
                            } else {
                                if (((0xe000U <= (IData)(vlTOPp->top__DOT__dma_mem_ad)) 
                                     & (0xfdffU >= (IData)(vlTOPp->top__DOT__dma_mem_ad)))) {
                                    vlTOPp->WRAM_ena = 1U;
                                    vlTOPp->WRAM_r_ena = 1U;
                                    vlTOPp->WRAM_w_ena = 0U;
                                    vlTOPp->WRAM_ad 
                                        = (0xffffU 
                                           & ((IData)(vlTOPp->top__DOT__dma_mem_ad) 
                                              - (IData)(0x2000U)));
                                    vlTOPp->WRAM_w_data = 0xffU;
                                    vlTOPp->top__DOT__u_Memory_Interface__DOT__dma_next = 4U;
                                } else {
                                    if (((0xff00U <= (IData)(vlTOPp->top__DOT__dma_mem_ad)) 
                                         & (0xff7fU 
                                            >= (IData)(vlTOPp->top__DOT__dma_mem_ad)))) {
                                        vlTOPp->top__DOT__io_reg_ena = 1U;
                                        vlTOPp->top__DOT__io_reg_r_ena = 1U;
                                        vlTOPp->top__DOT__io_reg_w_ena = 0U;
                                        vlTOPp->top__DOT__io_reg_ad 
                                            = vlTOPp->top__DOT__dma_mem_ad;
                                        vlTOPp->top__DOT__io_reg_w_data = 0xffU;
                                        vlTOPp->top__DOT__u_Memory_Interface__DOT__dma_next = 5U;
                                    } else {
                                        if ((0xffffU 
                                             == (IData)(vlTOPp->top__DOT__dma_mem_ad))) {
                                            vlTOPp->top__DOT__io_reg_ena = 1U;
                                            vlTOPp->top__DOT__io_reg_r_ena = 1U;
                                            vlTOPp->top__DOT__io_reg_w_ena = 0U;
                                            vlTOPp->top__DOT__io_reg_ad 
                                                = vlTOPp->top__DOT__dma_mem_ad;
                                            vlTOPp->top__DOT__io_reg_w_data = 0xffU;
                                            vlTOPp->top__DOT__u_Memory_Interface__DOT__dma_next = 5U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (vlTOPp->top__DOT__u_Memory_Interface__DOT__cpu_main_req) {
                if (vlTOPp->top__DOT__cpu_mem_r_ena) {
                    if ((0x3fffU >= (IData)(vlTOPp->top__DOT__cpu_mem_ad))) {
                        if (vlTOPp->top__DOT__u_Memory_Interface__DOT__MBC1_6000_7FFF) {
                            if (vlTOPp->top__DOT__u_Memory_Interface__DOT__MBC1_6000_7FFF) {
                                vlTOPp->ROM_ena = 1U;
                                vlTOPp->ROM_r_ena = 1U;
                                vlTOPp->ROM_w_ena = 0U;
                                vlTOPp->ROM_ad = ((
                                                   ((IData)(vlTOPp->top__DOT__u_Memory_Interface__DOT__bank_mask) 
                                                    << 0xeU) 
                                                   & ((IData)(vlTOPp->top__DOT__u_Memory_Interface__DOT__MBC1_4000_5FFF) 
                                                      << 0x13U)) 
                                                  | (0x3fffU 
                                                     & (IData)(vlTOPp->top__DOT__cpu_mem_ad)));
                                vlTOPp->ROM_w_data = 0xffU;
                                vlTOPp->top__DOT__u_Memory_Interface__DOT__cpu_next = 4U;
                            }
                        } else {
                            vlTOPp->ROM_ena = 1U;
                            vlTOPp->ROM_r_ena = 1U;
                            vlTOPp->ROM_w_ena = 0U;
                            vlTOPp->ROM_ad = (0x3fffU 
                                              & (IData)(vlTOPp->top__DOT__cpu_mem_ad));
                            vlTOPp->ROM_w_data = 0xffU;
                            vlTOPp->top__DOT__u_Memory_Interface__DOT__cpu_next = 4U;
                        }
                    } else {
                        if (((0x4000U <= (IData)(vlTOPp->top__DOT__cpu_mem_ad)) 
                             & (0x7fffU >= (IData)(vlTOPp->top__DOT__cpu_mem_ad)))) {
                            if (vlTOPp->top__DOT__u_Memory_Interface__DOT__MBC1_6000_7FFF) {
                                if (vlTOPp->top__DOT__u_Memory_Interface__DOT__MBC1_6000_7FFF) {
                                    vlTOPp->ROM_ena = 1U;
                                    vlTOPp->ROM_r_ena = 1U;
                                    vlTOPp->ROM_w_ena = 0U;
                                    vlTOPp->ROM_ad 
                                        = ((((IData)(vlTOPp->top__DOT__u_Memory_Interface__DOT__bank_mask) 
                                             << 0xeU) 
                                            & (((IData)(vlTOPp->top__DOT__u_Memory_Interface__DOT__MBC1_4000_5FFF) 
                                                << 0x13U) 
                                               | ((IData)(vlTOPp->top__DOT__u_Memory_Interface__DOT__MBC1_2000_3FFF) 
                                                  << 0xeU))) 
                                           | (0x3fffU 
                                              & (IData)(vlTOPp->top__DOT__cpu_mem_ad)));
                                    vlTOPp->ROM_w_data = 0xffU;
                                    vlTOPp->top__DOT__u_Memory_Interface__DOT__cpu_next = 4U;
                                }
                            } else {
                                vlTOPp->ROM_ena = 1U;
                                vlTOPp->ROM_r_ena = 1U;
                                vlTOPp->ROM_w_ena = 0U;
                                vlTOPp->ROM_ad = ((
                                                   ((IData)(vlTOPp->top__DOT__u_Memory_Interface__DOT__bank_mask) 
                                                    << 0xeU) 
                                                   & (((IData)(vlTOPp->top__DOT__u_Memory_Interface__DOT__MBC1_4000_5FFF) 
                                                       << 0x13U) 
                                                      | ((IData)(vlTOPp->top__DOT__u_Memory_Interface__DOT__MBC1_2000_3FFF) 
                                                         << 0xeU))) 
                                                  | (0x3fffU 
                                                     & (IData)(vlTOPp->top__DOT__cpu_mem_ad)));
                                vlTOPp->ROM_w_data = 0xffU;
                                vlTOPp->top__DOT__u_Memory_Interface__DOT__cpu_next = 4U;
                            }
                        } else {
                            if (((0xa000U <= (IData)(vlTOPp->top__DOT__cpu_mem_ad)) 
                                 & (0xbfffU >= (IData)(vlTOPp->top__DOT__cpu_mem_ad)))) {
                                if (((0xaU == (0xfU 
                                               & (IData)(vlTOPp->top__DOT__u_Memory_Interface__DOT__MBC1_0000_1FFF))) 
                                     & (0U != (IData)(vlTOPp->RAM_size)))) {
                                    if (vlTOPp->top__DOT__u_Memory_Interface__DOT__MBC1_6000_7FFF) {
                                        if (vlTOPp->top__DOT__u_Memory_Interface__DOT__MBC1_6000_7FFF) {
                                            vlTOPp->ERAM_ena = 1U;
                                            vlTOPp->ERAM_r_ena = 1U;
                                            vlTOPp->ERAM_w_ena = 0U;
                                            vlTOPp->ERAM_ad 
                                                = (
                                                   (((IData)(vlTOPp->top__DOT__u_Memory_Interface__DOT__ram_mask) 
                                                     & (IData)(vlTOPp->top__DOT__u_Memory_Interface__DOT__MBC1_4000_5FFF)) 
                                                    << 0xdU) 
                                                   | (0x1fffU 
                                                      & (IData)(vlTOPp->top__DOT__cpu_mem_ad)));
                                            vlTOPp->ERAM_w_data = 0xffU;
                                            vlTOPp->top__DOT__u_Memory_Interface__DOT__cpu_next = 5U;
                                        }
                                    } else {
                                        vlTOPp->ERAM_ena = 1U;
                                        vlTOPp->ERAM_r_ena = 1U;
                                        vlTOPp->ERAM_w_ena = 0U;
                                        vlTOPp->ERAM_ad 
                                            = (0x1fffU 
                                               & (IData)(vlTOPp->top__DOT__cpu_mem_ad));
                                        vlTOPp->ERAM_w_data = 0xffU;
                                        vlTOPp->top__DOT__u_Memory_Interface__DOT__cpu_next = 5U;
                                    }
                                }
                            } else {
                                if (((0xc000U <= (IData)(vlTOPp->top__DOT__cpu_mem_ad)) 
                                     & (0xdfffU >= (IData)(vlTOPp->top__DOT__cpu_mem_ad)))) {
                                    vlTOPp->WRAM_ena = 1U;
                                    vlTOPp->WRAM_r_ena = 1U;
                                    vlTOPp->WRAM_w_ena = 0U;
                                    vlTOPp->WRAM_ad 
                                        = vlTOPp->top__DOT__cpu_mem_ad;
                                    vlTOPp->top__DOT__u_Memory_Interface__DOT__cpu_next = 6U;
                                } else {
                                    if (((0xe000U <= (IData)(vlTOPp->top__DOT__cpu_mem_ad)) 
                                         & (0xfdffU 
                                            >= (IData)(vlTOPp->top__DOT__cpu_mem_ad)))) {
                                        vlTOPp->WRAM_ena = 1U;
                                        vlTOPp->WRAM_r_ena = 1U;
                                        vlTOPp->WRAM_w_ena = 0U;
                                        vlTOPp->WRAM_ad 
                                            = (0xffffU 
                                               & ((IData)(vlTOPp->top__DOT__cpu_mem_ad) 
                                                  - (IData)(0x2000U)));
                                        vlTOPp->top__DOT__u_Memory_Interface__DOT__cpu_next = 6U;
                                    } else {
                                        if (((0xff00U 
                                              <= (IData)(vlTOPp->top__DOT__cpu_mem_ad)) 
                                             & (0xff7fU 
                                                >= (IData)(vlTOPp->top__DOT__cpu_mem_ad)))) {
                                            vlTOPp->top__DOT__io_reg_ena = 1U;
                                            vlTOPp->top__DOT__io_reg_r_ena = 1U;
                                            vlTOPp->top__DOT__io_reg_w_ena = 0U;
                                            vlTOPp->top__DOT__io_reg_ad 
                                                = vlTOPp->top__DOT__cpu_mem_ad;
                                            vlTOPp->top__DOT__u_Memory_Interface__DOT__cpu_next = 7U;
                                        } else {
                                            if ((0xffffU 
                                                 == (IData)(vlTOPp->top__DOT__cpu_mem_ad))) {
                                                vlTOPp->top__DOT__io_reg_ena = 1U;
                                                vlTOPp->top__DOT__io_reg_r_ena = 1U;
                                                vlTOPp->top__DOT__io_reg_w_ena = 0U;
                                                vlTOPp->top__DOT__io_reg_ad 
                                                    = vlTOPp->top__DOT__cpu_mem_ad;
                                                vlTOPp->top__DOT__u_Memory_Interface__DOT__cpu_next = 7U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (vlTOPp->top__DOT__cpu_mem_w_ena) {
                        if (((((((((0x1fffU >= (IData)(vlTOPp->top__DOT__cpu_mem_ad)) 
                                   | ((0x2000U <= (IData)(vlTOPp->top__DOT__cpu_mem_ad)) 
                                      & (0x3fffU >= (IData)(vlTOPp->top__DOT__cpu_mem_ad)))) 
                                  | ((0x4000U <= (IData)(vlTOPp->top__DOT__cpu_mem_ad)) 
                                     & (0x5fffU >= (IData)(vlTOPp->top__DOT__cpu_mem_ad)))) 
                                 | ((0x6000U <= (IData)(vlTOPp->top__DOT__cpu_mem_ad)) 
                                    & (0x7fffU >= (IData)(vlTOPp->top__DOT__cpu_mem_ad)))) 
                                | ((0xa000U <= (IData)(vlTOPp->top__DOT__cpu_mem_ad)) 
                                   & (0xbfffU >= (IData)(vlTOPp->top__DOT__cpu_mem_ad)))) 
                               | ((0xc000U <= (IData)(vlTOPp->top__DOT__cpu_mem_ad)) 
                                  & (0xdfffU >= (IData)(vlTOPp->top__DOT__cpu_mem_ad)))) 
                              | ((0xe000U <= (IData)(vlTOPp->top__DOT__cpu_mem_ad)) 
                                 & (0xfdffU >= (IData)(vlTOPp->top__DOT__cpu_mem_ad)))) 
                             | ((0xff00U <= (IData)(vlTOPp->top__DOT__cpu_mem_ad)) 
                                & (0xff7fU >= (IData)(vlTOPp->top__DOT__cpu_mem_ad))))) {
                            if ((0x1fffU >= (IData)(vlTOPp->top__DOT__cpu_mem_ad))) {
                                vlTOPp->top__DOT__u_Memory_Interface__DOT__MBC1_0000_w_ena = 1U;
                                vlTOPp->top__DOT__u_Memory_Interface__DOT__MBC1_0000_w_data 
                                    = vlTOPp->top__DOT__cpu_mem_w_data;
                            } else {
                                if (((0x2000U <= (IData)(vlTOPp->top__DOT__cpu_mem_ad)) 
                                     & (0x3fffU >= (IData)(vlTOPp->top__DOT__cpu_mem_ad)))) {
                                    vlTOPp->top__DOT__u_Memory_Interface__DOT__MBC1_2000_w_ena = 1U;
                                    vlTOPp->top__DOT__u_Memory_Interface__DOT__MBC1_2000_w_data 
                                        = (0x1fU & (IData)(vlTOPp->top__DOT__cpu_mem_w_data));
                                } else {
                                    if (((0x4000U <= (IData)(vlTOPp->top__DOT__cpu_mem_ad)) 
                                         & (0x5fffU 
                                            >= (IData)(vlTOPp->top__DOT__cpu_mem_ad)))) {
                                        vlTOPp->top__DOT__u_Memory_Interface__DOT__MBC1_4000_w_ena = 1U;
                                        vlTOPp->top__DOT__u_Memory_Interface__DOT__MBC1_4000_w_data 
                                            = (3U & (IData)(vlTOPp->top__DOT__cpu_mem_w_data));
                                    } else {
                                        if (((0x6000U 
                                              <= (IData)(vlTOPp->top__DOT__cpu_mem_ad)) 
                                             & (0x7fffU 
                                                >= (IData)(vlTOPp->top__DOT__cpu_mem_ad)))) {
                                            vlTOPp->top__DOT__u_Memory_Interface__DOT__MBC1_6000_w_ena = 1U;
                                            vlTOPp->top__DOT__u_Memory_Interface__DOT__MBC1_6000_w_data 
                                                = (1U 
                                                   & (IData)(vlTOPp->top__DOT__cpu_mem_w_data));
                                        } else {
                                            if (((0xa000U 
                                                  <= (IData)(vlTOPp->top__DOT__cpu_mem_ad)) 
                                                 & (0xbfffU 
                                                    >= (IData)(vlTOPp->top__DOT__cpu_mem_ad)))) {
                                                if (
                                                    ((0xaU 
                                                      == 
                                                      (0xfU 
                                                       & (IData)(vlTOPp->top__DOT__u_Memory_Interface__DOT__MBC1_0000_1FFF))) 
                                                     & (0U 
                                                        != (IData)(vlTOPp->RAM_size)))) {
                                                    if (vlTOPp->top__DOT__u_Memory_Interface__DOT__MBC1_6000_7FFF) {
                                                        if (vlTOPp->top__DOT__u_Memory_Interface__DOT__MBC1_6000_7FFF) {
                                                            vlTOPp->ERAM_ena = 1U;
                                                            vlTOPp->ERAM_r_ena = 0U;
                                                            vlTOPp->ERAM_w_ena = 1U;
                                                            vlTOPp->ERAM_ad 
                                                                = 
                                                                ((((IData)(vlTOPp->top__DOT__u_Memory_Interface__DOT__ram_mask) 
                                                                   & (IData)(vlTOPp->top__DOT__u_Memory_Interface__DOT__MBC1_4000_5FFF)) 
                                                                  << 0xdU) 
                                                                 | (0x1fffU 
                                                                    & (IData)(vlTOPp->top__DOT__cpu_mem_ad)));
                                                            vlTOPp->ERAM_w_data 
                                                                = vlTOPp->top__DOT__cpu_mem_w_data;
                                                            vlTOPp->top__DOT__u_Memory_Interface__DOT__cpu_next = 0U;
                                                        }
                                                    } else {
                                                        vlTOPp->ERAM_ena = 1U;
                                                        vlTOPp->ERAM_r_ena = 0U;
                                                        vlTOPp->ERAM_w_ena = 1U;
                                                        vlTOPp->ERAM_ad 
                                                            = 
                                                            (0x1fffU 
                                                             & (IData)(vlTOPp->top__DOT__cpu_mem_ad));
                                                        vlTOPp->ERAM_w_data 
                                                            = vlTOPp->top__DOT__cpu_mem_w_data;
                                                        vlTOPp->top__DOT__u_Memory_Interface__DOT__cpu_next = 0U;
                                                    }
                                                }
                                            } else {
                                                if (
                                                    ((0xc000U 
                                                      <= (IData)(vlTOPp->top__DOT__cpu_mem_ad)) 
                                                     & (0xdfffU 
                                                        >= (IData)(vlTOPp->top__DOT__cpu_mem_ad)))) {
                                                    vlTOPp->WRAM_ena = 1U;
                                                    vlTOPp->WRAM_r_ena = 0U;
                                                    vlTOPp->WRAM_w_ena = 1U;
                                                    vlTOPp->WRAM_ad 
                                                        = vlTOPp->top__DOT__cpu_mem_ad;
                                                    vlTOPp->WRAM_w_data 
                                                        = vlTOPp->top__DOT__cpu_mem_w_data;
                                                    vlTOPp->top__DOT__u_Memory_Interface__DOT__cpu_next = 0U;
                                                } else {
                                                    if (
                                                        ((0xe000U 
                                                          <= (IData)(vlTOPp->top__DOT__cpu_mem_ad)) 
                                                         & (0xfdffU 
                                                            >= (IData)(vlTOPp->top__DOT__cpu_mem_ad)))) {
                                                        vlTOPp->WRAM_ena = 1U;
                                                        vlTOPp->WRAM_r_ena = 0U;
                                                        vlTOPp->WRAM_w_ena = 1U;
                                                        vlTOPp->WRAM_ad 
                                                            = 
                                                            (0xffffU 
                                                             & ((IData)(vlTOPp->top__DOT__cpu_mem_ad) 
                                                                - (IData)(0x2000U)));
                                                        vlTOPp->WRAM_w_data 
                                                            = vlTOPp->top__DOT__cpu_mem_w_data;
                                                        vlTOPp->top__DOT__u_Memory_Interface__DOT__cpu_next = 0U;
                                                    } else {
                                                        vlTOPp->top__DOT__io_reg_ena = 1U;
                                                        vlTOPp->top__DOT__io_reg_r_ena = 0U;
                                                        vlTOPp->top__DOT__io_reg_w_ena = 1U;
                                                        vlTOPp->top__DOT__io_reg_ad 
                                                            = vlTOPp->top__DOT__cpu_mem_ad;
                                                        vlTOPp->top__DOT__io_reg_w_data 
                                                            = vlTOPp->top__DOT__cpu_mem_w_data;
                                                        vlTOPp->top__DOT__u_Memory_Interface__DOT__cpu_next = 0U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            if ((0xffffU == (IData)(vlTOPp->top__DOT__cpu_mem_ad))) {
                                vlTOPp->top__DOT__io_reg_ena = 1U;
                                vlTOPp->top__DOT__io_reg_r_ena = 0U;
                                vlTOPp->top__DOT__io_reg_w_ena = 1U;
                                vlTOPp->top__DOT__io_reg_ad 
                                    = vlTOPp->top__DOT__cpu_mem_ad;
                                vlTOPp->top__DOT__io_reg_w_data 
                                    = vlTOPp->top__DOT__cpu_mem_w_data;
                                vlTOPp->top__DOT__u_Memory_Interface__DOT__cpu_next = 0U;
                            }
                        }
                    }
                }
            }
        }
    }
    if ((0U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__alu_op_8))) {
        vlTOPp->top__DOT__u_CPU__DOT__alu_result_8 
            = (0xffU & (((IData)(vlTOPp->top__DOT__u_CPU__DOT__a_8) 
                         + (IData)(vlTOPp->top__DOT__u_CPU__DOT__b_8)) 
                        + (IData)(vlTOPp->top__DOT__u_CPU__DOT__cin_8)));
        vlTOPp->top__DOT__u_CPU__DOT__ins00__DOT__tem9 
            = (0x1ffU & (((IData)(vlTOPp->top__DOT__u_CPU__DOT__a_8) 
                          + (IData)(vlTOPp->top__DOT__u_CPU__DOT__b_8)) 
                         + (IData)(vlTOPp->top__DOT__u_CPU__DOT__cin_8)));
        vlTOPp->top__DOT__u_CPU__DOT__ins00__DOT__tem5 
            = (0x1fU & (((0xfU & (IData)(vlTOPp->top__DOT__u_CPU__DOT__a_8)) 
                         + (0xfU & (IData)(vlTOPp->top__DOT__u_CPU__DOT__b_8))) 
                        + (IData)(vlTOPp->top__DOT__u_CPU__DOT__cin_8)));
        vlTOPp->top__DOT__u_CPU__DOT__flag_8 = ((0xeU 
                                                 & (IData)(vlTOPp->top__DOT__u_CPU__DOT__flag_8)) 
                                                | (1U 
                                                   & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__ins00__DOT__tem9) 
                                                      >> 8U)));
        vlTOPp->top__DOT__u_CPU__DOT__flag_8 = ((0xdU 
                                                 & (IData)(vlTOPp->top__DOT__u_CPU__DOT__flag_8)) 
                                                | (2U 
                                                   & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__ins00__DOT__tem5) 
                                                      >> 3U)));
        vlTOPp->top__DOT__u_CPU__DOT__flag_8 = (0xbU 
                                                & (IData)(vlTOPp->top__DOT__u_CPU__DOT__flag_8));
        vlTOPp->top__DOT__u_CPU__DOT__flag_8 = ((7U 
                                                 & (IData)(vlTOPp->top__DOT__u_CPU__DOT__flag_8)) 
                                                | ((0U 
                                                    == (IData)(vlTOPp->top__DOT__u_CPU__DOT__alu_result_8)) 
                                                   << 3U));
    } else {
        if ((1U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__alu_op_8))) {
            vlTOPp->top__DOT__u_CPU__DOT__alu_result_8 
                = (0xffU & (((IData)(vlTOPp->top__DOT__u_CPU__DOT__a_8) 
                             - (IData)(vlTOPp->top__DOT__u_CPU__DOT__b_8)) 
                            - (IData)(vlTOPp->top__DOT__u_CPU__DOT__cin_8)));
            vlTOPp->top__DOT__u_CPU__DOT__ins00__DOT__tem9 
                = (0x1ffU & (((IData)(vlTOPp->top__DOT__u_CPU__DOT__a_8) 
                              - (IData)(vlTOPp->top__DOT__u_CPU__DOT__b_8)) 
                             - (IData)(vlTOPp->top__DOT__u_CPU__DOT__cin_8)));
            vlTOPp->top__DOT__u_CPU__DOT__ins00__DOT__tem5 
                = (0x1fU & (((0xfU & (IData)(vlTOPp->top__DOT__u_CPU__DOT__a_8)) 
                             - (0xfU & (IData)(vlTOPp->top__DOT__u_CPU__DOT__b_8))) 
                            - (IData)(vlTOPp->top__DOT__u_CPU__DOT__cin_8)));
            vlTOPp->top__DOT__u_CPU__DOT__flag_8 = 
                ((0xeU & (IData)(vlTOPp->top__DOT__u_CPU__DOT__flag_8)) 
                 | (1U & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__ins00__DOT__tem9) 
                          >> 8U)));
            vlTOPp->top__DOT__u_CPU__DOT__flag_8 = 
                ((0xdU & (IData)(vlTOPp->top__DOT__u_CPU__DOT__flag_8)) 
                 | (2U & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__ins00__DOT__tem5) 
                          >> 3U)));
            vlTOPp->top__DOT__u_CPU__DOT__flag_8 = 
                (4U | (IData)(vlTOPp->top__DOT__u_CPU__DOT__flag_8));
            vlTOPp->top__DOT__u_CPU__DOT__flag_8 = 
                ((7U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__flag_8)) 
                 | ((0U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__alu_result_8)) 
                    << 3U));
        } else {
            if ((2U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__alu_op_8))) {
                vlTOPp->top__DOT__u_CPU__DOT__alu_result_8 
                    = ((IData)(vlTOPp->top__DOT__u_CPU__DOT__a_8) 
                       & (IData)(vlTOPp->top__DOT__u_CPU__DOT__b_8));
                vlTOPp->top__DOT__u_CPU__DOT__flag_8 
                    = (0xeU & (IData)(vlTOPp->top__DOT__u_CPU__DOT__flag_8));
                vlTOPp->top__DOT__u_CPU__DOT__flag_8 
                    = (2U | (IData)(vlTOPp->top__DOT__u_CPU__DOT__flag_8));
                vlTOPp->top__DOT__u_CPU__DOT__flag_8 
                    = (0xbU & (IData)(vlTOPp->top__DOT__u_CPU__DOT__flag_8));
                vlTOPp->top__DOT__u_CPU__DOT__flag_8 
                    = ((7U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__flag_8)) 
                       | ((0U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__alu_result_8)) 
                          << 3U));
            } else {
                if ((3U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__alu_op_8))) {
                    vlTOPp->top__DOT__u_CPU__DOT__alu_result_8 
                        = ((IData)(vlTOPp->top__DOT__u_CPU__DOT__a_8) 
                           ^ (IData)(vlTOPp->top__DOT__u_CPU__DOT__b_8));
                    vlTOPp->top__DOT__u_CPU__DOT__flag_8 
                        = (0xeU & (IData)(vlTOPp->top__DOT__u_CPU__DOT__flag_8));
                    vlTOPp->top__DOT__u_CPU__DOT__flag_8 
                        = (0xdU & (IData)(vlTOPp->top__DOT__u_CPU__DOT__flag_8));
                    vlTOPp->top__DOT__u_CPU__DOT__flag_8 
                        = (0xbU & (IData)(vlTOPp->top__DOT__u_CPU__DOT__flag_8));
                    vlTOPp->top__DOT__u_CPU__DOT__flag_8 
                        = ((7U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__flag_8)) 
                           | ((0U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__alu_result_8)) 
                              << 3U));
                } else {
                    if ((4U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__alu_op_8))) {
                        vlTOPp->top__DOT__u_CPU__DOT__alu_result_8 
                            = ((IData)(vlTOPp->top__DOT__u_CPU__DOT__a_8) 
                               | (IData)(vlTOPp->top__DOT__u_CPU__DOT__b_8));
                        vlTOPp->top__DOT__u_CPU__DOT__flag_8 
                            = (0xeU & (IData)(vlTOPp->top__DOT__u_CPU__DOT__flag_8));
                        vlTOPp->top__DOT__u_CPU__DOT__flag_8 
                            = (0xdU & (IData)(vlTOPp->top__DOT__u_CPU__DOT__flag_8));
                        vlTOPp->top__DOT__u_CPU__DOT__flag_8 
                            = (0xbU & (IData)(vlTOPp->top__DOT__u_CPU__DOT__flag_8));
                        vlTOPp->top__DOT__u_CPU__DOT__flag_8 
                            = ((7U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__flag_8)) 
                               | ((0U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__alu_result_8)) 
                                  << 3U));
                    } else {
                        vlTOPp->top__DOT__u_CPU__DOT__alu_result_8 = 0U;
                        vlTOPp->top__DOT__u_CPU__DOT__flag_8 = 0U;
                        vlTOPp->top__DOT__u_CPU__DOT__ins00__DOT__tem9 = 0U;
                        vlTOPp->top__DOT__u_CPU__DOT__ins00__DOT__tem5 = 0U;
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__u_PPU__DOT__shifted_data = (0xffU 
                                                  & ((IData)(vlTOPp->top__DOT__ppu_mem_r_data) 
                                                     << 
                                                     (7U 
                                                      & (((((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_PPU_IO__DOT__WX_reg) 
                                                            <= 
                                                            ((IData)(7U) 
                                                             + (IData)(vlTOPp->top__DOT__u_PPU__DOT__sub_counter_2))) 
                                                           & ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_PPU_IO__DOT__WY_reg) 
                                                              <= (IData)(vlTOPp->top__DOT__u_PPU__DOT__line_counter))) 
                                                          & ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_PPU_IO__DOT__LCDC_reg) 
                                                             >> 5U))
                                                          ? (IData)(vlTOPp->top__DOT__u_PPU__DOT__win_x)
                                                          : (IData)(vlTOPp->top__DOT__u_PPU__DOT__map_x)))));
    vlTOPp->top__DOT__dma_mem_r_data = 0xffU;
    if ((0U == (IData)(vlTOPp->top__DOT__u_Memory_Interface__DOT__dma_state))) {
        vlTOPp->top__DOT__dma_mem_r_data = 0xffU;
    } else {
        if ((1U == (IData)(vlTOPp->top__DOT__u_Memory_Interface__DOT__dma_state))) {
            vlTOPp->top__DOT__dma_mem_r_data = vlTOPp->OAM_r_data;
        } else {
            if ((2U == (IData)(vlTOPp->top__DOT__u_Memory_Interface__DOT__dma_state))) {
                vlTOPp->top__DOT__dma_mem_r_data = vlTOPp->ROM_r_data;
            } else {
                if ((3U == (IData)(vlTOPp->top__DOT__u_Memory_Interface__DOT__dma_state))) {
                    vlTOPp->top__DOT__dma_mem_r_data 
                        = vlTOPp->ERAM_r_data;
                } else {
                    if ((4U == (IData)(vlTOPp->top__DOT__u_Memory_Interface__DOT__dma_state))) {
                        vlTOPp->top__DOT__dma_mem_r_data 
                            = vlTOPp->WRAM_r_data;
                    } else {
                        if ((5U == (IData)(vlTOPp->top__DOT__u_Memory_Interface__DOT__dma_state))) {
                            vlTOPp->top__DOT__dma_mem_r_data 
                                = vlTOPp->top__DOT__io_reg_r_data;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__cpu_mem_r_data = 0xffU;
    if (((((((((0U == (IData)(vlTOPp->top__DOT__u_Memory_Interface__DOT__cpu_state)) 
               | (1U == (IData)(vlTOPp->top__DOT__u_Memory_Interface__DOT__cpu_state))) 
              | (2U == (IData)(vlTOPp->top__DOT__u_Memory_Interface__DOT__cpu_state))) 
             | (3U == (IData)(vlTOPp->top__DOT__u_Memory_Interface__DOT__cpu_state))) 
            | (4U == (IData)(vlTOPp->top__DOT__u_Memory_Interface__DOT__cpu_state))) 
           | (5U == (IData)(vlTOPp->top__DOT__u_Memory_Interface__DOT__cpu_state))) 
          | (6U == (IData)(vlTOPp->top__DOT__u_Memory_Interface__DOT__cpu_state))) 
         | (7U == (IData)(vlTOPp->top__DOT__u_Memory_Interface__DOT__cpu_state)))) {
        vlTOPp->top__DOT__cpu_mem_r_data = ((0U == (IData)(vlTOPp->top__DOT__u_Memory_Interface__DOT__cpu_state))
                                             ? 0xffU
                                             : ((1U 
                                                 == (IData)(vlTOPp->top__DOT__u_Memory_Interface__DOT__cpu_state))
                                                 ? (IData)(vlTOPp->VRAM_r_data)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlTOPp->top__DOT__u_Memory_Interface__DOT__cpu_state))
                                                  ? (IData)(vlTOPp->HRAM_r_data)
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlTOPp->top__DOT__u_Memory_Interface__DOT__cpu_state))
                                                   ? (IData)(vlTOPp->OAM_r_data)
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlTOPp->top__DOT__u_Memory_Interface__DOT__cpu_state))
                                                    ? (IData)(vlTOPp->ROM_r_data)
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlTOPp->top__DOT__u_Memory_Interface__DOT__cpu_state))
                                                     ? (IData)(vlTOPp->ERAM_r_data)
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlTOPp->top__DOT__u_Memory_Interface__DOT__cpu_state))
                                                      ? (IData)(vlTOPp->WRAM_r_data)
                                                      : (IData)(vlTOPp->top__DOT__io_reg_r_data))))))));
    }
    vlTOPp->top__DOT__u_io_register__DOT__IE_w_ena = 0U;
    if (((IData)(vlTOPp->top__DOT__io_reg_ena) & (IData)(vlTOPp->top__DOT__io_reg_w_ena))) {
        if ((1U & (~ ((((((((0xff00U == (IData)(vlTOPp->top__DOT__io_reg_ad)) 
                            | (0xff04U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                           | (0xff05U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                          | (0xff06U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                         | (0xff07U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                        | (0xff0fU == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                       | (0xff40U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                      | (0xff41U == (IData)(vlTOPp->top__DOT__io_reg_ad)))))) {
            if ((1U & (~ ((((((((0xff42U == (IData)(vlTOPp->top__DOT__io_reg_ad)) 
                                | (0xff43U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                               | (0xff44U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                              | (0xff45U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                             | (0xff46U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                            | (0xff47U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                           | (0xff48U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                          | (0xff49U == (IData)(vlTOPp->top__DOT__io_reg_ad)))))) {
                if ((0xff4aU != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                    if ((0xff4bU != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                        if ((0xffffU == (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                            vlTOPp->top__DOT__u_io_register__DOT__IE_w_ena = 1U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__u_io_register__DOT__IF_w_ena = 0U;
    if (((IData)(vlTOPp->top__DOT__io_reg_ena) & (IData)(vlTOPp->top__DOT__io_reg_w_ena))) {
        if (((((((((0xff00U == (IData)(vlTOPp->top__DOT__io_reg_ad)) 
                   | (0xff04U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                  | (0xff05U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                 | (0xff06U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                | (0xff07U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
               | (0xff0fU == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
              | (0xff40U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
             | (0xff41U == (IData)(vlTOPp->top__DOT__io_reg_ad)))) {
            if ((0xff00U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                if ((0xff04U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                    if ((0xff05U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                        if ((0xff06U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                            if ((0xff07U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                                if ((0xff0fU == (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                                    vlTOPp->top__DOT__u_io_register__DOT__IF_w_ena = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__u_io_register__DOT__next = 0U;
    if (((IData)(vlTOPp->top__DOT__io_reg_ena) & (IData)(vlTOPp->top__DOT__io_reg_r_ena))) {
        if (((((((((0xff00U == (IData)(vlTOPp->top__DOT__io_reg_ad)) 
                   | (0xff04U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                  | (0xff05U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                 | (0xff06U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                | (0xff07U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
               | (0xff0fU == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
              | (0xff40U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
             | (0xff41U == (IData)(vlTOPp->top__DOT__io_reg_ad)))) {
            vlTOPp->top__DOT__u_io_register__DOT__next 
                = ((0xff00U == (IData)(vlTOPp->top__DOT__io_reg_ad))
                    ? 1U : ((0xff04U == (IData)(vlTOPp->top__DOT__io_reg_ad))
                             ? 2U : ((0xff05U == (IData)(vlTOPp->top__DOT__io_reg_ad))
                                      ? 3U : ((0xff06U 
                                               == (IData)(vlTOPp->top__DOT__io_reg_ad))
                                               ? 4U
                                               : ((0xff07U 
                                                   == (IData)(vlTOPp->top__DOT__io_reg_ad))
                                                   ? 5U
                                                   : 
                                                  ((0xff0fU 
                                                    == (IData)(vlTOPp->top__DOT__io_reg_ad))
                                                    ? 6U
                                                    : 
                                                   ((0xff40U 
                                                     == (IData)(vlTOPp->top__DOT__io_reg_ad))
                                                     ? 7U
                                                     : 0xaU)))))));
        } else {
            if (((((((((0xff42U == (IData)(vlTOPp->top__DOT__io_reg_ad)) 
                       | (0xff43U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                      | (0xff44U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                     | (0xff45U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                    | (0xff46U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                   | (0xff47U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                  | (0xff48U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                 | (0xff49U == (IData)(vlTOPp->top__DOT__io_reg_ad)))) {
                vlTOPp->top__DOT__u_io_register__DOT__next 
                    = ((0xff42U == (IData)(vlTOPp->top__DOT__io_reg_ad))
                        ? 7U : ((0xff43U == (IData)(vlTOPp->top__DOT__io_reg_ad))
                                 ? 7U : ((0xff44U == (IData)(vlTOPp->top__DOT__io_reg_ad))
                                          ? 0xbU : 
                                         ((0xff45U 
                                           == (IData)(vlTOPp->top__DOT__io_reg_ad))
                                           ? 7U : (
                                                   (0xff46U 
                                                    == (IData)(vlTOPp->top__DOT__io_reg_ad))
                                                    ? 8U
                                                    : 7U)))));
            } else {
                if ((0xff4aU == (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                    vlTOPp->top__DOT__u_io_register__DOT__next = 7U;
                } else {
                    if ((0xff4bU == (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                        vlTOPp->top__DOT__u_io_register__DOT__next = 7U;
                    } else {
                        if ((0xffffU == (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                            vlTOPp->top__DOT__u_io_register__DOT__next = 9U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__u_io_register__DOT__ly_w_ena = 0U;
    if (((IData)(vlTOPp->top__DOT__io_reg_ena) & (IData)(vlTOPp->top__DOT__io_reg_r_ena))) {
        if ((1U & (~ ((((((((0xff00U == (IData)(vlTOPp->top__DOT__io_reg_ad)) 
                            | (0xff04U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                           | (0xff05U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                          | (0xff06U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                         | (0xff07U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                        | (0xff0fU == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                       | (0xff40U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                      | (0xff41U == (IData)(vlTOPp->top__DOT__io_reg_ad)))))) {
            if (((((((((0xff42U == (IData)(vlTOPp->top__DOT__io_reg_ad)) 
                       | (0xff43U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                      | (0xff44U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                     | (0xff45U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                    | (0xff46U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                   | (0xff47U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                  | (0xff48U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                 | (0xff49U == (IData)(vlTOPp->top__DOT__io_reg_ad)))) {
                if ((0xff42U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                    if ((0xff43U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                        if ((0xff44U == (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                            vlTOPp->top__DOT__u_io_register__DOT__ly_w_ena = 0U;
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->top__DOT__io_reg_ena) & (IData)(vlTOPp->top__DOT__io_reg_w_ena))) {
        if ((1U & (~ ((((((((0xff00U == (IData)(vlTOPp->top__DOT__io_reg_ad)) 
                            | (0xff04U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                           | (0xff05U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                          | (0xff06U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                         | (0xff07U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                        | (0xff0fU == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                       | (0xff40U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                      | (0xff41U == (IData)(vlTOPp->top__DOT__io_reg_ad)))))) {
            if (((((((((0xff42U == (IData)(vlTOPp->top__DOT__io_reg_ad)) 
                       | (0xff43U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                      | (0xff44U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                     | (0xff45U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                    | (0xff46U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                   | (0xff47U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                  | (0xff48U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                 | (0xff49U == (IData)(vlTOPp->top__DOT__io_reg_ad)))) {
                if ((0xff42U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                    if ((0xff43U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                        if ((0xff44U == (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                            vlTOPp->top__DOT__u_io_register__DOT__ly_w_ena = 1U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__u_io_register__DOT__stat_r_ena = 0U;
    if (((IData)(vlTOPp->top__DOT__io_reg_ena) & (IData)(vlTOPp->top__DOT__io_reg_r_ena))) {
        if (((((((((0xff00U == (IData)(vlTOPp->top__DOT__io_reg_ad)) 
                   | (0xff04U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                  | (0xff05U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                 | (0xff06U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                | (0xff07U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
               | (0xff0fU == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
              | (0xff40U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
             | (0xff41U == (IData)(vlTOPp->top__DOT__io_reg_ad)))) {
            if ((0xff00U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                if ((0xff04U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                    if ((0xff05U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                        if ((0xff06U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                            if ((0xff07U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                                if ((0xff0fU != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                                    if ((0xff40U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                                        vlTOPp->top__DOT__u_io_register__DOT__stat_r_ena = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->top__DOT__io_reg_ena) & (IData)(vlTOPp->top__DOT__io_reg_w_ena))) {
        if (((((((((0xff00U == (IData)(vlTOPp->top__DOT__io_reg_ad)) 
                   | (0xff04U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                  | (0xff05U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                 | (0xff06U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                | (0xff07U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
               | (0xff0fU == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
              | (0xff40U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
             | (0xff41U == (IData)(vlTOPp->top__DOT__io_reg_ad)))) {
            if ((0xff00U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                if ((0xff04U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                    if ((0xff05U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                        if ((0xff06U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                            if ((0xff07U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                                if ((0xff0fU != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                                    if ((0xff40U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                                        vlTOPp->top__DOT__u_io_register__DOT__stat_r_ena = 0U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__u_io_register__DOT__dma_w_ena = 0U;
    if (((IData)(vlTOPp->top__DOT__io_reg_ena) & (IData)(vlTOPp->top__DOT__io_reg_r_ena))) {
        if ((1U & (~ ((((((((0xff00U == (IData)(vlTOPp->top__DOT__io_reg_ad)) 
                            | (0xff04U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                           | (0xff05U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                          | (0xff06U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                         | (0xff07U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                        | (0xff0fU == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                       | (0xff40U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                      | (0xff41U == (IData)(vlTOPp->top__DOT__io_reg_ad)))))) {
            if (((((((((0xff42U == (IData)(vlTOPp->top__DOT__io_reg_ad)) 
                       | (0xff43U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                      | (0xff44U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                     | (0xff45U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                    | (0xff46U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                   | (0xff47U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                  | (0xff48U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                 | (0xff49U == (IData)(vlTOPp->top__DOT__io_reg_ad)))) {
                if ((0xff42U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                    if ((0xff43U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                        if ((0xff44U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                            if ((0xff45U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                                if ((0xff46U == (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                                    vlTOPp->top__DOT__u_io_register__DOT__dma_w_ena = 0U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->top__DOT__io_reg_ena) & (IData)(vlTOPp->top__DOT__io_reg_w_ena))) {
        if ((1U & (~ ((((((((0xff00U == (IData)(vlTOPp->top__DOT__io_reg_ad)) 
                            | (0xff04U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                           | (0xff05U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                          | (0xff06U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                         | (0xff07U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                        | (0xff0fU == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                       | (0xff40U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                      | (0xff41U == (IData)(vlTOPp->top__DOT__io_reg_ad)))))) {
            if (((((((((0xff42U == (IData)(vlTOPp->top__DOT__io_reg_ad)) 
                       | (0xff43U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                      | (0xff44U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                     | (0xff45U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                    | (0xff46U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                   | (0xff47U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                  | (0xff48U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                 | (0xff49U == (IData)(vlTOPp->top__DOT__io_reg_ad)))) {
                if ((0xff42U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                    if ((0xff43U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                        if ((0xff44U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                            if ((0xff45U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                                if ((0xff46U == (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                                    vlTOPp->top__DOT__u_io_register__DOT__dma_w_ena = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__u_io_register__DOT__tac_w_ena = 0U;
    if (((IData)(vlTOPp->top__DOT__io_reg_ena) & (IData)(vlTOPp->top__DOT__io_reg_r_ena))) {
        if (((((((((0xff00U == (IData)(vlTOPp->top__DOT__io_reg_ad)) 
                   | (0xff04U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                  | (0xff05U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                 | (0xff06U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                | (0xff07U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
               | (0xff0fU == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
              | (0xff40U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
             | (0xff41U == (IData)(vlTOPp->top__DOT__io_reg_ad)))) {
            if ((0xff00U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                if ((0xff04U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                    if ((0xff05U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                        if ((0xff06U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                            if ((0xff07U == (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                                vlTOPp->top__DOT__u_io_register__DOT__tac_w_ena = 0U;
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->top__DOT__io_reg_ena) & (IData)(vlTOPp->top__DOT__io_reg_w_ena))) {
        if (((((((((0xff00U == (IData)(vlTOPp->top__DOT__io_reg_ad)) 
                   | (0xff04U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                  | (0xff05U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                 | (0xff06U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                | (0xff07U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
               | (0xff0fU == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
              | (0xff40U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
             | (0xff41U == (IData)(vlTOPp->top__DOT__io_reg_ad)))) {
            if ((0xff00U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                if ((0xff04U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                    if ((0xff05U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                        if ((0xff06U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                            if ((0xff07U == (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                                vlTOPp->top__DOT__u_io_register__DOT__tac_w_ena = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__u_io_register__DOT__tima_r_ena = 0U;
    if (((IData)(vlTOPp->top__DOT__io_reg_ena) & (IData)(vlTOPp->top__DOT__io_reg_r_ena))) {
        if (((((((((0xff00U == (IData)(vlTOPp->top__DOT__io_reg_ad)) 
                   | (0xff04U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                  | (0xff05U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                 | (0xff06U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                | (0xff07U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
               | (0xff0fU == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
              | (0xff40U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
             | (0xff41U == (IData)(vlTOPp->top__DOT__io_reg_ad)))) {
            if ((0xff00U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                if ((0xff04U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                    if ((0xff05U == (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                        vlTOPp->top__DOT__u_io_register__DOT__tima_r_ena = 1U;
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->top__DOT__io_reg_ena) & (IData)(vlTOPp->top__DOT__io_reg_w_ena))) {
        if (((((((((0xff00U == (IData)(vlTOPp->top__DOT__io_reg_ad)) 
                   | (0xff04U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                  | (0xff05U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                 | (0xff06U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                | (0xff07U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
               | (0xff0fU == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
              | (0xff40U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
             | (0xff41U == (IData)(vlTOPp->top__DOT__io_reg_ad)))) {
            if ((0xff00U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                if ((0xff04U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                    if ((0xff05U == (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                        vlTOPp->top__DOT__u_io_register__DOT__tima_r_ena = 0U;
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__u_io_register__DOT__ppu_io_r_ena = 0U;
    if (((IData)(vlTOPp->top__DOT__io_reg_ena) & (IData)(vlTOPp->top__DOT__io_reg_r_ena))) {
        if (((((((((0xff00U == (IData)(vlTOPp->top__DOT__io_reg_ad)) 
                   | (0xff04U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                  | (0xff05U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                 | (0xff06U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                | (0xff07U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
               | (0xff0fU == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
              | (0xff40U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
             | (0xff41U == (IData)(vlTOPp->top__DOT__io_reg_ad)))) {
            if ((0xff00U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                if ((0xff04U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                    if ((0xff05U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                        if ((0xff06U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                            if ((0xff07U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                                if ((0xff0fU != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                                    if ((0xff40U == (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                                        vlTOPp->top__DOT__u_io_register__DOT__ppu_io_r_ena = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (((((((((0xff42U == (IData)(vlTOPp->top__DOT__io_reg_ad)) 
                       | (0xff43U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                      | (0xff44U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                     | (0xff45U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                    | (0xff46U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                   | (0xff47U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                  | (0xff48U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                 | (0xff49U == (IData)(vlTOPp->top__DOT__io_reg_ad)))) {
                if ((0xff42U == (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                    vlTOPp->top__DOT__u_io_register__DOT__ppu_io_r_ena = 1U;
                } else {
                    if ((0xff43U == (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                        vlTOPp->top__DOT__u_io_register__DOT__ppu_io_r_ena = 1U;
                    } else {
                        if ((0xff44U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                            if ((0xff45U == (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                                vlTOPp->top__DOT__u_io_register__DOT__ppu_io_r_ena = 1U;
                            } else {
                                if ((0xff46U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                                    vlTOPp->top__DOT__u_io_register__DOT__ppu_io_r_ena = 1U;
                                }
                            }
                        }
                    }
                }
            } else {
                if ((0xff4aU == (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                    vlTOPp->top__DOT__u_io_register__DOT__ppu_io_r_ena = 1U;
                } else {
                    if ((0xff4bU == (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                        vlTOPp->top__DOT__u_io_register__DOT__ppu_io_r_ena = 1U;
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->top__DOT__io_reg_ena) & (IData)(vlTOPp->top__DOT__io_reg_w_ena))) {
        if (((((((((0xff00U == (IData)(vlTOPp->top__DOT__io_reg_ad)) 
                   | (0xff04U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                  | (0xff05U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                 | (0xff06U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                | (0xff07U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
               | (0xff0fU == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
              | (0xff40U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
             | (0xff41U == (IData)(vlTOPp->top__DOT__io_reg_ad)))) {
            if ((0xff00U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                if ((0xff04U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                    if ((0xff05U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                        if ((0xff06U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                            if ((0xff07U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                                if ((0xff0fU != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                                    if ((0xff40U == (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                                        vlTOPp->top__DOT__u_io_register__DOT__ppu_io_r_ena = 0U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (((((((((0xff42U == (IData)(vlTOPp->top__DOT__io_reg_ad)) 
                       | (0xff43U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                      | (0xff44U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                     | (0xff45U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                    | (0xff46U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                   | (0xff47U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                  | (0xff48U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                 | (0xff49U == (IData)(vlTOPp->top__DOT__io_reg_ad)))) {
                if ((0xff42U == (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                    vlTOPp->top__DOT__u_io_register__DOT__ppu_io_r_ena = 0U;
                } else {
                    if ((0xff43U == (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                        vlTOPp->top__DOT__u_io_register__DOT__ppu_io_r_ena = 0U;
                    } else {
                        if ((0xff44U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                            if ((0xff45U == (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                                vlTOPp->top__DOT__u_io_register__DOT__ppu_io_r_ena = 0U;
                            } else {
                                if ((0xff46U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                                    vlTOPp->top__DOT__u_io_register__DOT__ppu_io_r_ena = 0U;
                                }
                            }
                        }
                    }
                }
            } else {
                if ((0xff4aU == (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                    vlTOPp->top__DOT__u_io_register__DOT__ppu_io_r_ena = 0U;
                } else {
                    if ((0xff4bU == (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                        vlTOPp->top__DOT__u_io_register__DOT__ppu_io_r_ena = 0U;
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__u_io_register__DOT__dma_r_ena = 0U;
    if (((IData)(vlTOPp->top__DOT__io_reg_ena) & (IData)(vlTOPp->top__DOT__io_reg_r_ena))) {
        if ((1U & (~ ((((((((0xff00U == (IData)(vlTOPp->top__DOT__io_reg_ad)) 
                            | (0xff04U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                           | (0xff05U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                          | (0xff06U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                         | (0xff07U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                        | (0xff0fU == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                       | (0xff40U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                      | (0xff41U == (IData)(vlTOPp->top__DOT__io_reg_ad)))))) {
            if (((((((((0xff42U == (IData)(vlTOPp->top__DOT__io_reg_ad)) 
                       | (0xff43U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                      | (0xff44U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                     | (0xff45U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                    | (0xff46U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                   | (0xff47U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                  | (0xff48U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                 | (0xff49U == (IData)(vlTOPp->top__DOT__io_reg_ad)))) {
                if ((0xff42U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                    if ((0xff43U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                        if ((0xff44U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                            if ((0xff45U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                                if ((0xff46U == (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                                    vlTOPp->top__DOT__u_io_register__DOT__dma_r_ena = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->top__DOT__io_reg_ena) & (IData)(vlTOPp->top__DOT__io_reg_w_ena))) {
        if ((1U & (~ ((((((((0xff00U == (IData)(vlTOPp->top__DOT__io_reg_ad)) 
                            | (0xff04U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                           | (0xff05U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                          | (0xff06U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                         | (0xff07U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                        | (0xff0fU == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                       | (0xff40U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                      | (0xff41U == (IData)(vlTOPp->top__DOT__io_reg_ad)))))) {
            if (((((((((0xff42U == (IData)(vlTOPp->top__DOT__io_reg_ad)) 
                       | (0xff43U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                      | (0xff44U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                     | (0xff45U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                    | (0xff46U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                   | (0xff47U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                  | (0xff48U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                 | (0xff49U == (IData)(vlTOPp->top__DOT__io_reg_ad)))) {
                if ((0xff42U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                    if ((0xff43U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                        if ((0xff44U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                            if ((0xff45U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                                if ((0xff46U == (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                                    vlTOPp->top__DOT__u_io_register__DOT__dma_r_ena = 0U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__u_io_register__DOT__tac_r_ena = 0U;
    if (((IData)(vlTOPp->top__DOT__io_reg_ena) & (IData)(vlTOPp->top__DOT__io_reg_r_ena))) {
        if (((((((((0xff00U == (IData)(vlTOPp->top__DOT__io_reg_ad)) 
                   | (0xff04U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                  | (0xff05U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                 | (0xff06U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                | (0xff07U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
               | (0xff0fU == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
              | (0xff40U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
             | (0xff41U == (IData)(vlTOPp->top__DOT__io_reg_ad)))) {
            if ((0xff00U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                if ((0xff04U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                    if ((0xff05U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                        if ((0xff06U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                            if ((0xff07U == (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                                vlTOPp->top__DOT__u_io_register__DOT__tac_r_ena = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->top__DOT__io_reg_ena) & (IData)(vlTOPp->top__DOT__io_reg_w_ena))) {
        if (((((((((0xff00U == (IData)(vlTOPp->top__DOT__io_reg_ad)) 
                   | (0xff04U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                  | (0xff05U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                 | (0xff06U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                | (0xff07U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
               | (0xff0fU == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
              | (0xff40U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
             | (0xff41U == (IData)(vlTOPp->top__DOT__io_reg_ad)))) {
            if ((0xff00U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                if ((0xff04U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                    if ((0xff05U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                        if ((0xff06U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                            if ((0xff07U == (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                                vlTOPp->top__DOT__u_io_register__DOT__tac_r_ena = 0U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__u_io_register__DOT__tma_w_ena = 0U;
    if (((IData)(vlTOPp->top__DOT__io_reg_ena) & (IData)(vlTOPp->top__DOT__io_reg_r_ena))) {
        if (((((((((0xff00U == (IData)(vlTOPp->top__DOT__io_reg_ad)) 
                   | (0xff04U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                  | (0xff05U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                 | (0xff06U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                | (0xff07U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
               | (0xff0fU == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
              | (0xff40U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
             | (0xff41U == (IData)(vlTOPp->top__DOT__io_reg_ad)))) {
            if ((0xff00U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                if ((0xff04U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                    if ((0xff05U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                        if ((0xff06U == (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                            vlTOPp->top__DOT__u_io_register__DOT__tma_w_ena = 0U;
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->top__DOT__io_reg_ena) & (IData)(vlTOPp->top__DOT__io_reg_w_ena))) {
        if (((((((((0xff00U == (IData)(vlTOPp->top__DOT__io_reg_ad)) 
                   | (0xff04U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                  | (0xff05U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                 | (0xff06U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                | (0xff07U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
               | (0xff0fU == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
              | (0xff40U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
             | (0xff41U == (IData)(vlTOPp->top__DOT__io_reg_ad)))) {
            if ((0xff00U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                if ((0xff04U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                    if ((0xff05U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                        if ((0xff06U == (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                            vlTOPp->top__DOT__u_io_register__DOT__tma_w_ena = 1U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__u_io_register__DOT__tma_r_ena = 0U;
    if (((IData)(vlTOPp->top__DOT__io_reg_ena) & (IData)(vlTOPp->top__DOT__io_reg_r_ena))) {
        if (((((((((0xff00U == (IData)(vlTOPp->top__DOT__io_reg_ad)) 
                   | (0xff04U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                  | (0xff05U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                 | (0xff06U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                | (0xff07U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
               | (0xff0fU == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
              | (0xff40U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
             | (0xff41U == (IData)(vlTOPp->top__DOT__io_reg_ad)))) {
            if ((0xff00U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                if ((0xff04U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                    if ((0xff05U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                        if ((0xff06U == (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                            vlTOPp->top__DOT__u_io_register__DOT__tma_r_ena = 1U;
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->top__DOT__io_reg_ena) & (IData)(vlTOPp->top__DOT__io_reg_w_ena))) {
        if (((((((((0xff00U == (IData)(vlTOPp->top__DOT__io_reg_ad)) 
                   | (0xff04U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                  | (0xff05U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                 | (0xff06U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                | (0xff07U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
               | (0xff0fU == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
              | (0xff40U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
             | (0xff41U == (IData)(vlTOPp->top__DOT__io_reg_ad)))) {
            if ((0xff00U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                if ((0xff04U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                    if ((0xff05U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                        if ((0xff06U == (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                            vlTOPp->top__DOT__u_io_register__DOT__tma_r_ena = 0U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__u_io_register__DOT__tima_w_ena = 0U;
    if (((IData)(vlTOPp->top__DOT__io_reg_ena) & (IData)(vlTOPp->top__DOT__io_reg_r_ena))) {
        if (((((((((0xff00U == (IData)(vlTOPp->top__DOT__io_reg_ad)) 
                   | (0xff04U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                  | (0xff05U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                 | (0xff06U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                | (0xff07U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
               | (0xff0fU == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
              | (0xff40U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
             | (0xff41U == (IData)(vlTOPp->top__DOT__io_reg_ad)))) {
            if ((0xff00U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                if ((0xff04U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                    if ((0xff05U == (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                        vlTOPp->top__DOT__u_io_register__DOT__tima_w_ena = 0U;
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->top__DOT__io_reg_ena) & (IData)(vlTOPp->top__DOT__io_reg_w_ena))) {
        if (((((((((0xff00U == (IData)(vlTOPp->top__DOT__io_reg_ad)) 
                   | (0xff04U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                  | (0xff05U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                 | (0xff06U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                | (0xff07U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
               | (0xff0fU == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
              | (0xff40U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
             | (0xff41U == (IData)(vlTOPp->top__DOT__io_reg_ad)))) {
            if ((0xff00U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                if ((0xff04U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                    if ((0xff05U == (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                        vlTOPp->top__DOT__u_io_register__DOT__tima_w_ena = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__u_io_register__DOT__div_r_ena = 0U;
    if (((IData)(vlTOPp->top__DOT__io_reg_ena) & (IData)(vlTOPp->top__DOT__io_reg_r_ena))) {
        if (((((((((0xff00U == (IData)(vlTOPp->top__DOT__io_reg_ad)) 
                   | (0xff04U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                  | (0xff05U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                 | (0xff06U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                | (0xff07U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
               | (0xff0fU == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
              | (0xff40U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
             | (0xff41U == (IData)(vlTOPp->top__DOT__io_reg_ad)))) {
            if ((0xff00U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                if ((0xff04U == (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                    vlTOPp->top__DOT__u_io_register__DOT__div_r_ena = 1U;
                }
            }
        }
    }
    if (((IData)(vlTOPp->top__DOT__io_reg_ena) & (IData)(vlTOPp->top__DOT__io_reg_w_ena))) {
        if (((((((((0xff00U == (IData)(vlTOPp->top__DOT__io_reg_ad)) 
                   | (0xff04U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                  | (0xff05U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                 | (0xff06U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                | (0xff07U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
               | (0xff0fU == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
              | (0xff40U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
             | (0xff41U == (IData)(vlTOPp->top__DOT__io_reg_ad)))) {
            if ((0xff00U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                if ((0xff04U == (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                    vlTOPp->top__DOT__u_io_register__DOT__div_r_ena = 0U;
                }
            }
        }
    }
    vlTOPp->top__DOT__u_io_register__DOT__ppu_io_w_ena = 0U;
    if (((IData)(vlTOPp->top__DOT__io_reg_ena) & (IData)(vlTOPp->top__DOT__io_reg_r_ena))) {
        if (((((((((0xff00U == (IData)(vlTOPp->top__DOT__io_reg_ad)) 
                   | (0xff04U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                  | (0xff05U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                 | (0xff06U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                | (0xff07U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
               | (0xff0fU == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
              | (0xff40U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
             | (0xff41U == (IData)(vlTOPp->top__DOT__io_reg_ad)))) {
            if ((0xff00U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                if ((0xff04U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                    if ((0xff05U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                        if ((0xff06U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                            if ((0xff07U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                                if ((0xff0fU != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                                    if ((0xff40U == (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                                        vlTOPp->top__DOT__u_io_register__DOT__ppu_io_w_ena = 0U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (((((((((0xff42U == (IData)(vlTOPp->top__DOT__io_reg_ad)) 
                       | (0xff43U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                      | (0xff44U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                     | (0xff45U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                    | (0xff46U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                   | (0xff47U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                  | (0xff48U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                 | (0xff49U == (IData)(vlTOPp->top__DOT__io_reg_ad)))) {
                if ((0xff42U == (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                    vlTOPp->top__DOT__u_io_register__DOT__ppu_io_w_ena = 0U;
                } else {
                    if ((0xff43U == (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                        vlTOPp->top__DOT__u_io_register__DOT__ppu_io_w_ena = 0U;
                    } else {
                        if ((0xff44U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                            if ((0xff45U == (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                                vlTOPp->top__DOT__u_io_register__DOT__ppu_io_w_ena = 0U;
                            } else {
                                if ((0xff46U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                                    vlTOPp->top__DOT__u_io_register__DOT__ppu_io_w_ena = 0U;
                                }
                            }
                        }
                    }
                }
            } else {
                if ((0xff4aU == (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                    vlTOPp->top__DOT__u_io_register__DOT__ppu_io_w_ena = 0U;
                } else {
                    if ((0xff4bU == (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                        vlTOPp->top__DOT__u_io_register__DOT__ppu_io_w_ena = 0U;
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->top__DOT__io_reg_ena) & (IData)(vlTOPp->top__DOT__io_reg_w_ena))) {
        if (((((((((0xff00U == (IData)(vlTOPp->top__DOT__io_reg_ad)) 
                   | (0xff04U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                  | (0xff05U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                 | (0xff06U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                | (0xff07U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
               | (0xff0fU == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
              | (0xff40U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
             | (0xff41U == (IData)(vlTOPp->top__DOT__io_reg_ad)))) {
            if ((0xff00U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                if ((0xff04U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                    if ((0xff05U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                        if ((0xff06U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                            if ((0xff07U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                                if ((0xff0fU != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                                    if ((0xff40U == (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                                        vlTOPp->top__DOT__u_io_register__DOT__ppu_io_w_ena = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (((((((((0xff42U == (IData)(vlTOPp->top__DOT__io_reg_ad)) 
                       | (0xff43U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                      | (0xff44U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                     | (0xff45U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                    | (0xff46U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                   | (0xff47U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                  | (0xff48U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                 | (0xff49U == (IData)(vlTOPp->top__DOT__io_reg_ad)))) {
                if ((0xff42U == (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                    vlTOPp->top__DOT__u_io_register__DOT__ppu_io_w_ena = 1U;
                } else {
                    if ((0xff43U == (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                        vlTOPp->top__DOT__u_io_register__DOT__ppu_io_w_ena = 1U;
                    } else {
                        if ((0xff44U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                            if ((0xff45U == (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                                vlTOPp->top__DOT__u_io_register__DOT__ppu_io_w_ena = 1U;
                            } else {
                                if ((0xff46U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                                    vlTOPp->top__DOT__u_io_register__DOT__ppu_io_w_ena = 1U;
                                }
                            }
                        }
                    }
                }
            } else {
                if ((0xff4aU == (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                    vlTOPp->top__DOT__u_io_register__DOT__ppu_io_w_ena = 1U;
                } else {
                    if ((0xff4bU == (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                        vlTOPp->top__DOT__u_io_register__DOT__ppu_io_w_ena = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__u_io_register__DOT__stat_w_ena = 0U;
    if (((IData)(vlTOPp->top__DOT__io_reg_ena) & (IData)(vlTOPp->top__DOT__io_reg_r_ena))) {
        if (((((((((0xff00U == (IData)(vlTOPp->top__DOT__io_reg_ad)) 
                   | (0xff04U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                  | (0xff05U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                 | (0xff06U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                | (0xff07U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
               | (0xff0fU == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
              | (0xff40U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
             | (0xff41U == (IData)(vlTOPp->top__DOT__io_reg_ad)))) {
            if ((0xff00U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                if ((0xff04U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                    if ((0xff05U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                        if ((0xff06U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                            if ((0xff07U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                                if ((0xff0fU != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                                    if ((0xff40U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                                        vlTOPp->top__DOT__u_io_register__DOT__stat_w_ena = 0U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->top__DOT__io_reg_ena) & (IData)(vlTOPp->top__DOT__io_reg_w_ena))) {
        if (((((((((0xff00U == (IData)(vlTOPp->top__DOT__io_reg_ad)) 
                   | (0xff04U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                  | (0xff05U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                 | (0xff06U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                | (0xff07U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
               | (0xff0fU == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
              | (0xff40U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
             | (0xff41U == (IData)(vlTOPp->top__DOT__io_reg_ad)))) {
            if ((0xff00U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                if ((0xff04U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                    if ((0xff05U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                        if ((0xff06U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                            if ((0xff07U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                                if ((0xff0fU != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                                    if ((0xff40U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                                        vlTOPp->top__DOT__u_io_register__DOT__stat_w_ena = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__u_io_register__DOT__ly_r_ena = 0U;
    if (((IData)(vlTOPp->top__DOT__io_reg_ena) & (IData)(vlTOPp->top__DOT__io_reg_r_ena))) {
        if ((1U & (~ ((((((((0xff00U == (IData)(vlTOPp->top__DOT__io_reg_ad)) 
                            | (0xff04U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                           | (0xff05U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                          | (0xff06U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                         | (0xff07U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                        | (0xff0fU == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                       | (0xff40U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                      | (0xff41U == (IData)(vlTOPp->top__DOT__io_reg_ad)))))) {
            if (((((((((0xff42U == (IData)(vlTOPp->top__DOT__io_reg_ad)) 
                       | (0xff43U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                      | (0xff44U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                     | (0xff45U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                    | (0xff46U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                   | (0xff47U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                  | (0xff48U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                 | (0xff49U == (IData)(vlTOPp->top__DOT__io_reg_ad)))) {
                if ((0xff42U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                    if ((0xff43U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                        if ((0xff44U == (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                            vlTOPp->top__DOT__u_io_register__DOT__ly_r_ena = 1U;
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->top__DOT__io_reg_ena) & (IData)(vlTOPp->top__DOT__io_reg_w_ena))) {
        if ((1U & (~ ((((((((0xff00U == (IData)(vlTOPp->top__DOT__io_reg_ad)) 
                            | (0xff04U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                           | (0xff05U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                          | (0xff06U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                         | (0xff07U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                        | (0xff0fU == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                       | (0xff40U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                      | (0xff41U == (IData)(vlTOPp->top__DOT__io_reg_ad)))))) {
            if (((((((((0xff42U == (IData)(vlTOPp->top__DOT__io_reg_ad)) 
                       | (0xff43U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                      | (0xff44U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                     | (0xff45U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                    | (0xff46U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                   | (0xff47U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                  | (0xff48U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                 | (0xff49U == (IData)(vlTOPp->top__DOT__io_reg_ad)))) {
                if ((0xff42U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                    if ((0xff43U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                        if ((0xff44U == (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                            vlTOPp->top__DOT__u_io_register__DOT__ly_r_ena = 0U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__u_io_register__DOT__joy_r_ena = 0U;
    if (((IData)(vlTOPp->top__DOT__io_reg_ena) & (IData)(vlTOPp->top__DOT__io_reg_r_ena))) {
        if (((((((((0xff00U == (IData)(vlTOPp->top__DOT__io_reg_ad)) 
                   | (0xff04U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                  | (0xff05U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                 | (0xff06U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                | (0xff07U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
               | (0xff0fU == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
              | (0xff40U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
             | (0xff41U == (IData)(vlTOPp->top__DOT__io_reg_ad)))) {
            if ((0xff00U == (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                vlTOPp->top__DOT__u_io_register__DOT__joy_r_ena = 1U;
            }
        }
    }
    if (((IData)(vlTOPp->top__DOT__io_reg_ena) & (IData)(vlTOPp->top__DOT__io_reg_w_ena))) {
        if (((((((((0xff00U == (IData)(vlTOPp->top__DOT__io_reg_ad)) 
                   | (0xff04U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                  | (0xff05U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                 | (0xff06U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                | (0xff07U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
               | (0xff0fU == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
              | (0xff40U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
             | (0xff41U == (IData)(vlTOPp->top__DOT__io_reg_ad)))) {
            if ((0xff00U == (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                vlTOPp->top__DOT__u_io_register__DOT__joy_r_ena = 0U;
            }
        }
    }
    vlTOPp->top__DOT__u_io_register__DOT__div_w_ena = 0U;
    if (((IData)(vlTOPp->top__DOT__io_reg_ena) & (IData)(vlTOPp->top__DOT__io_reg_r_ena))) {
        if (((((((((0xff00U == (IData)(vlTOPp->top__DOT__io_reg_ad)) 
                   | (0xff04U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                  | (0xff05U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                 | (0xff06U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                | (0xff07U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
               | (0xff0fU == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
              | (0xff40U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
             | (0xff41U == (IData)(vlTOPp->top__DOT__io_reg_ad)))) {
            if ((0xff00U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                if ((0xff04U == (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                    vlTOPp->top__DOT__u_io_register__DOT__div_w_ena = 0U;
                }
            }
        }
    }
    if (((IData)(vlTOPp->top__DOT__io_reg_ena) & (IData)(vlTOPp->top__DOT__io_reg_w_ena))) {
        if (((((((((0xff00U == (IData)(vlTOPp->top__DOT__io_reg_ad)) 
                   | (0xff04U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                  | (0xff05U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                 | (0xff06U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                | (0xff07U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
               | (0xff0fU == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
              | (0xff40U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
             | (0xff41U == (IData)(vlTOPp->top__DOT__io_reg_ad)))) {
            if ((0xff00U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                if ((0xff04U == (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                    vlTOPp->top__DOT__u_io_register__DOT__div_w_ena = 1U;
                }
            }
        }
    }
    vlTOPp->top__DOT__u_io_register__DOT__joy_w_ena = 0U;
    if (((IData)(vlTOPp->top__DOT__io_reg_ena) & (IData)(vlTOPp->top__DOT__io_reg_r_ena))) {
        if (((((((((0xff00U == (IData)(vlTOPp->top__DOT__io_reg_ad)) 
                   | (0xff04U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                  | (0xff05U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                 | (0xff06U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                | (0xff07U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
               | (0xff0fU == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
              | (0xff40U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
             | (0xff41U == (IData)(vlTOPp->top__DOT__io_reg_ad)))) {
            if ((0xff00U == (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                vlTOPp->top__DOT__u_io_register__DOT__joy_w_ena = 0U;
            }
        }
    }
    if (((IData)(vlTOPp->top__DOT__io_reg_ena) & (IData)(vlTOPp->top__DOT__io_reg_w_ena))) {
        if (((((((((0xff00U == (IData)(vlTOPp->top__DOT__io_reg_ad)) 
                   | (0xff04U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                  | (0xff05U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                 | (0xff06U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                | (0xff07U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
               | (0xff0fU == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
              | (0xff40U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
             | (0xff41U == (IData)(vlTOPp->top__DOT__io_reg_ad)))) {
            if ((0xff00U == (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                vlTOPp->top__DOT__u_io_register__DOT__joy_w_ena = 1U;
            }
        }
    }
}

void Vtop::_eval_initial(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval_initial\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

void Vtop::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::final\n"); );
    // Variables
    Vtop__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vtop::_eval_settle(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval_settle\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__5(vlSymsp);
    vlTOPp->__Vm_traceActivity[3U] = 1U;
    vlTOPp->__Vm_traceActivity[2U] = 1U;
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
    vlTOPp->_settle__TOP__6(vlSymsp);
}

void Vtop::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    joypad_start = VL_RAND_RESET_I(1);
    joypad_select = VL_RAND_RESET_I(1);
    joypad_A = VL_RAND_RESET_I(1);
    joypad_B = VL_RAND_RESET_I(1);
    joypad_down = VL_RAND_RESET_I(1);
    joypad_up = VL_RAND_RESET_I(1);
    joypad_left = VL_RAND_RESET_I(1);
    joypad_right = VL_RAND_RESET_I(1);
    ROM_ena = VL_RAND_RESET_I(1);
    ROM_ad = VL_RAND_RESET_I(21);
    ROM_r_ena = VL_RAND_RESET_I(1);
    ROM_w_ena = VL_RAND_RESET_I(1);
    ROM_w_data = VL_RAND_RESET_I(8);
    ROM_r_data = VL_RAND_RESET_I(8);
    VRAM_ena = VL_RAND_RESET_I(1);
    VRAM_ad = VL_RAND_RESET_I(16);
    VRAM_r_ena = VL_RAND_RESET_I(1);
    VRAM_w_ena = VL_RAND_RESET_I(1);
    VRAM_w_data = VL_RAND_RESET_I(8);
    VRAM_r_data = VL_RAND_RESET_I(8);
    WRAM_ena = VL_RAND_RESET_I(1);
    WRAM_ad = VL_RAND_RESET_I(16);
    WRAM_r_ena = VL_RAND_RESET_I(1);
    WRAM_w_ena = VL_RAND_RESET_I(1);
    WRAM_w_data = VL_RAND_RESET_I(8);
    WRAM_r_data = VL_RAND_RESET_I(8);
    ERAM_ena = VL_RAND_RESET_I(1);
    ERAM_ad = VL_RAND_RESET_I(15);
    ERAM_r_ena = VL_RAND_RESET_I(1);
    ERAM_w_ena = VL_RAND_RESET_I(1);
    ERAM_w_data = VL_RAND_RESET_I(8);
    ERAM_r_data = VL_RAND_RESET_I(8);
    OAM_ena = VL_RAND_RESET_I(1);
    OAM_ad = VL_RAND_RESET_I(16);
    OAM_r_ena = VL_RAND_RESET_I(1);
    OAM_w_ena = VL_RAND_RESET_I(1);
    OAM_w_data = VL_RAND_RESET_I(8);
    OAM_r_data = VL_RAND_RESET_I(8);
    HRAM_ena = VL_RAND_RESET_I(1);
    HRAM_ad = VL_RAND_RESET_I(16);
    HRAM_r_ena = VL_RAND_RESET_I(1);
    HRAM_w_ena = VL_RAND_RESET_I(1);
    HRAM_w_data = VL_RAND_RESET_I(8);
    HRAM_r_data = VL_RAND_RESET_I(8);
    pixel_data = VL_RAND_RESET_I(2);
    pixel_valid = VL_RAND_RESET_I(1);
    hsync = VL_RAND_RESET_I(1);
    vsync = VL_RAND_RESET_I(1);
    MBC_version = VL_RAND_RESET_I(4);
    ROM_size = VL_RAND_RESET_I(8);
    RAM_size = VL_RAND_RESET_I(8);
    IF_out = VL_RAND_RESET_I(8);
    IE_out = VL_RAND_RESET_I(8);
    LCDC_out = VL_RAND_RESET_I(8);
    JOY_out = VL_RAND_RESET_I(8);
    LY_out = VL_RAND_RESET_I(8);
    IME_out = VL_RAND_RESET_I(1);
    PC_out = VL_RAND_RESET_I(16);
    top__DOT__cpu_mem_ena = VL_RAND_RESET_I(1);
    top__DOT__cpu_mem_ad = VL_RAND_RESET_I(16);
    top__DOT__cpu_mem_r_ena = VL_RAND_RESET_I(1);
    top__DOT__cpu_mem_w_ena = VL_RAND_RESET_I(1);
    top__DOT__cpu_mem_w_data = VL_RAND_RESET_I(8);
    top__DOT__cpu_mem_r_data = VL_RAND_RESET_I(8);
    top__DOT__ppu_mem_ena = VL_RAND_RESET_I(1);
    top__DOT__ppu_mem_ad = VL_RAND_RESET_I(16);
    top__DOT__ppu_mem_r_ena = VL_RAND_RESET_I(1);
    top__DOT__ppu_mem_w_ena = VL_RAND_RESET_I(1);
    top__DOT__ppu_mem_w_data = VL_RAND_RESET_I(8);
    top__DOT__ppu_mem_r_data = VL_RAND_RESET_I(8);
    top__DOT__dma_mem_ena = VL_RAND_RESET_I(1);
    top__DOT__dma_mem_ad = VL_RAND_RESET_I(16);
    top__DOT__dma_mem_r_ena = VL_RAND_RESET_I(1);
    top__DOT__dma_mem_w_ena = VL_RAND_RESET_I(1);
    top__DOT__dma_mem_w_data = VL_RAND_RESET_I(8);
    top__DOT__dma_mem_r_data = VL_RAND_RESET_I(8);
    top__DOT__io_reg_ena = VL_RAND_RESET_I(1);
    top__DOT__io_reg_ad = VL_RAND_RESET_I(16);
    top__DOT__io_reg_r_ena = VL_RAND_RESET_I(1);
    top__DOT__io_reg_w_ena = VL_RAND_RESET_I(1);
    top__DOT__io_reg_w_data = VL_RAND_RESET_I(8);
    top__DOT__io_reg_r_data = VL_RAND_RESET_I(8);
    top__DOT__irq_clear = VL_RAND_RESET_I(8);
    top__DOT__irq_joypad = VL_RAND_RESET_I(1);
    top__DOT__irq_LCD = VL_RAND_RESET_I(1);
    top__DOT__irq_vblank = VL_RAND_RESET_I(1);
    top__DOT__PPU_STAT_w_ena = VL_RAND_RESET_I(1);
    top__DOT__PPU_STAT_w_data = VL_RAND_RESET_I(8);
    top__DOT__PPU_LY_w_ena = VL_RAND_RESET_I(1);
    top__DOT__PPU_LY_w_data = VL_RAND_RESET_I(8);
    top__DOT__u_CPU__DOT__mem_r_data_valid = VL_RAND_RESET_I(8);
    top__DOT__u_CPU__DOT__halt = VL_RAND_RESET_I(1);
    top__DOT__u_CPU__DOT__IME = VL_RAND_RESET_I(1);
    top__DOT__u_CPU__DOT__IME_on = VL_RAND_RESET_I(1);
    top__DOT__u_CPU__DOT__IME_off = VL_RAND_RESET_I(1);
    top__DOT__u_CPU__DOT__EI_pending = VL_RAND_RESET_I(1);
    top__DOT__u_CPU__DOT__EI_pending_on = VL_RAND_RESET_I(1);
    top__DOT__u_CPU__DOT__A = VL_RAND_RESET_I(8);
    top__DOT__u_CPU__DOT__F = VL_RAND_RESET_I(8);
    top__DOT__u_CPU__DOT__B = VL_RAND_RESET_I(8);
    top__DOT__u_CPU__DOT__C = VL_RAND_RESET_I(8);
    top__DOT__u_CPU__DOT__D = VL_RAND_RESET_I(8);
    top__DOT__u_CPU__DOT__E = VL_RAND_RESET_I(8);
    top__DOT__u_CPU__DOT__H = VL_RAND_RESET_I(8);
    top__DOT__u_CPU__DOT__L = VL_RAND_RESET_I(8);
    top__DOT__u_CPU__DOT__SP = VL_RAND_RESET_I(16);
    top__DOT__u_CPU__DOT__PC = VL_RAND_RESET_I(16);
    top__DOT__u_CPU__DOT__IF_reg = VL_RAND_RESET_I(8);
    top__DOT__u_CPU__DOT__Operand_r8 = VL_RAND_RESET_I(8);
    top__DOT__u_CPU__DOT__Operand_r8_ad = VL_RAND_RESET_I(8);
    top__DOT__u_CPU__DOT__Dest_r8 = VL_RAND_RESET_I(8);
    top__DOT__u_CPU__DOT__Source_r8 = VL_RAND_RESET_I(8);
    top__DOT__u_CPU__DOT__Condition = VL_RAND_RESET_I(1);
    top__DOT__u_CPU__DOT__Operand_r16 = VL_RAND_RESET_I(16);
    top__DOT__u_CPU__DOT__Operand_r16_ad = VL_RAND_RESET_I(8);
    top__DOT__u_CPU__DOT__Dest_r16mem = VL_RAND_RESET_I(16);
    top__DOT__u_CPU__DOT__Source_r16mem = VL_RAND_RESET_I(16);
    top__DOT__u_CPU__DOT__register_r16stk = VL_RAND_RESET_I(16);
    top__DOT__u_CPU__DOT__register_r16stk_ad = VL_RAND_RESET_I(8);
    top__DOT__u_CPU__DOT__T_clk_counter = VL_RAND_RESET_I(8);
    top__DOT__u_CPU__DOT__T_clk_counter_next = VL_RAND_RESET_I(8);
    top__DOT__u_CPU__DOT__opcode = VL_RAND_RESET_I(8);
    top__DOT__u_CPU__DOT__opcode_valid = VL_RAND_RESET_I(1);
    top__DOT__u_CPU__DOT__prefix_valid = VL_RAND_RESET_I(1);
    top__DOT__u_CPU__DOT__my_clk_counter = VL_RAND_RESET_I(4);
    top__DOT__u_CPU__DOT__M_cycle_ena = VL_RAND_RESET_I(1);
    top__DOT__u_CPU__DOT__mem_state = VL_RAND_RESET_I(4);
    top__DOT__u_CPU__DOT__main_state = VL_RAND_RESET_I(8);
    top__DOT__u_CPU__DOT__next_main_state = VL_RAND_RESET_I(8);
    top__DOT__u_CPU__DOT__reg_w_ena = VL_RAND_RESET_I(1);
    top__DOT__u_CPU__DOT__reg_ad = VL_RAND_RESET_I(8);
    top__DOT__u_CPU__DOT__reg_w_data = VL_RAND_RESET_I(16);
    top__DOT__u_CPU__DOT__reg_ad_2 = VL_RAND_RESET_I(8);
    top__DOT__u_CPU__DOT__reg_w_data_2 = VL_RAND_RESET_I(16);
    top__DOT__u_CPU__DOT__PC_plus_ena = VL_RAND_RESET_I(1);
    top__DOT__u_CPU__DOT__mem_ad_reg = VL_RAND_RESET_I(16);
    top__DOT__u_CPU__DOT__mem_w_data_reg = VL_RAND_RESET_I(8);
    top__DOT__u_CPU__DOT__mem_w_ena_reg = VL_RAND_RESET_I(1);
    top__DOT__u_CPU__DOT__mem_r_ena_reg = VL_RAND_RESET_I(1);
    top__DOT__u_CPU__DOT__mem_out_reg = VL_RAND_RESET_I(8);
    top__DOT__u_CPU__DOT__mem_control_r_ena = VL_RAND_RESET_I(1);
    top__DOT__u_CPU__DOT__mem_control_w_ena = VL_RAND_RESET_I(1);
    top__DOT__u_CPU__DOT__mem_control_ad = VL_RAND_RESET_I(16);
    top__DOT__u_CPU__DOT__mem_control_w_data = VL_RAND_RESET_I(8);
    top__DOT__u_CPU__DOT__tem_reg = VL_RAND_RESET_I(8);
    top__DOT__u_CPU__DOT__tem_reg_w_ena = VL_RAND_RESET_I(1);
    top__DOT__u_CPU__DOT__tem_reg_w_data = VL_RAND_RESET_I(8);
    top__DOT__u_CPU__DOT__imm8_reg = VL_RAND_RESET_I(8);
    top__DOT__u_CPU__DOT__imm8_reg_clear = VL_RAND_RESET_I(1);
    top__DOT__u_CPU__DOT__imm16_reg = VL_RAND_RESET_I(16);
    top__DOT__u_CPU__DOT__imm16_reg_clear = VL_RAND_RESET_I(1);
    top__DOT__u_CPU__DOT__a_8 = VL_RAND_RESET_I(8);
    top__DOT__u_CPU__DOT__b_8 = VL_RAND_RESET_I(8);
    top__DOT__u_CPU__DOT__alu_op_8 = VL_RAND_RESET_I(5);
    top__DOT__u_CPU__DOT__cin_8 = VL_RAND_RESET_I(1);
    top__DOT__u_CPU__DOT__flag_8 = VL_RAND_RESET_I(4);
    top__DOT__u_CPU__DOT__alu_result_8 = VL_RAND_RESET_I(8);
    top__DOT__u_CPU__DOT__ins00__DOT__tem9 = VL_RAND_RESET_I(9);
    top__DOT__u_CPU__DOT__ins00__DOT__tem5 = VL_RAND_RESET_I(5);
    top__DOT__u_io_register__DOT__DIV = VL_RAND_RESET_I(8);
    top__DOT__u_io_register__DOT__TIMA = VL_RAND_RESET_I(8);
    top__DOT__u_io_register__DOT__DMA_start = VL_RAND_RESET_I(1);
    top__DOT__u_io_register__DOT__irq_timer_wire = VL_RAND_RESET_I(1);
    top__DOT__u_io_register__DOT__IF_w_ena = VL_RAND_RESET_I(1);
    top__DOT__u_io_register__DOT__IE_w_ena = VL_RAND_RESET_I(1);
    top__DOT__u_io_register__DOT__div_r_data = VL_RAND_RESET_I(8);
    top__DOT__u_io_register__DOT__div_w_ena = VL_RAND_RESET_I(1);
    top__DOT__u_io_register__DOT__div_r_ena = VL_RAND_RESET_I(1);
    top__DOT__u_io_register__DOT__tima_r_data = VL_RAND_RESET_I(8);
    top__DOT__u_io_register__DOT__tima_w_ena = VL_RAND_RESET_I(1);
    top__DOT__u_io_register__DOT__tima_r_ena = VL_RAND_RESET_I(1);
    top__DOT__u_io_register__DOT__tma_r_data = VL_RAND_RESET_I(8);
    top__DOT__u_io_register__DOT__tma_r_ena = VL_RAND_RESET_I(1);
    top__DOT__u_io_register__DOT__tma_w_ena = VL_RAND_RESET_I(1);
    top__DOT__u_io_register__DOT__tac_r_data = VL_RAND_RESET_I(8);
    top__DOT__u_io_register__DOT__tac_r_ena = VL_RAND_RESET_I(1);
    top__DOT__u_io_register__DOT__tac_w_ena = VL_RAND_RESET_I(1);
    top__DOT__u_io_register__DOT__dma_r_data = VL_RAND_RESET_I(8);
    top__DOT__u_io_register__DOT__dma_r_ena = VL_RAND_RESET_I(1);
    top__DOT__u_io_register__DOT__dma_w_ena = VL_RAND_RESET_I(1);
    top__DOT__u_io_register__DOT__ppu_io_r_data = VL_RAND_RESET_I(8);
    top__DOT__u_io_register__DOT__ppu_io_r_ena = VL_RAND_RESET_I(1);
    top__DOT__u_io_register__DOT__ppu_io_w_ena = VL_RAND_RESET_I(1);
    top__DOT__u_io_register__DOT__stat_r_data = VL_RAND_RESET_I(8);
    top__DOT__u_io_register__DOT__stat_r_ena = VL_RAND_RESET_I(1);
    top__DOT__u_io_register__DOT__stat_w_ena = VL_RAND_RESET_I(1);
    top__DOT__u_io_register__DOT__ly_r_data = VL_RAND_RESET_I(8);
    top__DOT__u_io_register__DOT__ly_r_ena = VL_RAND_RESET_I(1);
    top__DOT__u_io_register__DOT__ly_w_ena = VL_RAND_RESET_I(1);
    top__DOT__u_io_register__DOT__joy_r_ena = VL_RAND_RESET_I(1);
    top__DOT__u_io_register__DOT__joy_w_ena = VL_RAND_RESET_I(1);
    top__DOT__u_io_register__DOT__r_state = VL_RAND_RESET_I(4);
    top__DOT__u_io_register__DOT__next = VL_RAND_RESET_I(4);
    top__DOT__u_io_register__DOT__JOY = VL_RAND_RESET_I(8);
    top__DOT__u_io_register__DOT__irq_joypad = VL_RAND_RESET_I(1);
    top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg = VL_RAND_RESET_I(8);
    top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg = VL_RAND_RESET_I(8);
    top__DOT__u_io_register__DOT__inst_DIV__DOT__my_clk_counter = VL_RAND_RESET_I(5);
    top__DOT__u_io_register__DOT__inst_DIV__DOT__T_clk_counter = VL_RAND_RESET_I(16);
    top__DOT__u_io_register__DOT__inst_TIMA__DOT__TIMA = VL_RAND_RESET_I(8);
    top__DOT__u_io_register__DOT__inst_TIMA__DOT__my_clk_counter = VL_RAND_RESET_I(4);
    top__DOT__u_io_register__DOT__inst_TIMA__DOT__T_clk_counter = VL_RAND_RESET_I(16);
    top__DOT__u_io_register__DOT__inst_TIMA__DOT__T_cycle_ena = VL_RAND_RESET_I(1);
    top__DOT__u_io_register__DOT__inst_TIMA__DOT__M_cycle_ena = VL_RAND_RESET_I(1);
    top__DOT__u_io_register__DOT__inst_TIMA__DOT__M_4_counter = VL_RAND_RESET_I(16);
    top__DOT__u_io_register__DOT__inst_TIMA__DOT__M_16_counter = VL_RAND_RESET_I(16);
    top__DOT__u_io_register__DOT__inst_TIMA__DOT__M_64_counter = VL_RAND_RESET_I(16);
    top__DOT__u_io_register__DOT__inst_TIMA__DOT__M_256_counter = VL_RAND_RESET_I(16);
    top__DOT__u_io_register__DOT__inst_TIMA__DOT__TIMA_M_4_ena = VL_RAND_RESET_I(1);
    top__DOT__u_io_register__DOT__inst_TIMA__DOT__TIMA_M_16_ena = VL_RAND_RESET_I(1);
    top__DOT__u_io_register__DOT__inst_TIMA__DOT__TIMA_M_64_ena = VL_RAND_RESET_I(1);
    top__DOT__u_io_register__DOT__inst_TIMA__DOT__TIMA_M_256_ena = VL_RAND_RESET_I(1);
    top__DOT__u_io_register__DOT__inst_TIMA__DOT__TIMA_ena = VL_RAND_RESET_I(1);
    top__DOT__u_io_register__DOT__inst_TIMA__DOT__TIMA_overflow = VL_RAND_RESET_I(1);
    top__DOT__u_io_register__DOT__inst_TMA__DOT__TMA_reg = VL_RAND_RESET_I(8);
    top__DOT__u_io_register__DOT__inst_TAC__DOT__TAC_reg = VL_RAND_RESET_I(8);
    top__DOT__u_io_register__DOT__inst_DMA__DOT__DMA_reg = VL_RAND_RESET_I(8);
    top__DOT__u_io_register__DOT__inst_PPU_IO__DOT__LCDC_reg = VL_RAND_RESET_I(8);
    top__DOT__u_io_register__DOT__inst_PPU_IO__DOT__SCY_reg = VL_RAND_RESET_I(8);
    top__DOT__u_io_register__DOT__inst_PPU_IO__DOT__SCX_reg = VL_RAND_RESET_I(8);
    top__DOT__u_io_register__DOT__inst_PPU_IO__DOT__LYC_reg = VL_RAND_RESET_I(8);
    top__DOT__u_io_register__DOT__inst_PPU_IO__DOT__BGP_reg = VL_RAND_RESET_I(8);
    top__DOT__u_io_register__DOT__inst_PPU_IO__DOT__OBP0_reg = VL_RAND_RESET_I(8);
    top__DOT__u_io_register__DOT__inst_PPU_IO__DOT__OBP1_reg = VL_RAND_RESET_I(8);
    top__DOT__u_io_register__DOT__inst_PPU_IO__DOT__WX_reg = VL_RAND_RESET_I(8);
    top__DOT__u_io_register__DOT__inst_PPU_IO__DOT__WY_reg = VL_RAND_RESET_I(8);
    top__DOT__u_io_register__DOT__inst_STAT__DOT__STAT_reg = VL_RAND_RESET_I(8);
    top__DOT__u_io_register__DOT__inst_LY__DOT__LY_reg = VL_RAND_RESET_I(8);
    top__DOT__u_PPU__DOT__clk_counter = VL_RAND_RESET_I(4);
    top__DOT__u_PPU__DOT__m_clk_counter = VL_RAND_RESET_I(32);
    top__DOT__u_PPU__DOT__main_state = VL_RAND_RESET_I(5);
    top__DOT__u_PPU__DOT__line_counter = VL_RAND_RESET_I(8);
    top__DOT__u_PPU__DOT__mode0_enter = VL_RAND_RESET_I(1);
    top__DOT__u_PPU__DOT__mode1_enter = VL_RAND_RESET_I(1);
    top__DOT__u_PPU__DOT__mode2_enter = VL_RAND_RESET_I(1);
    top__DOT__u_PPU__DOT__mode3_enter = VL_RAND_RESET_I(1);
    top__DOT__u_PPU__DOT__oam_scan = VL_RAND_RESET_Q(40);
    VL_RAND_RESET_W(160, top__DOT__u_PPU__DOT__obj_ad);
    VL_RAND_RESET_W(80, top__DOT__u_PPU__DOT__obj_y);
    VL_RAND_RESET_W(80, top__DOT__u_PPU__DOT__obj_x);
    VL_RAND_RESET_W(80, top__DOT__u_PPU__DOT__obj_tile_index);
    VL_RAND_RESET_W(80, top__DOT__u_PPU__DOT__obj_flag);
    top__DOT__u_PPU__DOT__array_index = VL_RAND_RESET_I(4);
    top__DOT__u_PPU__DOT__valid_obj_counter = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(512, top__DOT__u_PPU__DOT__obj_scanline);
    VL_RAND_RESET_W(256, top__DOT__u_PPU__DOT__obj_priority);
    VL_RAND_RESET_W(256, top__DOT__u_PPU__DOT__obj_palette);
    VL_RAND_RESET_W(2048, top__DOT__u_PPU__DOT__obj_x_buffer);
    top__DOT__u_PPU__DOT__sub_state = VL_RAND_RESET_I(16);
    top__DOT__u_PPU__DOT__sub_counter_1 = VL_RAND_RESET_I(16);
    top__DOT__u_PPU__DOT__sub_counter_2 = VL_RAND_RESET_I(16);
    top__DOT__u_PPU__DOT__sub_counter_3 = VL_RAND_RESET_I(16);
    top__DOT__u_PPU__DOT__mode3_state = VL_RAND_RESET_I(4);
    top__DOT__u_PPU__DOT__mode3_counter_1 = VL_RAND_RESET_I(8);
    top__DOT__u_PPU__DOT__map_x = VL_RAND_RESET_I(8);
    top__DOT__u_PPU__DOT__map_y = VL_RAND_RESET_I(8);
    top__DOT__u_PPU__DOT__win_x = VL_RAND_RESET_I(8);
    top__DOT__u_PPU__DOT__win_y = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(512, top__DOT__u_PPU__DOT__tile_buffer);
    top__DOT__u_PPU__DOT__tile_buffer_index = VL_RAND_RESET_I(8);
    top__DOT__u_PPU__DOT__i = VL_RAND_RESET_I(32);
    top__DOT__u_PPU__DOT__obj_row = VL_RAND_RESET_I(8);
    top__DOT__u_PPU__DOT__shifted_data = VL_RAND_RESET_I(8);
    top__DOT__u_PPU__DOT____Vlvbound1 = VL_RAND_RESET_I(1);
    top__DOT__u_PPU__DOT____Vlvbound2 = VL_RAND_RESET_I(16);
    top__DOT__u_PPU__DOT____Vlvbound3 = VL_RAND_RESET_I(8);
    top__DOT__u_PPU__DOT____Vlvbound4 = VL_RAND_RESET_I(1);
    top__DOT__u_PPU__DOT____Vlvbound5 = VL_RAND_RESET_I(16);
    top__DOT__u_PPU__DOT____Vlvbound6 = VL_RAND_RESET_I(8);
    top__DOT__u_PPU__DOT____Vlvbound7 = VL_RAND_RESET_I(1);
    top__DOT__u_PPU__DOT____Vlvbound8 = VL_RAND_RESET_I(16);
    top__DOT__u_PPU__DOT____Vlvbound9 = VL_RAND_RESET_I(8);
    top__DOT__u_PPU__DOT____Vlvbound10 = VL_RAND_RESET_I(1);
    top__DOT__u_PPU__DOT____Vlvbound11 = VL_RAND_RESET_I(16);
    top__DOT__u_PPU__DOT____Vlvbound12 = VL_RAND_RESET_I(8);
    top__DOT__u_PPU__DOT____Vlvbound13 = VL_RAND_RESET_I(8);
    top__DOT__u_PPU__DOT____Vlvbound14 = VL_RAND_RESET_I(8);
    top__DOT__u_PPU__DOT____Vlvbound15 = VL_RAND_RESET_I(8);
    top__DOT__u_PPU__DOT____Vlvbound16 = VL_RAND_RESET_I(8);
    top__DOT__u_PPU__DOT____Vlvbound17 = VL_RAND_RESET_I(8);
    top__DOT__u_PPU__DOT____Vlvbound18 = VL_RAND_RESET_I(8);
    top__DOT__u_Memory_Interface__DOT__bank_mask = VL_RAND_RESET_I(7);
    top__DOT__u_Memory_Interface__DOT__ram_mask = VL_RAND_RESET_I(2);
    top__DOT__u_Memory_Interface__DOT__dma_main_req = VL_RAND_RESET_I(1);
    top__DOT__u_Memory_Interface__DOT__dma_oam_req = VL_RAND_RESET_I(1);
    top__DOT__u_Memory_Interface__DOT__ppu_vram_req = VL_RAND_RESET_I(1);
    top__DOT__u_Memory_Interface__DOT__ppu_oam_req = VL_RAND_RESET_I(1);
    top__DOT__u_Memory_Interface__DOT__cpu_main_req = VL_RAND_RESET_I(1);
    top__DOT__u_Memory_Interface__DOT__cpu_hram_req = VL_RAND_RESET_I(1);
    top__DOT__u_Memory_Interface__DOT__cpu_vram_req = VL_RAND_RESET_I(1);
    top__DOT__u_Memory_Interface__DOT__cpu_oam_req = VL_RAND_RESET_I(1);
    top__DOT__u_Memory_Interface__DOT__cpu_state = VL_RAND_RESET_I(4);
    top__DOT__u_Memory_Interface__DOT__cpu_next = VL_RAND_RESET_I(4);
    top__DOT__u_Memory_Interface__DOT__ppu_state = VL_RAND_RESET_I(4);
    top__DOT__u_Memory_Interface__DOT__ppu_next = VL_RAND_RESET_I(4);
    top__DOT__u_Memory_Interface__DOT__dma_state = VL_RAND_RESET_I(4);
    top__DOT__u_Memory_Interface__DOT__dma_next = VL_RAND_RESET_I(4);
    top__DOT__u_Memory_Interface__DOT__MBC1_0000_1FFF = VL_RAND_RESET_I(8);
    top__DOT__u_Memory_Interface__DOT__MBC1_2000_3FFF = VL_RAND_RESET_I(5);
    top__DOT__u_Memory_Interface__DOT__MBC1_4000_5FFF = VL_RAND_RESET_I(2);
    top__DOT__u_Memory_Interface__DOT__MBC1_6000_7FFF = VL_RAND_RESET_I(1);
    top__DOT__u_Memory_Interface__DOT__MBC1_0000_w_ena = VL_RAND_RESET_I(1);
    top__DOT__u_Memory_Interface__DOT__MBC1_2000_w_ena = VL_RAND_RESET_I(1);
    top__DOT__u_Memory_Interface__DOT__MBC1_4000_w_ena = VL_RAND_RESET_I(1);
    top__DOT__u_Memory_Interface__DOT__MBC1_6000_w_ena = VL_RAND_RESET_I(1);
    top__DOT__u_Memory_Interface__DOT__MBC1_0000_w_data = VL_RAND_RESET_I(8);
    top__DOT__u_Memory_Interface__DOT__MBC1_2000_w_data = VL_RAND_RESET_I(5);
    top__DOT__u_Memory_Interface__DOT__MBC1_4000_w_data = VL_RAND_RESET_I(2);
    top__DOT__u_Memory_Interface__DOT__MBC1_6000_w_data = VL_RAND_RESET_I(1);
    top__DOT__u_OAM_DMA__DOT__state = VL_RAND_RESET_I(4);
    top__DOT__u_OAM_DMA__DOT__clk_counter = VL_RAND_RESET_I(8);
    top__DOT__u_OAM_DMA__DOT__real_clk_counter = VL_RAND_RESET_I(16);
    top__DOT__u_OAM_DMA__DOT__tem_reg = VL_RAND_RESET_I(8);
    top__DOT__u_OAM_DMA__DOT__r_ad_reg = VL_RAND_RESET_I(16);
    top__DOT__u_OAM_DMA__DOT__w_ad_reg = VL_RAND_RESET_I(16);
    top__DOT__u_OAM_DMA__DOT__w_end = VL_RAND_RESET_I(1);
    top__DOT__u_OAM_DMA__DOT__r_end = VL_RAND_RESET_I(1);
    __Vdly__top__DOT__u_CPU__DOT__tem_reg = VL_RAND_RESET_I(8);
    __Vdly__top__DOT__u_CPU__DOT__mem_state = VL_RAND_RESET_I(4);
    __Vdly__top__DOT__u_CPU__DOT__main_state = VL_RAND_RESET_I(8);
    __Vdly__top__DOT__u_CPU__DOT__opcode_valid = VL_RAND_RESET_I(1);
    __Vdly__top__DOT__u_CPU__DOT__EI_pending = VL_RAND_RESET_I(1);
    __Vdly__top__DOT__u_CPU__DOT__T_clk_counter = VL_RAND_RESET_I(8);
    __Vdly__top__DOT__u_CPU__DOT__PC = VL_RAND_RESET_I(16);
    __Vdly__top__DOT__u_CPU__DOT__SP = VL_RAND_RESET_I(16);
    __Vdly__top__DOT__u_CPU__DOT__IME = VL_RAND_RESET_I(1);
    __Vdly__top__DOT__irq_clear = VL_RAND_RESET_I(8);
    __Vdly__top__DOT__u_CPU__DOT__mem_w_ena_reg = VL_RAND_RESET_I(1);
    __Vdly__top__DOT__u_CPU__DOT__mem_r_ena_reg = VL_RAND_RESET_I(1);
    __Vdly__top__DOT__u_CPU__DOT__mem_out_reg = VL_RAND_RESET_I(8);
    __Vdly__top__DOT__u_CPU__DOT__IF_reg = VL_RAND_RESET_I(8);
    __Vdly__top__DOT__u_CPU__DOT__my_clk_counter = VL_RAND_RESET_I(4);
    __Vdly__top__DOT__u_io_register__DOT__JOY = VL_RAND_RESET_I(8);
    __Vdly__top__DOT__u_io_register__DOT__inst_DIV__DOT__my_clk_counter = VL_RAND_RESET_I(5);
    __Vdly__top__DOT__u_io_register__DOT__inst_DIV__DOT__T_clk_counter = VL_RAND_RESET_I(16);
    __Vdly__top__DOT__u_io_register__DOT__inst_TIMA__DOT__my_clk_counter = VL_RAND_RESET_I(4);
    __Vdly__top__DOT__u_io_register__DOT__inst_TIMA__DOT__T_clk_counter = VL_RAND_RESET_I(16);
    __Vdly__top__DOT__u_io_register__DOT__inst_TIMA__DOT__M_4_counter = VL_RAND_RESET_I(16);
    __Vdly__top__DOT__u_io_register__DOT__inst_TIMA__DOT__M_16_counter = VL_RAND_RESET_I(16);
    __Vdly__top__DOT__u_io_register__DOT__inst_TIMA__DOT__M_64_counter = VL_RAND_RESET_I(16);
    __Vdly__top__DOT__u_io_register__DOT__inst_TIMA__DOT__M_256_counter = VL_RAND_RESET_I(16);
    __Vdly__top__DOT__u_io_register__DOT__inst_TIMA__DOT__TIMA_overflow = VL_RAND_RESET_I(1);
    __Vdly__top__DOT__u_io_register__DOT__inst_TIMA__DOT__TIMA = VL_RAND_RESET_I(8);
    __Vdly__top__DOT__u_PPU__DOT__main_state = VL_RAND_RESET_I(5);
    __Vdly__top__DOT__u_PPU__DOT__m_clk_counter = VL_RAND_RESET_I(32);
    __Vdly__top__DOT__u_PPU__DOT__line_counter = VL_RAND_RESET_I(8);
    __Vdly__top__DOT__u_PPU__DOT__sub_state = VL_RAND_RESET_I(16);
    __Vdly__top__DOT__u_PPU__DOT__sub_counter_1 = VL_RAND_RESET_I(16);
    __Vdly__top__DOT__u_PPU__DOT__sub_counter_2 = VL_RAND_RESET_I(16);
    __Vdly__top__DOT__u_PPU__DOT__sub_counter_3 = VL_RAND_RESET_I(16);
    VL_RAND_RESET_W(160, __Vdly__top__DOT__u_PPU__DOT__obj_ad);
    VL_RAND_RESET_W(80, __Vdly__top__DOT__u_PPU__DOT__obj_x);
    VL_RAND_RESET_W(80, __Vdly__top__DOT__u_PPU__DOT__obj_tile_index);
    VL_RAND_RESET_W(80, __Vdly__top__DOT__u_PPU__DOT__obj_flag);
    VL_RAND_RESET_W(512, __Vdly__top__DOT__u_PPU__DOT__obj_scanline);
    VL_RAND_RESET_W(256, __Vdly__top__DOT__u_PPU__DOT__obj_priority);
    VL_RAND_RESET_W(256, __Vdly__top__DOT__u_PPU__DOT__obj_palette);
    __Vdly__top__DOT__u_PPU__DOT__array_index = VL_RAND_RESET_I(4);
    __Vdly__top__DOT__u_PPU__DOT__valid_obj_counter = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(2048, __Vdly__top__DOT__u_PPU__DOT__obj_x_buffer);
    VL_RAND_RESET_W(512, __Vdly__top__DOT__u_PPU__DOT__tile_buffer);
    __Vdly__top__DOT__u_PPU__DOT__mode3_state = VL_RAND_RESET_I(4);
    __Vdly__top__DOT__u_PPU__DOT__mode3_counter_1 = VL_RAND_RESET_I(8);
    __Vdly__top__DOT__u_OAM_DMA__DOT__state = VL_RAND_RESET_I(4);
    __Vdly__top__DOT__u_OAM_DMA__DOT__w_end = VL_RAND_RESET_I(1);
    __Vdly__top__DOT__u_OAM_DMA__DOT__r_end = VL_RAND_RESET_I(1);
    __Vdly__top__DOT__u_OAM_DMA__DOT__clk_counter = VL_RAND_RESET_I(8);
    __Vdly__top__DOT__u_OAM_DMA__DOT__real_clk_counter = VL_RAND_RESET_I(16);
    __Vdly__top__DOT__u_OAM_DMA__DOT__tem_reg = VL_RAND_RESET_I(8);
    __Vdly__top__DOT__u_OAM_DMA__DOT__r_ad_reg = VL_RAND_RESET_I(16);
    __Vdly__top__DOT__u_OAM_DMA__DOT__w_ad_reg = VL_RAND_RESET_I(16);
    __Vchglast__TOP__top__DOT__u_CPU__DOT__flag_8 = VL_RAND_RESET_I(4);
    __Vchglast__TOP__top__DOT__u_CPU__DOT__alu_result_8 = VL_RAND_RESET_I(8);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
