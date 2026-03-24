// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtb_csa_4_bit__Syms.h"


void Vtb_csa_4_bit___024root__trace_chg_0_sub_0(Vtb_csa_4_bit___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtb_csa_4_bit___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_csa_4_bit___024root__trace_chg_0\n"); );
    // Init
    Vtb_csa_4_bit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_csa_4_bit___024root*>(voidSelf);
    Vtb_csa_4_bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_csa_4_bit___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_csa_4_bit___024root__trace_chg_0_sub_0(Vtb_csa_4_bit___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_csa_4_bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_csa_4_bit___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,(vlSelf->tb_csa_4_bit__DOT__A),4);
        bufp->chgCData(oldp+1,(vlSelf->tb_csa_4_bit__DOT__B),4);
        bufp->chgCData(oldp+2,(vlSelf->tb_csa_4_bit__DOT__C),4);
        bufp->chgIData(oldp+3,(vlSelf->tb_csa_4_bit__DOT__numFailed),32);
        bufp->chgBit(oldp+4,((1U & (IData)(vlSelf->tb_csa_4_bit__DOT__A))));
        bufp->chgBit(oldp+5,((1U & (IData)(vlSelf->tb_csa_4_bit__DOT__B))));
        bufp->chgBit(oldp+6,((1U & (IData)(vlSelf->tb_csa_4_bit__DOT__C))));
        bufp->chgBit(oldp+7,((1U & ((IData)(vlSelf->tb_csa_4_bit__DOT__A) 
                                    >> 1U))));
        bufp->chgBit(oldp+8,((1U & ((IData)(vlSelf->tb_csa_4_bit__DOT__B) 
                                    >> 1U))));
        bufp->chgBit(oldp+9,((1U & ((IData)(vlSelf->tb_csa_4_bit__DOT__C) 
                                    >> 1U))));
        bufp->chgBit(oldp+10,((1U & ((IData)(vlSelf->tb_csa_4_bit__DOT__A) 
                                     >> 2U))));
        bufp->chgBit(oldp+11,((1U & ((IData)(vlSelf->tb_csa_4_bit__DOT__B) 
                                     >> 2U))));
        bufp->chgBit(oldp+12,((1U & ((IData)(vlSelf->tb_csa_4_bit__DOT__C) 
                                     >> 2U))));
        bufp->chgBit(oldp+13,((1U & ((IData)(vlSelf->tb_csa_4_bit__DOT__A) 
                                     >> 3U))));
        bufp->chgBit(oldp+14,((1U & ((IData)(vlSelf->tb_csa_4_bit__DOT__B) 
                                     >> 3U))));
        bufp->chgBit(oldp+15,((1U & ((IData)(vlSelf->tb_csa_4_bit__DOT__C) 
                                     >> 3U))));
        bufp->chgIData(oldp+16,(vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b),32);
        bufp->chgIData(oldp+17,(vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[2U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        bufp->chgCData(oldp+18,((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                  << 3U) | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                             << 2U) 
                                            | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                << 1U) 
                                               | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))),4);
        bufp->chgCData(oldp+19,(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries),4);
        bufp->chgCData(oldp+20,((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                                   << 4U) 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     << 1U))) 
                                  | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                      << 4U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                                 << 4U) 
                                                ^ (0x10U 
                                                   & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                      << 1U))))) 
                                 | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                             << 3U) 
                                            ^ (8U & 
                                               VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                           ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                              << 3U))) 
                                    | ((4U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                << 2U) 
                                               ^ (0xcU 
                                                  & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                              ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                 << 2U))) 
                                       | ((2U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                  << 1U) 
                                                 ^ 
                                                 (0xeU 
                                                  & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                          | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a)))))),5);
        bufp->chgBit(oldp+21,(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a));
        bufp->chgBit(oldp+22,(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a));
        bufp->chgBit(oldp+23,(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a));
        bufp->chgBit(oldp+24,(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a));
        bufp->chgCData(oldp+25,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))),4);
        bufp->chgCData(oldp+26,((((0xfffffff8U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                                   << 3U) 
                                                  & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                  | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                      << 3U) & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                                 << 3U) 
                                                ^ (8U 
                                                   & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))))) 
                                 | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                     << 2U) | ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                               << 1U)))),4);
        bufp->chgBit(oldp+27,((1U & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                     >> 1U))));
        bufp->chgBit(oldp+28,((1U & ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                     ^ (7U & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                              >> 1U))))));
        bufp->chgBit(oldp+29,(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin));
        bufp->chgBit(oldp+30,((1U & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                     >> 2U))));
        bufp->chgBit(oldp+31,((1U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                      ^ (3U & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                               >> 2U))) 
                                     ^ (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin)))));
        bufp->chgBit(oldp+32,(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin));
        bufp->chgBit(oldp+33,((1U & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                     >> 3U))));
        bufp->chgBit(oldp+34,((1U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                      ^ (1U & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                               >> 3U))) 
                                     ^ (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin)))));
        bufp->chgBit(oldp+35,((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                   >> 3U)) | ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                              & ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                                 ^ 
                                                 (1U 
                                                  & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                     >> 3U)))))));
    }
    bufp->chgCData(oldp+36,((0x1fU & ((((0xfffffff0U 
                                         & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                             << 4U) 
                                            & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                               << 1U))) 
                                        | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                            << 4U) 
                                           & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                               << 4U) 
                                              ^ (0x10U 
                                                 & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                    << 1U))))) 
                                       | ((8U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                                   << 3U) 
                                                  ^ 
                                                  (8U 
                                                   & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                                 ^ 
                                                 ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                                  << 3U))) 
                                          | ((4U & 
                                              ((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                                 << 2U) 
                                                ^ (0xcU 
                                                   & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
                                               ^ ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin) 
                                                  << 2U))) 
                                             | ((2U 
                                                 & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                                     << 1U) 
                                                    ^ 
                                                    (0xeU 
                                                     & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                                | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))) 
                                      + (0x10U & ((
                                                   ((IData)(vlSelf->tb_csa_4_bit__DOT__A) 
                                                    & (IData)(vlSelf->tb_csa_4_bit__DOT__B)) 
                                                   << 1U) 
                                                  | (((IData)(vlSelf->tb_csa_4_bit__DOT__C) 
                                                      << 1U) 
                                                     & ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__adder3__DOT____VdfgTmp_h37ec92ca__0) 
                                                        << 4U))))))),5);
    bufp->chgBit(oldp+37,((1U & (((IData)(vlSelf->tb_csa_4_bit__DOT__A) 
                                  & (IData)(vlSelf->tb_csa_4_bit__DOT__B)) 
                                 | ((IData)(vlSelf->tb_csa_4_bit__DOT__C) 
                                    & (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__adder0__DOT____VdfgTmp_h37ec92ca__0))))));
    bufp->chgBit(oldp+38,((1U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__A) 
                                   & (IData)(vlSelf->tb_csa_4_bit__DOT__B)) 
                                  >> 1U) | (((IData)(vlSelf->tb_csa_4_bit__DOT__C) 
                                             >> 1U) 
                                            & (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__adder1__DOT____VdfgTmp_h37ec92ca__0))))));
    bufp->chgBit(oldp+39,((1U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__A) 
                                   & (IData)(vlSelf->tb_csa_4_bit__DOT__B)) 
                                  >> 2U) | (((IData)(vlSelf->tb_csa_4_bit__DOT__C) 
                                             >> 2U) 
                                            & (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__adder2__DOT____VdfgTmp_h37ec92ca__0))))));
    bufp->chgBit(oldp+40,((1U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__A) 
                                   & (IData)(vlSelf->tb_csa_4_bit__DOT__B)) 
                                  >> 3U) | (((IData)(vlSelf->tb_csa_4_bit__DOT__C) 
                                             >> 3U) 
                                            & (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__adder3__DOT____VdfgTmp_h37ec92ca__0))))));
    bufp->chgIData(oldp+41,(vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a),32);
}

void Vtb_csa_4_bit___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_csa_4_bit___024root__trace_cleanup\n"); );
    // Init
    Vtb_csa_4_bit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_csa_4_bit___024root*>(voidSelf);
    Vtb_csa_4_bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
