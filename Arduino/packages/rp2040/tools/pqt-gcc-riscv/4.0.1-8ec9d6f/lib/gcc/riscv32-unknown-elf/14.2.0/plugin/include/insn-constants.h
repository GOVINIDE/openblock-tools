/* Generated automatically by the program `genconstants'
   from the machine description file `md'.  */

#ifndef GCC_INSN_CONSTANTS_H
#define GCC_INSN_CONSTANTS_H

#define SP_REGNUM 2
#define A2_REGNUM 12
#define S11_REGNUM 27
#define T2_REGNUM 7
#define VTYPE_REGNUM 67
#define A5_REGNUM 15
#define S2_REGNUM 18
#define S0_REGNUM 8
#define T4_REGNUM 29
#define T1_REGNUM 6
#define NORMAL_RETURN 0
#define A0_REGNUM 10
#define S5_REGNUM 21
#define EXCEPTION_RETURN 2
#define S8_REGNUM 24
#define A3_REGNUM 13
#define VXRM_REGNUM 68
#define VL_REGNUM 66
#define FRM_REGNUM 69
#define A6_REGNUM 16
#define S3_REGNUM 19
#define GP_REGNUM 3
#define A1_REGNUM 11
#define T5_REGNUM 30
#define TP_REGNUM 4
#define S10_REGNUM 26
#define SIBCALL_RETURN 1
#define S6_REGNUM 22
#define INVALID_ATTRIBUTE 255
#define S9_REGNUM 25
#define T0_REGNUM 5
#define RETURN_ADDR_REGNUM 1
#define A4_REGNUM 14
#define A7_REGNUM 17
#define S1_REGNUM 9
#define T3_REGNUM 28
#define X0_REGNUM 0
#define S4_REGNUM 20
#define S7_REGNUM 23
#define T6_REGNUM 31

