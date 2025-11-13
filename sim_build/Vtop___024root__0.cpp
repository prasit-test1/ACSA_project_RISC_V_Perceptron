// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VicoFirstIteration)));
    vlSelfRef.__VicoFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
}

bool Vtop___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__ico\n"); );
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

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
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
    vlSelfRef.TB__DOT__data__DOT__clk = vlSelfRef.TB__DOT__clk;
    vlSelfRef.TB__DOT__uart__DOT__clk = vlSelfRef.TB__DOT__clk;
    vlSelfRef.TB__DOT__instr__DOT__clk = vlSelfRef.TB__DOT__clk;
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
    vlSelfRef.TB__DOT__uut__DOT__clk = vlSelfRef.TB__DOT__clk;
    vlSelfRef.TB__DOT__uut__DOT__mem__DOT__memWrite 
        = vlSelfRef.TB__DOT__uut__DOT__mem__DOT__memWriteSv;
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
    vlSelfRef.TB__DOT__uut__DOT__fetch__DOT__clk = vlSelfRef.TB__DOT__uut__DOT__clk;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__clk 
        = vlSelfRef.TB__DOT__uut__DOT__clk;
    vlSelfRef.TB__DOT__uut__DOT__mem__DOT__clk = vlSelfRef.TB__DOT__uut__DOT__clk;
    vlSelfRef.TB__DOT__uut__DOT__wback__DOT__clk = vlSelfRef.TB__DOT__uut__DOT__clk;
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__clk 
        = vlSelfRef.TB__DOT__uut__DOT__clk;
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__clk = vlSelfRef.TB__DOT__uut__DOT__clk;
    vlSelfRef.TB__DOT__uut__DOT__mem__DOT__dmemWen 
        = vlSelfRef.TB__DOT__uut__DOT__mem__DOT__memWrite;
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
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__clk 
        = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__clk;
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__csrF__DOT__clk 
        = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__clk;
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__regF__DOT__clk 
        = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__clk;
    vlSelfRef.TB__DOT__uut__DOT__M_dmemWen = vlSelfRef.TB__DOT__uut__DOT__mem__DOT__dmemWen;
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
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__clk 
        = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__clk;
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__regF__DOT__negClk 
        = (1U & (~ (IData)(vlSelfRef.TB__DOT__uut__DOT__decode__DOT__regF__DOT__clk)));
    vlSelfRef.TB__DOT__uut__DOT__dmemWen = vlSelfRef.TB__DOT__uut__DOT__M_dmemWen;
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

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtop___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = Vtop___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        Vtop___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    (((((((IData)(vlSelfRef.TB__DOT__uart__DOT__clk) 
                                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__TB__DOT__uart__DOT__clk__0))) 
                                                         << 3U) 
                                                        | (((IData)(vlSelfRef.TB__DOT__data__DOT__clk) 
                                                            & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__TB__DOT__data__DOT__clk__0))) 
                                                           << 2U)) 
                                                       | ((((IData)(vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__clk) 
                                                            & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__clk__0))) 
                                                           << 1U) 
                                                          | ((IData)(vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__clk) 
                                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__clk__0))))) 
                                                      << 8U) 
                                                     | (((((((IData)(vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__clk) 
                                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__TB__DOT__uut__DOT__bPredict__DOT__clk__0))) 
                                                            << 3U) 
                                                           | (((IData)(vlSelfRef.TB__DOT__uut__DOT__wback__DOT__clk) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__TB__DOT__uut__DOT__wback__DOT__clk__0))) 
                                                              << 2U)) 
                                                          | ((((IData)(vlSelfRef.TB__DOT__uut__DOT__mem__DOT__clk) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__TB__DOT__uut__DOT__mem__DOT__clk__0))) 
                                                              << 1U) 
                                                             | ((IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__clk) 
                                                                & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__TB__DOT__uut__DOT__execute__DOT__clk__0))))) 
                                                         << 4U) 
                                                        | (((((IData)(vlSelfRef.TB__DOT__uut__DOT__decode__DOT__csrF__DOT__clk) 
                                                              & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__TB__DOT__uut__DOT__decode__DOT__csrF__DOT__clk__0))) 
                                                             << 3U) 
                                                            | (((IData)(vlSelfRef.TB__DOT__uut__DOT__decode__DOT__regF__DOT__negClk) 
                                                                & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__TB__DOT__uut__DOT__decode__DOT__regF__DOT__negClk__0))) 
                                                               << 2U)) 
                                                           | ((((IData)(vlSelfRef.TB__DOT__uut__DOT__decode__DOT__clk) 
                                                                & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__TB__DOT__uut__DOT__decode__DOT__clk__0))) 
                                                               << 1U) 
                                                              | ((IData)(vlSelfRef.TB__DOT__uut__DOT__fetch__DOT__clk) 
                                                                 & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__TB__DOT__uut__DOT__fetch__DOT__clk__0)))))))));
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
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool Vtop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__act\n"); );
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

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlSelfRef.TB__DOT__uart__DOT__rst)) 
                      & (IData)(vlSelfRef.TB__DOT__uart__DOT__wEn))))) {
        VL_WRITEF_NX("%c",0,8,vlSelfRef.TB__DOT__uart__DOT__data);
    }
}

void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<8>/*231:0*/ __VdlyVal__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__mem__v0;
    VL_ZERO_W(232, __VdlyVal__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__mem__v0);
    CData/*6:0*/ __VdlyDim0__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__mem__v0;
    __VdlyDim0__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__mem__v0;
    __VdlySet__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__mem__v0 = 0;
    // Body
    __VdlySet__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__mem__v0 = 0U;
    if ((1U & (~ (IData)(vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__rst)))) {
        if (vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__wr_en) {
            __VdlyVal__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__mem__v0[0U] 
                = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__wr_data[0U];
            __VdlyVal__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__mem__v0[1U] 
                = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__wr_data[1U];
            __VdlyVal__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__mem__v0[2U] 
                = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__wr_data[2U];
            __VdlyVal__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__mem__v0[3U] 
                = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__wr_data[3U];
            __VdlyVal__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__mem__v0[4U] 
                = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__wr_data[4U];
            __VdlyVal__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__mem__v0[5U] 
                = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__wr_data[5U];
            __VdlyVal__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__mem__v0[6U] 
                = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__wr_data[6U];
            __VdlyVal__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__mem__v0[7U] 
                = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__wr_data[7U];
            __VdlyDim0__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__mem__v0 
                = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__wr_idx;
            __VdlySet__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__mem__v0 = 1U;
        }
        if (vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__rd_en) {
            vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__rd_data[0U] 
                = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__mem
                [vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__rd_idx][0U];
            vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__rd_data[1U] 
                = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__mem
                [vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__rd_idx][1U];
            vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__rd_data[2U] 
                = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__mem
                [vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__rd_idx][2U];
            vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__rd_data[3U] 
                = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__mem
                [vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__rd_idx][3U];
            vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__rd_data[4U] 
                = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__mem
                [vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__rd_idx][4U];
            vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__rd_data[5U] 
                = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__mem
                [vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__rd_idx][5U];
            vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__rd_data[6U] 
                = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__mem
                [vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__rd_idx][6U];
            vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__rd_data[7U] 
                = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__mem
                [vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__rd_idx][7U];
        }
    }
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__rd_valid 
        = ((1U & (~ (IData)(vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__rst))) 
           && (IData)(vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__rd_en));
    if (__VdlySet__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__mem__v0) {
        vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__mem[__VdlyDim0__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__mem__v0][0U] 
            = __VdlyVal__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__mem__v0[0U];
        vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__mem[__VdlyDim0__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__mem__v0][1U] 
            = __VdlyVal__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__mem__v0[1U];
        vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__mem[__VdlyDim0__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__mem__v0][2U] 
            = __VdlyVal__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__mem__v0[2U];
        vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__mem[__VdlyDim0__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__mem__v0][3U] 
            = __VdlyVal__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__mem__v0[3U];
        vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__mem[__VdlyDim0__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__mem__v0][4U] 
            = __VdlyVal__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__mem__v0[4U];
        vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__mem[__VdlyDim0__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__mem__v0][5U] 
            = __VdlyVal__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__mem__v0[5U];
        vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__mem[__VdlyDim0__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__mem__v0][6U] 
            = __VdlyVal__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__mem__v0[6U];
        vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__mem[__VdlyDim0__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__mem__v0][7U] 
            = __VdlyVal__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__mem__v0[7U];
    }
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__rd_v 
        = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__rd_valid;
}

void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*60:0*/ __VdlyVal__TB__DOT__uut__DOT__bPredict__DOT__btb_mem__v0;
    __VdlyVal__TB__DOT__uut__DOT__bPredict__DOT__btb_mem__v0 = 0;
    CData/*5:0*/ __VdlyDim0__TB__DOT__uut__DOT__bPredict__DOT__btb_mem__v0;
    __VdlyDim0__TB__DOT__uut__DOT__bPredict__DOT__btb_mem__v0 = 0;
    CData/*0:0*/ __VdlySet__TB__DOT__uut__DOT__bPredict__DOT__btb_mem__v0;
    __VdlySet__TB__DOT__uut__DOT__bPredict__DOT__btb_mem__v0 = 0;
    // Body
    __VdlySet__TB__DOT__uut__DOT__bPredict__DOT__btb_mem__v0 = 0U;
    if ((1U & (~ (IData)(vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__rst)))) {
        if (vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__exBranch) {
            vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__ghr_local 
                = ((0x0ffffffeU & vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__ghr_local) 
                   | (IData)(vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__exTaken));
            vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__percep_train_taken 
                = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__exTaken;
            vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__percep_train_pc 
                = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__exPc;
        }
        if (((IData)(vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__exHit) 
             | (IData)(vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__exTaken))) {
            __VdlyVal__TB__DOT__uut__DOT__bPredict__DOT__btb_mem__v0 
                = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__exEntryUpdated;
            __VdlyDim0__TB__DOT__uut__DOT__bPredict__DOT__btb_mem__v0 
                = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__exIndex;
            __VdlySet__TB__DOT__uut__DOT__bPredict__DOT__btb_mem__v0 = 1U;
        }
        vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__percep_train_valid 
            = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__exBranch;
    }
    if (__VdlySet__TB__DOT__uut__DOT__bPredict__DOT__btb_mem__v0) {
        vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__btb_mem[__VdlyDim0__TB__DOT__uut__DOT__bPredict__DOT__btb_mem__v0] 
            = __VdlyVal__TB__DOT__uut__DOT__bPredict__DOT__btb_mem__v0;
    }
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__percep_req_ghr 
        = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__ghr_local;
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__percep_train_ghr 
        = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__ghr_local;
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__train_pc 
        = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__percep_train_pc;
}

void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VdlyVal__TB__DOT__uut__DOT__decode__DOT__regF__DOT__registers__v0;
    __VdlyVal__TB__DOT__uut__DOT__decode__DOT__regF__DOT__registers__v0 = 0;
    CData/*4:0*/ __VdlyDim0__TB__DOT__uut__DOT__decode__DOT__regF__DOT__registers__v0;
    __VdlyDim0__TB__DOT__uut__DOT__decode__DOT__regF__DOT__registers__v0 = 0;
    CData/*0:0*/ __VdlySet__TB__DOT__uut__DOT__decode__DOT__regF__DOT__registers__v0;
    __VdlySet__TB__DOT__uut__DOT__decode__DOT__regF__DOT__registers__v0 = 0;
    // Body
    __VdlySet__TB__DOT__uut__DOT__decode__DOT__regF__DOT__registers__v0 = 0U;
    if (((IData)(vlSelfRef.TB__DOT__uut__DOT__decode__DOT__regF__DOT__writeEn) 
         & (0U != (IData)(vlSelfRef.TB__DOT__uut__DOT__decode__DOT__regF__DOT__writeAddr)))) {
        __VdlyVal__TB__DOT__uut__DOT__decode__DOT__regF__DOT__registers__v0 
            = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__regF__DOT__writeData;
        __VdlyDim0__TB__DOT__uut__DOT__decode__DOT__regF__DOT__registers__v0 
            = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__regF__DOT__writeAddr;
        __VdlySet__TB__DOT__uut__DOT__decode__DOT__regF__DOT__registers__v0 = 1U;
    }
    if (__VdlySet__TB__DOT__uut__DOT__decode__DOT__regF__DOT__registers__v0) {
        vlSelfRef.TB__DOT__uut__DOT__decode__DOT__regF__DOT__registers[__VdlyDim0__TB__DOT__uut__DOT__decode__DOT__regF__DOT__registers__v0] 
            = __VdlyVal__TB__DOT__uut__DOT__decode__DOT__regF__DOT__registers__v0;
    }
}

extern const VlWide<8>/*255:0*/ Vtop__ConstPool__CONST_h988f8c19_0;

