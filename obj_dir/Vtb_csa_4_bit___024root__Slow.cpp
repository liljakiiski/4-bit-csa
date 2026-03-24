// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_csa_4_bit.h for the primary calling header

#include "Vtb_csa_4_bit__pch.h"
#include "Vtb_csa_4_bit__Syms.h"
#include "Vtb_csa_4_bit___024root.h"

void Vtb_csa_4_bit___024root___ctor_var_reset(Vtb_csa_4_bit___024root* vlSelf);

Vtb_csa_4_bit___024root::Vtb_csa_4_bit___024root(Vtb_csa_4_bit__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_csa_4_bit___024root___ctor_var_reset(this);
}

void Vtb_csa_4_bit___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtb_csa_4_bit___024root::~Vtb_csa_4_bit___024root() {
}
