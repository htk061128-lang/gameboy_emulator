// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop.h"
#include "Vtop__Syms.h"

VL_INLINE_OPT void Vtop::_sequent__TOP__4(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_sequent__TOP__4\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__u_Memory_Interface__DOT__dma_state = 0U;
        vlTOPp->top__DOT__u_Memory_Interface__DOT__cpu_state = 0U;
        vlTOPp->top__DOT__u_Memory_Interface__DOT__ppu_state = 0U;
    } else {
        vlTOPp->top__DOT__u_Memory_Interface__DOT__dma_state 
            = vlTOPp->top__DOT__u_Memory_Interface__DOT__dma_next;
        vlTOPp->top__DOT__u_Memory_Interface__DOT__cpu_state 
            = vlTOPp->top__DOT__u_Memory_Interface__DOT__cpu_next;
        vlTOPp->top__DOT__u_Memory_Interface__DOT__ppu_state 
            = vlTOPp->top__DOT__u_Memory_Interface__DOT__ppu_next;
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__u_Memory_Interface__DOT__MBC1_6000_7FFF = 0U;
    } else {
        if (vlTOPp->top__DOT__u_Memory_Interface__DOT__MBC1_6000_w_ena) {
            vlTOPp->top__DOT__u_Memory_Interface__DOT__MBC1_6000_7FFF 
                = vlTOPp->top__DOT__u_Memory_Interface__DOT__MBC1_6000_w_data;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__u_Memory_Interface__DOT__MBC1_4000_5FFF = 0U;
    } else {
        if (vlTOPp->top__DOT__u_Memory_Interface__DOT__MBC1_4000_w_ena) {
            vlTOPp->top__DOT__u_Memory_Interface__DOT__MBC1_4000_5FFF 
                = vlTOPp->top__DOT__u_Memory_Interface__DOT__MBC1_4000_w_data;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__u_Memory_Interface__DOT__MBC1_2000_3FFF = 1U;
    } else {
        if (vlTOPp->top__DOT__u_Memory_Interface__DOT__MBC1_2000_w_ena) {
            vlTOPp->top__DOT__u_Memory_Interface__DOT__MBC1_2000_3FFF 
                = ((0U == (IData)(vlTOPp->top__DOT__u_Memory_Interface__DOT__MBC1_2000_w_data))
                    ? 1U : (IData)(vlTOPp->top__DOT__u_Memory_Interface__DOT__MBC1_2000_w_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__u_Memory_Interface__DOT__MBC1_0000_1FFF = 0U;
    } else {
        if (vlTOPp->top__DOT__u_Memory_Interface__DOT__MBC1_0000_w_ena) {
            vlTOPp->top__DOT__u_Memory_Interface__DOT__MBC1_0000_1FFF 
                = vlTOPp->top__DOT__u_Memory_Interface__DOT__MBC1_0000_w_data;
        }
    }
}

VL_INLINE_OPT void Vtop::_combo__TOP__7(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_combo__TOP__7\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->top__DOT__u_CPU__DOT__mem_control_w_data = 0U;
    vlTOPp->top__DOT__u_CPU__DOT__b_8 = 0U;
    vlTOPp->top__DOT__u_CPU__DOT__reg_w_data = 0U;
    vlTOPp->top__DOT__u_CPU__DOT__reg_w_data_2 = 0U;
    vlTOPp->top__DOT__u_CPU__DOT__Operand_r8 = 0U;
    vlTOPp->top__DOT__u_CPU__DOT__Source_r8 = 0U;
    vlTOPp->top__DOT__u_CPU__DOT__Operand_r16 = 0U;
    vlTOPp->top__DOT__u_CPU__DOT__register_r16stk = 0U;
    if (((0U == (3U & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                       >> 6U))) & (~ (IData)(vlTOPp->top__DOT__u_CPU__DOT__prefix_valid)))) {
        if ((0U == (7U & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                          >> 3U)))) {
            vlTOPp->top__DOT__u_CPU__DOT__Operand_r8 
                = vlTOPp->top__DOT__u_CPU__DOT__B;
        } else {
            if ((1U == (7U & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                              >> 3U)))) {
                vlTOPp->top__DOT__u_CPU__DOT__Operand_r8 
                    = vlTOPp->top__DOT__u_CPU__DOT__C;
            } else {
                if ((2U == (7U & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                                  >> 3U)))) {
                    vlTOPp->top__DOT__u_CPU__DOT__Operand_r8 
                        = vlTOPp->top__DOT__u_CPU__DOT__D;
                } else {
                    if ((3U == (7U & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                                      >> 3U)))) {
                        vlTOPp->top__DOT__u_CPU__DOT__Operand_r8 
                            = vlTOPp->top__DOT__u_CPU__DOT__E;
                    } else {
                        if ((4U == (7U & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                                          >> 3U)))) {
                            vlTOPp->top__DOT__u_CPU__DOT__Operand_r8 
                                = vlTOPp->top__DOT__u_CPU__DOT__H;
                        } else {
                            if ((5U == (7U & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                                              >> 3U)))) {
                                vlTOPp->top__DOT__u_CPU__DOT__Operand_r8 
                                    = vlTOPp->top__DOT__u_CPU__DOT__L;
                            } else {
                                if ((7U == (7U & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                                                  >> 3U)))) {
                                    vlTOPp->top__DOT__u_CPU__DOT__Operand_r8 
                                        = vlTOPp->top__DOT__u_CPU__DOT__A;
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((0U == (7U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
            vlTOPp->top__DOT__u_CPU__DOT__Operand_r8 
                = vlTOPp->top__DOT__u_CPU__DOT__B;
        } else {
            if ((1U == (7U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                vlTOPp->top__DOT__u_CPU__DOT__Operand_r8 
                    = vlTOPp->top__DOT__u_CPU__DOT__C;
            } else {
                if ((2U == (7U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                    vlTOPp->top__DOT__u_CPU__DOT__Operand_r8 
                        = vlTOPp->top__DOT__u_CPU__DOT__D;
                } else {
                    if ((3U == (7U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                        vlTOPp->top__DOT__u_CPU__DOT__Operand_r8 
                            = vlTOPp->top__DOT__u_CPU__DOT__E;
                    } else {
                        if ((4U == (7U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                            vlTOPp->top__DOT__u_CPU__DOT__Operand_r8 
                                = vlTOPp->top__DOT__u_CPU__DOT__H;
                        } else {
                            if ((5U == (7U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                                vlTOPp->top__DOT__u_CPU__DOT__Operand_r8 
                                    = vlTOPp->top__DOT__u_CPU__DOT__L;
                            } else {
                                if ((7U == (7U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                                    vlTOPp->top__DOT__u_CPU__DOT__Operand_r8 
                                        = vlTOPp->top__DOT__u_CPU__DOT__A;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((0U == (3U & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                      >> 4U)))) {
        vlTOPp->top__DOT__u_CPU__DOT__Operand_r16 = 
            (((IData)(vlTOPp->top__DOT__u_CPU__DOT__B) 
              << 8U) | (IData)(vlTOPp->top__DOT__u_CPU__DOT__C));
    } else {
        if ((1U == (3U & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                          >> 4U)))) {
            vlTOPp->top__DOT__u_CPU__DOT__Operand_r16 
                = (((IData)(vlTOPp->top__DOT__u_CPU__DOT__D) 
                    << 8U) | (IData)(vlTOPp->top__DOT__u_CPU__DOT__E));
        } else {
            if ((2U == (3U & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                              >> 4U)))) {
                vlTOPp->top__DOT__u_CPU__DOT__Operand_r16 
                    = (((IData)(vlTOPp->top__DOT__u_CPU__DOT__H) 
                        << 8U) | (IData)(vlTOPp->top__DOT__u_CPU__DOT__L));
            } else {
                if ((3U == (3U & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                                  >> 4U)))) {
                    vlTOPp->top__DOT__u_CPU__DOT__Operand_r16 
                        = vlTOPp->top__DOT__u_CPU__DOT__SP;
                }
            }
        }
    }
    if ((0U == (7U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
        vlTOPp->top__DOT__u_CPU__DOT__Source_r8 = vlTOPp->top__DOT__u_CPU__DOT__B;
    } else {
        if ((1U == (7U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
            vlTOPp->top__DOT__u_CPU__DOT__Source_r8 
                = vlTOPp->top__DOT__u_CPU__DOT__C;
        } else {
            if ((2U == (7U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                vlTOPp->top__DOT__u_CPU__DOT__Source_r8 
                    = vlTOPp->top__DOT__u_CPU__DOT__D;
            } else {
                if ((3U == (7U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                    vlTOPp->top__DOT__u_CPU__DOT__Source_r8 
                        = vlTOPp->top__DOT__u_CPU__DOT__E;
                } else {
                    if ((4U == (7U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                        vlTOPp->top__DOT__u_CPU__DOT__Source_r8 
                            = vlTOPp->top__DOT__u_CPU__DOT__H;
                    } else {
                        if ((5U == (7U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                            vlTOPp->top__DOT__u_CPU__DOT__Source_r8 
                                = vlTOPp->top__DOT__u_CPU__DOT__L;
                        } else {
                            if ((7U == (7U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                                vlTOPp->top__DOT__u_CPU__DOT__Source_r8 
                                    = vlTOPp->top__DOT__u_CPU__DOT__A;
                            }
                        }
                    }
                }
            }
        }
    }
    if ((0U == (3U & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                      >> 4U)))) {
        vlTOPp->top__DOT__u_CPU__DOT__register_r16stk 
            = (((IData)(vlTOPp->top__DOT__u_CPU__DOT__B) 
                << 8U) | (IData)(vlTOPp->top__DOT__u_CPU__DOT__C));
    } else {
        if ((1U == (3U & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                          >> 4U)))) {
            vlTOPp->top__DOT__u_CPU__DOT__register_r16stk 
                = (((IData)(vlTOPp->top__DOT__u_CPU__DOT__D) 
                    << 8U) | (IData)(vlTOPp->top__DOT__u_CPU__DOT__E));
        } else {
            if ((2U == (3U & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                              >> 4U)))) {
                vlTOPp->top__DOT__u_CPU__DOT__register_r16stk 
                    = (((IData)(vlTOPp->top__DOT__u_CPU__DOT__H) 
                        << 8U) | (IData)(vlTOPp->top__DOT__u_CPU__DOT__L));
            } else {
                if ((3U == (3U & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                                  >> 4U)))) {
                    vlTOPp->top__DOT__u_CPU__DOT__register_r16stk 
                        = (((IData)(vlTOPp->top__DOT__u_CPU__DOT__A) 
                            << 8U) | (IData)(vlTOPp->top__DOT__u_CPU__DOT__F));
                }
            }
        }
    }
    if (vlTOPp->top__DOT__u_CPU__DOT__opcode_valid) {
        if ((0x80U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                if ((0xcbU != (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                    if (((~ ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                             >> 5U)) & (0U == (7U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))))) {
                        if ((1U & (~ ((((((((0U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter)) 
                                            | (1U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                           | (2U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                          | (3U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                         | (4U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                        | (5U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                       | (6U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                      | (7U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter)))))) {
                            if (((((((((8U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter)) 
                                       | (9U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                      | (0xaU == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                     | (0xbU == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                    | (0xcU == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                   | (0xdU == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                  | (0xeU == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) 
                                 | (0xfU == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter)))) {
                                if ((8U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                    vlTOPp->top__DOT__u_CPU__DOT__reg_w_data 
                                        = ((0xff00U 
                                            & (IData)(vlTOPp->top__DOT__u_CPU__DOT__PC)) 
                                           | (IData)(vlTOPp->top__DOT__u_CPU__DOT__mem_out_reg));
                                    vlTOPp->top__DOT__u_CPU__DOT__reg_w_data_2 
                                        = (0xffffU 
                                           & ((IData)(1U) 
                                              + (IData)(vlTOPp->top__DOT__u_CPU__DOT__SP)));
                                } else {
                                    if ((9U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        if ((0xaU != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                            if ((0xbU 
                                                 != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                if (
                                                    (0xcU 
                                                     == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                    vlTOPp->top__DOT__u_CPU__DOT__reg_w_data 
                                                        = 
                                                        (((IData)(vlTOPp->top__DOT__u_CPU__DOT__mem_out_reg) 
                                                          << 8U) 
                                                         | (0xffU 
                                                            & (IData)(vlTOPp->top__DOT__u_CPU__DOT__PC)));
                                                    vlTOPp->top__DOT__u_CPU__DOT__reg_w_data_2 
                                                        = 
                                                        (0xffffU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlTOPp->top__DOT__u_CPU__DOT__SP)));
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (((~ ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                                 >> 5U)) & (2U == (7U 
                                                   & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))))) {
                            if ((0U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                if ((8U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                    if ((9U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        if ((0xaU != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                            if ((0xbU 
                                                 != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                if (
                                                    (0xcU 
                                                     == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                    vlTOPp->top__DOT__u_CPU__DOT__reg_w_data 
                                                        = vlTOPp->top__DOT__u_CPU__DOT__imm16_reg;
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
                                    if ((0U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        if ((8U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                            if ((9U 
                                                 != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                if (
                                                    (0xaU 
                                                     != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                    if (
                                                        (0xbU 
                                                         != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                        if (
                                                            (0xcU 
                                                             != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                            if (
                                                                (0xdU 
                                                                 != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                vlTOPp->top__DOT__u_CPU__DOT__mem_control_w_data 
                                                                    = 
                                                                    (0xffU 
                                                                     & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__PC) 
                                                                        >> 8U));
                                                                vlTOPp->top__DOT__u_CPU__DOT__reg_w_data 
                                                                    = 
                                                                    (0xffffU 
                                                                     & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__SP) 
                                                                        - (IData)(1U)));
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if ((0xfU != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        if ((0x10U 
                                             != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                            if ((0x11U 
                                                 != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                if (
                                                    (0x12U 
                                                     == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                    vlTOPp->top__DOT__u_CPU__DOT__mem_control_w_data 
                                                        = 
                                                        (0xffU 
                                                         & (IData)(vlTOPp->top__DOT__u_CPU__DOT__PC));
                                                    vlTOPp->top__DOT__u_CPU__DOT__reg_w_data 
                                                        = 
                                                        (0xffffU 
                                                         & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__SP) 
                                                            - (IData)(1U)));
                                                } else {
                                                    if (
                                                        (0x13U 
                                                         != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                        if (
                                                            (0x14U 
                                                             == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                            vlTOPp->top__DOT__u_CPU__DOT__reg_w_data 
                                                                = vlTOPp->top__DOT__u_CPU__DOT__imm16_reg;
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
                                        if ((0U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                            if ((1U 
                                                 != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                if (
                                                    (2U 
                                                     != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                    if (
                                                        (3U 
                                                         != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                        if (
                                                            (4U 
                                                             != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                            if (
                                                                (5U 
                                                                 != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                if (
                                                                    (6U 
                                                                     == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                    vlTOPp->top__DOT__u_CPU__DOT__mem_control_w_data 
                                                                        = 
                                                                        (0xffU 
                                                                         & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__PC) 
                                                                            >> 8U));
                                                                    vlTOPp->top__DOT__u_CPU__DOT__reg_w_data 
                                                                        = 
                                                                        (0xffffU 
                                                                         & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__SP) 
                                                                            - (IData)(1U)));
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        if ((8U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                            if ((9U 
                                                 != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                if (
                                                    (0xaU 
                                                     == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                    vlTOPp->top__DOT__u_CPU__DOT__mem_control_w_data 
                                                        = 
                                                        (0xffU 
                                                         & (IData)(vlTOPp->top__DOT__u_CPU__DOT__PC));
                                                    vlTOPp->top__DOT__u_CPU__DOT__reg_w_data 
                                                        = 
                                                        (0xffffU 
                                                         & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__SP) 
                                                            - (IData)(1U)));
                                                } else {
                                                    if (
                                                        (0xbU 
                                                         != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                        if (
                                                            (0xcU 
                                                             == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                            vlTOPp->top__DOT__u_CPU__DOT__reg_w_data 
                                                                = 
                                                                (0x38U 
                                                                 & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode));
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
                                                 != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                if (
                                                    (1U 
                                                     != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                    if (
                                                        (2U 
                                                         == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                        vlTOPp->top__DOT__u_CPU__DOT__reg_w_data 
                                                            = 
                                                            (0xffffU 
                                                             & ((IData)(1U) 
                                                                + (IData)(vlTOPp->top__DOT__u_CPU__DOT__SP)));
                                                    } else {
                                                        if (
                                                            (3U 
                                                             != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                            if (
                                                                (4U 
                                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                vlTOPp->top__DOT__u_CPU__DOT__tem_reg_w_data 
                                                                    = vlTOPp->top__DOT__u_CPU__DOT__mem_out_reg;
                                                            } else {
                                                                if (
                                                                    (5U 
                                                                     != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                    if (
                                                                        (6U 
                                                                         == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                        vlTOPp->top__DOT__u_CPU__DOT__reg_w_data 
                                                                            = 
                                                                            (0xffffU 
                                                                             & ((IData)(1U) 
                                                                                + (IData)(vlTOPp->top__DOT__u_CPU__DOT__SP)));
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            if ((8U 
                                                 != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                if (
                                                    (9U 
                                                     != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                    if (
                                                        (0xaU 
                                                         != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                        if (
                                                            (0xbU 
                                                             != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                            if (
                                                                (0xcU 
                                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                vlTOPp->top__DOT__u_CPU__DOT__reg_w_data 
                                                                    = 
                                                                    (((IData)(vlTOPp->top__DOT__u_CPU__DOT__mem_out_reg) 
                                                                      << 8U) 
                                                                     | (IData)(vlTOPp->top__DOT__u_CPU__DOT__tem_reg));
                                                                vlTOPp->top__DOT__u_CPU__DOT__tem_reg_w_data = 0U;
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
                                                     != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                    if (
                                                        (1U 
                                                         != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                        if (
                                                            (2U 
                                                             == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                            vlTOPp->top__DOT__u_CPU__DOT__mem_control_w_data 
                                                                = 
                                                                (0xffU 
                                                                 & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__register_r16stk) 
                                                                    >> 8U));
                                                            vlTOPp->top__DOT__u_CPU__DOT__reg_w_data 
                                                                = 
                                                                (0xffffU 
                                                                 & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__SP) 
                                                                    - (IData)(1U)));
                                                        } else {
                                                            if (
                                                                (3U 
                                                                 != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                if (
                                                                    (4U 
                                                                     != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                    if (
                                                                        (5U 
                                                                         != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                        if (
                                                                            (6U 
                                                                             == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                            vlTOPp->top__DOT__u_CPU__DOT__mem_control_w_data 
                                                                                = 
                                                                                (0xffU 
                                                                                & (IData)(vlTOPp->top__DOT__u_CPU__DOT__register_r16stk));
                                                                            vlTOPp->top__DOT__u_CPU__DOT__reg_w_data 
                                                                                = 
                                                                                (0xffffU 
                                                                                & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__SP) 
                                                                                - (IData)(1U)));
                                                                        }
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
                                                         != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                        if (
                                                            (4U 
                                                             == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                            vlTOPp->top__DOT__u_CPU__DOT__b_8 
                                                                = vlTOPp->top__DOT__u_CPU__DOT__imm8_reg;
                                                            vlTOPp->top__DOT__u_CPU__DOT__reg_w_data 
                                                                = 
                                                                (((IData)(vlTOPp->top__DOT__u_CPU__DOT__alu_result_8) 
                                                                  << 8U) 
                                                                 | ((IData)(vlTOPp->top__DOT__u_CPU__DOT__flag_8) 
                                                                    << 4U));
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
                                                             != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                            if (
                                                                (4U 
                                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                vlTOPp->top__DOT__u_CPU__DOT__b_8 
                                                                    = vlTOPp->top__DOT__u_CPU__DOT__imm8_reg;
                                                                vlTOPp->top__DOT__u_CPU__DOT__reg_w_data 
                                                                    = 
                                                                    (((IData)(vlTOPp->top__DOT__u_CPU__DOT__alu_result_8) 
                                                                      << 8U) 
                                                                     | ((IData)(vlTOPp->top__DOT__u_CPU__DOT__flag_8) 
                                                                        << 4U));
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
                                                                 != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                if (
                                                                    (4U 
                                                                     == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                    vlTOPp->top__DOT__u_CPU__DOT__b_8 
                                                                        = vlTOPp->top__DOT__u_CPU__DOT__imm8_reg;
                                                                    vlTOPp->top__DOT__u_CPU__DOT__reg_w_data 
                                                                        = 
                                                                        (((IData)(vlTOPp->top__DOT__u_CPU__DOT__alu_result_8) 
                                                                          << 8U) 
                                                                         | ((IData)(vlTOPp->top__DOT__u_CPU__DOT__flag_8) 
                                                                            << 4U));
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
                                                                     != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                    if (
                                                                        (4U 
                                                                         == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                        vlTOPp->top__DOT__u_CPU__DOT__b_8 
                                                                            = vlTOPp->top__DOT__u_CPU__DOT__imm8_reg;
                                                                        vlTOPp->top__DOT__u_CPU__DOT__reg_w_data 
                                                                            = 
                                                                            (((IData)(vlTOPp->top__DOT__u_CPU__DOT__alu_result_8) 
                                                                              << 8U) 
                                                                             | ((IData)(vlTOPp->top__DOT__u_CPU__DOT__flag_8) 
                                                                                << 4U));
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
                                                                         != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                        if (
                                                                            (4U 
                                                                             == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                            vlTOPp->top__DOT__u_CPU__DOT__b_8 
                                                                                = vlTOPp->top__DOT__u_CPU__DOT__imm8_reg;
                                                                            vlTOPp->top__DOT__u_CPU__DOT__reg_w_data 
                                                                                = 
                                                                                (((IData)(vlTOPp->top__DOT__u_CPU__DOT__alu_result_8) 
                                                                                << 8U) 
                                                                                | ((IData)(vlTOPp->top__DOT__u_CPU__DOT__flag_8) 
                                                                                << 4U));
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
                                                                             != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                            if (
                                                                                (4U 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__b_8 
                                                                                = vlTOPp->top__DOT__u_CPU__DOT__imm8_reg;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__reg_w_data 
                                                                                = 
                                                                                (((IData)(vlTOPp->top__DOT__u_CPU__DOT__alu_result_8) 
                                                                                << 8U) 
                                                                                | ((IData)(vlTOPp->top__DOT__u_CPU__DOT__flag_8) 
                                                                                << 4U));
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
                                                                                != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                if (
                                                                                (4U 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__b_8 
                                                                                = vlTOPp->top__DOT__u_CPU__DOT__imm8_reg;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__reg_w_data 
                                                                                = 
                                                                                (((IData)(vlTOPp->top__DOT__u_CPU__DOT__alu_result_8) 
                                                                                << 8U) 
                                                                                | ((IData)(vlTOPp->top__DOT__u_CPU__DOT__flag_8) 
                                                                                << 4U));
                                                                                }
                                                                            }
                                                                        } else {
                                                                            if (
                                                                                (0U 
                                                                                != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                if (
                                                                                (4U 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__b_8 
                                                                                = vlTOPp->top__DOT__u_CPU__DOT__imm8_reg;
                                                                                vlTOPp->top__DOT__u_CPU__DOT__reg_w_data 
                                                                                = 
                                                                                (((IData)(vlTOPp->top__DOT__u_CPU__DOT__A) 
                                                                                << 8U) 
                                                                                | ((IData)(vlTOPp->top__DOT__u_CPU__DOT__flag_8) 
                                                                                << 4U));
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
                                                                 != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                if (
                                                                    (1U 
                                                                     != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                    if (
                                                                        (2U 
                                                                         != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                        if (
                                                                            (3U 
                                                                             != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                            if (
                                                                                (4U 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__reg_w_data 
                                                                                = 
                                                                                ((0xff00U 
                                                                                & (IData)(vlTOPp->top__DOT__u_CPU__DOT__PC)) 
                                                                                | (IData)(vlTOPp->top__DOT__u_CPU__DOT__mem_out_reg));
                                                                                vlTOPp->top__DOT__u_CPU__DOT__reg_w_data_2 
                                                                                = 
                                                                                (0xffffU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(vlTOPp->top__DOT__u_CPU__DOT__SP)));
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            if (
                                                                (8U 
                                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                vlTOPp->top__DOT__u_CPU__DOT__reg_w_data 
                                                                    = 
                                                                    (((IData)(vlTOPp->top__DOT__u_CPU__DOT__mem_out_reg) 
                                                                      << 8U) 
                                                                     | (0xffU 
                                                                        & (IData)(vlTOPp->top__DOT__u_CPU__DOT__PC)));
                                                                vlTOPp->top__DOT__u_CPU__DOT__reg_w_data_2 
                                                                    = 
                                                                    (0xffffU 
                                                                     & ((IData)(1U) 
                                                                        + (IData)(vlTOPp->top__DOT__u_CPU__DOT__SP)));
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
                                                                     != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                    if (
                                                                        (1U 
                                                                         != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                        if (
                                                                            (2U 
                                                                             != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                            if (
                                                                                (3U 
                                                                                != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                if (
                                                                                (4U 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__reg_w_data 
                                                                                = 
                                                                                ((0xff00U 
                                                                                & (IData)(vlTOPp->top__DOT__u_CPU__DOT__PC)) 
                                                                                | (IData)(vlTOPp->top__DOT__u_CPU__DOT__mem_out_reg));
                                                                                vlTOPp->top__DOT__u_CPU__DOT__reg_w_data_2 
                                                                                = 
                                                                                (0xffffU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(vlTOPp->top__DOT__u_CPU__DOT__SP)));
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                if (
                                                                    (8U 
                                                                     == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                    vlTOPp->top__DOT__u_CPU__DOT__reg_w_data 
                                                                        = 
                                                                        (((IData)(vlTOPp->top__DOT__u_CPU__DOT__mem_out_reg) 
                                                                          << 8U) 
                                                                         | (0xffU 
                                                                            & (IData)(vlTOPp->top__DOT__u_CPU__DOT__PC)));
                                                                    vlTOPp->top__DOT__u_CPU__DOT__reg_w_data_2 
                                                                        = 
                                                                        (0xffffU 
                                                                         & ((IData)(1U) 
                                                                            + (IData)(vlTOPp->top__DOT__u_CPU__DOT__SP)));
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
                                                                     != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                    if (
                                                                        (8U 
                                                                         != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                        if (
                                                                            (9U 
                                                                             != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                            if (
                                                                                (0xaU 
                                                                                != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                if (
                                                                                (0xbU 
                                                                                != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                if (
                                                                                (0xcU 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__reg_w_data 
                                                                                = vlTOPp->top__DOT__u_CPU__DOT__imm16_reg;
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
                                                                    vlTOPp->top__DOT__u_CPU__DOT__reg_w_data 
                                                                        = 
                                                                        (((IData)(vlTOPp->top__DOT__u_CPU__DOT__H) 
                                                                          << 8U) 
                                                                         | (IData)(vlTOPp->top__DOT__u_CPU__DOT__L));
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
                                                                                != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                if (
                                                                                (8U 
                                                                                != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                if (
                                                                                (9U 
                                                                                != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                if (
                                                                                (0xaU 
                                                                                != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                if (
                                                                                (0xbU 
                                                                                != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                if (
                                                                                (0xcU 
                                                                                != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                if (
                                                                                (0xdU 
                                                                                != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__mem_control_w_data 
                                                                                = 
                                                                                (0xffU 
                                                                                & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__PC) 
                                                                                >> 8U));
                                                                                vlTOPp->top__DOT__u_CPU__DOT__reg_w_data 
                                                                                = 
                                                                                (0xffffU 
                                                                                & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__SP) 
                                                                                - (IData)(1U)));
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
                                                                                != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                if (
                                                                                (0x10U 
                                                                                != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                if (
                                                                                (0x11U 
                                                                                != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                if (
                                                                                (0x12U 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__mem_control_w_data 
                                                                                = 
                                                                                (0xffU 
                                                                                & (IData)(vlTOPp->top__DOT__u_CPU__DOT__PC));
                                                                                vlTOPp->top__DOT__u_CPU__DOT__reg_w_data 
                                                                                = 
                                                                                (0xffffU 
                                                                                & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__SP) 
                                                                                - (IData)(1U)));
                                                                                } else {
                                                                                if (
                                                                                (0x13U 
                                                                                != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                if (
                                                                                (0x14U 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__reg_w_data 
                                                                                = vlTOPp->top__DOT__u_CPU__DOT__imm16_reg;
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
                                                                                != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                if (
                                                                                (1U 
                                                                                != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                if (
                                                                                (2U 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__mem_control_w_data 
                                                                                = vlTOPp->top__DOT__u_CPU__DOT__A;
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
                                                                                != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                if (
                                                                                (4U 
                                                                                != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                if (
                                                                                (5U 
                                                                                != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                if (
                                                                                (6U 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__mem_control_w_data 
                                                                                = vlTOPp->top__DOT__u_CPU__DOT__A;
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                            } else {
                                                                                if (
                                                                                (0U 
                                                                                != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                if (
                                                                                (8U 
                                                                                != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                if (
                                                                                (9U 
                                                                                != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                if (
                                                                                (0xaU 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__mem_control_w_data 
                                                                                = vlTOPp->top__DOT__u_CPU__DOT__A;
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
                                                                 != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                if (
                                                                    (1U 
                                                                     != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                    if (
                                                                        (2U 
                                                                         != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                        if (
                                                                            (3U 
                                                                             != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                            if (
                                                                                (4U 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__reg_w_data 
                                                                                = 
                                                                                ((0xff00U 
                                                                                & (IData)(vlTOPp->top__DOT__u_CPU__DOT__reg_w_data)) 
                                                                                | (IData)(vlTOPp->top__DOT__u_CPU__DOT__mem_out_reg));
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
                                                                     != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                    if (
                                                                        (4U 
                                                                         != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                        if (
                                                                            (5U 
                                                                             != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                            if (
                                                                                (6U 
                                                                                != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                if (
                                                                                (7U 
                                                                                != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                if (
                                                                                (8U 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__reg_w_data 
                                                                                = 
                                                                                ((0xff00U 
                                                                                & (IData)(vlTOPp->top__DOT__u_CPU__DOT__reg_w_data)) 
                                                                                | (IData)(vlTOPp->top__DOT__u_CPU__DOT__mem_out_reg));
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
                                                                         != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                        if (
                                                                            (8U 
                                                                             != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                            if (
                                                                                (9U 
                                                                                != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                if (
                                                                                (0xaU 
                                                                                != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                if (
                                                                                (0xbU 
                                                                                != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                if (
                                                                                (0xcU 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__reg_w_data 
                                                                                = 
                                                                                ((0xff00U 
                                                                                & (IData)(vlTOPp->top__DOT__u_CPU__DOT__reg_w_data)) 
                                                                                | (IData)(vlTOPp->top__DOT__u_CPU__DOT__mem_out_reg));
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
                                                                            (1U 
                                                                             & (~ 
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
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter)))))) {
                                                                            if (
                                                                                (0xbU 
                                                                                != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                if (
                                                                                (0xcU 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__reg_w_data 
                                                                                = 
                                                                                (0xffffU 
                                                                                & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__SP) 
                                                                                + 
                                                                                ((0xff00U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__imm8_reg) 
                                                                                >> 7U)))) 
                                                                                << 8U)) 
                                                                                | (IData)(vlTOPp->top__DOT__u_CPU__DOT__imm8_reg))));
                                                                                vlTOPp->top__DOT__u_CPU__DOT__reg_w_data_2 
                                                                                = 
                                                                                ((0xff00U 
                                                                                & (IData)(vlTOPp->top__DOT__u_CPU__DOT__reg_w_data_2)) 
                                                                                | (((0xfU 
                                                                                < 
                                                                                (0x1fU 
                                                                                & ((0xfU 
                                                                                & (IData)(vlTOPp->top__DOT__u_CPU__DOT__SP)) 
                                                                                + 
                                                                                (0xfU 
                                                                                & (IData)(vlTOPp->top__DOT__u_CPU__DOT__imm8_reg))))) 
                                                                                << 5U) 
                                                                                | ((0xffU 
                                                                                < 
                                                                                (0x1ffU 
                                                                                & ((0xffU 
                                                                                & (IData)(vlTOPp->top__DOT__u_CPU__DOT__SP)) 
                                                                                + (IData)(vlTOPp->top__DOT__u_CPU__DOT__imm8_reg)))) 
                                                                                << 4U)));
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
                                                                                != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                if (
                                                                                (4U 
                                                                                != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                if (
                                                                                (5U 
                                                                                != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                if (
                                                                                (6U 
                                                                                != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                if (
                                                                                (7U 
                                                                                != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                if (
                                                                                (8U 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__reg_w_data 
                                                                                = 
                                                                                (0xffffU 
                                                                                & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__SP) 
                                                                                + 
                                                                                ((0xff00U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__imm8_reg) 
                                                                                >> 7U)))) 
                                                                                << 8U)) 
                                                                                | (IData)(vlTOPp->top__DOT__u_CPU__DOT__imm8_reg))));
                                                                                vlTOPp->top__DOT__u_CPU__DOT__reg_w_data_2 
                                                                                = 
                                                                                ((0xff00U 
                                                                                & (IData)(vlTOPp->top__DOT__u_CPU__DOT__reg_w_data_2)) 
                                                                                | (((0xfU 
                                                                                < 
                                                                                (0x1fU 
                                                                                & ((0xfU 
                                                                                & (IData)(vlTOPp->top__DOT__u_CPU__DOT__SP)) 
                                                                                + 
                                                                                (0xfU 
                                                                                & (IData)(vlTOPp->top__DOT__u_CPU__DOT__imm8_reg))))) 
                                                                                << 5U) 
                                                                                | ((0xffU 
                                                                                < 
                                                                                (0x1ffU 
                                                                                & ((0xffU 
                                                                                & (IData)(vlTOPp->top__DOT__u_CPU__DOT__SP)) 
                                                                                + (IData)(vlTOPp->top__DOT__u_CPU__DOT__imm8_reg)))) 
                                                                                << 4U)));
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
                                                                                != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                if (
                                                                                (1U 
                                                                                != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                if (
                                                                                (2U 
                                                                                != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                if (
                                                                                (3U 
                                                                                != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                if (
                                                                                (4U 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__reg_w_data 
                                                                                = 
                                                                                (((IData)(vlTOPp->top__DOT__u_CPU__DOT__H) 
                                                                                << 8U) 
                                                                                | (IData)(vlTOPp->top__DOT__u_CPU__DOT__L));
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
                    }
                }
            } else {
                if ((0x20U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                            if ((6U == (7U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                                if ((0U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                    if ((1U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        if ((2U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                            if ((3U 
                                                 != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                if (
                                                    (4U 
                                                     == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                    vlTOPp->top__DOT__u_CPU__DOT__b_8 
                                                        = vlTOPp->top__DOT__u_CPU__DOT__mem_out_reg;
                                                    vlTOPp->top__DOT__u_CPU__DOT__reg_w_data 
                                                        = 
                                                        ((0xff00U 
                                                          & (IData)(vlTOPp->top__DOT__u_CPU__DOT__reg_w_data)) 
                                                         | ((IData)(vlTOPp->top__DOT__u_CPU__DOT__flag_8) 
                                                            << 4U));
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__u_CPU__DOT__b_8 
                                    = vlTOPp->top__DOT__u_CPU__DOT__Operand_r8;
                                vlTOPp->top__DOT__u_CPU__DOT__reg_w_data 
                                    = ((0xff00U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__reg_w_data)) 
                                       | ((IData)(vlTOPp->top__DOT__u_CPU__DOT__flag_8) 
                                          << 4U));
                            }
                        } else {
                            if ((6U == (7U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                                if ((0U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                    if ((1U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        if ((2U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                            if ((3U 
                                                 != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                if (
                                                    (4U 
                                                     == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                    vlTOPp->top__DOT__u_CPU__DOT__b_8 
                                                        = vlTOPp->top__DOT__u_CPU__DOT__mem_out_reg;
                                                    vlTOPp->top__DOT__u_CPU__DOT__reg_w_data 
                                                        = 
                                                        (((IData)(vlTOPp->top__DOT__u_CPU__DOT__alu_result_8) 
                                                          << 8U) 
                                                         | ((IData)(vlTOPp->top__DOT__u_CPU__DOT__flag_8) 
                                                            << 4U));
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__u_CPU__DOT__b_8 
                                    = vlTOPp->top__DOT__u_CPU__DOT__Operand_r8;
                                vlTOPp->top__DOT__u_CPU__DOT__reg_w_data 
                                    = (((IData)(vlTOPp->top__DOT__u_CPU__DOT__alu_result_8) 
                                        << 8U) | ((IData)(vlTOPp->top__DOT__u_CPU__DOT__flag_8) 
                                                  << 4U));
                            }
                        }
                    } else {
                        if ((8U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                            if ((6U == (7U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                                if ((0U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                    if ((1U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        if ((2U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                            if ((3U 
                                                 != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                if (
                                                    (4U 
                                                     == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                    vlTOPp->top__DOT__u_CPU__DOT__b_8 
                                                        = vlTOPp->top__DOT__u_CPU__DOT__mem_out_reg;
                                                    vlTOPp->top__DOT__u_CPU__DOT__reg_w_data 
                                                        = 
                                                        (((IData)(vlTOPp->top__DOT__u_CPU__DOT__alu_result_8) 
                                                          << 8U) 
                                                         | ((IData)(vlTOPp->top__DOT__u_CPU__DOT__flag_8) 
                                                            << 4U));
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__u_CPU__DOT__b_8 
                                    = vlTOPp->top__DOT__u_CPU__DOT__Operand_r8;
                                vlTOPp->top__DOT__u_CPU__DOT__reg_w_data 
                                    = (((IData)(vlTOPp->top__DOT__u_CPU__DOT__alu_result_8) 
                                        << 8U) | ((IData)(vlTOPp->top__DOT__u_CPU__DOT__flag_8) 
                                                  << 4U));
                            }
                        } else {
                            if ((6U == (7U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                                if ((0U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                    if ((1U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        if ((2U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                            if ((3U 
                                                 != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                if (
                                                    (4U 
                                                     == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                    vlTOPp->top__DOT__u_CPU__DOT__b_8 
                                                        = vlTOPp->top__DOT__u_CPU__DOT__mem_out_reg;
                                                    vlTOPp->top__DOT__u_CPU__DOT__reg_w_data 
                                                        = 
                                                        (((IData)(vlTOPp->top__DOT__u_CPU__DOT__alu_result_8) 
                                                          << 8U) 
                                                         | ((IData)(vlTOPp->top__DOT__u_CPU__DOT__flag_8) 
                                                            << 4U));
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__u_CPU__DOT__b_8 
                                    = vlTOPp->top__DOT__u_CPU__DOT__Operand_r8;
                                vlTOPp->top__DOT__u_CPU__DOT__reg_w_data 
                                    = (((IData)(vlTOPp->top__DOT__u_CPU__DOT__alu_result_8) 
                                        << 8U) | ((IData)(vlTOPp->top__DOT__u_CPU__DOT__flag_8) 
                                                  << 4U));
                            }
                        }
                    }
                } else {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                            if ((6U == (7U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                                if ((0U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                    if ((1U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        if ((2U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                            if ((3U 
                                                 != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                if (
                                                    (4U 
                                                     == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                    vlTOPp->top__DOT__u_CPU__DOT__b_8 
                                                        = vlTOPp->top__DOT__u_CPU__DOT__mem_out_reg;
                                                    vlTOPp->top__DOT__u_CPU__DOT__reg_w_data 
                                                        = 
                                                        (((IData)(vlTOPp->top__DOT__u_CPU__DOT__alu_result_8) 
                                                          << 8U) 
                                                         | ((IData)(vlTOPp->top__DOT__u_CPU__DOT__flag_8) 
                                                            << 4U));
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__u_CPU__DOT__b_8 
                                    = vlTOPp->top__DOT__u_CPU__DOT__Operand_r8;
                                vlTOPp->top__DOT__u_CPU__DOT__reg_w_data 
                                    = (((IData)(vlTOPp->top__DOT__u_CPU__DOT__alu_result_8) 
                                        << 8U) | ((IData)(vlTOPp->top__DOT__u_CPU__DOT__flag_8) 
                                                  << 4U));
                            }
                        } else {
                            if ((6U == (7U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                                if ((0U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                    if ((1U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        if ((2U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                            if ((3U 
                                                 != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                if (
                                                    (4U 
                                                     == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                    vlTOPp->top__DOT__u_CPU__DOT__b_8 
                                                        = vlTOPp->top__DOT__u_CPU__DOT__mem_out_reg;
                                                    vlTOPp->top__DOT__u_CPU__DOT__reg_w_data 
                                                        = 
                                                        (((IData)(vlTOPp->top__DOT__u_CPU__DOT__alu_result_8) 
                                                          << 8U) 
                                                         | ((IData)(vlTOPp->top__DOT__u_CPU__DOT__flag_8) 
                                                            << 4U));
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__u_CPU__DOT__b_8 
                                    = vlTOPp->top__DOT__u_CPU__DOT__Operand_r8;
                                vlTOPp->top__DOT__u_CPU__DOT__reg_w_data 
                                    = (((IData)(vlTOPp->top__DOT__u_CPU__DOT__alu_result_8) 
                                        << 8U) | ((IData)(vlTOPp->top__DOT__u_CPU__DOT__flag_8) 
                                                  << 4U));
                            }
                        }
                    } else {
                        if ((8U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                            if ((6U == (7U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                                if ((0U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                    if ((1U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        if ((2U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                            if ((3U 
                                                 != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                if (
                                                    (4U 
                                                     == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                    vlTOPp->top__DOT__u_CPU__DOT__b_8 
                                                        = vlTOPp->top__DOT__u_CPU__DOT__mem_out_reg;
                                                    vlTOPp->top__DOT__u_CPU__DOT__reg_w_data 
                                                        = 
                                                        (((IData)(vlTOPp->top__DOT__u_CPU__DOT__alu_result_8) 
                                                          << 8U) 
                                                         | ((IData)(vlTOPp->top__DOT__u_CPU__DOT__flag_8) 
                                                            << 4U));
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__u_CPU__DOT__b_8 
                                    = vlTOPp->top__DOT__u_CPU__DOT__Operand_r8;
                                vlTOPp->top__DOT__u_CPU__DOT__reg_w_data 
                                    = (((IData)(vlTOPp->top__DOT__u_CPU__DOT__alu_result_8) 
                                        << 8U) | ((IData)(vlTOPp->top__DOT__u_CPU__DOT__flag_8) 
                                                  << 4U));
                            }
                        } else {
                            if ((6U == (7U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                                if ((0U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                    if ((1U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        if ((2U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                            if ((3U 
                                                 != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                if (
                                                    (4U 
                                                     == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                    vlTOPp->top__DOT__u_CPU__DOT__b_8 
                                                        = vlTOPp->top__DOT__u_CPU__DOT__mem_out_reg;
                                                    vlTOPp->top__DOT__u_CPU__DOT__reg_w_data 
                                                        = 
                                                        (((IData)(vlTOPp->top__DOT__u_CPU__DOT__alu_result_8) 
                                                          << 8U) 
                                                         | ((IData)(vlTOPp->top__DOT__u_CPU__DOT__flag_8) 
                                                            << 4U));
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__u_CPU__DOT__b_8 
                                    = vlTOPp->top__DOT__u_CPU__DOT__Operand_r8;
                                vlTOPp->top__DOT__u_CPU__DOT__reg_w_data 
                                    = (((IData)(vlTOPp->top__DOT__u_CPU__DOT__alu_result_8) 
                                        << 8U) | ((IData)(vlTOPp->top__DOT__u_CPU__DOT__flag_8) 
                                                  << 4U));
                            }
                        }
                    }
                }
            }
        } else {
            if ((0x40U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                if ((0x76U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                    if ((6U == (7U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                        if ((0U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                            if ((1U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                if ((2U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                    if ((3U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        if ((4U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                            vlTOPp->top__DOT__u_CPU__DOT__reg_w_data 
                                                = (
                                                   (0xff00U 
                                                    & (IData)(vlTOPp->top__DOT__u_CPU__DOT__reg_w_data)) 
                                                   | (IData)(vlTOPp->top__DOT__u_CPU__DOT__mem_out_reg));
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if ((6U == (7U & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                                          >> 3U)))) {
                            if ((0U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                if ((1U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                    if ((2U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        vlTOPp->top__DOT__u_CPU__DOT__mem_control_w_data 
                                            = vlTOPp->top__DOT__u_CPU__DOT__Source_r8;
                                    }
                                }
                            }
                        } else {
                            vlTOPp->top__DOT__u_CPU__DOT__reg_w_data 
                                = ((0xff00U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__reg_w_data)) 
                                   | (IData)(vlTOPp->top__DOT__u_CPU__DOT__Source_r8));
                        }
                    }
                }
            } else {
                if ((4U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                            if ((0x20U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                                if ((0x10U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                                    vlTOPp->top__DOT__u_CPU__DOT__reg_w_data 
                                        = ((0xff00U 
                                            & (IData)(vlTOPp->top__DOT__u_CPU__DOT__reg_w_data)) 
                                           | ((8U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))
                                               ? ((0x80U 
                                                   & (IData)(vlTOPp->top__DOT__u_CPU__DOT__F)) 
                                                  | (0x10U 
                                                     & ((~ 
                                                         ((IData)(vlTOPp->top__DOT__u_CPU__DOT__F) 
                                                          >> 4U)) 
                                                        << 4U)))
                                               : (0x10U 
                                                  | (0x80U 
                                                     & (IData)(vlTOPp->top__DOT__u_CPU__DOT__F)))));
                                } else {
                                    if ((8U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                                        vlTOPp->top__DOT__u_CPU__DOT__reg_w_data 
                                            = (0x60U 
                                               | ((0xff00U 
                                                   & ((~ (IData)(vlTOPp->top__DOT__u_CPU__DOT__A)) 
                                                      << 8U)) 
                                                  | (0x90U 
                                                     & (IData)(vlTOPp->top__DOT__u_CPU__DOT__F))));
                                    } else {
                                        vlTOPp->top__DOT__u_CPU__DOT__tem_reg_w_data = 0U;
                                        if ((0x40U 
                                             & (IData)(vlTOPp->top__DOT__u_CPU__DOT__F))) {
                                            if ((0x40U 
                                                 & (IData)(vlTOPp->top__DOT__u_CPU__DOT__F))) {
                                                if (
                                                    (0x20U 
                                                     & (IData)(vlTOPp->top__DOT__u_CPU__DOT__F))) {
                                                    vlTOPp->top__DOT__u_CPU__DOT__tem_reg_w_data 
                                                        = 
                                                        (0xffU 
                                                         & ((IData)(6U) 
                                                            + (IData)(vlTOPp->top__DOT__u_CPU__DOT__tem_reg_w_data)));
                                                }
                                                if (
                                                    (0x10U 
                                                     & (IData)(vlTOPp->top__DOT__u_CPU__DOT__F))) {
                                                    vlTOPp->top__DOT__u_CPU__DOT__tem_reg_w_data 
                                                        = 
                                                        (0xffU 
                                                         & ((IData)(0x60U) 
                                                            + (IData)(vlTOPp->top__DOT__u_CPU__DOT__tem_reg_w_data)));
                                                }
                                                vlTOPp->top__DOT__u_CPU__DOT__reg_w_data 
                                                    = 
                                                    ((0xff00U 
                                                      & (IData)(vlTOPp->top__DOT__u_CPU__DOT__reg_w_data)) 
                                                     | (0xffU 
                                                        & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__A) 
                                                           - (IData)(vlTOPp->top__DOT__u_CPU__DOT__tem_reg_w_data))));
                                                vlTOPp->top__DOT__u_CPU__DOT__reg_w_data_2 
                                                    = 
                                                    ((0xff00U 
                                                      & (IData)(vlTOPp->top__DOT__u_CPU__DOT__reg_w_data_2)) 
                                                     | (((0U 
                                                          == 
                                                          (0xffU 
                                                           & (IData)(vlTOPp->top__DOT__u_CPU__DOT__reg_w_data))) 
                                                         << 7U) 
                                                        | (0x50U 
                                                           & (IData)(vlTOPp->top__DOT__u_CPU__DOT__F))));
                                            }
                                        } else {
                                            vlTOPp->top__DOT__u_CPU__DOT__reg_w_data_2 
                                                = (
                                                   (0xffefU 
                                                    & (IData)(vlTOPp->top__DOT__u_CPU__DOT__reg_w_data_2)) 
                                                   | (0x10U 
                                                      & (IData)(vlTOPp->top__DOT__u_CPU__DOT__F)));
                                            if ((1U 
                                                 & (((IData)(vlTOPp->top__DOT__u_CPU__DOT__F) 
                                                     >> 5U) 
                                                    | (9U 
                                                       < 
                                                       (0xfU 
                                                        & (IData)(vlTOPp->top__DOT__u_CPU__DOT__A)))))) {
                                                vlTOPp->top__DOT__u_CPU__DOT__tem_reg_w_data 
                                                    = 
                                                    (0xffU 
                                                     & ((IData)(6U) 
                                                        + (IData)(vlTOPp->top__DOT__u_CPU__DOT__tem_reg_w_data)));
                                            }
                                            if ((1U 
                                                 & (((IData)(vlTOPp->top__DOT__u_CPU__DOT__F) 
                                                     >> 4U) 
                                                    | (0x99U 
                                                       < (IData)(vlTOPp->top__DOT__u_CPU__DOT__A))))) {
                                                vlTOPp->top__DOT__u_CPU__DOT__tem_reg_w_data 
                                                    = 
                                                    (0xffU 
                                                     & ((IData)(0x60U) 
                                                        + (IData)(vlTOPp->top__DOT__u_CPU__DOT__tem_reg_w_data)));
                                                vlTOPp->top__DOT__u_CPU__DOT__reg_w_data_2 
                                                    = 
                                                    (0x10U 
                                                     | (IData)(vlTOPp->top__DOT__u_CPU__DOT__reg_w_data_2));
                                            }
                                            vlTOPp->top__DOT__u_CPU__DOT__reg_w_data 
                                                = (
                                                   (0xff00U 
                                                    & (IData)(vlTOPp->top__DOT__u_CPU__DOT__reg_w_data)) 
                                                   | (0xffU 
                                                      & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__A) 
                                                         + (IData)(vlTOPp->top__DOT__u_CPU__DOT__tem_reg_w_data))));
                                            vlTOPp->top__DOT__u_CPU__DOT__reg_w_data_2 
                                                = (
                                                   (0xff1fU 
                                                    & (IData)(vlTOPp->top__DOT__u_CPU__DOT__reg_w_data_2)) 
                                                   | (((0U 
                                                        == 
                                                        (0xffU 
                                                         & (IData)(vlTOPp->top__DOT__u_CPU__DOT__reg_w_data))) 
                                                       << 7U) 
                                                      | (0x40U 
                                                         & (IData)(vlTOPp->top__DOT__u_CPU__DOT__F))));
                                            vlTOPp->top__DOT__u_CPU__DOT__reg_w_data_2 
                                                = (0xfff0U 
                                                   & (IData)(vlTOPp->top__DOT__u_CPU__DOT__reg_w_data_2));
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__u_CPU__DOT__reg_w_data 
                                    = ((0x10U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))
                                        ? ((8U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))
                                            ? ((0x8000U 
                                                & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__F) 
                                                   << 0xbU)) 
                                               | ((0x7f00U 
                                                   & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__A) 
                                                      << 7U)) 
                                                  | (0x10U 
                                                     & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__A) 
                                                        << 4U))))
                                            : ((0xfe00U 
                                                & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__A) 
                                                   << 9U)) 
                                               | ((0x100U 
                                                   & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__F) 
                                                      << 4U)) 
                                                  | (0x10U 
                                                     & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__A) 
                                                        >> 3U)))))
                                        : ((8U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))
                                            ? ((0x8000U 
                                                & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__A) 
                                                   << 0xfU)) 
                                               | ((0x7f00U 
                                                   & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__A) 
                                                      << 7U)) 
                                                  | (0x10U 
                                                     & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__A) 
                                                        << 4U))))
                                            : ((0xfe00U 
                                                & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__A) 
                                                   << 9U)) 
                                               | ((0x100U 
                                                   & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__A) 
                                                      << 1U)) 
                                                  | (0x10U 
                                                     & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__A) 
                                                        >> 3U))))));
                            }
                        } else {
                            if ((6U == (7U & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                                              >> 3U)))) {
                                if ((0U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                    if ((4U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        if ((5U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                            if ((6U 
                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                vlTOPp->top__DOT__u_CPU__DOT__mem_control_w_data 
                                                    = vlTOPp->top__DOT__u_CPU__DOT__imm8_reg;
                                            }
                                        }
                                    }
                                }
                            } else {
                                if ((0U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                    if ((4U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        vlTOPp->top__DOT__u_CPU__DOT__reg_w_data 
                                            = ((0xff00U 
                                                & (IData)(vlTOPp->top__DOT__u_CPU__DOT__reg_w_data)) 
                                               | (IData)(vlTOPp->top__DOT__u_CPU__DOT__imm8_reg));
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
                                    if ((0U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        if ((1U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                            if ((2U 
                                                 != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                if (
                                                    (3U 
                                                     != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                    if (
                                                        (4U 
                                                         != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                        if (
                                                            (5U 
                                                             != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                            if (
                                                                (6U 
                                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                vlTOPp->top__DOT__u_CPU__DOT__mem_control_w_data 
                                                                    = 
                                                                    (0xffU 
                                                                     & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__mem_out_reg) 
                                                                        - (IData)(1U)));
                                                                vlTOPp->top__DOT__u_CPU__DOT__tem_reg_w_data 
                                                                    = vlTOPp->top__DOT__u_CPU__DOT__mem_control_w_data;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if ((8U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        vlTOPp->top__DOT__u_CPU__DOT__reg_w_data 
                                            = ((0xff00U 
                                                & (IData)(vlTOPp->top__DOT__u_CPU__DOT__reg_w_data)) 
                                               | (0x40U 
                                                  | (((0U 
                                                       == (IData)(vlTOPp->top__DOT__u_CPU__DOT__tem_reg)) 
                                                      << 7U) 
                                                     | (((0U 
                                                          == 
                                                          (0xfU 
                                                           & (IData)(vlTOPp->top__DOT__u_CPU__DOT__mem_out_reg))) 
                                                         << 5U) 
                                                        | (0x10U 
                                                           & (IData)(vlTOPp->top__DOT__u_CPU__DOT__F))))));
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__u_CPU__DOT__reg_w_data 
                                    = ((0xff00U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__reg_w_data)) 
                                       | (0xffU & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__Operand_r8) 
                                                   - (IData)(1U))));
                                vlTOPp->top__DOT__u_CPU__DOT__reg_w_data_2 
                                    = ((0xff00U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__reg_w_data_2)) 
                                       | (0x40U | (
                                                   ((0U 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(vlTOPp->top__DOT__u_CPU__DOT__reg_w_data))) 
                                                    << 7U) 
                                                   | (((0U 
                                                        == 
                                                        (0xfU 
                                                         & (IData)(vlTOPp->top__DOT__u_CPU__DOT__Operand_r8))) 
                                                       << 5U) 
                                                      | (0x10U 
                                                         & (IData)(vlTOPp->top__DOT__u_CPU__DOT__F))))));
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
                                    if ((0U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        if ((1U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                            if ((2U 
                                                 != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                if (
                                                    (3U 
                                                     != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                    if (
                                                        (4U 
                                                         != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                        if (
                                                            (5U 
                                                             != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                            if (
                                                                (6U 
                                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                vlTOPp->top__DOT__u_CPU__DOT__mem_control_w_data 
                                                                    = 
                                                                    (0xffU 
                                                                     & ((IData)(1U) 
                                                                        + (IData)(vlTOPp->top__DOT__u_CPU__DOT__mem_out_reg)));
                                                                vlTOPp->top__DOT__u_CPU__DOT__tem_reg_w_data 
                                                                    = vlTOPp->top__DOT__u_CPU__DOT__mem_control_w_data;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if ((8U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        vlTOPp->top__DOT__u_CPU__DOT__reg_w_data 
                                            = ((0xff00U 
                                                & (IData)(vlTOPp->top__DOT__u_CPU__DOT__reg_w_data)) 
                                               | (((0U 
                                                    == (IData)(vlTOPp->top__DOT__u_CPU__DOT__tem_reg)) 
                                                   << 7U) 
                                                  | (((0xfU 
                                                       == 
                                                       (0xfU 
                                                        & (IData)(vlTOPp->top__DOT__u_CPU__DOT__mem_out_reg))) 
                                                      << 5U) 
                                                     | (0x10U 
                                                        & (IData)(vlTOPp->top__DOT__u_CPU__DOT__F)))));
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__u_CPU__DOT__reg_w_data 
                                    = ((0xff00U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__reg_w_data)) 
                                       | (0xffU & ((IData)(1U) 
                                                   + (IData)(vlTOPp->top__DOT__u_CPU__DOT__Operand_r8))));
                                vlTOPp->top__DOT__u_CPU__DOT__reg_w_data_2 
                                    = ((0xff00U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__reg_w_data_2)) 
                                       | (((0U == (0xffU 
                                                   & (IData)(vlTOPp->top__DOT__u_CPU__DOT__reg_w_data))) 
                                           << 7U) | 
                                          (((0xfU == 
                                             (0xfU 
                                              & (IData)(vlTOPp->top__DOT__u_CPU__DOT__Operand_r8))) 
                                            << 5U) 
                                           | (0x10U 
                                              & (IData)(vlTOPp->top__DOT__u_CPU__DOT__F)))));
                            }
                        }
                    }
                } else {
                    if ((2U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                            if ((8U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                                if ((8U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                                    if ((0U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        if ((1U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                            if ((2U 
                                                 != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                if (
                                                    (3U 
                                                     != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                    if (
                                                        (4U 
                                                         == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                        vlTOPp->top__DOT__u_CPU__DOT__reg_w_data 
                                                            = 
                                                            (0xffffU 
                                                             & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__Operand_r16) 
                                                                - (IData)(1U)));
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                if ((0U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                    if ((1U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        if ((2U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                            if ((3U 
                                                 != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                if (
                                                    (4U 
                                                     == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                    vlTOPp->top__DOT__u_CPU__DOT__reg_w_data 
                                                        = 
                                                        (0xffffU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlTOPp->top__DOT__u_CPU__DOT__Operand_r16)));
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            if ((8U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                                if ((8U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                                    if ((0U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        if ((1U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                            if ((2U 
                                                 != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                if (
                                                    (3U 
                                                     != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                    if (
                                                        (4U 
                                                         == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                        vlTOPp->top__DOT__u_CPU__DOT__reg_w_data 
                                                            = 
                                                            ((0xff00U 
                                                              & (IData)(vlTOPp->top__DOT__u_CPU__DOT__reg_w_data)) 
                                                             | (IData)(vlTOPp->top__DOT__u_CPU__DOT__mem_out_reg));
                                                        if (
                                                            (2U 
                                                             == 
                                                             (3U 
                                                              & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                                                                 >> 4U)))) {
                                                            vlTOPp->top__DOT__u_CPU__DOT__reg_w_data_2 
                                                                = 
                                                                (0xffffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (((IData)(vlTOPp->top__DOT__u_CPU__DOT__H) 
                                                                      << 8U) 
                                                                     | (IData)(vlTOPp->top__DOT__u_CPU__DOT__L))));
                                                        } else {
                                                            if (
                                                                (3U 
                                                                 == 
                                                                 (3U 
                                                                  & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                                                                     >> 4U)))) {
                                                                vlTOPp->top__DOT__u_CPU__DOT__reg_w_data_2 
                                                                    = 
                                                                    (0xffffU 
                                                                     & ((((IData)(vlTOPp->top__DOT__u_CPU__DOT__H) 
                                                                          << 8U) 
                                                                         | (IData)(vlTOPp->top__DOT__u_CPU__DOT__L)) 
                                                                        - (IData)(1U)));
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                if ((0U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                    if ((1U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        if ((2U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                            vlTOPp->top__DOT__u_CPU__DOT__mem_control_w_data 
                                                = vlTOPp->top__DOT__u_CPU__DOT__A;
                                        } else {
                                            if ((3U 
                                                 != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                if (
                                                    (4U 
                                                     == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                    if (
                                                        (2U 
                                                         == 
                                                         (3U 
                                                          & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                                                             >> 4U)))) {
                                                        vlTOPp->top__DOT__u_CPU__DOT__reg_w_data 
                                                            = 
                                                            (0xffffU 
                                                             & ((IData)(1U) 
                                                                + 
                                                                (((IData)(vlTOPp->top__DOT__u_CPU__DOT__H) 
                                                                  << 8U) 
                                                                 | (IData)(vlTOPp->top__DOT__u_CPU__DOT__L))));
                                                    } else {
                                                        if (
                                                            (3U 
                                                             == 
                                                             (3U 
                                                              & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                                                                 >> 4U)))) {
                                                            vlTOPp->top__DOT__u_CPU__DOT__reg_w_data 
                                                                = 
                                                                (0xffffU 
                                                                 & ((((IData)(vlTOPp->top__DOT__u_CPU__DOT__H) 
                                                                      << 8U) 
                                                                     | (IData)(vlTOPp->top__DOT__u_CPU__DOT__L)) 
                                                                    - (IData)(1U)));
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
                        if ((1U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                            if ((8U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                                if ((8U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                                    if ((0U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        if ((1U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                            if ((2U 
                                                 != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                if (
                                                    (3U 
                                                     != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                    if (
                                                        (4U 
                                                         == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                        vlTOPp->top__DOT__u_CPU__DOT__reg_w_data 
                                                            = 
                                                            (0xffffU 
                                                             & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__Operand_r16) 
                                                                + 
                                                                (((IData)(vlTOPp->top__DOT__u_CPU__DOT__H) 
                                                                  << 8U) 
                                                                 | (IData)(vlTOPp->top__DOT__u_CPU__DOT__L))));
                                                        vlTOPp->top__DOT__u_CPU__DOT__reg_w_data_2 
                                                            = 
                                                            ((0xff00U 
                                                              & (IData)(vlTOPp->top__DOT__u_CPU__DOT__reg_w_data_2)) 
                                                             | ((0x80U 
                                                                 & (IData)(vlTOPp->top__DOT__u_CPU__DOT__F)) 
                                                                | (((0xfffU 
                                                                     < 
                                                                     (0x1fffU 
                                                                      & (((0xf00U 
                                                                           & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__H) 
                                                                              << 8U)) 
                                                                          | (IData)(vlTOPp->top__DOT__u_CPU__DOT__L)) 
                                                                         + 
                                                                         (0xfffU 
                                                                          & (IData)(vlTOPp->top__DOT__u_CPU__DOT__Operand_r16))))) 
                                                                    << 5U) 
                                                                   | ((0xffffU 
                                                                       < 
                                                                       (0x1ffffU 
                                                                        & ((((IData)(vlTOPp->top__DOT__u_CPU__DOT__H) 
                                                                             << 8U) 
                                                                            | (IData)(vlTOPp->top__DOT__u_CPU__DOT__L)) 
                                                                           + (IData)(vlTOPp->top__DOT__u_CPU__DOT__Operand_r16)))) 
                                                                      << 4U))));
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                if ((0U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                    if ((8U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        vlTOPp->top__DOT__u_CPU__DOT__reg_w_data 
                                            = vlTOPp->top__DOT__u_CPU__DOT__imm16_reg;
                                    }
                                }
                            }
                        } else {
                            if ((0x20U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                                if ((0U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                    if ((4U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        if ((5U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                            if ((6U 
                                                 != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                if (
                                                    (7U 
                                                     != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                    if (
                                                        (8U 
                                                         == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                        vlTOPp->top__DOT__u_CPU__DOT__reg_w_data 
                                                            = 
                                                            (0xffffU 
                                                             & ((IData)(1U) 
                                                                + 
                                                                ((IData)(vlTOPp->top__DOT__u_CPU__DOT__PC) 
                                                                 + 
                                                                 ((0xff00U 
                                                                   & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__imm8_reg) 
                                                                                >> 7U)))) 
                                                                      << 8U)) 
                                                                  | (IData)(vlTOPp->top__DOT__u_CPU__DOT__imm8_reg)))));
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
                                                 != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                if (
                                                    (4U 
                                                     != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                    if (
                                                        (5U 
                                                         != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                        if (
                                                            (6U 
                                                             != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                            if (
                                                                (7U 
                                                                 != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                if (
                                                                    (8U 
                                                                     == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                    vlTOPp->top__DOT__u_CPU__DOT__reg_w_data 
                                                                        = 
                                                                        (0xffffU 
                                                                         & ((IData)(1U) 
                                                                            + 
                                                                            ((IData)(vlTOPp->top__DOT__u_CPU__DOT__PC) 
                                                                             + 
                                                                             ((0xff00U 
                                                                               & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__imm8_reg) 
                                                                                >> 7U)))) 
                                                                                << 8U)) 
                                                                              | (IData)(vlTOPp->top__DOT__u_CPU__DOT__imm8_reg)))));
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            vlTOPp->top__DOT__u_CPU__DOT__reg_w_data 
                                                = (0xffffU 
                                                   & ((IData)(2U) 
                                                      + (IData)(vlTOPp->top__DOT__u_CPU__DOT__PC)));
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
                                                     != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                    if (
                                                        (8U 
                                                         != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                        if (
                                                            (9U 
                                                             != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                            if (
                                                                (0xaU 
                                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                vlTOPp->top__DOT__u_CPU__DOT__mem_control_w_data 
                                                                    = 
                                                                    (0xffU 
                                                                     & (IData)(vlTOPp->top__DOT__u_CPU__DOT__SP));
                                                            } else {
                                                                if (
                                                                    (0xbU 
                                                                     != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                    if (
                                                                        (0xcU 
                                                                         != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                        if (
                                                                            (0xdU 
                                                                             != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                            vlTOPp->top__DOT__u_CPU__DOT__mem_control_w_data 
                                                                                = 
                                                                                (0xffU 
                                                                                & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__SP) 
                                                                                >> 8U));
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
                        if ((0U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                            if ((1U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                if ((2U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                    if ((3U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        if ((4U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                            if ((5U 
                                                 != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                if (
                                                    (6U 
                                                     == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                    vlTOPp->top__DOT__u_CPU__DOT__mem_control_w_data 
                                                        = 
                                                        (0xffU 
                                                         & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__mem_out_reg) 
                                                            | ((IData)(1U) 
                                                               << 
                                                               (7U 
                                                                & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                                                                   >> 3U)))));
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    vlTOPp->top__DOT__u_CPU__DOT__reg_w_data 
                        = ((0xff00U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__reg_w_data)) 
                           | (0xffU & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__Operand_r8) 
                                       | ((IData)(1U) 
                                          << (7U & 
                                              ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                                               >> 3U))))));
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
                        if ((0U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                            if ((1U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                if ((2U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                    if ((3U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        if ((4U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                            if ((5U 
                                                 != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                if (
                                                    (6U 
                                                     == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                    vlTOPp->top__DOT__u_CPU__DOT__mem_control_w_data 
                                                        = 
                                                        ((IData)(vlTOPp->top__DOT__u_CPU__DOT__mem_out_reg) 
                                                         & (~ 
                                                            ((IData)(1U) 
                                                             << 
                                                             (7U 
                                                              & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                                                                 >> 3U)))));
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    vlTOPp->top__DOT__u_CPU__DOT__reg_w_data 
                        = ((0xff00U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__reg_w_data)) 
                           | ((IData)(vlTOPp->top__DOT__u_CPU__DOT__Operand_r8) 
                              & (~ ((IData)(1U) << 
                                    (7U & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                                           >> 3U))))));
                }
            }
        } else {
            if ((0x40U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                if ((6U == (7U & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                                  >> 3U)))) {
                    if ((0U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                        if ((1U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                            if ((2U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                if ((3U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                    if ((4U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        vlTOPp->top__DOT__u_CPU__DOT__reg_w_data 
                                            = ((0xff00U 
                                                & (IData)(vlTOPp->top__DOT__u_CPU__DOT__reg_w_data)) 
                                               | (0x20U 
                                                  | ((0x80U 
                                                      & ((~ 
                                                          ((IData)(vlTOPp->top__DOT__u_CPU__DOT__mem_out_reg) 
                                                           >> 
                                                           (7U 
                                                            & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                                                               >> 3U)))) 
                                                         << 7U)) 
                                                     | (0x10U 
                                                        & (IData)(vlTOPp->top__DOT__u_CPU__DOT__F)))));
                                    }
                                }
                            }
                        }
                    }
                } else {
                    vlTOPp->top__DOT__u_CPU__DOT__reg_w_data 
                        = ((0xff00U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__reg_w_data)) 
                           | (0x20U | ((0x80U & ((~ 
                                                  ((IData)(vlTOPp->top__DOT__u_CPU__DOT__Operand_r8) 
                                                   >> 
                                                   (7U 
                                                    & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                                                       >> 3U)))) 
                                                 << 7U)) 
                                       | (0x10U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__F)))));
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
                                    if ((0U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        if ((1U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                            if ((2U 
                                                 != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                if (
                                                    (3U 
                                                     != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                    if (
                                                        (4U 
                                                         != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                        if (
                                                            (5U 
                                                             != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                            if (
                                                                (6U 
                                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                vlTOPp->top__DOT__u_CPU__DOT__mem_control_w_data 
                                                                    = 
                                                                    (0x7fU 
                                                                     & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__mem_out_reg) 
                                                                        >> 1U));
                                                                vlTOPp->top__DOT__u_CPU__DOT__tem_reg_w_data 
                                                                    = vlTOPp->top__DOT__u_CPU__DOT__mem_control_w_data;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if ((8U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        vlTOPp->top__DOT__u_CPU__DOT__reg_w_data 
                                            = ((0xff00U 
                                                & (IData)(vlTOPp->top__DOT__u_CPU__DOT__reg_w_data)) 
                                               | (((0U 
                                                    == (IData)(vlTOPp->top__DOT__u_CPU__DOT__tem_reg)) 
                                                   << 7U) 
                                                  | (0x10U 
                                                     & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__mem_out_reg) 
                                                        << 4U))));
                                        vlTOPp->top__DOT__u_CPU__DOT__tem_reg_w_data = 0U;
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__u_CPU__DOT__reg_w_data 
                                    = ((0xff00U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__reg_w_data)) 
                                       | (0x7fU & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__Operand_r8) 
                                                   >> 1U)));
                                vlTOPp->top__DOT__u_CPU__DOT__reg_w_data_2 
                                    = ((0xff00U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__reg_w_data_2)) 
                                       | (((0U == (0xffU 
                                                   & (IData)(vlTOPp->top__DOT__u_CPU__DOT__reg_w_data))) 
                                           << 7U) | 
                                          (0x10U & 
                                           ((IData)(vlTOPp->top__DOT__u_CPU__DOT__Operand_r8) 
                                            << 4U))));
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
                                    if ((0U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        if ((1U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                            if ((2U 
                                                 != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                if (
                                                    (3U 
                                                     != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                    if (
                                                        (4U 
                                                         != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                        if (
                                                            (5U 
                                                             != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                            if (
                                                                (6U 
                                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                vlTOPp->top__DOT__u_CPU__DOT__mem_control_w_data 
                                                                    = 
                                                                    ((0xf0U 
                                                                      & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__mem_out_reg) 
                                                                         << 4U)) 
                                                                     | (0xfU 
                                                                        & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__mem_out_reg) 
                                                                           >> 4U)));
                                                                vlTOPp->top__DOT__u_CPU__DOT__tem_reg_w_data 
                                                                    = vlTOPp->top__DOT__u_CPU__DOT__mem_control_w_data;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if ((8U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        vlTOPp->top__DOT__u_CPU__DOT__reg_w_data 
                                            = ((0xff00U 
                                                & (IData)(vlTOPp->top__DOT__u_CPU__DOT__reg_w_data)) 
                                               | ((0U 
                                                   == (IData)(vlTOPp->top__DOT__u_CPU__DOT__tem_reg)) 
                                                  << 7U));
                                        vlTOPp->top__DOT__u_CPU__DOT__tem_reg_w_data = 0U;
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__u_CPU__DOT__reg_w_data 
                                    = ((0xff00U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__reg_w_data)) 
                                       | ((0xf0U & 
                                           ((IData)(vlTOPp->top__DOT__u_CPU__DOT__Operand_r8) 
                                            << 4U)) 
                                          | (0xfU & 
                                             ((IData)(vlTOPp->top__DOT__u_CPU__DOT__Operand_r8) 
                                              >> 4U))));
                                vlTOPp->top__DOT__u_CPU__DOT__reg_w_data_2 
                                    = ((0xff00U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__reg_w_data_2)) 
                                       | ((0U == (0xffU 
                                                  & (IData)(vlTOPp->top__DOT__u_CPU__DOT__reg_w_data))) 
                                          << 7U));
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
                                    if ((0U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        if ((1U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                            if ((2U 
                                                 != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                if (
                                                    (3U 
                                                     != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                    if (
                                                        (4U 
                                                         != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                        if (
                                                            (5U 
                                                             != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                            if (
                                                                (6U 
                                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                vlTOPp->top__DOT__u_CPU__DOT__mem_control_w_data 
                                                                    = 
                                                                    ((0x80U 
                                                                      & (IData)(vlTOPp->top__DOT__u_CPU__DOT__mem_out_reg)) 
                                                                     | (0x7fU 
                                                                        & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__mem_out_reg) 
                                                                           >> 1U)));
                                                                vlTOPp->top__DOT__u_CPU__DOT__tem_reg_w_data 
                                                                    = vlTOPp->top__DOT__u_CPU__DOT__mem_control_w_data;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if ((8U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        vlTOPp->top__DOT__u_CPU__DOT__reg_w_data 
                                            = ((0xff00U 
                                                & (IData)(vlTOPp->top__DOT__u_CPU__DOT__reg_w_data)) 
                                               | (((0U 
                                                    == (IData)(vlTOPp->top__DOT__u_CPU__DOT__tem_reg)) 
                                                   << 7U) 
                                                  | (0x10U 
                                                     & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__mem_out_reg) 
                                                        << 4U))));
                                        vlTOPp->top__DOT__u_CPU__DOT__tem_reg_w_data = 0U;
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__u_CPU__DOT__reg_w_data 
                                    = ((0xff00U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__reg_w_data)) 
                                       | ((0x80U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__Operand_r8)) 
                                          | (0x7fU 
                                             & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__Operand_r8) 
                                                >> 1U))));
                                vlTOPp->top__DOT__u_CPU__DOT__reg_w_data_2 
                                    = ((0xff00U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__reg_w_data_2)) 
                                       | (((0U == (0xffU 
                                                   & (IData)(vlTOPp->top__DOT__u_CPU__DOT__reg_w_data))) 
                                           << 7U) | 
                                          (0x10U & 
                                           ((IData)(vlTOPp->top__DOT__u_CPU__DOT__Operand_r8) 
                                            << 4U))));
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
                                    if ((0U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        if ((1U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                            if ((2U 
                                                 != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                if (
                                                    (3U 
                                                     != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                    if (
                                                        (4U 
                                                         != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                        if (
                                                            (5U 
                                                             != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                            if (
                                                                (6U 
                                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                vlTOPp->top__DOT__u_CPU__DOT__mem_control_w_data 
                                                                    = 
                                                                    (0xfeU 
                                                                     & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__mem_out_reg) 
                                                                        << 1U));
                                                                vlTOPp->top__DOT__u_CPU__DOT__tem_reg_w_data 
                                                                    = vlTOPp->top__DOT__u_CPU__DOT__mem_control_w_data;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if ((8U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        vlTOPp->top__DOT__u_CPU__DOT__reg_w_data 
                                            = ((0xff00U 
                                                & (IData)(vlTOPp->top__DOT__u_CPU__DOT__reg_w_data)) 
                                               | (((0U 
                                                    == (IData)(vlTOPp->top__DOT__u_CPU__DOT__tem_reg)) 
                                                   << 7U) 
                                                  | (0x10U 
                                                     & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__mem_out_reg) 
                                                        >> 3U))));
                                        vlTOPp->top__DOT__u_CPU__DOT__tem_reg_w_data = 0U;
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__u_CPU__DOT__reg_w_data 
                                    = ((0xff00U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__reg_w_data)) 
                                       | (0xfeU & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__Operand_r8) 
                                                   << 1U)));
                                vlTOPp->top__DOT__u_CPU__DOT__reg_w_data_2 
                                    = ((0xff00U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__reg_w_data_2)) 
                                       | (((0U == (0xffU 
                                                   & (IData)(vlTOPp->top__DOT__u_CPU__DOT__reg_w_data))) 
                                           << 7U) | 
                                          (0x10U & 
                                           ((IData)(vlTOPp->top__DOT__u_CPU__DOT__Operand_r8) 
                                            >> 3U))));
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
                                    if ((0U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        if ((1U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                            if ((2U 
                                                 != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                if (
                                                    (3U 
                                                     != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                    if (
                                                        (4U 
                                                         != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                        if (
                                                            (5U 
                                                             != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                            if (
                                                                (6U 
                                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                vlTOPp->top__DOT__u_CPU__DOT__mem_control_w_data 
                                                                    = 
                                                                    ((0x80U 
                                                                      & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__F) 
                                                                         << 3U)) 
                                                                     | (0x7fU 
                                                                        & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__mem_out_reg) 
                                                                           >> 1U)));
                                                                vlTOPp->top__DOT__u_CPU__DOT__tem_reg_w_data 
                                                                    = vlTOPp->top__DOT__u_CPU__DOT__mem_control_w_data;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if ((8U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        vlTOPp->top__DOT__u_CPU__DOT__reg_w_data 
                                            = ((0xff00U 
                                                & (IData)(vlTOPp->top__DOT__u_CPU__DOT__reg_w_data)) 
                                               | (((0U 
                                                    == (IData)(vlTOPp->top__DOT__u_CPU__DOT__tem_reg)) 
                                                   << 7U) 
                                                  | (0x10U 
                                                     & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__mem_out_reg) 
                                                        << 4U))));
                                        vlTOPp->top__DOT__u_CPU__DOT__tem_reg_w_data = 0U;
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__u_CPU__DOT__reg_w_data 
                                    = ((0xff00U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__reg_w_data)) 
                                       | ((0x80U & 
                                           ((IData)(vlTOPp->top__DOT__u_CPU__DOT__F) 
                                            << 3U)) 
                                          | (0x7fU 
                                             & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__Operand_r8) 
                                                >> 1U))));
                                vlTOPp->top__DOT__u_CPU__DOT__reg_w_data_2 
                                    = ((0xff00U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__reg_w_data_2)) 
                                       | (((0U == (0xffU 
                                                   & (IData)(vlTOPp->top__DOT__u_CPU__DOT__reg_w_data))) 
                                           << 7U) | 
                                          (0x10U & 
                                           ((IData)(vlTOPp->top__DOT__u_CPU__DOT__Operand_r8) 
                                            << 4U))));
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
                                    if ((0U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        if ((1U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                            if ((2U 
                                                 != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                if (
                                                    (3U 
                                                     != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                    if (
                                                        (4U 
                                                         != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                        if (
                                                            (5U 
                                                             != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                            if (
                                                                (6U 
                                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                vlTOPp->top__DOT__u_CPU__DOT__mem_control_w_data 
                                                                    = 
                                                                    ((0xfeU 
                                                                      & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__mem_out_reg) 
                                                                         << 1U)) 
                                                                     | (1U 
                                                                        & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__F) 
                                                                           >> 4U)));
                                                                vlTOPp->top__DOT__u_CPU__DOT__tem_reg_w_data 
                                                                    = vlTOPp->top__DOT__u_CPU__DOT__mem_control_w_data;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if ((8U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        vlTOPp->top__DOT__u_CPU__DOT__reg_w_data 
                                            = ((0xff00U 
                                                & (IData)(vlTOPp->top__DOT__u_CPU__DOT__reg_w_data)) 
                                               | (((0U 
                                                    == (IData)(vlTOPp->top__DOT__u_CPU__DOT__tem_reg)) 
                                                   << 7U) 
                                                  | (0x10U 
                                                     & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__mem_out_reg) 
                                                        >> 3U))));
                                        vlTOPp->top__DOT__u_CPU__DOT__tem_reg_w_data = 0U;
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__u_CPU__DOT__reg_w_data 
                                    = ((0xff00U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__reg_w_data)) 
                                       | ((0xfeU & 
                                           ((IData)(vlTOPp->top__DOT__u_CPU__DOT__Operand_r8) 
                                            << 1U)) 
                                          | (1U & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__F) 
                                                   >> 4U))));
                                vlTOPp->top__DOT__u_CPU__DOT__reg_w_data_2 
                                    = ((0xff00U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__reg_w_data_2)) 
                                       | (((0U == (0xffU 
                                                   & (IData)(vlTOPp->top__DOT__u_CPU__DOT__reg_w_data))) 
                                           << 7U) | 
                                          (0x10U & 
                                           ((IData)(vlTOPp->top__DOT__u_CPU__DOT__Operand_r8) 
                                            >> 3U))));
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
                                    if ((0U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        if ((1U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                            if ((2U 
                                                 != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                if (
                                                    (3U 
                                                     != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                    if (
                                                        (4U 
                                                         != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                        if (
                                                            (5U 
                                                             != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                            if (
                                                                (6U 
                                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                vlTOPp->top__DOT__u_CPU__DOT__mem_control_w_data 
                                                                    = 
                                                                    ((0x80U 
                                                                      & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__mem_out_reg) 
                                                                         << 7U)) 
                                                                     | (0x7fU 
                                                                        & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__mem_out_reg) 
                                                                           >> 1U)));
                                                                vlTOPp->top__DOT__u_CPU__DOT__tem_reg_w_data 
                                                                    = vlTOPp->top__DOT__u_CPU__DOT__mem_control_w_data;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if ((8U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        vlTOPp->top__DOT__u_CPU__DOT__reg_w_data 
                                            = ((0xff00U 
                                                & (IData)(vlTOPp->top__DOT__u_CPU__DOT__reg_w_data)) 
                                               | (((0U 
                                                    == (IData)(vlTOPp->top__DOT__u_CPU__DOT__tem_reg)) 
                                                   << 7U) 
                                                  | (0x10U 
                                                     & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__mem_out_reg) 
                                                        << 4U))));
                                        vlTOPp->top__DOT__u_CPU__DOT__tem_reg_w_data = 0U;
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__u_CPU__DOT__reg_w_data 
                                    = ((0xff00U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__reg_w_data)) 
                                       | ((0x80U & 
                                           ((IData)(vlTOPp->top__DOT__u_CPU__DOT__Operand_r8) 
                                            << 7U)) 
                                          | (0x7fU 
                                             & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__Operand_r8) 
                                                >> 1U))));
                                vlTOPp->top__DOT__u_CPU__DOT__reg_w_data_2 
                                    = ((0xff00U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__reg_w_data_2)) 
                                       | (((0U == (0xffU 
                                                   & (IData)(vlTOPp->top__DOT__u_CPU__DOT__reg_w_data))) 
                                           << 7U) | 
                                          (0x10U & 
                                           ((IData)(vlTOPp->top__DOT__u_CPU__DOT__Operand_r8) 
                                            << 4U))));
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
                                    if ((0U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        if ((1U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                            if ((2U 
                                                 != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                if (
                                                    (3U 
                                                     != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                    if (
                                                        (4U 
                                                         != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                        if (
                                                            (5U 
                                                             != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                            if (
                                                                (6U 
                                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                vlTOPp->top__DOT__u_CPU__DOT__mem_control_w_data 
                                                                    = 
                                                                    ((0xfeU 
                                                                      & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__mem_out_reg) 
                                                                         << 1U)) 
                                                                     | (1U 
                                                                        & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__mem_out_reg) 
                                                                           >> 7U)));
                                                                vlTOPp->top__DOT__u_CPU__DOT__tem_reg_w_data 
                                                                    = vlTOPp->top__DOT__u_CPU__DOT__mem_control_w_data;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if ((8U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        vlTOPp->top__DOT__u_CPU__DOT__reg_w_data 
                                            = ((0xff00U 
                                                & (IData)(vlTOPp->top__DOT__u_CPU__DOT__reg_w_data)) 
                                               | (((0U 
                                                    == (IData)(vlTOPp->top__DOT__u_CPU__DOT__tem_reg)) 
                                                   << 7U) 
                                                  | (0x10U 
                                                     & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__mem_out_reg) 
                                                        << 4U))));
                                        vlTOPp->top__DOT__u_CPU__DOT__tem_reg_w_data = 0U;
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__u_CPU__DOT__reg_w_data 
                                    = ((0xff00U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__reg_w_data)) 
                                       | ((0xfeU & 
                                           ((IData)(vlTOPp->top__DOT__u_CPU__DOT__Operand_r8) 
                                            << 1U)) 
                                          | (1U & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__Operand_r8) 
                                                   >> 7U))));
                                vlTOPp->top__DOT__u_CPU__DOT__reg_w_data_2 
                                    = ((0xff00U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__reg_w_data_2)) 
                                       | (((0U == (0xffU 
                                                   & (IData)(vlTOPp->top__DOT__u_CPU__DOT__reg_w_data))) 
                                           << 7U) | 
                                          (0x10U & 
                                           ((IData)(vlTOPp->top__DOT__u_CPU__DOT__Operand_r8) 
                                            >> 3U))));
                            }
                        }
                    }
                }
            }
        }
    }
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
    vlTOPp->top__DOT__ppu_mem_r_data = 0xffU;
    if ((0U == (IData)(vlTOPp->top__DOT__u_Memory_Interface__DOT__ppu_state))) {
        vlTOPp->top__DOT__ppu_mem_r_data = 0xffU;
    } else {
        if ((1U == (IData)(vlTOPp->top__DOT__u_Memory_Interface__DOT__ppu_state))) {
            vlTOPp->top__DOT__ppu_mem_r_data = vlTOPp->VRAM_r_data;
        } else {
            if ((2U == (IData)(vlTOPp->top__DOT__u_Memory_Interface__DOT__ppu_state))) {
                vlTOPp->top__DOT__ppu_mem_r_data = vlTOPp->OAM_r_data;
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
    if (((IData)(vlTOPp->top__DOT__u_Memory_Interface__DOT__cpu_vram_req) 
         & (IData)(vlTOPp->top__DOT__u_Memory_Interface__DOT__ppu_vram_req))) {
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
                                                        vlTOPp->top__DOT__u_Memory_Interface__DOT__cpu_next = 0U;
                                                    } else {
                                                        vlTOPp->top__DOT__io_reg_ena = 1U;
                                                        vlTOPp->top__DOT__io_reg_r_ena = 0U;
                                                        vlTOPp->top__DOT__io_reg_w_ena = 1U;
                                                        vlTOPp->top__DOT__io_reg_ad 
                                                            = vlTOPp->top__DOT__cpu_mem_ad;
                                                        vlTOPp->top__DOT__u_Memory_Interface__DOT__cpu_next = 0U;
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

void Vtop::_eval(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
        vlTOPp->__Vm_traceActivity[1U] = 1U;
        vlTOPp->_sequent__TOP__2(vlSymsp);
        vlTOPp->_sequent__TOP__3(vlSymsp);
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__4(vlSymsp);
        vlTOPp->__Vm_traceActivity[2U] = 1U;
    }
    vlTOPp->_combo__TOP__7(vlSymsp);
    vlTOPp->__Vm_traceActivity[3U] = 1U;
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData Vtop::_change_request(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_change_request\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vtop::_change_request_1(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_change_request_1\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlTOPp->top__DOT__u_CPU__DOT__flag_8 ^ vlTOPp->__Vchglast__TOP__top__DOT__u_CPU__DOT__flag_8)
         | (vlTOPp->top__DOT__u_CPU__DOT__alu_result_8 ^ vlTOPp->__Vchglast__TOP__top__DOT__u_CPU__DOT__alu_result_8));
    VL_DEBUG_IF( if(__req && ((vlTOPp->top__DOT__u_CPU__DOT__flag_8 ^ vlTOPp->__Vchglast__TOP__top__DOT__u_CPU__DOT__flag_8))) VL_DBG_MSGF("        CHANGE: cpu.sv:147: top.u_CPU.flag_8\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->top__DOT__u_CPU__DOT__alu_result_8 ^ vlTOPp->__Vchglast__TOP__top__DOT__u_CPU__DOT__alu_result_8))) VL_DBG_MSGF("        CHANGE: cpu.sv:148: top.u_CPU.alu_result_8\n"); );
    // Final
    vlTOPp->__Vchglast__TOP__top__DOT__u_CPU__DOT__flag_8 
        = vlTOPp->top__DOT__u_CPU__DOT__flag_8;
    vlTOPp->__Vchglast__TOP__top__DOT__u_CPU__DOT__alu_result_8 
        = vlTOPp->top__DOT__u_CPU__DOT__alu_result_8;
    return __req;
}

#ifdef VL_DEBUG
void Vtop::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((joypad_start & 0xfeU))) {
        Verilated::overWidthError("joypad_start");}
    if (VL_UNLIKELY((joypad_select & 0xfeU))) {
        Verilated::overWidthError("joypad_select");}
    if (VL_UNLIKELY((joypad_A & 0xfeU))) {
        Verilated::overWidthError("joypad_A");}
    if (VL_UNLIKELY((joypad_B & 0xfeU))) {
        Verilated::overWidthError("joypad_B");}
    if (VL_UNLIKELY((joypad_down & 0xfeU))) {
        Verilated::overWidthError("joypad_down");}
    if (VL_UNLIKELY((joypad_up & 0xfeU))) {
        Verilated::overWidthError("joypad_up");}
    if (VL_UNLIKELY((joypad_left & 0xfeU))) {
        Verilated::overWidthError("joypad_left");}
    if (VL_UNLIKELY((joypad_right & 0xfeU))) {
        Verilated::overWidthError("joypad_right");}
    if (VL_UNLIKELY((MBC_version & 0xf0U))) {
        Verilated::overWidthError("MBC_version");}
}
#endif  // VL_DEBUG