void Vtop___024root___nba_sequent__TOP__4(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*1:0*/ __Vdly__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__state;
    __Vdly__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__state = 0;
    IData/*27:0*/ __Vdly__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__ghr_latched;
    __Vdly__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__ghr_latched = 0;
    VlWide<8>/*231:0*/ __Vdly__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__packed_vec;
    VL_ZERO_W(232, __Vdly__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__packed_vec);
    IData/*31:0*/ __Vdly__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__accum;
    __Vdly__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__accum = 0;
    IData/*31:0*/ __VdlyVal__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__weight_arr__v0;
    __VdlyVal__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__weight_arr__v0 = 0;
    CData/*4:0*/ __VdlyDim0__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__weight_arr__v0;
    __VdlyDim0__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__weight_arr__v0 = 0;
    IData/*31:0*/ __VdlyVal__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__weight_arr__v1;
    __VdlyVal__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__weight_arr__v1 = 0;
    IData/*31:0*/ __VdlyVal__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__weight_arr__v2;
    __VdlyVal__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__weight_arr__v2 = 0;
    CData/*4:0*/ __VdlyDim0__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__weight_arr__v2;
    __VdlyDim0__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__weight_arr__v2 = 0;
    IData/*31:0*/ __VdlyVal__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__weight_arr__v3;
    __VdlyVal__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__weight_arr__v3 = 0;
    IData/*31:0*/ __VdlyVal__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__weight_arr__v4;
    __VdlyVal__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__weight_arr__v4 = 0;
    CData/*4:0*/ __VdlyDim0__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__weight_arr__v4;
    __VdlyDim0__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__weight_arr__v4 = 0;
    // Body
    __Vdly__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__ghr_latched 
        = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__ghr_latched;
    __Vdly__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__packed_vec[0U] 
        = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__packed_vec[0U];
    __Vdly__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__packed_vec[1U] 
        = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__packed_vec[1U];
    __Vdly__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__packed_vec[2U] 
        = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__packed_vec[2U];
    __Vdly__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__packed_vec[3U] 
        = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__packed_vec[3U];
    __Vdly__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__packed_vec[4U] 
        = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__packed_vec[4U];
    __Vdly__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__packed_vec[5U] 
        = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__packed_vec[5U];
    __Vdly__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__packed_vec[6U] 
        = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__packed_vec[6U];
    __Vdly__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__packed_vec[7U] 
        = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__packed_vec[7U];
    __Vdly__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__accum 
        = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__accum;
    __Vdly__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__state 
        = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__state;
    if (vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__rst) {
        vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__i = 0U;
        __Vdly__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__state = 0U;
        vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__pred_valid = 0U;
        vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__rd_en = 0U;
        vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__wr_en = 0U;
        vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__pred_taken = 0U;
        vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__pred_conf = 0U;
        __Vdly__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__ghr_latched = 0U;
        __Vdly__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__packed_vec[0U] 
            = Vtop__ConstPool__CONST_h988f8c19_0[0U];
        __Vdly__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__packed_vec[1U] 
            = Vtop__ConstPool__CONST_h988f8c19_0[1U];
        __Vdly__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__packed_vec[2U] 
            = Vtop__ConstPool__CONST_h988f8c19_0[2U];
        __Vdly__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__packed_vec[3U] 
            = Vtop__ConstPool__CONST_h988f8c19_0[3U];
        __Vdly__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__packed_vec[4U] 
            = Vtop__ConstPool__CONST_h988f8c19_0[4U];
        __Vdly__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__packed_vec[5U] 
            = Vtop__ConstPool__CONST_h988f8c19_0[5U];
        __Vdly__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__packed_vec[6U] 
            = Vtop__ConstPool__CONST_h988f8c19_0[6U];
        __Vdly__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__packed_vec[7U] 
            = Vtop__ConstPool__CONST_h988f8c19_0[7U];
        __Vdly__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__accum = 0U;
        while (VL_GTES_III(32, 0x0000001cU, vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__i)) {
            vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT____Vlvbound_hf5eb4660__0 = 0U;
            if (VL_LIKELY(((0x1cU >= (0x0000001fU & vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__i))))) {
                __VdlyVal__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__weight_arr__v0 
                    = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT____Vlvbound_hf5eb4660__0;
                __VdlyDim0__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__weight_arr__v0 
                    = (0x0000001fU & vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__i);
                vlSelfRef.__VdlyCommitQueueTB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__weight_arr.enqueue(__VdlyVal__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__weight_arr__v0, (IData)(__VdlyDim0__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__weight_arr__v0));
            }
            vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__i 
                = ((IData)(1U) + vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__i);
        }
    } else {
        vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__pred_valid = 0U;
        if ((2U & (IData)(vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__state))) {
                vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__msb = 0x000000e7U;
                vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__rd_en = 0U;
                __VdlyVal__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__weight_arr__v1 
                    = (((- (IData)(((0xe7U >= (0x000000ffU 
                                               & ((IData)(7U) 
                                                  + 
                                                  (vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__msb 
                                                   - (IData)(7U))))) 
                                    && (1U & (vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__packed_vec[
                                              (7U & 
                                               (((IData)(7U) 
                                                 + 
                                                 (vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__msb 
                                                  - (IData)(7U))) 
                                                >> 5U))] 
                                              >> (0x0000001fU 
                                                  & ((IData)(7U) 
                                                     + 
                                                     (vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__msb 
                                                      - (IData)(7U))))))))) 
                        << 8U) | ((0xe7U >= (0x000000ffU 
                                             & (vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__msb 
                                                - (IData)(7U))))
                                   ? (0x000000ffU & 
                                      (((0U == (0x0000001fU 
                                                & (vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__msb 
                                                   - (IData)(7U))))
                                         ? 0U : (vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__packed_vec[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0x000000ffU 
                                                    & (vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__msb 
                                                       - (IData)(7U)))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x00000020U) 
                                                  - 
                                                  (0x0000001fU 
                                                   & (vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__msb 
                                                      - (IData)(7U)))))) 
                                       | (vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__packed_vec[
                                          (7U & ((vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__msb 
                                                  - (IData)(7U)) 
                                                 >> 5U))] 
                                          >> (0x0000001fU 
                                              & (vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__msb 
                                                 - (IData)(7U))))))
                                   : 0U));
                vlSelfRef.__VdlyCommitQueueTB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__weight_arr.enqueue(__VdlyVal__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__weight_arr__v1, 0U);
                __Vdly__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__state = 0U;
                vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__i = 1U;
                while (VL_GTES_III(32, 0x0000001cU, vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__i)) {
                    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__msb 
                        = ((IData)(0x000000e7U) - VL_MULS_III(32, (IData)(8U), vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__i));
                    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT____Vlvbound_hf5eb4660__2 
                        = (((- (IData)(((0xe7U >= (0x000000ffU 
                                                   & ((IData)(7U) 
                                                      + 
                                                      (vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__msb 
                                                       - (IData)(7U))))) 
                                        && (1U & (vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__packed_vec[
                                                  (7U 
                                                   & (((IData)(7U) 
                                                       + 
                                                       (vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__msb 
                                                        - (IData)(7U))) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x0000001fU 
                                                   & ((IData)(7U) 
                                                      + 
                                                      (vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__msb 
                                                       - (IData)(7U))))))))) 
                            << 8U) | ((0xe7U >= (0x000000ffU 
                                                 & (vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__msb 
                                                    - (IData)(7U))))
                                       ? (0x000000ffU 
                                          & (((0U == 
                                               (0x0000001fU 
                                                & (vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__msb 
                                                   - (IData)(7U))))
                                               ? 0U
                                               : (vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__packed_vec[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0x000000ffU 
                                                     & (vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__msb 
                                                        - (IData)(7U)))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x00000020U) 
                                                   - 
                                                   (0x0000001fU 
                                                    & (vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__msb 
                                                       - (IData)(7U)))))) 
                                             | (vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__packed_vec[
                                                (7U 
                                                 & ((vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__msb 
                                                     - (IData)(7U)) 
                                                    >> 5U))] 
                                                >> 
                                                (0x0000001fU 
                                                 & (vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__msb 
                                                    - (IData)(7U))))))
                                       : 0U));
                    if (VL_LIKELY(((0x1cU >= (0x0000001fU 
                                              & vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__i))))) {
                        __VdlyVal__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__weight_arr__v2 
                            = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT____Vlvbound_hf5eb4660__2;
                        __VdlyDim0__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__weight_arr__v2 
                            = (0x0000001fU & vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__i);
                        vlSelfRef.__VdlyCommitQueueTB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__weight_arr.enqueue(__VdlyVal__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__weight_arr__v2, (IData)(__VdlyDim0__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__weight_arr__v2));
                    }
                    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__i 
                        = ((IData)(1U) + vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__i);
                }
                __Vdly__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__accum 
                    = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__weight_arr
                    [0U];
                vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__i = 1U;
                __Vdly__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__packed_vec[0U] 
                    = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__rd_data[0U];
                __Vdly__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__packed_vec[1U] 
                    = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__rd_data[1U];
                __Vdly__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__packed_vec[2U] 
                    = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__rd_data[2U];
                __Vdly__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__packed_vec[3U] 
                    = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__rd_data[3U];
                __Vdly__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__packed_vec[4U] 
                    = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__rd_data[4U];
                __Vdly__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__packed_vec[5U] 
                    = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__rd_data[5U];
                __Vdly__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__packed_vec[6U] 
                    = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__rd_data[6U];
                __Vdly__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__packed_vec[7U] 
                    = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__rd_data[7U];
                while (VL_GTES_III(32, 0x0000001cU, vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__i)) {
                    __Vdly__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__accum 
                        = (((0x1bU >= (0x0000001fU 
                                       & (vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__i 
                                          - (IData)(1U)))) 
                            && (1U & (vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__ghr_latched 
                                      >> (0x0000001fU 
                                          & (vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__i 
                                             - (IData)(1U))))))
                            ? (vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__accum 
                               + ((0x1cU >= (0x0000001fU 
                                             & vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__i))
                                   ? vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__weight_arr
                                  [(0x0000001fU & vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__i)]
                                   : 0U)) : (vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__accum 
                                             - ((0x1cU 
                                                 >= 
                                                 (0x0000001fU 
                                                  & vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__i))
                                                 ? 
                                                vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__weight_arr
                                                [(0x0000001fU 
                                                  & vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__i)]
                                                 : 0U)));
                    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__i 
                        = ((IData)(1U) + vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__i);
                }
                vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__t_signed 
                    = ((IData)(vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__train_taken)
                        ? 1U : 0xffffffffU);
                vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__wrong 
                    = ((VL_LTES_III(32, 0U, vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__accum) 
                        & VL_GTS_III(32, 0U, vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__t_signed)) 
                       | (VL_GTS_III(32, 0U, vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__accum) 
                          & VL_LTS_III(32, 0U, vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__t_signed)));
                if (((IData)(vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__wrong) 
                     | VL_GTES_III(32, 0x00000044U, 
                                   (VL_LTES_III(32, 0U, vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__accum)
                                     ? vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__accum
                                     : (- vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__accum))))) {
                    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__tmpv 
                        = (vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__weight_arr
                           [0U] + vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__t_signed);
                    if (VL_LTS_III(32, 0x0000007fU, vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__tmpv)) {
                        vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__tmpv = 0x0000007fU;
                    }
                    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__wr_idx 
                        = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__train_idx;
                    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__wr_en = 1U;
                    if (VL_GTS_III(32, 0xffffff80U, vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__tmpv)) {
                        vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__tmpv = 0xffffff80U;
                    }
                    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__msb = 0x000000e7U;
                    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT____Vlvbound_hc0686a0f__0 
                        = (0x000000ffU & vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__tmpv);
                    if ((0xe7U >= (0x000000ffU & (vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__msb 
                                                  - (IData)(7U))))) {
                        VL_ASSIGNSEL_WI(232, 8, (0x000000ffU 
                                                 & (vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__msb 
                                                    - (IData)(7U))), vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__unnamedblk1__DOT__newpack, vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT____Vlvbound_hc0686a0f__0);
                    }
                    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__i = 1U;
                    while (VL_GTES_III(32, 0x0000001cU, vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__i)) {
                        vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__delta 
                            = (((0x1bU >= (0x0000001fU 
                                           & (vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__i 
                                              - (IData)(1U)))) 
                                && (1U & (vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__ghr_latched 
                                          >> (0x0000001fU 
                                              & (vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__i 
                                                 - (IData)(1U))))))
                                ? 1U : 0xffffffffU);
                        vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__tmpv 
                            = (((0x1cU >= (0x0000001fU 
                                           & vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__i))
                                 ? vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__weight_arr
                                [(0x0000001fU & vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__i)]
                                 : 0U) + VL_MULS_III(32, vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__t_signed, vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__delta));
                        if (VL_LTS_III(32, 0x0000007fU, vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__tmpv)) {
                            vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__tmpv = 0x0000007fU;
                        }
                        if (VL_GTS_III(32, 0xffffff80U, vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__tmpv)) {
                            vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__tmpv = 0xffffff80U;
                        }
                        vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__msb 
                            = ((IData)(0x000000e7U) 
                               - VL_MULS_III(32, (IData)(8U), vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__i));
                        vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT____Vlvbound_hc0686a0f__1 
                            = (0x000000ffU & vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__tmpv);
                        if (VL_LIKELY(((0xe7U >= (0x000000ffU 
                                                  & (vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__msb 
                                                     - (IData)(7U))))))) {
                            VL_ASSIGNSEL_WI(232, 8, 
                                            (0x000000ffU 
                                             & (vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__msb 
                                                - (IData)(7U))), vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__unnamedblk1__DOT__newpack, vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT____Vlvbound_hc0686a0f__1);
                        }
                        vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__i 
                            = ((IData)(1U) + vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__i);
                    }
                    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__wr_data[0U] 
                        = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__unnamedblk1__DOT__newpack[0U];
                    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__wr_data[1U] 
                        = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__unnamedblk1__DOT__newpack[1U];
                    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__wr_data[2U] 
                        = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__unnamedblk1__DOT__newpack[2U];
                    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__wr_data[3U] 
                        = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__unnamedblk1__DOT__newpack[3U];
                    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__wr_data[4U] 
                        = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__unnamedblk1__DOT__newpack[4U];
                    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__wr_data[5U] 
                        = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__unnamedblk1__DOT__newpack[5U];
                    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__wr_data[6U] 
                        = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__unnamedblk1__DOT__newpack[6U];
                    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__wr_data[7U] 
                        = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__unnamedblk1__DOT__newpack[7U];
                } else {
                    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__wr_en = 0U;
                }
            } else {
                __Vdly__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__accum 
                    = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__weight_arr
                    [0U];
                vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__i = 1U;
                vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__pred_valid = 1U;
                __Vdly__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__state = 0U;
                while (VL_GTES_III(32, 0x0000001cU, vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__i)) {
                    __Vdly__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__accum 
                        = (((0x1bU >= (0x0000001fU 
                                       & (vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__i 
                                          - (IData)(1U)))) 
                            && (1U & (vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__ghr_latched 
                                      >> (0x0000001fU 
                                          & (vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__i 
                                             - (IData)(1U))))))
                            ? (vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__accum 
                               + ((0x1cU >= (0x0000001fU 
                                             & vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__i))
                                   ? vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__weight_arr
                                  [(0x0000001fU & vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__i)]
                                   : 0U)) : (vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__accum 
                                             - ((0x1cU 
                                                 >= 
                                                 (0x0000001fU 
                                                  & vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__i))
                                                 ? 
                                                vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__weight_arr
                                                [(0x0000001fU 
                                                  & vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__i)]
                                                 : 0U)));
                    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__i 
                        = ((IData)(1U) + vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__i);
                }
                vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__pred_conf 
                    = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__accum;
                vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__pred_taken 
                    = VL_LTES_III(32, 0U, vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__accum);
            }
        } else if ((1U & (IData)(vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__state))) {
            vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__msb = 0x000000e7U;
            vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__rd_en = 0U;
            __VdlyVal__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__weight_arr__v3 
                = (((- (IData)(((0xe7U >= (0x000000ffU 
                                           & ((IData)(7U) 
                                              + (vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__msb 
                                                 - (IData)(7U))))) 
                                && (1U & (vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__packed_vec[
                                          (7U & (((IData)(7U) 
                                                  + 
                                                  (vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__msb 
                                                   - (IData)(7U))) 
                                                 >> 5U))] 
                                          >> (0x0000001fU 
                                              & ((IData)(7U) 
                                                 + 
                                                 (vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__msb 
                                                  - (IData)(7U))))))))) 
                    << 8U) | ((0xe7U >= (0x000000ffU 
                                         & (vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__msb 
                                            - (IData)(7U))))
                               ? (0x000000ffU & (((0U 
                                                   == 
                                                   (0x0000001fU 
                                                    & (vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__msb 
                                                       - (IData)(7U))))
                                                   ? 0U
                                                   : 
                                                  (vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__packed_vec[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0x000000ffU 
                                                      & (vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__msb 
                                                         - (IData)(7U)))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x00000020U) 
                                                    - 
                                                    (0x0000001fU 
                                                     & (vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__msb 
                                                        - (IData)(7U)))))) 
                                                 | (vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__packed_vec[
                                                    (7U 
                                                     & ((vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__msb 
                                                         - (IData)(7U)) 
                                                        >> 5U))] 
                                                    >> 
                                                    (0x0000001fU 
                                                     & (vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__msb 
                                                        - (IData)(7U))))))
                               : 0U));
            vlSelfRef.__VdlyCommitQueueTB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__weight_arr.enqueue(__VdlyVal__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__weight_arr__v3, 0U);
            __Vdly__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__state = 2U;
            vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__i = 1U;
            while (VL_GTES_III(32, 0x0000001cU, vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__i)) {
                vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__msb 
                    = ((IData)(0x000000e7U) - VL_MULS_III(32, (IData)(8U), vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__i));
                vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT____Vlvbound_hf5eb4660__1 
                    = (((- (IData)(((0xe7U >= (0x000000ffU 
                                               & ((IData)(7U) 
                                                  + 
                                                  (vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__msb 
                                                   - (IData)(7U))))) 
                                    && (1U & (vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__packed_vec[
                                              (7U & 
                                               (((IData)(7U) 
                                                 + 
                                                 (vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__msb 
                                                  - (IData)(7U))) 
                                                >> 5U))] 
                                              >> (0x0000001fU 
                                                  & ((IData)(7U) 
                                                     + 
                                                     (vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__msb 
                                                      - (IData)(7U))))))))) 
                        << 8U) | ((0xe7U >= (0x000000ffU 
                                             & (vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__msb 
                                                - (IData)(7U))))
                                   ? (0x000000ffU & 
                                      (((0U == (0x0000001fU 
                                                & (vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__msb 
                                                   - (IData)(7U))))
                                         ? 0U : (vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__packed_vec[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0x000000ffU 
                                                    & (vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__msb 
                                                       - (IData)(7U)))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x00000020U) 
                                                  - 
                                                  (0x0000001fU 
                                                   & (vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__msb 
                                                      - (IData)(7U)))))) 
                                       | (vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__packed_vec[
                                          (7U & ((vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__msb 
                                                  - (IData)(7U)) 
                                                 >> 5U))] 
                                          >> (0x0000001fU 
                                              & (vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__msb 
                                                 - (IData)(7U))))))
                                   : 0U));
                if (VL_LIKELY(((0x1cU >= (0x0000001fU 
                                          & vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__i))))) {
                    __VdlyVal__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__weight_arr__v4 
                        = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT____Vlvbound_hf5eb4660__1;
                    __VdlyDim0__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__weight_arr__v4 
                        = (0x0000001fU & vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__i);
                    vlSelfRef.__VdlyCommitQueueTB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__weight_arr.enqueue(__VdlyVal__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__weight_arr__v4, (IData)(__VdlyDim0__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__weight_arr__v4));
                }
                vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__i 
                    = ((IData)(1U) + vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__i);
            }
            __Vdly__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__packed_vec[0U] 
                = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__rd_data[0U];
            __Vdly__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__packed_vec[1U] 
                = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__rd_data[1U];
            __Vdly__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__packed_vec[2U] 
                = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__rd_data[2U];
            __Vdly__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__packed_vec[3U] 
                = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__rd_data[3U];
            __Vdly__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__packed_vec[4U] 
                = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__rd_data[4U];
            __Vdly__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__packed_vec[5U] 
                = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__rd_data[5U];
            __Vdly__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__packed_vec[6U] 
                = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__rd_data[6U];
            __Vdly__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__packed_vec[7U] 
                = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__rd_data[7U];
        } else {
            vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__rd_en = 0U;
            vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__wr_en = 0U;
            if (vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__req_valid) {
                vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__rd_en = 1U;
                vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__rd_idx 
                    = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__req_idx;
                __Vdly__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__ghr_latched 
                    = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__req_ghr;
                __Vdly__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__state = 1U;
            } else if (vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__train_valid) {
                vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__rd_en = 1U;
                vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__rd_idx 
                    = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__train_idx;
                __Vdly__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__ghr_latched 
                    = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__train_ghr;
                __Vdly__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__state = 3U;
            }
        }
    }
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__ghr_latched 
        = __Vdly__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__ghr_latched;
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__packed_vec[0U] 
        = __Vdly__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__packed_vec[0U];
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__packed_vec[1U] 
        = __Vdly__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__packed_vec[1U];
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__packed_vec[2U] 
        = __Vdly__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__packed_vec[2U];
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__packed_vec[3U] 
        = __Vdly__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__packed_vec[3U];
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__packed_vec[4U] 
        = __Vdly__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__packed_vec[4U];
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__packed_vec[5U] 
        = __Vdly__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__packed_vec[5U];
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__packed_vec[6U] 
        = __Vdly__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__packed_vec[6U];
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__packed_vec[7U] 
        = __Vdly__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__packed_vec[7U];
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__accum 
        = __Vdly__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__accum;
    vlSelfRef.__VdlyCommitQueueTB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__weight_arr.commit(vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__weight_arr);
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__state 
        = __Vdly__TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__state;
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__percep_pred_valid 
        = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__pred_valid;
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__rd_en 
        = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__rd_en;
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__wr_en 
        = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__wr_en;
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__percep_pred_conf 
        = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__pred_conf;
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
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__rd_idx 
        = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__rd_idx;
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__req_ready 
        = (0U == (IData)(vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__state));
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__percep_pred_taken 
        = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__pred_taken;
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__percep_req_ready 
        = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__req_ready;
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__train_ready 
        = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__req_ready;
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__percep_train_ready 
        = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__train_ready;
}

