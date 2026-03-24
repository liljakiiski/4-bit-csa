// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtb_csa_4_bit__Syms.h"


VL_ATTR_COLD void Vtb_csa_4_bit___024root__trace_init_sub__TOP__0(Vtb_csa_4_bit___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_csa_4_bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_csa_4_bit___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("tb_csa_4_bit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+43,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1,0,"A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2,0,"B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+3,0,"C",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+37,0,"Result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+4,0,"numFailed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+3,0,"C",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+37,0,"Sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+19,0,"sums",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+20,0,"carries",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+21,0,"rca_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("adder0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+5,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("adder1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+8,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("adder2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+11,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("adder3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+14,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("rca", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+19,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+26,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+44,0,"Cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+21,0,"S",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+27,0,"carries",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("adder0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+22,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("adder1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+23,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("adder2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+24,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("adder3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+25,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+42,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+17,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+18,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_csa_4_bit___024root__trace_init_top(Vtb_csa_4_bit___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_csa_4_bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_csa_4_bit___024root__trace_init_top\n"); );
    // Body
    Vtb_csa_4_bit___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_csa_4_bit___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void Vtb_csa_4_bit___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtb_csa_4_bit___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtb_csa_4_bit___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vtb_csa_4_bit___024root__trace_register(Vtb_csa_4_bit___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_csa_4_bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_csa_4_bit___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vtb_csa_4_bit___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtb_csa_4_bit___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtb_csa_4_bit___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtb_csa_4_bit___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_csa_4_bit___024root__trace_const_0_sub_0(Vtb_csa_4_bit___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtb_csa_4_bit___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_csa_4_bit___024root__trace_const_0\n"); );
    // Init
    Vtb_csa_4_bit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_csa_4_bit___024root*>(voidSelf);
    Vtb_csa_4_bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_csa_4_bit___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_csa_4_bit___024root__trace_const_0_sub_0(Vtb_csa_4_bit___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_csa_4_bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_csa_4_bit___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+43,(0xaU),32);
    bufp->fullBit(oldp+44,(0U));
}

VL_ATTR_COLD void Vtb_csa_4_bit___024root__trace_full_0_sub_0(Vtb_csa_4_bit___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtb_csa_4_bit___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_csa_4_bit___024root__trace_full_0\n"); );
    // Init
    Vtb_csa_4_bit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_csa_4_bit___024root*>(voidSelf);
    Vtb_csa_4_bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_csa_4_bit___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_csa_4_bit___024root__trace_full_0_sub_0(Vtb_csa_4_bit___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_csa_4_bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_csa_4_bit___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->tb_csa_4_bit__DOT__A),4);
    bufp->fullCData(oldp+2,(vlSelf->tb_csa_4_bit__DOT__B),4);
    bufp->fullCData(oldp+3,(vlSelf->tb_csa_4_bit__DOT__C),4);
    bufp->fullIData(oldp+4,(vlSelf->tb_csa_4_bit__DOT__numFailed),32);
    bufp->fullBit(oldp+5,((1U & (IData)(vlSelf->tb_csa_4_bit__DOT__A))));
    bufp->fullBit(oldp+6,((1U & (IData)(vlSelf->tb_csa_4_bit__DOT__B))));
    bufp->fullBit(oldp+7,((1U & (IData)(vlSelf->tb_csa_4_bit__DOT__C))));
    bufp->fullBit(oldp+8,((1U & ((IData)(vlSelf->tb_csa_4_bit__DOT__A) 
                                 >> 1U))));
    bufp->fullBit(oldp+9,((1U & ((IData)(vlSelf->tb_csa_4_bit__DOT__B) 
                                 >> 1U))));
    bufp->fullBit(oldp+10,((1U & ((IData)(vlSelf->tb_csa_4_bit__DOT__C) 
                                  >> 1U))));
    bufp->fullBit(oldp+11,((1U & ((IData)(vlSelf->tb_csa_4_bit__DOT__A) 
                                  >> 2U))));
    bufp->fullBit(oldp+12,((1U & ((IData)(vlSelf->tb_csa_4_bit__DOT__B) 
                                  >> 2U))));
    bufp->fullBit(oldp+13,((1U & ((IData)(vlSelf->tb_csa_4_bit__DOT__C) 
                                  >> 2U))));
    bufp->fullBit(oldp+14,((1U & ((IData)(vlSelf->tb_csa_4_bit__DOT__A) 
                                  >> 3U))));
    bufp->fullBit(oldp+15,((1U & ((IData)(vlSelf->tb_csa_4_bit__DOT__B) 
                                  >> 3U))));
    bufp->fullBit(oldp+16,((1U & ((IData)(vlSelf->tb_csa_4_bit__DOT__C) 
                                  >> 3U))));
    bufp->fullIData(oldp+17,(vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b),32);
    bufp->fullIData(oldp+18,(vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c),32);
    bufp->fullCData(oldp+19,((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                               << 3U) | (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                          << 2U) | 
                                         (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                           << 1U) | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a))))),4);
    bufp->fullCData(oldp+20,(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries),4);
    bufp->fullCData(oldp+21,((((0xfffffff0U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
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
                                          << 3U) ^ 
                                         (8U & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))) 
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
                                              ^ (0xeU 
                                                 & VL_SHIFTL_III(32,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U)))) 
                                       | (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a)))))),5);
    bufp->fullBit(oldp+22,(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a));
    bufp->fullBit(oldp+23,(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a));
    bufp->fullBit(oldp+24,(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a));
    bufp->fullBit(oldp+25,(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a));
    bufp->fullCData(oldp+26,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U))),4);
    bufp->fullCData(oldp+27,((((0xfffffff8U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
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
    bufp->fullBit(oldp+28,((1U & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                  >> 1U))));
    bufp->fullBit(oldp+29,((1U & ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a) 
                                  ^ (7U & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                           >> 1U))))));
    bufp->fullBit(oldp+30,(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin));
    bufp->fullBit(oldp+31,((1U & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                  >> 2U))));
    bufp->fullBit(oldp+32,((1U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a) 
                                   ^ (3U & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                            >> 2U))) 
                                  ^ (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin)))));
    bufp->fullBit(oldp+33,(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin));
    bufp->fullBit(oldp+34,((1U & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                  >> 3U))));
    bufp->fullBit(oldp+35,((1U & (((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                   ^ (1U & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                            >> 3U))) 
                                  ^ (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin)))));
    bufp->fullBit(oldp+36,((((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                             & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                >> 3U)) | ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin) 
                                           & ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
                                              ^ (1U 
                                                 & (VL_SHIFTL_III(4,4,32, (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__carries), 1U) 
                                                    >> 3U)))))));
    bufp->fullCData(oldp+37,((0x1fU & ((((0xfffffff0U 
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
                                        | ((8U & ((
                                                   ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a) 
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
                                                 ^ 
                                                 (0xcU 
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
                                       + (0x10U & (
                                                   (((IData)(vlSelf->tb_csa_4_bit__DOT__A) 
                                                     & (IData)(vlSelf->tb_csa_4_bit__DOT__B)) 
                                                    << 1U) 
                                                   | (((IData)(vlSelf->tb_csa_4_bit__DOT__C) 
                                                       << 1U) 
                                                      & ((IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__adder3__DOT____VdfgTmp_h37ec92ca__0) 
                                                         << 4U))))))),5);
    bufp->fullBit(oldp+38,((1U & (((IData)(vlSelf->tb_csa_4_bit__DOT__A) 
                                   & (IData)(vlSelf->tb_csa_4_bit__DOT__B)) 
                                  | ((IData)(vlSelf->tb_csa_4_bit__DOT__C) 
                                     & (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__adder0__DOT____VdfgTmp_h37ec92ca__0))))));
    bufp->fullBit(oldp+39,((1U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__A) 
                                    & (IData)(vlSelf->tb_csa_4_bit__DOT__B)) 
                                   >> 1U) | (((IData)(vlSelf->tb_csa_4_bit__DOT__C) 
                                              >> 1U) 
                                             & (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__adder1__DOT____VdfgTmp_h37ec92ca__0))))));
    bufp->fullBit(oldp+40,((1U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__A) 
                                    & (IData)(vlSelf->tb_csa_4_bit__DOT__B)) 
                                   >> 2U) | (((IData)(vlSelf->tb_csa_4_bit__DOT__C) 
                                              >> 2U) 
                                             & (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__adder2__DOT____VdfgTmp_h37ec92ca__0))))));
    bufp->fullBit(oldp+41,((1U & ((((IData)(vlSelf->tb_csa_4_bit__DOT__A) 
                                    & (IData)(vlSelf->tb_csa_4_bit__DOT__B)) 
                                   >> 3U) | (((IData)(vlSelf->tb_csa_4_bit__DOT__C) 
                                              >> 3U) 
                                             & (IData)(vlSelf->tb_csa_4_bit__DOT__dut__DOT__adder3__DOT____VdfgTmp_h37ec92ca__0))))));
    bufp->fullIData(oldp+42,(vlSelf->tb_csa_4_bit__DOT__unnamedblk1__DOT__a),32);
}
