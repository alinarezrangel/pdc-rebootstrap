#define PDCRT_INTERNO
#include "pdcrt/pdcrt.h"
#include "pdcrt/pdcrt_ops.h"
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_f0(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_f1(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_f2(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_f3(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_f4(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_f5(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_f6(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_f7(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_f8(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_f9(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_f10(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_f11(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_f12(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_f13(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_f14(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_f15(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_f16(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_f17(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_f18(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_f19(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k0(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k1(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k2(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k3(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k4(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k5(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k6(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k7(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k8(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k9(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k10(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k11(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k12(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k13(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k14(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k15(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k16(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k17(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k18(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k19(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k20(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k21(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k22(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k23(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k24(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k25(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k26(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k27(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k28(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k29(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k30(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k31(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k32(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k33(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k34(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k35(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k36(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k37(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k38(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k39(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k40(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k41(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k42(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k43(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k44(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k45(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k46(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k47(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k48(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k49(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k50(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k51(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k52(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k53(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k54(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k55(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k56(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k57(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k58(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k59(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k60(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k61(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k62(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k63(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k64(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k65(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k66(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k67(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k68(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k69(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k70(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k71(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k72(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k73(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k74(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k75(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k76(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k77(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k78(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k79(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k80(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k81(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k82(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k83(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k84(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k85(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k86(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k87(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k88(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k89(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k90(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k91(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k92(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k93(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k94(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k95(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k96(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k97(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k98(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k99(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k100(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k101(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k102(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k103(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k104(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k105(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k106(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k107(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k108(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k109(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k110(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k111(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k112(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k113(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k114(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k115(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k116(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k117(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k118(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k119(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k120(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k121(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k122(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k123(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k124(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k125(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k126(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k127(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k128(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k129(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k130(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k131(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k132(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k133(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k134(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k135(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k136(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k137(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k138(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k139(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k140(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k141(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k142(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k143(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k144(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k145(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k146(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k147(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k148(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k149(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k150(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k151(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k152(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k153(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k154(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k155(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k156(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k157(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k158(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k159(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k160(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k161(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k162(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k163(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k164(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k165(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k166(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k167(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k168(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k169(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k170(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k171(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k172(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k173(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k174(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k175(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k176(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k177(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k178(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k179(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k180(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k181(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k182(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k183(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k184(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k185(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k186(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k187(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k188(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k189(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k190(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k191(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k192(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k193(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k194(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k195(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k196(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k197(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k198(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k199(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k200(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k201(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k202(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k203(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k204(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k205(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k206(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k207(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k208(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k209(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k210(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k211(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k212(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k213(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k214(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k215(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k216(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k217(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k218(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k219(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k220(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k221(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k222(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k223(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k224(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k225(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k226(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k227(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k228(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k229(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k230(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k231(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k232(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k233(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k234(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k235(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k236(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k237(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k238(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k239(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k240(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k241(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k242(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k243(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k244(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k245(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k246(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k247(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k248(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k249(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k250(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k251(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k252(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k253(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k254(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k255(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k256(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k257(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k258(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k259(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k260(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k261(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k262(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k263(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k264(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k265(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k266(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k267(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k268(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k269(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k270(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k271(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k272(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k273(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k274(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k275(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k276(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k277(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k278(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k279(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k280(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k281(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k282(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k283(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k284(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k285(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k286(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k287(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k288(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k289(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k290(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k291(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k292(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k293(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k294(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k295(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k296(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k297(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k298(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k299(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k300(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k301(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k302(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k303(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k304(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k305(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k306(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k307(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k308(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k309(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k310(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k311(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k312(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k313(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k314(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k315(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k316(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k317(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k318(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k319(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k320(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k321(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k322(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k323(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k324(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k325(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k326(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k327(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k328(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k329(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k330(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k331(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k332(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k333(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k334(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k335(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k336(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k337(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k338(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k339(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k340(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k341(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k342(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k343(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k344(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k345(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k346(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k347(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k348(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k349(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k350(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k351(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k352(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k353(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k354(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k355(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k356(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k357(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k358(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k359(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k360(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k361(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k362(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k363(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k364(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k365(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k366(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k367(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k368(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k369(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k370(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k371(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k372(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k373(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k374(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k375(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k376(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k377(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k378(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k379(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k380(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k381(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k382(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k383(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k384(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k385(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_f0(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 26:0 >> 31:9 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd|26:0|31:9";
PDCRT_ALOJAR_MARCO(ctx, 6, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_x_N95_sexpr_p0 { const pdcrt_params_base base; const pdcrt_param_data params[2]; };
static const struct pdc_params_data_mpdzibepd_N95_x_N95_sexpr_p0 pdc_params = { .base = { .num_params = 2, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{3}, {4}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 26:37 >> 26:40 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 26:37 >> 26:40 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_obtener_local(ctx, m, 4));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 26:37 >> 26:40 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 26:0 >> 31:9 */
pdcrt_fijar_local_nb(ctx, m, 0, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 26:0 >> 31:9 */
pdcrt_fijar_local_nb(ctx, m, 0, pdcrt_obtener_local(ctx, m, 3));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 26:0 >> 31:9 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 27:13 >> 27:14 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 28:14 >> 28:16 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_obtener_local(ctx, m, 0));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 28:16 >> 28:17 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 6);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k63, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_f1(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 33:0 >> 35:9 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd|33:0|35:9";
PDCRT_ALOJAR_MARCO(ctx, 3, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_x_N95_sexpr_p1 { const pdcrt_params_base base; const pdcrt_param_data params[1]; };
static const struct pdc_params_data_mpdzibepd_N95_x_N95_sexpr_p1 pdc_params = { .base = { .num_params = 1, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{1}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 33:0 >> 35:9 */
pdcrt_fijar_local_nb(ctx, m, 0, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 33:0 >> 35:9 */
pdcrt_fijar_local_nb(ctx, m, 0, pdcrt_obtener_local(ctx, m, 1));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 33:0 >> 35:9 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 34:13 >> 34:15 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_obtener_local(ctx, m, 0));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 34:15 >> 34:16 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 3);
return pdcrt_llamar0(ctx, m->k.marco, m->k.kf, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 2)), pdcrt_xmm_desde_obj(llamar_msj));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 34:15 >> 34:16 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 33:0 >> 35:9 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 33:0 >> 35:9 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 2)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 33:0 >> 35:9 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_f2(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 57:37 >> 57:44 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd|57:37|57:44";
PDCRT_ALOJAR_MARCO(ctx, 6, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_x_N95_sexpr_p2 { const pdcrt_params_base base; const pdcrt_param_data params[1]; };
static const struct pdc_params_data_mpdzibepd_N95_x_N95_sexpr_p2 pdc_params = { .base = { .num_params = 1, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{1}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 57:46 >> 57:49 */
pdcrt_fijar_local_nb(ctx, m, 0, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 57:46 >> 57:49 */
pdcrt_fijar_local_nb(ctx, m, 0, pdcrt_obtener_local(ctx, m, 1));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 57:46 >> 57:49 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 58:15 >> 58:18 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_obtener_local(ctx, m, 0));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 58:21 >> 58:24 */
pdcrt_fijar_local(ctx, m, 3, PDCRT_OBTENER_CONSTANTE(ctx, m, 11));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 58:15 >> 58:24 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 12);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k67, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 2)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 3)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_f3(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 43:0 >> 75:10 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd|43:0|75:10";
PDCRT_ALOJAR_MARCO(ctx, 6, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_x_N95_sexpr_p3 { const pdcrt_params_base base; const pdcrt_param_data params[1]; };
static const struct pdc_params_data_mpdzibepd_N95_x_N95_sexpr_p3 pdc_params = { .base = { .num_params = 1, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{2}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 43:22 >> 43:27 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 43:22 >> 43:27 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_obtener_local(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 43:22 >> 43:27 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 57:17 >> 57:28 */
pdcrt_fijar_local(ctx, m, 3, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 57:30 >> 57:35 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_obtener_local(ctx, m, 1));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 57:37 >> 57:44 */
do {
static const pdcrt_captura caps[] = {};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzibepd_N95_x_N95_sexpr_f2, caps, 0);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 5, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 57:17 >> 57:29 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 21);
return pdcrt_llamar2(ctx, m->k.marco, m->k.kf, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 3)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 57:17 >> 57:29 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 57:17 >> 57:29 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 57:17 >> 57:29 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 43:0 >> 75:10 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 43:0 >> 75:10 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 3)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 43:0 >> 75:10 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_f4(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 82:0 >> 115:10 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd|82:0|115:10";
PDCRT_ALOJAR_MARCO(ctx, 10, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_x_N95_sexpr_p4 { const pdcrt_params_base base; const pdcrt_param_data params[1]; };
static const struct pdc_params_data_mpdzibepd_N95_x_N95_sexpr_p4 pdc_params = { .base = { .num_params = 1, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{6}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 82:25 >> 82:30 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 82:25 >> 82:30 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_obtener_local(ctx, m, 6));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 82:25 >> 82:30 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 83:14 >> 83:17 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 83:19 >> 83:20 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 84:16 >> 84:18 */
pdcrt_fijar_local(ctx, m, 6, PDCRT_OBTENER_CONSTANTE(ctx, m, 22));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 84:10 >> 84:13 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_obtener_local(ctx, m, 6));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 84:10 >> 84:13 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 85:14 >> 85:15 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_entero(PDCRT_ENTERO_C(0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 85:10 >> 85:11 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_obtener_local(ctx, m, 6));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 85:10 >> 85:11 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k89, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_f5(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 123:0 >> 125:10 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd|123:0|125:10";
PDCRT_ALOJAR_MARCO(ctx, 12, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_x_N95_sexpr_p5 { const pdcrt_params_base base; const pdcrt_param_data params[1]; };
static const struct pdc_params_data_mpdzibepd_N95_x_N95_sexpr_p5 pdc_params = { .base = { .num_params = 1, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{4}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 123:34 >> 123:36 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 123:34 >> 123:36 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_obtener_local(ctx, m, 4));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 123:34 >> 123:36 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 124:14 >> 124:19 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 124:35 >> 124:37 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_obtener_local(ctx, m, 3));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 124:19 >> 124:20 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 31);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k132, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_f6(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 134:0 >> 141:16 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd|134:0|141:16";
PDCRT_ALOJAR_MARCO(ctx, 8, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_x_N95_sexpr_p6 { const pdcrt_params_base base; const pdcrt_param_data params[1]; };
static const struct pdc_params_data_mpdzibepd_N95_x_N95_sexpr_p6 pdc_params = { .base = { .num_params = 1, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{3}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 134:34 >> 134:40 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 134:34 >> 134:40 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_obtener_local(ctx, m, 3));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 134:34 >> 134:40 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 135:13 >> 135:15 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 136:15 >> 136:21 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_obtener_local(ctx, m, 1));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 136:21 >> 136:22 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 34);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k136, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_f7(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 143:0 >> 158:16 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd|143:0|158:16";
PDCRT_ALOJAR_MARCO(ctx, 14, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_x_N95_sexpr_p7 { const pdcrt_params_base base; const pdcrt_param_data params[2]; };
static const struct pdc_params_data_mpdzibepd_N95_x_N95_sexpr_p7 pdc_params = { .base = { .num_params = 2, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{8}, {9}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 143:35 >> 143:41 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 143:35 >> 143:41 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_obtener_local(ctx, m, 9));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 143:35 >> 143:41 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 143:31 >> 143:33 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 143:31 >> 143:33 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_obtener_local(ctx, m, 8));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 143:31 >> 143:33 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 144:13 >> 144:16 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 145:16 >> 145:18 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_obtener_local(ctx, m, 5));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 145:10 >> 145:13 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_obtener_local(ctx, m, 8));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 145:10 >> 145:13 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 9:0 >> 9:5 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k144, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_f8(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 160:0 >> 174:16 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd|160:0|174:16";
PDCRT_ALOJAR_MARCO(ctx, 11, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_x_N95_sexpr_p8 { const pdcrt_params_base base; const pdcrt_param_data params[1]; };
static const struct pdc_params_data_mpdzibepd_N95_x_N95_sexpr_p8 pdc_params = { .base = { .num_params = 1, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{6}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 160:28 >> 160:34 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 160:28 >> 160:34 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_obtener_local(ctx, m, 6));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 160:28 >> 160:34 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 161:14 >> 161:23 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 161:25 >> 161:29 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 162:22 >> 162:29 */
pdcrt_fijar_local(ctx, m, 8, ctx->espacio_de_nombres_runtime);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 162:22 >> 162:29 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 39);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k164, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_f9(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 176:0 >> 213:16 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd|176:0|213:16";
PDCRT_ALOJAR_MARCO(ctx, 13, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_x_N95_sexpr_p9 { const pdcrt_params_base base; const pdcrt_param_data params[1]; };
static const struct pdc_params_data_mpdzibepd_N95_x_N95_sexpr_p9 pdc_params = { .base = { .num_params = 1, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{8}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 176:28 >> 176:34 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 176:28 >> 176:34 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_obtener_local(ctx, m, 8));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 176:28 >> 176:34 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 177:13 >> 177:18 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 178:18 >> 178:20 */
pdcrt_fijar_local(ctx, m, 8, PDCRT_OBTENER_CONSTANTE(ctx, m, 22));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 178:10 >> 178:15 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_obtener_local(ctx, m, 8));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 178:10 >> 178:15 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 33:7 >> 33:15 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k182, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_f10(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 242:0 >> 250:16 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd|242:0|250:16";
PDCRT_ALOJAR_MARCO(ctx, 5, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_x_N95_sexpr_p10 { const pdcrt_params_base base; const pdcrt_param_data params[1]; };
static const struct pdc_params_data_mpdzibepd_N95_x_N95_sexpr_p10 pdc_params = { .base = { .num_params = 1, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{2}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 242:27 >> 242:33 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 242:27 >> 242:33 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_obtener_local(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 242:27 >> 242:33 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 248:17 >> 248:29 */
pdcrt_fijar_local(ctx, m, 3, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 248:31 >> 248:37 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_obtener_local(ctx, m, 1));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 248:17 >> 248:30 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 21);
return pdcrt_llamar1(ctx, m->k.marco, m->k.kf, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 3)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 248:17 >> 248:30 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 248:17 >> 248:30 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 242:0 >> 250:16 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 242:0 >> 250:16 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 3)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 242:0 >> 250:16 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_f11(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 252:0 >> 266:16 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd|252:0|266:16";
PDCRT_ALOJAR_MARCO(ctx, 15, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_x_N95_sexpr_p11 { const pdcrt_params_base base; const pdcrt_param_data params[1]; };
static const struct pdc_params_data_mpdzibepd_N95_x_N95_sexpr_p11 pdc_params = { .base = { .num_params = 1, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{7}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 252:28 >> 252:34 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 252:28 >> 252:34 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_obtener_local(ctx, m, 7));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 252:28 >> 252:34 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 253:13 >> 253:15 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 254:4 >> 254:10 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 1)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 254:27 >> 254:33 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_obtener_local(ctx, m, 5));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 254:10 >> 254:11 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 42);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k241, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_f12(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 270:28 >> 270:41 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd|270:28|270:41";
PDCRT_ALOJAR_MARCO(ctx, 7, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_x_N95_sexpr_p12 { const pdcrt_params_base base; const pdcrt_param_data params[1]; };
static const struct pdc_params_data_mpdzibepd_N95_x_N95_sexpr_p12 pdc_params = { .base = { .num_params = 1, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{3}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 270:43 >> 270:44 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 270:43 >> 270:44 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_obtener_local(ctx, m, 3));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 270:43 >> 270:44 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 271:8 >> 271:22 */
pdcrt_fijar_local(ctx, m, 4, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 1)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 271:24 >> 271:30 */
pdcrt_fijar_local(ctx, m, 5, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 271:32 >> 271:33 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_obtener_local(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 271:8 >> 271:23 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 21);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k262, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_f13(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 268:0 >> 275:16 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd|268:0|275:16";
PDCRT_ALOJAR_MARCO(ctx, 8, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_x_N95_sexpr_p13 { const pdcrt_params_base base; const pdcrt_param_data params[2]; };
static const struct pdc_params_data_mpdzibepd_N95_x_N95_sexpr_p13 pdc_params = { .base = { .num_params = 2, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{4}, {5}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 268:39 >> 268:43 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 268:39 >> 268:43 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_obtener_local(ctx, m, 5));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 268:39 >> 268:43 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 268:31 >> 268:37 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 268:31 >> 268:37 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 5));
pdcrt_fijar_local(ctx, m, 2, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 268:31 >> 268:37 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 268:31 >> 268:37 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 2), pdcrt_obtener_local(ctx, m, 4));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 268:31 >> 268:37 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 269:4 >> 269:10 */
pdcrt_fijar_local(ctx, m, 5, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 2)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 269:26 >> 269:29 */
pdcrt_fijar_local(ctx, m, 6, PDCRT_OBTENER_CONSTANTE(ctx, m, 49));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 269:10 >> 269:11 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 51);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k261, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_f14(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 277:0 >> 283:16 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd|277:0|283:16";
PDCRT_ALOJAR_MARCO(ctx, 5, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_x_N95_sexpr_p14 { const pdcrt_params_base base; const pdcrt_param_data params[2]; };
static const struct pdc_params_data_mpdzibepd_N95_x_N95_sexpr_p14 pdc_params = { .base = { .num_params = 2, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{2}, {3}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 277:39 >> 277:43 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 277:39 >> 277:43 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_obtener_local(ctx, m, 3));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 277:39 >> 277:43 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 277:31 >> 277:37 */
pdcrt_fijar_local_nb(ctx, m, 0, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 277:31 >> 277:37 */
pdcrt_fijar_local_nb(ctx, m, 0, pdcrt_obtener_local(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 277:31 >> 277:37 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 278:7 >> 278:11 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_obtener_local(ctx, m, 1));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 278:4 >> 282:9 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 2);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 278:4 >> 282:9 */
pdcrt_obj csaltar_obj = pdcrt_obtener_local(ctx, m, 3);
if(csaltar_obj.recv != &pdcrt_recv_booleano) pdcrt_error(ctx, "Se esperaba un objeto de tipo Boole");
if(csaltar_obj.bval)
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k269, PDCRT_XMM_NULO());
else
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k266, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_f15(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 285:0 >> 287:16 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd|285:0|287:16";
PDCRT_ALOJAR_MARCO(ctx, 6, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_x_N95_sexpr_p15 { const pdcrt_params_base base; const pdcrt_param_data params[2]; };
static const struct pdc_params_data_mpdzibepd_N95_x_N95_sexpr_p15 pdc_params = { .base = { .num_params = 2, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{2}, {3}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 285:41 >> 285:45 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 285:41 >> 285:45 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_obtener_local(ctx, m, 3));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 285:41 >> 285:45 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 285:33 >> 285:39 */
pdcrt_fijar_local_nb(ctx, m, 0, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 285:33 >> 285:39 */
pdcrt_fijar_local_nb(ctx, m, 0, pdcrt_obtener_local(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 285:33 >> 285:39 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 286:4 >> 286:10 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_obtener_local(ctx, m, 0));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 286:26 >> 286:30 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_obtener_local(ctx, m, 1));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 286:30 >> 286:31 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 9);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k272, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_f16(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 289:0 >> 291:16 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd|289:0|291:16";
PDCRT_ALOJAR_MARCO(ctx, 10, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_x_N95_sexpr_p16 { const pdcrt_params_base base; const pdcrt_param_data params[2]; };
static const struct pdc_params_data_mpdzibepd_N95_x_N95_sexpr_p16 pdc_params = { .base = { .num_params = 2, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{3}, {4}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 289:39 >> 289:43 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 289:39 >> 289:43 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_obtener_local(ctx, m, 4));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 289:39 >> 289:43 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 289:31 >> 289:37 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 289:31 >> 289:37 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_obtener_local(ctx, m, 3));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 289:31 >> 289:37 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 290:4 >> 290:10 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_obtener_local(ctx, m, 1));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 290:27 >> 290:35 */
pdcrt_fijar_local(ctx, m, 6, PDCRT_OBTENER_CONSTANTE(ctx, m, 53));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 290:48 >> 290:60 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 290:62 >> 290:66 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_obtener_local(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 290:48 >> 290:61 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 21);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k274, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_f17(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 293:0 >> 295:16 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd|293:0|295:16";
PDCRT_ALOJAR_MARCO(ctx, 6, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_x_N95_sexpr_p17 { const pdcrt_params_base base; const pdcrt_param_data params[2]; };
static const struct pdc_params_data_mpdzibepd_N95_x_N95_sexpr_p17 pdc_params = { .base = { .num_params = 2, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{2}, {3}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 293:42 >> 293:46 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 293:42 >> 293:46 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_obtener_local(ctx, m, 3));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 293:42 >> 293:46 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 293:34 >> 293:40 */
pdcrt_fijar_local_nb(ctx, m, 0, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 293:34 >> 293:40 */
pdcrt_fijar_local_nb(ctx, m, 0, pdcrt_obtener_local(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 293:34 >> 293:40 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 294:4 >> 294:10 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_obtener_local(ctx, m, 0));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 294:26 >> 294:30 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_obtener_local(ctx, m, 1));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 294:30 >> 294:31 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 9);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k277, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_f18(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 305:0 >> 322:16 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd|305:0|322:16";
PDCRT_ALOJAR_MARCO(ctx, 21, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_x_N95_sexpr_p18 { const pdcrt_params_base base; const pdcrt_param_data params[2]; };
static const struct pdc_params_data_mpdzibepd_N95_x_N95_sexpr_p18 pdc_params = { .base = { .num_params = 2, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{9}, {10}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 305:38 >> 305:42 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 305:38 >> 305:42 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_obtener_local(ctx, m, 10));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 305:38 >> 305:42 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 305:30 >> 305:36 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 305:30 >> 305:36 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_obtener_local(ctx, m, 9));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 305:30 >> 305:36 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 306:7 >> 306:18 */
pdcrt_fijar_local(ctx, m, 10, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 3)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 306:20 >> 306:24 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_obtener_local(ctx, m, 8));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 306:26 >> 306:33 */
pdcrt_fijar_local(ctx, m, 13, ctx->espacio_de_nombres_runtime);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 306:26 >> 306:33 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 39);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k279, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 13)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_f19(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd|1:0|322:16";
PDCRT_ALOJAR_MARCO(ctx, 142, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_x_N95_sexpr_p19 { const pdcrt_params_base base; const pdcrt_param_data params[1]; };
static const struct pdc_params_data_mpdzibepd_N95_x_N95_sexpr_p19 pdc_params = { .base = { .num_params = 0, .tiene_variadic = false, .idc_variadic = 0, }, .params = {} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
PDCRT_DEFINE_RAICES(2);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_arreglo *constantes = pdcrt_crear_arreglo_vacio(ctx, PDCRT_GC(), 59LLU);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "subclase", 8));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "Símbolo", 8));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "fijar_nombre", 12));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "valor", 5));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "agregarAtributo", 15));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "desdeTexto", 10));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "crear", 5));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "fijar_valor", 11));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "agregarMetodoEstatico", 21));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "comoTexto", 9));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "agregarMetodo", 13));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "\\", 1));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "operador_=", 10));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "\\\\", 2));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "~q", 2));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "formatear", 9));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "\\~q", 3));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "~%", 2));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "\\n", 2));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "	", 1));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "\\t", 2));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "llamar", 6));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "", 0));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "longitud", 8));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "operador_<", 10));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "en", 2));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "operador_+", 10));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "n", 1));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "t", 1));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "concatenar", 10));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "+-*/<>=_", 8));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "EsAlfabético", 13));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "EsDígitoDecimal", 16));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "operador_||", 11));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "leerCarácter", 13));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "EOF", 3));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "desleerCarácter", 16));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "true", 4));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "false", 5));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "Arreglo", 7));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "vacio", 5));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "VERDADERO", 9));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "SaltarEspacios", 14));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), ")", 1));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "FALSO", 5));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "agregarAlFinal", 14));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "eof inesperado leyendo texto de expresión S", 44));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "__FallarConMensaje", 18));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "Secuencia de escape (\\~t) inválida", 35));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "(", 1));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "Se esperaba una lista, símbolo, texto o número, pero se encontró ~t", 70));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "escribirTexto", 13));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), " ", 1));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "~q~t~q", 6));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "Boole", 5));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "Numero", 6));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "Texto", 5));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "Se esperaba un arreglo, símbolo, texto o número, pero se encontró un ~t", 74));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "TipoDe", 6));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
PDCRT_FIJAR_CONSTANTES(ctx, m, constantes);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 138));
pdcrt_fijar_local(ctx, m, 64, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 138));
pdcrt_fijar_local(ctx, m, 66, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 138));
pdcrt_fijar_local(ctx, m, 68, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 138));
pdcrt_fijar_local(ctx, m, 70, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 138));
pdcrt_fijar_local(ctx, m, 72, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 138));
pdcrt_fijar_local(ctx, m, 74, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 138));
pdcrt_fijar_local(ctx, m, 76, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 138));
pdcrt_fijar_local(ctx, m, 78, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 138));
pdcrt_fijar_local(ctx, m, 80, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 138));
pdcrt_fijar_local(ctx, m, 82, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 138));
pdcrt_fijar_local(ctx, m, 84, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 138));
pdcrt_fijar_local(ctx, m, 86, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 138));
pdcrt_fijar_local(ctx, m, 88, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 138));
pdcrt_fijar_local(ctx, m, 90, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 138));
pdcrt_fijar_local(ctx, m, 92, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 138));
pdcrt_fijar_local(ctx, m, 94, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 138));
pdcrt_fijar_local(ctx, m, 96, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 138));
pdcrt_fijar_local(ctx, m, 98, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 138));
pdcrt_fijar_local(ctx, m, 100, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 138));
pdcrt_fijar_local(ctx, m, 102, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 138));
pdcrt_fijar_local(ctx, m, 104, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 138));
pdcrt_fijar_local(ctx, m, 106, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 138));
pdcrt_fijar_local(ctx, m, 108, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 138));
pdcrt_fijar_local(ctx, m, 110, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 138));
pdcrt_fijar_local(ctx, m, 112, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 138));
pdcrt_fijar_local(ctx, m, 114, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 138));
pdcrt_fijar_local(ctx, m, 116, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 138));
pdcrt_fijar_local(ctx, m, 117, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 138));
pdcrt_fijar_local(ctx, m, 115, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 138));
pdcrt_fijar_local(ctx, m, 113, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 138));
pdcrt_fijar_local(ctx, m, 111, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 138));
pdcrt_fijar_local(ctx, m, 109, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 138));
pdcrt_fijar_local(ctx, m, 107, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 138));
pdcrt_fijar_local(ctx, m, 105, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 138));
pdcrt_fijar_local(ctx, m, 103, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 138));
pdcrt_fijar_local(ctx, m, 101, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 138));
pdcrt_fijar_local(ctx, m, 99, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 138));
pdcrt_fijar_local(ctx, m, 97, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 138));
pdcrt_fijar_local(ctx, m, 95, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 138));
pdcrt_fijar_local(ctx, m, 93, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 138));
pdcrt_fijar_local(ctx, m, 91, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 138));
pdcrt_fijar_local(ctx, m, 89, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 138));
pdcrt_fijar_local(ctx, m, 87, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 138));
pdcrt_fijar_local(ctx, m, 85, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 138));
pdcrt_fijar_local(ctx, m, 83, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 138));
pdcrt_fijar_local(ctx, m, 81, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 138));
pdcrt_fijar_local(ctx, m, 79, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 138));
pdcrt_fijar_local(ctx, m, 77, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 138));
pdcrt_fijar_local(ctx, m, 75, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 138));
pdcrt_fijar_local(ctx, m, 73, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 138));
pdcrt_fijar_local(ctx, m, 71, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 138));
pdcrt_fijar_local(ctx, m, 69, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 138));
pdcrt_fijar_local(ctx, m, 67, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 138));
pdcrt_fijar_local(ctx, m, 65, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 138));
pdcrt_fijar_local(ctx, m, 63, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 2:28 >> 2:34 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 2:28 >> 2:34 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 138));
pdcrt_fijar_local(ctx, m, 118, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 2:28 >> 2:34 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 3:0 >> 3:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 3:0 >> 3:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 138));
pdcrt_fijar_local(ctx, m, 119, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 3:0 >> 3:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 4:42 >> 4:47 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 4:42 >> 4:47 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 138));
pdcrt_fijar_local(ctx, m, 120, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 4:42 >> 4:47 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 9:6 >> 9:14 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 9:6 >> 9:14 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 138));
pdcrt_fijar_local(ctx, m, 121, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 9:6 >> 9:14 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 43:8 >> 43:20 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 43:8 >> 43:20 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 138));
pdcrt_fijar_local(ctx, m, 122, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 43:8 >> 43:20 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 82:8 >> 82:23 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 82:8 >> 82:23 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 138));
pdcrt_fijar_local(ctx, m, 123, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 82:8 >> 82:23 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 117:9 >> 117:17 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 117:9 >> 117:17 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 138));
pdcrt_fijar_local(ctx, m, 124, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 117:9 >> 117:17 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 123:8 >> 123:32 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 123:8 >> 123:32 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 138));
pdcrt_fijar_local(ctx, m, 125, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 123:8 >> 123:32 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 134:14 >> 134:32 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 134:14 >> 134:32 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 138));
pdcrt_fijar_local(ctx, m, 126, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 134:14 >> 134:32 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 143:14 >> 143:29 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 143:14 >> 143:29 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 138));
pdcrt_fijar_local(ctx, m, 127, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 143:14 >> 143:29 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 160:14 >> 160:26 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 160:14 >> 160:26 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 138));
pdcrt_fijar_local(ctx, m, 128, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 160:14 >> 160:26 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 176:14 >> 176:26 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 176:14 >> 176:26 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 138));
pdcrt_fijar_local(ctx, m, 129, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 176:14 >> 176:26 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 242:14 >> 242:25 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 242:14 >> 242:25 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 138));
pdcrt_fijar_local(ctx, m, 130, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 242:14 >> 242:25 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 252:14 >> 252:26 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 252:14 >> 252:26 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 138));
pdcrt_fijar_local(ctx, m, 131, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 252:14 >> 252:26 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 268:14 >> 268:29 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 268:14 >> 268:29 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 138));
pdcrt_fijar_local(ctx, m, 132, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 268:14 >> 268:29 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 277:14 >> 277:29 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 277:14 >> 277:29 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 138));
pdcrt_fijar_local(ctx, m, 133, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 277:14 >> 277:29 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 285:14 >> 285:31 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 285:14 >> 285:31 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 138));
pdcrt_fijar_local(ctx, m, 134, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 285:14 >> 285:31 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 289:14 >> 289:29 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 289:14 >> 289:29 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 138));
pdcrt_fijar_local(ctx, m, 135, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 289:14 >> 289:29 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 293:14 >> 293:32 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 293:14 >> 293:32 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 138));
pdcrt_fijar_local(ctx, m, 136, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 293:14 >> 293:32 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 305:14 >> 305:28 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 305:14 >> 305:28 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 138));
pdcrt_fijar_local(ctx, m, 137, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 305:14 >> 305:28 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
return pdcrt_importar(ctx, m, "pdzibepd_N95_builtins", 21, pdc_mpdzibepd_N95_x_N95_sexpr_k0);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k0(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 138, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 138), "ParaCadaElemento", 16, pdc_mpdzibepd_N95_x_N95_sexpr_k1);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k1(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 63), pdcrt_obtener_local(ctx, m, 139));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 138), "Todos", 5, pdc_mpdzibepd_N95_x_N95_sexpr_k2);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k2(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k2);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 64), pdcrt_obtener_local(ctx, m, 139));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 138), "Contiene", 8, pdc_mpdzibepd_N95_x_N95_sexpr_k3);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k3(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k3);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 65), pdcrt_obtener_local(ctx, m, 139));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 138), "EsImpar", 7, pdc_mpdzibepd_N95_x_N95_sexpr_k4);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k4(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k4);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 66), pdcrt_obtener_local(ctx, m, 139));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 138), "Escribir", 8, pdc_mpdzibepd_N95_x_N95_sexpr_k5);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k5(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k5);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 67), pdcrt_obtener_local(ctx, m, 139));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 138), "Reducir", 7, pdc_mpdzibepd_N95_x_N95_sexpr_k6);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k6(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k6);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 68), pdcrt_obtener_local(ctx, m, 139));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 138), "Filtrar", 7, pdc_mpdzibepd_N95_x_N95_sexpr_k7);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k7(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k7);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 69), pdcrt_obtener_local(ctx, m, 139));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 138), "DígitoAEntero", 14, pdc_mpdzibepd_N95_x_N95_sexpr_k8);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k8(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k8);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 70), pdcrt_obtener_local(ctx, m, 139));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 138), "ConvertirAEntero", 16, pdc_mpdzibepd_N95_x_N95_sexpr_k9);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k9(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k9);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 71), pdcrt_obtener_local(ctx, m, 139));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 138), "EsNúmeroEntero", 15, pdc_mpdzibepd_N95_x_N95_sexpr_k10);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k10(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k10);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 72), pdcrt_obtener_local(ctx, m, 139));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 138), "Concatenar", 10, pdc_mpdzibepd_N95_x_N95_sexpr_k11);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k11(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k11);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 73), pdcrt_obtener_local(ctx, m, 139));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 138), "Aplicar\'", 8, pdc_mpdzibepd_N95_x_N95_sexpr_k12);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k12(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k12);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 74), pdcrt_obtener_local(ctx, m, 139));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 138), "EnviarMensaje", 13, pdc_mpdzibepd_N95_x_N95_sexpr_k13);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k13(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k13);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 75), pdcrt_obtener_local(ctx, m, 139));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 138), "Abs", 3, pdc_mpdzibepd_N95_x_N95_sexpr_k14);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k14(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k14);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 76), pdcrt_obtener_local(ctx, m, 139));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 138), "EsPar", 5, pdc_mpdzibepd_N95_x_N95_sexpr_k15);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k15(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k15);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 77), pdcrt_obtener_local(ctx, m, 139));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 138), "AplanarTodo", 11, pdc_mpdzibepd_N95_x_N95_sexpr_k16);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k16(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k16);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 78), pdcrt_obtener_local(ctx, m, 139));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 138), "PrimerElemento", 14, pdc_mpdzibepd_N95_x_N95_sexpr_k17);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k17(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k17);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 79), pdcrt_obtener_local(ctx, m, 139));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 138), "ÚnicoElemento", 14, pdc_mpdzibepd_N95_x_N95_sexpr_k18);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k18(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k18);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 80), pdcrt_obtener_local(ctx, m, 139));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 138), "Max", 3, pdc_mpdzibepd_N95_x_N95_sexpr_k19);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k19(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k19);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 81), pdcrt_obtener_local(ctx, m, 139));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 138), "NoImplementado", 14, pdc_mpdzibepd_N95_x_N95_sexpr_k20);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k20(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k20);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 82), pdcrt_obtener_local(ctx, m, 139));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 138), "Inalcanzable", 12, pdc_mpdzibepd_N95_x_N95_sexpr_k21);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k21(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k21);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 83), pdcrt_obtener_local(ctx, m, 139));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 138), "ArregloSinElementoEnÍndice", 27, pdc_mpdzibepd_N95_x_N95_sexpr_k22);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k22(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k22);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 84), pdcrt_obtener_local(ctx, m, 139));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 138), "LeerNúmero", 11, pdc_mpdzibepd_N95_x_N95_sexpr_k23);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k23(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k23);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 85), pdcrt_obtener_local(ctx, m, 139));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 138), "MétodoComoFunción", 19, pdc_mpdzibepd_N95_x_N95_sexpr_k24);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k24(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k24);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 86), pdcrt_obtener_local(ctx, m, 139));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 138), "ContienePredicado", 17, pdc_mpdzibepd_N95_x_N95_sexpr_k25);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k25(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k25);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 87), pdcrt_obtener_local(ctx, m, 139));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 138), "ParaCadaElementoEnReversa", 25, pdc_mpdzibepd_N95_x_N95_sexpr_k26);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k26(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k26);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 88), pdcrt_obtener_local(ctx, m, 139));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 138), "Resultado", 9, pdc_mpdzibepd_N95_x_N95_sexpr_k27);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k27(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k27);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 89), pdcrt_obtener_local(ctx, m, 139));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 138), "Pila", 4, pdc_mpdzibepd_N95_x_N95_sexpr_k28);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k28(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k28);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 90), pdcrt_obtener_local(ctx, m, 139));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 138), "Diccionario", 11, pdc_mpdzibepd_N95_x_N95_sexpr_k29);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k29(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k29);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 91), pdcrt_obtener_local(ctx, m, 139));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 138), "BuscarPredicado", 15, pdc_mpdzibepd_N95_x_N95_sexpr_k30);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k30(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k30);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 92), pdcrt_obtener_local(ctx, m, 139));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 138), "OperadorBinario", 15, pdc_mpdzibepd_N95_x_N95_sexpr_k31);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k31(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k31);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 93), pdcrt_obtener_local(ctx, m, 139));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 138), "Parcial", 7, pdc_mpdzibepd_N95_x_N95_sexpr_k32);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k32(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k32);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 94), pdcrt_obtener_local(ctx, m, 139));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 138), "LeerLínea", 10, pdc_mpdzibepd_N95_x_N95_sexpr_k33);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k33(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k33);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 95), pdcrt_obtener_local(ctx, m, 139));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 138), "LlamarConEC", 11, pdc_mpdzibepd_N95_x_N95_sexpr_k34);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k34(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k34);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 96), pdcrt_obtener_local(ctx, m, 139));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 138), "MétodoAbstracto", 16, pdc_mpdzibepd_N95_x_N95_sexpr_k35);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k35(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k35);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 97), pdcrt_obtener_local(ctx, m, 139));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 138), "Min", 3, pdc_mpdzibepd_N95_x_N95_sexpr_k36);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k36(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k36);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 98), pdcrt_obtener_local(ctx, m, 139));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 138), "EsNulo", 6, pdc_mpdzibepd_N95_x_N95_sexpr_k37);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k37(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k37);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 99), pdcrt_obtener_local(ctx, m, 139));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 138), "ÚltimoElemento", 15, pdc_mpdzibepd_N95_x_N95_sexpr_k38);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k38(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k38);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 100), pdcrt_obtener_local(ctx, m, 139));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 138), "PedazoDeArreglo", 15, pdc_mpdzibepd_N95_x_N95_sexpr_k39);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k39(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k39);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 101), pdcrt_obtener_local(ctx, m, 139));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 138), "Aplanar", 7, pdc_mpdzibepd_N95_x_N95_sexpr_k40);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k40(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k40);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 102), pdcrt_obtener_local(ctx, m, 139));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 138), "Mod", 3, pdc_mpdzibepd_N95_x_N95_sexpr_k41);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k41(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k41);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 103), pdcrt_obtener_local(ctx, m, 139));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 138), "Resto", 5, pdc_mpdzibepd_N95_x_N95_sexpr_k42);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k42(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k42);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 104), pdcrt_obtener_local(ctx, m, 139));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 138), "Aplicar\'i", 9, pdc_mpdzibepd_N95_x_N95_sexpr_k43);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k43(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k43);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 105), pdcrt_obtener_local(ctx, m, 139));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 138), "ArregloConFinal", 15, pdc_mpdzibepd_N95_x_N95_sexpr_k44);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k44(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k44);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 106), pdcrt_obtener_local(ctx, m, 139));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 138), "EsNúmero", 9, pdc_mpdzibepd_N95_x_N95_sexpr_k45);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k45(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k45);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 107), pdcrt_obtener_local(ctx, m, 139));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 138), "ConvertirANúmero", 17, pdc_mpdzibepd_N95_x_N95_sexpr_k46);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k46(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k46);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 139));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 138), "Elevar", 6, pdc_mpdzibepd_N95_x_N95_sexpr_k47);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k47(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k47);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 109), pdcrt_obtener_local(ctx, m, 139));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 138), "Algún", 6, pdc_mpdzibepd_N95_x_N95_sexpr_k48);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k48(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k48);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 110), pdcrt_obtener_local(ctx, m, 139));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 138), "Mapear", 6, pdc_mpdzibepd_N95_x_N95_sexpr_k49);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k49(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k49);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 111), pdcrt_obtener_local(ctx, m, 139));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 138), "Identidad", 9, pdc_mpdzibepd_N95_x_N95_sexpr_k50);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k50(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k50);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 112), pdcrt_obtener_local(ctx, m, 139));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 138), "ParaCadaNúmeroConPaso", 22, pdc_mpdzibepd_N95_x_N95_sexpr_k51);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k51(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k51);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 113), pdcrt_obtener_local(ctx, m, 139));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 138), "EsInstancia", 11, pdc_mpdzibepd_N95_x_N95_sexpr_k52);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k52(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k52);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 114), pdcrt_obtener_local(ctx, m, 139));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 138), "EsSubclase", 10, pdc_mpdzibepd_N95_x_N95_sexpr_k53);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k53(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k53);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 115), pdcrt_obtener_local(ctx, m, 139));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 138), "ParaCadaElementoConÍndice", 26, pdc_mpdzibepd_N95_x_N95_sexpr_k54);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k54(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k54);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 116), pdcrt_obtener_local(ctx, m, 139));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 138), "ParaCadaNúmero", 15, pdc_mpdzibepd_N95_x_N95_sexpr_k55);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k55(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k55);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 117), pdcrt_obtener_local(ctx, m, 139));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 2:0 >> 2:8 */
return pdcrt_importar(ctx, m, "pdzibepd_N95_x_N95_puerto", 25, pdc_mpdzibepd_N95_x_N95_sexpr_k56);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k56(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k56);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 138, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_convertir_a_espacio_de_nombres(ctx, m, pdcrt_obtener_local(ctx, m, 138)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 2:28 >> 2:34 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 118), pdcrt_obtener_local(ctx, m, 139));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 2:28 >> 2:34 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 3:0 >> 3:8 */
return pdcrt_importar(ctx, m, "pdzibepd_N95_utilidades_N95_texto", 33, pdc_mpdzibepd_N95_x_N95_sexpr_k57);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k57(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k57);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 3:0 >> 3:8 */
pdcrt_fijar_local(ctx, m, 138, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 3:32 >> 3:43 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 138), "MapearTexto", 11, pdc_mpdzibepd_N95_x_N95_sexpr_k58);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k58(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k58);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 3:32 >> 3:43 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 3:32 >> 3:43 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 119), pdcrt_obtener_local(ctx, m, 139));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 3:32 >> 3:43 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 3:0 >> 3:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 4:0 >> 4:8 */
return pdcrt_importar(ctx, m, "pdzibepd_N95_utilidades_N95_texto_N95_ascii", 43, pdc_mpdzibepd_N95_x_N95_sexpr_k59);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k59(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k59);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 4:0 >> 4:8 */
pdcrt_fijar_local(ctx, m, 138, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 4:0 >> 4:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_convertir_a_espacio_de_nombres(ctx, m, pdcrt_obtener_local(ctx, m, 138)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 4:42 >> 4:47 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 120), pdcrt_obtener_local(ctx, m, 139));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 4:42 >> 4:47 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 4:0 >> 4:8 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 9:0 >> 9:5 */
pdcrt_fijar_local(ctx, m, 139, ctx->clase_objeto);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 9:0 >> 9:5 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 0);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k60, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 139)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k60(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k60);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 9:0 >> 9:5 */
pdcrt_fijar_local(ctx, m, 138, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 9:0 >> 9:5 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 9:6 >> 9:14 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 121), pdcrt_obtener_local(ctx, m, 138));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 9:6 >> 9:14 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 9:6 >> 9:14 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 121)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 9:0 >> 9:5 */
pdcrt_fijar_local(ctx, m, 140, PDCRT_OBTENER_CONSTANTE(ctx, m, 1));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 9:0 >> 9:5 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 2);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k61, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 139)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 140)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k61(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k61);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 9:0 >> 9:5 */
pdcrt_fijar_local(ctx, m, 138, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 9:0 >> 9:5 */
pdcrt_fijar_local_nb(ctx, m, 140, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 9:0 >> 9:5 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 9:6 >> 9:14 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 121)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 18:13 >> 18:18 */
pdcrt_fijar_local(ctx, m, 140, PDCRT_OBTENER_CONSTANTE(ctx, m, 3));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 18:4 >> 18:12 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 4);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k62, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 139)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 140)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k62(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k62);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 18:4 >> 18:12 */
pdcrt_fijar_local(ctx, m, 138, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 18:4 >> 18:12 */
pdcrt_fijar_local_nb(ctx, m, 140, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 18:4 >> 18:12 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 26:16 >> 26:24 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 121)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 26:25 >> 26:35 */
pdcrt_fijar_local(ctx, m, 140, PDCRT_OBTENER_CONSTANTE(ctx, m, 5));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 26:0 >> 31:9 */
do {
static const pdcrt_captura caps[] = {};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzibepd_N95_x_N95_sexpr_f0, caps, 0);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 141, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 26:0 >> 31:9 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 8);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k65, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 139)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 140)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 141)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k63(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k63);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 28:16 >> 28:17 */
pdcrt_fijar_local(ctx, m, 3, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 28:16 >> 28:17 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 28:10 >> 28:11 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_obtener_local(ctx, m, 3));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 28:10 >> 28:11 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 29:10 >> 29:11 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_obtener_local(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 29:20 >> 29:23 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_obtener_local(ctx, m, 1));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 29:4 >> 29:23 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 7);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k64, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k64(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k64);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 29:4 >> 29:23 */
pdcrt_fijar_local(ctx, m, 3, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 29:4 >> 29:23 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 29:4 >> 29:23 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 27:4 >> 30:14 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 30:13 >> 30:14 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_obtener_local(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 30:4 >> 30:14 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 3)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 30:4 >> 30:14 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 26:0 >> 31:9 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 26:0 >> 31:9 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 3)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 26:0 >> 31:9 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k65(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k65);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 26:0 >> 31:9 */
pdcrt_fijar_local(ctx, m, 138, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 26:0 >> 31:9 */
pdcrt_fijar_local_nb(ctx, m, 141, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 26:0 >> 31:9 */
pdcrt_fijar_local_nb(ctx, m, 140, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 26:0 >> 31:9 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 33:7 >> 33:15 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 121)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 33:16 >> 33:25 */
pdcrt_fijar_local(ctx, m, 140, PDCRT_OBTENER_CONSTANTE(ctx, m, 9));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 33:0 >> 35:9 */
do {
static const pdcrt_captura caps[] = {};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzibepd_N95_x_N95_sexpr_f1, caps, 0);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 141, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 33:0 >> 35:9 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 10);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k66, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 139)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 140)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 141)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k66(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k66);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 33:0 >> 35:9 */
pdcrt_fijar_local(ctx, m, 138, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 33:0 >> 35:9 */
pdcrt_fijar_local_nb(ctx, m, 141, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 33:0 >> 35:9 */
pdcrt_fijar_local_nb(ctx, m, 140, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 33:0 >> 35:9 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 43:0 >> 75:10 */
do {
static const pdcrt_captura caps[] = {{119}};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzibepd_N95_x_N95_sexpr_f3, caps, 1);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 138, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 43:8 >> 43:20 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 122), pdcrt_obtener_local(ctx, m, 138));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 43:8 >> 43:20 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 82:0 >> 115:10 */
do {
static const pdcrt_captura caps[] = {{99}};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzibepd_N95_x_N95_sexpr_f4, caps, 1);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 138, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 82:8 >> 82:23 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 123), pdcrt_obtener_local(ctx, m, 138));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 82:8 >> 82:23 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 118:17 >> 118:27 */
pdcrt_fijar_local(ctx, m, 138, PDCRT_OBTENER_CONSTANTE(ctx, m, 30));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 118:6 >> 118:14 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 124), pdcrt_obtener_local(ctx, m, 138));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 118:6 >> 118:14 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 123:0 >> 125:10 */
do {
static const pdcrt_captura caps[] = {{120}, {65}, {124}};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzibepd_N95_x_N95_sexpr_f5, caps, 3);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 138, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 123:8 >> 123:32 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 125), pdcrt_obtener_local(ctx, m, 138));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 123:8 >> 123:32 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 134:0 >> 141:16 */
do {
static const pdcrt_captura caps[] = {{118}};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzibepd_N95_x_N95_sexpr_f6, caps, 1);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 138, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 134:14 >> 134:32 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 126), pdcrt_obtener_local(ctx, m, 138));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 134:14 >> 134:32 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 143:0 >> 158:16 */
do {
static const pdcrt_captura caps[] = {{126}, {125}, {71}, {72}, {121}};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzibepd_N95_x_N95_sexpr_f7, caps, 5);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 138, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 143:14 >> 143:29 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 127), pdcrt_obtener_local(ctx, m, 138));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 143:14 >> 143:29 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 160:0 >> 174:16 */
do {
static const pdcrt_captura caps[] = {{126}, {118}, {130}};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzibepd_N95_x_N95_sexpr_f8, caps, 3);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 138, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 160:14 >> 160:26 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 128), pdcrt_obtener_local(ctx, m, 138));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 160:14 >> 160:26 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 176:0 >> 213:16 */
do {
static const pdcrt_captura caps[] = {{83}, {118}, {99}};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzibepd_N95_x_N95_sexpr_f9, caps, 3);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 138, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 176:14 >> 176:26 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 129), pdcrt_obtener_local(ctx, m, 138));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 176:14 >> 176:26 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 242:0 >> 250:16 */
do {
static const pdcrt_captura caps[] = {{131}};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzibepd_N95_x_N95_sexpr_f10, caps, 1);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 138, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 242:14 >> 242:25 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 130), pdcrt_obtener_local(ctx, m, 138));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 242:14 >> 242:25 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 252:0 >> 266:16 */
do {
static const pdcrt_captura caps[] = {{125}, {118}, {129}, {128}, {127}};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzibepd_N95_x_N95_sexpr_f11, caps, 5);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 138, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 252:14 >> 252:26 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 131), pdcrt_obtener_local(ctx, m, 138));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 252:14 >> 252:26 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 268:0 >> 275:16 */
do {
static const pdcrt_captura caps[] = {{63}, {137}};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzibepd_N95_x_N95_sexpr_f13, caps, 2);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 138, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 268:14 >> 268:29 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 138));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 268:14 >> 268:29 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 277:0 >> 283:16 */
do {
static const pdcrt_captura caps[] = {};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzibepd_N95_x_N95_sexpr_f14, caps, 0);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 138, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 277:14 >> 277:29 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 133), pdcrt_obtener_local(ctx, m, 138));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 277:14 >> 277:29 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 285:0 >> 287:16 */
do {
static const pdcrt_captura caps[] = {};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzibepd_N95_x_N95_sexpr_f15, caps, 0);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 138, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 285:14 >> 285:31 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 134), pdcrt_obtener_local(ctx, m, 138));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 285:14 >> 285:31 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 289:0 >> 291:16 */
do {
static const pdcrt_captura caps[] = {{122}};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzibepd_N95_x_N95_sexpr_f16, caps, 1);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 138, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 289:14 >> 289:29 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 135), pdcrt_obtener_local(ctx, m, 138));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 289:14 >> 289:29 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 293:0 >> 295:16 */
do {
static const pdcrt_captura caps[] = {};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzibepd_N95_x_N95_sexpr_f17, caps, 0);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 138, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 293:14 >> 293:32 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 136), pdcrt_obtener_local(ctx, m, 138));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 293:14 >> 293:32 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 305:0 >> 322:16 */
do {
static const pdcrt_captura caps[] = {{134}, {133}, {132}, {114}, {135}, {121}, {136}};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzibepd_N95_x_N95_sexpr_f18, caps, 7);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 138, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 305:14 >> 305:28 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 137), pdcrt_obtener_local(ctx, m, 138));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 305:14 >> 305:28 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cons = pdcrt_crear_espacio_de_nombres_cons(ctx, PDCRT_GC());
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 138, cons);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 117)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 138), pdcrt_obtener_local(ctx, m, 139), "ParaCadaNúmero", 15, true, pdc_mpdzibepd_N95_x_N95_sexpr_k311);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k67(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k67);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 58:15 >> 58:24 */
pdcrt_fijar_local(ctx, m, 1, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 58:15 >> 58:24 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 58:15 >> 58:24 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 58:12 >> 60:17 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 1);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 58:12 >> 60:17 */
pdcrt_obj csaltar_obj = pdcrt_obtener_local(ctx, m, 2);
if(csaltar_obj.recv != &pdcrt_recv_booleano) pdcrt_error(ctx, "Se esperaba un objeto de tipo Boole");
if(csaltar_obj.bval)
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k70, PDCRT_XMM_NULO());
else
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k68, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k68(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k68);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 58:12 >> 60:17 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 58:12 >> 60:17 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 59:25 >> 59:29 */
pdcrt_fijar_local(ctx, m, 1, PDCRT_OBTENER_CONSTANTE(ctx, m, 13));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 59:16 >> 59:29 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 1)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 59:16 >> 59:29 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 58:12 >> 60:17 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k71, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k69(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k69);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k70, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k70(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k70);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k71, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k71(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k71);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 61:15 >> 61:18 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_obtener_local(ctx, m, 0));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 61:21 >> 61:25 */
pdcrt_fijar_local(ctx, m, 4, PDCRT_OBTENER_CONSTANTE(ctx, m, 14));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 61:25 >> 61:26 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 15);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k72, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k72(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k72);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 61:25 >> 61:26 */
pdcrt_fijar_local(ctx, m, 3, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 61:25 >> 61:26 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 61:15 >> 61:26 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 12);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k73, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 2)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 3)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k73(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k73);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 61:15 >> 61:26 */
pdcrt_fijar_local(ctx, m, 1, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 61:15 >> 61:26 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 61:15 >> 61:26 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 61:12 >> 63:17 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 1);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 61:12 >> 63:17 */
pdcrt_obj csaltar_obj = pdcrt_obtener_local(ctx, m, 2);
if(csaltar_obj.recv != &pdcrt_recv_booleano) pdcrt_error(ctx, "Se esperaba un objeto de tipo Boole");
if(csaltar_obj.bval)
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k76, PDCRT_XMM_NULO());
else
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k74, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k74(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k74);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 61:12 >> 63:17 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 61:12 >> 63:17 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 62:25 >> 62:30 */
pdcrt_fijar_local(ctx, m, 2, PDCRT_OBTENER_CONSTANTE(ctx, m, 16));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 62:30 >> 62:31 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 15);
return pdcrt_llamar0(ctx, m->k.marco, m->k.kf, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 2)), pdcrt_xmm_desde_obj(llamar_msj));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 62:30 >> 62:31 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 61:12 >> 63:17 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k77, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k75(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k75);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k76, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k76(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k76);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k77, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k77(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k77);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 64:15 >> 64:18 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_obtener_local(ctx, m, 0));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 64:21 >> 64:25 */
pdcrt_fijar_local(ctx, m, 5, PDCRT_OBTENER_CONSTANTE(ctx, m, 17));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 64:25 >> 64:26 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 15);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k78, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k78(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k78);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 64:25 >> 64:26 */
pdcrt_fijar_local(ctx, m, 4, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 64:25 >> 64:26 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 64:15 >> 64:26 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 12);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k79, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 3)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k79(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k79);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 64:15 >> 64:26 */
pdcrt_fijar_local(ctx, m, 2, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 64:15 >> 64:26 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 64:15 >> 64:26 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 64:12 >> 66:17 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 2);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 64:12 >> 66:17 */
pdcrt_obj csaltar_obj = pdcrt_obtener_local(ctx, m, 3);
if(csaltar_obj.recv != &pdcrt_recv_booleano) pdcrt_error(ctx, "Se esperaba un objeto de tipo Boole");
if(csaltar_obj.bval)
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k82, PDCRT_XMM_NULO());
else
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k80, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k80(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k80);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 64:12 >> 66:17 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 64:12 >> 66:17 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 65:25 >> 65:29 */
pdcrt_fijar_local(ctx, m, 2, PDCRT_OBTENER_CONSTANTE(ctx, m, 18));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 65:16 >> 65:29 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 2)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 65:16 >> 65:29 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 64:12 >> 66:17 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k83, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k81(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k81);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k82, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k82(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k82);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k83, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k83(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k83);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 69:15 >> 69:18 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_obtener_local(ctx, m, 0));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 69:21 >> 69:24 */
pdcrt_fijar_local(ctx, m, 4, PDCRT_OBTENER_CONSTANTE(ctx, m, 19));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 69:15 >> 69:24 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 12);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k84, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 3)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k84(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k84);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 69:15 >> 69:24 */
pdcrt_fijar_local(ctx, m, 2, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 69:15 >> 69:24 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 69:15 >> 69:24 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 69:12 >> 71:17 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 2);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 69:12 >> 71:17 */
pdcrt_obj csaltar_obj = pdcrt_obtener_local(ctx, m, 3);
if(csaltar_obj.recv != &pdcrt_recv_booleano) pdcrt_error(ctx, "Se esperaba un objeto de tipo Boole");
if(csaltar_obj.bval)
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k87, PDCRT_XMM_NULO());
else
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k85, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k85(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k85);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 69:12 >> 71:17 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 69:12 >> 71:17 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 70:25 >> 70:29 */
pdcrt_fijar_local(ctx, m, 2, PDCRT_OBTENER_CONSTANTE(ctx, m, 20));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 70:16 >> 70:29 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 2)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 70:16 >> 70:29 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 69:12 >> 71:17 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k88, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k86(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k86);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k87, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k87(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k87);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k88, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k88(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k88);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 72:21 >> 72:24 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_obtener_local(ctx, m, 0));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 72:12 >> 72:24 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 2)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 72:12 >> 72:24 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 57:37 >> 57:44 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 57:37 >> 57:44 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 2)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 57:37 >> 57:44 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k89(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k89);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 86:13 >> 86:14 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_obtener_local(ctx, m, 3));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 86:17 >> 86:22 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_obtener_local(ctx, m, 1));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 86:22 >> 86:23 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 23);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k90, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k90(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k90);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 86:22 >> 86:23 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 86:22 >> 86:23 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 86:13 >> 86:23 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 24);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k91, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k91(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k91);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 86:13 >> 86:23 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 86:13 >> 86:23 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 86:13 >> 86:23 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 86:4 >> 113:15 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 6);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 86:4 >> 113:15 */
pdcrt_obj csaltar_obj = pdcrt_obtener_local(ctx, m, 7);
if(csaltar_obj.recv != &pdcrt_recv_booleano) pdcrt_error(ctx, "Se esperaba un objeto de tipo Boole");
if(csaltar_obj.bval)
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k131, PDCRT_XMM_NULO());
else
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k92, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k92(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k92);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 86:4 >> 113:15 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 86:4 >> 113:15 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 87:17 >> 87:18 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 88:18 >> 88:23 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_obtener_local(ctx, m, 1));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 88:28 >> 88:29 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_obtener_local(ctx, m, 3));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 88:23 >> 88:24 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 25);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k93, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k93(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k93);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 88:23 >> 88:24 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 88:23 >> 88:24 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 88:23 >> 88:24 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 88:14 >> 88:15 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_obtener_local(ctx, m, 6));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 88:14 >> 88:15 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 89:11 >> 89:12 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_obtener_local(ctx, m, 4));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 89:15 >> 89:18 */
pdcrt_fijar_local(ctx, m, 8, PDCRT_OBTENER_CONSTANTE(ctx, m, 11));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 89:11 >> 89:18 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 12);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k94, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k94(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k94);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 89:11 >> 89:18 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 89:11 >> 89:18 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 89:11 >> 89:18 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 89:8 >> 111:13 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 6);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 89:8 >> 111:13 */
pdcrt_obj csaltar_obj = pdcrt_obtener_local(ctx, m, 7);
if(csaltar_obj.recv != &pdcrt_recv_booleano) pdcrt_error(ctx, "Se esperaba un objeto de tipo Boole");
if(csaltar_obj.bval)
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k126, PDCRT_XMM_NULO());
else
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k95, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k95(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k95);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 89:8 >> 111:13 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 89:8 >> 111:13 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 93:21 >> 93:22 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 90:22 >> 90:23 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_obtener_local(ctx, m, 3));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 90:26 >> 90:27 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_entero(PDCRT_ENTERO_C(1)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 90:22 >> 90:27 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 26);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k96, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k96(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k96);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 90:22 >> 90:27 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 90:22 >> 90:27 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 90:22 >> 90:27 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 90:18 >> 90:19 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_obtener_local(ctx, m, 6));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 90:18 >> 90:19 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 91:22 >> 91:23 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_obtener_local(ctx, m, 3));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 91:26 >> 91:31 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_obtener_local(ctx, m, 1));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 91:31 >> 91:32 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 23);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k97, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k97(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k97);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 91:31 >> 91:32 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 91:31 >> 91:32 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 91:22 >> 91:32 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 24);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k98, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k98(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k98);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 91:22 >> 91:32 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 91:22 >> 91:32 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 91:22 >> 91:32 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 91:12 >> 91:32 */
pdcrt_assert(ctx, pdcrt_obtener_local(ctx, m, 6));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 91:12 >> 91:32 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 92:22 >> 92:27 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_obtener_local(ctx, m, 1));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 92:32 >> 92:33 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_obtener_local(ctx, m, 3));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 92:27 >> 92:28 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 25);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k99, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k99(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k99);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 92:27 >> 92:28 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 92:27 >> 92:28 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 92:27 >> 92:28 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 92:18 >> 92:19 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_obtener_local(ctx, m, 6));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 92:18 >> 92:19 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 94:15 >> 94:16 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_obtener_local(ctx, m, 4));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 94:19 >> 94:22 */
pdcrt_fijar_local(ctx, m, 8, PDCRT_OBTENER_CONSTANTE(ctx, m, 27));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 94:15 >> 94:22 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 12);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k100, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k100(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k100);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 94:15 >> 94:22 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 94:15 >> 94:22 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 94:15 >> 94:22 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 94:12 >> 96:17 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 6);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 94:12 >> 96:17 */
pdcrt_obj csaltar_obj = pdcrt_obtener_local(ctx, m, 7);
if(csaltar_obj.recv != &pdcrt_recv_booleano) pdcrt_error(ctx, "Se esperaba un objeto de tipo Boole");
if(csaltar_obj.bval)
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k104, PDCRT_XMM_NULO());
else
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k101, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k101(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k101);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 94:12 >> 96:17 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 94:12 >> 96:17 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 95:26 >> 95:30 */
pdcrt_fijar_local(ctx, m, 7, PDCRT_OBTENER_CONSTANTE(ctx, m, 17));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 95:30 >> 95:31 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 15);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k102, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k102(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k102);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 95:30 >> 95:31 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 95:30 >> 95:31 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 95:22 >> 95:23 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_obtener_local(ctx, m, 6));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 95:22 >> 95:23 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 94:12 >> 96:17 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k105, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k103(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k103);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k104, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k104(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k104);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k105, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k105(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k105);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 97:15 >> 97:16 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_obtener_local(ctx, m, 4));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 97:19 >> 97:22 */
pdcrt_fijar_local(ctx, m, 8, PDCRT_OBTENER_CONSTANTE(ctx, m, 28));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 97:15 >> 97:22 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 12);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k106, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k106(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k106);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 97:15 >> 97:22 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 97:15 >> 97:22 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 97:15 >> 97:22 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 97:12 >> 100:17 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 6);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 97:12 >> 100:17 */
pdcrt_obj csaltar_obj = pdcrt_obtener_local(ctx, m, 7);
if(csaltar_obj.recv != &pdcrt_recv_booleano) pdcrt_error(ctx, "Se esperaba un objeto de tipo Boole");
if(csaltar_obj.bval)
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k109, PDCRT_XMM_NULO());
else
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k107, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k107(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k107);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 97:12 >> 100:17 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 97:12 >> 100:17 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 99:26 >> 99:29 */
pdcrt_fijar_local(ctx, m, 6, PDCRT_OBTENER_CONSTANTE(ctx, m, 19));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 99:22 >> 99:23 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_obtener_local(ctx, m, 6));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 99:22 >> 99:23 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 97:12 >> 100:17 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k110, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k108(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k108);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k109, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k109(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k109);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k110, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k110(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k110);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 101:15 >> 101:16 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_obtener_local(ctx, m, 4));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 101:19 >> 101:23 */
pdcrt_fijar_local(ctx, m, 9, PDCRT_OBTENER_CONSTANTE(ctx, m, 14));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 101:23 >> 101:24 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 15);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k111, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k111(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k111);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 101:23 >> 101:24 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 101:23 >> 101:24 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 101:15 >> 101:24 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 12);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k112, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k112(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k112);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 101:15 >> 101:24 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 101:15 >> 101:24 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 101:15 >> 101:24 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 101:12 >> 103:17 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 6);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 101:12 >> 103:17 */
pdcrt_obj csaltar_obj = pdcrt_obtener_local(ctx, m, 7);
if(csaltar_obj.recv != &pdcrt_recv_booleano) pdcrt_error(ctx, "Se esperaba un objeto de tipo Boole");
if(csaltar_obj.bval)
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k116, PDCRT_XMM_NULO());
else
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k113, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k113(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k113);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 101:12 >> 103:17 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 101:12 >> 103:17 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 102:26 >> 102:30 */
pdcrt_fijar_local(ctx, m, 7, PDCRT_OBTENER_CONSTANTE(ctx, m, 14));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 102:30 >> 102:31 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 15);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k114, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k114(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k114);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 102:30 >> 102:31 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 102:30 >> 102:31 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 102:22 >> 102:23 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_obtener_local(ctx, m, 6));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 102:22 >> 102:23 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 101:12 >> 103:17 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k117, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k115(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k115);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k116, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k116(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k116);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k117, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k117(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k117);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 104:15 >> 104:16 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_obtener_local(ctx, m, 4));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 104:19 >> 104:22 */
pdcrt_fijar_local(ctx, m, 8, PDCRT_OBTENER_CONSTANTE(ctx, m, 11));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 104:15 >> 104:22 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 12);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k118, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k118(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k118);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 104:15 >> 104:22 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 104:15 >> 104:22 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 104:15 >> 104:22 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 104:12 >> 106:17 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 6);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 104:12 >> 106:17 */
pdcrt_obj csaltar_obj = pdcrt_obtener_local(ctx, m, 7);
if(csaltar_obj.recv != &pdcrt_recv_booleano) pdcrt_error(ctx, "Se esperaba un objeto de tipo Boole");
if(csaltar_obj.bval)
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k121, PDCRT_XMM_NULO());
else
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k119, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k119(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k119);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 104:12 >> 106:17 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 104:12 >> 106:17 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 105:26 >> 105:29 */
pdcrt_fijar_local(ctx, m, 6, PDCRT_OBTENER_CONSTANTE(ctx, m, 11));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 105:22 >> 105:23 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_obtener_local(ctx, m, 6));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 105:22 >> 105:23 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 104:12 >> 106:17 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k122, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k120(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k120);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k121, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k121(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k121);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k122, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k122(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k122);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 107:25 >> 107:31 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 107:33 >> 107:34 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_obtener_local(ctx, m, 5));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 107:25 >> 107:32 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 21);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k123, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k123(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k123);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 107:25 >> 107:32 */
pdcrt_fijar_local(ctx, m, 7, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 107:25 >> 107:32 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 107:25 >> 107:32 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 107:22 >> 107:32 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 7);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 107:22 >> 107:32 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 107:12 >> 107:32 */
pdcrt_assert(ctx, pdcrt_obtener_local(ctx, m, 6));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 107:12 >> 107:32 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 108:24 >> 108:27 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_obtener_local(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 108:40 >> 108:41 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_obtener_local(ctx, m, 5));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 108:27 >> 108:28 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 29);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k124, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k124(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k124);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 108:27 >> 108:28 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 108:27 >> 108:28 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 108:27 >> 108:28 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 108:18 >> 108:21 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_obtener_local(ctx, m, 6));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 108:18 >> 108:21 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 89:8 >> 111:13 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k128, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k125(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k125);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k126, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k126(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k126);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 110:24 >> 110:27 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_obtener_local(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 110:40 >> 110:41 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_obtener_local(ctx, m, 4));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 110:27 >> 110:28 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 29);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k127, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k127(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k127);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 110:27 >> 110:28 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 110:27 >> 110:28 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 110:27 >> 110:28 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 110:18 >> 110:21 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_obtener_local(ctx, m, 6));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 110:18 >> 110:21 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k128, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k128(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k128);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 112:18 >> 112:19 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_obtener_local(ctx, m, 3));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 112:22 >> 112:23 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_entero(PDCRT_ENTERO_C(1)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 112:18 >> 112:23 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 26);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k129, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k129(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k129);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 112:18 >> 112:23 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 112:18 >> 112:23 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 112:18 >> 112:23 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 112:14 >> 112:15 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_obtener_local(ctx, m, 6));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 112:14 >> 112:15 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 86:4 >> 113:15 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k89, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k130(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k130);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k131, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k131(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k131);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 114:13 >> 114:16 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_obtener_local(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 114:4 >> 114:16 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 114:4 >> 114:16 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 82:0 >> 115:10 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 82:0 >> 115:10 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 82:0 >> 115:10 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k132(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k132);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 124:19 >> 124:20 */
pdcrt_fijar_local(ctx, m, 5, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 124:19 >> 124:20 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 124:19 >> 124:20 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 124:43 >> 124:48 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 124:67 >> 124:69 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_obtener_local(ctx, m, 3));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 124:48 >> 124:49 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 32);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k133, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k133(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k133);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 124:48 >> 124:49 */
pdcrt_fijar_local(ctx, m, 7, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 124:48 >> 124:49 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 124:48 >> 124:49 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 124:75 >> 124:83 */
pdcrt_fijar_local(ctx, m, 9, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 1)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 124:85 >> 124:93 */
pdcrt_fijar_local(ctx, m, 10, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 2)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 124:95 >> 124:97 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_obtener_local(ctx, m, 3));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 124:75 >> 124:84 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 21);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k134, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 11)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k134(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k134);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 124:75 >> 124:84 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 124:75 >> 124:84 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 124:75 >> 124:84 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 124:75 >> 124:84 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 124:48 >> 124:84 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 33);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k135, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k135(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k135);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 124:48 >> 124:84 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 124:48 >> 124:84 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 124:48 >> 124:84 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 124:19 >> 124:84 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 33);
return pdcrt_llamar1(ctx, m->k.marco, m->k.kf, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 124:19 >> 124:84 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 124:19 >> 124:84 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 123:0 >> 125:10 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 123:0 >> 125:10 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 123:0 >> 125:10 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k136(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k136);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 136:21 >> 136:22 */
pdcrt_fijar_local(ctx, m, 3, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 136:21 >> 136:22 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 136:10 >> 136:12 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_obtener_local(ctx, m, 3));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 136:10 >> 136:12 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 137:11 >> 137:13 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_obtener_local(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 137:16 >> 137:22 */
pdcrt_fijar_local(ctx, m, 7, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 137:22 >> 137:23 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 35);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k137, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k137(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k137);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 137:22 >> 137:23 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 137:22 >> 137:23 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 137:11 >> 137:23 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 12);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k138, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k138(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k138);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 137:11 >> 137:23 */
pdcrt_fijar_local(ctx, m, 4, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 137:11 >> 137:23 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 137:11 >> 137:23 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 137:7 >> 137:23 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 4);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 137:7 >> 137:23 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 137:4 >> 139:9 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 3);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 137:4 >> 139:9 */
pdcrt_obj csaltar_obj = pdcrt_obtener_local(ctx, m, 4);
if(csaltar_obj.recv != &pdcrt_recv_booleano) pdcrt_error(ctx, "Se esperaba un objeto de tipo Boole");
if(csaltar_obj.bval)
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k142, PDCRT_XMM_NULO());
else
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k139, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k139(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k139);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 137:4 >> 139:9 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 137:4 >> 139:9 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 138:8 >> 138:14 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_obtener_local(ctx, m, 1));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 138:14 >> 138:15 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 36);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k140, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k140(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k140);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 138:14 >> 138:15 */
pdcrt_fijar_local(ctx, m, 3, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 138:14 >> 138:15 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 138:14 >> 138:15 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 137:4 >> 139:9 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k143, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k141(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k141);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 4:42 >> 4:47 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k142, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k142(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k142);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 9:6 >> 9:14 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k143, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k143(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k143);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 140:13 >> 140:15 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_obtener_local(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 140:4 >> 140:15 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 3)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 140:4 >> 140:15 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 134:0 >> 141:16 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 134:0 >> 141:16 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 3)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 134:0 >> 141:16 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k144(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k144);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 146:13 >> 146:37 */
pdcrt_fijar_local(ctx, m, 9, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 1)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 146:40 >> 146:58 */
pdcrt_fijar_local(ctx, m, 11, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 146:60 >> 146:66 */
pdcrt_fijar_local_nb(ctx, m, 12, pdcrt_obtener_local(ctx, m, 6));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 146:40 >> 146:59 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 21);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k145, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 11)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 12)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k145(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k145);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 146:40 >> 146:59 */
pdcrt_fijar_local(ctx, m, 10, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 146:40 >> 146:59 */
pdcrt_fijar_local_nb(ctx, m, 12, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 146:40 >> 146:59 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 146:13 >> 146:38 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 21);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k146, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k146(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k146);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 146:13 >> 146:38 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 146:13 >> 146:38 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 146:13 >> 146:38 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 146:4 >> 148:15 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 8);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 146:4 >> 148:15 */
pdcrt_obj csaltar_obj = pdcrt_obtener_local(ctx, m, 9);
if(csaltar_obj.recv != &pdcrt_recv_booleano) pdcrt_error(ctx, "Se esperaba un objeto de tipo Boole");
if(csaltar_obj.bval)
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k151, PDCRT_XMM_NULO());
else
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k147, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k147(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k147);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 146:4 >> 148:15 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 146:4 >> 148:15 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 147:20 >> 147:23 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_obtener_local(ctx, m, 7));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 147:36 >> 147:42 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_obtener_local(ctx, m, 6));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 147:42 >> 147:43 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 34);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k148, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 11)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k148(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k148);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 147:42 >> 147:43 */
pdcrt_fijar_local(ctx, m, 10, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 147:42 >> 147:43 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 147:23 >> 147:24 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 29);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k149, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k149(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k149);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 147:23 >> 147:24 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 147:23 >> 147:24 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 147:23 >> 147:24 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 147:14 >> 147:17 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_obtener_local(ctx, m, 8));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 147:14 >> 147:17 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 146:4 >> 148:15 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k144, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k150(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k150);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 9:0 >> 9:5 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k151, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k151(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k151);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 149:7 >> 149:22 */
pdcrt_fijar_local(ctx, m, 9, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 3)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 149:24 >> 149:27 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_obtener_local(ctx, m, 7));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 149:7 >> 149:23 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 21);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k152, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k152(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k152);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 149:7 >> 149:23 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 149:7 >> 149:23 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 149:7 >> 149:23 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 149:4 >> 157:9 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 8);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 149:4 >> 157:9 */
pdcrt_obj csaltar_obj = pdcrt_obtener_local(ctx, m, 9);
if(csaltar_obj.recv != &pdcrt_recv_booleano) pdcrt_error(ctx, "Se esperaba un objeto de tipo Boole");
if(csaltar_obj.bval)
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k155, PDCRT_XMM_NULO());
else
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k153, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k153(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k153);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 149:4 >> 157:9 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 149:4 >> 157:9 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 150:17 >> 150:33 */
pdcrt_fijar_local(ctx, m, 9, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 2)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 150:35 >> 150:38 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_obtener_local(ctx, m, 7));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 150:17 >> 150:34 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 21);
return pdcrt_llamar1(ctx, m->k.marco, m->k.kf, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 150:17 >> 150:34 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 150:17 >> 150:34 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 149:4 >> 157:9 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k163, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k154(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k154);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 18:13 >> 18:18 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k155, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k155(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k155);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 152:12 >> 152:15 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_obtener_local(ctx, m, 7));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 152:18 >> 152:24 */
pdcrt_fijar_local(ctx, m, 12, PDCRT_OBTENER_CONSTANTE(ctx, m, 37));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 152:12 >> 152:24 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 12);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k156, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 11)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 12)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k156(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k156);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 152:12 >> 152:24 */
pdcrt_fijar_local(ctx, m, 10, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 152:12 >> 152:24 */
pdcrt_fijar_local_nb(ctx, m, 12, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 152:12 >> 152:24 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 152:30 >> 152:33 */
pdcrt_fijar_local_nb(ctx, m, 12, pdcrt_obtener_local(ctx, m, 7));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 152:36 >> 152:43 */
pdcrt_fijar_local(ctx, m, 13, PDCRT_OBTENER_CONSTANTE(ctx, m, 38));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 152:30 >> 152:43 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 12);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k157, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 12)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 13)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k157(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k157);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 152:30 >> 152:43 */
pdcrt_fijar_local(ctx, m, 11, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 152:30 >> 152:43 */
pdcrt_fijar_local_nb(ctx, m, 13, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 152:30 >> 152:43 */
pdcrt_fijar_local_nb(ctx, m, 12, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 152:12 >> 152:43 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 33);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k158, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 11)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k158(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k158);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 152:12 >> 152:43 */
pdcrt_fijar_local(ctx, m, 9, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 152:12 >> 152:43 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 152:12 >> 152:43 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 152:8 >> 156:13 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 9);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 152:8 >> 156:13 */
pdcrt_obj csaltar_obj = pdcrt_obtener_local(ctx, m, 10);
if(csaltar_obj.recv != &pdcrt_recv_booleano) pdcrt_error(ctx, "Se esperaba un objeto de tipo Boole");
if(csaltar_obj.bval)
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k161, PDCRT_XMM_NULO());
else
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k159, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k159(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k159);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 152:8 >> 156:13 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 152:8 >> 156:13 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 153:21 >> 153:24 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_obtener_local(ctx, m, 7));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 153:27 >> 153:33 */
pdcrt_fijar_local(ctx, m, 11, PDCRT_OBTENER_CONSTANTE(ctx, m, 37));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 153:21 >> 153:33 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 12);
return pdcrt_llamar1(ctx, m->k.marco, m->k.kf, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 11)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 153:21 >> 153:33 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 153:21 >> 153:33 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 152:8 >> 156:13 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k162, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k160(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k160);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 26:37 >> 26:40 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k161, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k161(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k161);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 155:21 >> 155:29 */
pdcrt_fijar_local(ctx, m, 11, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 4)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 155:42 >> 155:45 */
pdcrt_fijar_local_nb(ctx, m, 12, pdcrt_obtener_local(ctx, m, 7));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 155:29 >> 155:30 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 5);
return pdcrt_llamar1(ctx, m->k.marco, m->k.kf, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 11)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 12)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 155:29 >> 155:30 */
pdcrt_fijar_local_nb(ctx, m, 12, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 155:29 >> 155:30 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 26:37 >> 26:40 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k162, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k162(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k162);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 26:0 >> 31:9 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k163, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k163(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k163);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 143:0 >> 158:16 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 143:0 >> 158:16 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 11)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 143:0 >> 158:16 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k164(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k164);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 162:22 >> 162:29 */
pdcrt_fijar_local(ctx, m, 7, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 162:22 >> 162:29 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 162:29 >> 162:30 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 40);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k165, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k165(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k165);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 162:29 >> 162:30 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 162:29 >> 162:30 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 162:10 >> 162:19 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_obtener_local(ctx, m, 6));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 162:10 >> 162:19 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 163:17 >> 163:26 */
pdcrt_fijar_local(ctx, m, 7, ctx->espacio_de_nombres_runtime);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 163:17 >> 163:26 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 41);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k166, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k166(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k166);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 163:17 >> 163:26 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 163:17 >> 163:26 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 163:10 >> 163:14 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_obtener_local(ctx, m, 6));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 163:10 >> 163:14 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 27:4 >> 27:12 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k167, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k167(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k167);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 164:13 >> 164:17 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_obtener_local(ctx, m, 5));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 164:4 >> 172:15 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 6);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 164:4 >> 172:15 */
pdcrt_obj csaltar_obj = pdcrt_obtener_local(ctx, m, 7);
if(csaltar_obj.recv != &pdcrt_recv_booleano) pdcrt_error(ctx, "Se esperaba un objeto de tipo Boole");
if(csaltar_obj.bval)
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k181, PDCRT_XMM_NULO());
else
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k168, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k168(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k168);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 164:4 >> 172:15 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 164:4 >> 172:15 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 165:8 >> 165:14 */
pdcrt_fijar_local(ctx, m, 7, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 1)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 165:31 >> 165:37 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_obtener_local(ctx, m, 3));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 165:14 >> 165:15 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 42);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k169, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k169(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k169);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 165:14 >> 165:15 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 165:14 >> 165:15 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 165:14 >> 165:15 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 165:14 >> 171:13 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 166:12 >> 166:30 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 166:32 >> 166:38 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_obtener_local(ctx, m, 3));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 166:12 >> 166:31 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 21);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k170, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k170(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k170);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 166:12 >> 166:31 */
pdcrt_fijar_local(ctx, m, 7, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 166:12 >> 166:31 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 166:12 >> 166:31 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 166:42 >> 166:45 */
pdcrt_fijar_local(ctx, m, 8, PDCRT_OBTENER_CONSTANTE(ctx, m, 43));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 166:12 >> 166:45 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 12);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k171, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k171(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k171);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 166:12 >> 166:45 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 166:12 >> 166:45 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 166:12 >> 166:45 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 166:8 >> 171:13 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 6);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 166:8 >> 171:13 */
pdcrt_obj csaltar_obj = pdcrt_obtener_local(ctx, m, 7);
if(csaltar_obj.recv != &pdcrt_recv_booleano) pdcrt_error(ctx, "Se esperaba un objeto de tipo Boole");
if(csaltar_obj.bval)
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k176, PDCRT_XMM_NULO());
else
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k172, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k172(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k172);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 166:8 >> 171:13 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 166:8 >> 171:13 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 167:12 >> 167:18 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_obtener_local(ctx, m, 3));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 167:18 >> 167:19 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 34);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k173, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k173(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k173);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 167:18 >> 167:19 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 167:18 >> 167:19 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 167:18 >> 168:30 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 168:25 >> 168:30 */
pdcrt_fijar_local(ctx, m, 7, ctx->espacio_de_nombres_runtime);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 168:25 >> 168:30 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 44);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k174, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k174(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k174);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 168:25 >> 168:30 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 168:25 >> 168:30 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 168:18 >> 168:22 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_obtener_local(ctx, m, 6));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 168:18 >> 168:22 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 166:8 >> 171:13 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k179, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k175(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k175);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 29:20 >> 29:23 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k176, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k176(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k176);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 170:12 >> 170:21 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_obtener_local(ctx, m, 4));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 170:39 >> 170:50 */
pdcrt_fijar_local(ctx, m, 9, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 2)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 170:52 >> 170:58 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_obtener_local(ctx, m, 3));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 170:39 >> 170:51 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 21);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k177, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k177(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k177);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 170:39 >> 170:51 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 170:39 >> 170:51 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 170:39 >> 170:51 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 170:21 >> 170:22 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 45);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k178, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k178(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k178);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 170:21 >> 170:22 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 170:21 >> 170:22 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 170:21 >> 170:22 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 170:21 >> 170:22 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 30:13 >> 30:14 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k179, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k179(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k179);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 164:4 >> 172:15 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k167, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k180(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k180);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 33:0 >> 35:9 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k181, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k181(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k181);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 173:13 >> 173:22 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_obtener_local(ctx, m, 4));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 173:4 >> 173:22 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 173:4 >> 173:22 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 160:0 >> 174:16 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 160:0 >> 174:16 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 160:0 >> 174:16 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k182(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k182);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 179:13 >> 179:22 */
pdcrt_fijar_local(ctx, m, 9, ctx->espacio_de_nombres_runtime);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 179:13 >> 179:22 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 41);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k183, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k183(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k183);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 179:13 >> 179:22 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 179:13 >> 179:22 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 179:4 >> 211:15 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 8);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 179:4 >> 211:15 */
pdcrt_obj csaltar_obj = pdcrt_obtener_local(ctx, m, 9);
if(csaltar_obj.recv != &pdcrt_recv_booleano) pdcrt_error(ctx, "Se esperaba un objeto de tipo Boole");
if(csaltar_obj.bval)
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k239, PDCRT_XMM_NULO());
else
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k184, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k184(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k184);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 179:4 >> 211:15 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 179:4 >> 211:15 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 180:17 >> 180:20 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 181:20 >> 181:26 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_obtener_local(ctx, m, 3));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 181:26 >> 181:27 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 34);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k185, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k185(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k185);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 181:26 >> 181:27 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 181:26 >> 181:27 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 181:14 >> 181:17 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_obtener_local(ctx, m, 8));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 181:14 >> 181:17 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 182:11 >> 182:14 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_obtener_local(ctx, m, 5));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 182:17 >> 182:23 */
pdcrt_fijar_local(ctx, m, 11, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 1)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 182:23 >> 182:24 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 35);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k186, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 11)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k186(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k186);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 182:23 >> 182:24 */
pdcrt_fijar_local(ctx, m, 10, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 182:23 >> 182:24 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 182:11 >> 182:24 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 12);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k187, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k187(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k187);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 182:11 >> 182:24 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 182:11 >> 182:24 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 182:11 >> 182:24 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 182:8 >> 184:13 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 8);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 182:8 >> 184:13 */
pdcrt_obj csaltar_obj = pdcrt_obtener_local(ctx, m, 9);
if(csaltar_obj.recv != &pdcrt_recv_booleano) pdcrt_error(ctx, "Se esperaba un objeto de tipo Boole");
if(csaltar_obj.bval)
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k191, PDCRT_XMM_NULO());
else
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k188, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k188(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k188);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 182:8 >> 184:13 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 182:8 >> 184:13 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 183:12 >> 183:30 */
pdcrt_fijar_local(ctx, m, 9, ctx->espacio_de_nombres_runtime);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 183:32 >> 183:78 */
pdcrt_fijar_local(ctx, m, 10, PDCRT_OBTENER_CONSTANTE(ctx, m, 46));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 183:12 >> 183:30 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 47);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k189, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k189(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k189);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 183:12 >> 183:30 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 183:12 >> 183:30 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 183:12 >> 183:30 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 183:12 >> 183:31 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 182:8 >> 184:13 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k192, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k190(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k190);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 34:13 >> 34:15 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k191, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k191(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k191);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 34:13 >> 34:15 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k192, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k192(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k192);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 185:11 >> 185:14 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_obtener_local(ctx, m, 5));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 185:17 >> 185:21 */
pdcrt_fijar_local(ctx, m, 11, PDCRT_OBTENER_CONSTANTE(ctx, m, 14));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 185:21 >> 185:22 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 15);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k193, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 11)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k193(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k193);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 185:21 >> 185:22 */
pdcrt_fijar_local(ctx, m, 10, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 185:21 >> 185:22 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 185:11 >> 185:22 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 12);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k194, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k194(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k194);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 185:11 >> 185:22 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 185:11 >> 185:22 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 185:11 >> 185:22 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 185:8 >> 187:13 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 8);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 185:8 >> 187:13 */
pdcrt_obj csaltar_obj = pdcrt_obtener_local(ctx, m, 9);
if(csaltar_obj.recv != &pdcrt_recv_booleano) pdcrt_error(ctx, "Se esperaba un objeto de tipo Boole");
if(csaltar_obj.bval)
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k197, PDCRT_XMM_NULO());
else
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k195, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k195(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k195);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 185:8 >> 187:13 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 185:8 >> 187:13 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 186:21 >> 186:26 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_obtener_local(ctx, m, 4));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 186:12 >> 186:26 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 186:12 >> 186:26 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 185:8 >> 187:13 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k198, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k196(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k196);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 43:22 >> 43:27 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k197, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k197(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k197);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 44:4 >> 74:9 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k198, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k198(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k198);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 188:11 >> 188:14 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_obtener_local(ctx, m, 5));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 188:17 >> 188:20 */
pdcrt_fijar_local(ctx, m, 10, PDCRT_OBTENER_CONSTANTE(ctx, m, 11));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 188:11 >> 188:20 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 12);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k199, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k199(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k199);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 188:11 >> 188:20 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 188:11 >> 188:20 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 188:11 >> 188:20 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 188:8 >> 210:13 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 8);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 188:8 >> 210:13 */
pdcrt_obj csaltar_obj = pdcrt_obtener_local(ctx, m, 9);
if(csaltar_obj.recv != &pdcrt_recv_booleano) pdcrt_error(ctx, "Se esperaba un objeto de tipo Boole");
if(csaltar_obj.bval)
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k235, PDCRT_XMM_NULO());
else
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k200, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k200(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k200);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 188:8 >> 210:13 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 188:8 >> 210:13 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 189:22 >> 189:25 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 189:27 >> 189:30 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 190:24 >> 190:30 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_obtener_local(ctx, m, 3));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 190:30 >> 190:31 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 34);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k201, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k201(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k201);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 190:30 >> 190:31 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 190:30 >> 190:31 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 190:18 >> 190:21 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_obtener_local(ctx, m, 8));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 190:18 >> 190:21 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 191:15 >> 191:18 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_obtener_local(ctx, m, 6));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 191:21 >> 191:24 */
pdcrt_fijar_local(ctx, m, 10, PDCRT_OBTENER_CONSTANTE(ctx, m, 27));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 191:15 >> 191:24 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 12);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k202, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k202(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k202);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 191:15 >> 191:24 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 191:15 >> 191:24 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 191:15 >> 191:24 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 191:12 >> 193:17 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 8);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 191:12 >> 193:17 */
pdcrt_obj csaltar_obj = pdcrt_obtener_local(ctx, m, 9);
if(csaltar_obj.recv != &pdcrt_recv_booleano) pdcrt_error(ctx, "Se esperaba un objeto de tipo Boole");
if(csaltar_obj.bval)
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k206, PDCRT_XMM_NULO());
else
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k203, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k203(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k203);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 191:12 >> 193:17 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 191:12 >> 193:17 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 192:28 >> 192:32 */
pdcrt_fijar_local(ctx, m, 9, PDCRT_OBTENER_CONSTANTE(ctx, m, 17));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 192:32 >> 192:33 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 15);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k204, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k204(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k204);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 192:32 >> 192:33 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 192:32 >> 192:33 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 192:22 >> 192:25 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_obtener_local(ctx, m, 8));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 192:22 >> 192:25 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 191:12 >> 193:17 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k207, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k205(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k205);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 57:37 >> 57:44 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k206, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k206(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k206);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 57:46 >> 57:49 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k207, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k207(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k207);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 194:15 >> 194:18 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_obtener_local(ctx, m, 6));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 194:21 >> 194:24 */
pdcrt_fijar_local(ctx, m, 10, PDCRT_OBTENER_CONSTANTE(ctx, m, 28));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 194:15 >> 194:24 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 12);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k208, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k208(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k208);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 194:15 >> 194:24 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 194:15 >> 194:24 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 194:15 >> 194:24 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 194:12 >> 197:17 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 8);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 194:12 >> 197:17 */
pdcrt_obj csaltar_obj = pdcrt_obtener_local(ctx, m, 9);
if(csaltar_obj.recv != &pdcrt_recv_booleano) pdcrt_error(ctx, "Se esperaba un objeto de tipo Boole");
if(csaltar_obj.bval)
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k211, PDCRT_XMM_NULO());
else
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k209, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k209(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k209);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 194:12 >> 197:17 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 194:12 >> 197:17 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 196:28 >> 196:31 */
pdcrt_fijar_local(ctx, m, 8, PDCRT_OBTENER_CONSTANTE(ctx, m, 19));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 196:22 >> 196:25 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_obtener_local(ctx, m, 8));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 196:22 >> 196:25 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 194:12 >> 197:17 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k212, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k210(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k210);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 58:15 >> 58:24 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k211, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k211(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k211);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 58:15 >> 58:18 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k212, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k212(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k212);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 198:15 >> 198:18 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_obtener_local(ctx, m, 6));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 198:21 >> 198:25 */
pdcrt_fijar_local(ctx, m, 11, PDCRT_OBTENER_CONSTANTE(ctx, m, 14));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 198:25 >> 198:26 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 15);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k213, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 11)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k213(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k213);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 198:25 >> 198:26 */
pdcrt_fijar_local(ctx, m, 10, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 198:25 >> 198:26 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 198:15 >> 198:26 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 12);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k214, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k214(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k214);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 198:15 >> 198:26 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 198:15 >> 198:26 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 198:15 >> 198:26 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 198:12 >> 200:17 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 8);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 198:12 >> 200:17 */
pdcrt_obj csaltar_obj = pdcrt_obtener_local(ctx, m, 9);
if(csaltar_obj.recv != &pdcrt_recv_booleano) pdcrt_error(ctx, "Se esperaba un objeto de tipo Boole");
if(csaltar_obj.bval)
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k218, PDCRT_XMM_NULO());
else
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k215, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k215(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k215);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 198:12 >> 200:17 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 198:12 >> 200:17 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 199:28 >> 199:32 */
pdcrt_fijar_local(ctx, m, 9, PDCRT_OBTENER_CONSTANTE(ctx, m, 14));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 199:32 >> 199:33 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 15);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k216, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k216(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k216);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 199:32 >> 199:33 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 199:32 >> 199:33 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 199:22 >> 199:25 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_obtener_local(ctx, m, 8));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 199:22 >> 199:25 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 198:12 >> 200:17 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k219, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k217(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k217);
/* ##SRCLOC## "<desconocido>" => 1:0 >> 1:0 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k218, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k218(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k218);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 61:12 >> 63:17 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k219, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k219(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k219);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 201:15 >> 201:18 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_obtener_local(ctx, m, 6));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 201:21 >> 201:24 */
pdcrt_fijar_local(ctx, m, 10, PDCRT_OBTENER_CONSTANTE(ctx, m, 11));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 201:15 >> 201:24 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 12);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k220, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k220(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k220);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 201:15 >> 201:24 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 201:15 >> 201:24 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 201:15 >> 201:24 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 201:12 >> 203:17 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 8);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 201:12 >> 203:17 */
pdcrt_obj csaltar_obj = pdcrt_obtener_local(ctx, m, 9);
if(csaltar_obj.recv != &pdcrt_recv_booleano) pdcrt_error(ctx, "Se esperaba un objeto de tipo Boole");
if(csaltar_obj.bval)
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k224, PDCRT_XMM_NULO());
else
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k221, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k221(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k221);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 201:12 >> 203:17 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 201:12 >> 203:17 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 202:28 >> 202:31 */
pdcrt_fijar_local(ctx, m, 9, PDCRT_OBTENER_CONSTANTE(ctx, m, 11));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 202:31 >> 202:32 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 15);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k222, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k222(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k222);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 202:31 >> 202:32 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 202:31 >> 202:32 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 202:22 >> 202:25 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_obtener_local(ctx, m, 8));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 202:22 >> 202:25 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 201:12 >> 203:17 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k225, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k223(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k223);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 61:21 >> 61:25 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k224, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k224(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k224);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 62:16 >> 62:31 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k225, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k225(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k225);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 204:15 >> 204:21 */
pdcrt_fijar_local(ctx, m, 9, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 2)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 204:23 >> 204:26 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_obtener_local(ctx, m, 7));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 204:15 >> 204:22 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 21);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k226, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k226(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k226);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 204:15 >> 204:22 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 204:15 >> 204:22 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 204:15 >> 204:22 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 204:12 >> 206:17 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 8);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 204:12 >> 206:17 */
pdcrt_obj csaltar_obj = pdcrt_obtener_local(ctx, m, 9);
if(csaltar_obj.recv != &pdcrt_recv_booleano) pdcrt_error(ctx, "Se esperaba un objeto de tipo Boole");
if(csaltar_obj.bval)
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k231, PDCRT_XMM_NULO());
else
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k227, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k227(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k227);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 204:12 >> 206:17 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 204:12 >> 206:17 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 205:16 >> 205:34 */
pdcrt_fijar_local(ctx, m, 9, ctx->espacio_de_nombres_runtime);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 205:37 >> 205:74 */
pdcrt_fijar_local(ctx, m, 11, PDCRT_OBTENER_CONSTANTE(ctx, m, 48));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 205:86 >> 205:89 */
pdcrt_fijar_local_nb(ctx, m, 12, pdcrt_obtener_local(ctx, m, 6));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 205:74 >> 205:75 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 15);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k228, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 11)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 12)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k228(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k228);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 205:74 >> 205:75 */
pdcrt_fijar_local(ctx, m, 10, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 205:74 >> 205:75 */
pdcrt_fijar_local_nb(ctx, m, 12, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 205:74 >> 205:75 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 205:16 >> 205:34 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 47);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k229, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k229(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k229);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 205:16 >> 205:34 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 205:16 >> 205:34 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 205:16 >> 205:34 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 205:16 >> 205:35 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 204:12 >> 206:17 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k232, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k230(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k230);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 64:15 >> 64:26 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k231, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k231(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k231);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 64:15 >> 64:18 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k232, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k232(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k232);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 207:26 >> 207:31 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_obtener_local(ctx, m, 4));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 207:44 >> 207:47 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_obtener_local(ctx, m, 7));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 207:31 >> 207:32 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 29);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k233, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k233(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k233);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 207:31 >> 207:32 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 207:31 >> 207:32 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 207:31 >> 207:32 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 207:18 >> 207:23 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_obtener_local(ctx, m, 8));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 207:18 >> 207:23 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 188:8 >> 210:13 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k237, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k234(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k234);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 64:21 >> 64:25 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k235, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k235(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k235);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 209:26 >> 209:31 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_obtener_local(ctx, m, 4));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 209:44 >> 209:47 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_obtener_local(ctx, m, 5));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 209:31 >> 209:32 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 29);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k236, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k236(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k236);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 209:31 >> 209:32 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 209:31 >> 209:32 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 209:31 >> 209:32 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 209:18 >> 209:23 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_obtener_local(ctx, m, 8));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 209:18 >> 209:23 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 65:16 >> 65:29 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k237, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k237(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k237);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 179:4 >> 211:15 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k182, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k238(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k238);
/* ##SRCLOC## "<desconocido>" => 1:0 >> 1:0 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k239, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k239(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k239);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 212:4 >> 212:16 */
pdcrt_fijar_local(ctx, m, 9, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 212:4 >> 212:16 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 21);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k240, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k240(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k240);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 212:4 >> 212:16 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 212:4 >> 212:16 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 177:4 >> 212:16 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 176:0 >> 213:16 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 176:0 >> 213:16 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 176:0 >> 213:16 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k241(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k241);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 254:10 >> 254:11 */
pdcrt_fijar_local(ctx, m, 7, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 254:10 >> 254:11 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 254:10 >> 254:11 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 253:4 >> 265:23 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 255:15 >> 255:21 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_obtener_local(ctx, m, 5));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 255:21 >> 255:22 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 34);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k242, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k242(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k242);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 255:21 >> 255:22 */
pdcrt_fijar_local(ctx, m, 7, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 255:21 >> 255:22 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 255:10 >> 255:12 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_obtener_local(ctx, m, 7));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 255:10 >> 255:12 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 256:7 >> 256:9 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_obtener_local(ctx, m, 6));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 256:12 >> 256:15 */
pdcrt_fijar_local(ctx, m, 9, PDCRT_OBTENER_CONSTANTE(ctx, m, 49));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 256:7 >> 256:15 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 12);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k243, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k243(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k243);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 256:7 >> 256:15 */
pdcrt_fijar_local(ctx, m, 7, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 256:7 >> 256:15 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 256:7 >> 256:15 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 256:4 >> 258:9 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 7);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 256:4 >> 258:9 */
pdcrt_obj csaltar_obj = pdcrt_obtener_local(ctx, m, 8);
if(csaltar_obj.recv != &pdcrt_recv_booleano) pdcrt_error(ctx, "Se esperaba un objeto de tipo Boole");
if(csaltar_obj.bval)
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k246, PDCRT_XMM_NULO());
else
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k244, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k244(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k244);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 256:4 >> 258:9 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 256:4 >> 258:9 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 257:17 >> 257:29 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 3)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 257:31 >> 257:37 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_obtener_local(ctx, m, 5));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 257:17 >> 257:30 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 21);
return pdcrt_llamar1(ctx, m->k.marco, m->k.kf, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 257:17 >> 257:30 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 257:17 >> 257:30 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 256:4 >> 258:9 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k247, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k245(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k245);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 70:16 >> 70:29 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k246, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k246(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k246);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 70:25 >> 70:29 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k247, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k247(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k247);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 259:7 >> 259:9 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_obtener_local(ctx, m, 6));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 259:12 >> 259:16 */
pdcrt_fijar_local(ctx, m, 11, PDCRT_OBTENER_CONSTANTE(ctx, m, 14));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 259:16 >> 259:17 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 15);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k248, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 11)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k248(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k248);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 259:16 >> 259:17 */
pdcrt_fijar_local(ctx, m, 10, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 259:16 >> 259:17 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 259:7 >> 259:17 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 12);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k249, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k249(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k249);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 259:7 >> 259:17 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 259:7 >> 259:17 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 259:7 >> 259:17 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 259:4 >> 261:9 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 8);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 259:4 >> 261:9 */
pdcrt_obj csaltar_obj = pdcrt_obtener_local(ctx, m, 9);
if(csaltar_obj.recv != &pdcrt_recv_booleano) pdcrt_error(ctx, "Se esperaba un objeto de tipo Boole");
if(csaltar_obj.bval)
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k252, PDCRT_XMM_NULO());
else
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k250, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k250(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k250);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 259:4 >> 261:9 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 259:4 >> 261:9 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 260:17 >> 260:29 */
pdcrt_fijar_local(ctx, m, 9, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 2)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 260:31 >> 260:37 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_obtener_local(ctx, m, 5));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 260:17 >> 260:30 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 21);
return pdcrt_llamar1(ctx, m->k.marco, m->k.kf, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 260:17 >> 260:30 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 260:17 >> 260:30 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 259:4 >> 261:9 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k253, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k251(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k251);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 43:8 >> 43:20 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k252, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k252(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k252);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 82:0 >> 115:10 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k253, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k253(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k253);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 262:7 >> 262:31 */
pdcrt_fijar_local(ctx, m, 10, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 262:33 >> 262:35 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_obtener_local(ctx, m, 6));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 262:7 >> 262:32 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 21);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k254, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 11)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k254(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k254);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 262:7 >> 262:32 */
pdcrt_fijar_local(ctx, m, 9, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 262:7 >> 262:32 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 262:7 >> 262:32 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 262:4 >> 264:9 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 9);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 262:4 >> 264:9 */
pdcrt_obj csaltar_obj = pdcrt_obtener_local(ctx, m, 10);
if(csaltar_obj.recv != &pdcrt_recv_booleano) pdcrt_error(ctx, "Se esperaba un objeto de tipo Boole");
if(csaltar_obj.bval)
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k257, PDCRT_XMM_NULO());
else
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k255, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k255(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k255);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 262:4 >> 264:9 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 262:4 >> 264:9 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 263:17 >> 263:32 */
pdcrt_fijar_local(ctx, m, 10, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 4)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 263:34 >> 263:36 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_obtener_local(ctx, m, 6));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 263:38 >> 263:44 */
pdcrt_fijar_local_nb(ctx, m, 12, pdcrt_obtener_local(ctx, m, 5));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 263:17 >> 263:33 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 21);
return pdcrt_llamar2(ctx, m->k.marco, m->k.kf, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 11)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 12)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 263:17 >> 263:33 */
pdcrt_fijar_local_nb(ctx, m, 12, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 263:17 >> 263:33 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 263:17 >> 263:33 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 262:4 >> 264:9 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k258, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k256(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k256);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 82:25 >> 82:30 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k257, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k257(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k257);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 83:4 >> 114:16 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k258, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k258(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k258);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 265:4 >> 265:22 */
pdcrt_fijar_local(ctx, m, 11, ctx->espacio_de_nombres_runtime);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 265:25 >> 265:97 */
pdcrt_fijar_local(ctx, m, 13, PDCRT_OBTENER_CONSTANTE(ctx, m, 50));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 265:109 >> 265:111 */
pdcrt_fijar_local_nb(ctx, m, 14, pdcrt_obtener_local(ctx, m, 6));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 265:97 >> 265:98 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 15);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k259, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 13)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 14)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k259(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k259);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 265:97 >> 265:98 */
pdcrt_fijar_local(ctx, m, 12, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 265:97 >> 265:98 */
pdcrt_fijar_local_nb(ctx, m, 14, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 265:97 >> 265:98 */
pdcrt_fijar_local_nb(ctx, m, 13, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 265:4 >> 265:22 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 47);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k260, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 11)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 12)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k260(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k260);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 265:4 >> 265:22 */
pdcrt_fijar_local(ctx, m, 10, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 265:4 >> 265:22 */
pdcrt_fijar_local_nb(ctx, m, 12, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 265:4 >> 265:22 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 253:4 >> 265:23 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 252:0 >> 266:16 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 252:0 >> 266:16 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 252:0 >> 266:16 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k261(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k261);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 269:10 >> 269:11 */
pdcrt_fijar_local(ctx, m, 4, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 269:10 >> 269:11 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 269:10 >> 269:11 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 269:10 >> 274:11 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 270:4 >> 270:20 */
pdcrt_fijar_local(ctx, m, 5, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 270:22 >> 270:26 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_obtener_local(ctx, m, 3));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 270:28 >> 270:41 */
do {
static const pdcrt_captura caps[] = {{2}, {1}};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzibepd_N95_x_N95_sexpr_f12, caps, 2);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 7, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 270:4 >> 270:21 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 21);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k264, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k262(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k262);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 271:8 >> 271:23 */
pdcrt_fijar_local(ctx, m, 3, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 271:8 >> 271:23 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 271:8 >> 271:23 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 271:8 >> 271:23 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 271:8 >> 272:15 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 272:8 >> 272:14 */
pdcrt_fijar_local(ctx, m, 4, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 272:30 >> 272:33 */
pdcrt_fijar_local(ctx, m, 5, PDCRT_OBTENER_CONSTANTE(ctx, m, 52));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 272:14 >> 272:15 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 51);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k263, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k263(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k263);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 272:14 >> 272:15 */
pdcrt_fijar_local(ctx, m, 3, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 272:14 >> 272:15 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 272:14 >> 272:15 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 271:8 >> 272:15 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 270:28 >> 270:41 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 270:28 >> 270:41 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 3)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 270:28 >> 270:41 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k264(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k264);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 270:4 >> 270:21 */
pdcrt_fijar_local(ctx, m, 4, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 270:4 >> 270:21 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 270:4 >> 270:21 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 270:4 >> 270:21 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 269:10 >> 274:11 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 274:4 >> 274:10 */
pdcrt_fijar_local(ctx, m, 5, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 2)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 274:26 >> 274:29 */
pdcrt_fijar_local(ctx, m, 6, PDCRT_OBTENER_CONSTANTE(ctx, m, 43));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 274:10 >> 274:11 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 51);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k265, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k265(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k265);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 274:10 >> 274:11 */
pdcrt_fijar_local(ctx, m, 4, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 274:10 >> 274:11 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 274:10 >> 274:11 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 269:10 >> 274:11 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 268:0 >> 275:16 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 268:0 >> 275:16 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 268:0 >> 275:16 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k266(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k266);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 278:4 >> 282:9 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 278:4 >> 282:9 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 279:8 >> 279:14 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_obtener_local(ctx, m, 0));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 279:30 >> 279:36 */
pdcrt_fijar_local(ctx, m, 4, PDCRT_OBTENER_CONSTANTE(ctx, m, 37));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 279:14 >> 279:15 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 51);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k267, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 3)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k267(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k267);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 279:14 >> 279:15 */
pdcrt_fijar_local(ctx, m, 2, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 279:14 >> 279:15 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 279:14 >> 279:15 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 279:14 >> 279:15 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 278:4 >> 282:9 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k271, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k268(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k268);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 86:4 >> 113:15 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k269, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k269(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k269);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 281:8 >> 281:14 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_obtener_local(ctx, m, 0));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 281:30 >> 281:37 */
pdcrt_fijar_local(ctx, m, 4, PDCRT_OBTENER_CONSTANTE(ctx, m, 38));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 281:14 >> 281:15 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 51);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k270, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 3)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k270(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k270);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 281:14 >> 281:15 */
pdcrt_fijar_local(ctx, m, 2, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 281:14 >> 281:15 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 281:14 >> 281:15 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 281:14 >> 281:15 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 86:13 >> 86:14 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k271, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k271(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k271);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 277:0 >> 283:16 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 277:0 >> 283:16 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 2)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 277:0 >> 283:16 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k272(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k272);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 286:30 >> 286:31 */
pdcrt_fijar_local(ctx, m, 4, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 286:30 >> 286:31 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 286:10 >> 286:11 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 51);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k273, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 3)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k273(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k273);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 286:10 >> 286:11 */
pdcrt_fijar_local(ctx, m, 2, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 286:10 >> 286:11 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 286:10 >> 286:11 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 286:10 >> 286:11 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 285:0 >> 287:16 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 285:0 >> 287:16 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 2)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 285:0 >> 287:16 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k274(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k274);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 290:48 >> 290:61 */
pdcrt_fijar_local(ctx, m, 7, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 290:48 >> 290:61 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 290:48 >> 290:61 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 290:35 >> 290:36 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 15);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k275, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k275(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k275);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 290:35 >> 290:36 */
pdcrt_fijar_local(ctx, m, 5, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 290:35 >> 290:36 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 290:35 >> 290:36 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 290:10 >> 290:11 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 51);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k276, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k276(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k276);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 290:10 >> 290:11 */
pdcrt_fijar_local(ctx, m, 3, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 290:10 >> 290:11 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 290:10 >> 290:11 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 290:10 >> 290:11 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 289:0 >> 291:16 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 289:0 >> 291:16 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 3)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 289:0 >> 291:16 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k277(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k277);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 294:30 >> 294:31 */
pdcrt_fijar_local(ctx, m, 4, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 294:30 >> 294:31 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 294:10 >> 294:11 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 51);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k278, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 3)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k278(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k278);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 294:10 >> 294:11 */
pdcrt_fijar_local(ctx, m, 2, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 294:10 >> 294:11 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 294:10 >> 294:11 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 294:10 >> 294:11 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 293:0 >> 295:16 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 293:0 >> 295:16 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 2)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 293:0 >> 295:16 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k279(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k279);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 306:26 >> 306:33 */
pdcrt_fijar_local(ctx, m, 12, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 306:26 >> 306:33 */
pdcrt_fijar_local_nb(ctx, m, 13, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 306:7 >> 306:19 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 21);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k280, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 11)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 12)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k280(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k280);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 306:7 >> 306:19 */
pdcrt_fijar_local(ctx, m, 9, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 306:7 >> 306:19 */
pdcrt_fijar_local_nb(ctx, m, 12, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 306:7 >> 306:19 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 306:7 >> 306:19 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 306:4 >> 308:9 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 9);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 306:4 >> 308:9 */
pdcrt_obj csaltar_obj = pdcrt_obtener_local(ctx, m, 10);
if(csaltar_obj.recv != &pdcrt_recv_booleano) pdcrt_error(ctx, "Se esperaba un objeto de tipo Boole");
if(csaltar_obj.bval)
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k283, PDCRT_XMM_NULO());
else
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k281, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k281(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k281);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 306:4 >> 308:9 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 306:4 >> 308:9 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 307:17 >> 307:32 */
pdcrt_fijar_local(ctx, m, 10, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 2)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 307:34 >> 307:40 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_obtener_local(ctx, m, 7));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 307:42 >> 307:46 */
pdcrt_fijar_local_nb(ctx, m, 12, pdcrt_obtener_local(ctx, m, 8));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 307:17 >> 307:33 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 21);
return pdcrt_llamar2(ctx, m->k.marco, m->k.kf, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 11)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 12)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 307:17 >> 307:33 */
pdcrt_fijar_local_nb(ctx, m, 12, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 307:17 >> 307:33 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 307:17 >> 307:33 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 306:4 >> 308:9 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k284, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k282(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k282);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 88:28 >> 88:29 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k283, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k283(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k283);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 88:28 >> 88:29 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k284, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k284(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k284);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 309:7 >> 309:18 */
pdcrt_fijar_local(ctx, m, 11, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 3)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 309:20 >> 309:24 */
pdcrt_fijar_local_nb(ctx, m, 12, pdcrt_obtener_local(ctx, m, 8));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 309:26 >> 309:31 */
pdcrt_fijar_local(ctx, m, 14, ctx->espacio_de_nombres_runtime);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 309:26 >> 309:31 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 54);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k285, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 14)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k285(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k285);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 309:26 >> 309:31 */
pdcrt_fijar_local(ctx, m, 13, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 309:26 >> 309:31 */
pdcrt_fijar_local_nb(ctx, m, 14, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 309:7 >> 309:19 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 21);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k286, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 11)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 12)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 13)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k286(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k286);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 309:7 >> 309:19 */
pdcrt_fijar_local(ctx, m, 10, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 309:7 >> 309:19 */
pdcrt_fijar_local_nb(ctx, m, 13, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 309:7 >> 309:19 */
pdcrt_fijar_local_nb(ctx, m, 12, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 309:7 >> 309:19 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 309:4 >> 311:9 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 10);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 309:4 >> 311:9 */
pdcrt_obj csaltar_obj = pdcrt_obtener_local(ctx, m, 11);
if(csaltar_obj.recv != &pdcrt_recv_booleano) pdcrt_error(ctx, "Se esperaba un objeto de tipo Boole");
if(csaltar_obj.bval)
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k289, PDCRT_XMM_NULO());
else
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k287, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k287(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k287);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 309:4 >> 311:9 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 309:4 >> 311:9 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 310:17 >> 310:32 */
pdcrt_fijar_local(ctx, m, 11, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 1)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 310:34 >> 310:40 */
pdcrt_fijar_local_nb(ctx, m, 12, pdcrt_obtener_local(ctx, m, 7));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 310:42 >> 310:46 */
pdcrt_fijar_local_nb(ctx, m, 13, pdcrt_obtener_local(ctx, m, 8));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 310:17 >> 310:33 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 21);
return pdcrt_llamar2(ctx, m->k.marco, m->k.kf, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 11)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 12)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 13)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 310:17 >> 310:33 */
pdcrt_fijar_local_nb(ctx, m, 13, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 310:17 >> 310:33 */
pdcrt_fijar_local_nb(ctx, m, 12, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 310:17 >> 310:33 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 309:4 >> 311:9 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k290, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k288(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k288);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 89:11 >> 89:12 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k289, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k289(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k289);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 89:15 >> 89:18 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k290, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k290(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k290);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 312:7 >> 312:18 */
pdcrt_fijar_local(ctx, m, 12, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 3)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 312:20 >> 312:24 */
pdcrt_fijar_local_nb(ctx, m, 13, pdcrt_obtener_local(ctx, m, 8));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 312:26 >> 312:32 */
pdcrt_fijar_local(ctx, m, 15, ctx->espacio_de_nombres_runtime);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 312:26 >> 312:32 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 55);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k291, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 15)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k291(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k291);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 312:26 >> 312:32 */
pdcrt_fijar_local(ctx, m, 14, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 312:26 >> 312:32 */
pdcrt_fijar_local_nb(ctx, m, 15, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 312:7 >> 312:19 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 21);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k292, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 12)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 13)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 14)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k292(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k292);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 312:7 >> 312:19 */
pdcrt_fijar_local(ctx, m, 11, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 312:7 >> 312:19 */
pdcrt_fijar_local_nb(ctx, m, 14, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 312:7 >> 312:19 */
pdcrt_fijar_local_nb(ctx, m, 13, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 312:7 >> 312:19 */
pdcrt_fijar_local_nb(ctx, m, 12, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 312:4 >> 314:9 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 11);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 12, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 312:4 >> 314:9 */
pdcrt_obj csaltar_obj = pdcrt_obtener_local(ctx, m, 12);
if(csaltar_obj.recv != &pdcrt_recv_booleano) pdcrt_error(ctx, "Se esperaba un objeto de tipo Boole");
if(csaltar_obj.bval)
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k295, PDCRT_XMM_NULO());
else
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k293, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k293(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k293);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 312:4 >> 314:9 */
pdcrt_fijar_local_nb(ctx, m, 12, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 312:4 >> 314:9 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 313:17 >> 313:34 */
pdcrt_fijar_local(ctx, m, 12, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 313:36 >> 313:42 */
pdcrt_fijar_local_nb(ctx, m, 13, pdcrt_obtener_local(ctx, m, 7));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 313:44 >> 313:48 */
pdcrt_fijar_local_nb(ctx, m, 14, pdcrt_obtener_local(ctx, m, 8));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 313:17 >> 313:35 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 21);
return pdcrt_llamar2(ctx, m->k.marco, m->k.kf, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 12)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 13)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 14)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 313:17 >> 313:35 */
pdcrt_fijar_local_nb(ctx, m, 14, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 313:17 >> 313:35 */
pdcrt_fijar_local_nb(ctx, m, 13, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 313:17 >> 313:35 */
pdcrt_fijar_local_nb(ctx, m, 12, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 312:4 >> 314:9 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k296, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k294(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k294);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 90:22 >> 90:23 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k295, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k295(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k295);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 90:22 >> 90:23 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k296, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k296(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k296);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 315:7 >> 315:18 */
pdcrt_fijar_local(ctx, m, 13, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 3)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 315:20 >> 315:24 */
pdcrt_fijar_local_nb(ctx, m, 14, pdcrt_obtener_local(ctx, m, 8));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 315:26 >> 315:31 */
pdcrt_fijar_local(ctx, m, 16, ctx->espacio_de_nombres_runtime);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 315:26 >> 315:31 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 56);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k297, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 16)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k297(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k297);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 315:26 >> 315:31 */
pdcrt_fijar_local(ctx, m, 15, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 315:26 >> 315:31 */
pdcrt_fijar_local_nb(ctx, m, 16, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 315:7 >> 315:19 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 21);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k298, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 13)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 14)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 15)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k298(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k298);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 315:7 >> 315:19 */
pdcrt_fijar_local(ctx, m, 12, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 315:7 >> 315:19 */
pdcrt_fijar_local_nb(ctx, m, 15, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 315:7 >> 315:19 */
pdcrt_fijar_local_nb(ctx, m, 14, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 315:7 >> 315:19 */
pdcrt_fijar_local_nb(ctx, m, 13, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 315:4 >> 317:9 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 12);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 13, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 315:4 >> 317:9 */
pdcrt_obj csaltar_obj = pdcrt_obtener_local(ctx, m, 13);
if(csaltar_obj.recv != &pdcrt_recv_booleano) pdcrt_error(ctx, "Se esperaba un objeto de tipo Boole");
if(csaltar_obj.bval)
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k301, PDCRT_XMM_NULO());
else
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k299, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k299(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k299);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 315:4 >> 317:9 */
pdcrt_fijar_local_nb(ctx, m, 13, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 315:4 >> 317:9 */
pdcrt_fijar_local_nb(ctx, m, 12, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 316:17 >> 316:32 */
pdcrt_fijar_local(ctx, m, 13, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 4)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 316:34 >> 316:40 */
pdcrt_fijar_local_nb(ctx, m, 14, pdcrt_obtener_local(ctx, m, 7));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 316:42 >> 316:46 */
pdcrt_fijar_local_nb(ctx, m, 15, pdcrt_obtener_local(ctx, m, 8));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 316:17 >> 316:33 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 21);
return pdcrt_llamar2(ctx, m->k.marco, m->k.kf, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 13)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 14)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 15)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 316:17 >> 316:33 */
pdcrt_fijar_local_nb(ctx, m, 15, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 316:17 >> 316:33 */
pdcrt_fijar_local_nb(ctx, m, 14, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 316:17 >> 316:33 */
pdcrt_fijar_local_nb(ctx, m, 13, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 315:4 >> 317:9 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k302, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k300(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k300);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 91:22 >> 91:23 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k301, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k301(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k301);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 91:22 >> 91:23 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k302, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k302(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k302);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 318:7 >> 318:18 */
pdcrt_fijar_local(ctx, m, 14, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 3)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 318:20 >> 318:24 */
pdcrt_fijar_local_nb(ctx, m, 15, pdcrt_obtener_local(ctx, m, 8));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 318:26 >> 318:34 */
pdcrt_fijar_local(ctx, m, 16, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 5)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 318:7 >> 318:19 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 21);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k303, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 14)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 15)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 16)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k303(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k303);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 318:7 >> 318:19 */
pdcrt_fijar_local(ctx, m, 13, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 318:7 >> 318:19 */
pdcrt_fijar_local_nb(ctx, m, 16, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 318:7 >> 318:19 */
pdcrt_fijar_local_nb(ctx, m, 15, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 318:7 >> 318:19 */
pdcrt_fijar_local_nb(ctx, m, 14, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 318:4 >> 320:9 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 13);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 14, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 318:4 >> 320:9 */
pdcrt_obj csaltar_obj = pdcrt_obtener_local(ctx, m, 14);
if(csaltar_obj.recv != &pdcrt_recv_booleano) pdcrt_error(ctx, "Se esperaba un objeto de tipo Boole");
if(csaltar_obj.bval)
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k306, PDCRT_XMM_NULO());
else
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k304, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k304(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k304);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 318:4 >> 320:9 */
pdcrt_fijar_local_nb(ctx, m, 14, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 318:4 >> 320:9 */
pdcrt_fijar_local_nb(ctx, m, 13, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 319:17 >> 319:35 */
pdcrt_fijar_local(ctx, m, 14, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 6)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 319:37 >> 319:43 */
pdcrt_fijar_local_nb(ctx, m, 15, pdcrt_obtener_local(ctx, m, 7));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 319:45 >> 319:49 */
pdcrt_fijar_local_nb(ctx, m, 16, pdcrt_obtener_local(ctx, m, 8));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 319:17 >> 319:36 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 21);
return pdcrt_llamar2(ctx, m->k.marco, m->k.kf, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 14)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 15)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 16)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 319:17 >> 319:36 */
pdcrt_fijar_local_nb(ctx, m, 16, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 319:17 >> 319:36 */
pdcrt_fijar_local_nb(ctx, m, 15, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 319:17 >> 319:36 */
pdcrt_fijar_local_nb(ctx, m, 14, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 318:4 >> 320:9 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k307, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k305(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k305);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 92:12 >> 92:28 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k306, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k306(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k306);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 92:27 >> 92:28 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k307, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k307(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k307);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 321:4 >> 321:22 */
pdcrt_fijar_local(ctx, m, 15, ctx->espacio_de_nombres_runtime);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 321:25 >> 321:101 */
pdcrt_fijar_local(ctx, m, 17, PDCRT_OBTENER_CONSTANTE(ctx, m, 57));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 321:114 >> 321:120 */
pdcrt_fijar_local(ctx, m, 19, ctx->espacio_de_nombres_runtime);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 321:122 >> 321:126 */
pdcrt_fijar_local_nb(ctx, m, 20, pdcrt_obtener_local(ctx, m, 8));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 321:114 >> 321:120 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 58);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k308, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 19)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 20)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k308(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k308);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 321:114 >> 321:120 */
pdcrt_fijar_local(ctx, m, 18, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 321:114 >> 321:120 */
pdcrt_fijar_local_nb(ctx, m, 20, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 321:114 >> 321:120 */
pdcrt_fijar_local_nb(ctx, m, 19, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 321:101 >> 321:102 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 15);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k309, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 17)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 18)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k309(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k309);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 321:101 >> 321:102 */
pdcrt_fijar_local(ctx, m, 16, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 321:101 >> 321:102 */
pdcrt_fijar_local_nb(ctx, m, 18, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 321:101 >> 321:102 */
pdcrt_fijar_local_nb(ctx, m, 17, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 321:4 >> 321:22 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 47);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_sexpr_k310, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 15)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 16)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k310(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k310);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 321:4 >> 321:22 */
pdcrt_fijar_local(ctx, m, 14, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 321:4 >> 321:22 */
pdcrt_fijar_local_nb(ctx, m, 16, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 321:4 >> 321:22 */
pdcrt_fijar_local_nb(ctx, m, 15, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 306:4 >> 321:23 */
pdcrt_fijar_local_nb(ctx, m, 14, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 305:0 >> 322:16 */
pdcrt_fijar_local_nb(ctx, m, 14, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 305:0 >> 322:16 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 14)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 305:0 >> 322:16 */
pdcrt_fijar_local_nb(ctx, m, 14, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k311(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k311);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 63)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 138), pdcrt_obtener_local(ctx, m, 139), "ParaCadaElemento", 16, true, pdc_mpdzibepd_N95_x_N95_sexpr_k312);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k312(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k312);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 116)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 138), pdcrt_obtener_local(ctx, m, 139), "ParaCadaElementoConÍndice", 26, true, pdc_mpdzibepd_N95_x_N95_sexpr_k313);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k313(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k313);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 64)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 138), pdcrt_obtener_local(ctx, m, 139), "Todos", 5, true, pdc_mpdzibepd_N95_x_N95_sexpr_k314);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k314(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k314);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 115)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 138), pdcrt_obtener_local(ctx, m, 139), "EsSubclase", 10, true, pdc_mpdzibepd_N95_x_N95_sexpr_k315);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k315(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k315);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 65)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 138), pdcrt_obtener_local(ctx, m, 139), "Contiene", 8, true, pdc_mpdzibepd_N95_x_N95_sexpr_k316);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k316(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k316);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 114)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 138), pdcrt_obtener_local(ctx, m, 139), "EsInstancia", 11, true, pdc_mpdzibepd_N95_x_N95_sexpr_k317);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k317(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k317);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 66)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 138), pdcrt_obtener_local(ctx, m, 139), "EsImpar", 7, true, pdc_mpdzibepd_N95_x_N95_sexpr_k318);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k318(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k318);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 113)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 138), pdcrt_obtener_local(ctx, m, 139), "ParaCadaNúmeroConPaso", 22, true, pdc_mpdzibepd_N95_x_N95_sexpr_k319);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k319(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k319);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 67)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 138), pdcrt_obtener_local(ctx, m, 139), "Escribir", 8, true, pdc_mpdzibepd_N95_x_N95_sexpr_k320);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k320(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k320);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 112)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 138), pdcrt_obtener_local(ctx, m, 139), "Identidad", 9, true, pdc_mpdzibepd_N95_x_N95_sexpr_k321);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k321(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k321);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 68)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 138), pdcrt_obtener_local(ctx, m, 139), "Reducir", 7, true, pdc_mpdzibepd_N95_x_N95_sexpr_k322);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k322(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k322);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 111)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 138), pdcrt_obtener_local(ctx, m, 139), "Mapear", 6, true, pdc_mpdzibepd_N95_x_N95_sexpr_k323);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k323(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k323);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 69)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 138), pdcrt_obtener_local(ctx, m, 139), "Filtrar", 7, true, pdc_mpdzibepd_N95_x_N95_sexpr_k324);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k324(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k324);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 110)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 138), pdcrt_obtener_local(ctx, m, 139), "Algún", 6, true, pdc_mpdzibepd_N95_x_N95_sexpr_k325);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k325(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k325);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 70)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 138), pdcrt_obtener_local(ctx, m, 139), "DígitoAEntero", 14, true, pdc_mpdzibepd_N95_x_N95_sexpr_k326);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k326(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k326);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 109)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 138), pdcrt_obtener_local(ctx, m, 139), "Elevar", 6, true, pdc_mpdzibepd_N95_x_N95_sexpr_k327);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k327(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k327);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 71)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 138), pdcrt_obtener_local(ctx, m, 139), "ConvertirAEntero", 16, true, pdc_mpdzibepd_N95_x_N95_sexpr_k328);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k328(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k328);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 108)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 138), pdcrt_obtener_local(ctx, m, 139), "ConvertirANúmero", 17, true, pdc_mpdzibepd_N95_x_N95_sexpr_k329);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k329(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k329);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 72)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 138), pdcrt_obtener_local(ctx, m, 139), "EsNúmeroEntero", 15, true, pdc_mpdzibepd_N95_x_N95_sexpr_k330);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k330(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k330);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 107)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 138), pdcrt_obtener_local(ctx, m, 139), "EsNúmero", 9, true, pdc_mpdzibepd_N95_x_N95_sexpr_k331);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k331(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k331);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 73)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 138), pdcrt_obtener_local(ctx, m, 139), "Concatenar", 10, true, pdc_mpdzibepd_N95_x_N95_sexpr_k332);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k332(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k332);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 106)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 138), pdcrt_obtener_local(ctx, m, 139), "ArregloConFinal", 15, true, pdc_mpdzibepd_N95_x_N95_sexpr_k333);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k333(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k333);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 74)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 138), pdcrt_obtener_local(ctx, m, 139), "Aplicar\'", 8, true, pdc_mpdzibepd_N95_x_N95_sexpr_k334);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k334(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k334);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 105)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 138), pdcrt_obtener_local(ctx, m, 139), "Aplicar\'i", 9, true, pdc_mpdzibepd_N95_x_N95_sexpr_k335);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k335(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k335);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 75)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 138), pdcrt_obtener_local(ctx, m, 139), "EnviarMensaje", 13, true, pdc_mpdzibepd_N95_x_N95_sexpr_k336);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k336(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k336);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 104)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 138), pdcrt_obtener_local(ctx, m, 139), "Resto", 5, true, pdc_mpdzibepd_N95_x_N95_sexpr_k337);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k337(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k337);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 76)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 138), pdcrt_obtener_local(ctx, m, 139), "Abs", 3, true, pdc_mpdzibepd_N95_x_N95_sexpr_k338);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k338(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k338);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 103)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 138), pdcrt_obtener_local(ctx, m, 139), "Mod", 3, true, pdc_mpdzibepd_N95_x_N95_sexpr_k339);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k339(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k339);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 77)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 138), pdcrt_obtener_local(ctx, m, 139), "EsPar", 5, true, pdc_mpdzibepd_N95_x_N95_sexpr_k340);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k340(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k340);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 102)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 138), pdcrt_obtener_local(ctx, m, 139), "Aplanar", 7, true, pdc_mpdzibepd_N95_x_N95_sexpr_k341);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k341(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k341);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 78)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 138), pdcrt_obtener_local(ctx, m, 139), "AplanarTodo", 11, true, pdc_mpdzibepd_N95_x_N95_sexpr_k342);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k342(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k342);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 101)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 138), pdcrt_obtener_local(ctx, m, 139), "PedazoDeArreglo", 15, true, pdc_mpdzibepd_N95_x_N95_sexpr_k343);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k343(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k343);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 79)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 138), pdcrt_obtener_local(ctx, m, 139), "PrimerElemento", 14, true, pdc_mpdzibepd_N95_x_N95_sexpr_k344);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k344(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k344);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 100)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 138), pdcrt_obtener_local(ctx, m, 139), "ÚltimoElemento", 15, true, pdc_mpdzibepd_N95_x_N95_sexpr_k345);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k345(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k345);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 80)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 138), pdcrt_obtener_local(ctx, m, 139), "ÚnicoElemento", 14, true, pdc_mpdzibepd_N95_x_N95_sexpr_k346);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k346(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k346);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 99)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 138), pdcrt_obtener_local(ctx, m, 139), "EsNulo", 6, true, pdc_mpdzibepd_N95_x_N95_sexpr_k347);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k347(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k347);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 81)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 138), pdcrt_obtener_local(ctx, m, 139), "Max", 3, true, pdc_mpdzibepd_N95_x_N95_sexpr_k348);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k348(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k348);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 98)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 138), pdcrt_obtener_local(ctx, m, 139), "Min", 3, true, pdc_mpdzibepd_N95_x_N95_sexpr_k349);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k349(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k349);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 82)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 138), pdcrt_obtener_local(ctx, m, 139), "NoImplementado", 14, true, pdc_mpdzibepd_N95_x_N95_sexpr_k350);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k350(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k350);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 97)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 138), pdcrt_obtener_local(ctx, m, 139), "MétodoAbstracto", 16, true, pdc_mpdzibepd_N95_x_N95_sexpr_k351);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k351(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k351);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 83)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 138), pdcrt_obtener_local(ctx, m, 139), "Inalcanzable", 12, true, pdc_mpdzibepd_N95_x_N95_sexpr_k352);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k352(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k352);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 96)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 138), pdcrt_obtener_local(ctx, m, 139), "LlamarConEC", 11, true, pdc_mpdzibepd_N95_x_N95_sexpr_k353);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k353(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k353);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 84)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 138), pdcrt_obtener_local(ctx, m, 139), "ArregloSinElementoEnÍndice", 27, true, pdc_mpdzibepd_N95_x_N95_sexpr_k354);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k354(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k354);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 95)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 138), pdcrt_obtener_local(ctx, m, 139), "LeerLínea", 10, true, pdc_mpdzibepd_N95_x_N95_sexpr_k355);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k355(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k355);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 85)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 138), pdcrt_obtener_local(ctx, m, 139), "LeerNúmero", 11, true, pdc_mpdzibepd_N95_x_N95_sexpr_k356);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k356(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k356);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 94)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 138), pdcrt_obtener_local(ctx, m, 139), "Parcial", 7, true, pdc_mpdzibepd_N95_x_N95_sexpr_k357);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k357(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k357);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 86)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 138), pdcrt_obtener_local(ctx, m, 139), "MétodoComoFunción", 19, true, pdc_mpdzibepd_N95_x_N95_sexpr_k358);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k358(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k358);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 93)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 138), pdcrt_obtener_local(ctx, m, 139), "OperadorBinario", 15, true, pdc_mpdzibepd_N95_x_N95_sexpr_k359);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k359(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k359);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 87)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 138), pdcrt_obtener_local(ctx, m, 139), "ContienePredicado", 17, true, pdc_mpdzibepd_N95_x_N95_sexpr_k360);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k360(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k360);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 92)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 138), pdcrt_obtener_local(ctx, m, 139), "BuscarPredicado", 15, true, pdc_mpdzibepd_N95_x_N95_sexpr_k361);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k361(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k361);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 88)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 138), pdcrt_obtener_local(ctx, m, 139), "ParaCadaElementoEnReversa", 25, true, pdc_mpdzibepd_N95_x_N95_sexpr_k362);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k362(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k362);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 91)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 138), pdcrt_obtener_local(ctx, m, 139), "Diccionario", 11, false, pdc_mpdzibepd_N95_x_N95_sexpr_k363);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k363(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k363);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 89)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 138), pdcrt_obtener_local(ctx, m, 139), "Resultado", 9, false, pdc_mpdzibepd_N95_x_N95_sexpr_k364);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k364(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k364);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 90)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 138), pdcrt_obtener_local(ctx, m, 139), "Pila", 4, false, pdc_mpdzibepd_N95_x_N95_sexpr_k365);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k365(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k365);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 2:28 >> 2:34 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 118)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 138), pdcrt_obtener_local(ctx, m, 139), "Puerto", 6, false, pdc_mpdzibepd_N95_x_N95_sexpr_k366);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k366(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k366);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 3:32 >> 3:43 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 119)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 138), pdcrt_obtener_local(ctx, m, 139), "MapearTexto", 11, true, pdc_mpdzibepd_N95_x_N95_sexpr_k367);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k367(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k367);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 4:42 >> 4:47 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 120)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 138), pdcrt_obtener_local(ctx, m, 139), "ASCII", 5, false, pdc_mpdzibepd_N95_x_N95_sexpr_k368);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k368(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k368);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 9:6 >> 9:14 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 121)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 138), pdcrt_obtener_local(ctx, m, 139), "Símbolo", 8, false, pdc_mpdzibepd_N95_x_N95_sexpr_k369);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k369(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k369);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 43:8 >> 43:20 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 122)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 138), pdcrt_obtener_local(ctx, m, 139), "EscaparTexto", 12, true, pdc_mpdzibepd_N95_x_N95_sexpr_k370);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k370(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k370);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 82:8 >> 82:23 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 123)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 138), pdcrt_obtener_local(ctx, m, 139), "DesescaparTexto", 15, true, pdc_mpdzibepd_N95_x_N95_sexpr_k371);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k371(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k371);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 117:9 >> 117:17 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 124)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 138), pdcrt_obtener_local(ctx, m, 139), "EXTRA_ID", 8, false, pdc_mpdzibepd_N95_x_N95_sexpr_k372);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k372(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k372);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 123:8 >> 123:32 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 125)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 138), pdcrt_obtener_local(ctx, m, 139), "EsCarácterIdentificador", 24, true, pdc_mpdzibepd_N95_x_N95_sexpr_k373);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k373(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k373);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 134:14 >> 134:32 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 126)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 138), pdcrt_obtener_local(ctx, m, 139), "SiguienteCarácter", 18, true, pdc_mpdzibepd_N95_x_N95_sexpr_k374);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k374(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k374);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 143:14 >> 143:29 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 127)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 138), pdcrt_obtener_local(ctx, m, 139), "ParsearSímbolo", 15, true, pdc_mpdzibepd_N95_x_N95_sexpr_k375);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k375(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k375);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 160:14 >> 160:26 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 128)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 138), pdcrt_obtener_local(ctx, m, 139), "ParsearLista", 12, true, pdc_mpdzibepd_N95_x_N95_sexpr_k376);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k376(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k376);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 176:14 >> 176:26 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 129)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 138), pdcrt_obtener_local(ctx, m, 139), "ParsearTexto", 12, true, pdc_mpdzibepd_N95_x_N95_sexpr_k377);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k377(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k377);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 242:14 >> 242:25 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 130)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 138), pdcrt_obtener_local(ctx, m, 139), "ParsearDato", 11, true, pdc_mpdzibepd_N95_x_N95_sexpr_k378);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k378(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k378);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 252:14 >> 252:26 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 131)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 138), pdcrt_obtener_local(ctx, m, 139), "_ParsearDato", 12, true, pdc_mpdzibepd_N95_x_N95_sexpr_k379);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k379(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k379);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 268:14 >> 268:29 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 132)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 138), pdcrt_obtener_local(ctx, m, 139), "DesparsearLista", 15, true, pdc_mpdzibepd_N95_x_N95_sexpr_k380);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k380(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k380);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 277:14 >> 277:29 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 133)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 138), pdcrt_obtener_local(ctx, m, 139), "DesparsearBoole", 15, true, pdc_mpdzibepd_N95_x_N95_sexpr_k381);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k381(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k381);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 285:14 >> 285:31 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 134)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 138), pdcrt_obtener_local(ctx, m, 139), "DesparsearNúmero", 17, true, pdc_mpdzibepd_N95_x_N95_sexpr_k382);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k382(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k382);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 289:14 >> 289:29 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 135)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 138), pdcrt_obtener_local(ctx, m, 139), "DesparsearTexto", 15, true, pdc_mpdzibepd_N95_x_N95_sexpr_k383);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k383(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k383);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 293:14 >> 293:32 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 136)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 138), pdcrt_obtener_local(ctx, m, 139), "DesparsearSímbolo", 18, true, pdc_mpdzibepd_N95_x_N95_sexpr_k384);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k384(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k384);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 305:14 >> 305:28 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 137)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 138), pdcrt_obtener_local(ctx, m, 139), "DesparsearDato", 14, true, pdc_mpdzibepd_N95_x_N95_sexpr_k385);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sexpr_k385(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sexpr_k385);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
return pdcrt_exportar(ctx, m, pdcrt_obtener_local(ctx, m, 138), "pdzibepd_N95_x_N95_sexpr", 24);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sexpr.pd" => 1:0 >> 322:16 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
}
PDCRT_DECLARAR_ENTRYPOINT(pdzibepd_N95_x_N95_sexpr, pdc_mpdzibepd_N95_x_N95_sexpr_f19)
#ifdef PDCRT_MAIN
#define PDCRT_DEPS(X) \
    X(pdzibepd_N95_x_N95_sexpr, "pdzibepd_N95_x_N95_sexpr", 24) \
    X(pdzibepd_N95_builtins, "pdzibepd_N95_builtins", 21) \
    X(pdzibepd_N95_utilidades_N95_texto_N95_ascii, "pdzibepd_N95_utilidades_N95_texto_N95_ascii", 43) \
    X(pdzibepd_N95_builtinsImpl, "pdzibepd_N95_builtinsImpl", 25) \
    X(pdzibepd_N95_datos_N95_pila, "pdzibepd_N95_datos_N95_pila", 27) \
    X(pdzibepd_N95_datos_N95_diccionario, "pdzibepd_N95_datos_N95_diccionario", 34) \
    X(pdzibepd_N95_datos_N95_diccionario_N95_hashmap, "pdzibepd_N95_datos_N95_diccionario_N95_hashmap", 46) \
    X(pdzibepd_N95_datos_N95_diccionario_N95_interfaz, "pdzibepd_N95_datos_N95_diccionario_N95_interfaz", 47) \
    X(pdzibepd_N95_datos_N95_diccionario_N95_alist, "pdzibepd_N95_datos_N95_diccionario_N95_alist", 44) \
    X(pdzibepd_N95_datos_N95_resultado, "pdzibepd_N95_datos_N95_resultado", 32) \
    X(pdzibepd_N95_x_N95_puerto, "pdzibepd_N95_x_N95_puerto", 25) \
    X(pdzibepd_N95_utilidades_N95_texto, "pdzibepd_N95_utilidades_N95_texto", 33)
PDCRT_DECLARAR_DEPS(PDCRT_DEPS)
PDCRT_DECLARAR_MAIN(pdzibepd_N95_x_N95_sexpr)
#endif
