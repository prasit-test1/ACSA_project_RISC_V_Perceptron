// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTOP__SYMS_H_
#define VERILATED_VTOP__SYMS_H_  // guard

#include "verilated.h"
#include "verilated_fst_c.h"

// INCLUDE MODEL CLASS

#include "Vtop.h"

// INCLUDE MODULE CLASSES
#include "Vtop___024root.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vtop__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtop* const __Vm_modelp;
    bool __Vm_dumping = false;  // Dumping is active
    VerilatedMutex __Vm_dumperMutex;  // Protect __Vm_dumperp
    VerilatedFstC* __Vm_dumperp VL_GUARDED_BY(__Vm_dumperMutex) = nullptr;  /// Trace class for $dump*
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtop___024root                 TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_TB;
    VerilatedScope __Vscope_TB__data;
    VerilatedScope __Vscope_TB__instr;
    VerilatedScope __Vscope_TB__uart;
    VerilatedScope __Vscope_TB__uut;
    VerilatedScope __Vscope_TB__uut__bPredict;
    VerilatedScope __Vscope_TB__uut__bPredict__u_percep;
    VerilatedScope __Vscope_TB__uut__bPredict__u_percep__mem;
    VerilatedScope __Vscope_TB__uut__bPredict__u_percep__unnamedblk1;
    VerilatedScope __Vscope_TB__uut__decode;
    VerilatedScope __Vscope_TB__uut__decode__cntrlU;
    VerilatedScope __Vscope_TB__uut__decode__csrF;
    VerilatedScope __Vscope_TB__uut__decode__extImm;
    VerilatedScope __Vscope_TB__uut__decode__regF;
    VerilatedScope __Vscope_TB__uut__execute;
    VerilatedScope __Vscope_TB__uut__execute__alu;
    VerilatedScope __Vscope_TB__uut__execute__csrU;
    VerilatedScope __Vscope_TB__uut__fetch;
    VerilatedScope __Vscope_TB__uut__hazard;
    VerilatedScope __Vscope_TB__uut__mem;
    VerilatedScope __Vscope_TB__uut__wback;

    // SCOPE HIERARCHY
    VerilatedHierarchy __Vhier;

    // CONSTRUCTORS
    Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp);
    ~Vtop__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
    void _traceDump();
    void _traceDumpOpen();
    void _traceDumpClose();
};

#endif  // guard