void Vtop___024root___nba_sequent__TOP__5(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VdlyVal__TB__DOT__uut__DOT__decode__DOT__csrF__DOT__csRegisters__v0;
    __VdlyVal__TB__DOT__uut__DOT__decode__DOT__csrF__DOT__csRegisters__v0 = 0;
    IData/*31:0*/ __VdlyVal__TB__DOT__uut__DOT__decode__DOT__csrF__DOT__csRegisters__v1;
    __VdlyVal__TB__DOT__uut__DOT__decode__DOT__csrF__DOT__csRegisters__v1 = 0;
    CData/*3:0*/ __VdlyDim0__TB__DOT__uut__DOT__decode__DOT__csrF__DOT__csRegisters__v1;
    __VdlyDim0__TB__DOT__uut__DOT__decode__DOT__csrF__DOT__csRegisters__v1 = 0;
    CData/*0:0*/ __VdlySet__TB__DOT__uut__DOT__decode__DOT__csrF__DOT__csRegisters__v1;
    __VdlySet__TB__DOT__uut__DOT__decode__DOT__csrF__DOT__csRegisters__v1 = 0;
    IData/*31:0*/ __VdlyVal__TB__DOT__uut__DOT__decode__DOT__csrF__DOT__csRegisters__v2;
    __VdlyVal__TB__DOT__uut__DOT__decode__DOT__csrF__DOT__csRegisters__v2 = 0;
    IData/*31:0*/ __VdlyVal__TB__DOT__uut__DOT__decode__DOT__csrF__DOT__csRegisters__v3;
    __VdlyVal__TB__DOT__uut__DOT__decode__DOT__csrF__DOT__csRegisters__v3 = 0;
    IData/*31:0*/ __VdlyVal__TB__DOT__uut__DOT__decode__DOT__csrF__DOT__csRegisters__v4;
    __VdlyVal__TB__DOT__uut__DOT__decode__DOT__csrF__DOT__csRegisters__v4 = 0;
    // Body
    __VdlySet__TB__DOT__uut__DOT__decode__DOT__csrF__DOT__csRegisters__v1 = 0U;
    __VdlyVal__TB__DOT__uut__DOT__decode__DOT__csrF__DOT__csRegisters__v0 
        = ((IData)(1U) + vlSelfRef.TB__DOT__uut__DOT__decode__DOT__csrF__DOT__csRegisters
           [3U]);
    if (vlSelfRef.TB__DOT__uut__DOT__decode__DOT__csrF__DOT__wEn) {
        __VdlyVal__TB__DOT__uut__DOT__decode__DOT__csrF__DOT__csRegisters__v1 
            = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__csrF__DOT__wData;
        __VdlyDim0__TB__DOT__uut__DOT__decode__DOT__csrF__DOT__csRegisters__v1 
            = (0x0000000fU & (IData)(vlSelfRef.TB__DOT__uut__DOT__decode__DOT__csrF__DOT__wAddr));
        __VdlySet__TB__DOT__uut__DOT__decode__DOT__csrF__DOT__csRegisters__v1 = 1U;
    }
    __VdlyVal__TB__DOT__uut__DOT__decode__DOT__csrF__DOT__csRegisters__v2 
        = (vlSelfRef.TB__DOT__uut__DOT__decode__DOT__csrF__DOT__csRegisters
           [0U] + (IData)(vlSelfRef.TB__DOT__uut__DOT__decode__DOT__csrF__DOT__wrongBranch));
    __VdlyVal__TB__DOT__uut__DOT__decode__DOT__csrF__DOT__csRegisters__v3 
        = (vlSelfRef.TB__DOT__uut__DOT__decode__DOT__csrF__DOT__csRegisters
           [1U] + (IData)(vlSelfRef.TB__DOT__uut__DOT__decode__DOT__csrF__DOT__controlXfer));
    __VdlyVal__TB__DOT__uut__DOT__decode__DOT__csrF__DOT__csRegisters__v4 
        = (vlSelfRef.TB__DOT__uut__DOT__decode__DOT__csrF__DOT__csRegisters
           [2U] + (IData)(vlSelfRef.TB__DOT__uut__DOT__decode__DOT__csrF__DOT__validInst));
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__csrF__DOT__csRegisters[3U] 
        = __VdlyVal__TB__DOT__uut__DOT__decode__DOT__csrF__DOT__csRegisters__v0;
    if (__VdlySet__TB__DOT__uut__DOT__decode__DOT__csrF__DOT__csRegisters__v1) {
        vlSelfRef.TB__DOT__uut__DOT__decode__DOT__csrF__DOT__csRegisters[__VdlyDim0__TB__DOT__uut__DOT__decode__DOT__csrF__DOT__csRegisters__v1] 
            = __VdlyVal__TB__DOT__uut__DOT__decode__DOT__csrF__DOT__csRegisters__v1;
    }
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__csrF__DOT__csRegisters[0U] 
        = __VdlyVal__TB__DOT__uut__DOT__decode__DOT__csrF__DOT__csRegisters__v2;
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__csrF__DOT__csRegisters[1U] 
        = __VdlyVal__TB__DOT__uut__DOT__decode__DOT__csrF__DOT__csRegisters__v3;
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__csrF__DOT__csRegisters[2U] 
        = __VdlyVal__TB__DOT__uut__DOT__decode__DOT__csrF__DOT__csRegisters__v4;
}

