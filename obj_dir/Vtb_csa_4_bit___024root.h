// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_csa_4_bit.h for the primary calling header

#ifndef VERILATED_VTB_CSA_4_BIT___024ROOT_H_
#define VERILATED_VTB_CSA_4_BIT___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_csa_4_bit__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_csa_4_bit___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*3:0*/ tb_csa_4_bit__DOT__A;
    CData/*3:0*/ tb_csa_4_bit__DOT__B;
    CData/*3:0*/ tb_csa_4_bit__DOT__C;
    CData/*3:0*/ tb_csa_4_bit__DOT__dut__DOT__carries;
    CData/*0:0*/ tb_csa_4_bit__DOT__dut__DOT____Vcellout__adder3__cout;
    CData/*0:0*/ tb_csa_4_bit__DOT__dut__DOT__adder0__DOT____VdfgTmp_h37ec92ca__0;
    CData/*0:0*/ tb_csa_4_bit__DOT__dut__DOT__adder1__DOT____VdfgTmp_h37ec92ca__0;
    CData/*0:0*/ tb_csa_4_bit__DOT__dut__DOT__adder2__DOT____VdfgTmp_h37ec92ca__0;
    CData/*0:0*/ tb_csa_4_bit__DOT__dut__DOT__adder3__DOT____VdfgTmp_h37ec92ca__0;
    CData/*0:0*/ tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder0__a;
    CData/*0:0*/ tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder1__a;
    CData/*0:0*/ tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__cin;
    CData/*0:0*/ tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder2__a;
    CData/*0:0*/ tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__cin;
    CData/*0:0*/ tb_csa_4_bit__DOT__dut__DOT__rca__DOT____Vcellinp__adder3__a;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_csa_4_bit__DOT__numFailed;
    IData/*31:0*/ tb_csa_4_bit__DOT__unnamedblk1__DOT__a;
    IData/*31:0*/ tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b;
    IData/*31:0*/ tb_csa_4_bit__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_csa_4_bit__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_csa_4_bit___024root(Vtb_csa_4_bit__Syms* symsp, const char* v__name);
    ~Vtb_csa_4_bit___024root();
    VL_UNCOPYABLE(Vtb_csa_4_bit___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
