// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vmux__pch.h"
#include "Vmux.h"
#include "Vmux___024root.h"
#include "Vmux___024unit.h"

// FUNCTIONS
Vmux__Syms::~Vmux__Syms()
{
}

Vmux__Syms::Vmux__Syms(VerilatedContext* contextp, const char* namep, Vmux* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP____024unit{this, Verilated::catName(namep, "$unit")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT____024unit = &TOP____024unit;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP____024unit.__Vconfigure(true);
    // Setup scopes
    __Vscope_mux_tb.configure(this, name(), "mux_tb", "mux_tb", -12, VerilatedScope::SCOPE_OTHER);
}
