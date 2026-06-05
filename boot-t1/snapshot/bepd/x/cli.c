#define PDCRT_INTERNO
#include "pdcrt/pdcrt.h"
#include "pdcrt/pdcrt_ops.h"
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_f0(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_f1(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_f2(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_f3(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_f4(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_f5(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_f6(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_f7(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_f8(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_f9(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_f10(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_f11(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_f12(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_f13(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_f14(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_f15(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_f16(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_f17(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_f18(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_f19(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k0(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k1(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k2(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k3(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k4(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k5(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k6(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k7(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k8(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k9(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k10(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k11(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k12(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k13(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k14(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k15(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k16(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k17(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k18(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k19(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k20(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k21(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k22(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k23(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k24(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k25(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k26(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k27(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k28(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k29(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k30(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k31(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k32(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k33(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k34(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k35(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k36(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k37(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k38(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k39(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k40(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k41(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k42(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k43(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k44(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k45(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k46(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k47(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k48(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k49(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k50(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k51(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k52(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k53(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k54(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k55(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k56(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k57(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k58(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k59(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k60(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k61(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k62(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k63(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k64(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k65(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k66(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k67(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k68(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k69(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k70(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k71(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k72(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k73(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k74(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k75(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k76(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k77(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k78(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k79(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k80(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k81(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k82(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k83(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k84(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k85(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k86(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k87(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k88(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k89(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k90(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k91(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k92(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k93(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k94(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k95(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k96(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k97(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k98(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k99(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k100(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k101(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k102(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k103(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k104(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k105(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k106(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k107(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k108(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k109(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k110(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k111(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k112(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k113(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k114(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k115(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k116(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k117(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k118(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k119(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k120(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k121(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k122(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k123(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k124(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k125(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k126(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k127(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k128(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k129(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k130(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k131(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k132(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k133(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k134(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k135(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k136(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k137(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k138(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k139(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k140(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k141(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k142(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k143(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k144(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k145(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k146(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k147(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k148(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k149(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k150(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k151(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k152(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k153(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k154(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k155(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k156(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k157(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k158(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k159(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k160(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k161(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k162(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k163(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k164(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k165(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k166(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k167(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k168(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k169(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k170(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k171(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k172(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k173(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k174(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k175(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k176(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k177(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k178(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k179(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k180(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k181(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k182(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k183(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k184(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k185(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k186(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k187(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k188(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k189(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k190(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k191(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k192(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k193(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k194(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k195(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k196(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k197(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k198(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k199(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k200(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k201(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k202(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k203(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k204(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k205(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k206(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k207(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k208(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k209(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k210(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k211(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k212(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k213(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k214(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k215(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k216(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k217(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k218(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k219(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k220(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k221(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k222(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k223(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k224(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k225(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k226(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k227(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k228(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k229(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k230(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k231(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k232(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k233(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k234(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k235(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k236(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k237(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k238(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k239(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k240(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k241(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k242(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k243(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k244(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k245(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k246(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k247(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k248(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k249(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k250(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k251(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k252(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k253(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k254(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k255(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k256(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k257(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k258(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k259(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k260(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k261(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k262(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k263(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k264(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k265(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k266(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k267(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k268(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k269(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k270(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k271(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k272(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k273(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k274(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k275(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k276(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k277(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k278(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k279(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k280(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k281(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k282(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k283(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k284(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k285(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k286(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k287(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k288(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k289(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k290(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k291(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k292(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k293(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k294(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k295(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k296(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k297(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k298(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k299(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k300(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k301(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k302(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k303(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k304(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k305(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k306(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k307(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k308(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k309(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k310(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k311(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k312(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k313(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k314(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k315(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k316(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k317(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k318(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k319(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k320(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k321(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k322(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k323(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k324(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k325(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k326(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k327(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k328(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k329(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k330(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k331(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k332(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k333(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k334(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k335(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k336(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k337(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k338(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k339(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k340(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k341(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k342(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k343(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k344(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k345(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k346(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k347(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k348(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k349(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k350(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k351(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k352(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k353(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k354(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k355(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k356(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k357(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k358(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k359(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k360(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k361(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k362(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k363(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k364(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k365(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k366(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k367(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k368(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k369(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k370(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k371(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k372(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k373(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k374(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k375(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k376(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k377(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k378(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k379(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k380(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k381(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k382(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k383(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k384(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k385(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k386(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k387(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k388(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k389(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k390(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k391(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k392(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k393(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k394(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k395(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_f0(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 29:33 >> 29:46 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd|29:33|29:46";
PDCRT_ALOJAR_MARCO(ctx, 9, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_x_N95_cli_p0 { const pdcrt_params_base base; const pdcrt_param_data params[1]; };
static const struct pdc_params_data_mpdzibepd_N95_x_N95_cli_p0 pdc_params = { .base = { .num_params = 1, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{4}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 29:48 >> 29:54 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 29:48 >> 29:54 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_obtener_local(ctx, m, 4));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 29:48 >> 29:54 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 30:13 >> 30:17 */
pdcrt_fijar_local(ctx, m, 5, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 1)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 30:20 >> 30:23 */
pdcrt_fijar_local(ctx, m, 7, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 2)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 30:28 >> 30:29 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 30:23 >> 30:24 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 2);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k64, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_f1(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 24:0 >> 35:16 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd|24:0|35:16";
PDCRT_ALOJAR_MARCO(ctx, 9, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_x_N95_cli_p1 { const pdcrt_params_base base; const pdcrt_param_data params[2]; };
static const struct pdc_params_data_mpdzibepd_N95_x_N95_cli_p1 pdc_params = { .base = { .num_params = 2, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{5}, {6}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 24:45 >> 24:49 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 24:45 >> 24:49 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 7));
pdcrt_fijar_local(ctx, m, 2, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 24:45 >> 24:49 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 24:45 >> 24:49 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 2), pdcrt_obtener_local(ctx, m, 6));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 24:45 >> 24:49 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 24:40 >> 24:43 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 24:40 >> 24:43 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 6));
pdcrt_fijar_local(ctx, m, 1, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 24:40 >> 24:43 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 24:40 >> 24:43 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 1), pdcrt_obtener_local(ctx, m, 5));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 24:40 >> 24:43 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 25:13 >> 25:14 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 25:13 >> 25:14 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 5));
pdcrt_fijar_local(ctx, m, 3, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 25:13 >> 25:14 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 26:14 >> 26:15 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_entero(PDCRT_ENTERO_C(0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 26:10 >> 26:11 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 3), pdcrt_obtener_local(ctx, m, 5));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 26:10 >> 26:11 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k60, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_f2(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 113:4 >> 129:20 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd|113:4|129:20";
PDCRT_ALOJAR_MARCO(ctx, 18, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_x_N95_cli_p2 { const pdcrt_params_base base; const pdcrt_param_data params[3]; };
static const struct pdc_params_data_mpdzibepd_N95_x_N95_cli_p2 pdc_params = { .base = { .num_params = 3, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{9}, {10}, {11}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 113:56 >> 113:63 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 113:56 >> 113:63 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_obtener_local(ctx, m, 11));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 113:56 >> 113:63 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 113:47 >> 113:54 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 113:47 >> 113:54 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_obtener_local(ctx, m, 10));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 113:47 >> 113:54 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 113:42 >> 113:45 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 113:42 >> 113:45 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_obtener_local(ctx, m, 9));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 113:42 >> 113:45 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 114:12 >> 114:26 */
pdcrt_fijar_local(ctx, m, 10, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 1)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 114:28 >> 114:31 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_obtener_local(ctx, m, 5));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 114:33 >> 114:40 */
pdcrt_fijar_local_nb(ctx, m, 12, pdcrt_obtener_local(ctx, m, 6));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 114:12 >> 114:40 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 3);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k71, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 11)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 12)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_f3(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 174:40 >> 174:53 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd|174:40|174:53";
PDCRT_ALOJAR_MARCO(ctx, 20, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_x_N95_cli_p3 { const pdcrt_params_base base; const pdcrt_param_data params[1]; };
static const struct pdc_params_data_mpdzibepd_N95_x_N95_cli_p3 pdc_params = { .base = { .num_params = 1, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{11}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 174:55 >> 174:58 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 174:55 >> 174:58 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_obtener_local(ctx, m, 11));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 174:55 >> 174:58 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 175:23 >> 175:26 */
pdcrt_fijar_local_nb(ctx, m, 12, pdcrt_obtener_local(ctx, m, 8));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 175:29 >> 175:32 */
pdcrt_fijar_local(ctx, m, 13, PDCRT_OBTENER_CONSTANTE(ctx, m, 15));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 175:23 >> 175:32 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 14);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k184, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 12)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 13)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_f4(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 131:40 >> 131:53 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd|131:40|131:53";
PDCRT_ALOJAR_MARCO(ctx, 33, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_x_N95_cli_p4 { const pdcrt_params_base base; const pdcrt_param_data params[3]; };
static const struct pdc_params_data_mpdzibepd_N95_x_N95_cli_p4 pdc_params = { .base = { .num_params = 3, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{23}, {24}, {25}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 131:69 >> 131:80 */
pdcrt_fijar_local_nb(ctx, m, 14, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 131:69 >> 131:80 */
pdcrt_fijar_local_nb(ctx, m, 14, pdcrt_obtener_local(ctx, m, 25));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 131:69 >> 131:80 */
pdcrt_fijar_local_nb(ctx, m, 25, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 131:66 >> 131:67 */
pdcrt_fijar_local_nb(ctx, m, 25, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 131:66 >> 131:67 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 25));
pdcrt_fijar_local(ctx, m, 13, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 131:66 >> 131:67 */
pdcrt_fijar_local_nb(ctx, m, 25, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 131:66 >> 131:67 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 13), pdcrt_obtener_local(ctx, m, 24));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 131:66 >> 131:67 */
pdcrt_fijar_local_nb(ctx, m, 24, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 131:55 >> 131:64 */
pdcrt_fijar_local_nb(ctx, m, 12, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 131:55 >> 131:64 */
pdcrt_fijar_local_nb(ctx, m, 12, pdcrt_obtener_local(ctx, m, 23));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 131:55 >> 131:64 */
pdcrt_fijar_local_nb(ctx, m, 23, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 132:15 >> 132:24 */
pdcrt_fijar_local_nb(ctx, m, 24, pdcrt_obtener_local(ctx, m, 12));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 132:27 >> 132:30 */
pdcrt_fijar_local(ctx, m, 25, PDCRT_OBTENER_CONSTANTE(ctx, m, 15));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 132:15 >> 132:30 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 14);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k96, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 24)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 25)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_f5(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 130:39 >> 130:52 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd|130:39|130:52";
PDCRT_ALOJAR_MARCO(ctx, 17, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_x_N95_cli_p5 { const pdcrt_params_base base; const pdcrt_param_data params[1]; };
static const struct pdc_params_data_mpdzibepd_N95_x_N95_cli_p5 pdc_params = { .base = { .num_params = 1, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{13}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 130:54 >> 130:59 */
pdcrt_fijar_local_nb(ctx, m, 14, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 130:54 >> 130:59 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 14));
pdcrt_fijar_local(ctx, m, 12, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 130:54 >> 130:59 */
pdcrt_fijar_local_nb(ctx, m, 14, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 130:54 >> 130:59 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 12), pdcrt_obtener_local(ctx, m, 13));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 130:54 >> 130:59 */
pdcrt_fijar_local_nb(ctx, m, 13, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 131:8 >> 131:32 */
pdcrt_fijar_local(ctx, m, 14, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 1)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 131:34 >> 131:38 */
pdcrt_fijar_local(ctx, m, 15, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 2)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 131:40 >> 131:53 */
do {
static const pdcrt_captura caps[] = {{12}, {4}, {5}, {3}, {6}, {7}, {0}, {8}, {2}, {9}, {10}, {11}};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzibepd_N95_x_N95_cli_f4, caps, 12);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 16, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 131:8 >> 131:33 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 3);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k230, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 14)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 15)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 16)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_f6(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 110:0 >> 205:10 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd|110:0|205:10";
PDCRT_ALOJAR_MARCO(ctx, 26, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_x_N95_cli_p6 { const pdcrt_params_base base; const pdcrt_param_data params[4]; };
static const struct pdc_params_data_mpdzibepd_N95_x_N95_cli_p6 pdc_params = { .base = { .num_params = 4, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{20}, {21}, {22}, {23}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 110:70 >> 110:75 */
pdcrt_fijar_local_nb(ctx, m, 24, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 110:70 >> 110:75 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 24));
pdcrt_fijar_local(ctx, m, 15, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 110:70 >> 110:75 */
pdcrt_fijar_local_nb(ctx, m, 24, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 110:70 >> 110:75 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 15), pdcrt_obtener_local(ctx, m, 23));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 110:70 >> 110:75 */
pdcrt_fijar_local_nb(ctx, m, 23, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 110:64 >> 110:68 */
pdcrt_fijar_local_nb(ctx, m, 23, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 110:64 >> 110:68 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 23));
pdcrt_fijar_local(ctx, m, 14, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 110:64 >> 110:68 */
pdcrt_fijar_local_nb(ctx, m, 23, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 110:64 >> 110:68 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 14), pdcrt_obtener_local(ctx, m, 22));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 110:64 >> 110:68 */
pdcrt_fijar_local_nb(ctx, m, 22, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 110:48 >> 110:62 */
pdcrt_fijar_local_nb(ctx, m, 22, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 110:48 >> 110:62 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 22));
pdcrt_fijar_local(ctx, m, 13, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 110:48 >> 110:62 */
pdcrt_fijar_local_nb(ctx, m, 22, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 110:48 >> 110:62 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 13), pdcrt_obtener_local(ctx, m, 21));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 110:48 >> 110:62 */
pdcrt_fijar_local_nb(ctx, m, 21, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 110:25 >> 110:46 */
pdcrt_fijar_local_nb(ctx, m, 21, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 110:25 >> 110:46 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 21));
pdcrt_fijar_local(ctx, m, 12, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 110:25 >> 110:46 */
pdcrt_fijar_local_nb(ctx, m, 21, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 110:25 >> 110:46 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 12), pdcrt_obtener_local(ctx, m, 20));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 110:25 >> 110:46 */
pdcrt_fijar_local_nb(ctx, m, 20, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 111:14 >> 111:22 */
pdcrt_fijar_local_nb(ctx, m, 20, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 111:14 >> 111:22 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 20));
pdcrt_fijar_local(ctx, m, 16, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 111:14 >> 111:22 */
pdcrt_fijar_local_nb(ctx, m, 20, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 111:24 >> 111:34 */
pdcrt_fijar_local_nb(ctx, m, 17, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 111:36 >> 111:49 */
pdcrt_fijar_local_nb(ctx, m, 18, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 113:18 >> 113:40 */
pdcrt_fijar_local_nb(ctx, m, 20, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 113:18 >> 113:40 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 20));
pdcrt_fijar_local(ctx, m, 19, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 113:18 >> 113:40 */
pdcrt_fijar_local_nb(ctx, m, 20, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 112:21 >> 112:32 */
pdcrt_fijar_local(ctx, m, 21, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 1)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 112:32 >> 112:33 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 8);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k70, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 21)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_f7(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 261:0 >> 267:9 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd|261:0|267:9";
PDCRT_ALOJAR_MARCO(ctx, 12, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_x_N95_cli_p7 { const pdcrt_params_base base; const pdcrt_param_data params[6]; };
static const struct pdc_params_data_mpdzibepd_N95_x_N95_cli_p7 pdc_params = { .base = { .num_params = 6, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{6}, {7}, {8}, {9}, {10}, {11}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 261:72 >> 261:80 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 261:72 >> 261:80 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_obtener_local(ctx, m, 11));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 261:72 >> 261:80 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 261:62 >> 261:70 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 261:62 >> 261:70 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_obtener_local(ctx, m, 10));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 261:62 >> 261:70 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 261:46 >> 261:60 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 261:46 >> 261:60 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_obtener_local(ctx, m, 9));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 261:46 >> 261:60 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 261:37 >> 261:44 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 261:37 >> 261:44 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_obtener_local(ctx, m, 8));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 261:37 >> 261:44 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 261:28 >> 261:35 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 261:28 >> 261:35 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_obtener_local(ctx, m, 7));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 261:28 >> 261:35 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 261:0 >> 267:9 */
pdcrt_fijar_local_nb(ctx, m, 0, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 261:0 >> 267:9 */
pdcrt_fijar_local_nb(ctx, m, 0, pdcrt_obtener_local(ctx, m, 6));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 261:0 >> 267:9 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 262:10 >> 262:12 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_obtener_local(ctx, m, 0));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 262:23 >> 262:30 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_obtener_local(ctx, m, 1));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 262:4 >> 262:30 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 45);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k240, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_f8(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 269:0 >> 271:9 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd|269:0|271:9";
PDCRT_ALOJAR_MARCO(ctx, 9, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_x_N95_cli_p8 { const pdcrt_params_base base; const pdcrt_param_data params[1]; };
static const struct pdc_params_data_mpdzibepd_N95_x_N95_cli_p8 pdc_params = { .base = { .num_params = 1, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{1}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 269:0 >> 271:9 */
pdcrt_fijar_local_nb(ctx, m, 0, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 269:0 >> 271:9 */
pdcrt_fijar_local_nb(ctx, m, 0, pdcrt_obtener_local(ctx, m, 1));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 269:0 >> 271:9 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 270:13 >> 270:89 */
pdcrt_fijar_local(ctx, m, 2, PDCRT_OBTENER_CONSTANTE(ctx, m, 52));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 270:101 >> 270:103 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_obtener_local(ctx, m, 0));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 270:103 >> 270:104 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 38);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k246, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_f9(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 299:32 >> 299:45 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd|299:32|299:45";
PDCRT_ALOJAR_MARCO(ctx, 7, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_x_N95_cli_p9 { const pdcrt_params_base base; const pdcrt_param_data params[1]; };
static const struct pdc_params_data_mpdzibepd_N95_x_N95_cli_p9 pdc_params = { .base = { .num_params = 1, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{2}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 299:47 >> 299:50 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 299:47 >> 299:50 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_obtener_local(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 299:47 >> 299:50 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 300:14 >> 300:20 */
pdcrt_fijar_local(ctx, m, 4, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 300:22 >> 300:25 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_obtener_local(ctx, m, 1));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 300:25 >> 300:26 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 38);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k252, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_f10(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 309:40 >> 309:53 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd|309:40|309:53";
PDCRT_ALOJAR_MARCO(ctx, 15, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_x_N95_cli_p10 { const pdcrt_params_base base; const pdcrt_param_data params[1]; };
static const struct pdc_params_data_mpdzibepd_N95_x_N95_cli_p10 pdc_params = { .base = { .num_params = 1, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{6}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 309:55 >> 309:58 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 309:55 >> 309:58 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_obtener_local(ctx, m, 6));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 309:55 >> 309:58 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 310:20 >> 310:33 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 1)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 310:35 >> 310:38 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_obtener_local(ctx, m, 5));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 310:42 >> 310:51 */
pdcrt_fijar_local(ctx, m, 12, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 3)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 310:54 >> 310:71 */
pdcrt_fijar_local(ctx, m, 14, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 310:71 >> 310:72 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 6);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k271, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 14)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_f11(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 308:30 >> 308:43 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd|308:30|308:43";
PDCRT_ALOJAR_MARCO(ctx, 17, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_x_N95_cli_p11 { const pdcrt_params_base base; const pdcrt_param_data params[1]; };
static const struct pdc_params_data_mpdzibepd_N95_x_N95_cli_p11 pdc_params = { .base = { .num_params = 1, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{8}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 308:45 >> 308:48 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 308:45 >> 308:48 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 9));
pdcrt_fijar_local(ctx, m, 7, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 308:45 >> 308:48 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 308:45 >> 308:48 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 7), pdcrt_obtener_local(ctx, m, 8));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 308:45 >> 308:48 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 309:12 >> 309:28 */
pdcrt_fijar_local(ctx, m, 9, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 1)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 309:30 >> 309:38 */
pdcrt_fijar_local(ctx, m, 10, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 3)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 309:40 >> 309:53 */
do {
static const pdcrt_captura caps[] = {{0}, {4}, {2}, {5}, {7}};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzibepd_N95_x_N95_cli_f10, caps, 5);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 11, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 309:12 >> 309:29 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 3);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k282, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 11)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_f12(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 307:4 >> 316:14 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd|307:4|316:14";
PDCRT_ALOJAR_MARCO(ctx, 11, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_x_N95_cli_p12 { const pdcrt_params_base base; const pdcrt_param_data params[2]; };
static const struct pdc_params_data_mpdzibepd_N95_x_N95_cli_p12 pdc_params = { .base = { .num_params = 2, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{8}, {9}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 307:45 >> 307:54 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 307:45 >> 307:54 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 10));
pdcrt_fijar_local(ctx, m, 7, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 307:45 >> 307:54 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 307:45 >> 307:54 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 7), pdcrt_obtener_local(ctx, m, 9));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 307:45 >> 307:54 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 307:35 >> 307:43 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 307:35 >> 307:43 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 9));
pdcrt_fijar_local(ctx, m, 6, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 307:35 >> 307:43 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 307:35 >> 307:43 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 6), pdcrt_obtener_local(ctx, m, 8));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 307:35 >> 307:43 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 308:17 >> 308:28 */
pdcrt_fijar_local(ctx, m, 9, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 308:30 >> 308:43 */
do {
static const pdcrt_captura caps[] = {{3}, {1}, {6}, {2}, {4}, {7}, {5}};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzibepd_N95_x_N95_cli_f11, caps, 7);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 10, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 308:17 >> 308:29 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 3);
return pdcrt_llamar1(ctx, m->k.marco, m->k.kf, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 308:17 >> 308:29 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 308:17 >> 308:29 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 307:4 >> 316:14 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 307:4 >> 316:14 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 307:4 >> 316:14 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_f13(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 319:40 >> 319:53 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd|319:40|319:53";
PDCRT_ALOJAR_MARCO(ctx, 15, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_x_N95_cli_p13 { const pdcrt_params_base base; const pdcrt_param_data params[1]; };
static const struct pdc_params_data_mpdzibepd_N95_x_N95_cli_p13 pdc_params = { .base = { .num_params = 1, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{6}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 319:55 >> 319:58 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 319:55 >> 319:58 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_obtener_local(ctx, m, 6));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 319:55 >> 319:58 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 320:20 >> 320:33 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 1)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 320:35 >> 320:38 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_obtener_local(ctx, m, 5));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 320:42 >> 320:51 */
pdcrt_fijar_local(ctx, m, 12, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 3)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 320:54 >> 320:71 */
pdcrt_fijar_local(ctx, m, 14, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 320:71 >> 320:72 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 6);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k287, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 14)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_f14(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 318:30 >> 318:43 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd|318:30|318:43";
PDCRT_ALOJAR_MARCO(ctx, 17, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_x_N95_cli_p14 { const pdcrt_params_base base; const pdcrt_param_data params[1]; };
static const struct pdc_params_data_mpdzibepd_N95_x_N95_cli_p14 pdc_params = { .base = { .num_params = 1, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{8}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 318:45 >> 318:48 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 318:45 >> 318:48 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 9));
pdcrt_fijar_local(ctx, m, 7, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 318:45 >> 318:48 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 318:45 >> 318:48 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 7), pdcrt_obtener_local(ctx, m, 8));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 318:45 >> 318:48 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 319:12 >> 319:28 */
pdcrt_fijar_local(ctx, m, 9, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 1)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 319:30 >> 319:38 */
pdcrt_fijar_local(ctx, m, 10, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 2)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 319:40 >> 319:53 */
do {
static const pdcrt_captura caps[] = {{0}, {5}, {7}, {3}, {4}};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzibepd_N95_x_N95_cli_f13, caps, 5);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 11, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 319:12 >> 319:29 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 3);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k298, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 11)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_f15(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 317:4 >> 326:14 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd|317:4|326:14";
PDCRT_ALOJAR_MARCO(ctx, 11, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_x_N95_cli_p15 { const pdcrt_params_base base; const pdcrt_param_data params[2]; };
static const struct pdc_params_data_mpdzibepd_N95_x_N95_cli_p15 pdc_params = { .base = { .num_params = 2, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{8}, {9}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 317:38 >> 317:47 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 317:38 >> 317:47 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 10));
pdcrt_fijar_local(ctx, m, 7, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 317:38 >> 317:47 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 317:38 >> 317:47 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 7), pdcrt_obtener_local(ctx, m, 9));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 317:38 >> 317:47 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 317:28 >> 317:36 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 317:28 >> 317:36 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 9));
pdcrt_fijar_local(ctx, m, 6, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 317:28 >> 317:36 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 317:28 >> 317:36 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 6), pdcrt_obtener_local(ctx, m, 8));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 317:28 >> 317:36 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 318:17 >> 318:28 */
pdcrt_fijar_local(ctx, m, 9, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 318:30 >> 318:43 */
do {
static const pdcrt_captura caps[] = {{3}, {1}, {2}, {7}, {6}, {4}, {5}};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzibepd_N95_x_N95_cli_f14, caps, 7);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 10, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 318:17 >> 318:29 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 3);
return pdcrt_llamar1(ctx, m->k.marco, m->k.kf, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 318:17 >> 318:29 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 318:17 >> 318:29 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 317:4 >> 326:14 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 317:4 >> 326:14 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 317:4 >> 326:14 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_f16(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 334:36 >> 334:49 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd|334:36|334:49";
PDCRT_ALOJAR_MARCO(ctx, 13, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_x_N95_cli_p16 { const pdcrt_params_base base; const pdcrt_param_data params[1]; };
static const struct pdc_params_data_mpdzibepd_N95_x_N95_cli_p16 pdc_params = { .base = { .num_params = 1, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{4}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 334:51 >> 334:58 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 334:51 >> 334:58 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_obtener_local(ctx, m, 4));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 334:51 >> 334:58 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 335:16 >> 335:23 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_obtener_local(ctx, m, 3));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 335:23 >> 335:24 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 38);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k316, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_f17(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 333:29 >> 333:42 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd|333:29|333:42";
PDCRT_ALOJAR_MARCO(ctx, 9, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_x_N95_cli_p17 { const pdcrt_params_base base; const pdcrt_param_data params[2]; };
static const struct pdc_params_data_mpdzibepd_N95_x_N95_cli_p17 pdc_params = { .base = { .num_params = 2, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{5}, {6}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 333:49 >> 333:56 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 333:49 >> 333:56 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 7));
pdcrt_fijar_local(ctx, m, 4, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 333:49 >> 333:56 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 333:49 >> 333:56 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 4), pdcrt_obtener_local(ctx, m, 6));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 333:49 >> 333:56 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 333:44 >> 333:47 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 333:44 >> 333:47 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 6));
pdcrt_fijar_local(ctx, m, 3, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 333:44 >> 333:47 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 333:44 >> 333:47 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 3), pdcrt_obtener_local(ctx, m, 5));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 333:44 >> 333:47 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 334:8 >> 334:24 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 334:26 >> 334:34 */
pdcrt_fijar_local(ctx, m, 7, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 1)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 334:36 >> 334:49 */
do {
static const pdcrt_captura caps[] = {{4}, {3}, {2}};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzibepd_N95_x_N95_cli_f16, caps, 3);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 8, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 334:8 >> 334:25 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 3);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k332, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_f18(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 297:0 >> 341:10 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd|297:0|341:10";
PDCRT_ALOJAR_MARCO(ctx, 27, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_x_N95_cli_p18 { const pdcrt_params_base base; const pdcrt_param_data params[4]; };
static const struct pdc_params_data_mpdzibepd_N95_x_N95_cli_p18 pdc_params = { .base = { .num_params = 4, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{20}, {21}, {22}, {23}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 297:45 >> 297:50 */
pdcrt_fijar_local_nb(ctx, m, 24, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 297:45 >> 297:50 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 24));
pdcrt_fijar_local(ctx, m, 14, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 297:45 >> 297:50 */
pdcrt_fijar_local_nb(ctx, m, 24, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 297:45 >> 297:50 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 14), pdcrt_obtener_local(ctx, m, 23));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 297:45 >> 297:50 */
pdcrt_fijar_local_nb(ctx, m, 23, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 297:39 >> 297:43 */
pdcrt_fijar_local_nb(ctx, m, 13, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 297:39 >> 297:43 */
pdcrt_fijar_local_nb(ctx, m, 13, pdcrt_obtener_local(ctx, m, 22));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 297:39 >> 297:43 */
pdcrt_fijar_local_nb(ctx, m, 22, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 297:23 >> 297:37 */
pdcrt_fijar_local_nb(ctx, m, 12, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 297:23 >> 297:37 */
pdcrt_fijar_local_nb(ctx, m, 12, pdcrt_obtener_local(ctx, m, 21));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 297:23 >> 297:37 */
pdcrt_fijar_local_nb(ctx, m, 21, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 297:13 >> 297:21 */
pdcrt_fijar_local_nb(ctx, m, 21, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 297:13 >> 297:21 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 21));
pdcrt_fijar_local(ctx, m, 11, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 297:13 >> 297:21 */
pdcrt_fijar_local_nb(ctx, m, 21, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 297:13 >> 297:21 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 11), pdcrt_obtener_local(ctx, m, 20));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 297:13 >> 297:21 */
pdcrt_fijar_local_nb(ctx, m, 20, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 298:14 >> 298:17 */
pdcrt_fijar_local_nb(ctx, m, 20, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 298:14 >> 298:17 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 20));
pdcrt_fijar_local(ctx, m, 15, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 298:14 >> 298:17 */
pdcrt_fijar_local_nb(ctx, m, 20, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 298:19 >> 298:30 */
pdcrt_fijar_local_nb(ctx, m, 20, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 298:19 >> 298:30 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 20));
pdcrt_fijar_local(ctx, m, 16, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 298:19 >> 298:30 */
pdcrt_fijar_local_nb(ctx, m, 20, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 298:32 >> 298:42 */
pdcrt_fijar_local_nb(ctx, m, 20, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 298:32 >> 298:42 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 20));
pdcrt_fijar_local(ctx, m, 17, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 298:32 >> 298:42 */
pdcrt_fijar_local_nb(ctx, m, 20, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 307:12 >> 307:33 */
pdcrt_fijar_local_nb(ctx, m, 18, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 317:12 >> 317:26 */
pdcrt_fijar_local_nb(ctx, m, 20, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 317:12 >> 317:26 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 20));
pdcrt_fijar_local(ctx, m, 19, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 317:12 >> 317:26 */
pdcrt_fijar_local_nb(ctx, m, 20, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 299:4 >> 299:20 */
pdcrt_fijar_local(ctx, m, 21, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 2)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 299:22 >> 299:30 */
pdcrt_fijar_local(ctx, m, 22, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 11)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 299:32 >> 299:45 */
do {
static const pdcrt_captura caps[] = {{3}};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzibepd_N95_x_N95_cli_f9, caps, 1);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 23, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 299:4 >> 299:21 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 3);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k270, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 21)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 22)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 23)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_f19(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd|1:0|341:10";
PDCRT_ALOJAR_MARCO(ctx, 127, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_x_N95_cli_p19 { const pdcrt_params_base base; const pdcrt_param_data params[1]; };
static const struct pdc_params_data_mpdzibepd_N95_x_N95_cli_p19 pdc_params = { .base = { .num_params = 0, .tiene_variadic = false, .idc_variadic = 0, }, .params = {} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
PDCRT_DEFINE_RAICES(2);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_arreglo *constantes = pdcrt_crear_arreglo_vacio(ctx, PDCRT_GC(), 58LLU);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
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
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "OPCIÓN_PROCESADA", 17));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "CORTA", 5));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "LARGA", 5));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "vacío", 6));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "contiene", 8));
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
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "fijarEn", 7));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "La opción ~t~t ya fue especificada", 35));
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
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "-", 1));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "--", 2));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "escoger", 7));
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
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "subTexto", 8));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "operador_>", 10));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "operador_&&", 11));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "=", 1));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "buscar", 6));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "parteDelTexto", 13));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "NULO", 4));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "Se especificó un argumento pero se esperaban ~t para la opción --~t", 69));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "crearCon", 8));
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
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "Se esperaban ~t argumentos pero se obtuvieron ~t para la opción --~t", 69));
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
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "operador_-", 10));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "Se esperaban ~t argumentos pero se obtuvieron ~t para la opción -~t", 68));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "opciones", 8));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "argumentos", 10));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
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
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "Opción", 7));
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
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "opCorta", 7));
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
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "opLarga", 7));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "númArgumentos", 14));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "acumular", 8));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "callback", 8));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "inicializar", 11));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "fijar_opCorta", 13));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "fijar_opLarga", 13));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "fijar_númArgumentos", 20));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "fijar_acumular", 14));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "fijar_callback", 14));
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
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "(Opción corta = ~t, larga = ~t, nargs = ~t, acumular = ~t, callback = ~t)", 74));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "No existe la opción ~t~t", 25));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "Se esperaban ~t argumentos posicionales pero se obtuvieron ~t", 61));
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
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "paraCadaPar", 11));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
PDCRT_FIJAR_CONSTANTES(ctx, m, constantes);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 122));
pdcrt_fijar_local(ctx, m, 61, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 122));
pdcrt_fijar_local(ctx, m, 63, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 122));
pdcrt_fijar_local(ctx, m, 65, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 122));
pdcrt_fijar_local(ctx, m, 67, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 122));
pdcrt_fijar_local(ctx, m, 69, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 122));
pdcrt_fijar_local(ctx, m, 71, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 122));
pdcrt_fijar_local(ctx, m, 73, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 122));
pdcrt_fijar_local(ctx, m, 75, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 122));
pdcrt_fijar_local(ctx, m, 77, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 122));
pdcrt_fijar_local(ctx, m, 79, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 122));
pdcrt_fijar_local(ctx, m, 81, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 122));
pdcrt_fijar_local(ctx, m, 83, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 122));
pdcrt_fijar_local(ctx, m, 85, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 122));
pdcrt_fijar_local(ctx, m, 87, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 122));
pdcrt_fijar_local(ctx, m, 89, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 122));
pdcrt_fijar_local(ctx, m, 91, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 122));
pdcrt_fijar_local(ctx, m, 93, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 122));
pdcrt_fijar_local(ctx, m, 95, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 122));
pdcrt_fijar_local(ctx, m, 97, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 122));
pdcrt_fijar_local(ctx, m, 99, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 122));
pdcrt_fijar_local(ctx, m, 101, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 122));
pdcrt_fijar_local(ctx, m, 103, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 122));
pdcrt_fijar_local(ctx, m, 105, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 122));
pdcrt_fijar_local(ctx, m, 107, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 122));
pdcrt_fijar_local(ctx, m, 109, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 122));
pdcrt_fijar_local(ctx, m, 111, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 122));
pdcrt_fijar_local(ctx, m, 113, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 122));
pdcrt_fijar_local(ctx, m, 114, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 122));
pdcrt_fijar_local(ctx, m, 112, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 122));
pdcrt_fijar_local(ctx, m, 110, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 122));
pdcrt_fijar_local(ctx, m, 108, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 122));
pdcrt_fijar_local(ctx, m, 106, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 122));
pdcrt_fijar_local(ctx, m, 104, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 122));
pdcrt_fijar_local(ctx, m, 102, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 122));
pdcrt_fijar_local(ctx, m, 100, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 122));
pdcrt_fijar_local(ctx, m, 98, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 122));
pdcrt_fijar_local(ctx, m, 96, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 122));
pdcrt_fijar_local(ctx, m, 94, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 122));
pdcrt_fijar_local(ctx, m, 92, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 122));
pdcrt_fijar_local(ctx, m, 90, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 122));
pdcrt_fijar_local(ctx, m, 88, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 122));
pdcrt_fijar_local(ctx, m, 86, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 122));
pdcrt_fijar_local(ctx, m, 84, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 122));
pdcrt_fijar_local(ctx, m, 82, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 122));
pdcrt_fijar_local(ctx, m, 80, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 122));
pdcrt_fijar_local(ctx, m, 78, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 122));
pdcrt_fijar_local(ctx, m, 76, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 122));
pdcrt_fijar_local(ctx, m, 74, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 122));
pdcrt_fijar_local(ctx, m, 72, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 122));
pdcrt_fijar_local(ctx, m, 70, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 122));
pdcrt_fijar_local(ctx, m, 68, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 122));
pdcrt_fijar_local(ctx, m, 66, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 122));
pdcrt_fijar_local(ctx, m, 64, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 122));
pdcrt_fijar_local(ctx, m, 62, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 122));
pdcrt_fijar_local(ctx, m, 60, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 2:0 >> 2:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 122));
pdcrt_fijar_local(ctx, m, 115, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 3:0 >> 3:8 */
pdcrt_fijar_local_nb(ctx, m, 116, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 24:14 >> 24:38 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 24:14 >> 24:38 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 122));
pdcrt_fijar_local(ctx, m, 117, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 24:14 >> 24:38 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 50:9 >> 50:26 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 50:9 >> 50:26 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 122));
pdcrt_fijar_local(ctx, m, 118, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 50:9 >> 50:26 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 110:8 >> 110:23 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 110:8 >> 110:23 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 122));
pdcrt_fijar_local(ctx, m, 119, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 110:8 >> 110:23 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 214:6 >> 214:13 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 214:6 >> 214:13 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 122));
pdcrt_fijar_local(ctx, m, 120, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 214:6 >> 214:13 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 297:8 >> 297:11 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 297:8 >> 297:11 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 122));
pdcrt_fijar_local(ctx, m, 121, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 297:8 >> 297:11 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
return pdcrt_importar(ctx, m, "pdzibepd_N95_builtins", 21, pdc_mpdzibepd_N95_x_N95_cli_k0);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k0(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 122, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 122), "ParaCadaElemento", 16, pdc_mpdzibepd_N95_x_N95_cli_k1);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k1(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 60), pdcrt_obtener_local(ctx, m, 123));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 122), "Todos", 5, pdc_mpdzibepd_N95_x_N95_cli_k2);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k2(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k2);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 61), pdcrt_obtener_local(ctx, m, 123));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 122), "Contiene", 8, pdc_mpdzibepd_N95_x_N95_cli_k3);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k3(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k3);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 62), pdcrt_obtener_local(ctx, m, 123));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 122), "EsImpar", 7, pdc_mpdzibepd_N95_x_N95_cli_k4);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k4(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k4);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 63), pdcrt_obtener_local(ctx, m, 123));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 122), "Escribir", 8, pdc_mpdzibepd_N95_x_N95_cli_k5);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k5(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k5);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 64), pdcrt_obtener_local(ctx, m, 123));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 122), "Reducir", 7, pdc_mpdzibepd_N95_x_N95_cli_k6);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k6(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k6);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 65), pdcrt_obtener_local(ctx, m, 123));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 122), "Filtrar", 7, pdc_mpdzibepd_N95_x_N95_cli_k7);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k7(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k7);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 66), pdcrt_obtener_local(ctx, m, 123));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 122), "DígitoAEntero", 14, pdc_mpdzibepd_N95_x_N95_cli_k8);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k8(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k8);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 67), pdcrt_obtener_local(ctx, m, 123));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 122), "ConvertirAEntero", 16, pdc_mpdzibepd_N95_x_N95_cli_k9);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k9(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k9);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 68), pdcrt_obtener_local(ctx, m, 123));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 122), "EsNúmeroEntero", 15, pdc_mpdzibepd_N95_x_N95_cli_k10);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k10(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k10);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 69), pdcrt_obtener_local(ctx, m, 123));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 122), "Concatenar", 10, pdc_mpdzibepd_N95_x_N95_cli_k11);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k11(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k11);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 70), pdcrt_obtener_local(ctx, m, 123));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 122), "Aplicar\'", 8, pdc_mpdzibepd_N95_x_N95_cli_k12);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k12(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k12);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 71), pdcrt_obtener_local(ctx, m, 123));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 122), "EnviarMensaje", 13, pdc_mpdzibepd_N95_x_N95_cli_k13);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k13(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k13);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 72), pdcrt_obtener_local(ctx, m, 123));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 122), "Abs", 3, pdc_mpdzibepd_N95_x_N95_cli_k14);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k14(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k14);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 73), pdcrt_obtener_local(ctx, m, 123));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 122), "EsPar", 5, pdc_mpdzibepd_N95_x_N95_cli_k15);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k15(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k15);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 74), pdcrt_obtener_local(ctx, m, 123));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 122), "AplanarTodo", 11, pdc_mpdzibepd_N95_x_N95_cli_k16);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k16(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k16);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 75), pdcrt_obtener_local(ctx, m, 123));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 122), "PrimerElemento", 14, pdc_mpdzibepd_N95_x_N95_cli_k17);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k17(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k17);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 76), pdcrt_obtener_local(ctx, m, 123));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 122), "ÚnicoElemento", 14, pdc_mpdzibepd_N95_x_N95_cli_k18);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k18(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k18);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 77), pdcrt_obtener_local(ctx, m, 123));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 122), "Max", 3, pdc_mpdzibepd_N95_x_N95_cli_k19);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k19(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k19);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 78), pdcrt_obtener_local(ctx, m, 123));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 122), "NoImplementado", 14, pdc_mpdzibepd_N95_x_N95_cli_k20);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k20(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k20);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 79), pdcrt_obtener_local(ctx, m, 123));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 122), "Inalcanzable", 12, pdc_mpdzibepd_N95_x_N95_cli_k21);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k21(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k21);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 80), pdcrt_obtener_local(ctx, m, 123));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 122), "ArregloSinElementoEnÍndice", 27, pdc_mpdzibepd_N95_x_N95_cli_k22);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k22(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k22);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 81), pdcrt_obtener_local(ctx, m, 123));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 122), "LeerNúmero", 11, pdc_mpdzibepd_N95_x_N95_cli_k23);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k23(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k23);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 82), pdcrt_obtener_local(ctx, m, 123));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 122), "MétodoComoFunción", 19, pdc_mpdzibepd_N95_x_N95_cli_k24);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k24(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k24);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 83), pdcrt_obtener_local(ctx, m, 123));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 122), "ContienePredicado", 17, pdc_mpdzibepd_N95_x_N95_cli_k25);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k25(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k25);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 84), pdcrt_obtener_local(ctx, m, 123));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 122), "ParaCadaElementoEnReversa", 25, pdc_mpdzibepd_N95_x_N95_cli_k26);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k26(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k26);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 85), pdcrt_obtener_local(ctx, m, 123));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 122), "Resultado", 9, pdc_mpdzibepd_N95_x_N95_cli_k27);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k27(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k27);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 86), pdcrt_obtener_local(ctx, m, 123));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 122), "Pila", 4, pdc_mpdzibepd_N95_x_N95_cli_k28);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k28(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k28);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 87), pdcrt_obtener_local(ctx, m, 123));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 122), "Diccionario", 11, pdc_mpdzibepd_N95_x_N95_cli_k29);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k29(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k29);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 88), pdcrt_obtener_local(ctx, m, 123));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 122), "BuscarPredicado", 15, pdc_mpdzibepd_N95_x_N95_cli_k30);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k30(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k30);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 89), pdcrt_obtener_local(ctx, m, 123));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 122), "OperadorBinario", 15, pdc_mpdzibepd_N95_x_N95_cli_k31);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k31(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k31);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 90), pdcrt_obtener_local(ctx, m, 123));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 122), "Parcial", 7, pdc_mpdzibepd_N95_x_N95_cli_k32);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k32(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k32);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 91), pdcrt_obtener_local(ctx, m, 123));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 122), "LeerLínea", 10, pdc_mpdzibepd_N95_x_N95_cli_k33);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k33(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k33);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 92), pdcrt_obtener_local(ctx, m, 123));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 122), "LlamarConEC", 11, pdc_mpdzibepd_N95_x_N95_cli_k34);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k34(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k34);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 93), pdcrt_obtener_local(ctx, m, 123));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 122), "MétodoAbstracto", 16, pdc_mpdzibepd_N95_x_N95_cli_k35);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k35(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k35);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 94), pdcrt_obtener_local(ctx, m, 123));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 122), "Min", 3, pdc_mpdzibepd_N95_x_N95_cli_k36);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k36(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k36);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 95), pdcrt_obtener_local(ctx, m, 123));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 122), "EsNulo", 6, pdc_mpdzibepd_N95_x_N95_cli_k37);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k37(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k37);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 96), pdcrt_obtener_local(ctx, m, 123));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 122), "ÚltimoElemento", 15, pdc_mpdzibepd_N95_x_N95_cli_k38);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k38(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k38);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 97), pdcrt_obtener_local(ctx, m, 123));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 122), "PedazoDeArreglo", 15, pdc_mpdzibepd_N95_x_N95_cli_k39);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k39(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k39);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 98), pdcrt_obtener_local(ctx, m, 123));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 122), "Aplanar", 7, pdc_mpdzibepd_N95_x_N95_cli_k40);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k40(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k40);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 99), pdcrt_obtener_local(ctx, m, 123));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 122), "Mod", 3, pdc_mpdzibepd_N95_x_N95_cli_k41);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k41(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k41);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 100), pdcrt_obtener_local(ctx, m, 123));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 122), "Resto", 5, pdc_mpdzibepd_N95_x_N95_cli_k42);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k42(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k42);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 101), pdcrt_obtener_local(ctx, m, 123));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 122), "Aplicar\'i", 9, pdc_mpdzibepd_N95_x_N95_cli_k43);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k43(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k43);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 102), pdcrt_obtener_local(ctx, m, 123));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 122), "ArregloConFinal", 15, pdc_mpdzibepd_N95_x_N95_cli_k44);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k44(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k44);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 103), pdcrt_obtener_local(ctx, m, 123));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 122), "EsNúmero", 9, pdc_mpdzibepd_N95_x_N95_cli_k45);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k45(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k45);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 104), pdcrt_obtener_local(ctx, m, 123));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 122), "ConvertirANúmero", 17, pdc_mpdzibepd_N95_x_N95_cli_k46);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k46(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k46);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 105), pdcrt_obtener_local(ctx, m, 123));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 122), "Elevar", 6, pdc_mpdzibepd_N95_x_N95_cli_k47);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k47(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k47);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 106), pdcrt_obtener_local(ctx, m, 123));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 122), "Algún", 6, pdc_mpdzibepd_N95_x_N95_cli_k48);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k48(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k48);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 107), pdcrt_obtener_local(ctx, m, 123));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 122), "Mapear", 6, pdc_mpdzibepd_N95_x_N95_cli_k49);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k49(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k49);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 123));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 122), "Identidad", 9, pdc_mpdzibepd_N95_x_N95_cli_k50);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k50(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k50);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 109), pdcrt_obtener_local(ctx, m, 123));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 122), "ParaCadaNúmeroConPaso", 22, pdc_mpdzibepd_N95_x_N95_cli_k51);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k51(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k51);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 110), pdcrt_obtener_local(ctx, m, 123));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 122), "EsInstancia", 11, pdc_mpdzibepd_N95_x_N95_cli_k52);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k52(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k52);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 111), pdcrt_obtener_local(ctx, m, 123));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 122), "EsSubclase", 10, pdc_mpdzibepd_N95_x_N95_cli_k53);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k53(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k53);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 112), pdcrt_obtener_local(ctx, m, 123));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 122), "ParaCadaElementoConÍndice", 26, pdc_mpdzibepd_N95_x_N95_cli_k54);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k54(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k54);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 113), pdcrt_obtener_local(ctx, m, 123));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 122), "ParaCadaNúmero", 15, pdc_mpdzibepd_N95_x_N95_cli_k55);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k55(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k55);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 114), pdcrt_obtener_local(ctx, m, 123));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 2:0 >> 2:8 */
return pdcrt_importar(ctx, m, "pdzibepd_N95_x_N95_adhoc", 24, pdc_mpdzibepd_N95_x_N95_cli_k56);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k56(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k56);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 122, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 2:23 >> 2:34 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 122), "ObjetoAdHoc", 11, pdc_mpdzibepd_N95_x_N95_cli_k57);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k57(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k57);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 2:23 >> 2:34 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 2:23 >> 2:34 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 115), pdcrt_obtener_local(ctx, m, 123));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 2:23 >> 2:34 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 3:0 >> 3:8 */
return pdcrt_importar(ctx, m, "pdzibepd_N95_x_N95_enum", 23, pdc_mpdzibepd_N95_x_N95_cli_k58);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k58(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k58);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 3:0 >> 3:8 */
pdcrt_fijar_local(ctx, m, 122, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 3:22 >> 3:26 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 122), "Enum", 4, pdc_mpdzibepd_N95_x_N95_cli_k59);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k59(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k59);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 3:22 >> 3:26 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 3:22 >> 3:26 */
pdcrt_fijar_local_nb(ctx, m, 116, pdcrt_obtener_local(ctx, m, 123));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 3:22 >> 3:26 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 3:0 >> 3:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 24:0 >> 35:16 */
do {
static const pdcrt_captura caps[] = {{93}};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzibepd_N95_x_N95_cli_f1, caps, 1);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 122, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 24:14 >> 24:38 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 117), pdcrt_obtener_local(ctx, m, 122));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 24:14 >> 24:38 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 51:26 >> 51:30 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_obtener_local(ctx, m, 116));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 51:32 >> 51:51 */
pdcrt_fijar_local(ctx, m, 124, PDCRT_OBTENER_CONSTANTE(ctx, m, 5));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 51:53 >> 51:60 */
pdcrt_fijar_local(ctx, m, 125, PDCRT_OBTENER_CONSTANTE(ctx, m, 6));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 51:62 >> 51:69 */
pdcrt_fijar_local(ctx, m, 126, PDCRT_OBTENER_CONSTANTE(ctx, m, 7));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 51:26 >> 51:31 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 3);
return pdcrt_llamar3(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k69, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 123)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 124)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 125)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 126)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k60(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k60);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 27:13 >> 27:14 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 3)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 27:17 >> 27:20 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 1)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 27:20 >> 27:21 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 0);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k61, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k61(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k61);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 27:20 >> 27:21 */
pdcrt_fijar_local(ctx, m, 7, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 27:20 >> 27:21 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 27:13 >> 27:21 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 1);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k62, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k62(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k62);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 27:13 >> 27:21 */
pdcrt_fijar_local(ctx, m, 5, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 27:13 >> 27:21 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 27:13 >> 27:21 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 27:4 >> 34:15 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 5);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 27:4 >> 34:15 */
pdcrt_obj csaltar_obj = pdcrt_obtener_local(ctx, m, 6);
if(csaltar_obj.recv != &pdcrt_recv_booleano) pdcrt_error(ctx, "Se esperaba un objeto de tipo Boole");
if(csaltar_obj.bval)
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k68, PDCRT_XMM_NULO());
else
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k63, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k63(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k63);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 27:4 >> 34:15 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 27:4 >> 34:15 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 28:17 >> 28:20 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 29:20 >> 29:31 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 29:33 >> 29:46 */
do {
static const pdcrt_captura caps[] = {{3}, {2}, {1}};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzibepd_N95_x_N95_cli_f0, caps, 3);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 7, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 29:20 >> 29:32 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 3);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k66, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k64(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k64);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 30:23 >> 30:24 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 30:23 >> 30:24 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 30:23 >> 30:24 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 30:32 >> 30:33 */
pdcrt_fijar_local(ctx, m, 7, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 30:35 >> 30:41 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_obtener_local(ctx, m, 3));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 30:13 >> 30:41 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 3);
return pdcrt_llamar3(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k65, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k65(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k65);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 30:13 >> 30:41 */
pdcrt_fijar_local(ctx, m, 4, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 30:13 >> 30:41 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 30:13 >> 30:41 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 30:13 >> 30:41 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 30:13 >> 30:41 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 30:13 >> 31:26 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 31:21 >> 31:22 */
pdcrt_fijar_local(ctx, m, 5, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 31:25 >> 31:26 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_entero(PDCRT_ENTERO_C(1)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 31:21 >> 31:26 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 4);
return pdcrt_llamar1(ctx, m->k.marco, m->k.kf, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 31:21 >> 31:26 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 31:21 >> 31:26 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 29:33 >> 29:46 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 29:33 >> 29:46 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 29:33 >> 29:46 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k66(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k66);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 29:20 >> 29:32 */
pdcrt_fijar_local(ctx, m, 5, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 29:20 >> 29:32 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 29:20 >> 29:32 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 29:14 >> 29:17 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_obtener_local(ctx, m, 5));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 29:14 >> 29:17 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 33:18 >> 33:21 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_obtener_local(ctx, m, 4));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 33:14 >> 33:15 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 3), pdcrt_obtener_local(ctx, m, 5));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 33:14 >> 33:15 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 27:4 >> 34:15 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k60, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k67(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k67);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k68, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k68(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k68);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 24:0 >> 35:16 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 24:0 >> 35:16 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 24:0 >> 35:16 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k69(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k69);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 51:26 >> 51:31 */
pdcrt_fijar_local(ctx, m, 122, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 51:26 >> 51:31 */
pdcrt_fijar_local_nb(ctx, m, 126, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 51:26 >> 51:31 */
pdcrt_fijar_local_nb(ctx, m, 125, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 51:26 >> 51:31 */
pdcrt_fijar_local_nb(ctx, m, 124, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 51:26 >> 51:31 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 51:6 >> 51:23 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 118), pdcrt_obtener_local(ctx, m, 122));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 51:6 >> 51:23 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 110:0 >> 205:10 */
do {
static const pdcrt_captura caps[] = {{2}, {88}, {70}, {118}, {93}, {117}, {96}, {98}, {4}, {5}, {60}, {115}};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzibepd_N95_x_N95_cli_f6, caps, 12);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 122, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 110:8 >> 110:23 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 119), pdcrt_obtener_local(ctx, m, 122));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 110:8 >> 110:23 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 214:0 >> 214:5 */
pdcrt_fijar_local(ctx, m, 123, ctx->clase_objeto);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 214:0 >> 214:5 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 35);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k233, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 123)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k70(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k70);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 112:32 >> 112:33 */
pdcrt_fijar_local(ctx, m, 20, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 112:32 >> 112:33 */
pdcrt_fijar_local_nb(ctx, m, 21, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 112:10 >> 112:18 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 16), pdcrt_obtener_local(ctx, m, 20));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 112:10 >> 112:18 */
pdcrt_fijar_local_nb(ctx, m, 20, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 113:4 >> 129:20 */
do {
static const pdcrt_captura caps[] = {{16}, {13}, {2}, {15}, {3}};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzibepd_N95_x_N95_cli_f2, caps, 5);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 20, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 113:18 >> 113:40 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 19), pdcrt_obtener_local(ctx, m, 20));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 113:18 >> 113:40 */
pdcrt_fijar_local_nb(ctx, m, 20, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 130:26 >> 130:37 */
pdcrt_fijar_local(ctx, m, 21, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 4)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 130:39 >> 130:52 */
do {
static const pdcrt_captura caps[] = {{0}, {5}, {14}, {12}, {19}, {6}, {3}, {15}, {7}, {8}, {9}, {10}};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzibepd_N95_x_N95_cli_f5, caps, 12);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 22, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 130:26 >> 130:38 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 3);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k231, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 21)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 22)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k71(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k71);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 114:12 >> 114:40 */
pdcrt_fijar_local(ctx, m, 9, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 114:12 >> 114:40 */
pdcrt_fijar_local_nb(ctx, m, 12, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 114:12 >> 114:40 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 114:12 >> 114:40 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 114:8 >> 128:13 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 9);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 114:8 >> 128:13 */
pdcrt_obj csaltar_obj = pdcrt_obtener_local(ctx, m, 10);
if(csaltar_obj.recv != &pdcrt_recv_booleano) pdcrt_error(ctx, "Se esperaba un objeto de tipo Boole");
if(csaltar_obj.bval)
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k84, PDCRT_XMM_NULO());
else
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k72, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k72(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k72);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 114:8 >> 128:13 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 114:8 >> 128:13 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 115:21 >> 115:38 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 116:15 >> 116:23 */
pdcrt_fijar_local(ctx, m, 10, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 116:34 >> 116:37 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_obtener_local(ctx, m, 5));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 116:23 >> 116:24 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 9);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k73, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 11)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k73(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k73);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 116:23 >> 116:24 */
pdcrt_fijar_local(ctx, m, 9, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 116:23 >> 116:24 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 116:23 >> 116:24 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 116:12 >> 120:17 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 9);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 116:12 >> 120:17 */
pdcrt_obj csaltar_obj = pdcrt_obtener_local(ctx, m, 10);
if(csaltar_obj.recv != &pdcrt_recv_booleano) pdcrt_error(ctx, "Se esperaba un objeto de tipo Boole");
if(csaltar_obj.bval)
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k77, PDCRT_XMM_NULO());
else
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k74, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k74(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k74);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 116:12 >> 120:17 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 116:12 >> 120:17 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 117:42 >> 117:50 */
pdcrt_fijar_local(ctx, m, 10, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 117:55 >> 117:58 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_obtener_local(ctx, m, 5));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 117:50 >> 117:51 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 2);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k75, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 11)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k75(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k75);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 117:50 >> 117:51 */
pdcrt_fijar_local(ctx, m, 9, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 117:50 >> 117:51 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 117:50 >> 117:51 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 117:22 >> 117:39 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_obtener_local(ctx, m, 9));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 117:22 >> 117:39 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 116:12 >> 120:17 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k80, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k76(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k76);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k77, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k77(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k77);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 119:42 >> 119:49 */
pdcrt_fijar_local(ctx, m, 11, ctx->espacio_de_nombres_runtime);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 119:42 >> 119:49 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 10);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k78, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 11)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k78(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k78);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 119:42 >> 119:49 */
pdcrt_fijar_local(ctx, m, 10, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 119:42 >> 119:49 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 119:49 >> 119:50 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 11);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k79, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k79(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k79);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 119:49 >> 119:50 */
pdcrt_fijar_local(ctx, m, 9, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 119:49 >> 119:50 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 119:22 >> 119:39 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_obtener_local(ctx, m, 9));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 119:22 >> 119:39 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k80, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k80(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k80);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 121:12 >> 121:20 */
pdcrt_fijar_local(ctx, m, 10, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 121:30 >> 121:33 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_obtener_local(ctx, m, 5));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 121:36 >> 121:46 */
pdcrt_fijar_local(ctx, m, 13, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 2)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 121:48 >> 121:65 */
pdcrt_fijar_local_nb(ctx, m, 14, pdcrt_obtener_local(ctx, m, 8));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 121:67 >> 121:74 */
pdcrt_fijar_local_nb(ctx, m, 15, pdcrt_obtener_local(ctx, m, 7));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 121:36 >> 121:47 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 3);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k81, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 13)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 14)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 15)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k81(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k81);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 121:36 >> 121:47 */
pdcrt_fijar_local(ctx, m, 12, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 121:36 >> 121:47 */
pdcrt_fijar_local_nb(ctx, m, 15, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 121:36 >> 121:47 */
pdcrt_fijar_local_nb(ctx, m, 14, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 121:36 >> 121:47 */
pdcrt_fijar_local_nb(ctx, m, 13, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 121:20 >> 121:21 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 12);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k82, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 11)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 12)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k82(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k82);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 121:20 >> 121:21 */
pdcrt_fijar_local(ctx, m, 9, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 121:20 >> 121:21 */
pdcrt_fijar_local_nb(ctx, m, 12, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 121:20 >> 121:21 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 121:20 >> 121:21 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 115:12 >> 121:21 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 114:8 >> 128:13 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k95, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k83(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k83);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k84, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k84(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k84);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 123:15 >> 123:23 */
pdcrt_fijar_local(ctx, m, 10, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 123:34 >> 123:37 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_obtener_local(ctx, m, 5));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 123:23 >> 123:24 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 9);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k85, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 11)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k85(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k85);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 123:23 >> 123:24 */
pdcrt_fijar_local(ctx, m, 9, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 123:23 >> 123:24 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 123:23 >> 123:24 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 123:12 >> 127:17 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 9);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 123:12 >> 127:17 */
pdcrt_obj csaltar_obj = pdcrt_obtener_local(ctx, m, 10);
if(csaltar_obj.recv != &pdcrt_recv_booleano) pdcrt_error(ctx, "Se esperaba un objeto de tipo Boole");
if(csaltar_obj.bval)
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k92, PDCRT_XMM_NULO());
else
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k86, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k86(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k86);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 123:12 >> 127:17 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 123:12 >> 127:17 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 124:26 >> 124:31 */
pdcrt_fijar_local(ctx, m, 10, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 3)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 124:34 >> 124:71 */
pdcrt_fijar_local(ctx, m, 12, PDCRT_OBTENER_CONSTANTE(ctx, m, 13));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 124:85 >> 124:92 */
pdcrt_fijar_local_nb(ctx, m, 15, pdcrt_obtener_local(ctx, m, 6));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 124:95 >> 124:112 */
pdcrt_fijar_local(ctx, m, 17, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 4)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 124:112 >> 124:113 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 6);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k87, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 17)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k87(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k87);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 124:112 >> 124:113 */
pdcrt_fijar_local(ctx, m, 16, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 124:112 >> 124:113 */
pdcrt_fijar_local_nb(ctx, m, 17, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 124:85 >> 124:113 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 14);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k88, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 15)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 16)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k88(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k88);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 124:85 >> 124:113 */
pdcrt_fijar_local(ctx, m, 14, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 124:85 >> 124:113 */
pdcrt_fijar_local_nb(ctx, m, 16, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 124:85 >> 124:113 */
pdcrt_fijar_local_nb(ctx, m, 15, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 124:129 >> 124:132 */
pdcrt_fijar_local(ctx, m, 15, PDCRT_OBTENER_CONSTANTE(ctx, m, 15));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 124:134 >> 124:138 */
pdcrt_fijar_local(ctx, m, 16, PDCRT_OBTENER_CONSTANTE(ctx, m, 16));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 124:119 >> 124:120 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 17);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k89, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 14)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 15)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 16)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k89(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k89);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 124:119 >> 124:120 */
pdcrt_fijar_local(ctx, m, 13, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 124:119 >> 124:120 */
pdcrt_fijar_local_nb(ctx, m, 16, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 124:119 >> 124:120 */
pdcrt_fijar_local_nb(ctx, m, 15, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 124:119 >> 124:120 */
pdcrt_fijar_local_nb(ctx, m, 14, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 124:141 >> 124:144 */
pdcrt_fijar_local_nb(ctx, m, 14, pdcrt_obtener_local(ctx, m, 5));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 124:71 >> 124:72 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 18);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k90, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 12)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 13)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 14)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k90(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k90);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 124:71 >> 124:72 */
pdcrt_fijar_local(ctx, m, 11, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 124:71 >> 124:72 */
pdcrt_fijar_local_nb(ctx, m, 14, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 124:71 >> 124:72 */
pdcrt_fijar_local_nb(ctx, m, 13, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 124:71 >> 124:72 */
pdcrt_fijar_local_nb(ctx, m, 12, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 124:26 >> 124:72 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 3);
return pdcrt_llamar1(ctx, m->k.marco, m->k.kf, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 11)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 124:26 >> 124:72 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 124:26 >> 124:72 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 123:12 >> 127:17 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k94, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k91(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k91);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k92, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k92(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k92);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 126:16 >> 126:24 */
pdcrt_fijar_local(ctx, m, 11, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 126:34 >> 126:37 */
pdcrt_fijar_local_nb(ctx, m, 12, pdcrt_obtener_local(ctx, m, 5));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 126:39 >> 126:46 */
pdcrt_fijar_local_nb(ctx, m, 13, pdcrt_obtener_local(ctx, m, 7));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 126:24 >> 126:25 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 12);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k93, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 11)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 12)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 13)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k93(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k93);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 126:24 >> 126:25 */
pdcrt_fijar_local(ctx, m, 10, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 126:24 >> 126:25 */
pdcrt_fijar_local_nb(ctx, m, 13, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 126:24 >> 126:25 */
pdcrt_fijar_local_nb(ctx, m, 12, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 126:24 >> 126:25 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 126:24 >> 126:25 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k94, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k94(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k94);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k95, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k95(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k95);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 113:4 >> 129:20 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 113:4 >> 129:20 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 113:4 >> 129:20 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k96(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k96);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 132:15 >> 132:30 */
pdcrt_fijar_local(ctx, m, 23, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 132:15 >> 132:30 */
pdcrt_fijar_local_nb(ctx, m, 25, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 132:15 >> 132:30 */
pdcrt_fijar_local_nb(ctx, m, 24, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 132:12 >> 134:17 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 23);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 24, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 132:12 >> 134:17 */
pdcrt_obj csaltar_obj = pdcrt_obtener_local(ctx, m, 24);
if(csaltar_obj.recv != &pdcrt_recv_booleano) pdcrt_error(ctx, "Se esperaba un objeto de tipo Boole");
if(csaltar_obj.bval)
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k100, PDCRT_XMM_NULO());
else
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k97, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k97(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k97);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 132:12 >> 134:17 */
pdcrt_fijar_local_nb(ctx, m, 24, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 132:12 >> 134:17 */
pdcrt_fijar_local_nb(ctx, m, 23, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 133:17 >> 133:22 */
pdcrt_fijar_local(ctx, m, 24, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 133:24 >> 133:25 */
pdcrt_fijar_local(ctx, m, 25, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 13)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 133:17 >> 133:25 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 3);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k98, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 24)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 25)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k98(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k98);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 133:17 >> 133:25 */
pdcrt_fijar_local(ctx, m, 23, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 133:17 >> 133:25 */
pdcrt_fijar_local_nb(ctx, m, 25, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 133:17 >> 133:25 */
pdcrt_fijar_local_nb(ctx, m, 24, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 133:17 >> 133:25 */
pdcrt_fijar_local_nb(ctx, m, 23, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 132:12 >> 134:17 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k101, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k99(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k99);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k100, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k100(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k100);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k101, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k101(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k101);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 135:15 >> 135:24 */
pdcrt_fijar_local_nb(ctx, m, 25, pdcrt_obtener_local(ctx, m, 12));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 135:24 >> 135:25 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 0);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k102, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 25)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k102(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k102);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 135:24 >> 135:25 */
pdcrt_fijar_local(ctx, m, 24, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 135:24 >> 135:25 */
pdcrt_fijar_local_nb(ctx, m, 25, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 135:36 >> 135:37 */
pdcrt_fijar_local_nb(ctx, m, 25, pdcrt_objeto_entero(PDCRT_ENTERO_C(0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 135:24 >> 135:37 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 14);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k103, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 24)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 25)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k103(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k103);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 135:24 >> 135:37 */
pdcrt_fijar_local(ctx, m, 23, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 135:24 >> 135:37 */
pdcrt_fijar_local_nb(ctx, m, 25, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 135:24 >> 135:37 */
pdcrt_fijar_local_nb(ctx, m, 24, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 135:12 >> 137:17 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 23);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 24, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 135:12 >> 137:17 */
pdcrt_obj csaltar_obj = pdcrt_obtener_local(ctx, m, 24);
if(csaltar_obj.recv != &pdcrt_recv_booleano) pdcrt_error(ctx, "Se esperaba un objeto de tipo Boole");
if(csaltar_obj.bval)
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k107, PDCRT_XMM_NULO());
else
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k104, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k104(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k104);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 135:12 >> 137:17 */
pdcrt_fijar_local_nb(ctx, m, 24, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 135:12 >> 137:17 */
pdcrt_fijar_local_nb(ctx, m, 23, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 136:17 >> 136:22 */
pdcrt_fijar_local(ctx, m, 24, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 136:24 >> 136:25 */
pdcrt_fijar_local(ctx, m, 25, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 13)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 136:17 >> 136:25 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 3);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k105, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 24)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 25)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k105(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k105);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 136:17 >> 136:25 */
pdcrt_fijar_local(ctx, m, 23, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 136:17 >> 136:25 */
pdcrt_fijar_local_nb(ctx, m, 25, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 136:17 >> 136:25 */
pdcrt_fijar_local_nb(ctx, m, 24, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 136:17 >> 136:25 */
pdcrt_fijar_local_nb(ctx, m, 23, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 135:12 >> 137:17 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k108, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k106(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k106);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k107, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k107(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k107);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k108, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k108(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k108);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 138:17 >> 138:26 */
pdcrt_fijar_local_nb(ctx, m, 26, pdcrt_obtener_local(ctx, m, 12));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 138:37 >> 138:38 */
pdcrt_fijar_local_nb(ctx, m, 27, pdcrt_objeto_entero(PDCRT_ENTERO_C(0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 138:40 >> 138:41 */
pdcrt_fijar_local_nb(ctx, m, 28, pdcrt_objeto_entero(PDCRT_ENTERO_C(2)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 138:26 >> 138:27 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 19);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k109, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 26)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 27)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 28)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k109(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k109);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 138:26 >> 138:27 */
pdcrt_fijar_local(ctx, m, 25, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 138:26 >> 138:27 */
pdcrt_fijar_local_nb(ctx, m, 28, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 138:26 >> 138:27 */
pdcrt_fijar_local_nb(ctx, m, 27, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 138:26 >> 138:27 */
pdcrt_fijar_local_nb(ctx, m, 26, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 138:45 >> 138:49 */
pdcrt_fijar_local(ctx, m, 26, PDCRT_OBTENER_CONSTANTE(ctx, m, 16));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 138:26 >> 138:49 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 14);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k110, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 25)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 26)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k110(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k110);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 138:26 >> 138:49 */
pdcrt_fijar_local(ctx, m, 24, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 138:26 >> 138:49 */
pdcrt_fijar_local_nb(ctx, m, 26, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 138:26 >> 138:49 */
pdcrt_fijar_local_nb(ctx, m, 25, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 138:55 >> 138:64 */
pdcrt_fijar_local_nb(ctx, m, 27, pdcrt_obtener_local(ctx, m, 12));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 138:64 >> 138:65 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 0);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k111, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 27)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k111(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k111);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 138:64 >> 138:65 */
pdcrt_fijar_local(ctx, m, 26, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 138:64 >> 138:65 */
pdcrt_fijar_local_nb(ctx, m, 27, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 138:76 >> 138:77 */
pdcrt_fijar_local_nb(ctx, m, 27, pdcrt_objeto_entero(PDCRT_ENTERO_C(2)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 138:64 >> 138:77 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 20);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k112, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 26)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 27)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k112(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k112);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 138:64 >> 138:77 */
pdcrt_fijar_local(ctx, m, 25, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 138:64 >> 138:77 */
pdcrt_fijar_local_nb(ctx, m, 27, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 138:64 >> 138:77 */
pdcrt_fijar_local_nb(ctx, m, 26, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 138:26 >> 138:77 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 21);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k113, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 24)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 25)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k113(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k113);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 138:26 >> 138:77 */
pdcrt_fijar_local(ctx, m, 23, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 138:26 >> 138:77 */
pdcrt_fijar_local_nb(ctx, m, 25, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 138:26 >> 138:77 */
pdcrt_fijar_local_nb(ctx, m, 24, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 138:12 >> 169:17 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 23);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 24, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 138:12 >> 169:17 */
pdcrt_obj csaltar_obj = pdcrt_obtener_local(ctx, m, 24);
if(csaltar_obj.recv != &pdcrt_recv_booleano) pdcrt_error(ctx, "Se esperaba un objeto de tipo Boole");
if(csaltar_obj.bval)
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k175, PDCRT_XMM_NULO());
else
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k114, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k114(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k114);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 138:12 >> 169:17 */
pdcrt_fijar_local_nb(ctx, m, 24, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 138:12 >> 169:17 */
pdcrt_fijar_local_nb(ctx, m, 23, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 139:26 >> 139:35 */
pdcrt_fijar_local_nb(ctx, m, 15, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 139:37 >> 139:40 */
pdcrt_fijar_local_nb(ctx, m, 16, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 139:42 >> 139:45 */
pdcrt_fijar_local_nb(ctx, m, 17, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 139:47 >> 139:52 */
pdcrt_fijar_local_nb(ctx, m, 18, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 139:54 >> 139:61 */
pdcrt_fijar_local_nb(ctx, m, 19, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 139:63 >> 139:70 */
pdcrt_fijar_local_nb(ctx, m, 23, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 139:63 >> 139:70 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 23));
pdcrt_fijar_local(ctx, m, 20, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 139:63 >> 139:70 */
pdcrt_fijar_local_nb(ctx, m, 23, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 140:34 >> 140:43 */
pdcrt_fijar_local_nb(ctx, m, 24, pdcrt_obtener_local(ctx, m, 12));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 140:54 >> 140:55 */
pdcrt_fijar_local_nb(ctx, m, 25, pdcrt_objeto_entero(PDCRT_ENTERO_C(2)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 140:57 >> 140:66 */
pdcrt_fijar_local_nb(ctx, m, 27, pdcrt_obtener_local(ctx, m, 12));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 140:66 >> 140:67 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 0);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k115, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 27)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k115(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k115);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 140:66 >> 140:67 */
pdcrt_fijar_local(ctx, m, 26, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 140:66 >> 140:67 */
pdcrt_fijar_local_nb(ctx, m, 27, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 140:43 >> 140:44 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 19);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k116, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 24)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 25)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 26)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k116(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k116);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 140:43 >> 140:44 */
pdcrt_fijar_local(ctx, m, 23, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 140:43 >> 140:44 */
pdcrt_fijar_local_nb(ctx, m, 26, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 140:43 >> 140:44 */
pdcrt_fijar_local_nb(ctx, m, 25, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 140:43 >> 140:44 */
pdcrt_fijar_local_nb(ctx, m, 24, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 140:22 >> 140:31 */
pdcrt_fijar_local_nb(ctx, m, 15, pdcrt_obtener_local(ctx, m, 23));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 140:22 >> 140:31 */
pdcrt_fijar_local_nb(ctx, m, 23, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 141:28 >> 141:37 */
pdcrt_fijar_local_nb(ctx, m, 24, pdcrt_obtener_local(ctx, m, 15));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 141:46 >> 141:47 */
pdcrt_fijar_local_nb(ctx, m, 25, pdcrt_objeto_entero(PDCRT_ENTERO_C(0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 141:49 >> 141:52 */
pdcrt_fijar_local(ctx, m, 26, PDCRT_OBTENER_CONSTANTE(ctx, m, 22));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 141:37 >> 141:38 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 23);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k117, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 24)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 25)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 26)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k117(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k117);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 141:37 >> 141:38 */
pdcrt_fijar_local(ctx, m, 23, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 141:37 >> 141:38 */
pdcrt_fijar_local_nb(ctx, m, 26, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 141:37 >> 141:38 */
pdcrt_fijar_local_nb(ctx, m, 25, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 141:37 >> 141:38 */
pdcrt_fijar_local_nb(ctx, m, 24, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 141:22 >> 141:25 */
pdcrt_fijar_local_nb(ctx, m, 16, pdcrt_obtener_local(ctx, m, 23));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 141:22 >> 141:25 */
pdcrt_fijar_local_nb(ctx, m, 23, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 142:22 >> 142:28 */
pdcrt_fijar_local(ctx, m, 25, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 2)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 142:30 >> 142:33 */
pdcrt_fijar_local_nb(ctx, m, 26, pdcrt_obtener_local(ctx, m, 16));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 142:22 >> 142:29 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 3);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k118, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 25)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 26)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k118(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k118);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 142:22 >> 142:29 */
pdcrt_fijar_local(ctx, m, 24, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 142:22 >> 142:29 */
pdcrt_fijar_local_nb(ctx, m, 26, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 142:22 >> 142:29 */
pdcrt_fijar_local_nb(ctx, m, 25, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 142:19 >> 142:29 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 24);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 23, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 142:19 >> 142:29 */
pdcrt_fijar_local_nb(ctx, m, 24, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 142:16 >> 148:21 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 23);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 24, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 142:16 >> 148:21 */
pdcrt_obj csaltar_obj = pdcrt_obtener_local(ctx, m, 24);
if(csaltar_obj.recv != &pdcrt_recv_booleano) pdcrt_error(ctx, "Se esperaba un objeto de tipo Boole");
if(csaltar_obj.bval)
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k125, PDCRT_XMM_NULO());
else
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k119, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k119(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k119);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 142:16 >> 148:21 */
pdcrt_fijar_local_nb(ctx, m, 24, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 142:16 >> 148:21 */
pdcrt_fijar_local_nb(ctx, m, 23, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 143:32 >> 143:41 */
pdcrt_fijar_local_nb(ctx, m, 24, pdcrt_obtener_local(ctx, m, 15));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 143:57 >> 143:58 */
pdcrt_fijar_local_nb(ctx, m, 25, pdcrt_objeto_entero(PDCRT_ENTERO_C(0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 143:60 >> 143:63 */
pdcrt_fijar_local_nb(ctx, m, 26, pdcrt_obtener_local(ctx, m, 16));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 143:41 >> 143:42 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 24);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k120, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 24)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 25)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 26)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k120(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k120);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 143:41 >> 143:42 */
pdcrt_fijar_local(ctx, m, 23, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 143:41 >> 143:42 */
pdcrt_fijar_local_nb(ctx, m, 26, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 143:41 >> 143:42 */
pdcrt_fijar_local_nb(ctx, m, 25, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 143:41 >> 143:42 */
pdcrt_fijar_local_nb(ctx, m, 24, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 143:26 >> 143:29 */
pdcrt_fijar_local_nb(ctx, m, 17, pdcrt_obtener_local(ctx, m, 23));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 143:26 >> 143:29 */
pdcrt_fijar_local_nb(ctx, m, 23, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 144:34 >> 144:43 */
pdcrt_fijar_local_nb(ctx, m, 24, pdcrt_obtener_local(ctx, m, 15));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 144:60 >> 144:63 */
pdcrt_fijar_local_nb(ctx, m, 26, pdcrt_obtener_local(ctx, m, 16));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 144:66 >> 144:67 */
pdcrt_fijar_local_nb(ctx, m, 27, pdcrt_objeto_entero(PDCRT_ENTERO_C(1)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 144:60 >> 144:67 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 4);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k121, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 26)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 27)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k121(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k121);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 144:60 >> 144:67 */
pdcrt_fijar_local(ctx, m, 25, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 144:60 >> 144:67 */
pdcrt_fijar_local_nb(ctx, m, 27, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 144:60 >> 144:67 */
pdcrt_fijar_local_nb(ctx, m, 26, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 144:70 >> 144:79 */
pdcrt_fijar_local_nb(ctx, m, 27, pdcrt_obtener_local(ctx, m, 15));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 144:79 >> 144:80 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 0);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k122, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 27)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k122(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k122);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 144:79 >> 144:80 */
pdcrt_fijar_local(ctx, m, 26, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 144:79 >> 144:80 */
pdcrt_fijar_local_nb(ctx, m, 27, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 144:43 >> 144:44 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 24);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k123, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 24)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 25)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 26)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k123(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k123);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 144:43 >> 144:44 */
pdcrt_fijar_local(ctx, m, 23, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 144:43 >> 144:44 */
pdcrt_fijar_local_nb(ctx, m, 26, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 144:43 >> 144:44 */
pdcrt_fijar_local_nb(ctx, m, 25, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 144:43 >> 144:44 */
pdcrt_fijar_local_nb(ctx, m, 24, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 144:26 >> 144:31 */
pdcrt_fijar_local_nb(ctx, m, 18, pdcrt_obtener_local(ctx, m, 23));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 144:26 >> 144:31 */
pdcrt_fijar_local_nb(ctx, m, 23, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 142:16 >> 148:21 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k127, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k124(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k124);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 3:22 >> 3:26 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k125, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k125(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k125);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 146:32 >> 146:41 */
pdcrt_fijar_local_nb(ctx, m, 23, pdcrt_obtener_local(ctx, m, 15));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 146:26 >> 146:29 */
pdcrt_fijar_local_nb(ctx, m, 17, pdcrt_obtener_local(ctx, m, 23));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 146:26 >> 146:29 */
pdcrt_fijar_local_nb(ctx, m, 23, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 147:34 >> 147:38 */
pdcrt_fijar_local(ctx, m, 24, ctx->espacio_de_nombres_runtime);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 147:34 >> 147:38 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 25);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k126, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 24)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k126(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k126);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 147:34 >> 147:38 */
pdcrt_fijar_local(ctx, m, 23, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 147:34 >> 147:38 */
pdcrt_fijar_local_nb(ctx, m, 24, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 147:26 >> 147:31 */
pdcrt_fijar_local_nb(ctx, m, 18, pdcrt_obtener_local(ctx, m, 23));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 147:26 >> 147:31 */
pdcrt_fijar_local_nb(ctx, m, 23, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 24:0 >> 35:16 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k127, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k127(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k127);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 149:33 >> 149:54 */
pdcrt_fijar_local(ctx, m, 24, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 3)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 149:56 >> 149:59 */
pdcrt_fijar_local_nb(ctx, m, 25, pdcrt_obtener_local(ctx, m, 17));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 149:61 >> 149:78 */
pdcrt_fijar_local(ctx, m, 27, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 4)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 149:78 >> 149:79 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 7);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k128, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 27)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k128(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k128);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 149:78 >> 149:79 */
pdcrt_fijar_local(ctx, m, 26, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 149:78 >> 149:79 */
pdcrt_fijar_local_nb(ctx, m, 27, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 149:33 >> 149:79 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 3);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k129, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 24)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 25)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 26)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k129(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k129);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 149:33 >> 149:79 */
pdcrt_fijar_local(ctx, m, 23, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 149:33 >> 149:79 */
pdcrt_fijar_local_nb(ctx, m, 26, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 149:33 >> 149:79 */
pdcrt_fijar_local_nb(ctx, m, 25, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 149:33 >> 149:79 */
pdcrt_fijar_local_nb(ctx, m, 24, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 149:22 >> 149:29 */
pdcrt_fijar_local_nb(ctx, m, 19, pdcrt_obtener_local(ctx, m, 23));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 149:22 >> 149:29 */
pdcrt_fijar_local_nb(ctx, m, 23, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 150:22 >> 150:28 */
pdcrt_fijar_local(ctx, m, 25, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 2)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 150:30 >> 150:35 */
pdcrt_fijar_local_nb(ctx, m, 26, pdcrt_obtener_local(ctx, m, 18));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 150:22 >> 150:29 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 3);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k130, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 25)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 26)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k130(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k130);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 150:22 >> 150:29 */
pdcrt_fijar_local(ctx, m, 24, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 150:22 >> 150:29 */
pdcrt_fijar_local_nb(ctx, m, 26, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 150:22 >> 150:29 */
pdcrt_fijar_local_nb(ctx, m, 25, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 150:19 >> 150:29 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 24);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 23, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 150:19 >> 150:29 */
pdcrt_fijar_local_nb(ctx, m, 24, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 150:16 >> 168:21 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 23);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 24, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 150:16 >> 168:21 */
pdcrt_obj csaltar_obj = pdcrt_obtener_local(ctx, m, 24);
if(csaltar_obj.recv != &pdcrt_recv_booleano) pdcrt_error(ctx, "Se esperaba un objeto de tipo Boole");
if(csaltar_obj.bval)
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k145, PDCRT_XMM_NULO());
else
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k131, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k131(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k131);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 150:16 >> 168:21 */
pdcrt_fijar_local_nb(ctx, m, 24, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 150:16 >> 168:21 */
pdcrt_fijar_local_nb(ctx, m, 23, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 151:26 >> 151:33 */
pdcrt_fijar_local_nb(ctx, m, 25, pdcrt_obtener_local(ctx, m, 19));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 151:36 >> 151:37 */
pdcrt_fijar_local_nb(ctx, m, 26, pdcrt_objeto_entero(PDCRT_ENTERO_C(1)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 151:26 >> 151:37 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 14);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k132, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 25)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 26)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k132(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k132);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 151:26 >> 151:37 */
pdcrt_fijar_local(ctx, m, 24, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 151:26 >> 151:37 */
pdcrt_fijar_local_nb(ctx, m, 26, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 151:26 >> 151:37 */
pdcrt_fijar_local_nb(ctx, m, 25, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 151:23 >> 151:37 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 24);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 23, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 151:23 >> 151:37 */
pdcrt_fijar_local_nb(ctx, m, 24, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 151:20 >> 153:25 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 23);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 24, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 151:20 >> 153:25 */
pdcrt_obj csaltar_obj = pdcrt_obtener_local(ctx, m, 24);
if(csaltar_obj.recv != &pdcrt_recv_booleano) pdcrt_error(ctx, "Se esperaba un objeto de tipo Boole");
if(csaltar_obj.bval)
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k136, PDCRT_XMM_NULO());
else
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k133, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k133(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k133);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 151:20 >> 153:25 */
pdcrt_fijar_local_nb(ctx, m, 24, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 151:20 >> 153:25 */
pdcrt_fijar_local_nb(ctx, m, 23, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 152:34 >> 152:39 */
pdcrt_fijar_local(ctx, m, 24, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 5)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 152:42 >> 152:113 */
pdcrt_fijar_local(ctx, m, 26, PDCRT_OBTENER_CONSTANTE(ctx, m, 26));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 152:125 >> 152:132 */
pdcrt_fijar_local_nb(ctx, m, 27, pdcrt_obtener_local(ctx, m, 19));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 152:134 >> 152:137 */
pdcrt_fijar_local_nb(ctx, m, 28, pdcrt_obtener_local(ctx, m, 17));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 152:113 >> 152:114 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 18);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k134, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 26)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 27)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 28)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k134(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k134);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 152:113 >> 152:114 */
pdcrt_fijar_local(ctx, m, 25, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 152:113 >> 152:114 */
pdcrt_fijar_local_nb(ctx, m, 28, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 152:113 >> 152:114 */
pdcrt_fijar_local_nb(ctx, m, 27, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 152:113 >> 152:114 */
pdcrt_fijar_local_nb(ctx, m, 26, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 152:34 >> 152:114 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 3);
return pdcrt_llamar1(ctx, m->k.marco, m->k.kf, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 24)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 25)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 152:34 >> 152:114 */
pdcrt_fijar_local_nb(ctx, m, 25, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 152:34 >> 152:114 */
pdcrt_fijar_local_nb(ctx, m, 24, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 151:20 >> 153:25 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k137, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k135(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k135);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 25:4 >> 25:12 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k136, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k136(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k136);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 26:4 >> 26:15 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k137, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k137(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k137);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 154:36 >> 154:43 */
pdcrt_fijar_local(ctx, m, 26, ctx->espacio_de_nombres_runtime);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 154:36 >> 154:43 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 10);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k138, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 26)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k138(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k138);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 154:36 >> 154:43 */
pdcrt_fijar_local(ctx, m, 25, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 154:36 >> 154:43 */
pdcrt_fijar_local_nb(ctx, m, 26, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 154:54 >> 154:59 */
pdcrt_fijar_local_nb(ctx, m, 26, pdcrt_obtener_local(ctx, m, 18));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 154:43 >> 154:44 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 27);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k139, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 25)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 26)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k139(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k139);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 154:43 >> 154:44 */
pdcrt_fijar_local(ctx, m, 24, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 154:43 >> 154:44 */
pdcrt_fijar_local_nb(ctx, m, 26, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 154:43 >> 154:44 */
pdcrt_fijar_local_nb(ctx, m, 25, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 154:26 >> 154:33 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 20), pdcrt_obtener_local(ctx, m, 24));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 154:26 >> 154:33 */
pdcrt_fijar_local_nb(ctx, m, 24, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 155:20 >> 155:42 */
pdcrt_fijar_local(ctx, m, 25, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 1)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 155:44 >> 155:47 */
pdcrt_fijar_local_nb(ctx, m, 26, pdcrt_obtener_local(ctx, m, 17));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 155:49 >> 155:66 */
pdcrt_fijar_local(ctx, m, 28, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 4)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 155:66 >> 155:67 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 7);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k140, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 28)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k140(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k140);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 155:66 >> 155:67 */
pdcrt_fijar_local(ctx, m, 27, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 155:66 >> 155:67 */
pdcrt_fijar_local_nb(ctx, m, 28, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 155:74 >> 155:81 */
pdcrt_fijar_local(ctx, m, 28, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 20)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 155:20 >> 155:43 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 3);
return pdcrt_llamar3(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k141, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 25)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 26)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 27)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 28)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k141(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k141);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 155:20 >> 155:43 */
pdcrt_fijar_local(ctx, m, 24, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 155:20 >> 155:43 */
pdcrt_fijar_local_nb(ctx, m, 28, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 155:20 >> 155:43 */
pdcrt_fijar_local_nb(ctx, m, 27, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 155:20 >> 155:43 */
pdcrt_fijar_local_nb(ctx, m, 26, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 155:20 >> 155:43 */
pdcrt_fijar_local_nb(ctx, m, 25, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 151:20 >> 156:40 */
pdcrt_fijar_local_nb(ctx, m, 24, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 156:21 >> 156:32 */
pdcrt_fijar_local_nb(ctx, m, 25, pdcrt_obtener_local(ctx, m, 14));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 156:35 >> 156:36 */
pdcrt_fijar_local(ctx, m, 27, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 13)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 156:39 >> 156:40 */
pdcrt_fijar_local_nb(ctx, m, 28, pdcrt_objeto_entero(PDCRT_ENTERO_C(1)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 156:35 >> 156:40 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 4);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k142, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 27)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 28)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k142(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k142);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 156:35 >> 156:40 */
pdcrt_fijar_local(ctx, m, 26, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 156:35 >> 156:40 */
pdcrt_fijar_local_nb(ctx, m, 28, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 156:35 >> 156:40 */
pdcrt_fijar_local_nb(ctx, m, 27, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 156:21 >> 156:40 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 3);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k143, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 25)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 26)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k143(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k143);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 156:21 >> 156:40 */
pdcrt_fijar_local(ctx, m, 24, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 156:21 >> 156:40 */
pdcrt_fijar_local_nb(ctx, m, 26, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 156:21 >> 156:40 */
pdcrt_fijar_local_nb(ctx, m, 25, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 151:20 >> 156:40 */
pdcrt_fijar_local_nb(ctx, m, 24, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 150:16 >> 168:21 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k173, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k144(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k144);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 27:17 >> 27:20 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k145, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k145(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k145);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 158:23 >> 158:30 */
pdcrt_fijar_local_nb(ctx, m, 25, pdcrt_obtener_local(ctx, m, 19));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 158:33 >> 158:34 */
pdcrt_fijar_local_nb(ctx, m, 26, pdcrt_objeto_entero(PDCRT_ENTERO_C(0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 158:23 >> 158:34 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 14);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k146, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 25)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 26)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k146(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k146);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 158:23 >> 158:34 */
pdcrt_fijar_local(ctx, m, 24, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 158:23 >> 158:34 */
pdcrt_fijar_local_nb(ctx, m, 26, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 158:23 >> 158:34 */
pdcrt_fijar_local_nb(ctx, m, 25, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 158:20 >> 166:25 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 24);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 25, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 158:20 >> 166:25 */
pdcrt_obj csaltar_obj = pdcrt_obtener_local(ctx, m, 25);
if(csaltar_obj.recv != &pdcrt_recv_booleano) pdcrt_error(ctx, "Se esperaba un objeto de tipo Boole");
if(csaltar_obj.bval)
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k154, PDCRT_XMM_NULO());
else
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k147, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k147(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k147);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 158:20 >> 166:25 */
pdcrt_fijar_local_nb(ctx, m, 25, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 158:20 >> 166:25 */
pdcrt_fijar_local_nb(ctx, m, 24, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 159:24 >> 159:46 */
pdcrt_fijar_local(ctx, m, 25, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 1)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 159:48 >> 159:51 */
pdcrt_fijar_local_nb(ctx, m, 26, pdcrt_obtener_local(ctx, m, 17));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 159:53 >> 159:70 */
pdcrt_fijar_local(ctx, m, 28, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 4)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 159:70 >> 159:71 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 7);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k148, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 28)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k148(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k148);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 159:70 >> 159:71 */
pdcrt_fijar_local(ctx, m, 27, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 159:70 >> 159:71 */
pdcrt_fijar_local_nb(ctx, m, 28, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 159:79 >> 159:86 */
pdcrt_fijar_local(ctx, m, 30, ctx->espacio_de_nombres_runtime);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 159:79 >> 159:86 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 10);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k149, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 30)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k149(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k149);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 159:79 >> 159:86 */
pdcrt_fijar_local(ctx, m, 29, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 159:79 >> 159:86 */
pdcrt_fijar_local_nb(ctx, m, 30, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 159:97 >> 159:106 */
pdcrt_fijar_local(ctx, m, 31, ctx->espacio_de_nombres_runtime);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 159:97 >> 159:106 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 28);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k150, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 31)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k150(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k150);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 159:97 >> 159:106 */
pdcrt_fijar_local(ctx, m, 30, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 159:97 >> 159:106 */
pdcrt_fijar_local_nb(ctx, m, 31, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 159:86 >> 159:87 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 27);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k151, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 29)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 30)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k151(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k151);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 159:86 >> 159:87 */
pdcrt_fijar_local(ctx, m, 28, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 159:86 >> 159:87 */
pdcrt_fijar_local_nb(ctx, m, 30, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 159:86 >> 159:87 */
pdcrt_fijar_local_nb(ctx, m, 29, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 159:24 >> 159:47 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 3);
return pdcrt_llamar3(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k152, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 25)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 26)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 27)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 28)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k152(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k152);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 159:24 >> 159:47 */
pdcrt_fijar_local(ctx, m, 24, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 159:24 >> 159:47 */
pdcrt_fijar_local_nb(ctx, m, 28, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 159:24 >> 159:47 */
pdcrt_fijar_local_nb(ctx, m, 27, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 159:24 >> 159:47 */
pdcrt_fijar_local_nb(ctx, m, 26, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 159:24 >> 159:47 */
pdcrt_fijar_local_nb(ctx, m, 25, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 159:24 >> 159:47 */
pdcrt_fijar_local_nb(ctx, m, 24, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 158:20 >> 166:25 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k169, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k153(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k153);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 29:33 >> 29:46 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k154, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k154(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k154);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 161:40 >> 161:55 */
pdcrt_fijar_local(ctx, m, 25, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 7)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 161:57 >> 161:61 */
pdcrt_fijar_local(ctx, m, 26, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 8)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 161:64 >> 161:65 */
pdcrt_fijar_local(ctx, m, 28, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 13)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 161:68 >> 161:69 */
pdcrt_fijar_local_nb(ctx, m, 29, pdcrt_objeto_entero(PDCRT_ENTERO_C(1)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 161:64 >> 161:69 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 4);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k155, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 28)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 29)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k155(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k155);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 161:64 >> 161:69 */
pdcrt_fijar_local(ctx, m, 27, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 161:64 >> 161:69 */
pdcrt_fijar_local_nb(ctx, m, 29, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 161:64 >> 161:69 */
pdcrt_fijar_local_nb(ctx, m, 28, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 161:73 >> 161:74 */
pdcrt_fijar_local(ctx, m, 29, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 13)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 161:77 >> 161:78 */
pdcrt_fijar_local_nb(ctx, m, 31, pdcrt_objeto_entero(PDCRT_ENTERO_C(1)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 161:81 >> 161:88 */
pdcrt_fijar_local_nb(ctx, m, 32, pdcrt_obtener_local(ctx, m, 19));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 161:77 >> 161:88 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 4);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k156, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 31)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 32)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k156(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k156);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 161:77 >> 161:88 */
pdcrt_fijar_local(ctx, m, 30, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 161:77 >> 161:88 */
pdcrt_fijar_local_nb(ctx, m, 32, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 161:77 >> 161:88 */
pdcrt_fijar_local_nb(ctx, m, 31, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 161:73 >> 161:88 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 4);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k157, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 29)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 30)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k157(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k157);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 161:73 >> 161:88 */
pdcrt_fijar_local(ctx, m, 28, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 161:73 >> 161:88 */
pdcrt_fijar_local_nb(ctx, m, 30, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 161:73 >> 161:88 */
pdcrt_fijar_local_nb(ctx, m, 29, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 161:40 >> 161:56 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 3);
return pdcrt_llamar3(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k158, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 25)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 26)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 27)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 28)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k158(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k158);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 161:40 >> 161:56 */
pdcrt_fijar_local(ctx, m, 24, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 161:40 >> 161:56 */
pdcrt_fijar_local_nb(ctx, m, 28, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 161:40 >> 161:56 */
pdcrt_fijar_local_nb(ctx, m, 27, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 161:40 >> 161:56 */
pdcrt_fijar_local_nb(ctx, m, 26, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 161:40 >> 161:56 */
pdcrt_fijar_local_nb(ctx, m, 25, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 161:30 >> 161:37 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 20), pdcrt_obtener_local(ctx, m, 24));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 161:30 >> 161:37 */
pdcrt_fijar_local_nb(ctx, m, 24, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 162:31 >> 162:38 */
pdcrt_fijar_local(ctx, m, 27, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 20)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 162:38 >> 162:39 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 0);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k159, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 27)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k159(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k159);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 162:38 >> 162:39 */
pdcrt_fijar_local(ctx, m, 26, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 162:38 >> 162:39 */
pdcrt_fijar_local_nb(ctx, m, 27, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 162:50 >> 162:57 */
pdcrt_fijar_local_nb(ctx, m, 27, pdcrt_obtener_local(ctx, m, 19));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 162:38 >> 162:57 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 14);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k160, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 26)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 27)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k160(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k160);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 162:38 >> 162:57 */
pdcrt_fijar_local(ctx, m, 25, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 162:38 >> 162:57 */
pdcrt_fijar_local_nb(ctx, m, 27, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 162:38 >> 162:57 */
pdcrt_fijar_local_nb(ctx, m, 26, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 162:27 >> 162:57 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 25);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 24, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 162:27 >> 162:57 */
pdcrt_fijar_local_nb(ctx, m, 25, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 162:24 >> 164:29 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 24);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 25, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 162:24 >> 164:29 */
pdcrt_obj csaltar_obj = pdcrt_obtener_local(ctx, m, 25);
if(csaltar_obj.recv != &pdcrt_recv_booleano) pdcrt_error(ctx, "Se esperaba un objeto de tipo Boole");
if(csaltar_obj.bval)
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k165, PDCRT_XMM_NULO());
else
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k161, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k161(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k161);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 162:24 >> 164:29 */
pdcrt_fijar_local_nb(ctx, m, 25, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 162:24 >> 164:29 */
pdcrt_fijar_local_nb(ctx, m, 24, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 163:38 >> 163:43 */
pdcrt_fijar_local(ctx, m, 25, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 5)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 163:46 >> 163:117 */
pdcrt_fijar_local(ctx, m, 27, PDCRT_OBTENER_CONSTANTE(ctx, m, 29));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 163:129 >> 163:136 */
pdcrt_fijar_local_nb(ctx, m, 28, pdcrt_obtener_local(ctx, m, 19));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 163:138 >> 163:145 */
pdcrt_fijar_local(ctx, m, 30, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 20)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 163:145 >> 163:146 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 0);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k162, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 30)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k162(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k162);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 163:145 >> 163:146 */
pdcrt_fijar_local(ctx, m, 29, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 163:145 >> 163:146 */
pdcrt_fijar_local_nb(ctx, m, 30, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 163:156 >> 163:159 */
pdcrt_fijar_local_nb(ctx, m, 30, pdcrt_obtener_local(ctx, m, 17));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 163:117 >> 163:118 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 18);
return pdcrt_llamar3(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k163, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 27)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 28)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 29)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 30)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k163(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k163);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 163:117 >> 163:118 */
pdcrt_fijar_local(ctx, m, 26, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 163:117 >> 163:118 */
pdcrt_fijar_local_nb(ctx, m, 30, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 163:117 >> 163:118 */
pdcrt_fijar_local_nb(ctx, m, 29, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 163:117 >> 163:118 */
pdcrt_fijar_local_nb(ctx, m, 28, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 163:117 >> 163:118 */
pdcrt_fijar_local_nb(ctx, m, 27, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 163:38 >> 163:118 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 3);
return pdcrt_llamar1(ctx, m->k.marco, m->k.kf, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 25)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 26)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 163:38 >> 163:118 */
pdcrt_fijar_local_nb(ctx, m, 26, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 163:38 >> 163:118 */
pdcrt_fijar_local_nb(ctx, m, 25, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 162:24 >> 164:29 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k166, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k164(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k164);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 30:28 >> 30:29 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k165, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k165(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k165);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 30:32 >> 30:33 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k166, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k166(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k166);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 165:24 >> 165:46 */
pdcrt_fijar_local(ctx, m, 26, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 1)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 165:48 >> 165:51 */
pdcrt_fijar_local_nb(ctx, m, 27, pdcrt_obtener_local(ctx, m, 17));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 165:53 >> 165:70 */
pdcrt_fijar_local(ctx, m, 29, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 4)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 165:70 >> 165:71 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 7);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k167, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 29)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k167(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k167);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 165:70 >> 165:71 */
pdcrt_fijar_local(ctx, m, 28, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 165:70 >> 165:71 */
pdcrt_fijar_local_nb(ctx, m, 29, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 165:78 >> 165:85 */
pdcrt_fijar_local(ctx, m, 29, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 20)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 165:24 >> 165:47 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 3);
return pdcrt_llamar3(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k168, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 26)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 27)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 28)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 29)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k168(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k168);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 165:24 >> 165:47 */
pdcrt_fijar_local(ctx, m, 25, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 165:24 >> 165:47 */
pdcrt_fijar_local_nb(ctx, m, 29, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 165:24 >> 165:47 */
pdcrt_fijar_local_nb(ctx, m, 28, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 165:24 >> 165:47 */
pdcrt_fijar_local_nb(ctx, m, 27, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 165:24 >> 165:47 */
pdcrt_fijar_local_nb(ctx, m, 26, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 161:24 >> 165:47 */
pdcrt_fijar_local_nb(ctx, m, 25, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 30:35 >> 30:41 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k169, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k169(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k169);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 167:21 >> 167:32 */
pdcrt_fijar_local_nb(ctx, m, 26, pdcrt_obtener_local(ctx, m, 14));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 167:35 >> 167:36 */
pdcrt_fijar_local(ctx, m, 28, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 13)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 167:39 >> 167:40 */
pdcrt_fijar_local_nb(ctx, m, 30, pdcrt_objeto_entero(PDCRT_ENTERO_C(1)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 167:43 >> 167:50 */
pdcrt_fijar_local_nb(ctx, m, 31, pdcrt_obtener_local(ctx, m, 19));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 167:39 >> 167:50 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 4);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k170, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 30)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 31)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k170(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k170);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 167:39 >> 167:50 */
pdcrt_fijar_local(ctx, m, 29, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 167:39 >> 167:50 */
pdcrt_fijar_local_nb(ctx, m, 31, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 167:39 >> 167:50 */
pdcrt_fijar_local_nb(ctx, m, 30, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 167:35 >> 167:50 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 4);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k171, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 28)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 29)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k171(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k171);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 167:35 >> 167:50 */
pdcrt_fijar_local(ctx, m, 27, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 167:35 >> 167:50 */
pdcrt_fijar_local_nb(ctx, m, 29, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 167:35 >> 167:50 */
pdcrt_fijar_local_nb(ctx, m, 28, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 167:21 >> 167:50 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 3);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k172, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 26)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 27)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k172(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k172);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 167:21 >> 167:50 */
pdcrt_fijar_local(ctx, m, 25, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 167:21 >> 167:50 */
pdcrt_fijar_local_nb(ctx, m, 27, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 167:21 >> 167:50 */
pdcrt_fijar_local_nb(ctx, m, 26, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 158:20 >> 167:50 */
pdcrt_fijar_local_nb(ctx, m, 25, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 31:21 >> 31:22 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k173, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k173(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k173);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 138:12 >> 169:17 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k176, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k174(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k174);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 29:14 >> 29:17 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k175, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k175(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k175);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 33:8 >> 33:21 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k176, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k176(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k176);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 170:16 >> 170:25 */
pdcrt_fijar_local_nb(ctx, m, 27, pdcrt_obtener_local(ctx, m, 12));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 170:30 >> 170:31 */
pdcrt_fijar_local_nb(ctx, m, 28, pdcrt_objeto_entero(PDCRT_ENTERO_C(0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 170:25 >> 170:26 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 2);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k177, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 27)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 28)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k177(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k177);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 170:25 >> 170:26 */
pdcrt_fijar_local(ctx, m, 26, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 170:25 >> 170:26 */
pdcrt_fijar_local_nb(ctx, m, 28, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 170:25 >> 170:26 */
pdcrt_fijar_local_nb(ctx, m, 27, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 170:35 >> 170:38 */
pdcrt_fijar_local(ctx, m, 27, PDCRT_OBTENER_CONSTANTE(ctx, m, 15));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 170:25 >> 170:38 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 14);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k178, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 26)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 27)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k178(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k178);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 170:25 >> 170:38 */
pdcrt_fijar_local(ctx, m, 25, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 170:25 >> 170:38 */
pdcrt_fijar_local_nb(ctx, m, 27, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 170:25 >> 170:38 */
pdcrt_fijar_local_nb(ctx, m, 26, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 170:12 >> 198:17 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 25);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 26, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 170:12 >> 198:17 */
pdcrt_obj csaltar_obj = pdcrt_obtener_local(ctx, m, 26);
if(csaltar_obj.recv != &pdcrt_recv_booleano) pdcrt_error(ctx, "Se esperaba un objeto de tipo Boole");
if(csaltar_obj.bval)
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k227, PDCRT_XMM_NULO());
else
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k179, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k179(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k179);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 170:12 >> 198:17 */
pdcrt_fijar_local_nb(ctx, m, 26, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 170:12 >> 198:17 */
pdcrt_fijar_local_nb(ctx, m, 25, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 171:26 >> 171:35 */
pdcrt_fijar_local_nb(ctx, m, 25, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 171:26 >> 171:35 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 25));
pdcrt_fijar_local(ctx, m, 21, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 171:26 >> 171:35 */
pdcrt_fijar_local_nb(ctx, m, 25, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 171:37 >> 171:41 */
pdcrt_fijar_local_nb(ctx, m, 25, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 171:37 >> 171:41 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 25));
pdcrt_fijar_local(ctx, m, 22, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 171:37 >> 171:41 */
pdcrt_fijar_local_nb(ctx, m, 25, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 172:34 >> 172:39 */
pdcrt_fijar_local(ctx, m, 26, ctx->espacio_de_nombres_runtime);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 172:34 >> 172:39 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 30);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k180, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 26)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k180(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k180);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 172:34 >> 172:39 */
pdcrt_fijar_local(ctx, m, 25, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 172:34 >> 172:39 */
pdcrt_fijar_local_nb(ctx, m, 26, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 172:22 >> 172:31 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 21), pdcrt_obtener_local(ctx, m, 25));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 172:22 >> 172:31 */
pdcrt_fijar_local_nb(ctx, m, 25, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 173:29 >> 173:38 */
pdcrt_fijar_local_nb(ctx, m, 26, pdcrt_obtener_local(ctx, m, 12));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 173:49 >> 173:50 */
pdcrt_fijar_local_nb(ctx, m, 27, pdcrt_objeto_entero(PDCRT_ENTERO_C(1)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 173:53 >> 173:62 */
pdcrt_fijar_local_nb(ctx, m, 30, pdcrt_obtener_local(ctx, m, 12));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 173:62 >> 173:63 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 0);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k181, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 30)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k181(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k181);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 173:62 >> 173:63 */
pdcrt_fijar_local(ctx, m, 29, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 173:62 >> 173:63 */
pdcrt_fijar_local_nb(ctx, m, 30, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 173:74 >> 173:75 */
pdcrt_fijar_local_nb(ctx, m, 30, pdcrt_objeto_entero(PDCRT_ENTERO_C(1)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 173:62 >> 173:75 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 31);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k182, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 29)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 30)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k182(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k182);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 173:62 >> 173:75 */
pdcrt_fijar_local(ctx, m, 28, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 173:62 >> 173:75 */
pdcrt_fijar_local_nb(ctx, m, 30, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 173:62 >> 173:75 */
pdcrt_fijar_local_nb(ctx, m, 29, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 173:38 >> 173:39 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 19);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k183, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 26)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 27)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 28)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k183(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k183);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 173:38 >> 173:39 */
pdcrt_fijar_local(ctx, m, 25, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 173:38 >> 173:39 */
pdcrt_fijar_local_nb(ctx, m, 28, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 173:38 >> 173:39 */
pdcrt_fijar_local_nb(ctx, m, 27, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 173:38 >> 173:39 */
pdcrt_fijar_local_nb(ctx, m, 26, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 173:22 >> 173:26 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 22), pdcrt_obtener_local(ctx, m, 25));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 173:22 >> 173:26 */
pdcrt_fijar_local_nb(ctx, m, 25, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 174:16 >> 174:32 */
pdcrt_fijar_local(ctx, m, 26, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 11)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 174:34 >> 174:38 */
pdcrt_fijar_local(ctx, m, 27, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 22)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 174:40 >> 174:53 */
do {
static const pdcrt_captura caps[] = {{4}, {5}, {1}, {21}, {3}, {7}, {8}, {13}};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzibepd_N95_x_N95_cli_f3, caps, 8);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 28, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 174:16 >> 174:33 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 3);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k217, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 26)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 27)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 28)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k184(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k184);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 175:23 >> 175:32 */
pdcrt_fijar_local(ctx, m, 11, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 175:23 >> 175:32 */
pdcrt_fijar_local_nb(ctx, m, 13, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 175:23 >> 175:32 */
pdcrt_fijar_local_nb(ctx, m, 12, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 175:20 >> 191:25 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 11);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 12, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 175:20 >> 191:25 */
pdcrt_obj csaltar_obj = pdcrt_obtener_local(ctx, m, 12);
if(csaltar_obj.recv != &pdcrt_recv_booleano) pdcrt_error(ctx, "Se esperaba un objeto de tipo Boole");
if(csaltar_obj.bval)
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k188, PDCRT_XMM_NULO());
else
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k185, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k185(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k185);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 175:20 >> 191:25 */
pdcrt_fijar_local_nb(ctx, m, 12, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 175:20 >> 191:25 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 176:42 >> 176:51 */
pdcrt_fijar_local(ctx, m, 12, ctx->espacio_de_nombres_runtime);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 176:42 >> 176:51 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 28);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k186, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 12)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k186(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k186);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 176:42 >> 176:51 */
pdcrt_fijar_local(ctx, m, 11, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 176:42 >> 176:51 */
pdcrt_fijar_local_nb(ctx, m, 12, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 176:30 >> 176:39 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 3), pdcrt_obtener_local(ctx, m, 11));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 176:30 >> 176:39 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 175:20 >> 191:25 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k216, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k187(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k187);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 51:62 >> 51:69 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k188, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k188(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k188);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 178:33 >> 178:38 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 179:39 >> 179:60 */
pdcrt_fijar_local(ctx, m, 12, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 4)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 179:62 >> 179:65 */
pdcrt_fijar_local_nb(ctx, m, 13, pdcrt_obtener_local(ctx, m, 8));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 179:67 >> 179:84 */
pdcrt_fijar_local(ctx, m, 15, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 179:84 >> 179:85 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 6);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k189, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 15)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k189(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k189);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 179:84 >> 179:85 */
pdcrt_fijar_local(ctx, m, 14, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 179:84 >> 179:85 */
pdcrt_fijar_local_nb(ctx, m, 15, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 179:39 >> 179:85 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 3);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k190, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 12)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 13)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 14)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k190(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k190);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 179:39 >> 179:85 */
pdcrt_fijar_local(ctx, m, 11, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 179:39 >> 179:85 */
pdcrt_fijar_local_nb(ctx, m, 14, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 179:39 >> 179:85 */
pdcrt_fijar_local_nb(ctx, m, 13, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 179:39 >> 179:85 */
pdcrt_fijar_local_nb(ctx, m, 12, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 179:30 >> 179:35 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_obtener_local(ctx, m, 11));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 179:30 >> 179:35 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 180:27 >> 180:32 */
pdcrt_fijar_local_nb(ctx, m, 12, pdcrt_obtener_local(ctx, m, 9));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 180:35 >> 180:36 */
pdcrt_fijar_local_nb(ctx, m, 13, pdcrt_objeto_entero(PDCRT_ENTERO_C(0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 180:27 >> 180:36 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 14);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k191, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 12)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 13)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k191(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k191);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 180:27 >> 180:36 */
pdcrt_fijar_local(ctx, m, 11, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 180:27 >> 180:36 */
pdcrt_fijar_local_nb(ctx, m, 13, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 180:27 >> 180:36 */
pdcrt_fijar_local_nb(ctx, m, 12, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 180:24 >> 190:29 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 11);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 12, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 180:24 >> 190:29 */
pdcrt_obj csaltar_obj = pdcrt_obtener_local(ctx, m, 12);
if(csaltar_obj.recv != &pdcrt_recv_booleano) pdcrt_error(ctx, "Se esperaba un objeto de tipo Boole");
if(csaltar_obj.bval)
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k199, PDCRT_XMM_NULO());
else
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k192, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k192(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k192);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 180:24 >> 190:29 */
pdcrt_fijar_local_nb(ctx, m, 12, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 180:24 >> 190:29 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 181:28 >> 181:50 */
pdcrt_fijar_local(ctx, m, 12, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 2)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 181:52 >> 181:55 */
pdcrt_fijar_local_nb(ctx, m, 13, pdcrt_obtener_local(ctx, m, 8));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 181:57 >> 181:74 */
pdcrt_fijar_local(ctx, m, 15, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 181:74 >> 181:75 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 6);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k193, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 15)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k193(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k193);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 181:74 >> 181:75 */
pdcrt_fijar_local(ctx, m, 14, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 181:74 >> 181:75 */
pdcrt_fijar_local_nb(ctx, m, 15, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 181:83 >> 181:90 */
pdcrt_fijar_local(ctx, m, 17, ctx->espacio_de_nombres_runtime);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 181:83 >> 181:90 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 10);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k194, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 17)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k194(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k194);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 181:83 >> 181:90 */
pdcrt_fijar_local(ctx, m, 16, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 181:83 >> 181:90 */
pdcrt_fijar_local_nb(ctx, m, 17, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 181:101 >> 181:110 */
pdcrt_fijar_local(ctx, m, 18, ctx->espacio_de_nombres_runtime);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 181:101 >> 181:110 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 28);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k195, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 18)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k195(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k195);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 181:101 >> 181:110 */
pdcrt_fijar_local(ctx, m, 17, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 181:101 >> 181:110 */
pdcrt_fijar_local_nb(ctx, m, 18, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 181:90 >> 181:91 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 27);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k196, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 16)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 17)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k196(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k196);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 181:90 >> 181:91 */
pdcrt_fijar_local(ctx, m, 15, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 181:90 >> 181:91 */
pdcrt_fijar_local_nb(ctx, m, 17, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 181:90 >> 181:91 */
pdcrt_fijar_local_nb(ctx, m, 16, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 181:28 >> 181:51 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 3);
return pdcrt_llamar3(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k197, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 12)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 13)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 14)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 15)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k197(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k197);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 181:28 >> 181:51 */
pdcrt_fijar_local(ctx, m, 11, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 181:28 >> 181:51 */
pdcrt_fijar_local_nb(ctx, m, 15, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 181:28 >> 181:51 */
pdcrt_fijar_local_nb(ctx, m, 14, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 181:28 >> 181:51 */
pdcrt_fijar_local_nb(ctx, m, 13, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 181:28 >> 181:51 */
pdcrt_fijar_local_nb(ctx, m, 12, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 181:28 >> 181:51 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 180:24 >> 190:29 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k215, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k198(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k198);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 110:25 >> 110:46 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k199, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k199(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k199);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 183:37 >> 183:44 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 184:44 >> 184:59 */
pdcrt_fijar_local(ctx, m, 12, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 5)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 184:61 >> 184:65 */
pdcrt_fijar_local(ctx, m, 13, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 6)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 184:68 >> 184:69 */
pdcrt_fijar_local(ctx, m, 15, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 7)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 184:72 >> 184:73 */
pdcrt_fijar_local_nb(ctx, m, 16, pdcrt_objeto_entero(PDCRT_ENTERO_C(1)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 184:68 >> 184:73 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 4);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k200, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 15)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 16)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k200(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k200);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 184:68 >> 184:73 */
pdcrt_fijar_local(ctx, m, 14, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 184:68 >> 184:73 */
pdcrt_fijar_local_nb(ctx, m, 16, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 184:68 >> 184:73 */
pdcrt_fijar_local_nb(ctx, m, 15, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 184:77 >> 184:78 */
pdcrt_fijar_local(ctx, m, 16, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 7)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 184:81 >> 184:82 */
pdcrt_fijar_local_nb(ctx, m, 18, pdcrt_objeto_entero(PDCRT_ENTERO_C(1)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 184:85 >> 184:90 */
pdcrt_fijar_local_nb(ctx, m, 19, pdcrt_obtener_local(ctx, m, 9));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 184:81 >> 184:90 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 4);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k201, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 18)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 19)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k201(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k201);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 184:81 >> 184:90 */
pdcrt_fijar_local(ctx, m, 17, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 184:81 >> 184:90 */
pdcrt_fijar_local_nb(ctx, m, 19, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 184:81 >> 184:90 */
pdcrt_fijar_local_nb(ctx, m, 18, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 184:77 >> 184:90 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 4);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k202, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 16)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 17)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k202(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k202);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 184:77 >> 184:90 */
pdcrt_fijar_local(ctx, m, 15, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 184:77 >> 184:90 */
pdcrt_fijar_local_nb(ctx, m, 17, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 184:77 >> 184:90 */
pdcrt_fijar_local_nb(ctx, m, 16, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 184:44 >> 184:60 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 3);
return pdcrt_llamar3(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k203, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 12)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 13)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 14)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 15)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k203(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k203);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 184:44 >> 184:60 */
pdcrt_fijar_local(ctx, m, 11, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 184:44 >> 184:60 */
pdcrt_fijar_local_nb(ctx, m, 15, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 184:44 >> 184:60 */
pdcrt_fijar_local_nb(ctx, m, 14, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 184:44 >> 184:60 */
pdcrt_fijar_local_nb(ctx, m, 13, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 184:44 >> 184:60 */
pdcrt_fijar_local_nb(ctx, m, 12, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 184:34 >> 184:41 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_obtener_local(ctx, m, 11));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 184:34 >> 184:41 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 185:35 >> 185:42 */
pdcrt_fijar_local_nb(ctx, m, 14, pdcrt_obtener_local(ctx, m, 10));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 185:42 >> 185:43 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 0);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k204, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 14)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k204(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k204);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 185:42 >> 185:43 */
pdcrt_fijar_local(ctx, m, 13, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 185:42 >> 185:43 */
pdcrt_fijar_local_nb(ctx, m, 14, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 185:54 >> 185:59 */
pdcrt_fijar_local_nb(ctx, m, 14, pdcrt_obtener_local(ctx, m, 9));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 185:42 >> 185:59 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 14);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k205, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 13)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 14)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k205(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k205);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 185:42 >> 185:59 */
pdcrt_fijar_local(ctx, m, 12, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 185:42 >> 185:59 */
pdcrt_fijar_local_nb(ctx, m, 14, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 185:42 >> 185:59 */
pdcrt_fijar_local_nb(ctx, m, 13, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 185:31 >> 185:59 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 12);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 185:31 >> 185:59 */
pdcrt_fijar_local_nb(ctx, m, 12, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 185:28 >> 187:33 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 11);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 12, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 185:28 >> 187:33 */
pdcrt_obj csaltar_obj = pdcrt_obtener_local(ctx, m, 12);
if(csaltar_obj.recv != &pdcrt_recv_booleano) pdcrt_error(ctx, "Se esperaba un objeto de tipo Boole");
if(csaltar_obj.bval)
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k210, PDCRT_XMM_NULO());
else
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k206, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k206(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k206);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 185:28 >> 187:33 */
pdcrt_fijar_local_nb(ctx, m, 12, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 185:28 >> 187:33 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 186:42 >> 186:47 */
pdcrt_fijar_local(ctx, m, 12, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 1)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 186:50 >> 186:120 */
pdcrt_fijar_local(ctx, m, 14, PDCRT_OBTENER_CONSTANTE(ctx, m, 32));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 186:132 >> 186:137 */
pdcrt_fijar_local_nb(ctx, m, 15, pdcrt_obtener_local(ctx, m, 9));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 186:139 >> 186:146 */
pdcrt_fijar_local_nb(ctx, m, 17, pdcrt_obtener_local(ctx, m, 10));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 186:146 >> 186:147 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 0);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k207, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 17)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k207(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k207);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 186:146 >> 186:147 */
pdcrt_fijar_local(ctx, m, 16, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 186:146 >> 186:147 */
pdcrt_fijar_local_nb(ctx, m, 17, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 186:157 >> 186:160 */
pdcrt_fijar_local_nb(ctx, m, 17, pdcrt_obtener_local(ctx, m, 8));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 186:120 >> 186:121 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 18);
return pdcrt_llamar3(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k208, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 14)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 15)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 16)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 17)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k208(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k208);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 186:120 >> 186:121 */
pdcrt_fijar_local(ctx, m, 13, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 186:120 >> 186:121 */
pdcrt_fijar_local_nb(ctx, m, 17, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 186:120 >> 186:121 */
pdcrt_fijar_local_nb(ctx, m, 16, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 186:120 >> 186:121 */
pdcrt_fijar_local_nb(ctx, m, 15, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 186:120 >> 186:121 */
pdcrt_fijar_local_nb(ctx, m, 14, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 186:42 >> 186:121 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 3);
return pdcrt_llamar1(ctx, m->k.marco, m->k.kf, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 12)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 13)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 186:42 >> 186:121 */
pdcrt_fijar_local_nb(ctx, m, 13, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 186:42 >> 186:121 */
pdcrt_fijar_local_nb(ctx, m, 12, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 185:28 >> 187:33 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k211, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k209(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k209);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 112:32 >> 112:33 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k210, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k210(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k210);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 112:21 >> 112:32 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k211, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k211(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k211);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 188:28 >> 188:50 */
pdcrt_fijar_local(ctx, m, 13, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 2)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 188:52 >> 188:55 */
pdcrt_fijar_local_nb(ctx, m, 14, pdcrt_obtener_local(ctx, m, 8));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 188:57 >> 188:74 */
pdcrt_fijar_local(ctx, m, 16, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 188:74 >> 188:75 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 6);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k212, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 16)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k212(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k212);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 188:74 >> 188:75 */
pdcrt_fijar_local(ctx, m, 15, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 188:74 >> 188:75 */
pdcrt_fijar_local_nb(ctx, m, 16, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 188:82 >> 188:89 */
pdcrt_fijar_local_nb(ctx, m, 16, pdcrt_obtener_local(ctx, m, 10));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 188:28 >> 188:51 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 3);
return pdcrt_llamar3(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k213, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 13)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 14)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 15)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 16)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k213(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k213);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 188:28 >> 188:51 */
pdcrt_fijar_local(ctx, m, 12, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 188:28 >> 188:51 */
pdcrt_fijar_local_nb(ctx, m, 16, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 188:28 >> 188:51 */
pdcrt_fijar_local_nb(ctx, m, 15, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 188:28 >> 188:51 */
pdcrt_fijar_local_nb(ctx, m, 14, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 188:28 >> 188:51 */
pdcrt_fijar_local_nb(ctx, m, 13, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 183:28 >> 189:47 */
pdcrt_fijar_local_nb(ctx, m, 12, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 189:38 >> 189:39 */
pdcrt_fijar_local(ctx, m, 13, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 7)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 189:42 >> 189:47 */
pdcrt_fijar_local_nb(ctx, m, 14, pdcrt_obtener_local(ctx, m, 9));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 189:38 >> 189:47 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 4);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k214, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 13)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 14)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k214(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k214);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 189:38 >> 189:47 */
pdcrt_fijar_local(ctx, m, 12, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 189:38 >> 189:47 */
pdcrt_fijar_local_nb(ctx, m, 14, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 189:38 >> 189:47 */
pdcrt_fijar_local_nb(ctx, m, 13, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 189:34 >> 189:35 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 7), pdcrt_obtener_local(ctx, m, 12));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 189:34 >> 189:35 */
pdcrt_fijar_local_nb(ctx, m, 12, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 113:4 >> 129:20 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k215, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k215(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k215);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 113:4 >> 129:20 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k216, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k216(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k216);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 174:40 >> 174:53 */
pdcrt_fijar_local_nb(ctx, m, 12, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 174:40 >> 174:53 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 12)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 174:40 >> 174:53 */
pdcrt_fijar_local_nb(ctx, m, 12, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k217(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k217);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 174:16 >> 174:33 */
pdcrt_fijar_local(ctx, m, 25, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 174:16 >> 174:33 */
pdcrt_fijar_local_nb(ctx, m, 28, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 174:16 >> 174:33 */
pdcrt_fijar_local_nb(ctx, m, 27, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 174:16 >> 174:33 */
pdcrt_fijar_local_nb(ctx, m, 26, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 171:16 >> 197:21 */
pdcrt_fijar_local_nb(ctx, m, 25, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 193:19 >> 193:28 */
pdcrt_fijar_local(ctx, m, 25, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 21)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 193:16 >> 197:21 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 25);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 26, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 193:16 >> 197:21 */
pdcrt_obj csaltar_obj = pdcrt_obtener_local(ctx, m, 26);
if(csaltar_obj.recv != &pdcrt_recv_booleano) pdcrt_error(ctx, "Se esperaba un objeto de tipo Boole");
if(csaltar_obj.bval)
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k222, PDCRT_XMM_NULO());
else
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k218, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k218(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k218);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 193:16 >> 197:21 */
pdcrt_fijar_local_nb(ctx, m, 26, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 193:16 >> 197:21 */
pdcrt_fijar_local_nb(ctx, m, 25, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 194:21 >> 194:26 */
pdcrt_fijar_local(ctx, m, 26, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 194:29 >> 194:30 */
pdcrt_fijar_local(ctx, m, 28, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 13)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 194:33 >> 194:34 */
pdcrt_fijar_local_nb(ctx, m, 29, pdcrt_objeto_entero(PDCRT_ENTERO_C(1)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 194:29 >> 194:34 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 4);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k219, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 28)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 29)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k219(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k219);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 194:29 >> 194:34 */
pdcrt_fijar_local(ctx, m, 27, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 194:29 >> 194:34 */
pdcrt_fijar_local_nb(ctx, m, 29, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 194:29 >> 194:34 */
pdcrt_fijar_local_nb(ctx, m, 28, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 194:21 >> 194:34 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 3);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k220, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 26)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 27)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k220(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k220);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 194:21 >> 194:34 */
pdcrt_fijar_local(ctx, m, 25, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 194:21 >> 194:34 */
pdcrt_fijar_local_nb(ctx, m, 27, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 194:21 >> 194:34 */
pdcrt_fijar_local_nb(ctx, m, 26, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 194:21 >> 194:34 */
pdcrt_fijar_local_nb(ctx, m, 25, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 193:16 >> 197:21 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k225, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k221(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k221);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 113:42 >> 113:45 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k222, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k222(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k222);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 196:21 >> 196:32 */
pdcrt_fijar_local_nb(ctx, m, 26, pdcrt_obtener_local(ctx, m, 14));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 196:35 >> 196:36 */
pdcrt_fijar_local(ctx, m, 28, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 13)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 196:39 >> 196:40 */
pdcrt_fijar_local_nb(ctx, m, 29, pdcrt_objeto_entero(PDCRT_ENTERO_C(1)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 196:35 >> 196:40 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 4);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k223, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 28)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 29)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k223(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k223);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 196:35 >> 196:40 */
pdcrt_fijar_local(ctx, m, 27, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 196:35 >> 196:40 */
pdcrt_fijar_local_nb(ctx, m, 29, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 196:35 >> 196:40 */
pdcrt_fijar_local_nb(ctx, m, 28, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 196:21 >> 196:40 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 3);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k224, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 26)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 27)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k224(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k224);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 196:21 >> 196:40 */
pdcrt_fijar_local(ctx, m, 25, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 196:21 >> 196:40 */
pdcrt_fijar_local_nb(ctx, m, 27, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 196:21 >> 196:40 */
pdcrt_fijar_local_nb(ctx, m, 26, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 196:21 >> 196:40 */
pdcrt_fijar_local_nb(ctx, m, 25, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 114:12 >> 114:40 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k225, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k225(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k225);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 170:12 >> 198:17 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k228, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k226(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k226);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 114:12 >> 114:26 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k227, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k227(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k227);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 114:28 >> 114:31 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k228, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k228(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k228);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 199:13 >> 199:18 */
pdcrt_fijar_local(ctx, m, 26, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 199:20 >> 199:21 */
pdcrt_fijar_local(ctx, m, 27, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 13)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 199:13 >> 199:21 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 3);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k229, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 26)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 27)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k229(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k229);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 199:13 >> 199:21 */
pdcrt_fijar_local(ctx, m, 25, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 199:13 >> 199:21 */
pdcrt_fijar_local_nb(ctx, m, 27, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 199:13 >> 199:21 */
pdcrt_fijar_local_nb(ctx, m, 26, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 132:12 >> 199:21 */
pdcrt_fijar_local_nb(ctx, m, 25, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 131:40 >> 131:53 */
pdcrt_fijar_local_nb(ctx, m, 25, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 131:40 >> 131:53 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 25)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 131:40 >> 131:53 */
pdcrt_fijar_local_nb(ctx, m, 25, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k230(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k230);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 131:8 >> 131:33 */
pdcrt_fijar_local(ctx, m, 13, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 131:8 >> 131:33 */
pdcrt_fijar_local_nb(ctx, m, 16, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 131:8 >> 131:33 */
pdcrt_fijar_local_nb(ctx, m, 15, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 131:8 >> 131:33 */
pdcrt_fijar_local_nb(ctx, m, 14, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 131:8 >> 201:22 */
pdcrt_fijar_local_nb(ctx, m, 13, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 201:17 >> 201:21 */
pdcrt_fijar_local(ctx, m, 14, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 2)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 201:21 >> 201:22 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 0);
return pdcrt_llamar0(ctx, m->k.marco, m->k.kf, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 14)), pdcrt_xmm_desde_obj(llamar_msj));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 201:21 >> 201:22 */
pdcrt_fijar_local_nb(ctx, m, 14, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 130:39 >> 130:52 */
pdcrt_fijar_local_nb(ctx, m, 14, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 130:39 >> 130:52 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 14)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 130:39 >> 130:52 */
pdcrt_fijar_local_nb(ctx, m, 14, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k231(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k231);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 130:26 >> 130:38 */
pdcrt_fijar_local(ctx, m, 20, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 130:26 >> 130:38 */
pdcrt_fijar_local_nb(ctx, m, 22, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 130:26 >> 130:38 */
pdcrt_fijar_local_nb(ctx, m, 21, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 130:10 >> 130:23 */
pdcrt_fijar_local_nb(ctx, m, 18, pdcrt_obtener_local(ctx, m, 20));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 130:10 >> 130:23 */
pdcrt_fijar_local_nb(ctx, m, 20, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 203:23 >> 203:38 */
pdcrt_fijar_local(ctx, m, 21, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 7)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 203:40 >> 203:44 */
pdcrt_fijar_local(ctx, m, 22, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 14)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 203:46 >> 203:59 */
pdcrt_fijar_local_nb(ctx, m, 23, pdcrt_obtener_local(ctx, m, 18));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 203:61 >> 203:63 */
pdcrt_fijar_local_nb(ctx, m, 24, pdcrt_objeto_entero(PDCRT_ENTERO_C(-1)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 203:23 >> 203:39 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 3);
return pdcrt_llamar3(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k232, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 21)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 22)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 23)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 24)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k232(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k232);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 203:23 >> 203:39 */
pdcrt_fijar_local(ctx, m, 20, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 203:23 >> 203:39 */
pdcrt_fijar_local_nb(ctx, m, 24, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 203:23 >> 203:39 */
pdcrt_fijar_local_nb(ctx, m, 23, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 203:23 >> 203:39 */
pdcrt_fijar_local_nb(ctx, m, 22, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 203:23 >> 203:39 */
pdcrt_fijar_local_nb(ctx, m, 21, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 203:10 >> 203:20 */
pdcrt_fijar_local_nb(ctx, m, 17, pdcrt_obtener_local(ctx, m, 20));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 203:10 >> 203:20 */
pdcrt_fijar_local_nb(ctx, m, 20, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 204:13 >> 204:24 */
pdcrt_fijar_local(ctx, m, 21, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 11)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 204:26 >> 204:36 */
pdcrt_fijar_local(ctx, m, 22, PDCRT_OBTENER_CONSTANTE(ctx, m, 33));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 204:38 >> 204:46 */
pdcrt_fijar_local(ctx, m, 23, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 16)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 204:48 >> 204:60 */
pdcrt_fijar_local(ctx, m, 24, PDCRT_OBTENER_CONSTANTE(ctx, m, 34));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 204:62 >> 204:72 */
pdcrt_fijar_local_nb(ctx, m, 25, pdcrt_obtener_local(ctx, m, 17));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 204:13 >> 204:25 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 3);
return pdcrt_llamar4(ctx, m->k.marco, m->k.kf, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 21)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 22)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 23)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 24)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 25)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 204:13 >> 204:25 */
pdcrt_fijar_local_nb(ctx, m, 25, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 204:13 >> 204:25 */
pdcrt_fijar_local_nb(ctx, m, 24, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 204:13 >> 204:25 */
pdcrt_fijar_local_nb(ctx, m, 23, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 204:13 >> 204:25 */
pdcrt_fijar_local_nb(ctx, m, 22, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 204:13 >> 204:25 */
pdcrt_fijar_local_nb(ctx, m, 21, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 110:0 >> 205:10 */
pdcrt_fijar_local_nb(ctx, m, 21, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 110:0 >> 205:10 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 21)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 110:0 >> 205:10 */
pdcrt_fijar_local_nb(ctx, m, 21, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k233(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k233);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 214:0 >> 214:5 */
pdcrt_fijar_local(ctx, m, 122, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 214:0 >> 214:5 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 214:6 >> 214:13 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 120), pdcrt_obtener_local(ctx, m, 122));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 214:6 >> 214:13 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 214:6 >> 214:13 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 120)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 214:0 >> 214:5 */
pdcrt_fijar_local(ctx, m, 124, PDCRT_OBTENER_CONSTANTE(ctx, m, 36));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 214:0 >> 214:5 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 37);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k234, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 123)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 124)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k234(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k234);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 214:0 >> 214:5 */
pdcrt_fijar_local(ctx, m, 122, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 214:0 >> 214:5 */
pdcrt_fijar_local_nb(ctx, m, 124, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 214:0 >> 214:5 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 214:6 >> 214:13 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 120)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 221:13 >> 221:20 */
pdcrt_fijar_local(ctx, m, 124, PDCRT_OBTENER_CONSTANTE(ctx, m, 38));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 221:4 >> 221:12 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 39);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k235, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 123)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 124)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k235(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k235);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 221:4 >> 221:12 */
pdcrt_fijar_local(ctx, m, 122, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 221:4 >> 221:12 */
pdcrt_fijar_local_nb(ctx, m, 124, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 221:4 >> 221:12 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 214:6 >> 214:13 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 120)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 232:13 >> 232:20 */
pdcrt_fijar_local(ctx, m, 124, PDCRT_OBTENER_CONSTANTE(ctx, m, 40));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 232:4 >> 232:12 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 39);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k236, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 123)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 124)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k236(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k236);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 232:4 >> 232:12 */
pdcrt_fijar_local(ctx, m, 122, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 232:4 >> 232:12 */
pdcrt_fijar_local_nb(ctx, m, 124, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 232:4 >> 232:12 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 214:6 >> 214:13 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 120)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 237:13 >> 237:27 */
pdcrt_fijar_local(ctx, m, 124, PDCRT_OBTENER_CONSTANTE(ctx, m, 41));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 237:4 >> 237:12 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 39);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k237, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 123)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 124)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k237(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k237);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 237:4 >> 237:12 */
pdcrt_fijar_local(ctx, m, 122, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 237:4 >> 237:12 */
pdcrt_fijar_local_nb(ctx, m, 124, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 237:4 >> 237:12 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 214:6 >> 214:13 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 120)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 244:13 >> 244:21 */
pdcrt_fijar_local(ctx, m, 124, PDCRT_OBTENER_CONSTANTE(ctx, m, 42));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 244:4 >> 244:12 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 39);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k238, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 123)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 124)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k238(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k238);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 244:4 >> 244:12 */
pdcrt_fijar_local(ctx, m, 122, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 244:4 >> 244:12 */
pdcrt_fijar_local_nb(ctx, m, 124, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 244:4 >> 244:12 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 214:6 >> 214:13 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 120)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 253:13 >> 253:21 */
pdcrt_fijar_local(ctx, m, 124, PDCRT_OBTENER_CONSTANTE(ctx, m, 43));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 253:4 >> 253:12 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 39);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k239, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 123)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 124)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k239(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k239);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 253:4 >> 253:12 */
pdcrt_fijar_local(ctx, m, 122, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 253:4 >> 253:12 */
pdcrt_fijar_local_nb(ctx, m, 124, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 253:4 >> 253:12 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 261:7 >> 261:14 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 120)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 261:15 >> 261:26 */
pdcrt_fijar_local(ctx, m, 124, PDCRT_OBTENER_CONSTANTE(ctx, m, 44));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 261:0 >> 267:9 */
do {
static const pdcrt_captura caps[] = {};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzibepd_N95_x_N95_cli_f7, caps, 0);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 125, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 261:0 >> 267:9 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 50);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k245, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 123)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 124)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 125)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k240(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k240);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 262:4 >> 262:30 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 262:4 >> 262:30 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 262:4 >> 262:30 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 262:4 >> 266:32 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 263:10 >> 263:12 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_obtener_local(ctx, m, 0));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 263:23 >> 263:30 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_obtener_local(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 263:4 >> 263:30 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 46);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k241, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k241(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k241);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 263:4 >> 263:30 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 263:4 >> 263:30 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 263:4 >> 263:30 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 262:4 >> 266:32 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 264:10 >> 264:12 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_obtener_local(ctx, m, 0));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 264:30 >> 264:44 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_obtener_local(ctx, m, 3));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 264:4 >> 264:44 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 47);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k242, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k242(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k242);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 264:4 >> 264:44 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 264:4 >> 264:44 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 264:4 >> 264:44 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 262:4 >> 266:32 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 265:10 >> 265:12 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_obtener_local(ctx, m, 0));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 265:24 >> 265:32 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_obtener_local(ctx, m, 4));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 265:4 >> 265:32 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 48);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k243, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k243(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k243);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 265:4 >> 265:32 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 265:4 >> 265:32 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 265:4 >> 265:32 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 262:4 >> 266:32 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 266:10 >> 266:12 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_obtener_local(ctx, m, 0));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 266:24 >> 266:32 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_obtener_local(ctx, m, 5));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 266:4 >> 266:32 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 49);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k244, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k244(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k244);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 266:4 >> 266:32 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 266:4 >> 266:32 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 266:4 >> 266:32 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 262:4 >> 266:32 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 261:0 >> 267:9 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 261:0 >> 267:9 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 261:0 >> 267:9 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k245(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k245);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 261:0 >> 267:9 */
pdcrt_fijar_local(ctx, m, 122, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 261:0 >> 267:9 */
pdcrt_fijar_local_nb(ctx, m, 125, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 261:0 >> 267:9 */
pdcrt_fijar_local_nb(ctx, m, 124, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 261:0 >> 267:9 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 269:7 >> 269:14 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 120)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 269:15 >> 269:24 */
pdcrt_fijar_local(ctx, m, 124, PDCRT_OBTENER_CONSTANTE(ctx, m, 51));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 269:0 >> 271:9 */
do {
static const pdcrt_captura caps[] = {};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzibepd_N95_x_N95_cli_f8, caps, 0);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 125, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 269:0 >> 271:9 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 50);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k251, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 123)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 124)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 125)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k246(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k246);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 270:103 >> 270:104 */
pdcrt_fijar_local(ctx, m, 3, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 270:103 >> 270:104 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 270:113 >> 270:115 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_obtener_local(ctx, m, 0));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 270:115 >> 270:116 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 40);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k247, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k247(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k247);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 270:115 >> 270:116 */
pdcrt_fijar_local(ctx, m, 4, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 270:115 >> 270:116 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 270:125 >> 270:127 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_obtener_local(ctx, m, 0));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 270:127 >> 270:128 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 41);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k248, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k248(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k248);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 270:127 >> 270:128 */
pdcrt_fijar_local(ctx, m, 5, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 270:127 >> 270:128 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 270:144 >> 270:146 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_obtener_local(ctx, m, 0));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 270:146 >> 270:147 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 42);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k249, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k249(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k249);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 270:146 >> 270:147 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 270:146 >> 270:147 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 270:157 >> 270:159 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_obtener_local(ctx, m, 0));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 270:159 >> 270:160 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 43);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k250, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k250(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k250);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 270:159 >> 270:160 */
pdcrt_fijar_local(ctx, m, 7, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 270:159 >> 270:160 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 270:89 >> 270:90 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 18);
return pdcrt_llamar5(ctx, m->k.marco, m->k.kf, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 2)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 3)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 270:89 >> 270:90 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 270:89 >> 270:90 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 270:89 >> 270:90 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 270:89 >> 270:90 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 270:89 >> 270:90 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 270:89 >> 270:90 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 269:0 >> 271:9 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 269:0 >> 271:9 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 2)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 269:0 >> 271:9 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k251(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k251);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 269:0 >> 271:9 */
pdcrt_fijar_local(ctx, m, 122, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 269:0 >> 271:9 */
pdcrt_fijar_local_nb(ctx, m, 125, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 269:0 >> 271:9 */
pdcrt_fijar_local_nb(ctx, m, 124, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 269:0 >> 271:9 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 297:0 >> 341:10 */
do {
static const pdcrt_captura caps[] = {{119}, {93}, {60}, {96}, {118}, {72}, {0}, {9}, {10}, {11}, {111}};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzibepd_N95_x_N95_cli_f18, caps, 11);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 122, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 297:8 >> 297:11 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 121), pdcrt_obtener_local(ctx, m, 122));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 297:8 >> 297:11 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cons = pdcrt_crear_espacio_de_nombres_cons(ctx, PDCRT_GC());
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 122, cons);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 114)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 122), pdcrt_obtener_local(ctx, m, 123), "ParaCadaNúmero", 15, true, pdc_mpdzibepd_N95_x_N95_cli_k334);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k252(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k252);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 300:25 >> 300:26 */
pdcrt_fijar_local(ctx, m, 5, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 300:25 >> 300:26 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 300:14 >> 300:21 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 3);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k253, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k253(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k253);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 300:14 >> 300:21 */
pdcrt_fijar_local(ctx, m, 3, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 300:14 >> 300:21 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 300:14 >> 300:21 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 300:11 >> 300:21 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 3);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 300:11 >> 300:21 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 300:8 >> 302:13 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 2);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 300:8 >> 302:13 */
pdcrt_obj csaltar_obj = pdcrt_obtener_local(ctx, m, 3);
if(csaltar_obj.recv != &pdcrt_recv_booleano) pdcrt_error(ctx, "Se esperaba un objeto de tipo Boole");
if(csaltar_obj.bval)
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k259, PDCRT_XMM_NULO());
else
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k254, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k254(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k254);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 300:8 >> 302:13 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 300:8 >> 302:13 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 301:22 >> 301:25 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_obtener_local(ctx, m, 1));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 301:25 >> 301:26 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 38);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k255, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k255(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k255);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 301:25 >> 301:26 */
pdcrt_fijar_local(ctx, m, 4, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 301:25 >> 301:26 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 301:33 >> 301:34 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 0);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k256, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k256(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k256);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 301:33 >> 301:34 */
pdcrt_fijar_local(ctx, m, 3, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 301:33 >> 301:34 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 301:45 >> 301:46 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_entero(PDCRT_ENTERO_C(1)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 301:33 >> 301:46 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 14);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k257, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 3)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k257(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k257);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 301:33 >> 301:46 */
pdcrt_fijar_local(ctx, m, 2, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 301:33 >> 301:46 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 301:33 >> 301:46 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 301:12 >> 301:46 */
pdcrt_assert(ctx, pdcrt_obtener_local(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 301:12 >> 301:46 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 300:8 >> 302:13 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k260, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k258(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k258);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 121:36 >> 121:47 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k259, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k259(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k259);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 121:36 >> 121:46 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k260, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k260(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k260);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 303:14 >> 303:20 */
pdcrt_fijar_local(ctx, m, 4, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 303:22 >> 303:25 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_obtener_local(ctx, m, 1));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 303:25 >> 303:26 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 40);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k261, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k261(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k261);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 303:25 >> 303:26 */
pdcrt_fijar_local(ctx, m, 5, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 303:25 >> 303:26 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 303:14 >> 303:21 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 3);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k262, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k262(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k262);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 303:14 >> 303:21 */
pdcrt_fijar_local(ctx, m, 3, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 303:14 >> 303:21 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 303:14 >> 303:21 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 303:11 >> 303:21 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 3);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 303:11 >> 303:21 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 303:8 >> 305:13 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 2);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 303:8 >> 305:13 */
pdcrt_obj csaltar_obj = pdcrt_obtener_local(ctx, m, 3);
if(csaltar_obj.recv != &pdcrt_recv_booleano) pdcrt_error(ctx, "Se esperaba un objeto de tipo Boole");
if(csaltar_obj.bval)
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k268, PDCRT_XMM_NULO());
else
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k263, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k263(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k263);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 303:8 >> 305:13 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 303:8 >> 305:13 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 304:22 >> 304:25 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_obtener_local(ctx, m, 1));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 304:25 >> 304:26 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 40);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k264, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k264(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k264);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 304:25 >> 304:26 */
pdcrt_fijar_local(ctx, m, 4, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 304:25 >> 304:26 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 304:33 >> 304:34 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 0);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k265, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k265(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k265);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 304:33 >> 304:34 */
pdcrt_fijar_local(ctx, m, 3, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 304:33 >> 304:34 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 304:45 >> 304:46 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_entero(PDCRT_ENTERO_C(1)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 304:33 >> 304:46 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 20);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k266, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 3)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k266(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k266);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 304:33 >> 304:46 */
pdcrt_fijar_local(ctx, m, 2, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 304:33 >> 304:46 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 304:33 >> 304:46 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 304:12 >> 304:46 */
pdcrt_assert(ctx, pdcrt_obtener_local(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 304:12 >> 304:46 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 303:8 >> 305:13 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k269, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k267(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k267);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 123:23 >> 123:24 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k268, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k268(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k268);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 123:15 >> 123:23 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k269, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k269(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k269);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 299:32 >> 299:45 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 299:32 >> 299:45 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 2)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 299:32 >> 299:45 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k270(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k270);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 299:4 >> 299:21 */
pdcrt_fijar_local(ctx, m, 20, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 299:4 >> 299:21 */
pdcrt_fijar_local_nb(ctx, m, 23, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 299:4 >> 299:21 */
pdcrt_fijar_local_nb(ctx, m, 22, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 299:4 >> 299:21 */
pdcrt_fijar_local_nb(ctx, m, 21, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 298:4 >> 340:23 */
pdcrt_fijar_local_nb(ctx, m, 20, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 307:4 >> 316:14 */
do {
static const pdcrt_captura caps[] = {{1}, {2}, {11}, {4}, {5}, {14}};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzibepd_N95_x_N95_cli_f12, caps, 6);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 20, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 307:12 >> 307:33 */
pdcrt_fijar_local_nb(ctx, m, 18, pdcrt_obtener_local(ctx, m, 20));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 307:12 >> 307:33 */
pdcrt_fijar_local_nb(ctx, m, 20, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 317:4 >> 326:14 */
do {
static const pdcrt_captura caps[] = {{1}, {2}, {11}, {4}, {5}, {14}};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzibepd_N95_x_N95_cli_f15, caps, 6);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 20, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 317:12 >> 317:26 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 19), pdcrt_obtener_local(ctx, m, 20));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 317:12 >> 317:26 */
pdcrt_fijar_local_nb(ctx, m, 20, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 327:16 >> 327:31 */
pdcrt_fijar_local(ctx, m, 21, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 327:34 >> 327:55 */
pdcrt_fijar_local_nb(ctx, m, 22, pdcrt_obtener_local(ctx, m, 18));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 327:58 >> 327:72 */
pdcrt_fijar_local(ctx, m, 23, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 19)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 327:74 >> 327:78 */
pdcrt_fijar_local_nb(ctx, m, 24, pdcrt_obtener_local(ctx, m, 13));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 327:80 >> 327:85 */
pdcrt_fijar_local(ctx, m, 25, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 14)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 327:16 >> 327:32 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 3);
return pdcrt_llamar4(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k303, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 21)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 22)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 23)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 24)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 25)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k271(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k271);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 310:71 >> 310:72 */
pdcrt_fijar_local(ctx, m, 13, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 310:71 >> 310:72 */
pdcrt_fijar_local_nb(ctx, m, 14, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 310:42 >> 310:72 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 14);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k272, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 12)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 13)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k272(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k272);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 310:42 >> 310:72 */
pdcrt_fijar_local(ctx, m, 11, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 310:42 >> 310:72 */
pdcrt_fijar_local_nb(ctx, m, 13, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 310:42 >> 310:72 */
pdcrt_fijar_local_nb(ctx, m, 12, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 310:88 >> 310:97 */
pdcrt_fijar_local(ctx, m, 12, PDCRT_OBTENER_CONSTANTE(ctx, m, 38));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 310:99 >> 310:108 */
pdcrt_fijar_local(ctx, m, 13, PDCRT_OBTENER_CONSTANTE(ctx, m, 40));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 310:78 >> 310:79 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 17);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k273, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 11)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 12)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 13)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k273(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k273);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 310:78 >> 310:79 */
pdcrt_fijar_local(ctx, m, 10, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 310:78 >> 310:79 */
pdcrt_fijar_local_nb(ctx, m, 13, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 310:78 >> 310:79 */
pdcrt_fijar_local_nb(ctx, m, 12, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 310:78 >> 310:79 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 310:20 >> 310:34 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 3);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k274, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k274(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k274);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 310:20 >> 310:34 */
pdcrt_fijar_local(ctx, m, 7, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 310:20 >> 310:34 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 310:20 >> 310:34 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 310:20 >> 310:34 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 310:113 >> 310:121 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 2)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 310:20 >> 310:121 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 14);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k275, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k275(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k275);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 310:20 >> 310:121 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 310:20 >> 310:121 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 310:20 >> 310:121 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 310:16 >> 312:21 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 6);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 310:16 >> 312:21 */
pdcrt_obj csaltar_obj = pdcrt_obtener_local(ctx, m, 7);
if(csaltar_obj.recv != &pdcrt_recv_booleano) pdcrt_error(ctx, "Se esperaba un objeto de tipo Boole");
if(csaltar_obj.bval)
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k280, PDCRT_XMM_NULO());
else
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k276, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k276(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k276);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 310:16 >> 312:21 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 310:16 >> 312:21 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 311:21 >> 311:24 */
pdcrt_fijar_local(ctx, m, 7, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 4)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 311:26 >> 311:29 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_obtener_local(ctx, m, 5));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 311:29 >> 311:30 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 41);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k277, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k277(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k277);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 311:29 >> 311:30 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 311:29 >> 311:30 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 311:21 >> 311:30 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 3);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k278, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k278(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k278);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 311:21 >> 311:30 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 311:21 >> 311:30 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 311:21 >> 311:30 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 311:21 >> 311:30 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 310:16 >> 312:21 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k281, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k279(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k279);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 124:119 >> 124:120 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k280, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k280(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k280);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 124:85 >> 124:113 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k281, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k281(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k281);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 309:40 >> 309:53 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 309:40 >> 309:53 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 309:40 >> 309:53 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k282(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k282);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 309:12 >> 309:29 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 309:12 >> 309:29 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 309:12 >> 309:29 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 309:12 >> 309:29 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 309:12 >> 314:58 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 314:22 >> 314:27 */
pdcrt_fijar_local(ctx, m, 9, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 6)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 314:30 >> 314:57 */
pdcrt_fijar_local(ctx, m, 11, PDCRT_OBTENER_CONSTANTE(ctx, m, 53));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 314:71 >> 314:80 */
pdcrt_fijar_local(ctx, m, 14, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 5)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 314:83 >> 314:100 */
pdcrt_fijar_local(ctx, m, 16, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 314:100 >> 314:101 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 6);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k283, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 16)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k283(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k283);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 314:100 >> 314:101 */
pdcrt_fijar_local(ctx, m, 15, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 314:100 >> 314:101 */
pdcrt_fijar_local_nb(ctx, m, 16, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 314:71 >> 314:101 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 14);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k284, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 14)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 15)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k284(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k284);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 314:71 >> 314:101 */
pdcrt_fijar_local(ctx, m, 13, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 314:71 >> 314:101 */
pdcrt_fijar_local_nb(ctx, m, 15, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 314:71 >> 314:101 */
pdcrt_fijar_local_nb(ctx, m, 14, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 314:117 >> 314:120 */
pdcrt_fijar_local(ctx, m, 14, PDCRT_OBTENER_CONSTANTE(ctx, m, 15));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 314:122 >> 314:126 */
pdcrt_fijar_local(ctx, m, 15, PDCRT_OBTENER_CONSTANTE(ctx, m, 16));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 314:107 >> 314:108 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 17);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k285, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 13)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 14)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 15)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k285(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k285);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 314:107 >> 314:108 */
pdcrt_fijar_local(ctx, m, 12, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 314:107 >> 314:108 */
pdcrt_fijar_local_nb(ctx, m, 15, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 314:107 >> 314:108 */
pdcrt_fijar_local_nb(ctx, m, 14, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 314:107 >> 314:108 */
pdcrt_fijar_local_nb(ctx, m, 13, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 314:129 >> 314:137 */
pdcrt_fijar_local(ctx, m, 13, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 2)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 314:57 >> 314:58 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 18);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k286, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 11)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 12)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 13)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k286(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k286);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 314:57 >> 314:58 */
pdcrt_fijar_local(ctx, m, 10, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 314:57 >> 314:58 */
pdcrt_fijar_local_nb(ctx, m, 13, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 314:57 >> 314:58 */
pdcrt_fijar_local_nb(ctx, m, 12, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 314:57 >> 314:58 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 314:22 >> 314:58 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 3);
return pdcrt_llamar1(ctx, m->k.marco, m->k.kf, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 314:22 >> 314:58 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 314:22 >> 314:58 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 308:30 >> 308:43 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 308:30 >> 308:43 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 308:30 >> 308:43 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k287(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k287);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 320:71 >> 320:72 */
pdcrt_fijar_local(ctx, m, 13, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 320:71 >> 320:72 */
pdcrt_fijar_local_nb(ctx, m, 14, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 320:42 >> 320:72 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 14);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k288, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 12)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 13)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k288(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k288);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 320:42 >> 320:72 */
pdcrt_fijar_local(ctx, m, 11, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 320:42 >> 320:72 */
pdcrt_fijar_local_nb(ctx, m, 13, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 320:42 >> 320:72 */
pdcrt_fijar_local_nb(ctx, m, 12, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 320:88 >> 320:97 */
pdcrt_fijar_local(ctx, m, 12, PDCRT_OBTENER_CONSTANTE(ctx, m, 38));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 320:99 >> 320:108 */
pdcrt_fijar_local(ctx, m, 13, PDCRT_OBTENER_CONSTANTE(ctx, m, 40));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 320:78 >> 320:79 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 17);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k289, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 11)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 12)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 13)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k289(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k289);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 320:78 >> 320:79 */
pdcrt_fijar_local(ctx, m, 10, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 320:78 >> 320:79 */
pdcrt_fijar_local_nb(ctx, m, 13, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 320:78 >> 320:79 */
pdcrt_fijar_local_nb(ctx, m, 12, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 320:78 >> 320:79 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 320:20 >> 320:34 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 3);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k290, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k290(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k290);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 320:20 >> 320:34 */
pdcrt_fijar_local(ctx, m, 7, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 320:20 >> 320:34 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 320:20 >> 320:34 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 320:20 >> 320:34 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 320:113 >> 320:121 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 4)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 320:20 >> 320:121 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 14);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k291, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k291(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k291);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 320:20 >> 320:121 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 320:20 >> 320:121 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 320:20 >> 320:121 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 320:16 >> 322:21 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 6);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 320:16 >> 322:21 */
pdcrt_obj csaltar_obj = pdcrt_obtener_local(ctx, m, 7);
if(csaltar_obj.recv != &pdcrt_recv_booleano) pdcrt_error(ctx, "Se esperaba un objeto de tipo Boole");
if(csaltar_obj.bval)
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k296, PDCRT_XMM_NULO());
else
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k292, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k292(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k292);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 320:16 >> 322:21 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 320:16 >> 322:21 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 321:21 >> 321:24 */
pdcrt_fijar_local(ctx, m, 7, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 2)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 321:26 >> 321:29 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_obtener_local(ctx, m, 5));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 321:29 >> 321:30 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 42);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k293, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k293(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k293);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 321:29 >> 321:30 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 321:29 >> 321:30 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 321:21 >> 321:30 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 3);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k294, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k294(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k294);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 321:21 >> 321:30 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 321:21 >> 321:30 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 321:21 >> 321:30 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 321:21 >> 321:30 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 320:16 >> 322:21 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k297, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k295(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k295);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 126:34 >> 126:37 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k296, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k296(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k296);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 126:39 >> 126:46 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k297, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k297(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k297);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 319:40 >> 319:53 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 319:40 >> 319:53 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 319:40 >> 319:53 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k298(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k298);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 319:12 >> 319:29 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 319:12 >> 319:29 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 319:12 >> 319:29 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 319:12 >> 319:29 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 319:12 >> 324:58 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 324:22 >> 324:27 */
pdcrt_fijar_local(ctx, m, 9, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 6)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 324:30 >> 324:57 */
pdcrt_fijar_local(ctx, m, 11, PDCRT_OBTENER_CONSTANTE(ctx, m, 53));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 324:71 >> 324:80 */
pdcrt_fijar_local(ctx, m, 14, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 3)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 324:83 >> 324:100 */
pdcrt_fijar_local(ctx, m, 16, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 324:100 >> 324:101 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 6);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k299, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 16)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k299(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k299);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 324:100 >> 324:101 */
pdcrt_fijar_local(ctx, m, 15, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 324:100 >> 324:101 */
pdcrt_fijar_local_nb(ctx, m, 16, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 324:71 >> 324:101 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 14);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k300, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 14)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 15)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k300(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k300);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 324:71 >> 324:101 */
pdcrt_fijar_local(ctx, m, 13, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 324:71 >> 324:101 */
pdcrt_fijar_local_nb(ctx, m, 15, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 324:71 >> 324:101 */
pdcrt_fijar_local_nb(ctx, m, 14, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 324:117 >> 324:120 */
pdcrt_fijar_local(ctx, m, 14, PDCRT_OBTENER_CONSTANTE(ctx, m, 15));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 324:122 >> 324:126 */
pdcrt_fijar_local(ctx, m, 15, PDCRT_OBTENER_CONSTANTE(ctx, m, 16));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 324:107 >> 324:108 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 17);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k301, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 13)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 14)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 15)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k301(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k301);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 324:107 >> 324:108 */
pdcrt_fijar_local(ctx, m, 12, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 324:107 >> 324:108 */
pdcrt_fijar_local_nb(ctx, m, 15, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 324:107 >> 324:108 */
pdcrt_fijar_local_nb(ctx, m, 14, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 324:107 >> 324:108 */
pdcrt_fijar_local_nb(ctx, m, 13, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 324:129 >> 324:137 */
pdcrt_fijar_local(ctx, m, 13, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 4)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 324:57 >> 324:58 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 18);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k302, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 11)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 12)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 13)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k302(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k302);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 324:57 >> 324:58 */
pdcrt_fijar_local(ctx, m, 10, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 324:57 >> 324:58 */
pdcrt_fijar_local_nb(ctx, m, 13, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 324:57 >> 324:58 */
pdcrt_fijar_local_nb(ctx, m, 12, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 324:57 >> 324:58 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 324:22 >> 324:58 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 3);
return pdcrt_llamar1(ctx, m->k.marco, m->k.kf, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 324:22 >> 324:58 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 324:22 >> 324:58 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 318:30 >> 318:43 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 318:30 >> 318:43 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 318:30 >> 318:43 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k303(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k303);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 327:16 >> 327:32 */
pdcrt_fijar_local(ctx, m, 20, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 327:16 >> 327:32 */
pdcrt_fijar_local_nb(ctx, m, 25, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 327:16 >> 327:32 */
pdcrt_fijar_local_nb(ctx, m, 24, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 327:16 >> 327:32 */
pdcrt_fijar_local_nb(ctx, m, 23, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 327:16 >> 327:32 */
pdcrt_fijar_local_nb(ctx, m, 22, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 327:16 >> 327:32 */
pdcrt_fijar_local_nb(ctx, m, 21, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 327:10 >> 327:13 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 15), pdcrt_obtener_local(ctx, m, 20));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 327:10 >> 327:13 */
pdcrt_fijar_local_nb(ctx, m, 20, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 328:24 >> 328:27 */
pdcrt_fijar_local(ctx, m, 21, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 15)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 328:27 >> 328:28 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 33);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k304, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 21)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k304(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k304);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 328:27 >> 328:28 */
pdcrt_fijar_local(ctx, m, 20, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 328:27 >> 328:28 */
pdcrt_fijar_local_nb(ctx, m, 21, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 328:10 >> 328:21 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 16), pdcrt_obtener_local(ctx, m, 20));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 328:10 >> 328:21 */
pdcrt_fijar_local_nb(ctx, m, 20, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 329:23 >> 329:26 */
pdcrt_fijar_local(ctx, m, 21, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 15)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 329:26 >> 329:27 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 34);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k305, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 21)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k305(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k305);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 329:26 >> 329:27 */
pdcrt_fijar_local(ctx, m, 20, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 329:26 >> 329:27 */
pdcrt_fijar_local_nb(ctx, m, 21, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 329:10 >> 329:20 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 17), pdcrt_obtener_local(ctx, m, 20));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 329:10 >> 329:20 */
pdcrt_fijar_local_nb(ctx, m, 20, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 330:11 >> 330:17 */
pdcrt_fijar_local(ctx, m, 23, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 3)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 330:19 >> 330:33 */
pdcrt_fijar_local_nb(ctx, m, 24, pdcrt_obtener_local(ctx, m, 12));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 330:11 >> 330:18 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 3);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k306, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 23)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 24)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k306(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k306);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 330:11 >> 330:18 */
pdcrt_fijar_local(ctx, m, 22, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 330:11 >> 330:18 */
pdcrt_fijar_local_nb(ctx, m, 24, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 330:11 >> 330:18 */
pdcrt_fijar_local_nb(ctx, m, 23, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 330:8 >> 330:18 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 22);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 21, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 330:8 >> 330:18 */
pdcrt_fijar_local_nb(ctx, m, 22, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 330:39 >> 330:49 */
pdcrt_fijar_local(ctx, m, 24, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 17)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 330:49 >> 330:50 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 0);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k307, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 24)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k307(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k307);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 330:49 >> 330:50 */
pdcrt_fijar_local(ctx, m, 23, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 330:49 >> 330:50 */
pdcrt_fijar_local_nb(ctx, m, 24, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 330:61 >> 330:75 */
pdcrt_fijar_local_nb(ctx, m, 24, pdcrt_obtener_local(ctx, m, 12));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 330:49 >> 330:75 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 14);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k308, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 23)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 24)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k308(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k308);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 330:49 >> 330:75 */
pdcrt_fijar_local(ctx, m, 22, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 330:49 >> 330:75 */
pdcrt_fijar_local_nb(ctx, m, 24, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 330:49 >> 330:75 */
pdcrt_fijar_local_nb(ctx, m, 23, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 330:8 >> 330:75 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 21);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k309, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 21)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 22)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k309(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k309);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 330:8 >> 330:75 */
pdcrt_fijar_local(ctx, m, 20, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 330:8 >> 330:75 */
pdcrt_fijar_local_nb(ctx, m, 22, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 330:8 >> 330:75 */
pdcrt_fijar_local_nb(ctx, m, 21, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 330:4 >> 332:9 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 20);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 21, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 330:4 >> 332:9 */
pdcrt_obj csaltar_obj = pdcrt_obtener_local(ctx, m, 21);
if(csaltar_obj.recv != &pdcrt_recv_booleano) pdcrt_error(ctx, "Se esperaba un objeto de tipo Boole");
if(csaltar_obj.bval)
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k314, PDCRT_XMM_NULO());
else
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k310, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k310(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k310);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 330:4 >> 332:9 */
pdcrt_fijar_local_nb(ctx, m, 21, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 330:4 >> 332:9 */
pdcrt_fijar_local_nb(ctx, m, 20, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 331:18 >> 331:23 */
pdcrt_fijar_local(ctx, m, 21, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 14)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 331:26 >> 331:89 */
pdcrt_fijar_local(ctx, m, 23, PDCRT_OBTENER_CONSTANTE(ctx, m, 54));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 331:101 >> 331:115 */
pdcrt_fijar_local_nb(ctx, m, 24, pdcrt_obtener_local(ctx, m, 12));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 331:117 >> 331:127 */
pdcrt_fijar_local(ctx, m, 26, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 17)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 331:127 >> 331:128 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 0);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k311, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 26)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k311(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k311);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 331:127 >> 331:128 */
pdcrt_fijar_local(ctx, m, 25, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 331:127 >> 331:128 */
pdcrt_fijar_local_nb(ctx, m, 26, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 331:89 >> 331:90 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 18);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k312, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 23)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 24)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 25)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k312(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k312);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 331:89 >> 331:90 */
pdcrt_fijar_local(ctx, m, 22, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 331:89 >> 331:90 */
pdcrt_fijar_local_nb(ctx, m, 25, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 331:89 >> 331:90 */
pdcrt_fijar_local_nb(ctx, m, 24, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 331:89 >> 331:90 */
pdcrt_fijar_local_nb(ctx, m, 23, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 331:18 >> 331:90 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 3);
return pdcrt_llamar1(ctx, m->k.marco, m->k.kf, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 21)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 22)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 331:18 >> 331:90 */
pdcrt_fijar_local_nb(ctx, m, 22, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 331:18 >> 331:90 */
pdcrt_fijar_local_nb(ctx, m, 21, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 330:4 >> 332:9 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k315, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k313(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k313);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 131:69 >> 131:80 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k314, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k314(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k314);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 131:69 >> 131:80 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k315, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k315(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k315);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 333:4 >> 333:15 */
pdcrt_fijar_local(ctx, m, 22, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 16)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 333:29 >> 333:42 */
do {
static const pdcrt_captura caps[] = {{2}, {11}, {10}};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzibepd_N95_x_N95_cli_f17, caps, 3);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 23, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 333:15 >> 333:16 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 57);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k333, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 22)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 23)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k316(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k316);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 335:23 >> 335:24 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 335:23 >> 335:24 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 335:34 >> 335:37 */
pdcrt_fijar_local(ctx, m, 7, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 1)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 335:23 >> 335:37 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 14);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k317, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k317(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k317);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 335:23 >> 335:37 */
pdcrt_fijar_local(ctx, m, 5, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 335:23 >> 335:37 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 335:23 >> 335:37 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 335:43 >> 335:50 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_obtener_local(ctx, m, 3));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 335:50 >> 335:51 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 40);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k318, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k318(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k318);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 335:50 >> 335:51 */
pdcrt_fijar_local(ctx, m, 7, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 335:50 >> 335:51 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 335:61 >> 335:64 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 1)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 335:50 >> 335:64 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 14);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k319, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k319(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k319);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 335:50 >> 335:64 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 335:50 >> 335:64 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 335:50 >> 335:64 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 335:23 >> 335:64 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 55);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k320, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k320(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k320);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 335:23 >> 335:64 */
pdcrt_fijar_local(ctx, m, 4, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 335:23 >> 335:64 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 335:23 >> 335:64 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 335:12 >> 337:17 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 4);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 335:12 >> 337:17 */
pdcrt_obj csaltar_obj = pdcrt_obtener_local(ctx, m, 5);
if(csaltar_obj.recv != &pdcrt_recv_booleano) pdcrt_error(ctx, "Se esperaba un objeto de tipo Boole");
if(csaltar_obj.bval)
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k330, PDCRT_XMM_NULO());
else
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k321, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k321(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k321);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 335:12 >> 337:17 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 335:12 >> 337:17 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 336:18 >> 336:25 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_obtener_local(ctx, m, 3));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 336:25 >> 336:26 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 43);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k322, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k322(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k322);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 336:25 >> 336:26 */
pdcrt_fijar_local(ctx, m, 5, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 336:25 >> 336:26 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 336:37 >> 336:44 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_obtener_local(ctx, m, 3));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 336:51 >> 336:62 */
pdcrt_fijar_local(ctx, m, 9, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 2)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 336:64 >> 336:71 */
pdcrt_fijar_local(ctx, m, 10, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 336:73 >> 336:78 */
pdcrt_fijar_local(ctx, m, 12, ctx->espacio_de_nombres_runtime);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 336:73 >> 336:78 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 56);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k323, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 12)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k323(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k323);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 336:73 >> 336:78 */
pdcrt_fijar_local(ctx, m, 11, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 336:73 >> 336:78 */
pdcrt_fijar_local_nb(ctx, m, 12, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 336:51 >> 336:63 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 3);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k324, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 11)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k324(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k324);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 336:51 >> 336:63 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 336:51 >> 336:63 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 336:51 >> 336:63 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 336:51 >> 336:63 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 336:90 >> 336:97 */
pdcrt_fijar_local(ctx, m, 11, ctx->espacio_de_nombres_runtime);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 336:90 >> 336:97 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 10);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k325, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 11)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k325(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k325);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 336:90 >> 336:97 */
pdcrt_fijar_local(ctx, m, 10, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 336:90 >> 336:97 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 336:108 >> 336:115 */
pdcrt_fijar_local(ctx, m, 11, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 336:97 >> 336:98 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 27);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k326, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 11)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k326(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k326);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 336:97 >> 336:98 */
pdcrt_fijar_local(ctx, m, 9, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 336:97 >> 336:98 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 336:97 >> 336:98 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 336:118 >> 336:125 */
pdcrt_fijar_local(ctx, m, 10, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 336:79 >> 336:80 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 17);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k327, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k327(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k327);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 336:79 >> 336:80 */
pdcrt_fijar_local(ctx, m, 7, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 336:79 >> 336:80 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 336:79 >> 336:80 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 336:79 >> 336:80 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 336:25 >> 336:80 */
static const int proto[] =
{ 0, 1, };
pdcrt_extender_pila(ctx, 2);
pdcrt_empujar(ctx, pdcrt_obtener_local(ctx, m, 6));
pdcrt_empujar(ctx, pdcrt_obtener_local(ctx, m, 7));
size_t llamar_nargs = pdcrt_expandir_varargs(ctx, proto, 2);
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 3);
return pdcrt_llamarn(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k328, llamar_nargs, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k328(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k328);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 336:25 >> 336:80 */
pdcrt_fijar_local(ctx, m, 4, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 336:25 >> 336:80 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 336:25 >> 336:80 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 336:25 >> 336:80 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 336:25 >> 336:80 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 335:12 >> 337:17 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k331, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k329(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k329);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 133:24 >> 133:25 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k330, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k330(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k330);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 133:24 >> 133:25 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_cli_k331, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k331(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k331);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 334:36 >> 334:49 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 334:36 >> 334:49 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 334:36 >> 334:49 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k332(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k332);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 334:8 >> 334:25 */
pdcrt_fijar_local(ctx, m, 5, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 334:8 >> 334:25 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 334:8 >> 334:25 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 334:8 >> 334:25 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 334:8 >> 334:25 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 333:29 >> 333:42 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 333:29 >> 333:42 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 333:29 >> 333:42 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k333(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k333);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 333:15 >> 333:16 */
pdcrt_fijar_local(ctx, m, 21, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 333:15 >> 333:16 */
pdcrt_fijar_local_nb(ctx, m, 23, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 333:15 >> 333:16 */
pdcrt_fijar_local_nb(ctx, m, 22, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 298:4 >> 340:23 */
pdcrt_fijar_local_nb(ctx, m, 21, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 340:13 >> 340:23 */
pdcrt_fijar_local(ctx, m, 21, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 17)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 340:4 >> 340:23 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 21)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 340:4 >> 340:23 */
pdcrt_fijar_local_nb(ctx, m, 21, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 297:0 >> 341:10 */
pdcrt_fijar_local_nb(ctx, m, 21, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 297:0 >> 341:10 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 21)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 297:0 >> 341:10 */
pdcrt_fijar_local_nb(ctx, m, 21, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k334(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k334);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 60)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 122), pdcrt_obtener_local(ctx, m, 123), "ParaCadaElemento", 16, true, pdc_mpdzibepd_N95_x_N95_cli_k335);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k335(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k335);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 113)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 122), pdcrt_obtener_local(ctx, m, 123), "ParaCadaElementoConÍndice", 26, true, pdc_mpdzibepd_N95_x_N95_cli_k336);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k336(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k336);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 61)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 122), pdcrt_obtener_local(ctx, m, 123), "Todos", 5, true, pdc_mpdzibepd_N95_x_N95_cli_k337);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k337(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k337);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 112)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 122), pdcrt_obtener_local(ctx, m, 123), "EsSubclase", 10, true, pdc_mpdzibepd_N95_x_N95_cli_k338);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k338(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k338);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 62)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 122), pdcrt_obtener_local(ctx, m, 123), "Contiene", 8, true, pdc_mpdzibepd_N95_x_N95_cli_k339);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k339(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k339);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 111)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 122), pdcrt_obtener_local(ctx, m, 123), "EsInstancia", 11, true, pdc_mpdzibepd_N95_x_N95_cli_k340);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k340(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k340);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 63)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 122), pdcrt_obtener_local(ctx, m, 123), "EsImpar", 7, true, pdc_mpdzibepd_N95_x_N95_cli_k341);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k341(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k341);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 110)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 122), pdcrt_obtener_local(ctx, m, 123), "ParaCadaNúmeroConPaso", 22, true, pdc_mpdzibepd_N95_x_N95_cli_k342);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k342(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k342);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 64)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 122), pdcrt_obtener_local(ctx, m, 123), "Escribir", 8, true, pdc_mpdzibepd_N95_x_N95_cli_k343);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k343(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k343);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 109)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 122), pdcrt_obtener_local(ctx, m, 123), "Identidad", 9, true, pdc_mpdzibepd_N95_x_N95_cli_k344);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k344(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k344);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 65)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 122), pdcrt_obtener_local(ctx, m, 123), "Reducir", 7, true, pdc_mpdzibepd_N95_x_N95_cli_k345);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k345(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k345);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 108)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 122), pdcrt_obtener_local(ctx, m, 123), "Mapear", 6, true, pdc_mpdzibepd_N95_x_N95_cli_k346);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k346(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k346);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 66)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 122), pdcrt_obtener_local(ctx, m, 123), "Filtrar", 7, true, pdc_mpdzibepd_N95_x_N95_cli_k347);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k347(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k347);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 107)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 122), pdcrt_obtener_local(ctx, m, 123), "Algún", 6, true, pdc_mpdzibepd_N95_x_N95_cli_k348);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k348(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k348);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 67)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 122), pdcrt_obtener_local(ctx, m, 123), "DígitoAEntero", 14, true, pdc_mpdzibepd_N95_x_N95_cli_k349);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k349(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k349);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 106)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 122), pdcrt_obtener_local(ctx, m, 123), "Elevar", 6, true, pdc_mpdzibepd_N95_x_N95_cli_k350);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k350(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k350);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 68)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 122), pdcrt_obtener_local(ctx, m, 123), "ConvertirAEntero", 16, true, pdc_mpdzibepd_N95_x_N95_cli_k351);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k351(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k351);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 105)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 122), pdcrt_obtener_local(ctx, m, 123), "ConvertirANúmero", 17, true, pdc_mpdzibepd_N95_x_N95_cli_k352);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k352(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k352);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 69)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 122), pdcrt_obtener_local(ctx, m, 123), "EsNúmeroEntero", 15, true, pdc_mpdzibepd_N95_x_N95_cli_k353);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k353(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k353);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 104)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 122), pdcrt_obtener_local(ctx, m, 123), "EsNúmero", 9, true, pdc_mpdzibepd_N95_x_N95_cli_k354);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k354(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k354);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 70)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 122), pdcrt_obtener_local(ctx, m, 123), "Concatenar", 10, true, pdc_mpdzibepd_N95_x_N95_cli_k355);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k355(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k355);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 103)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 122), pdcrt_obtener_local(ctx, m, 123), "ArregloConFinal", 15, true, pdc_mpdzibepd_N95_x_N95_cli_k356);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k356(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k356);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 71)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 122), pdcrt_obtener_local(ctx, m, 123), "Aplicar\'", 8, true, pdc_mpdzibepd_N95_x_N95_cli_k357);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k357(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k357);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 102)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 122), pdcrt_obtener_local(ctx, m, 123), "Aplicar\'i", 9, true, pdc_mpdzibepd_N95_x_N95_cli_k358);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k358(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k358);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 72)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 122), pdcrt_obtener_local(ctx, m, 123), "EnviarMensaje", 13, true, pdc_mpdzibepd_N95_x_N95_cli_k359);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k359(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k359);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 101)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 122), pdcrt_obtener_local(ctx, m, 123), "Resto", 5, true, pdc_mpdzibepd_N95_x_N95_cli_k360);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k360(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k360);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 73)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 122), pdcrt_obtener_local(ctx, m, 123), "Abs", 3, true, pdc_mpdzibepd_N95_x_N95_cli_k361);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k361(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k361);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 100)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 122), pdcrt_obtener_local(ctx, m, 123), "Mod", 3, true, pdc_mpdzibepd_N95_x_N95_cli_k362);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k362(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k362);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 74)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 122), pdcrt_obtener_local(ctx, m, 123), "EsPar", 5, true, pdc_mpdzibepd_N95_x_N95_cli_k363);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k363(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k363);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 99)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 122), pdcrt_obtener_local(ctx, m, 123), "Aplanar", 7, true, pdc_mpdzibepd_N95_x_N95_cli_k364);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k364(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k364);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 75)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 122), pdcrt_obtener_local(ctx, m, 123), "AplanarTodo", 11, true, pdc_mpdzibepd_N95_x_N95_cli_k365);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k365(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k365);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 98)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 122), pdcrt_obtener_local(ctx, m, 123), "PedazoDeArreglo", 15, true, pdc_mpdzibepd_N95_x_N95_cli_k366);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k366(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k366);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 76)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 122), pdcrt_obtener_local(ctx, m, 123), "PrimerElemento", 14, true, pdc_mpdzibepd_N95_x_N95_cli_k367);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k367(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k367);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 97)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 122), pdcrt_obtener_local(ctx, m, 123), "ÚltimoElemento", 15, true, pdc_mpdzibepd_N95_x_N95_cli_k368);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k368(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k368);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 77)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 122), pdcrt_obtener_local(ctx, m, 123), "ÚnicoElemento", 14, true, pdc_mpdzibepd_N95_x_N95_cli_k369);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k369(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k369);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 96)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 122), pdcrt_obtener_local(ctx, m, 123), "EsNulo", 6, true, pdc_mpdzibepd_N95_x_N95_cli_k370);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k370(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k370);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 78)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 122), pdcrt_obtener_local(ctx, m, 123), "Max", 3, true, pdc_mpdzibepd_N95_x_N95_cli_k371);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k371(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k371);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 95)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 122), pdcrt_obtener_local(ctx, m, 123), "Min", 3, true, pdc_mpdzibepd_N95_x_N95_cli_k372);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k372(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k372);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 79)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 122), pdcrt_obtener_local(ctx, m, 123), "NoImplementado", 14, true, pdc_mpdzibepd_N95_x_N95_cli_k373);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k373(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k373);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 94)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 122), pdcrt_obtener_local(ctx, m, 123), "MétodoAbstracto", 16, true, pdc_mpdzibepd_N95_x_N95_cli_k374);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k374(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k374);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 80)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 122), pdcrt_obtener_local(ctx, m, 123), "Inalcanzable", 12, true, pdc_mpdzibepd_N95_x_N95_cli_k375);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k375(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k375);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 93)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 122), pdcrt_obtener_local(ctx, m, 123), "LlamarConEC", 11, true, pdc_mpdzibepd_N95_x_N95_cli_k376);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k376(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k376);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 81)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 122), pdcrt_obtener_local(ctx, m, 123), "ArregloSinElementoEnÍndice", 27, true, pdc_mpdzibepd_N95_x_N95_cli_k377);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k377(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k377);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 92)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 122), pdcrt_obtener_local(ctx, m, 123), "LeerLínea", 10, true, pdc_mpdzibepd_N95_x_N95_cli_k378);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k378(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k378);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 82)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 122), pdcrt_obtener_local(ctx, m, 123), "LeerNúmero", 11, true, pdc_mpdzibepd_N95_x_N95_cli_k379);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k379(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k379);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 91)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 122), pdcrt_obtener_local(ctx, m, 123), "Parcial", 7, true, pdc_mpdzibepd_N95_x_N95_cli_k380);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k380(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k380);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 83)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 122), pdcrt_obtener_local(ctx, m, 123), "MétodoComoFunción", 19, true, pdc_mpdzibepd_N95_x_N95_cli_k381);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k381(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k381);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 90)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 122), pdcrt_obtener_local(ctx, m, 123), "OperadorBinario", 15, true, pdc_mpdzibepd_N95_x_N95_cli_k382);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k382(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k382);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 84)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 122), pdcrt_obtener_local(ctx, m, 123), "ContienePredicado", 17, true, pdc_mpdzibepd_N95_x_N95_cli_k383);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k383(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k383);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 89)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 122), pdcrt_obtener_local(ctx, m, 123), "BuscarPredicado", 15, true, pdc_mpdzibepd_N95_x_N95_cli_k384);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k384(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k384);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 85)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 122), pdcrt_obtener_local(ctx, m, 123), "ParaCadaElementoEnReversa", 25, true, pdc_mpdzibepd_N95_x_N95_cli_k385);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k385(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k385);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 88)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 122), pdcrt_obtener_local(ctx, m, 123), "Diccionario", 11, false, pdc_mpdzibepd_N95_x_N95_cli_k386);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k386(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k386);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 86)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 122), pdcrt_obtener_local(ctx, m, 123), "Resultado", 9, false, pdc_mpdzibepd_N95_x_N95_cli_k387);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k387(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k387);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 87)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 122), pdcrt_obtener_local(ctx, m, 123), "Pila", 4, false, pdc_mpdzibepd_N95_x_N95_cli_k388);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k388(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k388);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 2:23 >> 2:34 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 115)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 122), pdcrt_obtener_local(ctx, m, 123), "ObjetoAdHoc", 11, true, pdc_mpdzibepd_N95_x_N95_cli_k389);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k389(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k389);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 3:22 >> 3:26 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_obtener_local(ctx, m, 116));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 122), pdcrt_obtener_local(ctx, m, 123), "Enum", 4, true, pdc_mpdzibepd_N95_x_N95_cli_k390);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k390(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k390);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 24:14 >> 24:38 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 117)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 122), pdcrt_obtener_local(ctx, m, 123), "ParaCadaElementoSaltando", 24, true, pdc_mpdzibepd_N95_x_N95_cli_k391);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k391(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k391);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 50:9 >> 50:26 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 118)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 122), pdcrt_obtener_local(ctx, m, 123), "OPCIÓN_PROCESADA", 17, false, pdc_mpdzibepd_N95_x_N95_cli_k392);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k392(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k392);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 110:8 >> 110:23 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 119)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 122), pdcrt_obtener_local(ctx, m, 123), "ParsearOpciones", 15, true, pdc_mpdzibepd_N95_x_N95_cli_k393);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k393(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k393);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 214:6 >> 214:13 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 120)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 122), pdcrt_obtener_local(ctx, m, 123), "Opción", 7, false, pdc_mpdzibepd_N95_x_N95_cli_k394);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k394(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k394);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 297:8 >> 297:11 */
pdcrt_fijar_local(ctx, m, 123, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 121)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 122), pdcrt_obtener_local(ctx, m, 123), "CLI", 3, true, pdc_mpdzibepd_N95_x_N95_cli_k395);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_cli_k395(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_cli_k395);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
return pdcrt_exportar(ctx, m, pdcrt_obtener_local(ctx, m, 122), "pdzibepd_N95_x_N95_cli", 22);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/cli.pd" => 1:0 >> 341:10 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
}
PDCRT_DECLARAR_ENTRYPOINT(pdzibepd_N95_x_N95_cli, pdc_mpdzibepd_N95_x_N95_cli_f19)
#ifdef PDCRT_MAIN
#define PDCRT_DEPS(X) \
    X(pdzibepd_N95_x_N95_cli, "pdzibepd_N95_x_N95_cli", 22) \
    X(pdzibepd_N95_x_N95_adhoc, "pdzibepd_N95_x_N95_adhoc", 24) \
    X(pdzibepd_N95_builtins, "pdzibepd_N95_builtins", 21) \
    X(pdzibepd_N95_builtinsImpl, "pdzibepd_N95_builtinsImpl", 25) \
    X(pdzibepd_N95_datos_N95_pila, "pdzibepd_N95_datos_N95_pila", 27) \
    X(pdzibepd_N95_datos_N95_diccionario, "pdzibepd_N95_datos_N95_diccionario", 34) \
    X(pdzibepd_N95_datos_N95_diccionario_N95_hashmap, "pdzibepd_N95_datos_N95_diccionario_N95_hashmap", 46) \
    X(pdzibepd_N95_datos_N95_diccionario_N95_interfaz, "pdzibepd_N95_datos_N95_diccionario_N95_interfaz", 47) \
    X(pdzibepd_N95_datos_N95_diccionario_N95_alist, "pdzibepd_N95_datos_N95_diccionario_N95_alist", 44) \
    X(pdzibepd_N95_datos_N95_resultado, "pdzibepd_N95_datos_N95_resultado", 32) \
    X(pdzibepd_N95_x_N95_enum, "pdzibepd_N95_x_N95_enum", 23)
PDCRT_DECLARAR_DEPS(PDCRT_DEPS)
PDCRT_DECLARAR_MAIN(pdzibepd_N95_x_N95_cli)
#endif
