// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop.h"
#include "Vtop__Syms.h"

VL_INLINE_OPT void Vtop::_sequent__TOP__3(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_sequent__TOP__3\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->top__DOT__u_CPU__DOT__reg_ad_2 = 0U;
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
                                    vlTOPp->top__DOT__u_CPU__DOT__reg_ad_2 = 9U;
                                } else {
                                    if ((9U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        if ((0xaU != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                            if ((0xbU 
                                                 != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                if (
                                                    (0xcU 
                                                     == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                    vlTOPp->top__DOT__u_CPU__DOT__reg_ad_2 = 9U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if ((1U & (~ ((~ ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                                          >> 5U)) & 
                                      (2U == (7U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))))))) {
                            if ((1U & (~ ((~ ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                                              >> 5U)) 
                                          & (4U == 
                                             (7U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))))))) {
                                if ((7U != (7U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                                    if ((1U != (0xfU 
                                                & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                                        if ((5U != 
                                             (0xfU 
                                              & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((((((((6U 
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
                                                         & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))))))) {
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
                                                                                vlTOPp->top__DOT__u_CPU__DOT__reg_ad_2 = 9U;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            if (
                                                                (8U 
                                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                vlTOPp->top__DOT__u_CPU__DOT__reg_ad_2 = 9U;
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
                                                                                vlTOPp->top__DOT__u_CPU__DOT__reg_ad_2 = 9U;
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                if (
                                                                    (8U 
                                                                     == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                    vlTOPp->top__DOT__u_CPU__DOT__reg_ad_2 = 9U;
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
                                                             != 
                                                             (0x3fU 
                                                              & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                                                            if (
                                                                (0x30U 
                                                                 != 
                                                                 (0x3fU 
                                                                  & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                                                                if (
                                                                    (0x3aU 
                                                                     != 
                                                                     (0x3fU 
                                                                      & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
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
                                                                                vlTOPp->top__DOT__u_CPU__DOT__reg_ad_2 = 2U;
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
                                                                                vlTOPp->top__DOT__u_CPU__DOT__reg_ad_2 = 2U;
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
            }
        } else {
            if ((1U & (~ ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                          >> 6U)))) {
                if ((4U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                            if ((0x20U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                                              >> 4U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                                                  >> 3U)))) {
                                        vlTOPp->top__DOT__u_CPU__DOT__reg_ad_2 = 2U;
                                    }
                                }
                            }
                        }
                    } else {
                        if ((1U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                            if ((6U != (7U & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                                              >> 3U)))) {
                                vlTOPp->top__DOT__u_CPU__DOT__reg_ad_2 = 2U;
                            }
                        } else {
                            if ((6U != (7U & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                                              >> 3U)))) {
                                vlTOPp->top__DOT__u_CPU__DOT__reg_ad_2 = 2U;
                            }
                        }
                    }
                } else {
                    if ((2U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
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
                                                        if (
                                                            (2U 
                                                             == 
                                                             (3U 
                                                              & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                                                                 >> 4U)))) {
                                                            vlTOPp->top__DOT__u_CPU__DOT__reg_ad_2 = 0xeU;
                                                        } else {
                                                            if (
                                                                (3U 
                                                                 == 
                                                                 (3U 
                                                                  & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                                                                     >> 4U)))) {
                                                                vlTOPp->top__DOT__u_CPU__DOT__reg_ad_2 = 0xeU;
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
                                                        vlTOPp->top__DOT__u_CPU__DOT__reg_ad_2 = 2U;
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
        if ((1U & (~ ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                      >> 7U)))) {
            if ((1U & (~ ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                          >> 6U)))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                            if ((6U != (7U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                                vlTOPp->top__DOT__u_CPU__DOT__reg_ad_2 = 2U;
                            }
                        } else {
                            if ((6U != (7U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                                vlTOPp->top__DOT__u_CPU__DOT__reg_ad_2 = 2U;
                            }
                        }
                    } else {
                        if ((8U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                            if ((6U != (7U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                                vlTOPp->top__DOT__u_CPU__DOT__reg_ad_2 = 2U;
                            }
                        } else {
                            if ((6U != (7U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                                vlTOPp->top__DOT__u_CPU__DOT__reg_ad_2 = 2U;
                            }
                        }
                    }
                } else {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                            if ((6U != (7U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                                vlTOPp->top__DOT__u_CPU__DOT__reg_ad_2 = 2U;
                            }
                        } else {
                            if ((6U != (7U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                                vlTOPp->top__DOT__u_CPU__DOT__reg_ad_2 = 2U;
                            }
                        }
                    } else {
                        if ((8U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                            if ((6U != (7U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                                vlTOPp->top__DOT__u_CPU__DOT__reg_ad_2 = 2U;
                            }
                        } else {
                            if ((6U != (7U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                                vlTOPp->top__DOT__u_CPU__DOT__reg_ad_2 = 2U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__u_CPU__DOT__reg_ad = 0U;
    vlTOPp->top__DOT__u_CPU__DOT__Operand_r8_ad = 0U;
    vlTOPp->top__DOT__u_CPU__DOT__Dest_r8 = 0U;
    vlTOPp->top__DOT__u_CPU__DOT__Operand_r16_ad = 0U;
    vlTOPp->top__DOT__u_CPU__DOT__register_r16stk_ad = 0U;
    if (((0U == (3U & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                       >> 6U))) & (~ (IData)(vlTOPp->top__DOT__u_CPU__DOT__prefix_valid)))) {
        if ((0U == (7U & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                          >> 3U)))) {
            vlTOPp->top__DOT__u_CPU__DOT__Operand_r8_ad = 3U;
        } else {
            if ((1U == (7U & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                              >> 3U)))) {
                vlTOPp->top__DOT__u_CPU__DOT__Operand_r8_ad = 4U;
            } else {
                if ((2U == (7U & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                                  >> 3U)))) {
                    vlTOPp->top__DOT__u_CPU__DOT__Operand_r8_ad = 5U;
                } else {
                    if ((3U == (7U & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                                      >> 3U)))) {
                        vlTOPp->top__DOT__u_CPU__DOT__Operand_r8_ad = 6U;
                    } else {
                        if ((4U == (7U & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                                          >> 3U)))) {
                            vlTOPp->top__DOT__u_CPU__DOT__Operand_r8_ad = 7U;
                        } else {
                            if ((5U == (7U & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                                              >> 3U)))) {
                                vlTOPp->top__DOT__u_CPU__DOT__Operand_r8_ad = 8U;
                            } else {
                                if ((7U == (7U & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                                                  >> 3U)))) {
                                    vlTOPp->top__DOT__u_CPU__DOT__Operand_r8_ad = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((0U == (7U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
            vlTOPp->top__DOT__u_CPU__DOT__Operand_r8_ad = 3U;
        } else {
            if ((1U == (7U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                vlTOPp->top__DOT__u_CPU__DOT__Operand_r8_ad = 4U;
            } else {
                if ((2U == (7U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                    vlTOPp->top__DOT__u_CPU__DOT__Operand_r8_ad = 5U;
                } else {
                    if ((3U == (7U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                        vlTOPp->top__DOT__u_CPU__DOT__Operand_r8_ad = 6U;
                    } else {
                        if ((4U == (7U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                            vlTOPp->top__DOT__u_CPU__DOT__Operand_r8_ad = 7U;
                        } else {
                            if ((5U == (7U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                                vlTOPp->top__DOT__u_CPU__DOT__Operand_r8_ad = 8U;
                            } else {
                                if ((7U == (7U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                                    vlTOPp->top__DOT__u_CPU__DOT__Operand_r8_ad = 1U;
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
        vlTOPp->top__DOT__u_CPU__DOT__Operand_r16_ad = 0xcU;
    } else {
        if ((1U == (3U & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                          >> 4U)))) {
            vlTOPp->top__DOT__u_CPU__DOT__Operand_r16_ad = 0xdU;
        } else {
            if ((2U == (3U & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                              >> 4U)))) {
                vlTOPp->top__DOT__u_CPU__DOT__Operand_r16_ad = 0xeU;
            } else {
                if ((3U == (3U & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                                  >> 4U)))) {
                    vlTOPp->top__DOT__u_CPU__DOT__Operand_r16_ad = 9U;
                }
            }
        }
    }
    if ((0U == (7U & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                      >> 3U)))) {
        vlTOPp->top__DOT__u_CPU__DOT__Dest_r8 = 3U;
    } else {
        if ((1U == (7U & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                          >> 3U)))) {
            vlTOPp->top__DOT__u_CPU__DOT__Dest_r8 = 4U;
        } else {
            if ((2U == (7U & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                              >> 3U)))) {
                vlTOPp->top__DOT__u_CPU__DOT__Dest_r8 = 5U;
            } else {
                if ((3U == (7U & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                                  >> 3U)))) {
                    vlTOPp->top__DOT__u_CPU__DOT__Dest_r8 = 6U;
                } else {
                    if ((4U == (7U & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                                      >> 3U)))) {
                        vlTOPp->top__DOT__u_CPU__DOT__Dest_r8 = 7U;
                    } else {
                        if ((5U == (7U & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                                          >> 3U)))) {
                            vlTOPp->top__DOT__u_CPU__DOT__Dest_r8 = 8U;
                        } else {
                            if ((7U == (7U & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                                              >> 3U)))) {
                                vlTOPp->top__DOT__u_CPU__DOT__Dest_r8 = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    if ((0U == (3U & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                      >> 4U)))) {
        vlTOPp->top__DOT__u_CPU__DOT__register_r16stk_ad = 0xcU;
    } else {
        if ((1U == (3U & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                          >> 4U)))) {
            vlTOPp->top__DOT__u_CPU__DOT__register_r16stk_ad = 0xdU;
        } else {
            if ((2U == (3U & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                              >> 4U)))) {
                vlTOPp->top__DOT__u_CPU__DOT__register_r16stk_ad = 0xeU;
            } else {
                if ((3U == (3U & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                                  >> 4U)))) {
                    vlTOPp->top__DOT__u_CPU__DOT__register_r16stk_ad = 0xbU;
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
                                    vlTOPp->top__DOT__u_CPU__DOT__reg_ad = 0xaU;
                                } else {
                                    if ((9U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        if ((0xaU != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                            if ((0xbU 
                                                 != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                if (
                                                    (0xcU 
                                                     == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                    vlTOPp->top__DOT__u_CPU__DOT__reg_ad = 0xaU;
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
                                                    vlTOPp->top__DOT__u_CPU__DOT__reg_ad = 0xaU;
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
                                                                vlTOPp->top__DOT__u_CPU__DOT__reg_ad = 9U;
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
                                                    vlTOPp->top__DOT__u_CPU__DOT__reg_ad = 9U;
                                                } else {
                                                    if (
                                                        (0x13U 
                                                         != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                        if (
                                                            (0x14U 
                                                             == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                            vlTOPp->top__DOT__u_CPU__DOT__reg_ad = 0xaU;
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
                                                                    vlTOPp->top__DOT__u_CPU__DOT__reg_ad = 9U;
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
                                                    vlTOPp->top__DOT__u_CPU__DOT__reg_ad = 9U;
                                                } else {
                                                    if (
                                                        (0xbU 
                                                         != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                        if (
                                                            (0xcU 
                                                             == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                            vlTOPp->top__DOT__u_CPU__DOT__reg_ad = 0xaU;
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
                                                        vlTOPp->top__DOT__u_CPU__DOT__reg_ad = 9U;
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
                                                                        vlTOPp->top__DOT__u_CPU__DOT__reg_ad = 9U;
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
                                                                vlTOPp->top__DOT__u_CPU__DOT__reg_ad 
                                                                    = vlTOPp->top__DOT__u_CPU__DOT__register_r16stk_ad;
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
                                                            vlTOPp->top__DOT__u_CPU__DOT__reg_ad = 9U;
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
                                                                            vlTOPp->top__DOT__u_CPU__DOT__reg_ad = 9U;
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
                                                            vlTOPp->top__DOT__u_CPU__DOT__reg_ad = 0xbU;
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
                                                                vlTOPp->top__DOT__u_CPU__DOT__reg_ad = 0xbU;
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
                                                                    vlTOPp->top__DOT__u_CPU__DOT__reg_ad = 0xbU;
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
                                                                        vlTOPp->top__DOT__u_CPU__DOT__reg_ad = 0xbU;
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
                                                                            vlTOPp->top__DOT__u_CPU__DOT__reg_ad = 0xbU;
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
                                                                                vlTOPp->top__DOT__u_CPU__DOT__reg_ad = 0xbU;
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
                                                                                vlTOPp->top__DOT__u_CPU__DOT__reg_ad = 0xbU;
                                                                                }
                                                                            }
                                                                        } else {
                                                                            if (
                                                                                (0U 
                                                                                != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                if (
                                                                                (4U 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__reg_ad = 0xbU;
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
                                                                                vlTOPp->top__DOT__u_CPU__DOT__reg_ad = 0xaU;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            if (
                                                                (8U 
                                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                vlTOPp->top__DOT__u_CPU__DOT__reg_ad = 0xaU;
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
                                                                                vlTOPp->top__DOT__u_CPU__DOT__reg_ad = 0xaU;
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                if (
                                                                    (8U 
                                                                     == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                    vlTOPp->top__DOT__u_CPU__DOT__reg_ad = 0xaU;
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
                                                                                vlTOPp->top__DOT__u_CPU__DOT__reg_ad = 0xaU;
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
                                                                    vlTOPp->top__DOT__u_CPU__DOT__reg_ad = 0xaU;
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
                                                                                vlTOPp->top__DOT__u_CPU__DOT__reg_ad = 9U;
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
                                                                                vlTOPp->top__DOT__u_CPU__DOT__reg_ad = 9U;
                                                                                } else {
                                                                                if (
                                                                                (0x13U 
                                                                                != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                if (
                                                                                (0x14U 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__reg_ad = 0xaU;
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
                                                                                vlTOPp->top__DOT__u_CPU__DOT__reg_ad = 1U;
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
                                                                                vlTOPp->top__DOT__u_CPU__DOT__reg_ad = 1U;
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
                                                                                vlTOPp->top__DOT__u_CPU__DOT__reg_ad = 1U;
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
                                                                                vlTOPp->top__DOT__u_CPU__DOT__reg_ad = 9U;
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
                                                                                vlTOPp->top__DOT__u_CPU__DOT__reg_ad = 0xeU;
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
                                                                                vlTOPp->top__DOT__u_CPU__DOT__reg_ad = 9U;
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
                                                    vlTOPp->top__DOT__u_CPU__DOT__reg_ad = 2U;
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__u_CPU__DOT__reg_ad = 2U;
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
                                                    vlTOPp->top__DOT__u_CPU__DOT__reg_ad = 0xbU;
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__u_CPU__DOT__reg_ad = 0xbU;
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
                                                    vlTOPp->top__DOT__u_CPU__DOT__reg_ad = 0xbU;
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__u_CPU__DOT__reg_ad = 0xbU;
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
                                                    vlTOPp->top__DOT__u_CPU__DOT__reg_ad = 0xbU;
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__u_CPU__DOT__reg_ad = 0xbU;
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
                                                    vlTOPp->top__DOT__u_CPU__DOT__reg_ad = 0xbU;
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__u_CPU__DOT__reg_ad = 0xbU;
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
                                                    vlTOPp->top__DOT__u_CPU__DOT__reg_ad = 0xbU;
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__u_CPU__DOT__reg_ad = 0xbU;
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
                                                    vlTOPp->top__DOT__u_CPU__DOT__reg_ad = 0xbU;
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__u_CPU__DOT__reg_ad = 0xbU;
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
                                                    vlTOPp->top__DOT__u_CPU__DOT__reg_ad = 0xbU;
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__u_CPU__DOT__reg_ad = 0xbU;
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
                                            vlTOPp->top__DOT__u_CPU__DOT__reg_ad 
                                                = vlTOPp->top__DOT__u_CPU__DOT__Dest_r8;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if ((6U != (7U & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                                          >> 3U)))) {
                            vlTOPp->top__DOT__u_CPU__DOT__reg_ad 
                                = vlTOPp->top__DOT__u_CPU__DOT__Dest_r8;
                        }
                    }
                }
            } else {
                if ((4U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                            vlTOPp->top__DOT__u_CPU__DOT__reg_ad 
                                = ((0x20U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))
                                    ? ((0x10U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))
                                        ? 2U : ((8U 
                                                 & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))
                                                 ? 0xbU
                                                 : 1U))
                                    : 0xbU);
                        } else {
                            if ((6U != (7U & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                                              >> 3U)))) {
                                if ((0U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                    if ((4U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        vlTOPp->top__DOT__u_CPU__DOT__reg_ad 
                                            = vlTOPp->top__DOT__u_CPU__DOT__Dest_r8;
                                    }
                                }
                            }
                        }
                    } else {
                        if ((1U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                            if ((6U == (7U & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                                              >> 3U)))) {
                                if ((1U & (~ ((((((
                                                   ((0U 
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
                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter)))))) {
                                    if ((8U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        vlTOPp->top__DOT__u_CPU__DOT__reg_ad = 2U;
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__u_CPU__DOT__reg_ad 
                                    = vlTOPp->top__DOT__u_CPU__DOT__Operand_r8_ad;
                            }
                        } else {
                            if ((6U == (7U & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                                              >> 3U)))) {
                                if ((1U & (~ ((((((
                                                   ((0U 
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
                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter)))))) {
                                    if ((8U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        vlTOPp->top__DOT__u_CPU__DOT__reg_ad = 2U;
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__u_CPU__DOT__reg_ad 
                                    = vlTOPp->top__DOT__u_CPU__DOT__Operand_r8_ad;
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
                                                        vlTOPp->top__DOT__u_CPU__DOT__reg_ad 
                                                            = vlTOPp->top__DOT__u_CPU__DOT__Operand_r16_ad;
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
                                                    vlTOPp->top__DOT__u_CPU__DOT__reg_ad 
                                                        = vlTOPp->top__DOT__u_CPU__DOT__Operand_r16_ad;
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
                                                        vlTOPp->top__DOT__u_CPU__DOT__reg_ad = 1U;
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
                                                    if (
                                                        (2U 
                                                         == 
                                                         (3U 
                                                          & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                                                             >> 4U)))) {
                                                        vlTOPp->top__DOT__u_CPU__DOT__reg_ad = 0xeU;
                                                    } else {
                                                        if (
                                                            (3U 
                                                             == 
                                                             (3U 
                                                              & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                                                                 >> 4U)))) {
                                                            vlTOPp->top__DOT__u_CPU__DOT__reg_ad = 0xeU;
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
                                                        vlTOPp->top__DOT__u_CPU__DOT__reg_ad = 0xeU;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                if ((0U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                    if ((8U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        vlTOPp->top__DOT__u_CPU__DOT__reg_ad 
                                            = vlTOPp->top__DOT__u_CPU__DOT__Operand_r16_ad;
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
                                                        vlTOPp->top__DOT__u_CPU__DOT__reg_ad = 0xaU;
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
                                                                    vlTOPp->top__DOT__u_CPU__DOT__reg_ad = 0xaU;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            vlTOPp->top__DOT__u_CPU__DOT__reg_ad = 0xaU;
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
                if ((6U != (7U & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                                  >> 3U)))) {
                    vlTOPp->top__DOT__u_CPU__DOT__reg_ad 
                        = vlTOPp->top__DOT__u_CPU__DOT__Operand_r8_ad;
                }
            } else {
                if ((6U != (7U & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                                  >> 3U)))) {
                    vlTOPp->top__DOT__u_CPU__DOT__reg_ad 
                        = vlTOPp->top__DOT__u_CPU__DOT__Operand_r8_ad;
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
                                        vlTOPp->top__DOT__u_CPU__DOT__reg_ad = 2U;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    vlTOPp->top__DOT__u_CPU__DOT__reg_ad = 2U;
                }
            } else {
                if ((0x20U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                            if ((6U == (7U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                                if ((1U & (~ ((((((
                                                   ((0U 
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
                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter)))))) {
                                    if ((8U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        vlTOPp->top__DOT__u_CPU__DOT__reg_ad = 2U;
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__u_CPU__DOT__reg_ad 
                                    = vlTOPp->top__DOT__u_CPU__DOT__Operand_r8_ad;
                            }
                        } else {
                            if ((6U == (7U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                                if ((1U & (~ ((((((
                                                   ((0U 
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
                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter)))))) {
                                    if ((8U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        vlTOPp->top__DOT__u_CPU__DOT__reg_ad = 2U;
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__u_CPU__DOT__reg_ad 
                                    = vlTOPp->top__DOT__u_CPU__DOT__Operand_r8_ad;
                            }
                        }
                    } else {
                        if ((8U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                            if ((6U == (7U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                                if ((1U & (~ ((((((
                                                   ((0U 
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
                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter)))))) {
                                    if ((8U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        vlTOPp->top__DOT__u_CPU__DOT__reg_ad = 2U;
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__u_CPU__DOT__reg_ad 
                                    = vlTOPp->top__DOT__u_CPU__DOT__Operand_r8_ad;
                            }
                        } else {
                            if ((6U == (7U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                                if ((1U & (~ ((((((
                                                   ((0U 
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
                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter)))))) {
                                    if ((8U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        vlTOPp->top__DOT__u_CPU__DOT__reg_ad = 2U;
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__u_CPU__DOT__reg_ad 
                                    = vlTOPp->top__DOT__u_CPU__DOT__Operand_r8_ad;
                            }
                        }
                    }
                } else {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                            if ((6U == (7U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                                if ((1U & (~ ((((((
                                                   ((0U 
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
                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter)))))) {
                                    if ((8U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        vlTOPp->top__DOT__u_CPU__DOT__reg_ad = 2U;
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__u_CPU__DOT__reg_ad 
                                    = vlTOPp->top__DOT__u_CPU__DOT__Operand_r8_ad;
                            }
                        } else {
                            if ((6U == (7U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                                if ((1U & (~ ((((((
                                                   ((0U 
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
                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter)))))) {
                                    if ((8U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        vlTOPp->top__DOT__u_CPU__DOT__reg_ad = 2U;
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__u_CPU__DOT__reg_ad 
                                    = vlTOPp->top__DOT__u_CPU__DOT__Operand_r8_ad;
                            }
                        }
                    } else {
                        if ((8U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                            if ((6U == (7U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                                if ((1U & (~ ((((((
                                                   ((0U 
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
                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter)))))) {
                                    if ((8U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        vlTOPp->top__DOT__u_CPU__DOT__reg_ad = 2U;
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__u_CPU__DOT__reg_ad 
                                    = vlTOPp->top__DOT__u_CPU__DOT__Operand_r8_ad;
                            }
                        } else {
                            if ((6U == (7U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                                if ((1U & (~ ((((((
                                                   ((0U 
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
                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter)))))) {
                                    if ((8U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        vlTOPp->top__DOT__u_CPU__DOT__reg_ad = 2U;
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__u_CPU__DOT__reg_ad 
                                    = vlTOPp->top__DOT__u_CPU__DOT__Operand_r8_ad;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__u_CPU__DOT__mem_control_ad = 0U;
    vlTOPp->top__DOT__u_CPU__DOT__Dest_r16mem = 0U;
    vlTOPp->top__DOT__u_CPU__DOT__Source_r16mem = 0U;
    if ((0U == (3U & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                      >> 4U)))) {
        vlTOPp->top__DOT__u_CPU__DOT__Dest_r16mem = 
            (((IData)(vlTOPp->top__DOT__u_CPU__DOT__B) 
              << 8U) | (IData)(vlTOPp->top__DOT__u_CPU__DOT__C));
        vlTOPp->top__DOT__u_CPU__DOT__Source_r16mem 
            = (((IData)(vlTOPp->top__DOT__u_CPU__DOT__B) 
                << 8U) | (IData)(vlTOPp->top__DOT__u_CPU__DOT__C));
    } else {
        if ((1U == (3U & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                          >> 4U)))) {
            vlTOPp->top__DOT__u_CPU__DOT__Dest_r16mem 
                = (((IData)(vlTOPp->top__DOT__u_CPU__DOT__D) 
                    << 8U) | (IData)(vlTOPp->top__DOT__u_CPU__DOT__E));
            vlTOPp->top__DOT__u_CPU__DOT__Source_r16mem 
                = (((IData)(vlTOPp->top__DOT__u_CPU__DOT__D) 
                    << 8U) | (IData)(vlTOPp->top__DOT__u_CPU__DOT__E));
        } else {
            if ((2U == (3U & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                              >> 4U)))) {
                vlTOPp->top__DOT__u_CPU__DOT__Dest_r16mem 
                    = (((IData)(vlTOPp->top__DOT__u_CPU__DOT__H) 
                        << 8U) | (IData)(vlTOPp->top__DOT__u_CPU__DOT__L));
                vlTOPp->top__DOT__u_CPU__DOT__Source_r16mem 
                    = (((IData)(vlTOPp->top__DOT__u_CPU__DOT__H) 
                        << 8U) | (IData)(vlTOPp->top__DOT__u_CPU__DOT__L));
            } else {
                if ((3U == (3U & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                                  >> 4U)))) {
                    vlTOPp->top__DOT__u_CPU__DOT__Dest_r16mem 
                        = (((IData)(vlTOPp->top__DOT__u_CPU__DOT__H) 
                            << 8U) | (IData)(vlTOPp->top__DOT__u_CPU__DOT__L));
                    vlTOPp->top__DOT__u_CPU__DOT__Source_r16mem 
                        = (((IData)(vlTOPp->top__DOT__u_CPU__DOT__H) 
                            << 8U) | (IData)(vlTOPp->top__DOT__u_CPU__DOT__L));
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
                                            if ((4U 
                                                 != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                if (
                                                    (5U 
                                                     != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                    if (
                                                        (6U 
                                                         == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                        vlTOPp->top__DOT__u_CPU__DOT__mem_control_ad 
                                                            = vlTOPp->top__DOT__u_CPU__DOT__SP;
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
                                if ((8U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                    if ((9U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        if ((0xaU == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                            vlTOPp->top__DOT__u_CPU__DOT__mem_control_ad 
                                                = vlTOPp->top__DOT__u_CPU__DOT__SP;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if ((1U & (~ ((~ ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                                          >> 5U)) & 
                                      (2U == (7U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))))))) {
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
                                                                vlTOPp->top__DOT__u_CPU__DOT__mem_control_ad 
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
                                                    vlTOPp->top__DOT__u_CPU__DOT__mem_control_ad 
                                                        = 
                                                        (0xffffU 
                                                         & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__SP) 
                                                            - (IData)(1U)));
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
                                                                    vlTOPp->top__DOT__u_CPU__DOT__mem_control_ad 
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
                                                    vlTOPp->top__DOT__u_CPU__DOT__mem_control_ad 
                                                        = 
                                                        (0xffffU 
                                                         & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__SP) 
                                                            - (IData)(1U)));
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
                                                        vlTOPp->top__DOT__u_CPU__DOT__mem_control_ad 
                                                            = vlTOPp->top__DOT__u_CPU__DOT__SP;
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
                                                                        vlTOPp->top__DOT__u_CPU__DOT__mem_control_ad 
                                                                            = vlTOPp->top__DOT__u_CPU__DOT__SP;
                                                                    }
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
                                                     != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                    if (
                                                        (1U 
                                                         != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                        if (
                                                            (2U 
                                                             == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                            vlTOPp->top__DOT__u_CPU__DOT__mem_control_ad 
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
                                                                            vlTOPp->top__DOT__u_CPU__DOT__mem_control_ad 
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
                                            if ((1U 
                                                 & (~ 
                                                    ((((((((6U 
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
                                                         & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))))))) {
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
                                                                         == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                        vlTOPp->top__DOT__u_CPU__DOT__mem_control_ad 
                                                                            = vlTOPp->top__DOT__u_CPU__DOT__SP;
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
                                                                                vlTOPp->top__DOT__u_CPU__DOT__mem_control_ad 
                                                                                = vlTOPp->top__DOT__u_CPU__DOT__SP;
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
                                                                             == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                            vlTOPp->top__DOT__u_CPU__DOT__mem_control_ad 
                                                                                = vlTOPp->top__DOT__u_CPU__DOT__SP;
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
                                                                                vlTOPp->top__DOT__u_CPU__DOT__mem_control_ad 
                                                                                = vlTOPp->top__DOT__u_CPU__DOT__SP;
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
                                                                (3U 
                                                                 != 
                                                                 (0x3fU 
                                                                  & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                                                                if (
                                                                    (0x29U 
                                                                     != 
                                                                     (0x3fU 
                                                                      & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
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
                                                                                vlTOPp->top__DOT__u_CPU__DOT__mem_control_ad 
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
                                                                                vlTOPp->top__DOT__u_CPU__DOT__mem_control_ad 
                                                                                = 
                                                                                (0xffffU 
                                                                                & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__SP) 
                                                                                - (IData)(1U)));
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
                                                                                vlTOPp->top__DOT__u_CPU__DOT__mem_control_ad 
                                                                                = 
                                                                                (0xff00U 
                                                                                | (IData)(vlTOPp->top__DOT__u_CPU__DOT__C));
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
                                                                                vlTOPp->top__DOT__u_CPU__DOT__mem_control_ad 
                                                                                = 
                                                                                (0xffffU 
                                                                                & ((IData)(0xff00U) 
                                                                                + (IData)(vlTOPp->top__DOT__u_CPU__DOT__imm8_reg)));
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
                                                                                vlTOPp->top__DOT__u_CPU__DOT__mem_control_ad 
                                                                                = vlTOPp->top__DOT__u_CPU__DOT__imm16_reg;
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
                                                                         == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                        vlTOPp->top__DOT__u_CPU__DOT__mem_control_ad 
                                                                            = 
                                                                            (0xff00U 
                                                                             | (IData)(vlTOPp->top__DOT__u_CPU__DOT__C));
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
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__mem_control_ad 
                                                                                = 
                                                                                (0xffffU 
                                                                                & ((IData)(0xff00U) 
                                                                                + (IData)(vlTOPp->top__DOT__u_CPU__DOT__imm8_reg)));
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
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__mem_control_ad 
                                                                                = vlTOPp->top__DOT__u_CPU__DOT__imm16_reg;
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
                                        if ((2U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                            vlTOPp->top__DOT__u_CPU__DOT__mem_control_ad 
                                                = (
                                                   ((IData)(vlTOPp->top__DOT__u_CPU__DOT__H) 
                                                    << 8U) 
                                                   | (IData)(vlTOPp->top__DOT__u_CPU__DOT__L));
                                        }
                                    }
                                }
                            }
                        } else {
                            if ((6U == (7U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                                if ((0U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                    if ((1U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        if ((2U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                            vlTOPp->top__DOT__u_CPU__DOT__mem_control_ad 
                                                = (
                                                   ((IData)(vlTOPp->top__DOT__u_CPU__DOT__H) 
                                                    << 8U) 
                                                   | (IData)(vlTOPp->top__DOT__u_CPU__DOT__L));
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if ((8U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                            if ((6U == (7U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                                if ((0U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                    if ((1U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        if ((2U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                            vlTOPp->top__DOT__u_CPU__DOT__mem_control_ad 
                                                = (
                                                   ((IData)(vlTOPp->top__DOT__u_CPU__DOT__H) 
                                                    << 8U) 
                                                   | (IData)(vlTOPp->top__DOT__u_CPU__DOT__L));
                                        }
                                    }
                                }
                            }
                        } else {
                            if ((6U == (7U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                                if ((0U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                    if ((1U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        if ((2U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                            vlTOPp->top__DOT__u_CPU__DOT__mem_control_ad 
                                                = (
                                                   ((IData)(vlTOPp->top__DOT__u_CPU__DOT__H) 
                                                    << 8U) 
                                                   | (IData)(vlTOPp->top__DOT__u_CPU__DOT__L));
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                            if ((6U == (7U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                                if ((0U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                    if ((1U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        if ((2U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                            vlTOPp->top__DOT__u_CPU__DOT__mem_control_ad 
                                                = (
                                                   ((IData)(vlTOPp->top__DOT__u_CPU__DOT__H) 
                                                    << 8U) 
                                                   | (IData)(vlTOPp->top__DOT__u_CPU__DOT__L));
                                        }
                                    }
                                }
                            }
                        } else {
                            if ((6U == (7U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                                if ((0U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                    if ((1U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        if ((2U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                            vlTOPp->top__DOT__u_CPU__DOT__mem_control_ad 
                                                = (
                                                   ((IData)(vlTOPp->top__DOT__u_CPU__DOT__H) 
                                                    << 8U) 
                                                   | (IData)(vlTOPp->top__DOT__u_CPU__DOT__L));
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if ((8U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                            if ((6U == (7U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                                if ((0U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                    if ((1U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        if ((2U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                            vlTOPp->top__DOT__u_CPU__DOT__mem_control_ad 
                                                = (
                                                   ((IData)(vlTOPp->top__DOT__u_CPU__DOT__H) 
                                                    << 8U) 
                                                   | (IData)(vlTOPp->top__DOT__u_CPU__DOT__L));
                                        }
                                    }
                                }
                            }
                        } else {
                            if ((6U == (7U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                                if ((0U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                    if ((1U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        if ((2U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                            vlTOPp->top__DOT__u_CPU__DOT__mem_control_ad 
                                                = (
                                                   ((IData)(vlTOPp->top__DOT__u_CPU__DOT__H) 
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
        } else {
            if ((0x40U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                if ((0x76U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                    if ((6U == (7U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                        if ((0U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                            if ((1U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                if ((2U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                    vlTOPp->top__DOT__u_CPU__DOT__mem_control_ad 
                                        = (((IData)(vlTOPp->top__DOT__u_CPU__DOT__H) 
                                            << 8U) 
                                           | (IData)(vlTOPp->top__DOT__u_CPU__DOT__L));
                                }
                            }
                        }
                    } else {
                        if ((6U == (7U & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                                          >> 3U)))) {
                            if ((0U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                if ((1U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                    if ((2U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        vlTOPp->top__DOT__u_CPU__DOT__mem_control_ad 
                                            = (((IData)(vlTOPp->top__DOT__u_CPU__DOT__H) 
                                                << 8U) 
                                               | (IData)(vlTOPp->top__DOT__u_CPU__DOT__L));
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if ((4U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                            if ((6U == (7U & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                                              >> 3U)))) {
                                if ((0U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                    if ((4U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        if ((5U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                            if ((6U 
                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                vlTOPp->top__DOT__u_CPU__DOT__mem_control_ad 
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
                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                vlTOPp->top__DOT__u_CPU__DOT__mem_control_ad 
                                                    = 
                                                    (((IData)(vlTOPp->top__DOT__u_CPU__DOT__H) 
                                                      << 8U) 
                                                     | (IData)(vlTOPp->top__DOT__u_CPU__DOT__L));
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
                                                                vlTOPp->top__DOT__u_CPU__DOT__mem_control_ad 
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
                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                vlTOPp->top__DOT__u_CPU__DOT__mem_control_ad 
                                                    = 
                                                    (((IData)(vlTOPp->top__DOT__u_CPU__DOT__H) 
                                                      << 8U) 
                                                     | (IData)(vlTOPp->top__DOT__u_CPU__DOT__L));
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
                                                                vlTOPp->top__DOT__u_CPU__DOT__mem_control_ad 
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
                } else {
                    if ((2U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                            if ((8U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                                if ((8U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                                    if ((0U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        if ((1U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                            if ((2U 
                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                vlTOPp->top__DOT__u_CPU__DOT__mem_control_ad 
                                                    = vlTOPp->top__DOT__u_CPU__DOT__Source_r16mem;
                                            }
                                        }
                                    }
                                }
                            } else {
                                if ((0U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                    if ((1U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        if ((2U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                            vlTOPp->top__DOT__u_CPU__DOT__mem_control_ad 
                                                = vlTOPp->top__DOT__u_CPU__DOT__Dest_r16mem;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                                          >> 5U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                                              >> 5U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                                                  >> 4U)))) {
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
                                                                vlTOPp->top__DOT__u_CPU__DOT__mem_control_ad 
                                                                    = vlTOPp->top__DOT__u_CPU__DOT__imm16_reg;
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
                                                                            vlTOPp->top__DOT__u_CPU__DOT__mem_control_ad 
                                                                                = 
                                                                                (0xffffU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(vlTOPp->top__DOT__u_CPU__DOT__imm16_reg)));
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
                                if ((2U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                    vlTOPp->top__DOT__u_CPU__DOT__mem_control_ad 
                                        = (((IData)(vlTOPp->top__DOT__u_CPU__DOT__H) 
                                            << 8U) 
                                           | (IData)(vlTOPp->top__DOT__u_CPU__DOT__L));
                                } else {
                                    if ((3U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        if ((4U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                            if ((5U 
                                                 != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                if (
                                                    (6U 
                                                     == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                    vlTOPp->top__DOT__u_CPU__DOT__mem_control_ad 
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
                                if ((2U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                    vlTOPp->top__DOT__u_CPU__DOT__mem_control_ad 
                                        = (((IData)(vlTOPp->top__DOT__u_CPU__DOT__H) 
                                            << 8U) 
                                           | (IData)(vlTOPp->top__DOT__u_CPU__DOT__L));
                                } else {
                                    if ((3U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        if ((4U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                            if ((5U 
                                                 != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                if (
                                                    (6U 
                                                     == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                    vlTOPp->top__DOT__u_CPU__DOT__mem_control_ad 
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
        } else {
            if ((0x40U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                if ((6U == (7U & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                                  >> 3U)))) {
                    if ((0U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                        if ((1U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                            if ((2U == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                vlTOPp->top__DOT__u_CPU__DOT__mem_control_ad 
                                    = (((IData)(vlTOPp->top__DOT__u_CPU__DOT__H) 
                                        << 8U) | (IData)(vlTOPp->top__DOT__u_CPU__DOT__L));
                            }
                        }
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
                                    if ((0U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                        if ((1U != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                            if ((2U 
                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                vlTOPp->top__DOT__u_CPU__DOT__mem_control_ad 
                                                    = 
                                                    (((IData)(vlTOPp->top__DOT__u_CPU__DOT__H) 
                                                      << 8U) 
                                                     | (IData)(vlTOPp->top__DOT__u_CPU__DOT__L));
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
                                                                vlTOPp->top__DOT__u_CPU__DOT__mem_control_ad 
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
                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                vlTOPp->top__DOT__u_CPU__DOT__mem_control_ad 
                                                    = 
                                                    (((IData)(vlTOPp->top__DOT__u_CPU__DOT__H) 
                                                      << 8U) 
                                                     | (IData)(vlTOPp->top__DOT__u_CPU__DOT__L));
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
                                                                vlTOPp->top__DOT__u_CPU__DOT__mem_control_ad 
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
                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                vlTOPp->top__DOT__u_CPU__DOT__mem_control_ad 
                                                    = 
                                                    (((IData)(vlTOPp->top__DOT__u_CPU__DOT__H) 
                                                      << 8U) 
                                                     | (IData)(vlTOPp->top__DOT__u_CPU__DOT__L));
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
                                                                vlTOPp->top__DOT__u_CPU__DOT__mem_control_ad 
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
                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                vlTOPp->top__DOT__u_CPU__DOT__mem_control_ad 
                                                    = 
                                                    (((IData)(vlTOPp->top__DOT__u_CPU__DOT__H) 
                                                      << 8U) 
                                                     | (IData)(vlTOPp->top__DOT__u_CPU__DOT__L));
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
                                                                vlTOPp->top__DOT__u_CPU__DOT__mem_control_ad 
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
                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                vlTOPp->top__DOT__u_CPU__DOT__mem_control_ad 
                                                    = 
                                                    (((IData)(vlTOPp->top__DOT__u_CPU__DOT__H) 
                                                      << 8U) 
                                                     | (IData)(vlTOPp->top__DOT__u_CPU__DOT__L));
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
                                                                vlTOPp->top__DOT__u_CPU__DOT__mem_control_ad 
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
                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                vlTOPp->top__DOT__u_CPU__DOT__mem_control_ad 
                                                    = 
                                                    (((IData)(vlTOPp->top__DOT__u_CPU__DOT__H) 
                                                      << 8U) 
                                                     | (IData)(vlTOPp->top__DOT__u_CPU__DOT__L));
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
                                                                vlTOPp->top__DOT__u_CPU__DOT__mem_control_ad 
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
                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                vlTOPp->top__DOT__u_CPU__DOT__mem_control_ad 
                                                    = 
                                                    (((IData)(vlTOPp->top__DOT__u_CPU__DOT__H) 
                                                      << 8U) 
                                                     | (IData)(vlTOPp->top__DOT__u_CPU__DOT__L));
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
                                                                vlTOPp->top__DOT__u_CPU__DOT__mem_control_ad 
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
                                                 == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                vlTOPp->top__DOT__u_CPU__DOT__mem_control_ad 
                                                    = 
                                                    (((IData)(vlTOPp->top__DOT__u_CPU__DOT__H) 
                                                      << 8U) 
                                                     | (IData)(vlTOPp->top__DOT__u_CPU__DOT__L));
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
                                                                vlTOPp->top__DOT__u_CPU__DOT__mem_control_ad 
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
    vlTOPp->top__DOT__u_CPU__DOT__alu_op_8 = 0U;
    if (vlTOPp->top__DOT__u_CPU__DOT__opcode_valid) {
        if ((0x80U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                if ((0xcbU != (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                    if ((1U & (~ ((~ ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                                      >> 5U)) & (0U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))))))) {
                        if ((1U & (~ ((~ ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                                          >> 5U)) & 
                                      (2U == (7U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))))))) {
                            if ((1U & (~ ((~ ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                                              >> 5U)) 
                                          & (4U == 
                                             (7U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))))))) {
                                if ((7U != (7U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                                    if ((1U != (0xfU 
                                                & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                                        if ((5U != 
                                             (0xfU 
                                              & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
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
                                                            vlTOPp->top__DOT__u_CPU__DOT__alu_op_8 = 0U;
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
                                                                vlTOPp->top__DOT__u_CPU__DOT__alu_op_8 = 0U;
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
                                                                    vlTOPp->top__DOT__u_CPU__DOT__alu_op_8 = 1U;
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
                                                                        vlTOPp->top__DOT__u_CPU__DOT__alu_op_8 = 1U;
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
                                                                            vlTOPp->top__DOT__u_CPU__DOT__alu_op_8 = 2U;
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
                                                                                vlTOPp->top__DOT__u_CPU__DOT__alu_op_8 = 3U;
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
                                                                                vlTOPp->top__DOT__u_CPU__DOT__alu_op_8 = 4U;
                                                                                }
                                                                            }
                                                                        } else {
                                                                            if (
                                                                                (0U 
                                                                                != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                if (
                                                                                (4U 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__alu_op_8 = 1U;
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
                                                    vlTOPp->top__DOT__u_CPU__DOT__alu_op_8 = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__u_CPU__DOT__alu_op_8 = 1U;
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
                                                    vlTOPp->top__DOT__u_CPU__DOT__alu_op_8 = 4U;
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__u_CPU__DOT__alu_op_8 = 4U;
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
                                                    vlTOPp->top__DOT__u_CPU__DOT__alu_op_8 = 3U;
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__u_CPU__DOT__alu_op_8 = 3U;
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
                                                    vlTOPp->top__DOT__u_CPU__DOT__alu_op_8 = 2U;
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__u_CPU__DOT__alu_op_8 = 2U;
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
                                                    vlTOPp->top__DOT__u_CPU__DOT__alu_op_8 = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__u_CPU__DOT__alu_op_8 = 1U;
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
                                                    vlTOPp->top__DOT__u_CPU__DOT__alu_op_8 = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__u_CPU__DOT__alu_op_8 = 1U;
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
                                                    vlTOPp->top__DOT__u_CPU__DOT__alu_op_8 = 0U;
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__u_CPU__DOT__alu_op_8 = 0U;
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
                                                    vlTOPp->top__DOT__u_CPU__DOT__alu_op_8 = 0U;
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__u_CPU__DOT__alu_op_8 = 0U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__u_CPU__DOT__a_8 = 0U;
    if (vlTOPp->top__DOT__u_CPU__DOT__opcode_valid) {
        if ((0x80U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                if ((0xcbU != (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                    if ((1U & (~ ((~ ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                                      >> 5U)) & (0U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))))))) {
                        if ((1U & (~ ((~ ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                                          >> 5U)) & 
                                      (2U == (7U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))))))) {
                            if ((1U & (~ ((~ ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                                              >> 5U)) 
                                          & (4U == 
                                             (7U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))))))) {
                                if ((7U != (7U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                                    if ((1U != (0xfU 
                                                & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                                        if ((5U != 
                                             (0xfU 
                                              & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
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
                                                            vlTOPp->top__DOT__u_CPU__DOT__a_8 
                                                                = vlTOPp->top__DOT__u_CPU__DOT__A;
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
                                                                vlTOPp->top__DOT__u_CPU__DOT__a_8 
                                                                    = vlTOPp->top__DOT__u_CPU__DOT__A;
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
                                                                    vlTOPp->top__DOT__u_CPU__DOT__a_8 
                                                                        = vlTOPp->top__DOT__u_CPU__DOT__A;
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
                                                                        vlTOPp->top__DOT__u_CPU__DOT__a_8 
                                                                            = vlTOPp->top__DOT__u_CPU__DOT__A;
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
                                                                            vlTOPp->top__DOT__u_CPU__DOT__a_8 
                                                                                = vlTOPp->top__DOT__u_CPU__DOT__A;
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
                                                                                vlTOPp->top__DOT__u_CPU__DOT__a_8 
                                                                                = vlTOPp->top__DOT__u_CPU__DOT__A;
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
                                                                                vlTOPp->top__DOT__u_CPU__DOT__a_8 
                                                                                = vlTOPp->top__DOT__u_CPU__DOT__A;
                                                                                }
                                                                            }
                                                                        } else {
                                                                            if (
                                                                                (0U 
                                                                                != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                if (
                                                                                (4U 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__a_8 
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
                                                    vlTOPp->top__DOT__u_CPU__DOT__a_8 
                                                        = vlTOPp->top__DOT__u_CPU__DOT__A;
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__u_CPU__DOT__a_8 
                                    = vlTOPp->top__DOT__u_CPU__DOT__A;
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
                                                    vlTOPp->top__DOT__u_CPU__DOT__a_8 
                                                        = vlTOPp->top__DOT__u_CPU__DOT__A;
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__u_CPU__DOT__a_8 
                                    = vlTOPp->top__DOT__u_CPU__DOT__A;
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
                                                    vlTOPp->top__DOT__u_CPU__DOT__a_8 
                                                        = vlTOPp->top__DOT__u_CPU__DOT__A;
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__u_CPU__DOT__a_8 
                                    = vlTOPp->top__DOT__u_CPU__DOT__A;
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
                                                    vlTOPp->top__DOT__u_CPU__DOT__a_8 
                                                        = vlTOPp->top__DOT__u_CPU__DOT__A;
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__u_CPU__DOT__a_8 
                                    = vlTOPp->top__DOT__u_CPU__DOT__A;
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
                                                    vlTOPp->top__DOT__u_CPU__DOT__a_8 
                                                        = vlTOPp->top__DOT__u_CPU__DOT__A;
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__u_CPU__DOT__a_8 
                                    = vlTOPp->top__DOT__u_CPU__DOT__A;
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
                                                    vlTOPp->top__DOT__u_CPU__DOT__a_8 
                                                        = vlTOPp->top__DOT__u_CPU__DOT__A;
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__u_CPU__DOT__a_8 
                                    = vlTOPp->top__DOT__u_CPU__DOT__A;
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
                                                    vlTOPp->top__DOT__u_CPU__DOT__a_8 
                                                        = vlTOPp->top__DOT__u_CPU__DOT__A;
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__u_CPU__DOT__a_8 
                                    = vlTOPp->top__DOT__u_CPU__DOT__A;
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
                                                    vlTOPp->top__DOT__u_CPU__DOT__a_8 
                                                        = vlTOPp->top__DOT__u_CPU__DOT__A;
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__u_CPU__DOT__a_8 
                                    = vlTOPp->top__DOT__u_CPU__DOT__A;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__u_CPU__DOT__cin_8 = 0U;
    if (vlTOPp->top__DOT__u_CPU__DOT__opcode_valid) {
        if ((0x80U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                if ((0xcbU != (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))) {
                    if ((1U & (~ ((~ ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                                      >> 5U)) & (0U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))))))) {
                        if ((1U & (~ ((~ ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                                          >> 5U)) & 
                                      (2U == (7U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))))))) {
                            if ((1U & (~ ((~ ((IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode) 
                                              >> 5U)) 
                                          & (4U == 
                                             (7U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode))))))) {
                                if ((7U != (7U & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                                    if ((1U != (0xfU 
                                                & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
                                        if ((5U != 
                                             (0xfU 
                                              & (IData)(vlTOPp->top__DOT__u_CPU__DOT__opcode)))) {
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
                                                            vlTOPp->top__DOT__u_CPU__DOT__cin_8 = 0U;
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
                                                                vlTOPp->top__DOT__u_CPU__DOT__cin_8 
                                                                    = 
                                                                    (1U 
                                                                     & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__F) 
                                                                        >> 4U));
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
                                                                    vlTOPp->top__DOT__u_CPU__DOT__cin_8 = 0U;
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
                                                                        vlTOPp->top__DOT__u_CPU__DOT__cin_8 
                                                                            = 
                                                                            (1U 
                                                                             & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__F) 
                                                                                >> 4U));
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
                                                                            vlTOPp->top__DOT__u_CPU__DOT__cin_8 = 0U;
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
                                                                                vlTOPp->top__DOT__u_CPU__DOT__cin_8 = 0U;
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
                                                                                vlTOPp->top__DOT__u_CPU__DOT__cin_8 = 0U;
                                                                                }
                                                                            }
                                                                        } else {
                                                                            if (
                                                                                (0U 
                                                                                != (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                if (
                                                                                (4U 
                                                                                == (IData)(vlTOPp->top__DOT__u_CPU__DOT__T_clk_counter))) {
                                                                                vlTOPp->top__DOT__u_CPU__DOT__cin_8 = 0U;
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
                                                    vlTOPp->top__DOT__u_CPU__DOT__cin_8 = 0U;
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__u_CPU__DOT__cin_8 = 0U;
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
                                                    vlTOPp->top__DOT__u_CPU__DOT__cin_8 = 0U;
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__u_CPU__DOT__cin_8 = 0U;
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
                                                    vlTOPp->top__DOT__u_CPU__DOT__cin_8 = 0U;
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__u_CPU__DOT__cin_8 = 0U;
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
                                                    vlTOPp->top__DOT__u_CPU__DOT__cin_8 = 0U;
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__u_CPU__DOT__cin_8 = 0U;
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
                                                    vlTOPp->top__DOT__u_CPU__DOT__cin_8 
                                                        = 
                                                        (1U 
                                                         & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__F) 
                                                            >> 4U));
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__u_CPU__DOT__cin_8 
                                    = (1U & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__F) 
                                             >> 4U));
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
                                                    vlTOPp->top__DOT__u_CPU__DOT__cin_8 = 0U;
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__u_CPU__DOT__cin_8 = 0U;
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
                                                    vlTOPp->top__DOT__u_CPU__DOT__cin_8 
                                                        = 
                                                        (1U 
                                                         & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__F) 
                                                            >> 4U));
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__u_CPU__DOT__cin_8 
                                    = (1U & ((IData)(vlTOPp->top__DOT__u_CPU__DOT__F) 
                                             >> 4U));
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
                                                    vlTOPp->top__DOT__u_CPU__DOT__cin_8 = 0U;
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__u_CPU__DOT__cin_8 = 0U;
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg = 0U;
    } else {
        if (((IData)(vlTOPp->top__DOT__u_io_register__DOT__IE_w_ena) 
             & (0xffffU == (IData)(vlTOPp->top__DOT__io_reg_ad)))) {
            vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg 
                = vlTOPp->top__DOT__io_reg_w_data;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg = 0U;
    } else {
        if (vlTOPp->top__DOT__u_io_register__DOT__irq_joypad) {
            vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg 
                = (0x10U | (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg));
        }
        if (vlTOPp->top__DOT__u_io_register__DOT__irq_timer_wire) {
            vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg 
                = (4U | (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg));
        }
        if (vlTOPp->top__DOT__irq_LCD) {
            vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg 
                = (2U | (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg));
        }
        if (vlTOPp->top__DOT__irq_vblank) {
            vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg 
                = (1U | (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg));
        }
        if ((0x10U & (IData)(vlTOPp->top__DOT__irq_clear))) {
            vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg 
                = (0xefU & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg));
        }
        if ((8U & (IData)(vlTOPp->top__DOT__irq_clear))) {
            vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg 
                = (0xf7U & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg));
        }
        if ((4U & (IData)(vlTOPp->top__DOT__irq_clear))) {
            vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg 
                = (0xfbU & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg));
        }
        if ((2U & (IData)(vlTOPp->top__DOT__irq_clear))) {
            vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg 
                = (0xfdU & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg));
        }
        if ((1U & (IData)(vlTOPp->top__DOT__irq_clear))) {
            vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg 
                = (0xfeU & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg));
        }
        if (((IData)(vlTOPp->top__DOT__u_io_register__DOT__IF_w_ena) 
             & (0xff0fU == (IData)(vlTOPp->top__DOT__io_reg_ad)))) {
            vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg 
                = vlTOPp->top__DOT__io_reg_w_data;
        }
    }
    vlTOPp->top__DOT__u_PPU__DOT__obj_row = (0xffU 
                                             & (((IData)(0x10U) 
                                                 + (IData)(vlTOPp->top__DOT__u_PPU__DOT__line_counter)) 
                                                - (
                                                   (0x4fU 
                                                    >= 
                                                    (0x7fU 
                                                     & ((IData)(vlTOPp->top__DOT__u_PPU__DOT__array_index) 
                                                        << 3U)))
                                                    ? 
                                                   (((0U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(vlTOPp->top__DOT__u_PPU__DOT__array_index) 
                                                          << 3U)))
                                                      ? 0U
                                                      : 
                                                     (vlTOPp->top__DOT__u_PPU__DOT__obj_y[
                                                      ((IData)(1U) 
                                                       + 
                                                       (3U 
                                                        & ((IData)(vlTOPp->top__DOT__u_PPU__DOT__array_index) 
                                                           >> 2U)))] 
                                                      << 
                                                      ((IData)(0x20U) 
                                                       - 
                                                       (0x1fU 
                                                        & ((IData)(vlTOPp->top__DOT__u_PPU__DOT__array_index) 
                                                           << 3U))))) 
                                                    | (vlTOPp->top__DOT__u_PPU__DOT__obj_y[
                                                       (3U 
                                                        & ((IData)(vlTOPp->top__DOT__u_PPU__DOT__array_index) 
                                                           >> 2U))] 
                                                       >> 
                                                       (0x1fU 
                                                        & ((IData)(vlTOPp->top__DOT__u_PPU__DOT__array_index) 
                                                           << 3U))))
                                                    : 0U)));
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__u_io_register__DOT__inst_PPU_IO__DOT__BGP_reg = 0U;
    } else {
        if (((((((((0xff40U == (IData)(vlTOPp->top__DOT__io_reg_ad)) 
                   | (0xff42U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                  | (0xff43U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                 | (0xff45U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                | (0xff47U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
               | (0xff48U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
              | (0xff49U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
             | (0xff4aU == (IData)(vlTOPp->top__DOT__io_reg_ad)))) {
            if ((0xff40U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                if ((0xff42U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                    if ((0xff43U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                        if ((0xff45U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                            if ((0xff47U == (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                                if (vlTOPp->top__DOT__u_io_register__DOT__ppu_io_w_ena) {
                                    vlTOPp->top__DOT__u_io_register__DOT__inst_PPU_IO__DOT__BGP_reg 
                                        = vlTOPp->top__DOT__io_reg_w_data;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__u_io_register__DOT__inst_PPU_IO__DOT__OBP0_reg = 0U;
    } else {
        if (((((((((0xff40U == (IData)(vlTOPp->top__DOT__io_reg_ad)) 
                   | (0xff42U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                  | (0xff43U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                 | (0xff45U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                | (0xff47U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
               | (0xff48U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
              | (0xff49U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
             | (0xff4aU == (IData)(vlTOPp->top__DOT__io_reg_ad)))) {
            if ((0xff40U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                if ((0xff42U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                    if ((0xff43U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                        if ((0xff45U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                            if ((0xff47U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                                if ((0xff48U == (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                                    if (vlTOPp->top__DOT__u_io_register__DOT__ppu_io_w_ena) {
                                        vlTOPp->top__DOT__u_io_register__DOT__inst_PPU_IO__DOT__OBP0_reg 
                                            = vlTOPp->top__DOT__io_reg_w_data;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__u_io_register__DOT__inst_PPU_IO__DOT__OBP1_reg = 0U;
    } else {
        if (((((((((0xff40U == (IData)(vlTOPp->top__DOT__io_reg_ad)) 
                   | (0xff42U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                  | (0xff43U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                 | (0xff45U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                | (0xff47U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
               | (0xff48U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
              | (0xff49U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
             | (0xff4aU == (IData)(vlTOPp->top__DOT__io_reg_ad)))) {
            if ((0xff40U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                if ((0xff42U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                    if ((0xff43U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                        if ((0xff45U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                            if ((0xff47U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                                if ((0xff48U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                                    if ((0xff49U == (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                                        if (vlTOPp->top__DOT__u_io_register__DOT__ppu_io_w_ena) {
                                            vlTOPp->top__DOT__u_io_register__DOT__inst_PPU_IO__DOT__OBP1_reg 
                                                = vlTOPp->top__DOT__io_reg_w_data;
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
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__u_io_register__DOT__inst_PPU_IO__DOT__SCY_reg = 0U;
    } else {
        if (((((((((0xff40U == (IData)(vlTOPp->top__DOT__io_reg_ad)) 
                   | (0xff42U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                  | (0xff43U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                 | (0xff45U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                | (0xff47U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
               | (0xff48U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
              | (0xff49U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
             | (0xff4aU == (IData)(vlTOPp->top__DOT__io_reg_ad)))) {
            if ((0xff40U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                if ((0xff42U == (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                    if (vlTOPp->top__DOT__u_io_register__DOT__ppu_io_w_ena) {
                        vlTOPp->top__DOT__u_io_register__DOT__inst_PPU_IO__DOT__SCY_reg 
                            = vlTOPp->top__DOT__io_reg_w_data;
                    }
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__u_io_register__DOT__inst_PPU_IO__DOT__WY_reg = 0U;
    } else {
        if (((((((((0xff40U == (IData)(vlTOPp->top__DOT__io_reg_ad)) 
                   | (0xff42U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                  | (0xff43U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                 | (0xff45U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                | (0xff47U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
               | (0xff48U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
              | (0xff49U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
             | (0xff4aU == (IData)(vlTOPp->top__DOT__io_reg_ad)))) {
            if ((0xff40U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                if ((0xff42U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                    if ((0xff43U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                        if ((0xff45U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                            if ((0xff47U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                                if ((0xff48U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                                    if ((0xff49U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                                        if (vlTOPp->top__DOT__u_io_register__DOT__ppu_io_w_ena) {
                                            vlTOPp->top__DOT__u_io_register__DOT__inst_PPU_IO__DOT__WY_reg 
                                                = vlTOPp->top__DOT__io_reg_w_data;
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
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__u_io_register__DOT__inst_PPU_IO__DOT__SCX_reg = 0U;
    } else {
        if (((((((((0xff40U == (IData)(vlTOPp->top__DOT__io_reg_ad)) 
                   | (0xff42U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                  | (0xff43U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                 | (0xff45U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                | (0xff47U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
               | (0xff48U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
              | (0xff49U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
             | (0xff4aU == (IData)(vlTOPp->top__DOT__io_reg_ad)))) {
            if ((0xff40U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                if ((0xff42U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                    if ((0xff43U == (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                        if (vlTOPp->top__DOT__u_io_register__DOT__ppu_io_w_ena) {
                            vlTOPp->top__DOT__u_io_register__DOT__inst_PPU_IO__DOT__SCX_reg 
                                = vlTOPp->top__DOT__io_reg_w_data;
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__u_io_register__DOT__inst_PPU_IO__DOT__LYC_reg = 0U;
    } else {
        if (((((((((0xff40U == (IData)(vlTOPp->top__DOT__io_reg_ad)) 
                   | (0xff42U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                  | (0xff43U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                 | (0xff45U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                | (0xff47U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
               | (0xff48U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
              | (0xff49U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
             | (0xff4aU == (IData)(vlTOPp->top__DOT__io_reg_ad)))) {
            if ((0xff40U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                if ((0xff42U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                    if ((0xff43U != (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                        if ((0xff45U == (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                            if (vlTOPp->top__DOT__u_io_register__DOT__ppu_io_w_ena) {
                                vlTOPp->top__DOT__u_io_register__DOT__inst_PPU_IO__DOT__LYC_reg 
                                    = vlTOPp->top__DOT__io_reg_w_data;
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__u_io_register__DOT__inst_PPU_IO__DOT__WX_reg = 0U;
    } else {
        if ((1U & (~ ((((((((0xff40U == (IData)(vlTOPp->top__DOT__io_reg_ad)) 
                            | (0xff42U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                           | (0xff43U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                          | (0xff45U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                         | (0xff47U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                        | (0xff48U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                       | (0xff49U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                      | (0xff4aU == (IData)(vlTOPp->top__DOT__io_reg_ad)))))) {
            if ((0xff4bU == (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                if (vlTOPp->top__DOT__u_io_register__DOT__ppu_io_w_ena) {
                    vlTOPp->top__DOT__u_io_register__DOT__inst_PPU_IO__DOT__WX_reg 
                        = vlTOPp->top__DOT__io_reg_w_data;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__u_io_register__DOT__inst_PPU_IO__DOT__LCDC_reg = 0U;
    } else {
        if (((((((((0xff40U == (IData)(vlTOPp->top__DOT__io_reg_ad)) 
                   | (0xff42U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                  | (0xff43U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                 | (0xff45U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
                | (0xff47U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
               | (0xff48U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
              | (0xff49U == (IData)(vlTOPp->top__DOT__io_reg_ad))) 
             | (0xff4aU == (IData)(vlTOPp->top__DOT__io_reg_ad)))) {
            if ((0xff40U == (IData)(vlTOPp->top__DOT__io_reg_ad))) {
                if (vlTOPp->top__DOT__u_io_register__DOT__ppu_io_w_ena) {
                    vlTOPp->top__DOT__u_io_register__DOT__inst_PPU_IO__DOT__LCDC_reg 
                        = vlTOPp->top__DOT__io_reg_w_data;
                }
            }
        }
    }
    vlTOPp->top__DOT__irq_clear = vlTOPp->__Vdly__top__DOT__irq_clear;
    vlTOPp->IE_out = (0xe0U | (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IE__DOT__IE_reg));
    vlTOPp->IF_out = (0xe0U | (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_IF__DOT__IF_reg));
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
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__top__DOT__u_io_register__DOT__JOY = 0xffU;
        vlTOPp->top__DOT__u_io_register__DOT__irq_joypad = 0U;
    } else {
        vlTOPp->top__DOT__u_io_register__DOT__irq_joypad = 0U;
        vlTOPp->__Vdly__top__DOT__u_io_register__DOT__JOY 
            = (0xc0U | (IData)(vlTOPp->__Vdly__top__DOT__u_io_register__DOT__JOY));
        if (vlTOPp->top__DOT__u_io_register__DOT__joy_w_ena) {
            vlTOPp->__Vdly__top__DOT__u_io_register__DOT__JOY 
                = ((0xcfU & (IData)(vlTOPp->__Vdly__top__DOT__u_io_register__DOT__JOY)) 
                   | (0x30U & (IData)(vlTOPp->top__DOT__io_reg_w_data)));
        }
        if ((0x20U & (IData)(vlTOPp->top__DOT__u_io_register__DOT__JOY))) {
            if ((0x10U & (IData)(vlTOPp->top__DOT__u_io_register__DOT__JOY))) {
                vlTOPp->__Vdly__top__DOT__u_io_register__DOT__JOY 
                    = (0xfU | (IData)(vlTOPp->__Vdly__top__DOT__u_io_register__DOT__JOY));
            } else {
                if ((0U != (0xfU & ((~ ((8U & ((~ (IData)(vlTOPp->joypad_down)) 
                                               << 3U)) 
                                        | ((4U & ((~ (IData)(vlTOPp->joypad_up)) 
                                                  << 2U)) 
                                           | ((2U & 
                                               ((~ (IData)(vlTOPp->joypad_left)) 
                                                << 1U)) 
                                              | (1U 
                                                 & (~ (IData)(vlTOPp->joypad_right))))))) 
                                    & (IData)(vlTOPp->top__DOT__u_io_register__DOT__JOY))))) {
                    vlTOPp->top__DOT__u_io_register__DOT__irq_joypad = 1U;
                }
                vlTOPp->__Vdly__top__DOT__u_io_register__DOT__JOY 
                    = ((0xf0U & (IData)(vlTOPp->__Vdly__top__DOT__u_io_register__DOT__JOY)) 
                       | ((8U & ((~ (IData)(vlTOPp->joypad_down)) 
                                 << 3U)) | ((4U & (
                                                   (~ (IData)(vlTOPp->joypad_up)) 
                                                   << 2U)) 
                                            | ((2U 
                                                & ((~ (IData)(vlTOPp->joypad_left)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ (IData)(vlTOPp->joypad_right)))))));
            }
        } else {
            if ((0x10U & (IData)(vlTOPp->top__DOT__u_io_register__DOT__JOY))) {
                if ((0U != (0xfU & ((~ ((8U & ((~ (IData)(vlTOPp->joypad_start)) 
                                               << 3U)) 
                                        | ((4U & ((~ (IData)(vlTOPp->joypad_select)) 
                                                  << 2U)) 
                                           | ((2U & 
                                               ((~ (IData)(vlTOPp->joypad_B)) 
                                                << 1U)) 
                                              | (1U 
                                                 & (~ (IData)(vlTOPp->joypad_A))))))) 
                                    & (IData)(vlTOPp->top__DOT__u_io_register__DOT__JOY))))) {
                    vlTOPp->top__DOT__u_io_register__DOT__irq_joypad = 1U;
                }
                vlTOPp->__Vdly__top__DOT__u_io_register__DOT__JOY 
                    = ((0xf0U & (IData)(vlTOPp->__Vdly__top__DOT__u_io_register__DOT__JOY)) 
                       | ((8U & ((~ (IData)(vlTOPp->joypad_start)) 
                                 << 3U)) | ((4U & (
                                                   (~ (IData)(vlTOPp->joypad_select)) 
                                                   << 2U)) 
                                            | ((2U 
                                                & ((~ (IData)(vlTOPp->joypad_B)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ (IData)(vlTOPp->joypad_A)))))));
            } else {
                if ((0U != (0xfU & ((~ ((8U & ((~ ((IData)(vlTOPp->joypad_start) 
                                                   | (IData)(vlTOPp->joypad_down))) 
                                               << 3U)) 
                                        | ((4U & ((~ 
                                                   ((IData)(vlTOPp->joypad_select) 
                                                    | (IData)(vlTOPp->joypad_up))) 
                                                  << 2U)) 
                                           | ((2U & 
                                               ((~ 
                                                 ((IData)(vlTOPp->joypad_B) 
                                                  | (IData)(vlTOPp->joypad_left))) 
                                                << 1U)) 
                                              | (1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->joypad_A) 
                                                     | (IData)(vlTOPp->joypad_right)))))))) 
                                    & (IData)(vlTOPp->top__DOT__u_io_register__DOT__JOY))))) {
                    vlTOPp->top__DOT__u_io_register__DOT__irq_joypad = 1U;
                }
                vlTOPp->__Vdly__top__DOT__u_io_register__DOT__JOY 
                    = ((0xf0U & (IData)(vlTOPp->__Vdly__top__DOT__u_io_register__DOT__JOY)) 
                       | ((8U & ((~ ((IData)(vlTOPp->joypad_start) 
                                     | (IData)(vlTOPp->joypad_down))) 
                                 << 3U)) | ((4U & (
                                                   (~ 
                                                    ((IData)(vlTOPp->joypad_select) 
                                                     | (IData)(vlTOPp->joypad_up))) 
                                                   << 2U)) 
                                            | ((2U 
                                                & ((~ 
                                                    ((IData)(vlTOPp->joypad_B) 
                                                     | (IData)(vlTOPp->joypad_left))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ 
                                                     ((IData)(vlTOPp->joypad_A) 
                                                      | (IData)(vlTOPp->joypad_right))))))));
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__u_io_register__DOT__tima_r_data = 0U;
        vlTOPp->__Vdly__top__DOT__u_io_register__DOT__inst_TIMA__DOT__M_4_counter = 0U;
        vlTOPp->__Vdly__top__DOT__u_io_register__DOT__inst_TIMA__DOT__M_16_counter = 0U;
        vlTOPp->__Vdly__top__DOT__u_io_register__DOT__inst_TIMA__DOT__M_64_counter = 0U;
        vlTOPp->__Vdly__top__DOT__u_io_register__DOT__inst_TIMA__DOT__M_256_counter = 0U;
        vlTOPp->__Vdly__top__DOT__u_io_register__DOT__inst_TIMA__DOT__TIMA_overflow = 0U;
        vlTOPp->top__DOT__u_io_register__DOT__irq_timer_wire = 0U;
    } else {
        vlTOPp->top__DOT__u_io_register__DOT__tima_r_data = 0U;
        vlTOPp->top__DOT__u_io_register__DOT__irq_timer_wire = 0U;
        if (((IData)(vlTOPp->top__DOT__u_io_register__DOT__tima_w_ena) 
             & (0xff05U == (IData)(vlTOPp->top__DOT__io_reg_ad)))) {
            vlTOPp->__Vdly__top__DOT__u_io_register__DOT__inst_TIMA__DOT__TIMA 
                = vlTOPp->top__DOT__io_reg_w_data;
        }
        if (((IData)(vlTOPp->top__DOT__u_io_register__DOT__tima_r_ena) 
             & (0xff05U == (IData)(vlTOPp->top__DOT__io_reg_ad)))) {
            vlTOPp->top__DOT__u_io_register__DOT__tima_r_data 
                = vlTOPp->top__DOT__u_io_register__DOT__inst_TIMA__DOT__TIMA;
        }
        if (vlTOPp->top__DOT__u_io_register__DOT__inst_TIMA__DOT__T_cycle_ena) {
            if (vlTOPp->top__DOT__u_io_register__DOT__inst_TIMA__DOT__M_cycle_ena) {
                vlTOPp->__Vdly__top__DOT__u_io_register__DOT__inst_TIMA__DOT__TIMA_overflow = 0U;
                if ((3U == (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_TIMA__DOT__M_4_counter))) {
                    vlTOPp->__Vdly__top__DOT__u_io_register__DOT__inst_TIMA__DOT__M_4_counter = 0U;
                    if (((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_TIMA__DOT__TIMA_ena) 
                         & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_TIMA__DOT__TIMA_M_4_ena))) {
                        vlTOPp->__Vdly__top__DOT__u_io_register__DOT__inst_TIMA__DOT__TIMA 
                            = (0xffU & ((IData)(1U) 
                                        + (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_TIMA__DOT__TIMA)));
                        if ((0xffU == (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_TIMA__DOT__TIMA))) {
                            vlTOPp->__Vdly__top__DOT__u_io_register__DOT__inst_TIMA__DOT__TIMA_overflow = 1U;
                        }
                    }
                } else {
                    if ((3U > (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_TIMA__DOT__M_4_counter))) {
                        vlTOPp->__Vdly__top__DOT__u_io_register__DOT__inst_TIMA__DOT__M_4_counter 
                            = (0xffffU & ((IData)(1U) 
                                          + (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_TIMA__DOT__M_4_counter)));
                    } else {
                        if ((3U < (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_TIMA__DOT__M_4_counter))) {
                            vlTOPp->__Vdly__top__DOT__u_io_register__DOT__inst_TIMA__DOT__M_4_counter = 0U;
                        }
                    }
                }
                if ((0xfU == (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_TIMA__DOT__M_16_counter))) {
                    vlTOPp->__Vdly__top__DOT__u_io_register__DOT__inst_TIMA__DOT__M_16_counter = 0U;
                    if (((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_TIMA__DOT__TIMA_ena) 
                         & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_TIMA__DOT__TIMA_M_16_ena))) {
                        vlTOPp->__Vdly__top__DOT__u_io_register__DOT__inst_TIMA__DOT__TIMA 
                            = (0xffU & ((IData)(1U) 
                                        + (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_TIMA__DOT__TIMA)));
                        if ((0xffU == (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_TIMA__DOT__TIMA))) {
                            vlTOPp->__Vdly__top__DOT__u_io_register__DOT__inst_TIMA__DOT__TIMA_overflow = 1U;
                        }
                    }
                } else {
                    if ((0xfU > (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_TIMA__DOT__M_16_counter))) {
                        vlTOPp->__Vdly__top__DOT__u_io_register__DOT__inst_TIMA__DOT__M_16_counter 
                            = (0xffffU & ((IData)(1U) 
                                          + (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_TIMA__DOT__M_16_counter)));
                    } else {
                        if ((0xfU < (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_TIMA__DOT__M_4_counter))) {
                            vlTOPp->__Vdly__top__DOT__u_io_register__DOT__inst_TIMA__DOT__M_16_counter = 0U;
                        }
                    }
                }
                if ((0x3fU == (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_TIMA__DOT__M_64_counter))) {
                    vlTOPp->__Vdly__top__DOT__u_io_register__DOT__inst_TIMA__DOT__M_64_counter = 0U;
                    if (((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_TIMA__DOT__TIMA_ena) 
                         & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_TIMA__DOT__TIMA_M_64_ena))) {
                        vlTOPp->__Vdly__top__DOT__u_io_register__DOT__inst_TIMA__DOT__TIMA 
                            = (0xffU & ((IData)(1U) 
                                        + (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_TIMA__DOT__TIMA)));
                        if ((0xffU == (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_TIMA__DOT__TIMA))) {
                            vlTOPp->__Vdly__top__DOT__u_io_register__DOT__inst_TIMA__DOT__TIMA_overflow = 1U;
                        }
                    }
                } else {
                    if ((0x3fU > (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_TIMA__DOT__M_64_counter))) {
                        vlTOPp->__Vdly__top__DOT__u_io_register__DOT__inst_TIMA__DOT__M_64_counter 
                            = (0xffffU & ((IData)(1U) 
                                          + (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_TIMA__DOT__M_64_counter)));
                    } else {
                        if ((0x3fU < (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_TIMA__DOT__M_64_counter))) {
                            vlTOPp->__Vdly__top__DOT__u_io_register__DOT__inst_TIMA__DOT__M_64_counter = 0U;
                        }
                    }
                }
                if ((0xffU == (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_TIMA__DOT__M_256_counter))) {
                    vlTOPp->__Vdly__top__DOT__u_io_register__DOT__inst_TIMA__DOT__M_256_counter = 0U;
                    if (((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_TIMA__DOT__TIMA_ena) 
                         & (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_TIMA__DOT__TIMA_M_256_ena))) {
                        vlTOPp->__Vdly__top__DOT__u_io_register__DOT__inst_TIMA__DOT__TIMA 
                            = (0xffU & ((IData)(1U) 
                                        + (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_TIMA__DOT__TIMA)));
                        if ((0xffU == (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_TIMA__DOT__TIMA))) {
                            vlTOPp->__Vdly__top__DOT__u_io_register__DOT__inst_TIMA__DOT__TIMA_overflow = 1U;
                        }
                    }
                } else {
                    if ((0xffU > (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_TIMA__DOT__M_256_counter))) {
                        vlTOPp->__Vdly__top__DOT__u_io_register__DOT__inst_TIMA__DOT__M_256_counter 
                            = (0xffffU & ((IData)(1U) 
                                          + (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_TIMA__DOT__M_256_counter)));
                    } else {
                        if ((0xffU < (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_TIMA__DOT__M_256_counter))) {
                            vlTOPp->__Vdly__top__DOT__u_io_register__DOT__inst_TIMA__DOT__M_256_counter = 0U;
                        }
                    }
                }
                if (((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_TIMA__DOT__TIMA_overflow) 
                     & (0U == (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_TIMA__DOT__TIMA)))) {
                    vlTOPp->__Vdly__top__DOT__u_io_register__DOT__inst_TIMA__DOT__TIMA 
                        = vlTOPp->top__DOT__u_io_register__DOT__inst_TMA__DOT__TMA_reg;
                    vlTOPp->top__DOT__u_io_register__DOT__irq_timer_wire = 1U;
                }
            }
        }
    }
    vlTOPp->top__DOT__u_PPU__DOT__map_y = (0xffU & 
                                           ((IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_PPU_IO__DOT__SCY_reg) 
                                            + (IData)(vlTOPp->top__DOT__u_PPU__DOT__line_counter)));
    vlTOPp->top__DOT__u_PPU__DOT__win_y = (0xffU & 
                                           ((IData)(vlTOPp->top__DOT__u_PPU__DOT__line_counter) 
                                            - (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_PPU_IO__DOT__WY_reg)));
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
    vlTOPp->LCDC_out = vlTOPp->top__DOT__u_io_register__DOT__inst_PPU_IO__DOT__LCDC_reg;
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
    vlTOPp->top__DOT__u_io_register__DOT__JOY = vlTOPp->__Vdly__top__DOT__u_io_register__DOT__JOY;
    vlTOPp->top__DOT__u_io_register__DOT__inst_TIMA__DOT__M_4_counter 
        = vlTOPp->__Vdly__top__DOT__u_io_register__DOT__inst_TIMA__DOT__M_4_counter;
    vlTOPp->top__DOT__u_io_register__DOT__inst_TIMA__DOT__M_16_counter 
        = vlTOPp->__Vdly__top__DOT__u_io_register__DOT__inst_TIMA__DOT__M_16_counter;
    vlTOPp->top__DOT__u_io_register__DOT__inst_TIMA__DOT__M_64_counter 
        = vlTOPp->__Vdly__top__DOT__u_io_register__DOT__inst_TIMA__DOT__M_64_counter;
    vlTOPp->top__DOT__u_io_register__DOT__inst_TIMA__DOT__M_256_counter 
        = vlTOPp->__Vdly__top__DOT__u_io_register__DOT__inst_TIMA__DOT__M_256_counter;
    vlTOPp->top__DOT__u_io_register__DOT__inst_TIMA__DOT__TIMA_overflow 
        = vlTOPp->__Vdly__top__DOT__u_io_register__DOT__inst_TIMA__DOT__TIMA_overflow;
    vlTOPp->top__DOT__u_io_register__DOT__inst_TIMA__DOT__TIMA 
        = vlTOPp->__Vdly__top__DOT__u_io_register__DOT__inst_TIMA__DOT__TIMA;
    vlTOPp->top__DOT__u_io_register__DOT__inst_TIMA__DOT__T_cycle_ena = 0U;
    if ((3U == (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_TIMA__DOT__my_clk_counter))) {
        vlTOPp->top__DOT__u_io_register__DOT__inst_TIMA__DOT__T_cycle_ena = 1U;
    }
    vlTOPp->top__DOT__u_io_register__DOT__inst_TIMA__DOT__M_cycle_ena = 0U;
    if ((3U == (IData)(vlTOPp->top__DOT__u_io_register__DOT__inst_TIMA__DOT__T_clk_counter))) {
        vlTOPp->top__DOT__u_io_register__DOT__inst_TIMA__DOT__M_cycle_ena = 1U;
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
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__u_io_register__DOT__inst_TMA__DOT__TMA_reg = 0U;
    } else {
        if (((IData)(vlTOPp->top__DOT__u_io_register__DOT__tma_w_ena) 
             & (0xff06U == (IData)(vlTOPp->top__DOT__io_reg_ad)))) {
            vlTOPp->top__DOT__u_io_register__DOT__inst_TMA__DOT__TMA_reg 
                = vlTOPp->top__DOT__io_reg_w_data;
        }
    }
}