void Vtop___024root___nba_sequent__TOP__6(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __VdlyVal__TB__DOT__data__DOT__mem__v0;
    __VdlyVal__TB__DOT__data__DOT__mem__v0 = 0;
    SData/*14:0*/ __VdlyDim0__TB__DOT__data__DOT__mem__v0;
    __VdlyDim0__TB__DOT__data__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__TB__DOT__data__DOT__mem__v0;
    __VdlySet__TB__DOT__data__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__TB__DOT__data__DOT__mem__v1;
    __VdlyVal__TB__DOT__data__DOT__mem__v1 = 0;
    SData/*14:0*/ __VdlyDim0__TB__DOT__data__DOT__mem__v1;
    __VdlyDim0__TB__DOT__data__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__TB__DOT__data__DOT__mem__v1;
    __VdlySet__TB__DOT__data__DOT__mem__v1 = 0;
    CData/*7:0*/ __VdlyVal__TB__DOT__data__DOT__mem__v2;
    __VdlyVal__TB__DOT__data__DOT__mem__v2 = 0;
    SData/*14:0*/ __VdlyDim0__TB__DOT__data__DOT__mem__v2;
    __VdlyDim0__TB__DOT__data__DOT__mem__v2 = 0;
    CData/*7:0*/ __VdlyVal__TB__DOT__data__DOT__mem__v3;
    __VdlyVal__TB__DOT__data__DOT__mem__v3 = 0;
    SData/*14:0*/ __VdlyDim0__TB__DOT__data__DOT__mem__v3;
    __VdlyDim0__TB__DOT__data__DOT__mem__v3 = 0;
    CData/*0:0*/ __VdlySet__TB__DOT__data__DOT__mem__v3;
    __VdlySet__TB__DOT__data__DOT__mem__v3 = 0;
    CData/*7:0*/ __VdlyVal__TB__DOT__data__DOT__mem__v4;
    __VdlyVal__TB__DOT__data__DOT__mem__v4 = 0;
    SData/*14:0*/ __VdlyDim0__TB__DOT__data__DOT__mem__v4;
    __VdlyDim0__TB__DOT__data__DOT__mem__v4 = 0;
    CData/*7:0*/ __VdlyVal__TB__DOT__data__DOT__mem__v5;
    __VdlyVal__TB__DOT__data__DOT__mem__v5 = 0;
    SData/*14:0*/ __VdlyDim0__TB__DOT__data__DOT__mem__v5;
    __VdlyDim0__TB__DOT__data__DOT__mem__v5 = 0;
    CData/*7:0*/ __VdlyVal__TB__DOT__data__DOT__mem__v6;
    __VdlyVal__TB__DOT__data__DOT__mem__v6 = 0;
    SData/*14:0*/ __VdlyDim0__TB__DOT__data__DOT__mem__v6;
    __VdlyDim0__TB__DOT__data__DOT__mem__v6 = 0;
    CData/*7:0*/ __VdlyVal__TB__DOT__data__DOT__mem__v7;
    __VdlyVal__TB__DOT__data__DOT__mem__v7 = 0;
    SData/*14:0*/ __VdlyDim0__TB__DOT__data__DOT__mem__v7;
    __VdlyDim0__TB__DOT__data__DOT__mem__v7 = 0;
    CData/*0:0*/ __VdlySet__TB__DOT__data__DOT__mem__v7;
    __VdlySet__TB__DOT__data__DOT__mem__v7 = 0;
    // Body
    __VdlySet__TB__DOT__data__DOT__mem__v0 = 0U;
    __VdlySet__TB__DOT__data__DOT__mem__v1 = 0U;
    __VdlySet__TB__DOT__data__DOT__mem__v3 = 0U;
    __VdlySet__TB__DOT__data__DOT__mem__v7 = 0U;
    if (vlSelfRef.TB__DOT__data__DOT__wEn) {
        if ((0U == (IData)(vlSelfRef.TB__DOT__data__DOT__size))) {
            __VdlyVal__TB__DOT__data__DOT__mem__v0 
                = (0x000000ffU & vlSelfRef.TB__DOT__data__DOT__wData);
            __VdlyDim0__TB__DOT__data__DOT__mem__v0 
                = (0x00007fffU & vlSelfRef.TB__DOT__data__DOT__addrMinusOff);
            __VdlySet__TB__DOT__data__DOT__mem__v0 = 1U;
        } else if ((1U == (IData)(vlSelfRef.TB__DOT__data__DOT__size))) {
            __VdlyVal__TB__DOT__data__DOT__mem__v1 
                = (0x000000ffU & vlSelfRef.TB__DOT__data__DOT__wData);
            __VdlyDim0__TB__DOT__data__DOT__mem__v1 
                = (0x00007fffU & vlSelfRef.TB__DOT__data__DOT__addrMinusOff);
            __VdlySet__TB__DOT__data__DOT__mem__v1 = 1U;
            __VdlyVal__TB__DOT__data__DOT__mem__v2 
                = (0x000000ffU & (vlSelfRef.TB__DOT__data__DOT__wData 
                                  >> 8U));
            __VdlyDim0__TB__DOT__data__DOT__mem__v2 
                = (0x00007fffU & vlSelfRef.TB__DOT__data__DOT__addrplus1);
        } else if ((2U == (IData)(vlSelfRef.TB__DOT__data__DOT__size))) {
            __VdlyVal__TB__DOT__data__DOT__mem__v3 
                = (0x000000ffU & vlSelfRef.TB__DOT__data__DOT__wData);
            __VdlyDim0__TB__DOT__data__DOT__mem__v3 
                = (0x00007fffU & vlSelfRef.TB__DOT__data__DOT__addrMinusOff);
            __VdlySet__TB__DOT__data__DOT__mem__v3 = 1U;
            __VdlyVal__TB__DOT__data__DOT__mem__v4 
                = (0x000000ffU & (vlSelfRef.TB__DOT__data__DOT__wData 
                                  >> 8U));
            __VdlyDim0__TB__DOT__data__DOT__mem__v4 
                = (0x00007fffU & vlSelfRef.TB__DOT__data__DOT__addrplus1);
            __VdlyVal__TB__DOT__data__DOT__mem__v5 
                = (0x000000ffU & (vlSelfRef.TB__DOT__data__DOT__wData 
                                  >> 0x10U));
            __VdlyDim0__TB__DOT__data__DOT__mem__v5 
                = (0x00007fffU & vlSelfRef.TB__DOT__data__DOT__addrplus2);
            __VdlyVal__TB__DOT__data__DOT__mem__v6 
                = (vlSelfRef.TB__DOT__data__DOT__wData 
                   >> 0x18U);
            __VdlyDim0__TB__DOT__data__DOT__mem__v6 
                = (0x00007fffU & vlSelfRef.TB__DOT__data__DOT__addrplus3);
        } else {
            __VdlyVal__TB__DOT__data__DOT__mem__v7 
                = vlSelfRef.TB__DOT__data__DOT__mem
                [(0x00007fffU & vlSelfRef.TB__DOT__data__DOT__addrMinusOff)];
            __VdlyDim0__TB__DOT__data__DOT__mem__v7 
                = (0x00007fffU & vlSelfRef.TB__DOT__data__DOT__addrMinusOff);
            __VdlySet__TB__DOT__data__DOT__mem__v7 = 1U;
        }
    }
    if (__VdlySet__TB__DOT__data__DOT__mem__v0) {
        vlSelfRef.TB__DOT__data__DOT__mem[__VdlyDim0__TB__DOT__data__DOT__mem__v0] 
            = __VdlyVal__TB__DOT__data__DOT__mem__v0;
    }
    if (__VdlySet__TB__DOT__data__DOT__mem__v1) {
        vlSelfRef.TB__DOT__data__DOT__mem[__VdlyDim0__TB__DOT__data__DOT__mem__v1] 
            = __VdlyVal__TB__DOT__data__DOT__mem__v1;
        vlSelfRef.TB__DOT__data__DOT__mem[__VdlyDim0__TB__DOT__data__DOT__mem__v2] 
            = __VdlyVal__TB__DOT__data__DOT__mem__v2;
    }
    if (__VdlySet__TB__DOT__data__DOT__mem__v3) {
        vlSelfRef.TB__DOT__data__DOT__mem[__VdlyDim0__TB__DOT__data__DOT__mem__v3] 
            = __VdlyVal__TB__DOT__data__DOT__mem__v3;
        vlSelfRef.TB__DOT__data__DOT__mem[__VdlyDim0__TB__DOT__data__DOT__mem__v4] 
            = __VdlyVal__TB__DOT__data__DOT__mem__v4;
        vlSelfRef.TB__DOT__data__DOT__mem[__VdlyDim0__TB__DOT__data__DOT__mem__v5] 
            = __VdlyVal__TB__DOT__data__DOT__mem__v5;
        vlSelfRef.TB__DOT__data__DOT__mem[__VdlyDim0__TB__DOT__data__DOT__mem__v6] 
            = __VdlyVal__TB__DOT__data__DOT__mem__v6;
    }
    if (__VdlySet__TB__DOT__data__DOT__mem__v7) {
        vlSelfRef.TB__DOT__data__DOT__mem[__VdlyDim0__TB__DOT__data__DOT__mem__v7] 
            = __VdlyVal__TB__DOT__data__DOT__mem__v7;
    }
}