enum unspec {
  UNSPEC_EH_RETURN = 0,
  UNSPEC_ADDRESS_FIRST = 1,
  UNSPEC_FORCE_FOR_MEM = 2,
  UNSPEC_PCREL = 3,
  UNSPEC_LOAD_GOT = 4,
  UNSPEC_TLS = 5,
  UNSPEC_TLS_LE = 6,
  UNSPEC_TLS_IE = 7,
  UNSPEC_TLS_GD = 8,
  UNSPEC_TLSDESC = 9,
  UNSPEC_AUIPC = 10,
  UNSPEC_FLT_QUIET = 11,
  UNSPEC_FLE_QUIET = 12,
  UNSPEC_COPYSIGN = 13,
  UNSPEC_RINT = 14,
  UNSPEC_ROUND = 15,
  UNSPEC_FLOOR = 16,
  UNSPEC_CEIL = 17,
  UNSPEC_BTRUNC = 18,
  UNSPEC_ROUNDEVEN = 19,
  UNSPEC_NEARBYINT = 20,
  UNSPEC_LRINT = 21,
  UNSPEC_LROUND = 22,
  UNSPEC_FMIN = 23,
  UNSPEC_FMAX = 24,
  UNSPEC_FMINM = 25,
  UNSPEC_FMAXM = 26,
  UNSPEC_TIE = 27,
  UNSPEC_ORC_B = 28,
  UNSPEC_CLMUL = 29,
  UNSPEC_CLMULH = 30,
  UNSPEC_CLMULR = 31,
  UNSPEC_CALLEE_CC = 32,
  UNSPEC_STRLEN = 33,
  UNSPEC_FMV_SFP16_X = 34,
  UNSPEC_XTHEADFMV = 35,
  UNSPEC_XTHEADFMV_HW = 36,
  UNSPEC_BREV8 = 37,
  UNSPEC_ZIP = 38,
  UNSPEC_UNZIP = 39,
  UNSPEC_PACK = 40,
  UNSPEC_PACKH = 41,
  UNSPEC_PACKW = 42,
  UNSPEC_XPERM8 = 43,
  UNSPEC_XPERM4 = 44,
  UNSPEC_AES_DSI = 45,
  UNSPEC_AES_DSMI = 46,
  UNSPEC_AES_DS = 47,
  UNSPEC_AES_DSM = 48,
  UNSPEC_AES_IM = 49,
  UNSPEC_AES_KS1I = 50,
  UNSPEC_AES_KS2 = 51,
  UNSPEC_AES_ES = 52,
  UNSPEC_AES_ESM = 53,
  UNSPEC_AES_ESI = 54,
  UNSPEC_AES_ESMI = 55,
  UNSPEC_SHA_256_SIG0 = 56,
  UNSPEC_SHA_256_SIG1 = 57,
  UNSPEC_SHA_256_SUM0 = 58,
  UNSPEC_SHA_256_SUM1 = 59,
  UNSPEC_SHA_512_SIG0 = 60,
  UNSPEC_SHA_512_SIG0H = 61,
  UNSPEC_SHA_512_SIG0L = 62,
  UNSPEC_SHA_512_SIG1 = 63,
  UNSPEC_SHA_512_SIG1H = 64,
  UNSPEC_SHA_512_SIG1L = 65,
  UNSPEC_SHA_512_SUM0 = 66,
  UNSPEC_SHA_512_SUM0R = 67,
  UNSPEC_SHA_512_SUM1 = 68,
  UNSPEC_SHA_512_SUM1R = 69,
  UNSPEC_SM3_P0 = 70,
  UNSPEC_SM3_P1 = 71,
  UNSPEC_SM4_ED = 72,
  UNSPEC_SM4_KS = 73,
  UNSPEC_COMPARE_AND_SWAP = 74,
  UNSPEC_COMPARE_AND_SWAP_SUBWORD = 75,
  UNSPEC_SYNC_OLD_OP = 76,
  UNSPEC_SYNC_OLD_OP_SUBWORD = 77,
  UNSPEC_SYNC_EXCHANGE = 78,
  UNSPEC_SYNC_EXCHANGE_SUBWORD = 79,
  UNSPEC_ATOMIC_LOAD = 80,
  UNSPEC_ATOMIC_STORE = 81,
  UNSPEC_MEMORY_BARRIER = 82,
  UNSPEC_VSETVL = 83,
  UNSPEC_VUNDEF = 84,
  UNSPEC_VPREDICATE = 85,
  UNSPEC_VLMAX = 86,
  UNSPEC_UNIT_STRIDED = 87,
  UNSPEC_STRIDED = 88,
  UNSPEC_ORDERED = 89,
  UNSPEC_UNORDERED = 90,
  UNSPEC_VMULHS = 91,
  UNSPEC_VMULHU = 92,
  UNSPEC_VMULHSU = 93,
  UNSPEC_VADC = 94,
  UNSPEC_VSBC = 95,
  UNSPEC_VMADC = 96,
  UNSPEC_VMSBC = 97,
  UNSPEC_OVERFLOW = 98,
  UNSPEC_VNCLIP = 99,
  UNSPEC_VNCLIPU = 100,
  UNSPEC_VSSRL = 101,
  UNSPEC_VSSRA = 102,
  UNSPEC_VAADDU = 103,
  UNSPEC_VAADD = 104,
  UNSPEC_VASUBU = 105,
  UNSPEC_VASUB = 106,
  UNSPEC_VSMUL = 107,
  UNSPEC_VMSBF = 108,
  UNSPEC_VMSIF = 109,
  UNSPEC_VMSOF = 110,
  UNSPEC_VIOTA = 111,
  UNSPEC_VFRSQRT7 = 112,
  UNSPEC_VFREC7 = 113,
  UNSPEC_VFCLASS = 114,
  UNSPEC_VCOPYSIGN = 115,
  UNSPEC_VXORSIGN = 116,
  UNSPEC_VFCVT = 117,
  UNSPEC_UNSIGNED_VFCVT = 118,
  UNSPEC_ROD = 119,
  UNSPEC_VSLIDEUP = 120,
  UNSPEC_VSLIDEDOWN = 121,
  UNSPEC_VSLIDE1UP = 122,
  UNSPEC_VSLIDE1DOWN = 123,
  UNSPEC_VFSLIDE1UP = 124,
  UNSPEC_VFSLIDE1DOWN = 125,
  UNSPEC_VRGATHER = 126,
  UNSPEC_VRGATHEREI16 = 127,
  UNSPEC_VCOMPRESS = 128,
  UNSPEC_VLEFF = 129,
  UNSPEC_MODIFY_VL = 130,
  UNSPEC_VFFMA = 131,
  UNSPEC_VFMAX = 132,
  UNSPEC_VFMIN = 133,
  UNSPEC_REDUC = 134,
  UNSPEC_REDUC_SUM = 135,
  UNSPEC_REDUC_SUM_ORDERED = 136,
  UNSPEC_REDUC_SUM_UNORDERED = 137,
  UNSPEC_REDUC_MAXU = 138,
  UNSPEC_REDUC_MAX = 139,
  UNSPEC_REDUC_MINU = 140,
  UNSPEC_REDUC_MIN = 141,
  UNSPEC_REDUC_AND = 142,
  UNSPEC_REDUC_OR = 143,
  UNSPEC_REDUC_XOR = 144,
  UNSPEC_WREDUC_SUM = 145,
  UNSPEC_WREDUC_SUMU = 146,
  UNSPEC_WREDUC_SUM_ORDERED = 147,
  UNSPEC_WREDUC_SUM_UNORDERED = 148,
  UNSPEC_TH_VLB = 149,
  UNSPEC_TH_VLBU = 150,
  UNSPEC_TH_VLH = 151,
  UNSPEC_TH_VLHU = 152,
  UNSPEC_TH_VLW = 153,
  UNSPEC_TH_VLWU = 154,
  UNSPEC_TH_VLSB = 155,
  UNSPEC_TH_VLSBU = 156,
  UNSPEC_TH_VLSH = 157,
  UNSPEC_TH_VLSHU = 158,
  UNSPEC_TH_VLSW = 159,
  UNSPEC_TH_VLSWU = 160,
  UNSPEC_TH_VLXB = 161,
  UNSPEC_TH_VLXBU = 162,
  UNSPEC_TH_VLXH = 163,
  UNSPEC_TH_VLXHU = 164,
  UNSPEC_TH_VLXW = 165,
  UNSPEC_TH_VLXWU = 166,
  UNSPEC_TH_VSUXB = 167,
  UNSPEC_TH_VSUXH = 168,
  UNSPEC_TH_VSUXW = 169,
  UNSPEC_TH_VWLDST = 170,
  UNSPEC_VBREV = 171,
  UNSPEC_VBREV8 = 172,
  UNSPEC_VREV8 = 173,
  UNSPEC_VCLMUL = 174,
  UNSPEC_VCLMULH = 175,
  UNSPEC_VGHSH = 176,
  UNSPEC_VGMUL = 177,
  UNSPEC_VAESEF = 178,
  UNSPEC_VAESEFVV = 179,
  UNSPEC_VAESEFVS = 180,
  UNSPEC_VAESEM = 181,
  UNSPEC_VAESEMVV = 182,
  UNSPEC_VAESEMVS = 183,
  UNSPEC_VAESDF = 184,
  UNSPEC_VAESDFVV = 185,
  UNSPEC_VAESDFVS = 186,
  UNSPEC_VAESDM = 187,
  UNSPEC_VAESDMVV = 188,
  UNSPEC_VAESDMVS = 189,
  UNSPEC_VAESZ = 190,
  UNSPEC_VAESZVVNULL = 191,
  UNSPEC_VAESZVS = 192,
  UNSPEC_VAESKF1 = 193,
  UNSPEC_VAESKF2 = 194,
  UNSPEC_VSHA2MS = 195,
  UNSPEC_VSHA2CH = 196,
  UNSPEC_VSHA2CL = 197,
  UNSPEC_VSM4K = 198,
  UNSPEC_VSM4R = 199,
  UNSPEC_VSM4RVV = 200,
  UNSPEC_VSM4RVS = 201,
  UNSPEC_VSM3ME = 202,
  UNSPEC_VSM3C = 203,
  UNSPEC_CV_ALU_CLIP = 204,
  UNSPEC_CV_ALU_CLIPR = 205,
  UNSPEC_CV_ALU_CLIPU = 206,
  UNSPEC_CV_ALU_CLIPUR = 207,
  UNSPECV_CV_ELW = 208,
  UNSPEC_CV_ADD_H = 209,
  UNSPEC_CV_ADD_B = 210,
  UNSPEC_CV_ADD_SC_H = 211,
  UNSPEC_CV_ADD_SC_B = 212,
  UNSPEC_CV_SUB_H = 213,
  UNSPEC_CV_SUB_B = 214,
  UNSPEC_CV_SUB_SC_H = 215,
  UNSPEC_CV_SUB_SC_B = 216,
  UNSPEC_CV_AVG_H = 217,
  UNSPEC_CV_AVG_B = 218,
  UNSPEC_CV_AVG_SC_H = 219,
  UNSPEC_CV_AVG_SC_B = 220,
  UNSPEC_CV_AVGU_H = 221,
  UNSPEC_CV_AVGU_B = 222,
  UNSPEC_CV_AVGU_SC_H = 223,
  UNSPEC_CV_AVGU_SC_B = 224,
  UNSPEC_CV_MIN_H = 225,
  UNSPEC_CV_MIN_B = 226,
  UNSPEC_CV_MIN_SC_H = 227,
  UNSPEC_CV_MIN_SC_B = 228,
  UNSPEC_CV_MINU_H = 229,
  UNSPEC_CV_MINU_B = 230,
  UNSPEC_CV_MINU_SC_H = 231,
  UNSPEC_CV_MINU_SC_B = 232,
  UNSPEC_CV_MAX_H = 233,
  UNSPEC_CV_MAX_B = 234,
  UNSPEC_CV_MAX_SC_H = 235,
  UNSPEC_CV_MAX_SC_B = 236,
  UNSPEC_CV_MAXU_H = 237,
  UNSPEC_CV_MAXU_B = 238,
  UNSPEC_CV_MAXU_SC_H = 239,
  UNSPEC_CV_MAXU_SC_B = 240,
  UNSPEC_CV_SRL_H = 241,
  UNSPEC_CV_SRL_B = 242,
  UNSPEC_CV_SRL_SC_H = 243,
  UNSPEC_CV_SRL_SC_B = 244,
  UNSPEC_CV_SRA_H = 245,
  UNSPEC_CV_SRA_B = 246,
  UNSPEC_CV_SRA_SC_H = 247,
  UNSPEC_CV_SRA_SC_B = 248,
  UNSPEC_CV_SLL_H = 249,
  UNSPEC_CV_SLL_B = 250,
  UNSPEC_CV_SLL_SC_H = 251,
  UNSPEC_CV_SLL_SC_B = 252,
  UNSPEC_CV_OR_H = 253,
  UNSPEC_CV_OR_B = 254,
  UNSPEC_CV_OR_SC_H = 255,
  UNSPEC_CV_OR_SC_B = 256,
  UNSPEC_CV_XOR_H = 257,
  UNSPEC_CV_XOR_B = 258,
  UNSPEC_CV_XOR_SC_H = 259,
  UNSPEC_CV_XOR_SC_B = 260,
  UNSPEC_CV_AND_H = 261,
  UNSPEC_CV_AND_B = 262,
  UNSPEC_CV_AND_SC_H = 263,
  UNSPEC_CV_AND_SC_B = 264,
  UNSPEC_CV_ABS_H = 265,
  UNSPEC_CV_ABS_B = 266,
  UNSPEC_CV_NEG_H = 267,
  UNSPEC_CV_NEG_B = 268,
  UNSPEC_CV_EXTRACT_H = 269,
  UNSPEC_CV_EXTRACT_B = 270,
  UNSPEC_CV_EXTRACTU_H = 271,
  UNSPEC_CV_EXTRACTU_B = 272,
  UNSPEC_CV_INSERT_H = 273,
  UNSPEC_CV_INSERT_B = 274,
  UNSPEC_CV_DOTUP_H = 275,
  UNSPEC_CV_DOTUP_B = 276,
  UNSPEC_CV_DOTUP_SC_H = 277,
  UNSPEC_CV_DOTUP_SC_B = 278,
  UNSPEC_CV_DOTUSP_H = 279,
  UNSPEC_CV_DOTUSP_B = 280,
  UNSPEC_CV_DOTUSP_SC_H = 281,
  UNSPEC_CV_DOTUSP_SC_B = 282,
  UNSPEC_CV_DOTSP_H = 283,
  UNSPEC_CV_DOTSP_B = 284,
  UNSPEC_CV_DOTSP_SC_H = 285,
  UNSPEC_CV_DOTSP_SC_B = 286,
  UNSPEC_CV_SDOTUP_H = 287,
  UNSPEC_CV_SDOTUP_B = 288,
  UNSPEC_CV_SDOTUP_SC_H = 289,
  UNSPEC_CV_SDOTUP_SC_B = 290,
  UNSPEC_CV_SDOTUSP_H = 291,
  UNSPEC_CV_SDOTUSP_B = 292,
  UNSPEC_CV_SDOTUSP_SC_H = 293,
  UNSPEC_CV_SDOTUSP_SC_B = 294,
  UNSPEC_CV_SDOTSP_H = 295,
  UNSPEC_CV_SDOTSP_B = 296,
  UNSPEC_CV_SDOTSP_SC_H = 297,
  UNSPEC_CV_SDOTSP_SC_B = 298,
  UNSPEC_CV_SHUFFLE_H = 299,
  UNSPEC_CV_SHUFFLE_SCI_H = 300,
  UNSPEC_CV_SHUFFLE_B = 301,
  UNSPEC_CV_SHUFFLE_SCI_B = 302,
  UNSPEC_CV_SHUFFLE2_H = 303,
  UNSPEC_CV_SHUFFLE2_B = 304,
  UNSPEC_CV_PACKHI_H = 305,
  UNSPEC_CV_PACKLO_H = 306,
  UNSPEC_CV_PACKHI_B = 307,
  UNSPEC_CV_PACKLO_B = 308,
  UNSPEC_CV_CMPEQ_H = 309,
  UNSPEC_CV_CMPEQ_B = 310,
  UNSPEC_CV_CMPEQ_SC_H = 311,
  UNSPEC_CV_CMPEQ_SC_B = 312,
  UNSPEC_CV_CMPNE_H = 313,
  UNSPEC_CV_CMPNE_B = 314,
  UNSPEC_CV_CMPNE_SC_H = 315,
  UNSPEC_CV_CMPNE_SC_B = 316,
  UNSPEC_CV_CMPGT_H = 317,
  UNSPEC_CV_CMPGT_B = 318,
  UNSPEC_CV_CMPGT_SC_H = 319,
  UNSPEC_CV_CMPGT_SC_B = 320,
  UNSPEC_CV_CMPGE_H = 321,
  UNSPEC_CV_CMPGE_B = 322,
  UNSPEC_CV_CMPGE_SC_H = 323,
  UNSPEC_CV_CMPGE_SC_B = 324,
  UNSPEC_CV_CMPLT_H = 325,
  UNSPEC_CV_CMPLT_B = 326,
  UNSPEC_CV_CMPLT_SC_H = 327,
  UNSPEC_CV_CMPLT_SC_B = 328,
  UNSPEC_CV_CMPLE_H = 329,
  UNSPEC_CV_CMPLE_B = 330,
  UNSPEC_CV_CMPLE_SC_H = 331,
  UNSPEC_CV_CMPLE_SC_B = 332,
  UNSPEC_CV_CMPGTU_H = 333,
  UNSPEC_CV_CMPGTU_B = 334,
  UNSPEC_CV_CMPGTU_SC_H = 335,
  UNSPEC_CV_CMPGTU_SC_B = 336,
  UNSPEC_CV_CMPGEU_H = 337,
  UNSPEC_CV_CMPGEU_B = 338,
  UNSPEC_CV_CMPGEU_SC_H = 339,
  UNSPEC_CV_CMPGEU_SC_B = 340,
  UNSPEC_CV_CMPLTU_H = 341,
  UNSPEC_CV_CMPLTU_B = 342,
  UNSPEC_CV_CMPLTU_SC_H = 343,
  UNSPEC_CV_CMPLTU_SC_B = 344,
  UNSPEC_CV_CMPLEU_H = 345,
  UNSPEC_CV_CMPLEU_B = 346,
  UNSPEC_CV_CMPLEU_SC_H = 347,
  UNSPEC_CV_CMPLEU_SC_B = 348,
  UNSPEC_CV_CPLXMUL_R = 349,
  UNSPEC_CV_CPLXMUL_I = 350,
  UNSPEC_CV_CPLXCONJ = 351,
  UNSPEC_CV_SUBROTMJ = 352
};
#define NUM_UNSPEC_VALUES 353
extern const char *const unspec_strings[];

