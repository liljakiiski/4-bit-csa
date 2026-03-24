// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_csa_4_bit.h for the primary calling header

#include "Vtb_csa_4_bit__pch.h"
#include "Vtb_csa_4_bit__Syms.h"
#include "Vtb_csa_4_bit___024root.h"

void Vtb_csa_4_bit___024root___eval_initial__TOP__Vtiming__0__0(Vtb_csa_4_bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_csa_4_bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_csa_4_bit___024root___eval_initial__TOP__Vtiming__0__0\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e667374U;
    __Vtemp_1[1U] = 0x666f726dU;
    __Vtemp_1[2U] = 0x77617665U;
    __Vtemp_1[3U] = 0x6469722fU;
    __Vtemp_1[4U] = 0x6f626a5fU;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(5, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a = 0U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_csa_4_bit___024root___dump_triggers__act(Vtb_csa_4_bit___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_csa_4_bit___024root___eval_triggers__act(Vtb_csa_4_bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_csa_4_bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_csa_4_bit___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, vlSelf->__VdlySched.awaitingCurrentTime());
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_csa_4_bit___024root___dump_triggers__act(vlSelf);
    }
#endif
}