void Vtop___024root___nba_sequent__TOP__7(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__7\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.TB__DOT__uut__DOT__mem__DOT__rst) {
        vlSelfRef.TB__DOT__uut__DOT__mem__DOT__csrResultSv = 0U;
        vlSelfRef.TB__DOT__uut__DOT__mem__DOT__pcPlus4Sv = 0U;
        vlSelfRef.TB__DOT__uut__DOT__mem__DOT__regSrcSv = 0U;
        vlSelfRef.TB__DOT__uut__DOT__mem__DOT__csrAddrSv = 0U;
        vlSelfRef.TB__DOT__uut__DOT__mem__DOT__writeDataSv = 0U;
        vlSelfRef.TB__DOT__uut__DOT__mem__DOT__loadStoreSizeSv = 0U;
        vlSelfRef.TB__DOT__uut__DOT__mem__DOT__rdAddrSv = 0U;
        vlSelfRef.TB__DOT__uut__DOT__mem__DOT__aluResultSv = 0U;
    } else {
        vlSelfRef.TB__DOT__uut__DOT__mem__DOT__csrResultSv 
            = vlSelfRef.TB__DOT__uut__DOT__mem__DOT__csrResultE;
        vlSelfRef.TB__DOT__uut__DOT__mem__DOT__pcPlus4Sv 
            = vlSelfRef.TB__DOT__uut__DOT__mem__DOT__pcPlus4E;
        vlSelfRef.TB__DOT__uut__DOT__mem__DOT__regSrcSv 
            = vlSelfRef.TB__DOT__uut__DOT__mem__DOT__regSrcE;
        vlSelfRef.TB__DOT__uut__DOT__mem__DOT__csrAddrSv 
            = vlSelfRef.TB__DOT__uut__DOT__mem__DOT__csrAddrE;
        vlSelfRef.TB__DOT__uut__DOT__mem__DOT__writeDataSv 
            = vlSelfRef.TB__DOT__uut__DOT__mem__DOT__writeDataE;
        vlSelfRef.TB__DOT__uut__DOT__mem__DOT__loadStoreSizeSv 
            = vlSelfRef.TB__DOT__uut__DOT__mem__DOT__loadStoreSizeE;
        vlSelfRef.TB__DOT__uut__DOT__mem__DOT__rdAddrSv 
            = vlSelfRef.TB__DOT__uut__DOT__mem__DOT__rdAddrE;
        vlSelfRef.TB__DOT__uut__DOT__mem__DOT__aluResultSv 
            = vlSelfRef.TB__DOT__uut__DOT__mem__DOT__aluResultE;
    }
    vlSelfRef.TB__DOT__uut__DOT__mem__DOT__csrWriteSv 
        = ((1U & (~ (IData)(vlSelfRef.TB__DOT__uut__DOT__mem__DOT__rst))) 
           && (IData)(vlSelfRef.TB__DOT__uut__DOT__mem__DOT__csrWriteE));
    vlSelfRef.TB__DOT__uut__DOT__mem__DOT__memWriteSv 
        = ((1U & (~ (IData)(vlSelfRef.TB__DOT__uut__DOT__mem__DOT__rst))) 
           && (IData)(vlSelfRef.TB__DOT__uut__DOT__mem__DOT__memWriteE));
    vlSelfRef.TB__DOT__uut__DOT__mem__DOT__regWriteSv 
        = ((1U & (~ (IData)(vlSelfRef.TB__DOT__uut__DOT__mem__DOT__rst))) 
           && (IData)(vlSelfRef.TB__DOT__uut__DOT__mem__DOT__regWriteE));
    vlSelfRef.TB__DOT__uut__DOT__mem__DOT__csrResult 
        = vlSelfRef.TB__DOT__uut__DOT__mem__DOT__csrResultSv;
    vlSelfRef.TB__DOT__uut__DOT__mem__DOT__pcPlus4 
        = vlSelfRef.TB__DOT__uut__DOT__mem__DOT__pcPlus4Sv;
    vlSelfRef.TB__DOT__uut__DOT__mem__DOT__regSrc = vlSelfRef.TB__DOT__uut__DOT__mem__DOT__regSrcSv;
    vlSelfRef.TB__DOT__uut__DOT__mem__DOT__csrWrite 
        = vlSelfRef.TB__DOT__uut__DOT__mem__DOT__csrWriteSv;
    vlSelfRef.TB__DOT__uut__DOT__mem__DOT__csrAddr 
        = vlSelfRef.TB__DOT__uut__DOT__mem__DOT__csrAddrSv;
    vlSelfRef.TB__DOT__uut__DOT__mem__DOT__writeData 
        = vlSelfRef.TB__DOT__uut__DOT__mem__DOT__writeDataSv;
    vlSelfRef.TB__DOT__uut__DOT__mem__DOT__memWrite 
        = vlSelfRef.TB__DOT__uut__DOT__mem__DOT__memWriteSv;
    vlSelfRef.TB__DOT__uut__DOT__mem__DOT__dmemSize 
        = vlSelfRef.TB__DOT__uut__DOT__mem__DOT__loadStoreSizeSv;
    vlSelfRef.TB__DOT__uut__DOT__mem__DOT__regWrite 
        = vlSelfRef.TB__DOT__uut__DOT__mem__DOT__regWriteSv;
    vlSelfRef.TB__DOT__uut__DOT__mem__DOT__rdAddr = vlSelfRef.TB__DOT__uut__DOT__mem__DOT__rdAddrSv;
    vlSelfRef.TB__DOT__uut__DOT__mem__DOT__aluResult 
        = vlSelfRef.TB__DOT__uut__DOT__mem__DOT__aluResultSv;
    vlSelfRef.TB__DOT__uut__DOT__M_csrResult = vlSelfRef.TB__DOT__uut__DOT__mem__DOT__csrResult;
    vlSelfRef.TB__DOT__uut__DOT__M_pcPlus4 = vlSelfRef.TB__DOT__uut__DOT__mem__DOT__pcPlus4;
    vlSelfRef.TB__DOT__uut__DOT__M_regSrc = vlSelfRef.TB__DOT__uut__DOT__mem__DOT__regSrc;
    vlSelfRef.TB__DOT__uut__DOT__M_csrWrite = vlSelfRef.TB__DOT__uut__DOT__mem__DOT__csrWrite;
    vlSelfRef.TB__DOT__uut__DOT__M_csrAddr = vlSelfRef.TB__DOT__uut__DOT__mem__DOT__csrAddr;
    vlSelfRef.TB__DOT__uut__DOT__mem__DOT__dmemWdata 
        = vlSelfRef.TB__DOT__uut__DOT__mem__DOT__writeData;
    vlSelfRef.TB__DOT__uut__DOT__mem__DOT__dmemWen 
        = vlSelfRef.TB__DOT__uut__DOT__mem__DOT__memWrite;
    vlSelfRef.TB__DOT__uut__DOT__M_dmemSize = vlSelfRef.TB__DOT__uut__DOT__mem__DOT__dmemSize;
    vlSelfRef.TB__DOT__uut__DOT__M_regWrite = vlSelfRef.TB__DOT__uut__DOT__mem__DOT__regWrite;
    vlSelfRef.TB__DOT__uut__DOT__M_rdAddr = vlSelfRef.TB__DOT__uut__DOT__mem__DOT__rdAddr;
    vlSelfRef.TB__DOT__uut__DOT__mem__DOT__dmemAddr 
        = vlSelfRef.TB__DOT__uut__DOT__mem__DOT__aluResult;
    vlSelfRef.TB__DOT__uut__DOT__M_aluResult = vlSelfRef.TB__DOT__uut__DOT__mem__DOT__aluResult;
    vlSelfRef.TB__DOT__uut__DOT__M_dmemWdata = vlSelfRef.TB__DOT__uut__DOT__mem__DOT__dmemWdata;
    vlSelfRef.TB__DOT__uut__DOT__M_dmemWen = vlSelfRef.TB__DOT__uut__DOT__mem__DOT__dmemWen;
    vlSelfRef.TB__DOT__uut__DOT__dmemSize = vlSelfRef.TB__DOT__uut__DOT__M_dmemSize;
    vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__regWriteM 
        = vlSelfRef.TB__DOT__uut__DOT__M_regWrite;
    vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__rdM = vlSelfRef.TB__DOT__uut__DOT__M_rdAddr;
    vlSelfRef.TB__DOT__uut__DOT__M_dmemAddr = vlSelfRef.TB__DOT__uut__DOT__mem__DOT__dmemAddr;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__aluResultM 
        = vlSelfRef.TB__DOT__uut__DOT__M_aluResult;
    vlSelfRef.TB__DOT__uut__DOT__dmemWdata = vlSelfRef.TB__DOT__uut__DOT__M_dmemWdata;
    vlSelfRef.TB__DOT__uut__DOT__dmemWen = vlSelfRef.TB__DOT__uut__DOT__M_dmemWen;
    vlSelfRef.TB__DOT__dmemSize = vlSelfRef.TB__DOT__uut__DOT__dmemSize;
    vlSelfRef.TB__DOT__uut__DOT__dmemAddr = vlSelfRef.TB__DOT__uut__DOT__M_dmemAddr;
    vlSelfRef.TB__DOT__dmemWdata = vlSelfRef.TB__DOT__uut__DOT__dmemWdata;
    vlSelfRef.TB__DOT__dmemWen = vlSelfRef.TB__DOT__uut__DOT__dmemWen;
    vlSelfRef.TB__DOT__data__DOT__size = vlSelfRef.TB__DOT__dmemSize;
    vlSelfRef.TB__DOT__dmemAddr = vlSelfRef.TB__DOT__uut__DOT__dmemAddr;
    vlSelfRef.TB__DOT__data__DOT__wData = vlSelfRef.TB__DOT__dmemWdata;
    vlSelfRef.TB__DOT__uartData = (0x000000ffU & vlSelfRef.TB__DOT__dmemWdata);
    vlSelfRef.TB__DOT__uartWen = ((IData)(vlSelfRef.TB__DOT__dmemWen) 
                                  & (0xfffffffcU == vlSelfRef.TB__DOT__dmemAddr));
    vlSelfRef.TB__DOT__data__DOT__addr = vlSelfRef.TB__DOT__dmemAddr;
    vlSelfRef.TB__DOT__uart__DOT__data = vlSelfRef.TB__DOT__uartData;
    vlSelfRef.TB__DOT__uart__DOT__wEn = vlSelfRef.TB__DOT__uartWen;
    vlSelfRef.TB__DOT__dmemWenFinal = ((~ (IData)(vlSelfRef.TB__DOT__uartWen)) 
                                       & (IData)(vlSelfRef.TB__DOT__dmemWen));
    vlSelfRef.TB__DOT__data__DOT__addrMinusOff = (0x0fffffffU 
                                                  & vlSelfRef.TB__DOT__data__DOT__addr);
    vlSelfRef.TB__DOT__data__DOT__wEn = vlSelfRef.TB__DOT__dmemWenFinal;
    vlSelfRef.TB__DOT__data__DOT__addrplus1 = ((IData)(1U) 
                                               + vlSelfRef.TB__DOT__data__DOT__addrMinusOff);
    vlSelfRef.TB__DOT__data__DOT__addrplus2 = ((IData)(2U) 
                                               + vlSelfRef.TB__DOT__data__DOT__addrMinusOff);
    vlSelfRef.TB__DOT__data__DOT__addrplus3 = ((IData)(3U) 
                                               + vlSelfRef.TB__DOT__data__DOT__addrMinusOff);
}

void Vtop___024root___nba_sequent__TOP__8(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__8\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.TB__DOT__uut__DOT__wback__DOT__rst) {
        vlSelfRef.TB__DOT__uut__DOT__wback__DOT__csrAddrSv = 0U;
        vlSelfRef.TB__DOT__uut__DOT__wback__DOT__csrResultSv = 0U;
        vlSelfRef.TB__DOT__uut__DOT__wback__DOT__readDataSv = 0U;
        vlSelfRef.TB__DOT__uut__DOT__wback__DOT__pcPlus4Sv = 0U;
        vlSelfRef.TB__DOT__uut__DOT__wback__DOT__aluResultSv = 0U;
        vlSelfRef.TB__DOT__uut__DOT__wback__DOT__regSrcSv = 0U;
        vlSelfRef.TB__DOT__uut__DOT__wback__DOT__rdAddrSv = 0U;
    } else {
        vlSelfRef.TB__DOT__uut__DOT__wback__DOT__csrAddrSv 
            = vlSelfRef.TB__DOT__uut__DOT__wback__DOT__csrAddrM;
        vlSelfRef.TB__DOT__uut__DOT__wback__DOT__csrResultSv 
            = vlSelfRef.TB__DOT__uut__DOT__wback__DOT__csrResultM;
        vlSelfRef.TB__DOT__uut__DOT__wback__DOT__readDataSv 
            = vlSelfRef.TB__DOT__uut__DOT__wback__DOT__readDataM;
        vlSelfRef.TB__DOT__uut__DOT__wback__DOT__pcPlus4Sv 
            = vlSelfRef.TB__DOT__uut__DOT__wback__DOT__pcPlus4M;
        vlSelfRef.TB__DOT__uut__DOT__wback__DOT__aluResultSv 
            = vlSelfRef.TB__DOT__uut__DOT__wback__DOT__aluResultM;
        vlSelfRef.TB__DOT__uut__DOT__wback__DOT__regSrcSv 
            = vlSelfRef.TB__DOT__uut__DOT__wback__DOT__regSrcM;
        vlSelfRef.TB__DOT__uut__DOT__wback__DOT__rdAddrSv 
            = vlSelfRef.TB__DOT__uut__DOT__wback__DOT__rdAddrM;
    }
    vlSelfRef.TB__DOT__uut__DOT__wback__DOT__csrWriteSv 
        = ((1U & (~ (IData)(vlSelfRef.TB__DOT__uut__DOT__wback__DOT__rst))) 
           && (IData)(vlSelfRef.TB__DOT__uut__DOT__wback__DOT__csrWriteM));
    vlSelfRef.TB__DOT__uut__DOT__wback__DOT__regWriteSv 
        = ((1U & (~ (IData)(vlSelfRef.TB__DOT__uut__DOT__wback__DOT__rst))) 
           && (IData)(vlSelfRef.TB__DOT__uut__DOT__wback__DOT__regWriteM));
    vlSelfRef.TB__DOT__uut__DOT__wback__DOT__csrAddr 
        = vlSelfRef.TB__DOT__uut__DOT__wback__DOT__csrAddrSv;
    vlSelfRef.TB__DOT__uut__DOT__wback__DOT__csrResult 
        = vlSelfRef.TB__DOT__uut__DOT__wback__DOT__csrResultSv;
    vlSelfRef.TB__DOT__uut__DOT__wback__DOT__csrWrite 
        = vlSelfRef.TB__DOT__uut__DOT__wback__DOT__csrWriteSv;
    vlSelfRef.TB__DOT__uut__DOT__wback__DOT__regSrc 
        = vlSelfRef.TB__DOT__uut__DOT__wback__DOT__regSrcSv;
    vlSelfRef.TB__DOT__uut__DOT__wback__DOT__regWrite 
        = vlSelfRef.TB__DOT__uut__DOT__wback__DOT__regWriteSv;
    vlSelfRef.TB__DOT__uut__DOT__wback__DOT__rdAddr 
        = vlSelfRef.TB__DOT__uut__DOT__wback__DOT__rdAddrSv;
    vlSelfRef.TB__DOT__uut__DOT__W_csrAddr = vlSelfRef.TB__DOT__uut__DOT__wback__DOT__csrAddr;
    vlSelfRef.TB__DOT__uut__DOT__W_csrResult = vlSelfRef.TB__DOT__uut__DOT__wback__DOT__csrResult;
    vlSelfRef.TB__DOT__uut__DOT__W_csrWrite = vlSelfRef.TB__DOT__uut__DOT__wback__DOT__csrWrite;
    vlSelfRef.TB__DOT__uut__DOT__wback__DOT__regResult 
        = ((0U == (IData)(vlSelfRef.TB__DOT__uut__DOT__wback__DOT__regSrc))
            ? vlSelfRef.TB__DOT__uut__DOT__wback__DOT__aluResultSv
            : ((1U == (IData)(vlSelfRef.TB__DOT__uut__DOT__wback__DOT__regSrc))
                ? vlSelfRef.TB__DOT__uut__DOT__wback__DOT__readDataSv
                : ((2U == (IData)(vlSelfRef.TB__DOT__uut__DOT__wback__DOT__regSrc))
                    ? vlSelfRef.TB__DOT__uut__DOT__wback__DOT__pcPlus4Sv
                    : 0U)));
    vlSelfRef.TB__DOT__uut__DOT__W_regWrite = vlSelfRef.TB__DOT__uut__DOT__wback__DOT__regWrite;
    vlSelfRef.TB__DOT__uut__DOT__W_rdAddr = vlSelfRef.TB__DOT__uut__DOT__wback__DOT__rdAddr;
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__csrAddrW 
        = vlSelfRef.TB__DOT__uut__DOT__W_csrAddr;
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__csrResultW 
        = vlSelfRef.TB__DOT__uut__DOT__W_csrResult;
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__csrWriteW 
        = vlSelfRef.TB__DOT__uut__DOT__W_csrWrite;
    vlSelfRef.TB__DOT__uut__DOT__W_rd = vlSelfRef.TB__DOT__uut__DOT__wback__DOT__regResult;
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__regWriteW 
        = vlSelfRef.TB__DOT__uut__DOT__W_regWrite;
    vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__regWriteW 
        = vlSelfRef.TB__DOT__uut__DOT__W_regWrite;
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__rdAddrW 
        = vlSelfRef.TB__DOT__uut__DOT__W_rdAddr;
    vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__rdW = vlSelfRef.TB__DOT__uut__DOT__W_rdAddr;
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__csrF__DOT__wAddr 
        = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__csrAddrW;
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__csrF__DOT__wData 
        = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__csrResultW;
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__csrF__DOT__wEn 
        = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__csrWriteW;
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__rdW = vlSelfRef.TB__DOT__uut__DOT__W_rd;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__resultW 
        = vlSelfRef.TB__DOT__uut__DOT__W_rd;
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__regF__DOT__writeEn 
        = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__regWriteW;
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__regF__DOT__writeAddr 
        = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__rdAddrW;
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__regF__DOT__writeData 
        = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__rdW;
}