enum unspecv {
  UNSPECV_GPR_SAVE = 0,
  UNSPECV_GPR_RESTORE = 1,
  UNSPECV_FRCSR = 2,
  UNSPECV_FSCSR = 3,
  UNSPECV_FRFLAGS = 4,
  UNSPECV_FSFLAGS = 5,
  UNSPECV_FSNVSNAN = 6,
  UNSPECV_MRET = 7,
  UNSPECV_SRET = 8,
  UNSPECV_URET = 9,
  UNSPECV_BLOCKAGE = 10,
  UNSPECV_FENCE = 11,
  UNSPECV_FENCE_I = 12,
  UNSPEC_SSP_SET = 13,
  UNSPEC_SSP_TEST = 14,
  UNSPECV_CLEAN = 15,
  UNSPECV_FLUSH = 16,
  UNSPECV_INVAL = 17,
  UNSPECV_ZERO = 18,
  UNSPECV_PREI = 19,
  UNSPECV_PAUSE = 20,
  UNSPECV_XTHEADINT_PUSH = 21,
  UNSPECV_XTHEADINT_POP = 22,
  UNSPECV_FRM_RESTORE_EXIT = 23
};
#define NUM_UNSPECV_VALUES 24
extern const char *const unspecv_strings[];

#endif /* GCC_INSN_CONSTANTS_H */
