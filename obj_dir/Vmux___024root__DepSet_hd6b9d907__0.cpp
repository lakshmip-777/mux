// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmux.h for the primary calling header

#include "Vmux__pch.h"
#include "Vmux__Syms.h"
#include "Vmux___024root.h"

VL_INLINE_OPT VlCoroutine Vmux___024root___eval_initial__TOP__Vtiming__0(Vmux___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    VL_WRITEF("a b sel | y\n");
    vlSymsp->TOP____024unit.__VmonitorNum = 1U;
    vlSelf->mux_tb__DOT__a = 0U;
    vlSelf->mux_tb__DOT__b = 0U;
    vlSelf->mux_tb__DOT__sel = 0U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "mux_tb.v", 
                                       19);
    vlSelf->mux_tb__DOT__a = 0U;
    vlSelf->mux_tb__DOT__b = 1U;
    vlSelf->mux_tb__DOT__sel = 0U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "mux_tb.v", 
                                       20);
    vlSelf->mux_tb__DOT__a = 1U;
    vlSelf->mux_tb__DOT__b = 0U;
    vlSelf->mux_tb__DOT__sel = 0U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "mux_tb.v", 
                                       21);
    vlSelf->mux_tb__DOT__a = 1U;
    vlSelf->mux_tb__DOT__b = 1U;
    vlSelf->mux_tb__DOT__sel = 0U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "mux_tb.v", 
                                       22);
    vlSelf->mux_tb__DOT__a = 0U;
    vlSelf->mux_tb__DOT__b = 0U;
    vlSelf->mux_tb__DOT__sel = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "mux_tb.v", 
                                       24);
    vlSelf->mux_tb__DOT__a = 0U;
    vlSelf->mux_tb__DOT__b = 1U;
    vlSelf->mux_tb__DOT__sel = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "mux_tb.v", 
                                       25);
    vlSelf->mux_tb__DOT__a = 1U;
    vlSelf->mux_tb__DOT__b = 0U;
    vlSelf->mux_tb__DOT__sel = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "mux_tb.v", 
                                       26);
    vlSelf->mux_tb__DOT__a = 1U;
    vlSelf->mux_tb__DOT__b = 1U;
    vlSelf->mux_tb__DOT__sel = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "mux_tb.v", 
                                       27);
    VL_FINISH_MT("mux_tb.v", 29, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmux___024root___dump_triggers__act(Vmux___024root* vlSelf);
#endif  // VL_DEBUG

void Vmux___024root___eval_triggers__act(Vmux___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, vlSelf->__VdlySched.awaitingCurrentTime());
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmux___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vmux___024root___act_sequent__TOP__0(Vmux___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux___024root___act_sequent__TOP__0\n"); );
    // Body
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff)) 
                     & (1U == vlSymsp->TOP____024unit.__VmonitorNum)))) {
        VL_WRITEF("%b %b  %b  | %b\n",1,vlSelf->mux_tb__DOT__a,
                  1,(IData)(vlSelf->mux_tb__DOT__b),
                  1,vlSelf->mux_tb__DOT__sel,1,((IData)(vlSelf->mux_tb__DOT__sel)
                                                 ? (IData)(vlSelf->mux_tb__DOT__b)
                                                 : (IData)(vlSelf->mux_tb__DOT__a)));
    }
}
