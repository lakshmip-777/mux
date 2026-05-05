// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmux.h for the primary calling header

#include "Vmux__pch.h"
#include "Vmux__Syms.h"
#include "Vmux___024unit.h"

void Vmux___024unit___ctor_var_reset(Vmux___024unit* vlSelf);

Vmux___024unit::Vmux___024unit(Vmux__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vmux___024unit___ctor_var_reset(this);
}

void Vmux___024unit::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vmux___024unit::~Vmux___024unit() {
}
