// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__TB__DOT__uut__DOT__fetch__DOT__clk__0 
        = vlSelfRef.TB__DOT__uut__DOT__fetch__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__TB__DOT__uut__DOT__decode__DOT__clk__0 
        = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__TB__DOT__uut__DOT__decode__DOT__regF__DOT__negClk__0 
        = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__regF__DOT__negClk;
    vlSelfRef.__Vtrigprevexpr___TOP__TB__DOT__uut__DOT__decode__DOT__csrF__DOT__clk__0 
        = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__csrF__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__TB__DOT__uut__DOT__execute__DOT__clk__0 
        = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__TB__DOT__uut__DOT__mem__DOT__clk__0 
        = vlSelfRef.TB__DOT__uut__DOT__mem__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__TB__DOT__uut__DOT__wback__DOT__clk__0 
        = vlSelfRef.TB__DOT__uut__DOT__wback__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__TB__DOT__uut__DOT__bPredict__DOT__clk__0 
        = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__clk__0 
        = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__clk__0 
        = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__TB__DOT__data__DOT__clk__0 
        = vlSelfRef.TB__DOT__data__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__TB__DOT__uart__DOT__clk__0 
        = vlSelfRef.TB__DOT__uart__DOT__clk;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile(""s);
    vlSymsp->_traceDumpOpen();
    VL_READMEM_N(true, 32, 16383, 0, "code.mem"s,  &(vlSelfRef.TB__DOT__instr__DOT__mem)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 8, 32768, 0, "data.mem"s,  &(vlSelfRef.TB__DOT__data__DOT__mem)
                 , 0, ~0ULL);
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__percep_req_valid = 1U;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("/mnt/c/Users/Prasit/Documents/ACSA_RISCV/RV_new_updated_perceptron/rtl/TB.sv", 2, "", "Settle region did not converge after 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
    } while (Vtop___024root___eval_phase__stl(vlSelf));
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
}

VL_ATTR_COLD bool Vtop___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtop___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__stl\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

