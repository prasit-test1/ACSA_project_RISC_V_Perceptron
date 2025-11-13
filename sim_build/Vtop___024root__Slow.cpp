// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

// Parameter definitions for Vtop___024root
constexpr CData/*1:0*/ Vtop___024root::TB__DOT__uut__DOT__hazard__DOT__NO_FWD;
constexpr CData/*1:0*/ Vtop___024root::TB__DOT__uut__DOT__hazard__DOT__MEM_FWD;
constexpr CData/*1:0*/ Vtop___024root::TB__DOT__uut__DOT__hazard__DOT__WB_FWD;
constexpr CData/*4:0*/ Vtop___024root::TB__DOT__uut__DOT__decode__DOT__cntrlU__DOT__OPCODE_RTYPE;
constexpr CData/*4:0*/ Vtop___024root::TB__DOT__uut__DOT__decode__DOT__cntrlU__DOT__OPCODE_IARTHTYPE;
constexpr CData/*4:0*/ Vtop___024root::TB__DOT__uut__DOT__decode__DOT__cntrlU__DOT__OPCODE_LOADTYPE;
constexpr CData/*4:0*/ Vtop___024root::TB__DOT__uut__DOT__decode__DOT__cntrlU__DOT__OPCODE_STYPE;
constexpr CData/*4:0*/ Vtop___024root::TB__DOT__uut__DOT__decode__DOT__cntrlU__DOT__OPCODE_BTYPE;
constexpr CData/*4:0*/ Vtop___024root::TB__DOT__uut__DOT__decode__DOT__cntrlU__DOT__OPCODE_AUIPC;
constexpr CData/*4:0*/ Vtop___024root::TB__DOT__uut__DOT__decode__DOT__cntrlU__DOT__OPCODE_LUI;
constexpr CData/*4:0*/ Vtop___024root::TB__DOT__uut__DOT__decode__DOT__cntrlU__DOT__OPCODE_JAL;
constexpr CData/*4:0*/ Vtop___024root::TB__DOT__uut__DOT__decode__DOT__cntrlU__DOT__OPCODE_JALR;
constexpr CData/*4:0*/ Vtop___024root::TB__DOT__uut__DOT__decode__DOT__cntrlU__DOT__OPCODE_CSR;
constexpr CData/*2:0*/ Vtop___024root::TB__DOT__uut__DOT__decode__DOT__cntrlU__DOT__IMM_TYPE_DEFAULT;
constexpr CData/*2:0*/ Vtop___024root::TB__DOT__uut__DOT__decode__DOT__cntrlU__DOT__IMM_TYPE_SHAMT;
constexpr CData/*2:0*/ Vtop___024root::TB__DOT__uut__DOT__decode__DOT__cntrlU__DOT__IMM_TYPE_I;
constexpr CData/*2:0*/ Vtop___024root::TB__DOT__uut__DOT__decode__DOT__cntrlU__DOT__IMM_TYPE_S;
constexpr CData/*2:0*/ Vtop___024root::TB__DOT__uut__DOT__decode__DOT__cntrlU__DOT__IMM_TYPE_B;
constexpr CData/*2:0*/ Vtop___024root::TB__DOT__uut__DOT__decode__DOT__cntrlU__DOT__IMM_TYPE_U;
constexpr CData/*2:0*/ Vtop___024root::TB__DOT__uut__DOT__decode__DOT__cntrlU__DOT__IMM_TYPE_J;
constexpr CData/*1:0*/ Vtop___024root::TB__DOT__uut__DOT__decode__DOT__cntrlU__DOT__ALU_SRC;
constexpr CData/*1:0*/ Vtop___024root::TB__DOT__uut__DOT__decode__DOT__cntrlU__DOT__MEM_SRC;
constexpr CData/*1:0*/ Vtop___024root::TB__DOT__uut__DOT__decode__DOT__cntrlU__DOT__PC_SRC;
constexpr CData/*1:0*/ Vtop___024root::TB__DOT__uut__DOT__decode__DOT__cntrlU__DOT__RS1;
constexpr CData/*1:0*/ Vtop___024root::TB__DOT__uut__DOT__decode__DOT__cntrlU__DOT__PC;
constexpr CData/*1:0*/ Vtop___024root::TB__DOT__uut__DOT__decode__DOT__cntrlU__DOT__ZERO;
constexpr CData/*2:0*/ Vtop___024root::TB__DOT__uut__DOT__decode__DOT__extImm__DOT__IMM_TYPE_SHAMT;
constexpr CData/*2:0*/ Vtop___024root::TB__DOT__uut__DOT__decode__DOT__extImm__DOT__IMM_TYPE_I;
constexpr CData/*2:0*/ Vtop___024root::TB__DOT__uut__DOT__decode__DOT__extImm__DOT__IMM_TYPE_S;
constexpr CData/*2:0*/ Vtop___024root::TB__DOT__uut__DOT__decode__DOT__extImm__DOT__IMM_TYPE_B;
constexpr CData/*2:0*/ Vtop___024root::TB__DOT__uut__DOT__decode__DOT__extImm__DOT__IMM_TYPE_U;
constexpr CData/*2:0*/ Vtop___024root::TB__DOT__uut__DOT__decode__DOT__extImm__DOT__IMM_TYPE_J;
constexpr CData/*1:0*/ Vtop___024root::TB__DOT__uut__DOT__execute__DOT__RS1;
constexpr CData/*1:0*/ Vtop___024root::TB__DOT__uut__DOT__execute__DOT__PC;
constexpr CData/*1:0*/ Vtop___024root::TB__DOT__uut__DOT__execute__DOT__csrU__DOT__CSRRW;
constexpr CData/*1:0*/ Vtop___024root::TB__DOT__uut__DOT__execute__DOT__csrU__DOT__CSRRS;
constexpr CData/*1:0*/ Vtop___024root::TB__DOT__uut__DOT__execute__DOT__csrU__DOT__CSRRC;
constexpr CData/*1:0*/ Vtop___024root::TB__DOT__uut__DOT__wback__DOT__ALU_SRC;
constexpr CData/*1:0*/ Vtop___024root::TB__DOT__uut__DOT__wback__DOT__MEM_SRC;
constexpr CData/*1:0*/ Vtop___024root::TB__DOT__uut__DOT__wback__DOT__PC_SRC;
constexpr CData/*1:0*/ Vtop___024root::TB__DOT__uut__DOT__bPredict__DOT__sTaken;
constexpr CData/*1:0*/ Vtop___024root::TB__DOT__uut__DOT__bPredict__DOT__wTaken;
constexpr CData/*1:0*/ Vtop___024root::TB__DOT__uut__DOT__bPredict__DOT__wNtaken;
constexpr CData/*1:0*/ Vtop___024root::TB__DOT__uut__DOT__bPredict__DOT__sNtaken;
constexpr IData/*31:0*/ Vtop___024root::TB__DOT__uut__DOT__decode__DOT__csrF__DOT__regSize;
constexpr IData/*31:0*/ Vtop___024root::TB__DOT__uut__DOT__bPredict__DOT__BTB_ENTRIES;
constexpr IData/*31:0*/ Vtop___024root::TB__DOT__uut__DOT__bPredict__DOT__TARGET_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::TB__DOT__uut__DOT__bPredict__DOT__COUNTER_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::TB__DOT__uut__DOT__bPredict__DOT__INDEX_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::TB__DOT__uut__DOT__bPredict__DOT__TAG_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::TB__DOT__uut__DOT__bPredict__DOT__VALID_BIT;
constexpr IData/*31:0*/ Vtop___024root::TB__DOT__uut__DOT__bPredict__DOT__COUNTER_LSB;
constexpr IData/*31:0*/ Vtop___024root::TB__DOT__uut__DOT__bPredict__DOT__COUNTER_MSB;
constexpr IData/*31:0*/ Vtop___024root::TB__DOT__uut__DOT__bPredict__DOT__TARGET_LSB;
constexpr IData/*31:0*/ Vtop___024root::TB__DOT__uut__DOT__bPredict__DOT__TARGET_MSB;
constexpr IData/*31:0*/ Vtop___024root::TB__DOT__uut__DOT__bPredict__DOT__TAG_LSB;
constexpr IData/*31:0*/ Vtop___024root::TB__DOT__uut__DOT__bPredict__DOT__TAG_MSB;
constexpr IData/*31:0*/ Vtop___024root::TB__DOT__uut__DOT__bPredict__DOT__MEM_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::TB__DOT__uut__DOT__bPredict__DOT__P_INDEX_BITS;
constexpr IData/*31:0*/ Vtop___024root::TB__DOT__uut__DOT__bPredict__DOT__P_HIST;
constexpr IData/*31:0*/ Vtop___024root::TB__DOT__uut__DOT__bPredict__DOT__P_WBITS;
constexpr IData/*31:0*/ Vtop___024root::TB__DOT__uut__DOT__bPredict__DOT__P_THRESH;
constexpr IData/*31:0*/ Vtop___024root::TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__INDEX_BITS;
constexpr IData/*31:0*/ Vtop___024root::TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__HIST;
constexpr IData/*31:0*/ Vtop___024root::TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__W_BITS;
constexpr IData/*31:0*/ Vtop___024root::TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__THRESH;
constexpr IData/*31:0*/ Vtop___024root::TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__TOTAL_W;
constexpr IData/*31:0*/ Vtop___024root::TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__INDEX_BITS;
constexpr IData/*31:0*/ Vtop___024root::TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__HIST;
constexpr IData/*31:0*/ Vtop___024root::TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__W_BITS;
constexpr IData/*31:0*/ Vtop___024root::TB__DOT__uut__DOT__bPredict__DOT__u_percep__DOT__mem__DOT__N;
constexpr IData/*31:0*/ Vtop___024root::TB__DOT__instr__DOT__DEPTH;
constexpr IData/*31:0*/ Vtop___024root::TB__DOT__instr__DOT__ADDR_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::TB__DOT__data__DOT__DEPTH;


void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf);

Vtop___024root::Vtop___024root(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop___024root___ctor_var_reset(this);
}

void Vtop___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtop___024root::~Vtop___024root() {
}