void Vtop___024root___nba_sequent__TOP__9(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__9\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*8:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    if (((IData)(vlSelfRef.TB__DOT__uut__DOT__decode__DOT__rst) 
         | (IData)(vlSelfRef.TB__DOT__uut__DOT__decode__DOT__flush))) {
        vlSelfRef.TB__DOT__uut__DOT__decode__DOT__pcSv = 0U;
        vlSelfRef.TB__DOT__uut__DOT__decode__DOT__pcPlus4Sv = 0U;
        vlSelfRef.TB__DOT__uut__DOT__decode__DOT__bPredictedTakenSv = 0U;
        vlSelfRef.TB__DOT__uut__DOT__decode__DOT__instrSv = 0U;
    } else if ((1U & (~ (IData)(vlSelfRef.TB__DOT__uut__DOT__decode__DOT__stall)))) {
        vlSelfRef.TB__DOT__uut__DOT__decode__DOT__pcSv 
            = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__pcF;
        vlSelfRef.TB__DOT__uut__DOT__decode__DOT__pcPlus4Sv 
            = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__pcPlus4F;
        vlSelfRef.TB__DOT__uut__DOT__decode__DOT__bPredictedTakenSv 
            = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__bPredictedTakenF;
        vlSelfRef.TB__DOT__uut__DOT__decode__DOT__instrSv 
            = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__instrF;
    }
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__pc = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__pcSv;
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__pcPlus4 
        = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__pcPlus4Sv;
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__bPredictedTaken 
        = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__bPredictedTakenSv;
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__rdAddr 
        = (0x0000001fU & (vlSelfRef.TB__DOT__uut__DOT__decode__DOT__instrSv 
                          >> 7U));
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__funct7_6 
        = (1U & (vlSelfRef.TB__DOT__uut__DOT__decode__DOT__instrSv 
                 >> 0x0000001eU));
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__immSrc 
        = (vlSelfRef.TB__DOT__uut__DOT__decode__DOT__instrSv 
           >> 7U);
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__csrAddr 
        = (vlSelfRef.TB__DOT__uut__DOT__decode__DOT__instrSv 
           >> 0x00000014U);
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__r2Addr 
        = (0x0000001fU & (vlSelfRef.TB__DOT__uut__DOT__decode__DOT__instrSv 
                          >> 0x00000014U));
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__r1Addr 
        = (0x0000001fU & (vlSelfRef.TB__DOT__uut__DOT__decode__DOT__instrSv 
                          >> 0x0000000fU));
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__op = 
        (0x0000001fU & (vlSelfRef.TB__DOT__uut__DOT__decode__DOT__instrSv 
                        >> 2U));
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__funct3 
        = (7U & (vlSelfRef.TB__DOT__uut__DOT__decode__DOT__instrSv 
                 >> 0x0000000cU));
    vlSelfRef.TB__DOT__uut__DOT__D_pc = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__pc;
    vlSelfRef.TB__DOT__uut__DOT__D_pcPlus4 = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__pcPlus4;
    vlSelfRef.TB__DOT__uut__DOT__D_bPredictedTaken 
        = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__bPredictedTaken;
    vlSelfRef.TB__DOT__uut__DOT__D_rdAddr = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__rdAddr;
    vlSelfRef.TB__DOT__uut__DOT__D_funct7_6 = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__funct7_6;
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__extImm__DOT__immSrc 
        = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__immSrc;
    vlSelfRef.TB__DOT__uut__DOT__D_csrAddr = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__csrAddr;
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__csrF__DOT__readAddr 
        = (0x0000000fU & (IData)(vlSelfRef.TB__DOT__uut__DOT__decode__DOT__csrAddr));
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__regF__DOT__addr2 
        = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__r2Addr;
    vlSelfRef.TB__DOT__uut__DOT__D_r2Addr = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__r2Addr;
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__zimm 
        = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__r1Addr;
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__regF__DOT__addr1 
        = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__r1Addr;
    vlSelfRef.TB__DOT__uut__DOT__D_r1Addr = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__r1Addr;
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__cntrlU__DOT__op 
        = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__op;
    vlSelfRef.TB__DOT__uut__DOT__D_funct3 = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__funct3;
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__cntrlU__DOT__funct3 
        = (3U & (IData)(vlSelfRef.TB__DOT__uut__DOT__decode__DOT__funct3));
    vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__r2AddrD 
        = vlSelfRef.TB__DOT__uut__DOT__D_r2Addr;
    vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__r1AddrD 
        = vlSelfRef.TB__DOT__uut__DOT__D_r1Addr;
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__cntrlU__DOT__shift 
        = (IData)((1U == (IData)(vlSelfRef.TB__DOT__uut__DOT__decode__DOT__cntrlU__DOT__funct3)));
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
    vlSelfRef.TB__DOT__uut__DOT__D_csrOp = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__csrOp;
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
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__immExt 
        = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__extImm__DOT__immExt;
    vlSelfRef.TB__DOT__uut__DOT__D_immExt = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__immExt;
}

void Vtop___024root___nba_sequent__TOP__10(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__10\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__memWriteSv 
        = ((1U & (~ ((IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__rst) 
                     | (IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__flush)))) 
           && (IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__memWriteD));
    if (((IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__rst) 
         | (IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__flush))) {
        vlSelfRef.TB__DOT__uut__DOT__execute__DOT__csrAddrSv = 0U;
        vlSelfRef.TB__DOT__uut__DOT__execute__DOT__pcPlus4Sv = 0U;
        vlSelfRef.TB__DOT__uut__DOT__execute__DOT__regSrcSv = 0U;
        vlSelfRef.TB__DOT__uut__DOT__execute__DOT__rdAddrSv = 0U;
        vlSelfRef.TB__DOT__uut__DOT__execute__DOT__aluSrcASv = 0U;
        vlSelfRef.TB__DOT__uut__DOT__execute__DOT__aSv = 0U;
        vlSelfRef.TB__DOT__uut__DOT__execute__DOT__pcSv = 0U;
        vlSelfRef.TB__DOT__uut__DOT__execute__DOT__bSv = 0U;
        vlSelfRef.TB__DOT__uut__DOT__execute__DOT__r1AddrSv = 0U;
        vlSelfRef.TB__DOT__uut__DOT__execute__DOT__funct3Sv = 0U;
        vlSelfRef.TB__DOT__uut__DOT__execute__DOT__r2AddrSv = 0U;
    } else {
        vlSelfRef.TB__DOT__uut__DOT__execute__DOT__csrAddrSv 
            = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__csrAddrD;
        vlSelfRef.TB__DOT__uut__DOT__execute__DOT__pcPlus4Sv 
            = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__pcPlus4D;
        vlSelfRef.TB__DOT__uut__DOT__execute__DOT__regSrcSv 
            = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__regSrcD;
        vlSelfRef.TB__DOT__uut__DOT__execute__DOT__rdAddrSv 
            = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__rdAddrD;
        vlSelfRef.TB__DOT__uut__DOT__execute__DOT__aluSrcASv 
            = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__aluSrcAD;
        vlSelfRef.TB__DOT__uut__DOT__execute__DOT__aSv 
            = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__aD;
        vlSelfRef.TB__DOT__uut__DOT__execute__DOT__pcSv 
            = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__pcD;
        vlSelfRef.TB__DOT__uut__DOT__execute__DOT__bSv 
            = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__bD;
        vlSelfRef.TB__DOT__uut__DOT__execute__DOT__r1AddrSv 
            = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__r1AddrD;
        vlSelfRef.TB__DOT__uut__DOT__execute__DOT__funct3Sv 
            = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__funct3D;
        vlSelfRef.TB__DOT__uut__DOT__execute__DOT__r2AddrSv 
            = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__r2AddrD;
    }
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__regWriteSv 
        = ((1U & (~ ((IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__rst) 
                     | (IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__flush)))) 
           && (IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__regWriteD));
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__bPredictedTakenSv 
        = ((1U & (~ ((IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__rst) 
                     | (IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__flush)))) 
           && (IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__bPredictedTakenD));
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__funct7_6Sv 
        = ((1U & (~ ((IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__rst) 
                     | (IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__flush)))) 
           && (IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__funct7_6D));
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__useF7Sv 
        = ((1U & (~ ((IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__rst) 
                     | (IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__flush)))) 
           && (IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__useF7D));
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__jumpSv 
        = ((1U & (~ ((IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__rst) 
                     | (IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__flush)))) 
           && (IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__jumpD));
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__csrOpSv 
        = ((1U & (~ ((IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__rst) 
                     | (IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__flush)))) 
           && (IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__csrOpD));
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__useRegAddSv 
        = ((1U & (~ ((IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__rst) 
                     | (IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__flush)))) 
           && (IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__useRegAddD));
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__aluSrcBSv 
        = ((1U & (~ ((IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__rst) 
                     | (IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__flush)))) 
           && (IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__aluSrcBD));
    if ((1U & (~ ((IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__rst) 
                  | (IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__flush))))) {
        vlSelfRef.TB__DOT__uut__DOT__execute__DOT__immExtSv 
            = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__immExtD;
    }
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__branchSv 
        = ((1U & (~ ((IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__rst) 
                     | (IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__flush)))) 
           && (IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__branchD));
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__memWrite 
        = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__memWriteSv;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__csrAddr 
        = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__csrAddrSv;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__pcPlus4 
        = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__pcPlus4Sv;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__regSrc 
        = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__regSrcSv;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__rdAddr 
        = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__rdAddrSv;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__bPredictedTaken 
        = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__bPredictedTakenSv;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__aluSrcA 
        = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__aluSrcASv;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__funct7_6 
        = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__funct7_6Sv;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__useF7 
        = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__useF7Sv;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__jump 
        = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__jumpSv;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__a = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__aSv;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__csrU__DOT__csrOp 
        = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__csrOpSv;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__alu__DOT__csrOp 
        = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__csrOpSv;
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
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__loadStoreSize 
        = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__funct3Sv;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__funct3 
        = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__funct3Sv;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__branch 
        = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__branchSv;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__r2Addr 
        = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__r2AddrSv;
    vlSelfRef.TB__DOT__uut__DOT__E_memWrite = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__memWrite;
    vlSelfRef.TB__DOT__uut__DOT__E_csrAddr = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__csrAddr;
    vlSelfRef.TB__DOT__uut__DOT__E_pcPlus4 = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__pcPlus4;
    vlSelfRef.TB__DOT__uut__DOT__E_regSrc = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__regSrc;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__csrU__DOT__rdAddr 
        = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__rdAddr;
    vlSelfRef.TB__DOT__uut__DOT__E_rdAddr = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__rdAddr;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__alu__DOT__funct7_6 
        = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__funct7_6;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__alu__DOT__useF7 
        = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__useF7;
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
    vlSelfRef.TB__DOT__uut__DOT__E_loadStoreSize = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__loadStoreSize;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__csrU__DOT__funct3 
        = (3U & (IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__funct3));
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__alu__DOT__funct3 
        = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__funct3;
    vlSelfRef.TB__DOT__uut__DOT__E_branch = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__branch;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__controlXfer 
        = ((IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__branch) 
           | (IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__jump));
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__alu__DOT__branch 
        = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__branch;
    vlSelfRef.TB__DOT__uut__DOT__E_r2Addr = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__r2Addr;
    vlSelfRef.TB__DOT__uut__DOT__mem__DOT__memWriteE 
        = vlSelfRef.TB__DOT__uut__DOT__E_memWrite;
    vlSelfRef.TB__DOT__uut__DOT__mem__DOT__csrAddrE 
        = vlSelfRef.TB__DOT__uut__DOT__E_csrAddr;
    vlSelfRef.TB__DOT__uut__DOT__mem__DOT__pcPlus4E 
        = vlSelfRef.TB__DOT__uut__DOT__E_pcPlus4;
    vlSelfRef.TB__DOT__uut__DOT__mem__DOT__regSrcE 
        = vlSelfRef.TB__DOT__uut__DOT__E_regSrc;
    vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__regSrcE0 
        = (1U & (IData)(vlSelfRef.TB__DOT__uut__DOT__E_regSrc));
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__csrU__DOT__nrdIs0 
        = (0U != (IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__csrU__DOT__rdAddr));
    vlSelfRef.TB__DOT__uut__DOT__mem__DOT__rdAddrE 
        = vlSelfRef.TB__DOT__uut__DOT__E_rdAddr;
    vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__rdE = vlSelfRef.TB__DOT__uut__DOT__E_rdAddr;
    vlSelfRef.TB__DOT__uut__DOT__E_validInst = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__validInst;
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__exPc 
        = vlSelfRef.TB__DOT__uut__DOT__E_pc;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__btbTarget 
        = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__pcPlusImm;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__csrU__DOT__nrIs0 
        = (0U != (IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__csrU__DOT__r1Addr));
    vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__r1AddrE 
        = vlSelfRef.TB__DOT__uut__DOT__E_r1Addr;
    vlSelfRef.TB__DOT__uut__DOT__mem__DOT__loadStoreSizeE 
        = vlSelfRef.TB__DOT__uut__DOT__E_loadStoreSize;
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
    vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__r2AddrE 
        = vlSelfRef.TB__DOT__uut__DOT__E_r2Addr;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__csrU__DOT__csrReadIn 
        = ((1U == (IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__csrU__DOT__funct3))
            ? (IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__csrU__DOT__nrdIs0)
            : ((3U == (IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__csrU__DOT__funct3)) 
               || (2U == (IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__csrU__DOT__funct3))));
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
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__controlXfer 
        = vlSelfRef.TB__DOT__uut__DOT__E_controlXfer;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__csrU__DOT__csrRead 
        = ((IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__csrU__DOT__csrOp) 
           & (IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__csrU__DOT__csrReadIn));
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__csrF__DOT__validInst 
        = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__validInst;
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__exTarget 
        = vlSelfRef.TB__DOT__uut__DOT__E_btbTarget;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__csrU__DOT__csrWrite 
        = ((IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__csrU__DOT__csrOp) 
           & (IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__csrU__DOT__csrWriteIn));
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__csrF__DOT__controlXfer 
        = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__controlXfer;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__csrRead 
        = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__csrU__DOT__csrRead;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__csrWrite 
        = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__csrU__DOT__csrWrite;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__regWrite 
        = ((IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__regWriteSv) 
           & ((~ ((IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__csrOpSv) 
                  | (IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__csrRead))) 
              | (IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__csrRead)));
    vlSelfRef.TB__DOT__uut__DOT__E_csrWrite = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__csrWrite;
    vlSelfRef.TB__DOT__uut__DOT__E_regWrite = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__regWrite;
    vlSelfRef.TB__DOT__uut__DOT__mem__DOT__csrWriteE 
        = vlSelfRef.TB__DOT__uut__DOT__E_csrWrite;
    vlSelfRef.TB__DOT__uut__DOT__mem__DOT__regWriteE 
        = vlSelfRef.TB__DOT__uut__DOT__E_regWrite;
}

