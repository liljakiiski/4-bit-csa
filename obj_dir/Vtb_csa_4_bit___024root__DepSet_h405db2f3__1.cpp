// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_csa_4_bit.h for the primary calling header

#include "Vtb_csa_4_bit__pch.h"
#include "Vtb_csa_4_bit___024root.h"

void Vtb_csa_4_bit___024root___eval_initial__TOP__Vtiming__0__2(Vtb_csa_4_bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_csa_4_bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_csa_4_bit___024root___eval_initial__TOP__Vtiming__0__2\n"); );
    // Body
    VL_WRITEF("+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n| Carry Save Adder Digital Logic Design                         |\n|                                                               |\n| 4096 Test Cases run for Carry Save Adder simulation           |\n");
    if ((0U == vlSelf->tb_csa_4_bit__DOT__numFailed)) {
        VL_WRITEF("| All test cases PASSED!                                        |\n");
    } else {
        VL_WRITEF("| %0d / 4096 test cases FAILED                                 |\n",
                  32,vlSelf->tb_csa_4_bit__DOT__numFailed);
    }
    VL_WRITEF("+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n");
    VL_FINISH_MT("src/tb_csa_4_bit.sv", 48, "");
}

VL_INLINE_OPT void Vtb_csa_4_bit___024root___act_sequent__TOP__0(Vtb_csa_4_bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_csa_4_bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_csa_4_bit___024root___act_sequent__TOP__0\n"); );
    // Body
    vlSelf->tb_csa_4_bit__DOT__dut__DOT__adder0__DOT____VdfgTmp_h37ec92ca__0 
        = (1U & ((IData)(vlSelf->tb_csa_4_bit__DOT__A) 
                 ^ (IData)(vlSelf->tb_csa_4_bit__DOT__B)));
    vlSelf->tb_csa_4_bit__DOT__dut__DOT__adder2__DOT____VdfgTmp_h37ec92ca__0 
        = (1U & (((IData)(vlSelf->tb_csa_4_bit__DOT__A) 
                  ^ (IData)(vlSelf->tb_csa_4_bit__DOT__B)) 
                 >> 2U));
    vlSelf->tb_csa_4_bit__DOT__dut__DOT__adder3__DOT____VdfgTmp_h37ec92ca__0 
        = (1U & (((IData)(vlSelf->tb_csa_4_bit__DOT__A) 
                  ^ (IData)(vlSelf->tb_csa_4_bit__DOT__B)) 
                 >> 3U));
    vlSelf->tb_csa_4_bit__DOT__dut__DOT__adder1__DOT____VdfgTmp_h37ec92ca__0 
        = (1U & (((IData)(vlSelf->tb_csa_4_bit__DOT__A) 
                  ^ (IData)(vlSelf->tb_csa_4_bit__DOT__B)) 
                 >> 1U));
    vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a 
        = (1U & ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__adder0__DOT____VdfgTmp_h37ec92ca__0) 
                 ^ (IData)(vlSelf->tb_csa_4_bit__DOT__C)));
    vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a 
        = (1U & ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__adder2__DOT____VdfgTmp_h37ec92ca__0) 
                 ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__C) 
                    >> 2U)));
    vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a 
        = ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__adder3__DOT____VdfgTmp_h37ec92ca__0) 
           ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__C) 
              >> 3U));
    vlSelf->tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout 
        = (1U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__A) 
                   & (IData)(vlSelf->tb_csa_4_bit__DOT__B)) 
                  >> 3U) | (((IData)(vlSelf->tb_csa_4_bit__DOT__C) 
                             >> 3U) & (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__adder3__DOT____VdfgTmp_h37ec92ca__0))));
    vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a 
        = (1U & ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__adder1__DOT____VdfgTmp_h37ec92ca__0) 
                 ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__C) 
                    >> 1U)));
    vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries = 
        ((8U & (((IData)(vlSelf->tb_csa_4_bit__DOT__A) 
                 & (IData)(vlSelf->tb_csa_4_bit__DOT__B)) 
                | ((IData)(vlSelf->tb_csa_4_bit__DOT__C) 
                   & ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__adder3__DOT____VdfgTmp_h37ec92ca__0) 
                      << 3U)))) | ((4U & (((IData)(vlSelf->tb_csa_4_bit__DOT__A) 
                                           & (IData)(vlSelf->tb_csa_4_bit__DOT__B)) 
                                          | ((IData)(vlSelf->tb_csa_4_bit__DOT__C) 
                                             & ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__adder2__DOT____VdfgTmp_h37ec92ca__0) 
                                                << 2U)))) 
                                   | ((2U & (((IData)(vlSelf->tb_csa_4_bit__DOT__A) 
                                              & (IData)(vlSelf->tb_csa_4_bit__DOT__B)) 
                                             | ((IData)(vlSelf->tb_csa_4_bit__DOT__C) 
                                                & ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__adder1__DOT____VdfgTmp_h37ec92ca__0) 
                                                   << 1U)))) 
                                      | (1U & (((IData)(vlSelf->tb_csa_4_bit__DOT__A) 
                                                & (IData)(vlSelf->tb_csa_4_bit__DOT__B)) 
                                               | ((IData)(vlSelf->tb_csa_4_bit__DOT__C) 
                                                  & (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__adder0__DOT____VdfgTmp_h37ec92ca__0)))))));
    vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin 
        = (7U & ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                 & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                    >> 1U)));
    vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin 
        = ((3U & ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                     >> 2U))) | ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                 & ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                    ^ (3U & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                             >> 2U)))));
}

void Vtb_csa_4_bit___024root___eval_act(Vtb_csa_4_bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_csa_4_bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_csa_4_bit___024root___eval_act\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_csa_4_bit___024root___act_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
}

void Vtb_csa_4_bit___024root___eval_nba(Vtb_csa_4_bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_csa_4_bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_csa_4_bit___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_csa_4_bit___024root___act_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
}

void Vtb_csa_4_bit___024root___timing_resume(Vtb_csa_4_bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_csa_4_bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_csa_4_bit___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtb_csa_4_bit___024root___eval_triggers__act(Vtb_csa_4_bit___024root* vlSelf);

bool Vtb_csa_4_bit___024root___eval_phase__act(Vtb_csa_4_bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_csa_4_bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_csa_4_bit___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_csa_4_bit___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtb_csa_4_bit___024root___timing_resume(vlSelf);
        Vtb_csa_4_bit___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_csa_4_bit___024root___eval_phase__nba(Vtb_csa_4_bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_csa_4_bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_csa_4_bit___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_csa_4_bit___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_csa_4_bit___024root___dump_triggers__nba(Vtb_csa_4_bit___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_csa_4_bit___024root___dump_triggers__act(Vtb_csa_4_bit___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_csa_4_bit___024root___eval(Vtb_csa_4_bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_csa_4_bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_csa_4_bit___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_csa_4_bit___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("src/tb_csa_4_bit.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_csa_4_bit___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("src/tb_csa_4_bit.sv", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtb_csa_4_bit___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtb_csa_4_bit___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_csa_4_bit___024root___eval_debug_assertions(Vtb_csa_4_bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_csa_4_bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_csa_4_bit___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