extern const VlUnpacked<CData/*1:0*/, 512> Vtop__ConstPool__TABLE_h0ee497e1_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vtop__ConstPool__TABLE_h7286a54e_0;
extern const VlUnpacked<CData/*2:0*/, 512> Vtop__ConstPool__TABLE_hf426d7ba_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vtop__ConstPool__TABLE_h38d399ba_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vtop__ConstPool__TABLE_hb5aa71e4_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vtop__ConstPool__TABLE_h379412a0_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vtop__ConstPool__TABLE_hf8cf16cd_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vtop__ConstPool__TABLE_h753519a0_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vtop__ConstPool__TABLE_h0621acea_0;
extern const VlUnpacked<CData/*1:0*/, 512> Vtop__ConstPool__TABLE_h894b19f4_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vtop__ConstPool__TABLE_h31f21203_0;
extern const VlUnpacked<CData/*1:0*/, 8> Vtop__ConstPool__TABLE_he5e515f5_0;

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*8:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*2:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_0;
    __VdfgRegularize_h6e95ff9d_0_0 = 0;
    // Body
    vlSelfRef.TB__DOT__instr__DOT__clk = vlSelfRef.TB__DOT__clk;
    vlSelfRef.TB__DOT__data__DOT__clk = vlSelfRef.TB__DOT__clk;
    vlSelfRef.TB__DOT__uart__DOT__clk = vlSelfRef.TB__DOT__clk;
    vlSelfRef.TB__DOT__uart__DOT__rst = vlSelfRef.TB__DOT__rst;
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__req_valid 
        = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__percep_req_valid;
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__percep_pred_valid 
        = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__pred_valid;
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__percep_pred_conf 
        = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__pred_conf;
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__train_valid 
        = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__percep_train_valid;
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__train_taken 
        = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__percep_train_taken;
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__rd_en 
        = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__rd_en;
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__rd_idx 
        = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__rd_idx;
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__rd_v 
        = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__rd_valid;
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__rd_data[0U] 
        = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__rd_data[0U];
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__rd_data[1U] 
        = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__rd_data[1U];
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__rd_data[2U] 
        = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__rd_data[2U];
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__rd_data[3U] 
        = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__rd_data[3U];
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__rd_data[4U] 
        = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__rd_data[4U];
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__rd_data[5U] 
        = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__rd_data[5U];
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__rd_data[6U] 
        = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__rd_data[6U];
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__rd_data[7U] 
        = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__rd_data[7U];
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__wr_en 
        = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__wr_en;
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__wr_idx 
        = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__wr_idx;
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__wr_data[0U] 
        = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__wr_data[0U];
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__wr_data[1U] 
        = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__wr_data[1U];
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__wr_data[2U] 
        = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__wr_data[2U];
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__wr_data[3U] 
        = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__wr_data[3U];
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__wr_data[4U] 
        = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__wr_data[4U];
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__wr_data[5U] 
        = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__wr_data[5U];
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__wr_data[6U] 
        = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__wr_data[6U];
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__wr_data[7U] 
        = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__wr_data[7U];
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__percep_req_ghr 
        = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__ghr_local;
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__percep_train_ghr 
        = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__ghr_local;
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__train_pc 
        = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__percep_train_pc;
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__rdAddr 
        = (0x0000001fU & (vlSelfRef.TB__DOT__uut__DOT__decode__DOT__instrSv 
                          >> 7U));
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__funct7_6 
        = (1U & (vlSelfRef.TB__DOT__uut__DOT__decode__DOT__instrSv 
                 >> 0x0000001eU));
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__loadStoreSize 
        = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__funct3Sv;
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__bPredictedTaken 
        = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__bPredictedTakenSv;
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__pc = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__pcSv;
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__pcPlus4 
        = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__pcPlus4Sv;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__memWrite 
        = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__memWriteSv;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__csrAddr 
        = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__csrAddrSv;
    vlSelfRef.TB__DOT__uut__DOT__mem__DOT__pcPlus4 
        = vlSelfRef.TB__DOT__uut__DOT__mem__DOT__pcPlus4Sv;
    vlSelfRef.TB__DOT__uut__DOT__mem__DOT__regSrc = vlSelfRef.TB__DOT__uut__DOT__mem__DOT__regSrcSv;
    vlSelfRef.TB__DOT__uut__DOT__mem__DOT__csrWrite 
        = vlSelfRef.TB__DOT__uut__DOT__mem__DOT__csrWriteSv;
    vlSelfRef.TB__DOT__uut__DOT__mem__DOT__csrResult 
        = vlSelfRef.TB__DOT__uut__DOT__mem__DOT__csrResultSv;
    vlSelfRef.TB__DOT__uut__DOT__mem__DOT__csrAddr 
        = vlSelfRef.TB__DOT__uut__DOT__mem__DOT__csrAddrSv;
    vlSelfRef.TB__DOT__uut__DOT__wback__DOT__csrResult 
        = vlSelfRef.TB__DOT__uut__DOT__wback__DOT__csrResultSv;
    vlSelfRef.TB__DOT__uut__DOT__wback__DOT__csrAddr 
        = vlSelfRef.TB__DOT__uut__DOT__wback__DOT__csrAddrSv;
    vlSelfRef.TB__DOT__uut__DOT__wback__DOT__csrWrite 
        = vlSelfRef.TB__DOT__uut__DOT__wback__DOT__csrWriteSv;
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__req_ready 
        = (0U == (IData)(vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__state));
    vlSelfRef.TB__DOT__uut__DOT__fetch__DOT__pcPlus4 
        = ((IData)(4U) + vlSelfRef.TB__DOT__uut__DOT__fetch__DOT__pc);
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__immSrc 
        = (vlSelfRef.TB__DOT__uut__DOT__decode__DOT__instrSv 
           >> 7U);
    vlSelfRef.TB__DOT__uut__DOT__usePredictor = vlSelfRef.TB__DOT__usePredictor;
    vlSelfRef.TB__DOT__uut__DOT__mem__DOT__writeData 
        = vlSelfRef.TB__DOT__uut__DOT__mem__DOT__writeDataSv;
    vlSelfRef.TB__DOT__uut__DOT__rst = vlSelfRef.TB__DOT__rst;
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__csrAddr 
        = (vlSelfRef.TB__DOT__uut__DOT__decode__DOT__instrSv 
           >> 0x00000014U);
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__pcPlus4 
        = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__pcPlus4Sv;
    vlSelfRef.TB__DOT__uut__DOT__fetch__DOT__imemAddr 
        = vlSelfRef.TB__DOT__uut__DOT__fetch__DOT__pc;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__csrU__DOT__csrOp 
        = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__csrOpSv;
    vlSelfRef.TB__DOT__uut__DOT__mem__DOT__memWrite 
        = vlSelfRef.TB__DOT__uut__DOT__mem__DOT__memWriteSv;
    vlSelfRef.TB__DOT__uut__DOT__clk = vlSelfRef.TB__DOT__clk;
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__percep_pred_taken 
        = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__pred_taken;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__regSrc 
        = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__regSrcSv;
    vlSelfRef.TB__DOT__uut__DOT__mem__DOT__dmemSize 
        = vlSelfRef.TB__DOT__uut__DOT__mem__DOT__loadStoreSizeSv;
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__r2Addr 
        = (0x0000001fU & (vlSelfRef.TB__DOT__uut__DOT__decode__DOT__instrSv 
                          >> 0x00000014U));
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__rdAddr 
        = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__rdAddrSv;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__bPredictedTaken 
        = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__bPredictedTakenSv;
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__r1Addr 
        = (0x0000001fU & (vlSelfRef.TB__DOT__uut__DOT__decode__DOT__instrSv 
                          >> 0x0000000fU));
    vlSelfRef.TB__DOT__uut__DOT__F_pc = vlSelfRef.TB__DOT__uut__DOT__fetch__DOT__pc;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__alu__DOT__csrOp 
        = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__csrOpSv;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__aluSrcA 
        = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__aluSrcASv;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__funct7_6 
        = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__funct7_6Sv;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__useF7 
        = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__useF7Sv;
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__op = 
        (0x0000001fU & (vlSelfRef.TB__DOT__uut__DOT__decode__DOT__instrSv 
                        >> 2U));
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__jump 
        = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__jumpSv;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__a = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__aSv;
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__funct3 
        = (7U & (vlSelfRef.TB__DOT__uut__DOT__decode__DOT__instrSv 
                 >> 0x0000000cU));
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__useRegAdd 
        = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__useRegAddSv;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__pc = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__pcSv;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__aluSrcB 
        = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__aluSrcBSv;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__b = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__bSv;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__immExt 
        = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__immExtSv;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__r1Addr 
        = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__r1AddrSv;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__funct3 
        = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__funct3Sv;
    vlSelfRef.TB__DOT__uut__DOT__wback__DOT__regSrc 
        = vlSelfRef.TB__DOT__uut__DOT__wback__DOT__regSrcSv;
    vlSelfRef.TB__DOT__uut__DOT__mem__DOT__regWrite 
        = vlSelfRef.TB__DOT__uut__DOT__mem__DOT__regWriteSv;
    vlSelfRef.TB__DOT__uut__DOT__wback__DOT__regWrite 
        = vlSelfRef.TB__DOT__uut__DOT__wback__DOT__regWriteSv;
    vlSelfRef.TB__DOT__uut__DOT__mem__DOT__rdAddr = vlSelfRef.TB__DOT__uut__DOT__mem__DOT__rdAddrSv;
    vlSelfRef.TB__DOT__uut__DOT__wback__DOT__rdAddr 
        = vlSelfRef.TB__DOT__uut__DOT__wback__DOT__rdAddrSv;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__branch 
        = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__branchSv;
    vlSelfRef.TB__DOT__uut__DOT__mem__DOT__aluResult 
        = vlSelfRef.TB__DOT__uut__DOT__mem__DOT__aluResultSv;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__r2Addr 
        = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__r2AddrSv;
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__req_ghr 
        = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__percep_req_ghr;
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__train_ghr 
        = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__percep_train_ghr;
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__train_idx 
        = (0x0000007fU & (vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__train_pc 
                          >> 2U));
    vlSelfRef.TB__DOT__uut__DOT__D_rdAddr = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__rdAddr;
    vlSelfRef.TB__DOT__uut__DOT__D_funct7_6 = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__funct7_6;
    vlSelfRef.TB__DOT__uut__DOT__E_loadStoreSize = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__loadStoreSize;
    vlSelfRef.TB__DOT__uut__DOT__D_bPredictedTaken 
        = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__bPredictedTaken;
    vlSelfRef.TB__DOT__uut__DOT__D_pc = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__pc;
    vlSelfRef.TB__DOT__uut__DOT__D_pcPlus4 = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__pcPlus4;
    vlSelfRef.TB__DOT__uut__DOT__E_memWrite = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__memWrite;
    vlSelfRef.TB__DOT__uut__DOT__E_csrAddr = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__csrAddr;
    vlSelfRef.TB__DOT__uut__DOT__M_pcPlus4 = vlSelfRef.TB__DOT__uut__DOT__mem__DOT__pcPlus4;
    vlSelfRef.TB__DOT__uut__DOT__M_regSrc = vlSelfRef.TB__DOT__uut__DOT__mem__DOT__regSrc;
    vlSelfRef.TB__DOT__uut__DOT__M_csrWrite = vlSelfRef.TB__DOT__uut__DOT__mem__DOT__csrWrite;
    vlSelfRef.TB__DOT__uut__DOT__M_csrResult = vlSelfRef.TB__DOT__uut__DOT__mem__DOT__csrResult;
    vlSelfRef.TB__DOT__uut__DOT__M_csrAddr = vlSelfRef.TB__DOT__uut__DOT__mem__DOT__csrAddr;
    vlSelfRef.TB__DOT__uut__DOT__W_csrResult = vlSelfRef.TB__DOT__uut__DOT__wback__DOT__csrResult;
    vlSelfRef.TB__DOT__uut__DOT__W_csrAddr = vlSelfRef.TB__DOT__uut__DOT__wback__DOT__csrAddr;
    vlSelfRef.TB__DOT__uut__DOT__W_csrWrite = vlSelfRef.TB__DOT__uut__DOT__wback__DOT__csrWrite;
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__percep_req_ready 
        = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__req_ready;
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__train_ready 
        = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__req_ready;
    vlSelfRef.TB__DOT__uut__DOT__F_pcPlus4 = vlSelfRef.TB__DOT__uut__DOT__fetch__DOT__pcPlus4;
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__extImm__DOT__immSrc 
        = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__immSrc;
    vlSelfRef.TB__DOT__uut__DOT__fetch__DOT__usePredictor 
        = vlSelfRef.TB__DOT__uut__DOT__usePredictor;
    vlSelfRef.TB__DOT__uut__DOT__mem__DOT__dmemWdata 
        = vlSelfRef.TB__DOT__uut__DOT__mem__DOT__writeData;
    vlSelfRef.TB__DOT__uut__DOT__fetch__DOT__rst = vlSelfRef.TB__DOT__uut__DOT__rst;
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__rst = vlSelfRef.TB__DOT__uut__DOT__rst;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__rst 
        = vlSelfRef.TB__DOT__uut__DOT__rst;
    vlSelfRef.TB__DOT__uut__DOT__mem__DOT__rst = vlSelfRef.TB__DOT__uut__DOT__rst;
    vlSelfRef.TB__DOT__uut__DOT__wback__DOT__rst = vlSelfRef.TB__DOT__uut__DOT__rst;
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__rst 
        = vlSelfRef.TB__DOT__uut__DOT__rst;
    vlSelfRef.TB__DOT__uut__DOT__D_csrAddr = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__csrAddr;
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__csrF__DOT__readAddr 
        = (0x0000000fU & (IData)(vlSelfRef.TB__DOT__uut__DOT__decode__DOT__csrAddr));
    vlSelfRef.TB__DOT__uut__DOT__E_pcPlus4 = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__pcPlus4;
    vlSelfRef.TB__DOT__uut__DOT__imemAddr = vlSelfRef.TB__DOT__uut__DOT__fetch__DOT__imemAddr;
    vlSelfRef.TB__DOT__uut__DOT__mem__DOT__dmemWen 
        = vlSelfRef.TB__DOT__uut__DOT__mem__DOT__memWrite;
    vlSelfRef.TB__DOT__uut__DOT__fetch__DOT__clk = vlSelfRef.TB__DOT__uut__DOT__clk;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__clk 
        = vlSelfRef.TB__DOT__uut__DOT__clk;
    vlSelfRef.TB__DOT__uut__DOT__mem__DOT__clk = vlSelfRef.TB__DOT__uut__DOT__clk;
    vlSelfRef.TB__DOT__uut__DOT__wback__DOT__clk = vlSelfRef.TB__DOT__uut__DOT__clk;
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__clk 
        = vlSelfRef.TB__DOT__uut__DOT__clk;
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__clk = vlSelfRef.TB__DOT__uut__DOT__clk;
    vlSelfRef.TB__DOT__uut__DOT__E_regSrc = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__regSrc;
    vlSelfRef.TB__DOT__uut__DOT__M_dmemSize = vlSelfRef.TB__DOT__uut__DOT__mem__DOT__dmemSize;
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__regF__DOT__addr2 
        = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__r2Addr;
    vlSelfRef.TB__DOT__uut__DOT__D_r2Addr = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__r2Addr;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__csrU__DOT__rdAddr 
        = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__rdAddr;
    vlSelfRef.TB__DOT__uut__DOT__E_rdAddr = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__rdAddr;
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__zimm 
        = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__r1Addr;
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__regF__DOT__addr1 
        = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__r1Addr;
    vlSelfRef.TB__DOT__uut__DOT__D_r1Addr = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__r1Addr;
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__pcF = vlSelfRef.TB__DOT__uut__DOT__F_pc;
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__fetchPc 
        = vlSelfRef.TB__DOT__uut__DOT__F_pc;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__alu__DOT__funct7_6 
        = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__funct7_6;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__alu__DOT__useF7 
        = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__useF7;
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__cntrlU__DOT__op 
        = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__op;
    vlSelfRef.TB__DOT__uut__DOT__D_funct3 = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__funct3;
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__cntrlU__DOT__funct3 
        = (3U & (IData)(vlSelfRef.TB__DOT__uut__DOT__decode__DOT__funct3));
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__isJalr 
        = ((IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__jump) 
           & (IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__useRegAdd));
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__alu__DOT__useRegAdd 
        = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__useRegAdd;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__validInst 
        = (0U != vlSelfRef.TB__DOT__uut__DOT__execute__DOT__pc);
    vlSelfRef.TB__DOT__uut__DOT__E_pc = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__pc;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__pcPlusImm 
        = (vlSelfRef.TB__DOT__uut__DOT__execute__DOT__immExt 
           + vlSelfRef.TB__DOT__uut__DOT__execute__DOT__pc);
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__csrU__DOT__r1Addr 
        = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__r1Addr;
    vlSelfRef.TB__DOT__uut__DOT__E_r1Addr = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__r1Addr;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__csrU__DOT__funct3 
        = (3U & (IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__funct3));
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__alu__DOT__funct3 
        = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__funct3;
    vlSelfRef.TB__DOT__uut__DOT__wback__DOT__regResult 
        = ((0U == (IData)(vlSelfRef.TB__DOT__uut__DOT__wback__DOT__regSrc))
            ? vlSelfRef.TB__DOT__uut__DOT__wback__DOT__aluResultSv
            : ((1U == (IData)(vlSelfRef.TB__DOT__uut__DOT__wback__DOT__regSrc))
                ? vlSelfRef.TB__DOT__uut__DOT__wback__DOT__readDataSv
                : ((2U == (IData)(vlSelfRef.TB__DOT__uut__DOT__wback__DOT__regSrc))
                    ? vlSelfRef.TB__DOT__uut__DOT__wback__DOT__pcPlus4Sv
                    : 0U)));
    vlSelfRef.TB__DOT__uut__DOT__M_regWrite = vlSelfRef.TB__DOT__uut__DOT__mem__DOT__regWrite;
    vlSelfRef.TB__DOT__uut__DOT__W_regWrite = vlSelfRef.TB__DOT__uut__DOT__wback__DOT__regWrite;
    vlSelfRef.TB__DOT__uut__DOT__M_rdAddr = vlSelfRef.TB__DOT__uut__DOT__mem__DOT__rdAddr;
    vlSelfRef.TB__DOT__uut__DOT__W_rdAddr = vlSelfRef.TB__DOT__uut__DOT__wback__DOT__rdAddr;
    vlSelfRef.TB__DOT__uut__DOT__E_branch = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__branch;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__controlXfer 
        = ((IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__branch) 
           | (IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__jump));
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__alu__DOT__branch 
        = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__branch;
    vlSelfRef.TB__DOT__uut__DOT__mem__DOT__dmemAddr 
        = vlSelfRef.TB__DOT__uut__DOT__mem__DOT__aluResult;
    vlSelfRef.TB__DOT__uut__DOT__M_aluResult = vlSelfRef.TB__DOT__uut__DOT__mem__DOT__aluResult;
    vlSelfRef.TB__DOT__uut__DOT__E_r2Addr = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__r2Addr;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__rdAddrD 
        = vlSelfRef.TB__DOT__uut__DOT__D_rdAddr;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__funct7_6D 
        = vlSelfRef.TB__DOT__uut__DOT__D_funct7_6;
    vlSelfRef.TB__DOT__uut__DOT__mem__DOT__loadStoreSizeE 
        = vlSelfRef.TB__DOT__uut__DOT__E_loadStoreSize;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__bPredictedTakenD 
        = vlSelfRef.TB__DOT__uut__DOT__D_bPredictedTaken;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__pcD 
        = vlSelfRef.TB__DOT__uut__DOT__D_pc;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__pcPlus4D 
        = vlSelfRef.TB__DOT__uut__DOT__D_pcPlus4;
    vlSelfRef.TB__DOT__uut__DOT__mem__DOT__memWriteE 
        = vlSelfRef.TB__DOT__uut__DOT__E_memWrite;
    vlSelfRef.TB__DOT__uut__DOT__mem__DOT__csrAddrE 
        = vlSelfRef.TB__DOT__uut__DOT__E_csrAddr;
    vlSelfRef.TB__DOT__uut__DOT__wback__DOT__pcPlus4M 
        = vlSelfRef.TB__DOT__uut__DOT__M_pcPlus4;
    vlSelfRef.TB__DOT__uut__DOT__wback__DOT__regSrcM 
        = vlSelfRef.TB__DOT__uut__DOT__M_regSrc;
    vlSelfRef.TB__DOT__uut__DOT__wback__DOT__csrWriteM 
        = vlSelfRef.TB__DOT__uut__DOT__M_csrWrite;
    vlSelfRef.TB__DOT__uut__DOT__wback__DOT__csrResultM 
        = vlSelfRef.TB__DOT__uut__DOT__M_csrResult;
    vlSelfRef.TB__DOT__uut__DOT__wback__DOT__csrAddrM 
        = vlSelfRef.TB__DOT__uut__DOT__M_csrAddr;
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__csrResultW 
        = vlSelfRef.TB__DOT__uut__DOT__W_csrResult;
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__csrAddrW 
        = vlSelfRef.TB__DOT__uut__DOT__W_csrAddr;
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__csrWriteW 
        = vlSelfRef.TB__DOT__uut__DOT__W_csrWrite;
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__percep_train_ready 
        = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__train_ready;
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__pcPlus4F 
        = vlSelfRef.TB__DOT__uut__DOT__F_pcPlus4;
    vlSelfRef.TB__DOT__uut__DOT__M_dmemWdata = vlSelfRef.TB__DOT__uut__DOT__mem__DOT__dmemWdata;
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__rst 
        = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__rst;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__csrAddrD 
        = vlSelfRef.TB__DOT__uut__DOT__D_csrAddr;
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__csrF__DOT__csr 
        = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__csrF__DOT__csRegisters
        [vlSelfRef.TB__DOT__uut__DOT__decode__DOT__csrF__DOT__readAddr];
    vlSelfRef.TB__DOT__uut__DOT__mem__DOT__pcPlus4E 
        = vlSelfRef.TB__DOT__uut__DOT__E_pcPlus4;
    vlSelfRef.TB__DOT__imemAddr = vlSelfRef.TB__DOT__uut__DOT__imemAddr;
    vlSelfRef.TB__DOT__uut__DOT__M_dmemWen = vlSelfRef.TB__DOT__uut__DOT__mem__DOT__dmemWen;
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__clk 
        = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__clk;
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__csrF__DOT__clk 
        = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__clk;
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__regF__DOT__clk 
        = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__clk;
    vlSelfRef.TB__DOT__uut__DOT__mem__DOT__regSrcE 
        = vlSelfRef.TB__DOT__uut__DOT__E_regSrc;
    vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__regSrcE0 
        = (1U & (IData)(vlSelfRef.TB__DOT__uut__DOT__E_regSrc));
    vlSelfRef.TB__DOT__uut__DOT__dmemSize = vlSelfRef.TB__DOT__uut__DOT__M_dmemSize;
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__regF__DOT__reg2 
        = ((0U != (IData)(vlSelfRef.TB__DOT__uut__DOT__decode__DOT__regF__DOT__addr2))
            ? vlSelfRef.TB__DOT__uut__DOT__decode__DOT__regF__DOT__registers
           [vlSelfRef.TB__DOT__uut__DOT__decode__DOT__regF__DOT__addr2]
            : 0U);
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__r2AddrD 
        = vlSelfRef.TB__DOT__uut__DOT__D_r2Addr;
    vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__r2AddrD 
        = vlSelfRef.TB__DOT__uut__DOT__D_r2Addr;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__csrU__DOT__nrdIs0 
        = (0U != (IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__csrU__DOT__rdAddr));
    vlSelfRef.TB__DOT__uut__DOT__mem__DOT__rdAddrE 
        = vlSelfRef.TB__DOT__uut__DOT__E_rdAddr;
    vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__rdE = vlSelfRef.TB__DOT__uut__DOT__E_rdAddr;
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__regF__DOT__reg1 
        = ((0U != (IData)(vlSelfRef.TB__DOT__uut__DOT__decode__DOT__regF__DOT__addr1))
            ? vlSelfRef.TB__DOT__uut__DOT__decode__DOT__regF__DOT__registers
           [vlSelfRef.TB__DOT__uut__DOT__decode__DOT__regF__DOT__addr1]
            : 0U);
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__r1AddrD 
        = vlSelfRef.TB__DOT__uut__DOT__D_r1Addr;
    vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__r1AddrD 
        = vlSelfRef.TB__DOT__uut__DOT__D_r1Addr;
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__req_pc 
        = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__fetchPc;
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__fetchTag 
        = (vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__fetchPc 
           >> 6U);
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__fetchIndex 
        = (0x0000003fU & (vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__fetchPc 
                          >> 2U));
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__funct3D 
        = vlSelfRef.TB__DOT__uut__DOT__D_funct3;
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__cntrlU__DOT__shift 
        = (IData)((1U == (IData)(vlSelfRef.TB__DOT__uut__DOT__decode__DOT__cntrlU__DOT__funct3)));
    vlSelfRef.TB__DOT__uut__DOT__E_validInst = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__validInst;
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__exPc 
        = vlSelfRef.TB__DOT__uut__DOT__E_pc;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__btbTarget 
        = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__pcPlusImm;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__csrU__DOT__nrIs0 
        = (0U != (IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__csrU__DOT__r1Addr));
    vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__r1AddrE 
        = vlSelfRef.TB__DOT__uut__DOT__E_r1Addr;
    vlSelfRef.TB__DOT__uut__DOT__W_rd = vlSelfRef.TB__DOT__uut__DOT__wback__DOT__regResult;
    vlSelfRef.TB__DOT__uut__DOT__wback__DOT__regWriteM 
        = vlSelfRef.TB__DOT__uut__DOT__M_regWrite;
    vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__regWriteM 
        = vlSelfRef.TB__DOT__uut__DOT__M_regWrite;
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__regWriteW 
        = vlSelfRef.TB__DOT__uut__DOT__W_regWrite;
    vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__regWriteW 
        = vlSelfRef.TB__DOT__uut__DOT__W_regWrite;
    vlSelfRef.TB__DOT__uut__DOT__wback__DOT__rdAddrM 
        = vlSelfRef.TB__DOT__uut__DOT__M_rdAddr;
    vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__rdM = vlSelfRef.TB__DOT__uut__DOT__M_rdAddr;
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__rdAddrW 
        = vlSelfRef.TB__DOT__uut__DOT__W_rdAddr;
    vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__rdW = vlSelfRef.TB__DOT__uut__DOT__W_rdAddr;
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__exBranch 
        = vlSelfRef.TB__DOT__uut__DOT__E_branch;
    vlSelfRef.TB__DOT__uut__DOT__E_controlXfer = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__controlXfer;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__alu__DOT__inv = 0U;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__alu__DOT__aluCntrl 
        = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__alu__DOT__funct3;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__alu__DOT__f7 
        = ((IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__alu__DOT__useF7) 
           & (IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__alu__DOT__funct7_6));
    if (vlSelfRef.TB__DOT__uut__DOT__execute__DOT__alu__DOT__branch) {
        vlSelfRef.TB__DOT__uut__DOT__execute__DOT__alu__DOT__inv 
            = (1U & (IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__alu__DOT__funct3));
        vlSelfRef.TB__DOT__uut__DOT__execute__DOT__alu__DOT__aluCntrl 
            = (3U & ((IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__alu__DOT__funct3) 
                     >> 1U));
        vlSelfRef.TB__DOT__uut__DOT__execute__DOT__alu__DOT__f7 
            = (1U & (~ (0U != (3U & ((IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__alu__DOT__funct3) 
                                     >> 1U)))));
    } else if (((IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__alu__DOT__useRegAdd) 
                | (IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__alu__DOT__csrOp))) {
        vlSelfRef.TB__DOT__uut__DOT__execute__DOT__alu__DOT__aluCntrl = 0U;
    }
    vlSelfRef.TB__DOT__uut__DOT__M_dmemAddr = vlSelfRef.TB__DOT__uut__DOT__mem__DOT__dmemAddr;
    vlSelfRef.TB__DOT__uut__DOT__wback__DOT__aluResultM 
        = vlSelfRef.TB__DOT__uut__DOT__M_aluResult;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__aluResultM 
        = vlSelfRef.TB__DOT__uut__DOT__M_aluResult;
    vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__r2AddrE 
        = vlSelfRef.TB__DOT__uut__DOT__E_r2Addr;
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__csrF__DOT__wData 
        = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__csrResultW;
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__csrF__DOT__wAddr 
        = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__csrAddrW;
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__csrF__DOT__wEn 
        = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__csrWriteW;
    vlSelfRef.TB__DOT__uut__DOT__dmemWdata = vlSelfRef.TB__DOT__uut__DOT__M_dmemWdata;
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__rst 
        = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__rst;
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__csr = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__csrF__DOT__csr;
    vlSelfRef.TB__DOT__instr__DOT__rAddr = vlSelfRef.TB__DOT__imemAddr;
    vlSelfRef.TB__DOT__uut__DOT__dmemWen = vlSelfRef.TB__DOT__uut__DOT__M_dmemWen;
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__clk 
        = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__clk;
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__regF__DOT__negClk 
        = (1U & (~ (IData)(vlSelfRef.TB__DOT__uut__DOT__decode__DOT__regF__DOT__clk)));
    vlSelfRef.TB__DOT__dmemSize = vlSelfRef.TB__DOT__uut__DOT__dmemSize;
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__r2 = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__regF__DOT__reg2;
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__r1 = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__regF__DOT__reg1;
    vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__lwStall 
        = ((IData)(vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__regSrcE0) 
           & ((((IData)(vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__r1AddrD) 
                == (IData)(vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__rdE)) 
               | ((IData)(vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__r2AddrD) 
                  == (IData)(vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__rdE))) 
              & (0U != (IData)(vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__rdE))));
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__req_idx 
        = (0x0000007fU & (vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__req_pc 
                          >> 2U));
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__fetchEntry 
        = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__btb_mem
        [vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__fetchIndex];
    __Vtableidx1 = (((IData)(vlSelfRef.TB__DOT__uut__DOT__decode__DOT__cntrlU__DOT__shift) 
                     << 8U) | ((((IData)(vlSelfRef.TB__DOT__uut__DOT__decode__DOT__cntrlU__DOT__shift)
                                  ? 1U : 2U) << 5U) 
                               | (IData)(vlSelfRef.TB__DOT__uut__DOT__decode__DOT__cntrlU__DOT__op)));
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__cntrlU__DOT__aluSrcA 
        = Vtop__ConstPool__TABLE_h0ee497e1_0[__Vtableidx1];
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__cntrlU__DOT__wrongOpcode 
        = Vtop__ConstPool__TABLE_h7286a54e_0[__Vtableidx1];
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__cntrlU__DOT__immCntrl 
        = Vtop__ConstPool__TABLE_hf426d7ba_0[__Vtableidx1];
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__cntrlU__DOT__useF7 
        = Vtop__ConstPool__TABLE_h38d399ba_0[__Vtableidx1];
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__cntrlU__DOT__branch 
        = Vtop__ConstPool__TABLE_hb5aa71e4_0[__Vtableidx1];
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__cntrlU__DOT__jump 
        = Vtop__ConstPool__TABLE_h379412a0_0[__Vtableidx1];
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__cntrlU__DOT__useRegAdd 
        = Vtop__ConstPool__TABLE_hf8cf16cd_0[__Vtableidx1];
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__cntrlU__DOT__regWrite 
        = Vtop__ConstPool__TABLE_h753519a0_0[__Vtableidx1];
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__cntrlU__DOT__memWrite 
        = Vtop__ConstPool__TABLE_h0621acea_0[__Vtableidx1];
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__cntrlU__DOT__regSrc 
        = Vtop__ConstPool__TABLE_h894b19f4_0[__Vtableidx1];
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__cntrlU__DOT__csrOp 
        = Vtop__ConstPool__TABLE_h31f21203_0[__Vtableidx1];
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__validInst 
        = vlSelfRef.TB__DOT__uut__DOT__E_validInst;
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__exTag 
        = (vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__exPc 
           >> 6U);
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__exIndex 
        = (0x0000003fU & (vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__exPc 
                          >> 2U));
    vlSelfRef.TB__DOT__uut__DOT__E_btbTarget = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__btbTarget;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__csrU__DOT__csrWriteIn 
        = ((1U == (IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__csrU__DOT__funct3)) 
           || ((3U == (IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__csrU__DOT__funct3))
                ? (IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__csrU__DOT__nrIs0)
                : ((2U == (IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__csrU__DOT__funct3)) 
                   && (IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__csrU__DOT__nrIs0))));
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__rdW = vlSelfRef.TB__DOT__uut__DOT__W_rd;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__resultW 
        = vlSelfRef.TB__DOT__uut__DOT__W_rd;
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__regF__DOT__writeEn 
        = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__regWriteW;
    vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__r1EqMem 
        = (((IData)(vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__r1AddrE) 
            == (IData)(vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__rdM)) 
           & (0U != (IData)(vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__rdM)));
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__regF__DOT__writeAddr 
        = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__rdAddrW;
    vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__r1EqW 
        = (((IData)(vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__r1AddrE) 
            == (IData)(vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__rdW)) 
           & (0U != (IData)(vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__rdW)));
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__controlXfer 
        = vlSelfRef.TB__DOT__uut__DOT__E_controlXfer;
    vlSelfRef.TB__DOT__uut__DOT__dmemAddr = vlSelfRef.TB__DOT__uut__DOT__M_dmemAddr;
    vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__r2EqMem 
        = (((IData)(vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__r2AddrE) 
            == (IData)(vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__rdM)) 
           & (0U != (IData)(vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__rdM)));
    vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__r2EqW 
        = (((IData)(vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__r2AddrE) 
            == (IData)(vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__rdW)) 
           & (0U != (IData)(vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__rdW)));
    vlSelfRef.TB__DOT__dmemWdata = vlSelfRef.TB__DOT__uut__DOT__dmemWdata;
    vlSelfRef.TB__DOT__instr__DOT__rData = ((0x3ffeU 
                                             >= (0x00003fffU 
                                                 & (vlSelfRef.TB__DOT__instr__DOT__rAddr 
                                                    >> 2U)))
                                             ? vlSelfRef.TB__DOT__instr__DOT__mem
                                            [(0x00003fffU 
                                              & (vlSelfRef.TB__DOT__instr__DOT__rAddr 
                                                 >> 2U))]
                                             : 0U);
    vlSelfRef.TB__DOT__dmemWen = vlSelfRef.TB__DOT__uut__DOT__dmemWen;
    vlSelfRef.TB__DOT__data__DOT__size = vlSelfRef.TB__DOT__dmemSize;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__csrU__DOT__csrReadIn 
        = ((1U == (IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__csrU__DOT__funct3))
            ? (IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__csrU__DOT__nrdIs0)
            : ((3U == (IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__csrU__DOT__funct3)) 
               || (2U == (IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__csrU__DOT__funct3))));
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__csrU__DOT__csrRead 
        = ((IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__csrU__DOT__csrOp) 
           & (IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__csrU__DOT__csrReadIn));
    vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__stallD 
        = vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__lwStall;
    vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__stallF 
        = vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__lwStall;
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__fetchCounter 
        = (3U & (IData)((vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__fetchEntry 
                         >> 1U)));
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__fetchTarget 
        = (IData)((vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__fetchEntry 
                   >> 3U));
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__fetchTagBtb 
        = (0x03ffffffU & (IData)((vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__fetchEntry 
                                  >> 0x00000023U)));
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__aluSrcA 
        = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__cntrlU__DOT__aluSrcA;
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__useF7 
        = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__cntrlU__DOT__useF7;
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__jump 
        = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__cntrlU__DOT__jump;
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__useRegAdd 
        = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__cntrlU__DOT__useRegAdd;
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__regWrite 
        = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__cntrlU__DOT__regWrite;
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__memWrite 
        = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__cntrlU__DOT__memWrite;
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__regSrc 
        = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__cntrlU__DOT__regSrc;
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__branch 
        = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__cntrlU__DOT__branch;
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__cntrlU__DOT__aluSrcB 
        = ((~ (IData)(vlSelfRef.TB__DOT__uut__DOT__decode__DOT__cntrlU__DOT__branch)) 
           & (0U != (IData)(vlSelfRef.TB__DOT__uut__DOT__decode__DOT__cntrlU__DOT__immCntrl)));
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__immCntrl 
        = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__cntrlU__DOT__immCntrl;
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__csrOp 
        = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__cntrlU__DOT__csrOp;
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__csrF__DOT__validInst 
        = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__validInst;
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__exEntry_ 
        = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__btb_mem
        [vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__exIndex];
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__exTarget 
        = vlSelfRef.TB__DOT__uut__DOT__E_btbTarget;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__csrU__DOT__csrWrite 
        = ((IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__csrU__DOT__csrOp) 
           & (IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__csrU__DOT__csrWriteIn));
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__regF__DOT__writeData 
        = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__rdW;
    vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__fwdAE 
        = (((IData)(vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__r1EqMem) 
            & (IData)(vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__regWriteM))
            ? 2U : (((IData)(vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__r1EqW) 
                     & (IData)(vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__regWriteW))
                     ? 1U : 0U));
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__csrF__DOT__controlXfer 
        = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__controlXfer;
    vlSelfRef.TB__DOT__dmemAddr = vlSelfRef.TB__DOT__uut__DOT__dmemAddr;
    vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__fwdBE 
        = (((IData)(vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__r2EqMem) 
            & (IData)(vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__regWriteM))
            ? 2U : (((IData)(vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__r2EqW) 
                     & (IData)(vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__regWriteW))
                     ? 1U : 0U));
    vlSelfRef.TB__DOT__data__DOT__wData = vlSelfRef.TB__DOT__dmemWdata;
    vlSelfRef.TB__DOT__uartData = (0x000000ffU & vlSelfRef.TB__DOT__dmemWdata);
    vlSelfRef.TB__DOT__imemRdata = vlSelfRef.TB__DOT__instr__DOT__rData;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__csrRead 
        = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__csrU__DOT__csrRead;
    vlSelfRef.TB__DOT__uut__DOT__H_stallD = vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__stallD;
    vlSelfRef.TB__DOT__uut__DOT__H_stallF = vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__stallF;
    vlSelfRef.TB__DOT__uut__DOT__P_btbTarget = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__fetchTarget;
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__fetchHit 
        = ((IData)(vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__fetchEntry) 
           & ((vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__fetchTag 
               == vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__fetchTagBtb) 
              & (IData)(vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__percep_pred_taken)));
    vlSelfRef.TB__DOT__uut__DOT__D_aluSrcA = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__aluSrcA;
    vlSelfRef.TB__DOT__uut__DOT__D_useF7 = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__useF7;
    vlSelfRef.TB__DOT__uut__DOT__D_jump = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__jump;
    vlSelfRef.TB__DOT__uut__DOT__D_useRegAdd = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__useRegAdd;
    vlSelfRef.TB__DOT__uut__DOT__D_regWrite = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__regWrite;
    vlSelfRef.TB__DOT__uut__DOT__D_memWrite = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__memWrite;
    vlSelfRef.TB__DOT__uut__DOT__D_regSrc = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__regSrc;
    vlSelfRef.TB__DOT__uut__DOT__D_branch = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__branch;
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__aluSrcB 
        = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__cntrlU__DOT__aluSrcB;
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__extImm__DOT__immCntrl 
        = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__immCntrl;
    if (vlSelfRef.TB__DOT__uut__DOT__decode__DOT__csrOp) {
        vlSelfRef.TB__DOT__uut__DOT__D_csrOp = 1U;
        vlSelfRef.TB__DOT__uut__DOT__decode__DOT__b 
            = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__csr;
    } else {
        vlSelfRef.TB__DOT__uut__DOT__D_csrOp = 0U;
        vlSelfRef.TB__DOT__uut__DOT__decode__DOT__b 
            = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__r2;
    }
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__a = (
                                                   ((IData)(vlSelfRef.TB__DOT__uut__DOT__decode__DOT__csrOp) 
                                                    & ((IData)(vlSelfRef.TB__DOT__uut__DOT__decode__DOT__funct3) 
                                                       >> 2U))
                                                    ? vlSelfRef.TB__DOT__uut__DOT__decode__DOT__zimm
                                                    : vlSelfRef.TB__DOT__uut__DOT__decode__DOT__r1);
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__exTagBtb 
        = (0x03ffffffU & (IData)((vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__exEntry_ 
                                  >> 0x00000023U)));
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__exCounter 
        = (3U & (IData)((vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__exEntry_ 
                         >> 1U)));
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__csrWrite 
        = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__csrU__DOT__csrWrite;
    vlSelfRef.TB__DOT__uut__DOT__H_fwdAE = vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__fwdAE;
    vlSelfRef.TB__DOT__uartWen = ((IData)(vlSelfRef.TB__DOT__dmemWen) 
                                  & (0xfffffffcU == vlSelfRef.TB__DOT__dmemAddr));
    vlSelfRef.TB__DOT__data__DOT__addr = vlSelfRef.TB__DOT__dmemAddr;
    vlSelfRef.TB__DOT__uut__DOT__H_fwdBE = vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__fwdBE;
    vlSelfRef.TB__DOT__uart__DOT__data = vlSelfRef.TB__DOT__uartData;
    vlSelfRef.TB__DOT__uut__DOT__imemRdata = vlSelfRef.TB__DOT__imemRdata;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__regWrite 
        = ((IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__regWriteSv) 
           & ((~ ((IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__csrOpSv) 
                  | (IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__csrRead))) 
              | (IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__csrRead)));
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__stall 
        = vlSelfRef.TB__DOT__uut__DOT__H_stallD;
    vlSelfRef.TB__DOT__uut__DOT__fetch__DOT__stall 
        = vlSelfRef.TB__DOT__uut__DOT__H_stallF;
    vlSelfRef.TB__DOT__uut__DOT__fetch__DOT__btbTarget 
        = vlSelfRef.TB__DOT__uut__DOT__P_btbTarget;
    vlSelfRef.TB__DOT__uut__DOT__P_bPredictTaken = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__fetchHit;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__aluSrcAD 
        = vlSelfRef.TB__DOT__uut__DOT__D_aluSrcA;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__useF7D 
        = vlSelfRef.TB__DOT__uut__DOT__D_useF7;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__jumpD 
        = vlSelfRef.TB__DOT__uut__DOT__D_jump;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__useRegAddD 
        = vlSelfRef.TB__DOT__uut__DOT__D_useRegAdd;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__regWriteD 
        = vlSelfRef.TB__DOT__uut__DOT__D_regWrite;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__memWriteD 
        = vlSelfRef.TB__DOT__uut__DOT__D_memWrite;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__regSrcD 
        = vlSelfRef.TB__DOT__uut__DOT__D_regSrc;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__branchD 
        = vlSelfRef.TB__DOT__uut__DOT__D_branch;
    vlSelfRef.TB__DOT__uut__DOT__D_aluSrcB = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__aluSrcB;
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__extImm__DOT__immExt 
        = ((4U & (IData)(vlSelfRef.TB__DOT__uut__DOT__decode__DOT__extImm__DOT__immCntrl))
            ? ((2U & (IData)(vlSelfRef.TB__DOT__uut__DOT__decode__DOT__extImm__DOT__immCntrl))
                ? ((1U & (IData)(vlSelfRef.TB__DOT__uut__DOT__decode__DOT__extImm__DOT__immCntrl))
                    ? 0U : (((- (IData)((1U & (vlSelfRef.TB__DOT__uut__DOT__decode__DOT__extImm__DOT__immSrc 
                                               >> 0x00000018U)))) 
                             << 0x00000014U) | ((((0x000001feU 
                                                   & (vlSelfRef.TB__DOT__uut__DOT__decode__DOT__extImm__DOT__immSrc 
                                                      >> 4U)) 
                                                  | (1U 
                                                     & (vlSelfRef.TB__DOT__uut__DOT__decode__DOT__extImm__DOT__immSrc 
                                                        >> 0x0000000dU))) 
                                                 << 0x0000000bU) 
                                                | (0x000007feU 
                                                   & (vlSelfRef.TB__DOT__uut__DOT__decode__DOT__extImm__DOT__immSrc 
                                                      >> 0x0000000dU)))))
                : ((1U & (IData)(vlSelfRef.TB__DOT__uut__DOT__decode__DOT__extImm__DOT__immCntrl))
                    ? (0xfffff000U & (vlSelfRef.TB__DOT__uut__DOT__decode__DOT__extImm__DOT__immSrc 
                                      << 7U)) : (((- (IData)(
                                                             (1U 
                                                              & (vlSelfRef.TB__DOT__uut__DOT__decode__DOT__extImm__DOT__immSrc 
                                                                 >> 0x00000018U)))) 
                                                  << 0x0000000cU) 
                                                 | ((0x00000800U 
                                                     & (vlSelfRef.TB__DOT__uut__DOT__decode__DOT__extImm__DOT__immSrc 
                                                        << 0x0000000bU)) 
                                                    | ((0x000007e0U 
                                                        & (vlSelfRef.TB__DOT__uut__DOT__decode__DOT__extImm__DOT__immSrc 
                                                           >> 0x0000000dU)) 
                                                       | (0x0000001eU 
                                                          & vlSelfRef.TB__DOT__uut__DOT__decode__DOT__extImm__DOT__immSrc))))))
            : ((2U & (IData)(vlSelfRef.TB__DOT__uut__DOT__decode__DOT__extImm__DOT__immCntrl))
                ? ((1U & (IData)(vlSelfRef.TB__DOT__uut__DOT__decode__DOT__extImm__DOT__immCntrl))
                    ? (((- (IData)((1U & (vlSelfRef.TB__DOT__uut__DOT__decode__DOT__extImm__DOT__immSrc 
                                          >> 0x00000018U)))) 
                        << 0x0000000cU) | ((0x00000fe0U 
                                            & (vlSelfRef.TB__DOT__uut__DOT__decode__DOT__extImm__DOT__immSrc 
                                               >> 0x0000000dU)) 
                                           | (0x0000001fU 
                                              & vlSelfRef.TB__DOT__uut__DOT__decode__DOT__extImm__DOT__immSrc)))
                    : (((- (IData)((1U & (vlSelfRef.TB__DOT__uut__DOT__decode__DOT__extImm__DOT__immSrc 
                                          >> 0x00000018U)))) 
                        << 0x0000000cU) | (0x00000fffU 
                                           & (vlSelfRef.TB__DOT__uut__DOT__decode__DOT__extImm__DOT__immSrc 
                                              >> 0x0000000dU))))
                : ((1U & (IData)(vlSelfRef.TB__DOT__uut__DOT__decode__DOT__extImm__DOT__immCntrl))
                    ? (0x0000001fU & (vlSelfRef.TB__DOT__uut__DOT__decode__DOT__extImm__DOT__immSrc 
                                      >> 0x0000000dU))
                    : 0U)));
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__csrOpD 
        = vlSelfRef.TB__DOT__uut__DOT__D_csrOp;
    vlSelfRef.TB__DOT__uut__DOT__D_b = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__b;
    vlSelfRef.TB__DOT__uut__DOT__D_a = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__a;
    vlSelfRef.TB__DOT__uut__DOT__E_csrWrite = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__csrWrite;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__fwdA 
        = vlSelfRef.TB__DOT__uut__DOT__H_fwdAE;
    vlSelfRef.TB__DOT__uart__DOT__wEn = vlSelfRef.TB__DOT__uartWen;
    vlSelfRef.TB__DOT__dmemWenFinal = ((~ (IData)(vlSelfRef.TB__DOT__uartWen)) 
                                       & (IData)(vlSelfRef.TB__DOT__dmemWen));
    vlSelfRef.TB__DOT__data__DOT__addrMinusOff = (0x0fffffffU 
                                                  & vlSelfRef.TB__DOT__data__DOT__addr);
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__fwdB 
        = vlSelfRef.TB__DOT__uut__DOT__H_fwdBE;
    vlSelfRef.TB__DOT__uut__DOT__fetch__DOT__imemData 
        = vlSelfRef.TB__DOT__uut__DOT__imemRdata;
    vlSelfRef.TB__DOT__uut__DOT__E_regWrite = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__regWrite;
    vlSelfRef.TB__DOT__uut__DOT__fetch__DOT__bPredictTaken 
        = vlSelfRef.TB__DOT__uut__DOT__P_bPredictTaken;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__aluSrcBD 
        = vlSelfRef.TB__DOT__uut__DOT__D_aluSrcB;
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__immExt 
        = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__extImm__DOT__immExt;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__bD = vlSelfRef.TB__DOT__uut__DOT__D_b;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__aD = vlSelfRef.TB__DOT__uut__DOT__D_a;
    vlSelfRef.TB__DOT__uut__DOT__mem__DOT__csrWriteE 
        = vlSelfRef.TB__DOT__uut__DOT__E_csrWrite;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__r1Hz 
        = ((0U == (IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__fwdA))
            ? vlSelfRef.TB__DOT__uut__DOT__execute__DOT__a
            : ((2U == (IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__fwdA))
                ? vlSelfRef.TB__DOT__uut__DOT__execute__DOT__aluResultM
                : ((1U == (IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__fwdA))
                    ? vlSelfRef.TB__DOT__uut__DOT__execute__DOT__resultW
                    : vlSelfRef.TB__DOT__uut__DOT__execute__DOT__a)));
    vlSelfRef.TB__DOT__data__DOT__wEn = vlSelfRef.TB__DOT__dmemWenFinal;
    vlSelfRef.TB__DOT__data__DOT__addrplus1 = ((IData)(1U) 
                                               + vlSelfRef.TB__DOT__data__DOT__addrMinusOff);
    vlSelfRef.TB__DOT__data__DOT__addrplus2 = ((IData)(2U) 
                                               + vlSelfRef.TB__DOT__data__DOT__addrMinusOff);
    vlSelfRef.TB__DOT__data__DOT__addrplus3 = ((IData)(3U) 
                                               + vlSelfRef.TB__DOT__data__DOT__addrMinusOff);
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__r2Hz 
        = ((0U == (IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__fwdB))
            ? vlSelfRef.TB__DOT__uut__DOT__execute__DOT__b
            : ((2U == (IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__fwdB))
                ? vlSelfRef.TB__DOT__uut__DOT__execute__DOT__aluResultM
                : ((1U == (IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__fwdB))
                    ? vlSelfRef.TB__DOT__uut__DOT__execute__DOT__resultW
                    : vlSelfRef.TB__DOT__uut__DOT__execute__DOT__b)));
    vlSelfRef.TB__DOT__uut__DOT__fetch__DOT__instr 
        = vlSelfRef.TB__DOT__uut__DOT__fetch__DOT__imemData;
    vlSelfRef.TB__DOT__uut__DOT__mem__DOT__regWriteE 
        = vlSelfRef.TB__DOT__uut__DOT__E_regWrite;
    vlSelfRef.TB__DOT__uut__DOT__fetch__DOT__bPredictedTaken 
        = ((IData)(vlSelfRef.TB__DOT__uut__DOT__fetch__DOT__bPredictTaken) 
           & (IData)(vlSelfRef.TB__DOT__uut__DOT__fetch__DOT__usePredictor));
    vlSelfRef.TB__DOT__uut__DOT__D_immExt = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__immExt;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__csrU__DOT__rs1Uimm 
        = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__r1Hz;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__srcA 
        = ((0U == (IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__aluSrcA))
            ? vlSelfRef.TB__DOT__uut__DOT__execute__DOT__r1Hz
            : ((1U == (IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__aluSrcA))
                ? vlSelfRef.TB__DOT__uut__DOT__execute__DOT__pc
                : 0U));
    vlSelfRef.TB__DOT__data__DOT__rData = ((4U & (IData)(vlSelfRef.TB__DOT__data__DOT__size))
                                            ? ((2U 
                                                & (IData)(vlSelfRef.TB__DOT__data__DOT__size))
                                                ? 0xdeadc0deU
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.TB__DOT__data__DOT__size))
                                                    ? 
                                                   ((vlSelfRef.TB__DOT__data__DOT__mem
                                                     [
                                                     (0x00007fffU 
                                                      & vlSelfRef.TB__DOT__data__DOT__addrplus1)] 
                                                     << 8U) 
                                                    | vlSelfRef.TB__DOT__data__DOT__mem
                                                    [
                                                    (0x00007fffU 
                                                     & vlSelfRef.TB__DOT__data__DOT__addrMinusOff)])
                                                    : 
                                                   vlSelfRef.TB__DOT__data__DOT__mem
                                                   [
                                                   (0x00007fffU 
                                                    & vlSelfRef.TB__DOT__data__DOT__addrMinusOff)]))
                                            : ((2U 
                                                & (IData)(vlSelfRef.TB__DOT__data__DOT__size))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.TB__DOT__data__DOT__size))
                                                    ? 0xdeadc0deU
                                                    : 
                                                   (((vlSelfRef.TB__DOT__data__DOT__mem
                                                      [
                                                      (0x00007fffU 
                                                       & vlSelfRef.TB__DOT__data__DOT__addrplus3)] 
                                                      << 0x00000018U) 
                                                     | (vlSelfRef.TB__DOT__data__DOT__mem
                                                        [
                                                        (0x00007fffU 
                                                         & vlSelfRef.TB__DOT__data__DOT__addrplus2)] 
                                                        << 0x00000010U)) 
                                                    | ((vlSelfRef.TB__DOT__data__DOT__mem
                                                        [
                                                        (0x00007fffU 
                                                         & vlSelfRef.TB__DOT__data__DOT__addrplus1)] 
                                                        << 8U) 
                                                       | vlSelfRef.TB__DOT__data__DOT__mem
                                                       [
                                                       (0x00007fffU 
                                                        & vlSelfRef.TB__DOT__data__DOT__addrMinusOff)])))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.TB__DOT__data__DOT__size))
                                                    ? 
                                                   (((- (IData)(
                                                                (1U 
                                                                 & (vlSelfRef.TB__DOT__data__DOT__mem
                                                                    [
                                                                    (0x00007fffU 
                                                                     & vlSelfRef.TB__DOT__data__DOT__addrplus1)] 
                                                                    >> 7U)))) 
                                                     << 0x00000010U) 
                                                    | ((vlSelfRef.TB__DOT__data__DOT__mem
                                                        [
                                                        (0x00007fffU 
                                                         & vlSelfRef.TB__DOT__data__DOT__addrplus1)] 
                                                        << 8U) 
                                                       | vlSelfRef.TB__DOT__data__DOT__mem
                                                       [
                                                       (0x00007fffU 
                                                        & vlSelfRef.TB__DOT__data__DOT__addrMinusOff)]))
                                                    : 
                                                   (((- (IData)(
                                                                (1U 
                                                                 & (vlSelfRef.TB__DOT__data__DOT__mem
                                                                    [
                                                                    (0x00007fffU 
                                                                     & vlSelfRef.TB__DOT__data__DOT__addr)] 
                                                                    >> 7U)))) 
                                                     << 8U) 
                                                    | vlSelfRef.TB__DOT__data__DOT__mem
                                                    [
                                                    (0x00007fffU 
                                                     & vlSelfRef.TB__DOT__data__DOT__addrMinusOff)]))));
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__writeData 
        = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__r2Hz;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__csrU__DOT__csr 
        = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__r2Hz;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__csrU__DOT__csrResult 
        = ((1U == (IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__csrU__DOT__funct3))
            ? vlSelfRef.TB__DOT__uut__DOT__execute__DOT__csrU__DOT__rs1Uimm
            : ((3U == (IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__csrU__DOT__funct3))
                ? (vlSelfRef.TB__DOT__uut__DOT__execute__DOT__csrU__DOT__csr 
                   & (~ vlSelfRef.TB__DOT__uut__DOT__execute__DOT__csrU__DOT__rs1Uimm))
                : ((2U == (IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__csrU__DOT__funct3))
                    ? (vlSelfRef.TB__DOT__uut__DOT__execute__DOT__csrU__DOT__csr 
                       | vlSelfRef.TB__DOT__uut__DOT__execute__DOT__csrU__DOT__rs1Uimm)
                    : 0U)));
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__srcB 
        = ((IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__aluSrcB)
            ? vlSelfRef.TB__DOT__uut__DOT__execute__DOT__immExt
            : vlSelfRef.TB__DOT__uut__DOT__execute__DOT__r2Hz);
    vlSelfRef.TB__DOT__uut__DOT__F_instr = vlSelfRef.TB__DOT__uut__DOT__fetch__DOT__instr;
    vlSelfRef.TB__DOT__uut__DOT__F_bPredictedTaken 
        = vlSelfRef.TB__DOT__uut__DOT__fetch__DOT__bPredictedTaken;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__immExtD 
        = vlSelfRef.TB__DOT__uut__DOT__D_immExt;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__alu__DOT__srcA 
        = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__srcA;
    vlSelfRef.TB__DOT__dmemRdata = vlSelfRef.TB__DOT__data__DOT__rData;
    vlSelfRef.TB__DOT__uut__DOT__E_writeData = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__writeData;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__alu__DOT__srcB 
        = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__srcB;
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__instrF 
        = vlSelfRef.TB__DOT__uut__DOT__F_instr;
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__bPredictedTakenF 
        = vlSelfRef.TB__DOT__uut__DOT__F_bPredictedTaken;
    vlSelfRef.TB__DOT__dmemRdataFinal = vlSelfRef.TB__DOT__dmemRdata;
    vlSelfRef.TB__DOT__uut__DOT__mem__DOT__writeDataE 
        = vlSelfRef.TB__DOT__uut__DOT__E_writeData;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__csrResult 
        = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__csrU__DOT__csrResult;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__alu__DOT__srcBlwr 
        = (0x0000001fU & vlSelfRef.TB__DOT__uut__DOT__execute__DOT__alu__DOT__srcB);
    vlSelfRef.TB__DOT__uut__DOT__dmemRdata = vlSelfRef.TB__DOT__dmemRdataFinal;
    vlSelfRef.TB__DOT__uut__DOT__E_csrResult = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__csrResult;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__alu__DOT__zero = 0U;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__alu__DOT__branchFlag = 0U;
    if ((4U & (IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__alu__DOT__aluCntrl))) {
        vlSelfRef.TB__DOT__uut__DOT__execute__DOT__alu__DOT__aluResult 
            = ((2U & (IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__alu__DOT__aluCntrl))
                ? ((1U & (IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__alu__DOT__aluCntrl))
                    ? (vlSelfRef.TB__DOT__uut__DOT__execute__DOT__alu__DOT__srcA 
                       & vlSelfRef.TB__DOT__uut__DOT__execute__DOT__alu__DOT__srcB)
                    : (vlSelfRef.TB__DOT__uut__DOT__execute__DOT__alu__DOT__srcA 
                       | vlSelfRef.TB__DOT__uut__DOT__execute__DOT__alu__DOT__srcB))
                : ((1U & (IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__alu__DOT__aluCntrl))
                    ? ((IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__alu__DOT__f7)
                        ? VL_SHIFTRS_III(32,32,5, vlSelfRef.TB__DOT__uut__DOT__execute__DOT__alu__DOT__srcA, (IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__alu__DOT__srcBlwr))
                        : (vlSelfRef.TB__DOT__uut__DOT__execute__DOT__alu__DOT__srcA 
                           >> (IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__alu__DOT__srcBlwr)))
                    : (vlSelfRef.TB__DOT__uut__DOT__execute__DOT__alu__DOT__srcA 
                       ^ vlSelfRef.TB__DOT__uut__DOT__execute__DOT__alu__DOT__srcB)));
    } else if ((2U & (IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__alu__DOT__aluCntrl))) {
        if ((1U & (IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__alu__DOT__aluCntrl))) {
            vlSelfRef.TB__DOT__uut__DOT__execute__DOT__alu__DOT__aluResult 
                = ((vlSelfRef.TB__DOT__uut__DOT__execute__DOT__alu__DOT__srcA 
                    < vlSelfRef.TB__DOT__uut__DOT__execute__DOT__alu__DOT__srcB)
                    ? 1U : 0U);
            vlSelfRef.TB__DOT__uut__DOT__execute__DOT__alu__DOT__branchFlag 
                = (1U & ((IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__alu__DOT__inv)
                          ? (~ vlSelfRef.TB__DOT__uut__DOT__execute__DOT__alu__DOT__aluResult)
                          : vlSelfRef.TB__DOT__uut__DOT__execute__DOT__alu__DOT__aluResult));
        } else {
            vlSelfRef.TB__DOT__uut__DOT__execute__DOT__alu__DOT__aluResult 
                = (VL_LTS_III(32, vlSelfRef.TB__DOT__uut__DOT__execute__DOT__alu__DOT__srcA, vlSelfRef.TB__DOT__uut__DOT__execute__DOT__alu__DOT__srcB)
                    ? 1U : 0U);
            vlSelfRef.TB__DOT__uut__DOT__execute__DOT__alu__DOT__branchFlag 
                = (1U & ((IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__alu__DOT__inv)
                          ? (~ vlSelfRef.TB__DOT__uut__DOT__execute__DOT__alu__DOT__aluResult)
                          : vlSelfRef.TB__DOT__uut__DOT__execute__DOT__alu__DOT__aluResult));
        }
    } else if ((1U & (IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__alu__DOT__aluCntrl))) {
        vlSelfRef.TB__DOT__uut__DOT__execute__DOT__alu__DOT__aluResult 
            = (vlSelfRef.TB__DOT__uut__DOT__execute__DOT__alu__DOT__srcA 
               << (IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__alu__DOT__srcBlwr));
    } else if (vlSelfRef.TB__DOT__uut__DOT__execute__DOT__alu__DOT__f7) {
        vlSelfRef.TB__DOT__uut__DOT__execute__DOT__alu__DOT__aluResult 
            = (vlSelfRef.TB__DOT__uut__DOT__execute__DOT__alu__DOT__srcA 
               - vlSelfRef.TB__DOT__uut__DOT__execute__DOT__alu__DOT__srcB);
        vlSelfRef.TB__DOT__uut__DOT__execute__DOT__alu__DOT__zero 
            = (1U & (~ (0U != vlSelfRef.TB__DOT__uut__DOT__execute__DOT__alu__DOT__aluResult)));
        vlSelfRef.TB__DOT__uut__DOT__execute__DOT__alu__DOT__branchFlag 
            = (1U & ((IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__alu__DOT__inv)
                      ? (~ (IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__alu__DOT__zero))
                      : (IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__alu__DOT__zero)));
    } else {
        vlSelfRef.TB__DOT__uut__DOT__execute__DOT__alu__DOT__aluResult 
            = (vlSelfRef.TB__DOT__uut__DOT__execute__DOT__alu__DOT__srcA 
               + vlSelfRef.TB__DOT__uut__DOT__execute__DOT__alu__DOT__srcB);
    }
    vlSelfRef.TB__DOT__uut__DOT__M_dmemRdata = vlSelfRef.TB__DOT__uut__DOT__dmemRdata;
    vlSelfRef.TB__DOT__uut__DOT__mem__DOT__csrResultE 
        = vlSelfRef.TB__DOT__uut__DOT__E_csrResult;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__aluResult 
        = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__alu__DOT__aluResult;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__branchFlag 
        = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__alu__DOT__branchFlag;
    vlSelfRef.TB__DOT__uut__DOT__mem__DOT__dmemRdata 
        = vlSelfRef.TB__DOT__uut__DOT__M_dmemRdata;
    vlSelfRef.TB__DOT__uut__DOT__E_aluResult = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__aluResult;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__pcSel 
        = (((IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__branch) 
            & (IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__branchFlag)) 
           | (IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__jump));
    vlSelfRef.TB__DOT__uut__DOT__mem__DOT__readData 
        = vlSelfRef.TB__DOT__uut__DOT__mem__DOT__dmemRdata;
    vlSelfRef.TB__DOT__uut__DOT__mem__DOT__aluResultE 
        = vlSelfRef.TB__DOT__uut__DOT__E_aluResult;
    vlSelfRef.TB__DOT__uut__DOT__E_pcSel = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__pcSel;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__pcTarget 
        = (((~ (IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__pcSel)) 
            & (IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__bPredictedTaken))
            ? vlSelfRef.TB__DOT__uut__DOT__execute__DOT__pcPlus4
            : ((IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__isJalr)
                ? vlSelfRef.TB__DOT__uut__DOT__execute__DOT__aluResult
                : vlSelfRef.TB__DOT__uut__DOT__execute__DOT__pcPlusImm));
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__btbUpdate 
        = ((~ (IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__isJalr)) 
           & (IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__pcSel));
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__wrongBranch 
        = ((IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__bPredictedTaken) 
           ^ (IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__pcSel));
    vlSelfRef.TB__DOT__uut__DOT__M_readData = vlSelfRef.TB__DOT__uut__DOT__mem__DOT__readData;
    vlSelfRef.TB__DOT__uut__DOT__fetch__DOT__pcSelE 
        = vlSelfRef.TB__DOT__uut__DOT__E_pcSel;
    vlSelfRef.TB__DOT__uut__DOT__E_pcTarget = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__pcTarget;
    vlSelfRef.TB__DOT__uut__DOT__E_btbUpdate = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__btbUpdate;
    vlSelfRef.TB__DOT__uut__DOT__E_wrongBranch = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__wrongBranch;
    vlSelfRef.TB__DOT__uut__DOT__wback__DOT__readDataM 
        = vlSelfRef.TB__DOT__uut__DOT__M_readData;
    vlSelfRef.TB__DOT__uut__DOT__fetch__DOT__pcTargetE 
        = vlSelfRef.TB__DOT__uut__DOT__E_pcTarget;
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__exTaken 
        = vlSelfRef.TB__DOT__uut__DOT__E_btbUpdate;
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__wrongBranch 
        = vlSelfRef.TB__DOT__uut__DOT__E_wrongBranch;
    vlSelfRef.TB__DOT__uut__DOT__fetch__DOT__wrongBranchE 
        = vlSelfRef.TB__DOT__uut__DOT__E_wrongBranch;
    vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__wrongBranchE 
        = vlSelfRef.TB__DOT__uut__DOT__E_wrongBranch;
    __Vtableidx2 = (((IData)(vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__exTaken) 
                     << 2U) | (IData)(vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__exCounter));
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__nextCount 
        = Vtop__ConstPool__TABLE_he5e515f5_0[__Vtableidx2];
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__csrF__DOT__wrongBranch 
        = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__wrongBranch;
    __VdfgRegularize_h6e95ff9d_0_0 = (((IData)(vlSelfRef.TB__DOT__uut__DOT__fetch__DOT__wrongBranchE) 
                                       << 1U) | (IData)(vlSelfRef.TB__DOT__uut__DOT__fetch__DOT__bPredictTaken));
    vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__bStall 
        = vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__wrongBranchE;
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__exEntryUpdated = 0ULL;
    if (((IData)(vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__exEntry_) 
         & (vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__exTag 
            == vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__exTagBtb))) {
        vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__exEntryUpdated 
            = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__exEntry_;
        vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__exEntryUpdated 
            = ((0x1ffffffffffffff9ULL & vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__exEntryUpdated) 
               | ((QData)((IData)(vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__nextCount)) 
                  << 1U));
    } else if (vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__exTaken) {
        vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__exEntryUpdated 
            = (1ULL | (((QData)((IData)(vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__exTag)) 
                        << 0x00000023U) | ((QData)((IData)(vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__exTarget)) 
                                           << 3U)));
    }
    vlSelfRef.TB__DOT__uut__DOT__fetch__DOT__pc_ = 
        ((IData)(vlSelfRef.TB__DOT__uut__DOT__fetch__DOT__usePredictor)
          ? (((2U == (IData)(__VdfgRegularize_h6e95ff9d_0_0)) 
              | (3U == (IData)(__VdfgRegularize_h6e95ff9d_0_0)))
              ? vlSelfRef.TB__DOT__uut__DOT__fetch__DOT__pcTargetE
              : ((1U == (IData)(__VdfgRegularize_h6e95ff9d_0_0))
                  ? vlSelfRef.TB__DOT__uut__DOT__fetch__DOT__btbTarget
                  : vlSelfRef.TB__DOT__uut__DOT__fetch__DOT__pcPlus4))
          : ((IData)(vlSelfRef.TB__DOT__uut__DOT__fetch__DOT__pcSelE)
              ? vlSelfRef.TB__DOT__uut__DOT__fetch__DOT__pcTargetE
              : vlSelfRef.TB__DOT__uut__DOT__fetch__DOT__pcPlus4));
    vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__flushD 
        = vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__bStall;
    vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__flushE 
        = ((IData)(vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__bStall) 
           | (IData)(vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__lwStall));
    vlSelfRef.TB__DOT__uut__DOT__H_flushD = vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__flushD;
    vlSelfRef.TB__DOT__uut__DOT__H_flushE = vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__flushE;
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__flush 
        = vlSelfRef.TB__DOT__uut__DOT__H_flushD;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__flush 
        = vlSelfRef.TB__DOT__uut__DOT__H_flushE;
}

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = Vtop___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vtop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vtop___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vtop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge TB.uut.fetch.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge TB.uut.decode.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(posedge TB.uut.decode.regF.negClk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @(posedge TB.uut.decode.csrF.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @(posedge TB.uut.execute.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 5 is active: @(posedge TB.uut.mem.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 6U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 6 is active: @(posedge TB.uut.wback.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 7U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 7 is active: @(posedge TB.uut.bPredict.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 8U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 8 is active: @(posedge TB.uut.bPredict.u_percep.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 9U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 9 is active: @(posedge TB.uut.bPredict.u_percep.mem.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000aU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 10 is active: @(posedge TB.data.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000bU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 11 is active: @(posedge TB.uart.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->TB__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4556224701407582074ull);
    vlSelf->TB__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5628783647621761782ull);
    vlSelf->TB__DOT__usePredictor = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12767639479363473573ull);
    vlSelf->TB__DOT__imemRdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8158569324640065777ull);
    vlSelf->TB__DOT__imemAddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7886869671459217696ull);
    vlSelf->TB__DOT__dmemRdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 997764870649972112ull);
    vlSelf->TB__DOT__dmemRdataFinal = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11624018255774278149ull);
    vlSelf->TB__DOT__dmemWdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8371911387348890982ull);
    vlSelf->TB__DOT__dmemSize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12010915207496885547ull);
    vlSelf->TB__DOT__dmemWen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13511820468642164348ull);
    vlSelf->TB__DOT__dmemWenFinal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2550908399997467984ull);
    vlSelf->TB__DOT__dmemAddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7181546582981424471ull);
    vlSelf->TB__DOT__uartWen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11186661471324039524ull);
    vlSelf->TB__DOT__uartData = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16291309548898109326ull);
    vlSelf->TB__DOT__uut__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13683553235478423457ull);
    vlSelf->TB__DOT__uut__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2121996281522931307ull);
    vlSelf->TB__DOT__uut__DOT__usePredictor = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15844458240489156003ull);
    vlSelf->TB__DOT__uut__DOT__imemRdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14880378791429165823ull);
    vlSelf->TB__DOT__uut__DOT__imemAddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1151027292200161434ull);
    vlSelf->TB__DOT__uut__DOT__dmemRdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16828254584169728927ull);
    vlSelf->TB__DOT__uut__DOT__dmemWdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16061648867912699255ull);
    vlSelf->TB__DOT__uut__DOT__dmemSize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9487841903330878281ull);
    vlSelf->TB__DOT__uut__DOT__dmemWen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1118710966103953462ull);
    vlSelf->TB__DOT__uut__DOT__dmemAddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18183319343510898142ull);
    vlSelf->TB__DOT__uut__DOT__P_bPredictTaken = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14147019575668877878ull);
    vlSelf->TB__DOT__uut__DOT__P_btbTarget = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17478572646585354984ull);
    vlSelf->TB__DOT__uut__DOT__E_wrongBranch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16443552157544216075ull);
    vlSelf->TB__DOT__uut__DOT__E_pcTarget = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8871059254955933977ull);
    vlSelf->TB__DOT__uut__DOT__F_instr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1936461253604070893ull);
    vlSelf->TB__DOT__uut__DOT__F_pcPlus4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4766810798764757604ull);
    vlSelf->TB__DOT__uut__DOT__F_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9450249528927621156ull);
    vlSelf->TB__DOT__uut__DOT__F_bPredictedTaken = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8780306706519974010ull);
    vlSelf->TB__DOT__uut__DOT__D_rdAddr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2871517048313586777ull);
    vlSelf->TB__DOT__uut__DOT__D_r1Addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12218168005901529588ull);
    vlSelf->TB__DOT__uut__DOT__D_r2Addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3723462258844666679ull);
    vlSelf->TB__DOT__uut__DOT__D_bPredictedTaken = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6071654588478317945ull);
    vlSelf->TB__DOT__uut__DOT__D_regWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2514854042548842687ull);
    vlSelf->TB__DOT__uut__DOT__D_branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17869053742473043994ull);
    vlSelf->TB__DOT__uut__DOT__D_jump = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17796699453470285567ull);
    vlSelf->TB__DOT__uut__DOT__D_memWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17350451579173148124ull);
    vlSelf->TB__DOT__uut__DOT__D_useF7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12553979834453762776ull);
    vlSelf->TB__DOT__uut__DOT__D_useRegAdd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11536133528265172074ull);
    vlSelf->TB__DOT__uut__DOT__D_funct7_6 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2740827363950097160ull);
    vlSelf->TB__DOT__uut__DOT__D_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3690931532624434056ull);
    vlSelf->TB__DOT__uut__DOT__D_pcPlus4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6032062382566351401ull);
    vlSelf->TB__DOT__uut__DOT__D_a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7525416057428931824ull);
    vlSelf->TB__DOT__uut__DOT__D_b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 802482275093477050ull);
    vlSelf->TB__DOT__uut__DOT__D_immExt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2684695020460361437ull);
    vlSelf->TB__DOT__uut__DOT__D_funct3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9296093084692021655ull);
    vlSelf->TB__DOT__uut__DOT__D_aluSrcA = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4270402463271370647ull);
    vlSelf->TB__DOT__uut__DOT__D_regSrc = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5388354759355291745ull);
    vlSelf->TB__DOT__uut__DOT__D_csrOp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18101243217669718931ull);
    vlSelf->TB__DOT__uut__DOT__D_aluSrcB = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3672261534803349849ull);
    vlSelf->TB__DOT__uut__DOT__D_csrAddr = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 5519534666276569523ull);
    vlSelf->TB__DOT__uut__DOT__E_controlXfer = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3300440363570947669ull);
    vlSelf->TB__DOT__uut__DOT__E_validInst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8479181455579545823ull);
    vlSelf->TB__DOT__uut__DOT__E_rdAddr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8202586028219189996ull);
    vlSelf->TB__DOT__uut__DOT__E_loadStoreSize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3848966926952352438ull);
    vlSelf->TB__DOT__uut__DOT__E_aluResult = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17269537177351434795ull);
    vlSelf->TB__DOT__uut__DOT__E_writeData = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18411700544252647842ull);
    vlSelf->TB__DOT__uut__DOT__E_pcPlus4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 741533273584411856ull);
    vlSelf->TB__DOT__uut__DOT__E_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10484730736610512436ull);
    vlSelf->TB__DOT__uut__DOT__E_csrResult = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1952136758804812129ull);
    vlSelf->TB__DOT__uut__DOT__E_regWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6729722395462042931ull);
    vlSelf->TB__DOT__uut__DOT__E_memWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16093259131621737538ull);
    vlSelf->TB__DOT__uut__DOT__E_csrWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14391666105947436270ull);
    vlSelf->TB__DOT__uut__DOT__E_csrAddr = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 8911222346430585066ull);
    vlSelf->TB__DOT__uut__DOT__E_regSrc = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4828622852695373703ull);
    vlSelf->TB__DOT__uut__DOT__E_r1Addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4431694526154999902ull);
    vlSelf->TB__DOT__uut__DOT__E_r2Addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7395373853407113611ull);
    vlSelf->TB__DOT__uut__DOT__E_btbUpdate = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8898561801303244865ull);
    vlSelf->TB__DOT__uut__DOT__E_pcSel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3048339976406214857ull);
    vlSelf->TB__DOT__uut__DOT__E_branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 195534592205341526ull);
    vlSelf->TB__DOT__uut__DOT__E_btbTarget = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12455424718633735845ull);
    vlSelf->TB__DOT__uut__DOT__M_pcPlus4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4890374594812489226ull);
    vlSelf->TB__DOT__uut__DOT__M_aluResult = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14250308176431772951ull);
    vlSelf->TB__DOT__uut__DOT__M_readData = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4102868524243389578ull);
    vlSelf->TB__DOT__uut__DOT__M_csrResult = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15385464630829928893ull);
    vlSelf->TB__DOT__uut__DOT__M_rdAddr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9102419441108097384ull);
    vlSelf->TB__DOT__uut__DOT__M_regWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14444417020634848680ull);
    vlSelf->TB__DOT__uut__DOT__M_csrWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10329109815495195109ull);
    vlSelf->TB__DOT__uut__DOT__M_csrAddr = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 13743687318082097007ull);
    vlSelf->TB__DOT__uut__DOT__M_regSrc = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6882592072090053699ull);
    vlSelf->TB__DOT__uut__DOT__M_dmemSize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7826179256301400253ull);
    vlSelf->TB__DOT__uut__DOT__M_dmemWdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14684654537432635307ull);
    vlSelf->TB__DOT__uut__DOT__M_dmemAddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17843543389895816643ull);
    vlSelf->TB__DOT__uut__DOT__M_dmemRdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8632467573981903770ull);
    vlSelf->TB__DOT__uut__DOT__M_dmemWen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12583566190843475782ull);
    vlSelf->TB__DOT__uut__DOT__W_rd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15490424426912705184ull);
    vlSelf->TB__DOT__uut__DOT__W_csrResult = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9262753645049046511ull);
    vlSelf->TB__DOT__uut__DOT__W_rdAddr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12548239850338507810ull);
    vlSelf->TB__DOT__uut__DOT__W_csrAddr = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 7692294391070071202ull);
    vlSelf->TB__DOT__uut__DOT__W_regWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15058940268648409865ull);
    vlSelf->TB__DOT__uut__DOT__W_csrWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1164305195942104800ull);
    vlSelf->TB__DOT__uut__DOT__H_stallF = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1828424102427105385ull);
    vlSelf->TB__DOT__uut__DOT__H_fwdAE = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14318664135254210129ull);
    vlSelf->TB__DOT__uut__DOT__H_fwdBE = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 530281743221435958ull);
    vlSelf->TB__DOT__uut__DOT__H_flushE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7407714451001113891ull);
    vlSelf->TB__DOT__uut__DOT__H_flushD = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6590359454115829648ull);
    vlSelf->TB__DOT__uut__DOT__H_stallD = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11821570852800547303ull);
    vlSelf->TB__DOT__uut__DOT__hazard__DOT__fwdAE = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6609922706303408769ull);
    vlSelf->TB__DOT__uut__DOT__hazard__DOT__fwdBE = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16904503531921932332ull);
    vlSelf->TB__DOT__uut__DOT__hazard__DOT__flushE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11376318232779643938ull);
    vlSelf->TB__DOT__uut__DOT__hazard__DOT__flushD = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9177121463426672204ull);
    vlSelf->TB__DOT__uut__DOT__hazard__DOT__stallD = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 151961757496762380ull);
    vlSelf->TB__DOT__uut__DOT__hazard__DOT__stallF = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13812248996502131197ull);
    vlSelf->TB__DOT__uut__DOT__hazard__DOT__r1AddrE = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12326733070542747089ull);
    vlSelf->TB__DOT__uut__DOT__hazard__DOT__r2AddrE = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17485047950089932941ull);
    vlSelf->TB__DOT__uut__DOT__hazard__DOT__r1AddrD = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9853350843140615171ull);
    vlSelf->TB__DOT__uut__DOT__hazard__DOT__r2AddrD = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1848754478777253735ull);
    vlSelf->TB__DOT__uut__DOT__hazard__DOT__rdM = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 16411771142517571168ull);
    vlSelf->TB__DOT__uut__DOT__hazard__DOT__rdE = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11987314387976634995ull);
    vlSelf->TB__DOT__uut__DOT__hazard__DOT__rdW = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11695653386825036487ull);
    vlSelf->TB__DOT__uut__DOT__hazard__DOT__regWriteM = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5677256537793280655ull);
    vlSelf->TB__DOT__uut__DOT__hazard__DOT__regWriteW = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4624782813645445013ull);
    vlSelf->TB__DOT__uut__DOT__hazard__DOT__regSrcE0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9582692726724555056ull);
    vlSelf->TB__DOT__uut__DOT__hazard__DOT__wrongBranchE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 630218967621733416ull);
    vlSelf->TB__DOT__uut__DOT__hazard__DOT__r1EqMem = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8033491779332635701ull);
    vlSelf->TB__DOT__uut__DOT__hazard__DOT__r2EqMem = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1688396169551204933ull);
    vlSelf->TB__DOT__uut__DOT__hazard__DOT__r1EqW = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4759996725027606878ull);
    vlSelf->TB__DOT__uut__DOT__hazard__DOT__r2EqW = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9012848686066611097ull);
    vlSelf->TB__DOT__uut__DOT__hazard__DOT__lwStall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1487250688484711120ull);
    vlSelf->TB__DOT__uut__DOT__hazard__DOT__bStall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11445005005711752535ull);
    vlSelf->TB__DOT__uut__DOT__fetch__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14194348843276885366ull);
    vlSelf->TB__DOT__uut__DOT__fetch__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14251053035977783671ull);
    vlSelf->TB__DOT__uut__DOT__fetch__DOT__bPredictTaken = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2606486295196138115ull);
    vlSelf->TB__DOT__uut__DOT__fetch__DOT__usePredictor = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1906103142432638295ull);
    vlSelf->TB__DOT__uut__DOT__fetch__DOT__pcSelE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4377382716495820630ull);
    vlSelf->TB__DOT__uut__DOT__fetch__DOT__wrongBranchE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1838931938922022435ull);
    vlSelf->TB__DOT__uut__DOT__fetch__DOT__stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1499334692932198473ull);
    vlSelf->TB__DOT__uut__DOT__fetch__DOT__btbTarget = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9513240752761286333ull);
    vlSelf->TB__DOT__uut__DOT__fetch__DOT__pcTargetE = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13128042679605537397ull);
    vlSelf->TB__DOT__uut__DOT__fetch__DOT__imemAddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14841575950222677288ull);
    vlSelf->TB__DOT__uut__DOT__fetch__DOT__imemData = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1449332745449671758ull);
    vlSelf->TB__DOT__uut__DOT__fetch__DOT__instr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16984866553535968458ull);
    vlSelf->TB__DOT__uut__DOT__fetch__DOT__pcPlus4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10091157926800127924ull);
    vlSelf->TB__DOT__uut__DOT__fetch__DOT__pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3972526644417760250ull);
    vlSelf->TB__DOT__uut__DOT__fetch__DOT__bPredictedTaken = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10268504469562617038ull);
    vlSelf->TB__DOT__uut__DOT__fetch__DOT__pc_ = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 325428133353807977ull);
    vlSelf->TB__DOT__uut__DOT__decode__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8725725489083408423ull);
    vlSelf->TB__DOT__uut__DOT__decode__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6076437028528714052ull);
    vlSelf->TB__DOT__uut__DOT__decode__DOT__stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14810787246489139409ull);
    vlSelf->TB__DOT__uut__DOT__decode__DOT__flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3218386241669690648ull);
    vlSelf->TB__DOT__uut__DOT__decode__DOT__csrWriteW = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5783453580281879239ull);
    vlSelf->TB__DOT__uut__DOT__decode__DOT__csrAddrW = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 1434972650061831389ull);
    vlSelf->TB__DOT__uut__DOT__decode__DOT__csrResultW = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5805096295107380681ull);
    vlSelf->TB__DOT__uut__DOT__decode__DOT__wrongBranch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13043579201411451271ull);
    vlSelf->TB__DOT__uut__DOT__decode__DOT__controlXfer = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9690418958323902542ull);
    vlSelf->TB__DOT__uut__DOT__decode__DOT__validInst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2852970791428027743ull);
    vlSelf->TB__DOT__uut__DOT__decode__DOT__instrF = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16627287861831740315ull);
    vlSelf->TB__DOT__uut__DOT__decode__DOT__pcF = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12836302637317591841ull);
    vlSelf->TB__DOT__uut__DOT__decode__DOT__pcPlus4F = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5872307118665199904ull);
    vlSelf->TB__DOT__uut__DOT__decode__DOT__bPredictedTakenF = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5526842442673370828ull);
    vlSelf->TB__DOT__uut__DOT__decode__DOT__rdAddrW = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5522504155500222815ull);
    vlSelf->TB__DOT__uut__DOT__decode__DOT__regWriteW = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2707246681547159011ull);
    vlSelf->TB__DOT__uut__DOT__decode__DOT__rdW = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2023382978410684442ull);
    vlSelf->TB__DOT__uut__DOT__decode__DOT__rdAddr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9617494453308062642ull);
    vlSelf->TB__DOT__uut__DOT__decode__DOT__r1Addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17584709571707280040ull);
    vlSelf->TB__DOT__uut__DOT__decode__DOT__r2Addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12698695557522929512ull);
    vlSelf->TB__DOT__uut__DOT__decode__DOT__bPredictedTaken = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7655664435232896216ull);
    vlSelf->TB__DOT__uut__DOT__decode__DOT__regWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11834088621220054878ull);
    vlSelf->TB__DOT__uut__DOT__decode__DOT__memWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 914228659167760943ull);
    vlSelf->TB__DOT__uut__DOT__decode__DOT__branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16143985000243596300ull);
    vlSelf->TB__DOT__uut__DOT__decode__DOT__jump = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5517864523886485756ull);
    vlSelf->TB__DOT__uut__DOT__decode__DOT__useF7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14177316273110913445ull);
    vlSelf->TB__DOT__uut__DOT__decode__DOT__useRegAdd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4109971452955045251ull);
    vlSelf->TB__DOT__uut__DOT__decode__DOT__funct7_6 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 706276345894066070ull);
    vlSelf->TB__DOT__uut__DOT__decode__DOT__csrAddr = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 3304558400583692666ull);
    vlSelf->TB__DOT__uut__DOT__decode__DOT__pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6454259116130367008ull);
    vlSelf->TB__DOT__uut__DOT__decode__DOT__pcPlus4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5944993881900258637ull);
    vlSelf->TB__DOT__uut__DOT__decode__DOT__a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1370560904773393487ull);
    vlSelf->TB__DOT__uut__DOT__decode__DOT__b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12101672146262084720ull);
    vlSelf->TB__DOT__uut__DOT__decode__DOT__immExt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6060408427970440707ull);
    vlSelf->TB__DOT__uut__DOT__decode__DOT__funct3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 18182197618081475687ull);
    vlSelf->TB__DOT__uut__DOT__decode__DOT__aluSrcA = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17379280758281052774ull);
    vlSelf->TB__DOT__uut__DOT__decode__DOT__regSrc = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12870414892309679769ull);
    vlSelf->TB__DOT__uut__DOT__decode__DOT__csrOp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4356825230697993448ull);
    vlSelf->TB__DOT__uut__DOT__decode__DOT__aluSrcB = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3616400517288971109ull);
    vlSelf->TB__DOT__uut__DOT__decode__DOT__instrSv = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7527322218448666103ull);
    vlSelf->TB__DOT__uut__DOT__decode__DOT__pcSv = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1393221384816186664ull);
    vlSelf->TB__DOT__uut__DOT__decode__DOT__pcPlus4Sv = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1055905518457773606ull);
    vlSelf->TB__DOT__uut__DOT__decode__DOT__bPredictedTakenSv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11885019936679342291ull);
    vlSelf->TB__DOT__uut__DOT__decode__DOT__op = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 18046298338694942722ull);
    vlSelf->TB__DOT__uut__DOT__decode__DOT__immCntrl = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1657449244349909769ull);
    vlSelf->TB__DOT__uut__DOT__decode__DOT__immSrc = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 1540106258581726573ull);
    vlSelf->TB__DOT__uut__DOT__decode__DOT__zimm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3378762077609038547ull);
    vlSelf->TB__DOT__uut__DOT__decode__DOT__r2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4284373701382315724ull);
    vlSelf->TB__DOT__uut__DOT__decode__DOT__r1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6412408312849611681ull);
    vlSelf->TB__DOT__uut__DOT__decode__DOT__csr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8388006115976810219ull);
    vlSelf->TB__DOT__uut__DOT__decode__DOT__cntrlU__DOT__op = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8227823482711501232ull);
    vlSelf->TB__DOT__uut__DOT__decode__DOT__cntrlU__DOT__funct3 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16325417892985639246ull);
    vlSelf->TB__DOT__uut__DOT__decode__DOT__cntrlU__DOT__regWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11942711110231203874ull);
    vlSelf->TB__DOT__uut__DOT__decode__DOT__cntrlU__DOT__memWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8089812970065820817ull);
    vlSelf->TB__DOT__uut__DOT__decode__DOT__cntrlU__DOT__branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1646787900463862694ull);
    vlSelf->TB__DOT__uut__DOT__decode__DOT__cntrlU__DOT__jump = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1460784526870649850ull);
    vlSelf->TB__DOT__uut__DOT__decode__DOT__cntrlU__DOT__immCntrl = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14262732546835969374ull);
    vlSelf->TB__DOT__uut__DOT__decode__DOT__cntrlU__DOT__aluSrcA = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3524193203020695322ull);
    vlSelf->TB__DOT__uut__DOT__decode__DOT__cntrlU__DOT__useF7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1114009684761225371ull);
    vlSelf->TB__DOT__uut__DOT__decode__DOT__cntrlU__DOT__regSrc = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16639558565303415995ull);
    vlSelf->TB__DOT__uut__DOT__decode__DOT__cntrlU__DOT__useRegAdd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1620190453919571197ull);
    vlSelf->TB__DOT__uut__DOT__decode__DOT__cntrlU__DOT__aluSrcB = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3155513909372572583ull);
    vlSelf->TB__DOT__uut__DOT__decode__DOT__cntrlU__DOT__csrOp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1468966987105639154ull);
    vlSelf->TB__DOT__uut__DOT__decode__DOT__cntrlU__DOT__shift = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17079553289268304726ull);
    vlSelf->TB__DOT__uut__DOT__decode__DOT__cntrlU__DOT__wrongOpcode = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17616545129489313667ull);
    vlSelf->TB__DOT__uut__DOT__decode__DOT__extImm__DOT__immCntrl = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10311675719076113024ull);
    vlSelf->TB__DOT__uut__DOT__decode__DOT__extImm__DOT__immSrc = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 514992695903468449ull);
    vlSelf->TB__DOT__uut__DOT__decode__DOT__extImm__DOT__immExt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10736944278009970583ull);
    vlSelf->TB__DOT__uut__DOT__decode__DOT__regF__DOT__reg1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8677443020549634870ull);
    vlSelf->TB__DOT__uut__DOT__decode__DOT__regF__DOT__reg2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6716518581821583491ull);
    vlSelf->TB__DOT__uut__DOT__decode__DOT__regF__DOT__writeData = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11428433038879966099ull);
    vlSelf->TB__DOT__uut__DOT__decode__DOT__regF__DOT__addr1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9964551512198340240ull);
    vlSelf->TB__DOT__uut__DOT__decode__DOT__regF__DOT__addr2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 536567903323272564ull);
    vlSelf->TB__DOT__uut__DOT__decode__DOT__regF__DOT__writeAddr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4977950635365969851ull);
    vlSelf->TB__DOT__uut__DOT__decode__DOT__regF__DOT__writeEn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2613676037304837326ull);
    vlSelf->TB__DOT__uut__DOT__decode__DOT__regF__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12312325685957306724ull);
    vlSelf->TB__DOT__uut__DOT__decode__DOT__regF__DOT__negClk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18400810930768243954ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->TB__DOT__uut__DOT__decode__DOT__regF__DOT__registers[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16038098997648933864ull);
    }
    vlSelf->TB__DOT__uut__DOT__decode__DOT__csrF__DOT__csr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10774827698550361386ull);
    vlSelf->TB__DOT__uut__DOT__decode__DOT__csrF__DOT__wEn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16062473186877960695ull);
    vlSelf->TB__DOT__uut__DOT__decode__DOT__csrF__DOT__wData = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6649000920322372048ull);
    vlSelf->TB__DOT__uut__DOT__decode__DOT__csrF__DOT__wAddr = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 2417661594282116351ull);
    vlSelf->TB__DOT__uut__DOT__decode__DOT__csrF__DOT__wrongBranch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3512317786118791109ull);
    vlSelf->TB__DOT__uut__DOT__decode__DOT__csrF__DOT__validInst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3597063803192976217ull);
    vlSelf->TB__DOT__uut__DOT__decode__DOT__csrF__DOT__controlXfer = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13208925026938499597ull);
    vlSelf->TB__DOT__uut__DOT__decode__DOT__csrF__DOT__readAddr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10401268376137095252ull);
    vlSelf->TB__DOT__uut__DOT__decode__DOT__csrF__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1573507727702802334ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->TB__DOT__uut__DOT__decode__DOT__csrF__DOT__csRegisters[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10731480316504243541ull);
    }
    vlSelf->TB__DOT__uut__DOT__execute__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13498716186793288507ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11665617832258581352ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9556825534368969717ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__csrOpD = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17207160964723344478ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__fwdA = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6329646481975660084ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__fwdB = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14717497543172911689ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__aluResultM = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17617603344676330848ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__resultW = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13757215430033327126ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__pcD = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13860988574417821854ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__pcPlus4D = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5070737386006327284ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__aD = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16922276190140987485ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__bD = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13731531666063965007ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__immExtD = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13095406839233166987ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__bPredictedTakenD = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1968400959711939484ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__rdAddrD = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13815624405125178764ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__r1AddrD = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4926179079934826301ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__r2AddrD = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13480995443259325789ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__csrAddrD = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 3351932013996370792ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__regWriteD = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6222223583434209990ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__memWriteD = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1428504157679323563ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__branchD = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16486138510266786140ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__jumpD = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14536103132107083730ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__useF7D = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 407756111031237895ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__useRegAddD = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14382722681040993884ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__funct7_6D = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3413656087713475985ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__funct3D = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 296866386716316305ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__aluSrcAD = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 648524770546367380ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__regSrcD = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2157451022161207937ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__aluSrcBD = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17483981135313196663ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__loadStoreSize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7316575279645938859ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__r1Addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11445594713607825914ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__r2Addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17528202953394700744ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__rdAddr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13978454845479899161ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__aluResult = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16195422193094466708ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__writeData = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2448409758199546398ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__pcPlus4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11594824235966829082ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__pcTarget = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8079383500948207100ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__csrResult = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14906472262378987758ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__regWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6762545784061706615ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__memWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15995224795293294318ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__csrWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7131273089369852085ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__csrAddr = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 8646159504032313161ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__regSrc = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12049292406465209774ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__btbUpdate = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1442144120284716065ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__wrongBranch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9199072655854584306ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__pcSel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17047375133913819712ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 746637146380387773ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__controlXfer = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17915544370563801623ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__validInst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15957179061334943042ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6491713747036469192ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__btbTarget = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8750238717140567080ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__bPredictedTakenSv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1928773286697464379ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__rdAddrSv = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8557079225159404953ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__r1AddrSv = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14291444582989186289ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__r2AddrSv = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1852803956192484229ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__pcSv = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6099484291084129378ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__pcPlus4Sv = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 359574907669512657ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__regWriteSv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16972011094095325279ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__memWriteSv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 767331884578121699ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__branchSv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9834880814650069816ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__jumpSv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8578282357688625401ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__useF7Sv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14065636401592747486ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__useRegAddSv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16744956667343377385ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__funct7_6Sv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 878435716439361377ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__csrOpSv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4471137568396882312ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__csrAddrSv = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 1177194633242513961ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__aSv = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7592924131489396877ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__bSv = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4369935442913389089ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__immExtSv = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10607493582114454207ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__funct3Sv = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12794738248259297765ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__aluSrcASv = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18398010013166004216ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__regSrcSv = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10275796595802458095ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__aluSrcBSv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6359582836844726783ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 320628805903420149ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11027919796622658930ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__r1Hz = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17946115477109636020ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__r2Hz = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4429866306705209349ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__srcA = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14148806997651021916ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__srcB = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5208221626047129292ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__pcPlusImm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6942874069616226400ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__immExt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18141588509309855431ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__funct3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3938817381585376084ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__aluSrcA = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7061811056344103992ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__jump = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3398286896240724237ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__funct7_6 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15649690833382246380ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__branchFlag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17916138713958430595ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__isJalr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 615926500579703467ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__useRegAdd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 454142307423873313ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__bPredictedTaken = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11359676333111892978ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__useF7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9767023113410607654ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__csrRead = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10925874024308297534ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__aluSrcB = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1522814600770312822ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__alu__DOT__funct3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5081322284615087246ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__alu__DOT__funct7_6 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14148402803986738180ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__alu__DOT__branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13525477926638936882ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__alu__DOT__csrOp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14242795356454704112ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__alu__DOT__useF7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10031131363107687464ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__alu__DOT__useRegAdd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9509825971526852720ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__alu__DOT__srcA = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8616895153927894312ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__alu__DOT__srcB = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12747049110943582193ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__alu__DOT__aluResult = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18325908241634869073ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__alu__DOT__branchFlag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16334538489138118224ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__alu__DOT__zero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17527933243911259429ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__alu__DOT__inv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8363210173738912920ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__alu__DOT__f7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3834006693489753123ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__alu__DOT__aluCntrl = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15399583399947680204ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__alu__DOT__srcBlwr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2611826772727167194ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__csrU__DOT__r1Addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8453880146155965011ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__csrU__DOT__rdAddr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7022731748203946105ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__csrU__DOT__csrOp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14692007734496461664ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__csrU__DOT__funct3 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7779975115832906915ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__csrU__DOT__csr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4444655223059950357ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__csrU__DOT__rs1Uimm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13496897862656020604ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__csrU__DOT__csrResult = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7469507472758948860ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__csrU__DOT__csrRead = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13318412949040669600ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__csrU__DOT__csrWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14173023029789537771ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__csrU__DOT__csrReadIn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6241407885254158226ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__csrU__DOT__csrWriteIn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5418639164135372641ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__csrU__DOT__nrdIs0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6532057534513821572ull);
    vlSelf->TB__DOT__uut__DOT__execute__DOT__csrU__DOT__nrIs0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2179758223702749678ull);
    vlSelf->TB__DOT__uut__DOT__mem__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12877111907449299434ull);
    vlSelf->TB__DOT__uut__DOT__mem__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 407452783736970765ull);
    vlSelf->TB__DOT__uut__DOT__mem__DOT__regSrcE = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17809051738454987066ull);
    vlSelf->TB__DOT__uut__DOT__mem__DOT__regWriteE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18041640905306394360ull);
    vlSelf->TB__DOT__uut__DOT__mem__DOT__memWriteE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14916812268191241081ull);
    vlSelf->TB__DOT__uut__DOT__mem__DOT__csrWriteE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11820425778045384415ull);
    vlSelf->TB__DOT__uut__DOT__mem__DOT__csrAddrE = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 3318139630980376594ull);
    vlSelf->TB__DOT__uut__DOT__mem__DOT__aluResultE = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6642617788166383497ull);
    vlSelf->TB__DOT__uut__DOT__mem__DOT__writeDataE = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18048957716642905139ull);
    vlSelf->TB__DOT__uut__DOT__mem__DOT__pcPlus4E = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 194499594491326534ull);
    vlSelf->TB__DOT__uut__DOT__mem__DOT__dmemRdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2472346216738066843ull);
    vlSelf->TB__DOT__uut__DOT__mem__DOT__csrResultE = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6927739179515939154ull);
    vlSelf->TB__DOT__uut__DOT__mem__DOT__rdAddrE = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15452746895449868455ull);
    vlSelf->TB__DOT__uut__DOT__mem__DOT__loadStoreSizeE = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 21357675904132823ull);
    vlSelf->TB__DOT__uut__DOT__mem__DOT__pcPlus4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15001235336821071686ull);
    vlSelf->TB__DOT__uut__DOT__mem__DOT__readData = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5790227112207362731ull);
    vlSelf->TB__DOT__uut__DOT__mem__DOT__rdAddr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 719484499072493365ull);
    vlSelf->TB__DOT__uut__DOT__mem__DOT__regWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2491890717288587836ull);
    vlSelf->TB__DOT__uut__DOT__mem__DOT__csrWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16020007781229825029ull);
    vlSelf->TB__DOT__uut__DOT__mem__DOT__regSrc = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7227698473159231760ull);
    vlSelf->TB__DOT__uut__DOT__mem__DOT__aluResult = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4128635887025464787ull);
    vlSelf->TB__DOT__uut__DOT__mem__DOT__csrResult = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13514895172071472947ull);
    vlSelf->TB__DOT__uut__DOT__mem__DOT__csrAddr = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 6402130473844594692ull);
    vlSelf->TB__DOT__uut__DOT__mem__DOT__dmemSize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8239408861415474852ull);
    vlSelf->TB__DOT__uut__DOT__mem__DOT__dmemWdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4110010061693867180ull);
    vlSelf->TB__DOT__uut__DOT__mem__DOT__dmemAddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8625126949298919198ull);
    vlSelf->TB__DOT__uut__DOT__mem__DOT__dmemWen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13280488514860387715ull);
    vlSelf->TB__DOT__uut__DOT__mem__DOT__aluResultSv = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15874627888963609962ull);
    vlSelf->TB__DOT__uut__DOT__mem__DOT__writeDataSv = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 566984340362647993ull);
    vlSelf->TB__DOT__uut__DOT__mem__DOT__csrResultSv = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8148696984219550330ull);
    vlSelf->TB__DOT__uut__DOT__mem__DOT__csrAddrSv = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 3728054605459608936ull);
    vlSelf->TB__DOT__uut__DOT__mem__DOT__rdAddrSv = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5923869220195396409ull);
    vlSelf->TB__DOT__uut__DOT__mem__DOT__pcPlus4Sv = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14285392594801170300ull);
    vlSelf->TB__DOT__uut__DOT__mem__DOT__loadStoreSizeSv = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3690158139036861865ull);
    vlSelf->TB__DOT__uut__DOT__mem__DOT__regWriteSv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3279713445344090579ull);
    vlSelf->TB__DOT__uut__DOT__mem__DOT__csrWriteSv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15917555565505707430ull);
    vlSelf->TB__DOT__uut__DOT__mem__DOT__memWriteSv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2083960321905844636ull);
    vlSelf->TB__DOT__uut__DOT__mem__DOT__regSrcSv = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17347826703923614667ull);
    vlSelf->TB__DOT__uut__DOT__mem__DOT__writeData = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17993303525087506234ull);
    vlSelf->TB__DOT__uut__DOT__mem__DOT__memWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4259153692911528839ull);
    vlSelf->TB__DOT__uut__DOT__wback__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3032973184787930923ull);
    vlSelf->TB__DOT__uut__DOT__wback__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3817862404168341153ull);
    vlSelf->TB__DOT__uut__DOT__wback__DOT__regSrcM = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14401037434621777380ull);
    vlSelf->TB__DOT__uut__DOT__wback__DOT__csrAddrM = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 7391945791018947651ull);
    vlSelf->TB__DOT__uut__DOT__wback__DOT__regWriteM = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6247987183925394156ull);
    vlSelf->TB__DOT__uut__DOT__wback__DOT__csrWriteM = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8551331969824638928ull);
    vlSelf->TB__DOT__uut__DOT__wback__DOT__rdAddrM = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5169583447573212853ull);
    vlSelf->TB__DOT__uut__DOT__wback__DOT__aluResultM = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12846182708288092124ull);
    vlSelf->TB__DOT__uut__DOT__wback__DOT__readDataM = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11445974790748545566ull);
    vlSelf->TB__DOT__uut__DOT__wback__DOT__pcPlus4M = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10458037853345042505ull);
    vlSelf->TB__DOT__uut__DOT__wback__DOT__csrResultM = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10215588910908290114ull);
    vlSelf->TB__DOT__uut__DOT__wback__DOT__regWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16537893920521767947ull);
    vlSelf->TB__DOT__uut__DOT__wback__DOT__csrWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4668733765098805912ull);
    vlSelf->TB__DOT__uut__DOT__wback__DOT__csrAddr = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 15409603798359065335ull);
    vlSelf->TB__DOT__uut__DOT__wback__DOT__rdAddr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9810333764283923446ull);
    vlSelf->TB__DOT__uut__DOT__wback__DOT__regResult = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6360055501127198484ull);
    vlSelf->TB__DOT__uut__DOT__wback__DOT__csrResult = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6205228843615254098ull);
    vlSelf->TB__DOT__uut__DOT__wback__DOT__readDataSv = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2295628224086448150ull);
    vlSelf->TB__DOT__uut__DOT__wback__DOT__pcPlus4Sv = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5737733046727723700ull);
    vlSelf->TB__DOT__uut__DOT__wback__DOT__aluResultSv = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4841994769027238801ull);
    vlSelf->TB__DOT__uut__DOT__wback__DOT__csrResultSv = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5871719730302047228ull);
    vlSelf->TB__DOT__uut__DOT__wback__DOT__rdAddrSv = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8772742941315830934ull);
    vlSelf->TB__DOT__uut__DOT__wback__DOT__regWriteSv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10045594995147982498ull);
    vlSelf->TB__DOT__uut__DOT__wback__DOT__csrWriteSv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6315442753540261032ull);
    vlSelf->TB__DOT__uut__DOT__wback__DOT__regSrcSv = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12617496143430149332ull);
    vlSelf->TB__DOT__uut__DOT__wback__DOT__csrAddrSv = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 3270977661524329295ull);
    vlSelf->TB__DOT__uut__DOT__wback__DOT__regSrc = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14763332841753596977ull);
    vlSelf->TB__DOT__uut__DOT__bPredict__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3784475082169801867ull);
    vlSelf->TB__DOT__uut__DOT__bPredict__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6756441453073227055ull);
    vlSelf->TB__DOT__uut__DOT__bPredict__DOT__fetchPc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1297570057525397313ull);
    vlSelf->TB__DOT__uut__DOT__bPredict__DOT__fetchHit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8634015115712175472ull);
    vlSelf->TB__DOT__uut__DOT__bPredict__DOT__fetchTarget = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17300457899360067681ull);
    vlSelf->TB__DOT__uut__DOT__bPredict__DOT__exTaken = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9116427870414637398ull);
    vlSelf->TB__DOT__uut__DOT__bPredict__DOT__exBranch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11540189267250712976ull);
    vlSelf->TB__DOT__uut__DOT__bPredict__DOT__exPc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9596656346691823960ull);
    vlSelf->TB__DOT__uut__DOT__bPredict__DOT__exTarget = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4176047986167912691ull);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->TB__DOT__uut__DOT__bPredict__DOT__btb_mem[__Vi0] = VL_SCOPED_RAND_RESET_Q(61, __VscopeHash, 7214962507745523765ull);
    }
    vlSelf->TB__DOT__uut__DOT__bPredict__DOT__fetchIndex = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 12280874760547747124ull);
    vlSelf->TB__DOT__uut__DOT__bPredict__DOT__exIndex = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 11581395086313589766ull);
    vlSelf->TB__DOT__uut__DOT__bPredict__DOT__fetchTag = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 4432047001639981920ull);
    vlSelf->TB__DOT__uut__DOT__bPredict__DOT__exTag = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 14123456504150051555ull);
    vlSelf->TB__DOT__uut__DOT__bPredict__DOT__fetchTagBtb = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 10075913950738682829ull);
    vlSelf->TB__DOT__uut__DOT__bPredict__DOT__exTagBtb = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 665323253203053272ull);
    vlSelf->TB__DOT__uut__DOT__bPredict__DOT__fetchCounter = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16919061847285342519ull);
    vlSelf->TB__DOT__uut__DOT__bPredict__DOT__exCounter = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10914018103371184131ull);
    vlSelf->TB__DOT__uut__DOT__bPredict__DOT__fetchEntry = VL_SCOPED_RAND_RESET_Q(61, __VscopeHash, 17767549232832427078ull);
    vlSelf->TB__DOT__uut__DOT__bPredict__DOT__exEntry_ = VL_SCOPED_RAND_RESET_Q(61, __VscopeHash, 15357810718267660882ull);
    vlSelf->TB__DOT__uut__DOT__bPredict__DOT__exEntryUpdated = VL_SCOPED_RAND_RESET_Q(61, __VscopeHash, 14829429026478171107ull);
    vlSelf->TB__DOT__uut__DOT__bPredict__DOT__count = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 379601518812043102ull);
    vlSelf->TB__DOT__uut__DOT__bPredict__DOT__nextCount = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 261806971813622238ull);
    vlSelf->TB__DOT__uut__DOT__bPredict__DOT__exHit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4700028782885543468ull);
    vlSelf->TB__DOT__uut__DOT__bPredict__DOT__ghr_local = VL_SCOPED_RAND_RESET_I(28, __VscopeHash, 3917923827743236511ull);
    vlSelf->TB__DOT__uut__DOT__bPredict__DOT__percep_req_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2212732364194922873ull);
    vlSelf->TB__DOT__uut__DOT__bPredict__DOT__percep_req_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 924643521624639423ull);
    vlSelf->TB__DOT__uut__DOT__bPredict__DOT__percep_pred_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3330467561082347187ull);
    vlSelf->TB__DOT__uut__DOT__bPredict__DOT__percep_pred_taken = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11666132437087521679ull);
    vlSelf->TB__DOT__uut__DOT__bPredict__DOT__percep_pred_conf = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16735682588192190889ull);
    vlSelf->TB__DOT__uut__DOT__bPredict__DOT__percep_train_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17961907808628764237ull);
    vlSelf->TB__DOT__uut__DOT__bPredict__DOT__percep_train_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1272410004274077907ull);
    vlSelf->TB__DOT__uut__DOT__bPredict__DOT__percep_train_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15401607242816544259ull);
    vlSelf->TB__DOT__uut__DOT__bPredict__DOT__percep_train_taken = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4345200192601606825ull);
    vlSelf->TB__DOT__uut__DOT__bPredict__DOT__percep_train_ghr = VL_SCOPED_RAND_RESET_I(28, __VscopeHash, 12291915515670874493ull);
    vlSelf->TB__DOT__uut__DOT__bPredict__DOT__percep_req_ghr = VL_SCOPED_RAND_RESET_I(28, __VscopeHash, 1688747734075532782ull);
    vlSelf->TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2777196639508154400ull);
    vlSelf->TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6273261752313780727ull);
    vlSelf->TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__req_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11440266437530266428ull);
    vlSelf->TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__req_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9206848021585508852ull);
    vlSelf->TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__req_ghr = VL_SCOPED_RAND_RESET_I(28, __VscopeHash, 9246689120111998878ull);
    vlSelf->TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__req_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3227251990236701745ull);
    vlSelf->TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__pred_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8304621084202046668ull);
    vlSelf->TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__pred_taken = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9301455684288534276ull);
    vlSelf->TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__pred_conf = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15847749250748774320ull);
    vlSelf->TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__train_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2937045295628411989ull);
    vlSelf->TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__train_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9204922526241929521ull);
    vlSelf->TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__train_taken = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8568624409573996027ull);
    vlSelf->TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__train_ghr = VL_SCOPED_RAND_RESET_I(28, __VscopeHash, 13606202968857754305ull);
    vlSelf->TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__train_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5370906881255405606ull);
    vlSelf->TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__req_idx = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17527600829608681575ull);
    vlSelf->TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__train_idx = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 7370835573119539586ull);
    vlSelf->TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__rd_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6406357163764386932ull);
    vlSelf->TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__rd_idx = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4734413124633645616ull);
    vlSelf->TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__rd_v = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16233618317059870497ull);
    VL_SCOPED_RAND_RESET_W(232, vlSelf->TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__rd_data, __VscopeHash, 2726246020416103366ull);
    vlSelf->TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 741600593130326192ull);
    vlSelf->TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__wr_idx = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4039971010728878480ull);
    VL_SCOPED_RAND_RESET_W(232, vlSelf->TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__wr_data, __VscopeHash, 14908579577515039281ull);
    vlSelf->TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14646141106833779937ull);
    vlSelf->TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__ghr_latched = VL_SCOPED_RAND_RESET_I(28, __VscopeHash, 6419307557289436252ull);
    VL_SCOPED_RAND_RESET_W(232, vlSelf->TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__packed_vec, __VscopeHash, 9716440204650362841ull);
    vlSelf->TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__accum = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17431649164895772412ull);
    for (int __Vi0 = 0; __Vi0 < 29; ++__Vi0) {
        vlSelf->TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__weight_arr[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1168297964880859134ull);
    }
    vlSelf->TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2627577739650792460ull);
    vlSelf->TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__msb = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6409498665181336046ull);
    vlSelf->TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__tmpv = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7269843667838628871ull);
    vlSelf->TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__delta = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9396948638874563290ull);
    vlSelf->TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__t_signed = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17694011260394704725ull);
    vlSelf->TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__wrong = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17852937762868666005ull);
    VL_SCOPED_RAND_RESET_W(232, vlSelf->TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__unnamedblk1__DOT__newpack, __VscopeHash, 16040534368011527689ull);
    vlSelf->TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT____Vlvbound_hf5eb4660__0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5984837922375616860ull);
    vlSelf->TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT____Vlvbound_hf5eb4660__1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1094076171212042215ull);
    vlSelf->TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT____Vlvbound_hf5eb4660__2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12249552618995979796ull);
    vlSelf->TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT____Vlvbound_hc0686a0f__0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8808816736692483563ull);
    vlSelf->TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT____Vlvbound_hc0686a0f__1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2833104398692632378ull);
    vlSelf->TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2684571899057596742ull);
    vlSelf->TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8863600021207826870ull);
    vlSelf->TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__rd_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5969883296754092602ull);
    vlSelf->TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__rd_idx = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16962812439077209987ull);
    vlSelf->TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__rd_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7811678757032617445ull);
    VL_SCOPED_RAND_RESET_W(232, vlSelf->TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__rd_data, __VscopeHash, 2088560623018477195ull);
    vlSelf->TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4390534511076319903ull);
    vlSelf->TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__wr_idx = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 2259860611606169885ull);
    VL_SCOPED_RAND_RESET_W(232, vlSelf->TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__wr_data, __VscopeHash, 9413445034988706083ull);
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(232, vlSelf->TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__mem[__Vi0], __VscopeHash, 5844921927009790402ull);
    }
    vlSelf->TB__DOT__instr__DOT__rData = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1896421955797663293ull);
    vlSelf->TB__DOT__instr__DOT__rAddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3220062012196682695ull);
    vlSelf->TB__DOT__instr__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1511858950746834212ull);
    for (int __Vi0 = 0; __Vi0 < 16383; ++__Vi0) {
        vlSelf->TB__DOT__instr__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3724048836259196135ull);
    }
    vlSelf->TB__DOT__data__DOT__wData = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7285342058079306665ull);
    vlSelf->TB__DOT__data__DOT__rData = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10200365857005992480ull);
    vlSelf->TB__DOT__data__DOT__addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17905444450290984677ull);
    vlSelf->TB__DOT__data__DOT__size = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12566278303697112935ull);
    vlSelf->TB__DOT__data__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8924813549338705549ull);
    vlSelf->TB__DOT__data__DOT__wEn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6525226200162658945ull);
    for (int __Vi0 = 0; __Vi0 < 32768; ++__Vi0) {
        vlSelf->TB__DOT__data__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4978271531288362725ull);
    }
    vlSelf->TB__DOT__data__DOT__addrplus1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9421637351502430767ull);
    vlSelf->TB__DOT__data__DOT__addrplus2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9542151951896009001ull);
    vlSelf->TB__DOT__data__DOT__addrplus3 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15706107282073173810ull);
    vlSelf->TB__DOT__data__DOT__addrMinusOff = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9429519185450995496ull);
    vlSelf->TB__DOT__uart__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16315130747537914959ull);
    vlSelf->TB__DOT__uart__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2665234541108480026ull);
    vlSelf->TB__DOT__uart__DOT__wEn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4892677003927209278ull);
    vlSelf->TB__DOT__uart__DOT__data = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15540638998592151983ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__TB__DOT__uut__DOT__fetch__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14971328393134390484ull);
    vlSelf->__Vtrigprevexpr___TOP__TB__DOT__uut__DOT__decode__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7028661126072160522ull);
    vlSelf->__Vtrigprevexpr___TOP__TB__DOT__uut__DOT__decode__DOT__regF__DOT__negClk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7005402399078321464ull);
    vlSelf->__Vtrigprevexpr___TOP__TB__DOT__uut__DOT__decode__DOT__csrF__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 212243121961206796ull);
    vlSelf->__Vtrigprevexpr___TOP__TB__DOT__uut__DOT__execute__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12620244394484758005ull);
    vlSelf->__Vtrigprevexpr___TOP__TB__DOT__uut__DOT__mem__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8292876452589391147ull);
    vlSelf->__Vtrigprevexpr___TOP__TB__DOT__uut__DOT__wback__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14969926801708719339ull);
    vlSelf->__Vtrigprevexpr___TOP__TB__DOT__uut__DOT__bPredict__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13390706389806206746ull);
    vlSelf->__Vtrigprevexpr___TOP__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14691397207284332160ull);
    vlSelf->__Vtrigprevexpr___TOP__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5671675220826622128ull);
    vlSelf->__Vtrigprevexpr___TOP__TB__DOT__data__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18186039762979085156ull);
    vlSelf->__Vtrigprevexpr___TOP__TB__DOT__uart__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12054021223425592725ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
