enum
{
    RISCV_OP_LUI,
    RISCV_OP_AUIPC,

    RISCV_OP_JAL,
    RISCV_OP_JALR,

    RISCV_OP_BEQ,
    RISCV_OP_BNE,
    RISCV_OP_BLT,
    RISCV_OP_BGE,
    RISCV_OP_BLTU,
    RISCV_OP_BGEU,

    RISCV_OP_LB,
    RISCV_OP_LH,
    RISCV_OP_LW,
    RISCV_OP_LBU,
    RISCV_OP_LHU,

    RISCV_OP_SB,
    RISCV_OP_SH,
    RISCV_OP_SW,

    RISCV_OP_ADDI,
    RISCV_OP_SLTI,
    RISCV_OP_SLTIU,
    RISCV_OP_XORI,
    RISCV_OP_ORI,
    RISCV_OP_ANDI,

    RISCV_OP_SLLI,
    RISCV_OP_SRLI,
    RISCV_OP_SRAI,

    RISCV_OP_ADD,
    RISCV_OP_SUB,
    RISCV_OP_SLL,
    RISCV_OP_SLT,
    RISCV_OP_SLTU,
    RISCV_OP_XOR,
    RISCV_OP_SRL,
    RISCV_OP_SRA,
    RISCV_OP_OR,
    RISCV_OP_AND,

    RISCV_OP_FENCE,
    RISCV_OP_FENCE_I,

    RISCV_OP_ECALL,
    RISCV_OP_EBREAK,

    RISCV_OP_CSRRW,
    RISCV_OP_CSRRS,
    RISCV_OP_CSRRC,
    RISCV_OP_CSRRWI,
    RISCV_OP_CSRRSI,
    RISCV_OP_CSRRCI,

    RISCV_OP_MAX,


    /* RV32F */
    RV32F_OP_FLW,
    RV32F_OP_FSW,

    RV32F_OP_FMADDS,
    RV32F_OP_FMSUBS,
    RV32F_OP_FNMSUBS,
    RV32F_OP_FNMADDS,

    RV32F_OP_FADDS,
    RV32F_OP_FSUBS,
    RV32F_OP_FMULS,
    RV32F_OP_FDIVS,
    RV32F_OP_FSQRTS,

    RV32F_OP_FSGNJS,
    RV32F_OP_FSGNJNS,
    RV32F_OP_FSGNJXS,

    RV32F_OP_FMINS,
    RV32F_OP_FMAXS,

    RV32F_OP_FCVTWS,
    RV32F_OP_FCVTWUS,

    RV32F_OP_FMVXW,

    RV32F_OP_FEQS,
    RV32F_OP_FLTS,
    RV32F_OP_FLES,

    RV32F_OP_FCLASSS,

    RV32F_OP_FCVTSW,
    RV32F_OP_FCVTSWU,

    RV32F_OP_FMVWX,

    RV32F_OP_FMAX,


    /* RV32D */
    RV32D_OP_FLD,
    RV32D_OP_FSD,

    RV32D_OP_FMADDD,
    RV32D_OP_FMSUBD,
    RV32D_OP_FNMSUBD,
    RV32D_OP_FNMADDD,

    RV32D_OP_FADDD,
    RV32D_OP_FSUBD,
    RV32D_OP_FMULD,
    RV32D_OP_FDIVD,
    RV32D_OP_FSQRTD,

    RV32D_OP_FSGNJD,
    RV32D_OP_FSGNJND,
    RV32D_OP_FSGNJXD,

    RV32D_OP_FMIND,
    RV32D_OP_FMAXD,

    RV32D_OP_FCVTSD,
    RV32D_OP_FCVTDS,

    RV32D_OP_FEQD,
    RV32D_OP_FLTD,
    RV32D_OP_FLED,

    RV32D_OP_FCLASSD,

    RV32D_OP_FCVTWD,
    RV32D_OP_FCVTWUD,
    RV32D_OP_FCVTDW,
    RV32D_OP_FCVTDWU,

    RV32D_OP_DMAX,

    RV32UN_OP_UNUPGS,
    RV32UN_OP_UNGCOVS,
    RV32UN_OP_UNSVARS,
    RV32UN_OP_UNCLVARS,
    RV32UN_OP_UNCPVARS,

    RV32UN_OP_UNPART1,

    RV32UN_OP_UNMAX,

};
