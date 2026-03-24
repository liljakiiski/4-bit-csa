// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_csa_4_bit.h for the primary calling header

#include "Vtb_csa_4_bit__pch.h"
#include "Vtb_csa_4_bit___024root.h"

VlCoroutine Vtb_csa_4_bit___024root___eval_initial__TOP__Vtiming__0(Vtb_csa_4_bit___024root* vlSelf);

void Vtb_csa_4_bit___024root___eval_initial(Vtb_csa_4_bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_csa_4_bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_csa_4_bit___024root___eval_initial\n"); );
    // Body
    Vtb_csa_4_bit___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

void Vtb_csa_4_bit___024root___eval_initial__TOP__Vtiming__0__0(Vtb_csa_4_bit___024root* vlSelf);
VlCoroutine Vtb_csa_4_bit___024root___eval_initial__TOP__Vtiming__0__1(Vtb_csa_4_bit___024root* vlSelf);
void Vtb_csa_4_bit___024root___eval_initial__TOP__Vtiming__0__2(Vtb_csa_4_bit___024root* vlSelf);

VL_INLINE_OPT VlCoroutine Vtb_csa_4_bit___024root___eval_initial__TOP__Vtiming__0(Vtb_csa_4_bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_csa_4_bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_csa_4_bit___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    Vtb_csa_4_bit___024root___eval_initial__TOP__Vtiming__0__0(vlSelf);
    co_await Vtb_csa_4_bit___024root___eval_initial__TOP__Vtiming__0__1(vlSelf);
    Vtb_csa_4_bit___024root___eval_initial__TOP__Vtiming__0__2(vlSelf);
}

VlCoroutine Vtb_csa_4_bit___024root___eval_initial__TOP__Vtiming__0__1(Vtb_csa_4_bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_csa_4_bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_csa_4_bit___024root___eval_initial__TOP__Vtiming__0__1\n"); );
    // Body
    while (VL_GTS_III(32, 0x10U, vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)) {
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0U;
        vlSelf->tb_csa_4_bit__DOT__C = 0U;
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 1U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0U;
        vlSelf->tb_csa_4_bit__DOT__C = 1U;
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 2U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0U;
        vlSelf->tb_csa_4_bit__DOT__C = 2U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(1U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 3U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0U;
        vlSelf->tb_csa_4_bit__DOT__C = 3U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(2U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 4U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0U;
        vlSelf->tb_csa_4_bit__DOT__C = 4U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(3U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 5U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0U;
        vlSelf->tb_csa_4_bit__DOT__C = 5U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(4U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 6U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0U;
        vlSelf->tb_csa_4_bit__DOT__C = 6U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(5U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 7U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0U;
        vlSelf->tb_csa_4_bit__DOT__C = 7U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(6U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 8U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0U;
        vlSelf->tb_csa_4_bit__DOT__C = 8U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(7U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 9U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0U;
        vlSelf->tb_csa_4_bit__DOT__C = 9U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(8U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0xaU;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0U;
        vlSelf->tb_csa_4_bit__DOT__C = 0xaU;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(9U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0xbU;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0U;
        vlSelf->tb_csa_4_bit__DOT__C = 0xbU;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0xaU) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0xcU;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0U;
        vlSelf->tb_csa_4_bit__DOT__C = 0xcU;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0xbU) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0xdU;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0U;
        vlSelf->tb_csa_4_bit__DOT__C = 0xdU;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0xcU) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0xeU;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0U;
        vlSelf->tb_csa_4_bit__DOT__C = 0xeU;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0xdU) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0xfU;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0U;
        vlSelf->tb_csa_4_bit__DOT__C = 0xfU;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0xeU) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0x10U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b = 1U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 1U;
        vlSelf->tb_csa_4_bit__DOT__C = 0U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0xfU) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(1U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 1U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 1U;
        vlSelf->tb_csa_4_bit__DOT__C = 1U;
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 2U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 1U;
        vlSelf->tb_csa_4_bit__DOT__C = 2U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(2U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 3U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 1U;
        vlSelf->tb_csa_4_bit__DOT__C = 3U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(3U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 4U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 1U;
        vlSelf->tb_csa_4_bit__DOT__C = 4U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(4U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 5U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 1U;
        vlSelf->tb_csa_4_bit__DOT__C = 5U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(5U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 6U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 1U;
        vlSelf->tb_csa_4_bit__DOT__C = 6U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(6U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 7U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 1U;
        vlSelf->tb_csa_4_bit__DOT__C = 7U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(7U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 8U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 1U;
        vlSelf->tb_csa_4_bit__DOT__C = 8U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(8U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 9U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 1U;
        vlSelf->tb_csa_4_bit__DOT__C = 9U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(9U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0xaU;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 1U;
        vlSelf->tb_csa_4_bit__DOT__C = 0xaU;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0xaU) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0xbU;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 1U;
        vlSelf->tb_csa_4_bit__DOT__C = 0xbU;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0xbU) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0xcU;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 1U;
        vlSelf->tb_csa_4_bit__DOT__C = 0xcU;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0xcU) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0xdU;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 1U;
        vlSelf->tb_csa_4_bit__DOT__C = 0xdU;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0xdU) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0xeU;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 1U;
        vlSelf->tb_csa_4_bit__DOT__C = 0xeU;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0xeU) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0xfU;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 1U;
        vlSelf->tb_csa_4_bit__DOT__C = 0xfU;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0xfU) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0x10U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b = 2U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 2U;
        vlSelf->tb_csa_4_bit__DOT__C = 0U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x10U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(2U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 1U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 2U;
        vlSelf->tb_csa_4_bit__DOT__C = 1U;
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 2U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 2U;
        vlSelf->tb_csa_4_bit__DOT__C = 2U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(3U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 3U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 2U;
        vlSelf->tb_csa_4_bit__DOT__C = 3U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(4U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 4U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 2U;
        vlSelf->tb_csa_4_bit__DOT__C = 4U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(5U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 5U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 2U;
        vlSelf->tb_csa_4_bit__DOT__C = 5U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(6U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 6U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 2U;
        vlSelf->tb_csa_4_bit__DOT__C = 6U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(7U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 7U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 2U;
        vlSelf->tb_csa_4_bit__DOT__C = 7U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(8U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 8U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 2U;
        vlSelf->tb_csa_4_bit__DOT__C = 8U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(9U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 9U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 2U;
        vlSelf->tb_csa_4_bit__DOT__C = 9U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0xaU) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0xaU;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 2U;
        vlSelf->tb_csa_4_bit__DOT__C = 0xaU;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0xbU) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0xbU;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 2U;
        vlSelf->tb_csa_4_bit__DOT__C = 0xbU;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0xcU) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0xcU;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 2U;
        vlSelf->tb_csa_4_bit__DOT__C = 0xcU;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0xdU) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0xdU;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 2U;
        vlSelf->tb_csa_4_bit__DOT__C = 0xdU;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0xeU) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0xeU;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 2U;
        vlSelf->tb_csa_4_bit__DOT__C = 0xeU;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0xfU) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0xfU;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 2U;
        vlSelf->tb_csa_4_bit__DOT__C = 0xfU;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x10U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0x10U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b = 3U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 3U;
        vlSelf->tb_csa_4_bit__DOT__C = 0U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x11U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(3U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 1U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 3U;
        vlSelf->tb_csa_4_bit__DOT__C = 1U;
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 2U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 3U;
        vlSelf->tb_csa_4_bit__DOT__C = 2U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(4U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 3U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 3U;
        vlSelf->tb_csa_4_bit__DOT__C = 3U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(5U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 4U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 3U;
        vlSelf->tb_csa_4_bit__DOT__C = 4U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(6U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 5U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 3U;
        vlSelf->tb_csa_4_bit__DOT__C = 5U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(7U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 6U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 3U;
        vlSelf->tb_csa_4_bit__DOT__C = 6U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(8U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 7U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 3U;
        vlSelf->tb_csa_4_bit__DOT__C = 7U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(9U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 8U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 3U;
        vlSelf->tb_csa_4_bit__DOT__C = 8U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0xaU) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 9U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 3U;
        vlSelf->tb_csa_4_bit__DOT__C = 9U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0xbU) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0xaU;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 3U;
        vlSelf->tb_csa_4_bit__DOT__C = 0xaU;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0xcU) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0xbU;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 3U;
        vlSelf->tb_csa_4_bit__DOT__C = 0xbU;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0xdU) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0xcU;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 3U;
        vlSelf->tb_csa_4_bit__DOT__C = 0xcU;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0xeU) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0xdU;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 3U;
        vlSelf->tb_csa_4_bit__DOT__C = 0xdU;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0xfU) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0xeU;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 3U;
        vlSelf->tb_csa_4_bit__DOT__C = 0xeU;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x10U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0xfU;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 3U;
        vlSelf->tb_csa_4_bit__DOT__C = 0xfU;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x11U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0x10U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b = 4U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 4U;
        vlSelf->tb_csa_4_bit__DOT__C = 0U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x12U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(4U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 1U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 4U;
        vlSelf->tb_csa_4_bit__DOT__C = 1U;
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 2U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 4U;
        vlSelf->tb_csa_4_bit__DOT__C = 2U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(5U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 3U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 4U;
        vlSelf->tb_csa_4_bit__DOT__C = 3U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(6U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 4U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 4U;
        vlSelf->tb_csa_4_bit__DOT__C = 4U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(7U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 5U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 4U;
        vlSelf->tb_csa_4_bit__DOT__C = 5U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(8U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 6U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 4U;
        vlSelf->tb_csa_4_bit__DOT__C = 6U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(9U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 7U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 4U;
        vlSelf->tb_csa_4_bit__DOT__C = 7U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0xaU) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 8U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 4U;
        vlSelf->tb_csa_4_bit__DOT__C = 8U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0xbU) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 9U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 4U;
        vlSelf->tb_csa_4_bit__DOT__C = 9U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0xcU) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0xaU;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 4U;
        vlSelf->tb_csa_4_bit__DOT__C = 0xaU;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0xdU) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0xbU;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 4U;
        vlSelf->tb_csa_4_bit__DOT__C = 0xbU;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0xeU) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0xcU;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 4U;
        vlSelf->tb_csa_4_bit__DOT__C = 0xcU;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0xfU) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0xdU;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 4U;
        vlSelf->tb_csa_4_bit__DOT__C = 0xdU;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x10U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0xeU;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 4U;
        vlSelf->tb_csa_4_bit__DOT__C = 0xeU;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x11U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0xfU;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 4U;
        vlSelf->tb_csa_4_bit__DOT__C = 0xfU;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x12U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0x10U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b = 5U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 5U;
        vlSelf->tb_csa_4_bit__DOT__C = 0U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x13U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(5U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 1U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 5U;
        vlSelf->tb_csa_4_bit__DOT__C = 1U;
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 2U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 5U;
        vlSelf->tb_csa_4_bit__DOT__C = 2U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(6U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 3U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 5U;
        vlSelf->tb_csa_4_bit__DOT__C = 3U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(7U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 4U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 5U;
        vlSelf->tb_csa_4_bit__DOT__C = 4U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(8U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 5U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 5U;
        vlSelf->tb_csa_4_bit__DOT__C = 5U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(9U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 6U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 5U;
        vlSelf->tb_csa_4_bit__DOT__C = 6U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0xaU) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 7U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 5U;
        vlSelf->tb_csa_4_bit__DOT__C = 7U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0xbU) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 8U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 5U;
        vlSelf->tb_csa_4_bit__DOT__C = 8U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0xcU) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 9U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 5U;
        vlSelf->tb_csa_4_bit__DOT__C = 9U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0xdU) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0xaU;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 5U;
        vlSelf->tb_csa_4_bit__DOT__C = 0xaU;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0xeU) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0xbU;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 5U;
        vlSelf->tb_csa_4_bit__DOT__C = 0xbU;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0xfU) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0xcU;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 5U;
        vlSelf->tb_csa_4_bit__DOT__C = 0xcU;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x10U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0xdU;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 5U;
        vlSelf->tb_csa_4_bit__DOT__C = 0xdU;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x11U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0xeU;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 5U;
        vlSelf->tb_csa_4_bit__DOT__C = 0xeU;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x12U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0xfU;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 5U;
        vlSelf->tb_csa_4_bit__DOT__C = 0xfU;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x13U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0x10U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b = 6U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 6U;
        vlSelf->tb_csa_4_bit__DOT__C = 0U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x14U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(6U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 1U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 6U;
        vlSelf->tb_csa_4_bit__DOT__C = 1U;
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 2U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 6U;
        vlSelf->tb_csa_4_bit__DOT__C = 2U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(7U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 3U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 6U;
        vlSelf->tb_csa_4_bit__DOT__C = 3U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(8U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 4U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 6U;
        vlSelf->tb_csa_4_bit__DOT__C = 4U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(9U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 5U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 6U;
        vlSelf->tb_csa_4_bit__DOT__C = 5U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0xaU) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 6U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 6U;
        vlSelf->tb_csa_4_bit__DOT__C = 6U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0xbU) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 7U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 6U;
        vlSelf->tb_csa_4_bit__DOT__C = 7U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0xcU) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 8U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 6U;
        vlSelf->tb_csa_4_bit__DOT__C = 8U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0xdU) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 9U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 6U;
        vlSelf->tb_csa_4_bit__DOT__C = 9U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0xeU) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0xaU;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 6U;
        vlSelf->tb_csa_4_bit__DOT__C = 0xaU;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0xfU) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0xbU;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 6U;
        vlSelf->tb_csa_4_bit__DOT__C = 0xbU;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x10U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0xcU;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 6U;
        vlSelf->tb_csa_4_bit__DOT__C = 0xcU;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x11U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0xdU;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 6U;
        vlSelf->tb_csa_4_bit__DOT__C = 0xdU;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x12U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0xeU;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 6U;
        vlSelf->tb_csa_4_bit__DOT__C = 0xeU;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x13U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0xfU;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 6U;
        vlSelf->tb_csa_4_bit__DOT__C = 0xfU;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x14U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0x10U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b = 7U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 7U;
        vlSelf->tb_csa_4_bit__DOT__C = 0U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x15U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(7U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 1U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 7U;
        vlSelf->tb_csa_4_bit__DOT__C = 1U;
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 2U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 7U;
        vlSelf->tb_csa_4_bit__DOT__C = 2U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(8U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 3U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 7U;
        vlSelf->tb_csa_4_bit__DOT__C = 3U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(9U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 4U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 7U;
        vlSelf->tb_csa_4_bit__DOT__C = 4U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0xaU) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 5U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 7U;
        vlSelf->tb_csa_4_bit__DOT__C = 5U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0xbU) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 6U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 7U;
        vlSelf->tb_csa_4_bit__DOT__C = 6U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0xcU) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 7U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 7U;
        vlSelf->tb_csa_4_bit__DOT__C = 7U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0xdU) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 8U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 7U;
        vlSelf->tb_csa_4_bit__DOT__C = 8U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0xeU) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 9U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 7U;
        vlSelf->tb_csa_4_bit__DOT__C = 9U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0xfU) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0xaU;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 7U;
        vlSelf->tb_csa_4_bit__DOT__C = 0xaU;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x10U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0xbU;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 7U;
        vlSelf->tb_csa_4_bit__DOT__C = 0xbU;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x11U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0xcU;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 7U;
        vlSelf->tb_csa_4_bit__DOT__C = 0xcU;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x12U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0xdU;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 7U;
        vlSelf->tb_csa_4_bit__DOT__C = 0xdU;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x13U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0xeU;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 7U;
        vlSelf->tb_csa_4_bit__DOT__C = 0xeU;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x14U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0xfU;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 7U;
        vlSelf->tb_csa_4_bit__DOT__C = 0xfU;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x15U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0x10U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b = 8U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 8U;
        vlSelf->tb_csa_4_bit__DOT__C = 0U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x16U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(8U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 1U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 8U;
        vlSelf->tb_csa_4_bit__DOT__C = 1U;
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 2U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 8U;
        vlSelf->tb_csa_4_bit__DOT__C = 2U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(9U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 3U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 8U;
        vlSelf->tb_csa_4_bit__DOT__C = 3U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0xaU) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 4U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 8U;
        vlSelf->tb_csa_4_bit__DOT__C = 4U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0xbU) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 5U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 8U;
        vlSelf->tb_csa_4_bit__DOT__C = 5U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0xcU) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 6U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 8U;
        vlSelf->tb_csa_4_bit__DOT__C = 6U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0xdU) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 7U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 8U;
        vlSelf->tb_csa_4_bit__DOT__C = 7U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0xeU) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 8U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 8U;
        vlSelf->tb_csa_4_bit__DOT__C = 8U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0xfU) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 9U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 8U;
        vlSelf->tb_csa_4_bit__DOT__C = 9U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x10U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0xaU;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 8U;
        vlSelf->tb_csa_4_bit__DOT__C = 0xaU;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x11U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0xbU;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 8U;
        vlSelf->tb_csa_4_bit__DOT__C = 0xbU;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x12U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0xcU;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 8U;
        vlSelf->tb_csa_4_bit__DOT__C = 0xcU;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x13U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0xdU;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 8U;
        vlSelf->tb_csa_4_bit__DOT__C = 0xdU;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x14U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0xeU;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 8U;
        vlSelf->tb_csa_4_bit__DOT__C = 0xeU;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x15U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0xfU;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 8U;
        vlSelf->tb_csa_4_bit__DOT__C = 0xfU;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x16U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0x10U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b = 9U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 9U;
        vlSelf->tb_csa_4_bit__DOT__C = 0U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x17U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(9U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 1U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 9U;
        vlSelf->tb_csa_4_bit__DOT__C = 1U;
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 2U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 9U;
        vlSelf->tb_csa_4_bit__DOT__C = 2U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0xaU) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 3U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 9U;
        vlSelf->tb_csa_4_bit__DOT__C = 3U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0xbU) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 4U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 9U;
        vlSelf->tb_csa_4_bit__DOT__C = 4U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0xcU) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 5U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 9U;
        vlSelf->tb_csa_4_bit__DOT__C = 5U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0xdU) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 6U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 9U;
        vlSelf->tb_csa_4_bit__DOT__C = 6U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0xeU) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 7U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 9U;
        vlSelf->tb_csa_4_bit__DOT__C = 7U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0xfU) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 8U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 9U;
        vlSelf->tb_csa_4_bit__DOT__C = 8U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x10U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 9U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 9U;
        vlSelf->tb_csa_4_bit__DOT__C = 9U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x11U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0xaU;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 9U;
        vlSelf->tb_csa_4_bit__DOT__C = 0xaU;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x12U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0xbU;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 9U;
        vlSelf->tb_csa_4_bit__DOT__C = 0xbU;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x13U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0xcU;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 9U;
        vlSelf->tb_csa_4_bit__DOT__C = 0xcU;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x14U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0xdU;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 9U;
        vlSelf->tb_csa_4_bit__DOT__C = 0xdU;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x15U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0xeU;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 9U;
        vlSelf->tb_csa_4_bit__DOT__C = 0xeU;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x16U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0xfU;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 9U;
        vlSelf->tb_csa_4_bit__DOT__C = 0xfU;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x17U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0x10U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b = 0xaU;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0xaU;
        vlSelf->tb_csa_4_bit__DOT__C = 0U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x18U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0xaU) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 1U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0xaU;
        vlSelf->tb_csa_4_bit__DOT__C = 1U;
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 2U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0xaU;
        vlSelf->tb_csa_4_bit__DOT__C = 2U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0xbU) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 3U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0xaU;
        vlSelf->tb_csa_4_bit__DOT__C = 3U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0xcU) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 4U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0xaU;
        vlSelf->tb_csa_4_bit__DOT__C = 4U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0xdU) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 5U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0xaU;
        vlSelf->tb_csa_4_bit__DOT__C = 5U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0xeU) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 6U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0xaU;
        vlSelf->tb_csa_4_bit__DOT__C = 6U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0xfU) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 7U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0xaU;
        vlSelf->tb_csa_4_bit__DOT__C = 7U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x10U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 8U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0xaU;
        vlSelf->tb_csa_4_bit__DOT__C = 8U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x11U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 9U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0xaU;
        vlSelf->tb_csa_4_bit__DOT__C = 9U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x12U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0xaU;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0xaU;
        vlSelf->tb_csa_4_bit__DOT__C = 0xaU;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x13U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0xbU;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0xaU;
        vlSelf->tb_csa_4_bit__DOT__C = 0xbU;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x14U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0xcU;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0xaU;
        vlSelf->tb_csa_4_bit__DOT__C = 0xcU;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x15U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0xdU;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0xaU;
        vlSelf->tb_csa_4_bit__DOT__C = 0xdU;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x16U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0xeU;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0xaU;
        vlSelf->tb_csa_4_bit__DOT__C = 0xeU;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x17U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0xfU;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0xaU;
        vlSelf->tb_csa_4_bit__DOT__C = 0xfU;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x18U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0x10U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b = 0xbU;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0xbU;
        vlSelf->tb_csa_4_bit__DOT__C = 0U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x19U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0xbU) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 1U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0xbU;
        vlSelf->tb_csa_4_bit__DOT__C = 1U;
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 2U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0xbU;
        vlSelf->tb_csa_4_bit__DOT__C = 2U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0xcU) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 3U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0xbU;
        vlSelf->tb_csa_4_bit__DOT__C = 3U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0xdU) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 4U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0xbU;
        vlSelf->tb_csa_4_bit__DOT__C = 4U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0xeU) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 5U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0xbU;
        vlSelf->tb_csa_4_bit__DOT__C = 5U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0xfU) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 6U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0xbU;
        vlSelf->tb_csa_4_bit__DOT__C = 6U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x10U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 7U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0xbU;
        vlSelf->tb_csa_4_bit__DOT__C = 7U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x11U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 8U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0xbU;
        vlSelf->tb_csa_4_bit__DOT__C = 8U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x12U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 9U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0xbU;
        vlSelf->tb_csa_4_bit__DOT__C = 9U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x13U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0xaU;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0xbU;
        vlSelf->tb_csa_4_bit__DOT__C = 0xaU;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x14U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0xbU;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0xbU;
        vlSelf->tb_csa_4_bit__DOT__C = 0xbU;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x15U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0xcU;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0xbU;
        vlSelf->tb_csa_4_bit__DOT__C = 0xcU;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x16U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0xdU;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0xbU;
        vlSelf->tb_csa_4_bit__DOT__C = 0xdU;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x17U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0xeU;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0xbU;
        vlSelf->tb_csa_4_bit__DOT__C = 0xeU;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x18U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0xfU;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0xbU;
        vlSelf->tb_csa_4_bit__DOT__C = 0xfU;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x19U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0x10U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b = 0xcU;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0xcU;
        vlSelf->tb_csa_4_bit__DOT__C = 0U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x1aU) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0xcU) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 1U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0xcU;
        vlSelf->tb_csa_4_bit__DOT__C = 1U;
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 2U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0xcU;
        vlSelf->tb_csa_4_bit__DOT__C = 2U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0xdU) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 3U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0xcU;
        vlSelf->tb_csa_4_bit__DOT__C = 3U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0xeU) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 4U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0xcU;
        vlSelf->tb_csa_4_bit__DOT__C = 4U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0xfU) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 5U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0xcU;
        vlSelf->tb_csa_4_bit__DOT__C = 5U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x10U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 6U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0xcU;
        vlSelf->tb_csa_4_bit__DOT__C = 6U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x11U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 7U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0xcU;
        vlSelf->tb_csa_4_bit__DOT__C = 7U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x12U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 8U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0xcU;
        vlSelf->tb_csa_4_bit__DOT__C = 8U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x13U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 9U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0xcU;
        vlSelf->tb_csa_4_bit__DOT__C = 9U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x14U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0xaU;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0xcU;
        vlSelf->tb_csa_4_bit__DOT__C = 0xaU;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x15U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0xbU;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0xcU;
        vlSelf->tb_csa_4_bit__DOT__C = 0xbU;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x16U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0xcU;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0xcU;
        vlSelf->tb_csa_4_bit__DOT__C = 0xcU;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x17U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0xdU;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0xcU;
        vlSelf->tb_csa_4_bit__DOT__C = 0xdU;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x18U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0xeU;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0xcU;
        vlSelf->tb_csa_4_bit__DOT__C = 0xeU;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x19U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0xfU;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0xcU;
        vlSelf->tb_csa_4_bit__DOT__C = 0xfU;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x1aU) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0x10U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b = 0xdU;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0xdU;
        vlSelf->tb_csa_4_bit__DOT__C = 0U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x1bU) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0xdU) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 1U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0xdU;
        vlSelf->tb_csa_4_bit__DOT__C = 1U;
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 2U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0xdU;
        vlSelf->tb_csa_4_bit__DOT__C = 2U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0xeU) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 3U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0xdU;
        vlSelf->tb_csa_4_bit__DOT__C = 3U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0xfU) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 4U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0xdU;
        vlSelf->tb_csa_4_bit__DOT__C = 4U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x10U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 5U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0xdU;
        vlSelf->tb_csa_4_bit__DOT__C = 5U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x11U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 6U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0xdU;
        vlSelf->tb_csa_4_bit__DOT__C = 6U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x12U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 7U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0xdU;
        vlSelf->tb_csa_4_bit__DOT__C = 7U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x13U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 8U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0xdU;
        vlSelf->tb_csa_4_bit__DOT__C = 8U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x14U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 9U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0xdU;
        vlSelf->tb_csa_4_bit__DOT__C = 9U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x15U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0xaU;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0xdU;
        vlSelf->tb_csa_4_bit__DOT__C = 0xaU;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x16U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0xbU;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0xdU;
        vlSelf->tb_csa_4_bit__DOT__C = 0xbU;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x17U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0xcU;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0xdU;
        vlSelf->tb_csa_4_bit__DOT__C = 0xcU;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x18U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0xdU;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0xdU;
        vlSelf->tb_csa_4_bit__DOT__C = 0xdU;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x19U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0xeU;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0xdU;
        vlSelf->tb_csa_4_bit__DOT__C = 0xeU;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x1aU) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0xfU;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0xdU;
        vlSelf->tb_csa_4_bit__DOT__C = 0xfU;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x1bU) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0x10U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b = 0xeU;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0xeU;
        vlSelf->tb_csa_4_bit__DOT__C = 0U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x1cU) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0xeU) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 1U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0xeU;
        vlSelf->tb_csa_4_bit__DOT__C = 1U;
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 2U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0xeU;
        vlSelf->tb_csa_4_bit__DOT__C = 2U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0xfU) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 3U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0xeU;
        vlSelf->tb_csa_4_bit__DOT__C = 3U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x10U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 4U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0xeU;
        vlSelf->tb_csa_4_bit__DOT__C = 4U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x11U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 5U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0xeU;
        vlSelf->tb_csa_4_bit__DOT__C = 5U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x12U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 6U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0xeU;
        vlSelf->tb_csa_4_bit__DOT__C = 6U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x13U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 7U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0xeU;
        vlSelf->tb_csa_4_bit__DOT__C = 7U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x14U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 8U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0xeU;
        vlSelf->tb_csa_4_bit__DOT__C = 8U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x15U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 9U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0xeU;
        vlSelf->tb_csa_4_bit__DOT__C = 9U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x16U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0xaU;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0xeU;
        vlSelf->tb_csa_4_bit__DOT__C = 0xaU;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x17U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0xbU;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0xeU;
        vlSelf->tb_csa_4_bit__DOT__C = 0xbU;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x18U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0xcU;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0xeU;
        vlSelf->tb_csa_4_bit__DOT__C = 0xcU;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x19U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0xdU;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0xeU;
        vlSelf->tb_csa_4_bit__DOT__C = 0xdU;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x1aU) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0xeU;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0xeU;
        vlSelf->tb_csa_4_bit__DOT__C = 0xeU;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x1bU) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0xfU;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0xeU;
        vlSelf->tb_csa_4_bit__DOT__C = 0xfU;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x1cU) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0x10U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b = 0xfU;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0xfU;
        vlSelf->tb_csa_4_bit__DOT__C = 0U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x1dU) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0xfU) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 1U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0xfU;
        vlSelf->tb_csa_4_bit__DOT__C = 1U;
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x10U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 2U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0xfU;
        vlSelf->tb_csa_4_bit__DOT__C = 2U;
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x11U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 3U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0xfU;
        vlSelf->tb_csa_4_bit__DOT__C = 3U;
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x12U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 4U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0xfU;
        vlSelf->tb_csa_4_bit__DOT__C = 4U;
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x13U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 5U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0xfU;
        vlSelf->tb_csa_4_bit__DOT__C = 5U;
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x14U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 6U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0xfU;
        vlSelf->tb_csa_4_bit__DOT__C = 6U;
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x15U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 7U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0xfU;
        vlSelf->tb_csa_4_bit__DOT__C = 7U;
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x16U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 8U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0xfU;
        vlSelf->tb_csa_4_bit__DOT__C = 8U;
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x17U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 9U;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0xfU;
        vlSelf->tb_csa_4_bit__DOT__C = 9U;
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x18U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0xaU;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0xfU;
        vlSelf->tb_csa_4_bit__DOT__C = 0xaU;
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x19U) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0xbU;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0xfU;
        vlSelf->tb_csa_4_bit__DOT__C = 0xbU;
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x1aU) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0xcU;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0xfU;
        vlSelf->tb_csa_4_bit__DOT__C = 0xcU;
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x1bU) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0xdU;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0xfU;
        vlSelf->tb_csa_4_bit__DOT__C = 0xdU;
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x1cU) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0xeU;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0xfU;
        vlSelf->tb_csa_4_bit__DOT__C = 0xeU;
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x1dU) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0xfU;
        vlSelf->tb_csa_4_bit__DOT__A = (0xfU & vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
        vlSelf->tb_csa_4_bit__DOT__B = 0xfU;
        vlSelf->tb_csa_4_bit__DOT__C = 0xfU;
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "src/tb_csa_4_bit.sv", 
                                           25);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        if (((0x1fU & ((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                          << 4U) & 
                                         (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                          << 1U))) 
                         | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                             << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                        << 4U) ^ (0x10U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))))) 
                        | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                    << 3U) ^ (8U & 
                                              VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 3U))) | ((4U 
                                                  & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                       << 2U) 
                                                      ^ 
                                                      (0xcU 
                                                       & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                     ^ 
                                                     ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                      << 2U))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xeU 
                                                         & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                    | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                       + ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout) 
                          << 4U))) != (0x1fU & ((IData)(0x1eU) 
                                                + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a)))) {
            vlSelf->tb_csa_4_bit__DOT__numFailed = 
                ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__numFailed);
        }
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0x10U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b = 0x10U;
        vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a 
            = ((IData)(1U) + vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a);
    }
    vlSelf->__Vm_traceActivity[1U] = 1U;
}