void Vtop___024root___nba_sequent__TOP__11(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__11\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.TB__DOT__uut__DOT__fetch__DOT__rst) {
        vlSelfRef.TB__DOT__uut__DOT__fetch__DOT__pc = 0U;
    } else if ((1U & (~ (IData)(vlSelfRef.TB__DOT__uut__DOT__fetch__DOT__stall)))) {
        vlSelfRef.TB__DOT__uut__DOT__fetch__DOT__pc 
            = vlSelfRef.TB__DOT__uut__DOT__fetch__DOT__pc_;
    }
    vlSelfRef.TB__DOT__uut__DOT__fetch__DOT__pcPlus4 
        = ((IData)(4U) + vlSelfRef.TB__DOT__uut__DOT__fetch__DOT__pc);
    vlSelfRef.TB__DOT__uut__DOT__fetch__DOT__imemAddr 
        = vlSelfRef.TB__DOT__uut__DOT__fetch__DOT__pc;
    vlSelfRef.TB__DOT__uut__DOT__F_pc = vlSelfRef.TB__DOT__uut__DOT__fetch__DOT__pc;
    vlSelfRef.TB__DOT__uut__DOT__F_pcPlus4 = vlSelfRef.TB__DOT__uut__DOT__fetch__DOT__pcPlus4;
    vlSelfRef.TB__DOT__uut__DOT__imemAddr = vlSelfRef.TB__DOT__uut__DOT__fetch__DOT__imemAddr;
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__pcF = vlSelfRef.TB__DOT__uut__DOT__F_pc;
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__fetchPc 
        = vlSelfRef.TB__DOT__uut__DOT__F_pc;
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__pcPlus4F 
        = vlSelfRef.TB__DOT__uut__DOT__F_pcPlus4;
    vlSelfRef.TB__DOT__imemAddr = vlSelfRef.TB__DOT__uut__DOT__imemAddr;
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__req_pc 
        = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__fetchPc;
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__fetchTag 
        = (vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__fetchPc 
           >> 6U);
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__fetchIndex 
        = (0x0000003fU & (vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__fetchPc 
                          >> 2U));
    vlSelfRef.TB__DOT__instr__DOT__rAddr = vlSelfRef.TB__DOT__imemAddr;
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__req_idx 
        = (0x0000007fU & (vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__req_pc 
                          >> 2U));
    vlSelfRef.TB__DOT__instr__DOT__rData = ((0x3ffeU 
                                             >= (0x00003fffU 
                                                 & (vlSelfRef.TB__DOT__instr__DOT__rAddr 
                                                    >> 2U)))
                                             ? vlSelfRef.TB__DOT__instr__DOT__mem
                                            [(0x00003fffU 
                                              & (vlSelfRef.TB__DOT__instr__DOT__rAddr 
                                                 >> 2U))]
                                             : 0U);
    vlSelfRef.TB__DOT__imemRdata = vlSelfRef.TB__DOT__instr__DOT__rData;
    vlSelfRef.TB__DOT__uut__DOT__imemRdata = vlSelfRef.TB__DOT__imemRdata;
    vlSelfRef.TB__DOT__uut__DOT__fetch__DOT__imemData 
        = vlSelfRef.TB__DOT__uut__DOT__imemRdata;
    vlSelfRef.TB__DOT__uut__DOT__fetch__DOT__instr 
        = vlSelfRef.TB__DOT__uut__DOT__fetch__DOT__imemData;
    vlSelfRef.TB__DOT__uut__DOT__F_instr = vlSelfRef.TB__DOT__uut__DOT__fetch__DOT__instr;
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__instrF 
        = vlSelfRef.TB__DOT__uut__DOT__F_instr;
}

void Vtop___024root___nba_sequent__TOP__12(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__12\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
}

void Vtop___024root___nba_sequent__TOP__13(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__13\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__train_taken 
        = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__percep_train_taken;
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__train_idx 
        = (0x0000007fU & (vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__train_pc 
                          >> 2U));
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__req_ghr 
        = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__percep_req_ghr;
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__train_valid 
        = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__percep_train_valid;
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__train_ghr 
        = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__percep_train_ghr;
}

void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
    vlSelfRef.TB__DOT__dmemRdata = vlSelfRef.TB__DOT__data__DOT__rData;
    vlSelfRef.TB__DOT__dmemRdataFinal = vlSelfRef.TB__DOT__dmemRdata;
    vlSelfRef.TB__DOT__uut__DOT__dmemRdata = vlSelfRef.TB__DOT__dmemRdataFinal;
    vlSelfRef.TB__DOT__uut__DOT__M_dmemRdata = vlSelfRef.TB__DOT__uut__DOT__dmemRdata;
    vlSelfRef.TB__DOT__uut__DOT__mem__DOT__dmemRdata 
        = vlSelfRef.TB__DOT__uut__DOT__M_dmemRdata;
    vlSelfRef.TB__DOT__uut__DOT__mem__DOT__readData 
        = vlSelfRef.TB__DOT__uut__DOT__mem__DOT__dmemRdata;
    vlSelfRef.TB__DOT__uut__DOT__M_readData = vlSelfRef.TB__DOT__uut__DOT__mem__DOT__readData;
    vlSelfRef.TB__DOT__uut__DOT__wback__DOT__readDataM 
        = vlSelfRef.TB__DOT__uut__DOT__M_readData;
}

void Vtop___024root___nba_sequent__TOP__14(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__14\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TB__DOT__uut__DOT__wback__DOT__csrAddrM 
        = vlSelfRef.TB__DOT__uut__DOT__M_csrAddr;
    vlSelfRef.TB__DOT__uut__DOT__wback__DOT__csrResultM 
        = vlSelfRef.TB__DOT__uut__DOT__M_csrResult;
    vlSelfRef.TB__DOT__uut__DOT__wback__DOT__csrWriteM 
        = vlSelfRef.TB__DOT__uut__DOT__M_csrWrite;
    vlSelfRef.TB__DOT__uut__DOT__wback__DOT__pcPlus4M 
        = vlSelfRef.TB__DOT__uut__DOT__M_pcPlus4;
    vlSelfRef.TB__DOT__uut__DOT__wback__DOT__aluResultM 
        = vlSelfRef.TB__DOT__uut__DOT__M_aluResult;
    vlSelfRef.TB__DOT__uut__DOT__wback__DOT__regSrcM 
        = vlSelfRef.TB__DOT__uut__DOT__M_regSrc;
    vlSelfRef.TB__DOT__uut__DOT__wback__DOT__regWriteM 
        = vlSelfRef.TB__DOT__uut__DOT__M_regWrite;
    vlSelfRef.TB__DOT__uut__DOT__wback__DOT__rdAddrM 
        = vlSelfRef.TB__DOT__uut__DOT__M_rdAddr;
}

void Vtop___024root___nba_comb__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__csrF__DOT__csr 
        = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__csrF__DOT__csRegisters
        [vlSelfRef.TB__DOT__uut__DOT__decode__DOT__csrF__DOT__readAddr];
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__csr = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__csrF__DOT__csr;
}

void Vtop___024root___nba_comb__TOP__2(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__regF__DOT__reg2 
        = ((0U != (IData)(vlSelfRef.TB__DOT__uut__DOT__decode__DOT__regF__DOT__addr2))
            ? vlSelfRef.TB__DOT__uut__DOT__decode__DOT__regF__DOT__registers
           [vlSelfRef.TB__DOT__uut__DOT__decode__DOT__regF__DOT__addr2]
            : 0U);
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__regF__DOT__reg1 
        = ((0U != (IData)(vlSelfRef.TB__DOT__uut__DOT__decode__DOT__regF__DOT__addr1))
            ? vlSelfRef.TB__DOT__uut__DOT__decode__DOT__regF__DOT__registers
           [vlSelfRef.TB__DOT__uut__DOT__decode__DOT__regF__DOT__addr1]
            : 0U);
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__r2 = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__regF__DOT__reg2;
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__r1 = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__regF__DOT__reg1;
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__a = (
                                                   ((IData)(vlSelfRef.TB__DOT__uut__DOT__decode__DOT__csrOp) 
                                                    & ((IData)(vlSelfRef.TB__DOT__uut__DOT__decode__DOT__funct3) 
                                                       >> 2U))
                                                    ? vlSelfRef.TB__DOT__uut__DOT__decode__DOT__zimm
                                                    : vlSelfRef.TB__DOT__uut__DOT__decode__DOT__r1);
    vlSelfRef.TB__DOT__uut__DOT__D_a = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__a;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__aD = vlSelfRef.TB__DOT__uut__DOT__D_a;
}

void Vtop___024root___nba_sequent__TOP__15(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__15\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__memWriteD 
        = vlSelfRef.TB__DOT__uut__DOT__D_memWrite;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__csrAddrD 
        = vlSelfRef.TB__DOT__uut__DOT__D_csrAddr;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__regWriteD 
        = vlSelfRef.TB__DOT__uut__DOT__D_regWrite;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__pcPlus4D 
        = vlSelfRef.TB__DOT__uut__DOT__D_pcPlus4;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__regSrcD 
        = vlSelfRef.TB__DOT__uut__DOT__D_regSrc;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__rdAddrD 
        = vlSelfRef.TB__DOT__uut__DOT__D_rdAddr;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__bPredictedTakenD 
        = vlSelfRef.TB__DOT__uut__DOT__D_bPredictedTaken;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__aluSrcAD 
        = vlSelfRef.TB__DOT__uut__DOT__D_aluSrcA;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__funct7_6D 
        = vlSelfRef.TB__DOT__uut__DOT__D_funct7_6;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__useF7D 
        = vlSelfRef.TB__DOT__uut__DOT__D_useF7;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__jumpD 
        = vlSelfRef.TB__DOT__uut__DOT__D_jump;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__csrOpD 
        = vlSelfRef.TB__DOT__uut__DOT__D_csrOp;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__useRegAddD 
        = vlSelfRef.TB__DOT__uut__DOT__D_useRegAdd;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__pcD 
        = vlSelfRef.TB__DOT__uut__DOT__D_pc;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__aluSrcBD 
        = vlSelfRef.TB__DOT__uut__DOT__D_aluSrcB;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__immExtD 
        = vlSelfRef.TB__DOT__uut__DOT__D_immExt;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__r1AddrD 
        = vlSelfRef.TB__DOT__uut__DOT__D_r1Addr;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__funct3D 
        = vlSelfRef.TB__DOT__uut__DOT__D_funct3;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__branchD 
        = vlSelfRef.TB__DOT__uut__DOT__D_branch;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__r2AddrD 
        = vlSelfRef.TB__DOT__uut__DOT__D_r2Addr;
}

void Vtop___024root___nba_comb__TOP__3(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__lwStall 
        = ((IData)(vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__regSrcE0) 
           & ((((IData)(vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__r1AddrD) 
                == (IData)(vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__rdE)) 
               | ((IData)(vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__r2AddrD) 
                  == (IData)(vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__rdE))) 
              & (0U != (IData)(vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__rdE))));
    vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__stallD 
        = vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__lwStall;
    vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__stallF 
        = vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__lwStall;
    vlSelfRef.TB__DOT__uut__DOT__H_stallD = vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__stallD;
    vlSelfRef.TB__DOT__uut__DOT__H_stallF = vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__stallF;
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__stall 
        = vlSelfRef.TB__DOT__uut__DOT__H_stallD;
    vlSelfRef.TB__DOT__uut__DOT__fetch__DOT__stall 
        = vlSelfRef.TB__DOT__uut__DOT__H_stallF;
}

void Vtop___024root___nba_comb__TOP__4(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__r1EqMem 
        = (((IData)(vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__r1AddrE) 
            == (IData)(vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__rdM)) 
           & (0U != (IData)(vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__rdM)));
    vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__r2EqMem 
        = (((IData)(vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__r2AddrE) 
            == (IData)(vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__rdM)) 
           & (0U != (IData)(vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__rdM)));
}

void Vtop___024root___nba_comb__TOP__5(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__r1EqW 
        = (((IData)(vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__r1AddrE) 
            == (IData)(vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__rdW)) 
           & (0U != (IData)(vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__rdW)));
    vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__r2EqW 
        = (((IData)(vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__r2AddrE) 
            == (IData)(vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__rdW)) 
           & (0U != (IData)(vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__rdW)));
}

void Vtop___024root___nba_comb__TOP__6(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__exEntry_ 
        = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__btb_mem
        [vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__exIndex];
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__exTagBtb 
        = (0x03ffffffU & (IData)((vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__exEntry_ 
                                  >> 0x00000023U)));
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__exCounter 
        = (3U & (IData)((vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__exEntry_ 
                         >> 1U)));
}

void Vtop___024root___nba_comb__TOP__7(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__7\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__fetchEntry 
        = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__btb_mem
        [vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__fetchIndex];
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__fetchCounter 
        = (3U & (IData)((vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__fetchEntry 
                         >> 1U)));
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__fetchTarget 
        = (IData)((vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__fetchEntry 
                   >> 3U));
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__fetchTagBtb 
        = (0x03ffffffU & (IData)((vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__fetchEntry 
                                  >> 0x00000023U)));
    vlSelfRef.TB__DOT__uut__DOT__P_btbTarget = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__fetchTarget;
    vlSelfRef.TB__DOT__uut__DOT__fetch__DOT__btbTarget 
        = vlSelfRef.TB__DOT__uut__DOT__P_btbTarget;
}

void Vtop___024root___nba_comb__TOP__8(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__8\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__b = ((IData)(vlSelfRef.TB__DOT__uut__DOT__decode__DOT__csrOp)
                                                    ? vlSelfRef.TB__DOT__uut__DOT__decode__DOT__csr
                                                    : vlSelfRef.TB__DOT__uut__DOT__decode__DOT__r2);
    vlSelfRef.TB__DOT__uut__DOT__D_b = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__b;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__bD = vlSelfRef.TB__DOT__uut__DOT__D_b;
}

void Vtop___024root___nba_comb__TOP__9(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__9\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__fwdAE 
        = (((IData)(vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__r1EqMem) 
            & (IData)(vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__regWriteM))
            ? 2U : (((IData)(vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__r1EqW) 
                     & (IData)(vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__regWriteW))
                     ? 1U : 0U));
    vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__fwdBE 
        = (((IData)(vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__r2EqMem) 
            & (IData)(vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__regWriteM))
            ? 2U : (((IData)(vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__r2EqW) 
                     & (IData)(vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__regWriteW))
                     ? 1U : 0U));
    vlSelfRef.TB__DOT__uut__DOT__H_fwdAE = vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__fwdAE;
    vlSelfRef.TB__DOT__uut__DOT__H_fwdBE = vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__fwdBE;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__fwdA 
        = vlSelfRef.TB__DOT__uut__DOT__H_fwdAE;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__fwdB 
        = vlSelfRef.TB__DOT__uut__DOT__H_fwdBE;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__r1Hz 
        = ((0U == (IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__fwdA))
            ? vlSelfRef.TB__DOT__uut__DOT__execute__DOT__a
            : ((2U == (IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__fwdA))
                ? vlSelfRef.TB__DOT__uut__DOT__execute__DOT__aluResultM
                : ((1U == (IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__fwdA))
                    ? vlSelfRef.TB__DOT__uut__DOT__execute__DOT__resultW
                    : vlSelfRef.TB__DOT__uut__DOT__execute__DOT__a)));
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__r2Hz 
        = ((0U == (IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__fwdB))
            ? vlSelfRef.TB__DOT__uut__DOT__execute__DOT__b
            : ((2U == (IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__fwdB))
                ? vlSelfRef.TB__DOT__uut__DOT__execute__DOT__aluResultM
                : ((1U == (IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__fwdB))
                    ? vlSelfRef.TB__DOT__uut__DOT__execute__DOT__resultW
                    : vlSelfRef.TB__DOT__uut__DOT__execute__DOT__b)));
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__csrU__DOT__rs1Uimm 
        = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__r1Hz;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__srcA 
        = ((0U == (IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__aluSrcA))
            ? vlSelfRef.TB__DOT__uut__DOT__execute__DOT__r1Hz
            : ((1U == (IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__aluSrcA))
                ? vlSelfRef.TB__DOT__uut__DOT__execute__DOT__pc
                : 0U));
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__writeData 
        = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__r2Hz;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__csrU__DOT__csr 
        = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__r2Hz;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__srcB 
        = ((IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__aluSrcB)
            ? vlSelfRef.TB__DOT__uut__DOT__execute__DOT__immExt
            : vlSelfRef.TB__DOT__uut__DOT__execute__DOT__r2Hz);
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__alu__DOT__srcA 
        = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__srcA;
    vlSelfRef.TB__DOT__uut__DOT__E_writeData = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__writeData;
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
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__alu__DOT__srcB 
        = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__srcB;
    vlSelfRef.TB__DOT__uut__DOT__mem__DOT__writeDataE 
        = vlSelfRef.TB__DOT__uut__DOT__E_writeData;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__csrResult 
        = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__csrU__DOT__csrResult;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__alu__DOT__srcBlwr 
        = (0x0000001fU & vlSelfRef.TB__DOT__uut__DOT__execute__DOT__alu__DOT__srcB);
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
    vlSelfRef.TB__DOT__uut__DOT__mem__DOT__csrResultE 
        = vlSelfRef.TB__DOT__uut__DOT__E_csrResult;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__aluResult 
        = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__alu__DOT__aluResult;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__branchFlag 
        = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__alu__DOT__branchFlag;
    vlSelfRef.TB__DOT__uut__DOT__E_aluResult = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__aluResult;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__pcSel 
        = (((IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__branch) 
            & (IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__branchFlag)) 
           | (IData)(vlSelfRef.TB__DOT__uut__DOT__execute__DOT__jump));
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
    vlSelfRef.TB__DOT__uut__DOT__fetch__DOT__pcSelE 
        = vlSelfRef.TB__DOT__uut__DOT__E_pcSel;
    vlSelfRef.TB__DOT__uut__DOT__E_pcTarget = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__pcTarget;
    vlSelfRef.TB__DOT__uut__DOT__E_btbUpdate = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__btbUpdate;
    vlSelfRef.TB__DOT__uut__DOT__E_wrongBranch = vlSelfRef.TB__DOT__uut__DOT__execute__DOT__wrongBranch;
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
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__csrF__DOT__wrongBranch 
        = vlSelfRef.TB__DOT__uut__DOT__decode__DOT__wrongBranch;
    vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__bStall 
        = vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__wrongBranchE;
    vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__flushD 
        = vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__bStall;
    vlSelfRef.TB__DOT__uut__DOT__H_flushD = vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__flushD;
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__flush 
        = vlSelfRef.TB__DOT__uut__DOT__H_flushD;
}

void Vtop___024root___nba_comb__TOP__10(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__10\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__fetchHit 
        = ((IData)(vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__fetchEntry) 
           & ((vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__fetchTag 
               == vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__fetchTagBtb) 
              & (IData)(vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__percep_pred_taken)));
    vlSelfRef.TB__DOT__uut__DOT__P_bPredictTaken = vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__fetchHit;
    vlSelfRef.TB__DOT__uut__DOT__fetch__DOT__bPredictTaken 
        = vlSelfRef.TB__DOT__uut__DOT__P_bPredictTaken;
    vlSelfRef.TB__DOT__uut__DOT__fetch__DOT__bPredictedTaken 
        = ((IData)(vlSelfRef.TB__DOT__uut__DOT__fetch__DOT__bPredictTaken) 
           & (IData)(vlSelfRef.TB__DOT__uut__DOT__fetch__DOT__usePredictor));
    vlSelfRef.TB__DOT__uut__DOT__F_bPredictedTaken 
        = vlSelfRef.TB__DOT__uut__DOT__fetch__DOT__bPredictedTaken;
    vlSelfRef.TB__DOT__uut__DOT__decode__DOT__bPredictedTakenF 
        = vlSelfRef.TB__DOT__uut__DOT__F_bPredictedTaken;
}

void Vtop___024root___nba_comb__TOP__11(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__11\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    __Vtableidx2 = (((IData)(vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__exTaken) 
                     << 2U) | (IData)(vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__exCounter));
    vlSelfRef.TB__DOT__uut__DOT__bPredict__DOT__nextCount 
        = Vtop__ConstPool__TABLE_he5e515f5_0[__Vtableidx2];
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
}

void Vtop___024root___nba_comb__TOP__12(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__12\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__flushE 
        = ((IData)(vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__bStall) 
           | (IData)(vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__lwStall));
    vlSelfRef.TB__DOT__uut__DOT__H_flushE = vlSelfRef.TB__DOT__uut__DOT__hazard__DOT__flushE;
    vlSelfRef.TB__DOT__uut__DOT__execute__DOT__flush 
        = vlSelfRef.TB__DOT__uut__DOT__H_flushE;
}

void Vtop___024root___nba_comb__TOP__13(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__13\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_0;
    __VdfgRegularize_h6e95ff9d_0_0 = 0;
    // Body
    __VdfgRegularize_h6e95ff9d_0_0 = (((IData)(vlSelfRef.TB__DOT__uut__DOT__fetch__DOT__wrongBranchE) 
                                       << 1U) | (IData)(vlSelfRef.TB__DOT__uut__DOT__fetch__DOT__bPredictTaken));
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
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x0000000000000800ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((0x0000000000000200ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((0x0000000000000080ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((0x0000000000000100ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__5(vlSelf);
    }
    if ((0x0000000000000400ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__6(vlSelf);
    }
    if ((0x0000000000000020ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__7(vlSelf);
    }
    if ((0x0000000000000040ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__8(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__9(vlSelf);
    }
    if ((0x0000000000000010ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__10(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__11(vlSelf);
    }
    if ((0x0000000000000200ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__12(vlSelf);
    }
    if ((0x0000000000000080ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__13(vlSelf);
    }
    if ((0x0000000000000420ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((0x0000000000000020ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__14(vlSelf);
    }
    if ((0x000000000000000aULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__1(vlSelf);
    }
    if ((6ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__2(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__15(vlSelf);
    }
    if ((0x0000000000000012ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__3(vlSelf);
    }
    if ((0x0000000000000030ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__4(vlSelf);
    }
    if ((0x0000000000000050ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__5(vlSelf);
    }
    if ((0x0000000000000090ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__6(vlSelf);
    }
    if ((0x0000000000000081ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__7(vlSelf);
    }
    if ((0x000000000000000eULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__8(vlSelf);
    }
    if ((0x0000000000000070ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__9(vlSelf);
    }
    if ((0x0000000000000181ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__10(vlSelf);
    }
    if ((0x00000000000000f0ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__11(vlSelf);
    }
    if ((0x0000000000000072ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__12(vlSelf);
    }
    if ((0x00000000000001f1ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__13(vlSelf);
    }
}

void Vtop___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_triggers__act(vlSelf);
    Vtop___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vtop___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtop___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        Vtop___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("/mnt/c/Users/Prasit/Documents/ACSA_RISCV/RV_new_updated_perceptron/rtl/TB.sv", 2, "", "Input combinational region did not converge after 100 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
    } while (Vtop___024root___eval_phase__ico(vlSelf));
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("/mnt/c/Users/Prasit/Documents/ACSA_RISCV/RV_new_updated_perceptron/rtl/TB.sv", 2, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("/mnt/c/Users/Prasit/Documents/ACSA_RISCV/RV_new_updated_perceptron/rtl/TB.sv", 2, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vtop___024root___eval_phase__act(vlSelf));
    } while (Vtop___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
