#define PDCRT_INTERNO
#include "pdcrt/pdcrt.h"
#include "pdcrt/pdcrt_ops.h"
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_f0(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_f1(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_f2(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_f3(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_f4(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_f5(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_f6(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_f7(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_f8(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_f9(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_f10(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_f11(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_f12(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_f13(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_f14(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_f15(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_f16(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_f17(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_f18(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_f19(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_f20(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k0(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k1(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k2(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k3(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k4(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k5(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k6(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k7(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k8(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k9(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k10(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k11(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k12(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k13(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k14(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k15(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k16(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k17(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k18(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k19(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k20(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k21(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k22(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k23(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k24(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k25(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k26(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k27(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k28(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k29(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k30(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k31(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k32(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k33(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k34(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k35(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k36(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k37(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k38(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k39(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k40(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k41(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k42(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k43(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k44(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k45(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k46(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k47(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k48(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k49(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k50(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k51(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k52(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k53(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k54(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k55(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k56(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k57(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k58(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k59(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k60(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k61(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k62(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k63(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k64(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k65(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k66(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k67(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k68(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k69(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k70(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k71(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k72(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k73(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k74(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k75(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k76(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k77(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k78(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k79(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k80(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k81(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k82(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k83(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k84(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k85(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k86(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k87(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k88(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k89(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k90(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k91(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k92(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k93(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k94(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k95(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k96(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k97(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k98(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k99(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k100(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k101(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k102(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k103(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k104(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k105(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k106(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k107(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k108(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k109(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k110(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k111(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k112(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k113(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k114(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k115(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k116(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k117(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k118(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k119(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k120(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k121(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k122(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k123(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k124(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k125(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k126(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k127(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k128(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k129(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k130(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k131(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k132(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k133(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k134(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k135(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k136(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k137(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k138(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k139(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k140(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k141(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k142(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k143(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k144(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k145(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k146(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k147(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k148(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k149(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k150(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k151(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k152(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k153(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k154(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k155(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k156(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k157(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k158(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k159(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k160(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k161(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k162(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k163(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k164(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k165(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k166(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k167(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k168(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k169(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k170(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k171(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k172(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k173(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k174(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k175(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k176(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k177(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k178(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k179(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k180(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k181(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k182(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k183(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k184(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k185(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k186(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k187(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k188(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k189(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k190(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k191(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k192(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k193(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k194(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k195(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k196(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k197(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k198(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k199(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k200(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k201(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k202(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k203(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k204(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k205(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k206(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k207(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k208(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k209(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k210(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k211(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k212(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k213(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k214(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k215(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k216(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k217(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k218(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k219(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k220(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k221(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k222(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k223(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k224(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k225(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k226(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k227(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k228(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k229(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k230(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k231(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k232(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k233(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k234(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k235(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k236(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k237(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k238(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k239(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k240(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k241(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k242(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k243(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k244(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k245(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k246(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k247(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k248(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k249(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k250(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k251(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k252(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k253(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k254(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k255(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k256(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k257(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k258(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k259(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k260(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k261(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k262(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_f0(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 13:0 >> 16:16 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd|13:0|16:16";
PDCRT_ALOJAR_MARCO(ctx, 4, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_x_N95_algebraico_p0 { const pdcrt_params_base base; const pdcrt_param_data params[1]; };
static const struct pdc_params_data_mpdzibepd_N95_x_N95_algebraico_p0 pdc_params = { .base = { .num_params = 0, .tiene_variadic = false, .idc_variadic = 0, }, .params = {} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 14:25 >> 14:37 */
pdcrt_fijar_local(ctx, m, 2, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 14:40 >> 14:41 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_entero(PDCRT_ENTERO_C(1)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 14:25 >> 14:41 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 0);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k69, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 2)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 3)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_f1(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 26:0 >> 36:10 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd|26:0|36:10";
PDCRT_ALOJAR_MARCO(ctx, 10, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_x_N95_algebraico_p1 { const pdcrt_params_base base; const pdcrt_param_data params[1]; };
static const struct pdc_params_data_mpdzibepd_N95_x_N95_algebraico_p1 pdc_params = { .base = { .num_params = 1, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{5}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 26:20 >> 26:21 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 26:20 >> 26:21 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_obtener_local(ctx, m, 5));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 26:20 >> 26:21 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 29:13 >> 29:14 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 30:14 >> 30:31 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 30:40 >> 30:41 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_entero(PDCRT_ENTERO_C(0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 30:43 >> 30:44 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_obtener_local(ctx, m, 3));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 30:31 >> 30:32 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 6);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k72, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_f2(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 45:32 >> 45:45 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd|45:32|45:45";
PDCRT_ALOJAR_MARCO(ctx, 10, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_x_N95_algebraico_p2 { const pdcrt_params_base base; const pdcrt_param_data params[3]; };
static const struct pdc_params_data_mpdzibepd_N95_x_N95_algebraico_p2 pdc_params = { .base = { .num_params = 3, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{6}, {7}, {8}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 45:54 >> 45:57 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 45:54 >> 45:57 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_obtener_local(ctx, m, 8));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 45:54 >> 45:57 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 45:50 >> 45:52 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 45:50 >> 45:52 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_obtener_local(ctx, m, 7));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 45:50 >> 45:52 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 45:47 >> 45:48 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 45:47 >> 45:48 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_obtener_local(ctx, m, 6));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 45:47 >> 45:48 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 46:15 >> 46:18 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_obtener_local(ctx, m, 5));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 46:21 >> 46:22 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_entero(PDCRT_ENTERO_C(0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 46:15 >> 46:22 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 11);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k84, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_f3(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 44:17 >> 44:30 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd|44:17|44:30";
PDCRT_ALOJAR_MARCO(ctx, 9, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_x_N95_algebraico_p3 { const pdcrt_params_base base; const pdcrt_param_data params[1]; };
static const struct pdc_params_data_mpdzibepd_N95_x_N95_algebraico_p3 pdc_params = { .base = { .num_params = 1, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{5}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 44:32 >> 44:37 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 44:32 >> 44:37 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 6));
pdcrt_fijar_local(ctx, m, 4, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 44:32 >> 44:37 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 44:32 >> 44:37 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 4), pdcrt_obtener_local(ctx, m, 5));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 44:32 >> 44:37 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 45:8 >> 45:25 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 2)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 45:27 >> 45:30 */
pdcrt_fijar_local(ctx, m, 7, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 3)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 45:32 >> 45:45 */
do {
static const pdcrt_captura caps[] = {{4}, {0}, {1}};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzibepd_N95_x_N95_algebraico_f2, caps, 3);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 8, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 45:8 >> 45:26 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 7);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k91, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_f4(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 38:0 >> 63:10 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd|38:0|63:10";
PDCRT_ALOJAR_MARCO(ctx, 13, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_x_N95_algebraico_p4 { const pdcrt_params_base base; const pdcrt_param_data params[1]; };
static const struct pdc_params_data_mpdzibepd_N95_x_N95_algebraico_p4 pdc_params = { .base = { .num_params = 1, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{8}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 38:21 >> 38:24 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 38:21 >> 38:24 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 9));
pdcrt_fijar_local(ctx, m, 4, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 38:21 >> 38:24 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 38:21 >> 38:24 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 4), pdcrt_obtener_local(ctx, m, 8));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 38:21 >> 38:24 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 43:14 >> 43:29 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 43:14 >> 43:29 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 8));
pdcrt_fijar_local(ctx, m, 5, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 43:14 >> 43:29 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 43:31 >> 43:48 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 43:31 >> 43:48 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 8));
pdcrt_fijar_local(ctx, m, 6, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 43:31 >> 43:48 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 55:13 >> 55:18 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 39:7 >> 39:10 */
pdcrt_fijar_local(ctx, m, 9, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 4)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 39:13 >> 39:15 */
pdcrt_fijar_local(ctx, m, 10, PDCRT_OBTENER_CONSTANTE(ctx, m, 10));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 39:7 >> 39:15 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 11);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k79, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_f5(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 65:0 >> 67:10 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd|65:0|67:10";
PDCRT_ALOJAR_MARCO(ctx, 8, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_x_N95_algebraico_p5 { const pdcrt_params_base base; const pdcrt_param_data params[2]; };
static const struct pdc_params_data_mpdzibepd_N95_x_N95_algebraico_p5 pdc_params = { .base = { .num_params = 2, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{3}, {4}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 65:37 >> 65:40 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 65:37 >> 65:40 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_obtener_local(ctx, m, 4));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 65:37 >> 65:40 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 65:28 >> 65:35 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 65:28 >> 65:35 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_obtener_local(ctx, m, 3));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 65:28 >> 65:35 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 66:13 >> 66:20 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_obtener_local(ctx, m, 1));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 66:34 >> 66:45 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 66:47 >> 66:50 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_obtener_local(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 66:34 >> 66:46 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 7);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k101, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_f6(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 72:0 >> 75:10 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd|72:0|75:10";
PDCRT_ALOJAR_MARCO(ctx, 9, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_x_N95_algebraico_p6 { const pdcrt_params_base base; const pdcrt_param_data params[2]; };
static const struct pdc_params_data_mpdzibepd_N95_x_N95_algebraico_p6 pdc_params = { .base = { .num_params = 2, .tiene_variadic = true, .idc_variadic = 1, }, .params = {{4}, {5}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 72:32 >> 72:38 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 72:32 >> 72:38 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_obtener_local(ctx, m, 5));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 72:32 >> 72:38 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 72:21 >> 72:27 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 72:21 >> 72:27 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_obtener_local(ctx, m, 4));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 72:21 >> 72:27 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 73:15 >> 73:22 */
pdcrt_fijar_local(ctx, m, 7, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 73:24 >> 73:30 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_obtener_local(ctx, m, 3));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 73:15 >> 73:23 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 7);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k103, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_f7(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 91:48 >> 91:61 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd|91:48|91:61";
PDCRT_ALOJAR_MARCO(ctx, 10, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_x_N95_algebraico_p7 { const pdcrt_params_base base; const pdcrt_param_data params[2]; };
static const struct pdc_params_data_mpdzibepd_N95_x_N95_algebraico_p7 pdc_params = { .base = { .num_params = 2, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{6}, {7}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 91:70 >> 91:71 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 91:70 >> 91:71 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_obtener_local(ctx, m, 7));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 91:70 >> 91:71 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 91:63 >> 91:68 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 91:63 >> 91:68 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_obtener_local(ctx, m, 6));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 91:63 >> 91:68 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 92:21 >> 92:27 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 93:15 >> 93:28 */
pdcrt_fijar_local(ctx, m, 7, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 2)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 93:39 >> 93:44 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_obtener_local(ctx, m, 3));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 93:28 >> 93:29 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 20);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k124, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_f8(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 84:36 >> 84:49 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd|84:36|84:49";
PDCRT_ALOJAR_MARCO(ctx, 15, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_x_N95_algebraico_p8 { const pdcrt_params_base base; const pdcrt_param_data params[1]; };
static const struct pdc_params_data_mpdzibepd_N95_x_N95_algebraico_p8 pdc_params = { .base = { .num_params = 1, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{8}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 84:51 >> 84:54 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 84:51 >> 84:54 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 9));
pdcrt_fijar_local(ctx, m, 7, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 84:51 >> 84:54 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 84:51 >> 84:54 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 7), pdcrt_obtener_local(ctx, m, 8));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 84:51 >> 84:54 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 85:11 >> 85:24 */
pdcrt_fijar_local(ctx, m, 9, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 85:35 >> 85:38 */
pdcrt_fijar_local(ctx, m, 11, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 7)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 85:38 >> 85:39 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 14);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k111, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 11)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_f9(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 105:39 >> 105:52 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd|105:39|105:52";
PDCRT_ALOJAR_MARCO(ctx, 7, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_x_N95_algebraico_p9 { const pdcrt_params_base base; const pdcrt_param_data params[1]; };
static const struct pdc_params_data_mpdzibepd_N95_x_N95_algebraico_p9 pdc_params = { .base = { .num_params = 1, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{3}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 105:54 >> 105:56 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 105:54 >> 105:56 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_obtener_local(ctx, m, 3));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 105:54 >> 105:56 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 106:8 >> 106:23 */
pdcrt_fijar_local(ctx, m, 4, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 106:40 >> 106:55 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 1)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 106:40 >> 106:55 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 7);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k139, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_f10(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 116:39 >> 116:52 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd|116:39|116:52";
PDCRT_ALOJAR_MARCO(ctx, 5, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_x_N95_algebraico_p10 { const pdcrt_params_base base; const pdcrt_param_data params[1]; };
static const struct pdc_params_data_mpdzibepd_N95_x_N95_algebraico_p10 pdc_params = { .base = { .num_params = 1, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{2}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 116:54 >> 116:57 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 116:54 >> 116:57 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_obtener_local(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 116:54 >> 116:57 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 117:8 >> 117:18 */
pdcrt_fijar_local(ctx, m, 3, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 117:36 >> 117:39 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_obtener_local(ctx, m, 1));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 117:18 >> 117:19 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 30);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k146, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 3)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_f11(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 126:52 >> 126:65 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd|126:52|126:65";
PDCRT_ALOJAR_MARCO(ctx, 14, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_x_N95_algebraico_p11 { const pdcrt_params_base base; const pdcrt_param_data params[2]; };
static const struct pdc_params_data_mpdzibepd_N95_x_N95_algebraico_p11 pdc_params = { .base = { .num_params = 2, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{6}, {7}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 126:74 >> 126:75 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 126:74 >> 126:75 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_obtener_local(ctx, m, 7));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 126:74 >> 126:75 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 126:67 >> 126:72 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 126:67 >> 126:72 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_obtener_local(ctx, m, 6));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 126:67 >> 126:72 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 127:16 >> 127:29 */
pdcrt_fijar_local(ctx, m, 7, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 2)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 127:31 >> 127:35 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 127:38 >> 127:46 */
pdcrt_fijar_local(ctx, m, 10, PDCRT_OBTENER_CONSTANTE(ctx, m, 33));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 127:60 >> 127:75 */
pdcrt_fijar_local(ctx, m, 12, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 3)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 127:80 >> 127:81 */
pdcrt_fijar_local_nb(ctx, m, 13, pdcrt_obtener_local(ctx, m, 5));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 127:75 >> 127:76 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 24);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k157, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 12)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 13)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_f12(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 121:54 >> 121:60 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd|121:54|121:60";
PDCRT_ALOJAR_MARCO(ctx, 12, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_x_N95_algebraico_p12 { const pdcrt_params_base base; const pdcrt_param_data params[2]; };
static const struct pdc_params_data_mpdzibepd_N95_x_N95_algebraico_p12 pdc_params = { .base = { .num_params = 2, .tiene_variadic = true, .idc_variadic = 1, }, .params = {{7}, {8}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 121:65 >> 121:72 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 121:65 >> 121:72 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 9));
pdcrt_fijar_local(ctx, m, 5, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 121:65 >> 121:72 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 121:65 >> 121:72 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 5), pdcrt_obtener_local(ctx, m, 8));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 121:65 >> 121:72 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 121:54 >> 121:60 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 121:54 >> 121:60 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_obtener_local(ctx, m, 7));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 121:54 >> 121:60 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 123:21 >> 123:25 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 123:21 >> 123:25 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 7));
pdcrt_fijar_local(ctx, m, 6, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 123:21 >> 123:25 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 122:22 >> 122:29 */
pdcrt_fijar_local(ctx, m, 9, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 5)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 122:29 >> 122:30 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 8);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k149, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_f13(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 132:74 >> 132:80 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd|132:74|132:80";
PDCRT_ALOJAR_MARCO(ctx, 6, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_x_N95_algebraico_p13 { const pdcrt_params_base base; const pdcrt_param_data params[1]; };
static const struct pdc_params_data_mpdzibepd_N95_x_N95_algebraico_p13 pdc_params = { .base = { .num_params = 1, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{2}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 132:74 >> 132:80 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 132:74 >> 132:80 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_obtener_local(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 132:74 >> 132:80 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 133:21 >> 133:23 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_obtener_local(ctx, m, 1));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 133:23 >> 133:24 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 29);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k165, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_f14(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 120:36 >> 120:49 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd|120:36|120:49";
PDCRT_ALOJAR_MARCO(ctx, 13, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_x_N95_algebraico_p14 { const pdcrt_params_base base; const pdcrt_param_data params[1]; };
static const struct pdc_params_data_mpdzibepd_N95_x_N95_algebraico_p14 pdc_params = { .base = { .num_params = 1, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{6}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 120:51 >> 120:54 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 120:51 >> 120:54 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 7));
pdcrt_fijar_local(ctx, m, 5, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 120:51 >> 120:54 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 120:51 >> 120:54 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 5), pdcrt_obtener_local(ctx, m, 6));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 120:51 >> 120:54 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 121:8 >> 121:18 */
pdcrt_fijar_local(ctx, m, 7, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 3)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 121:42 >> 121:45 */
pdcrt_fijar_local(ctx, m, 9, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 5)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 121:45 >> 121:46 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 14);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k148, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_f15(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 138:41 >> 138:47 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd|138:41|138:47";
PDCRT_ALOJAR_MARCO(ctx, 14, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_x_N95_algebraico_p15 { const pdcrt_params_base base; const pdcrt_param_data params[1]; };
static const struct pdc_params_data_mpdzibepd_N95_x_N95_algebraico_p15 pdc_params = { .base = { .num_params = 1, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{7}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 138:41 >> 138:47 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 138:41 >> 138:47 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_obtener_local(ctx, m, 7));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 138:41 >> 138:47 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 142:21 >> 142:22 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 139:18 >> 139:24 */
pdcrt_fijar_local(ctx, m, 9, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 1)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 139:35 >> 139:37 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_obtener_local(ctx, m, 5));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 139:37 >> 139:38 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 29);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k169, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 11)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_f16(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 137:31 >> 137:44 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd|137:31|137:44";
PDCRT_ALOJAR_MARCO(ctx, 10, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_x_N95_algebraico_p16 { const pdcrt_params_base base; const pdcrt_param_data params[2]; };
static const struct pdc_params_data_mpdzibepd_N95_x_N95_algebraico_p16 pdc_params = { .base = { .num_params = 2, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{6}, {7}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 137:53 >> 137:59 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 137:53 >> 137:59 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 8));
pdcrt_fijar_local(ctx, m, 5, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 137:53 >> 137:59 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 137:53 >> 137:59 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 5), pdcrt_obtener_local(ctx, m, 7));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 137:53 >> 137:59 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 137:46 >> 137:51 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 137:46 >> 137:51 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 7));
pdcrt_fijar_local(ctx, m, 4, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 137:46 >> 137:51 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 137:46 >> 137:51 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 4), pdcrt_obtener_local(ctx, m, 6));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 137:46 >> 137:51 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 138:8 >> 138:18 */
pdcrt_fijar_local(ctx, m, 7, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 3)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 138:34 >> 138:39 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 4)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 138:41 >> 138:47 */
do {
static const pdcrt_captura caps[] = {{0}, {5}, {4}, {2}, {1}};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzibepd_N95_x_N95_algebraico_f15, caps, 5);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 9, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 138:18 >> 138:19 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 36);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k181, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_f17(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 150:61 >> 150:68 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd|150:61|150:68";
PDCRT_ALOJAR_MARCO(ctx, 8, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_x_N95_algebraico_p17 { const pdcrt_params_base base; const pdcrt_param_data params[1]; };
static const struct pdc_params_data_mpdzibepd_N95_x_N95_algebraico_p17 pdc_params = { .base = { .num_params = 1, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{3}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 150:70 >> 150:75 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 150:70 >> 150:75 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_obtener_local(ctx, m, 3));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 150:70 >> 150:75 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 151:22 >> 151:35 */
pdcrt_fijar_local(ctx, m, 5, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 151:37 >> 151:39 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 1)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 151:41 >> 151:46 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_obtener_local(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 151:22 >> 151:36 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 7);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k185, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_f18(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 148:43 >> 148:49 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd|148:43|148:49";
PDCRT_ALOJAR_MARCO(ctx, 15, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_x_N95_algebraico_p18 { const pdcrt_params_base base; const pdcrt_param_data params[1]; };
static const struct pdc_params_data_mpdzibepd_N95_x_N95_algebraico_p18 pdc_params = { .base = { .num_params = 1, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{7}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 148:43 >> 148:49 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 148:43 >> 148:49 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 8));
pdcrt_fijar_local(ctx, m, 5, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 148:43 >> 148:49 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 148:43 >> 148:49 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 5), pdcrt_obtener_local(ctx, m, 7));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 148:43 >> 148:49 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 149:17 >> 149:23 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 150:23 >> 150:29 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 1)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 150:32 >> 150:45 */
pdcrt_fijar_local(ctx, m, 10, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 2)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 150:50 >> 150:52 */
pdcrt_fijar_local(ctx, m, 12, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 5)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 150:52 >> 150:53 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 29);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k183, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 12)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_f19(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 77:0 >> 157:10 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd|77:0|157:10";
PDCRT_ALOJAR_MARCO(ctx, 22, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_x_N95_algebraico_p19 { const pdcrt_params_base base; const pdcrt_param_data params[2]; };
static const struct pdc_params_data_mpdzibepd_N95_x_N95_algebraico_p19 pdc_params = { .base = { .num_params = 2, .tiene_variadic = true, .idc_variadic = 1, }, .params = {{17}, {18}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 77:35 >> 77:47 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 77:35 >> 77:47 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_obtener_local(ctx, m, 18));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 77:35 >> 77:47 */
pdcrt_fijar_local_nb(ctx, m, 18, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 77:24 >> 77:30 */
pdcrt_fijar_local_nb(ctx, m, 18, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 77:24 >> 77:30 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 18));
pdcrt_fijar_local(ctx, m, 10, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 77:24 >> 77:30 */
pdcrt_fijar_local_nb(ctx, m, 18, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 77:24 >> 77:30 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 10), pdcrt_obtener_local(ctx, m, 17));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 77:24 >> 77:30 */
pdcrt_fijar_local_nb(ctx, m, 17, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 78:14 >> 78:27 */
pdcrt_fijar_local_nb(ctx, m, 17, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 78:14 >> 78:27 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 17));
pdcrt_fijar_local(ctx, m, 12, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 78:14 >> 78:27 */
pdcrt_fijar_local_nb(ctx, m, 17, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 78:29 >> 78:44 */
pdcrt_fijar_local_nb(ctx, m, 17, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 78:29 >> 78:44 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 17));
pdcrt_fijar_local(ctx, m, 13, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 78:29 >> 78:44 */
pdcrt_fijar_local_nb(ctx, m, 17, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 78:46 >> 78:59 */
pdcrt_fijar_local_nb(ctx, m, 17, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 78:46 >> 78:59 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 17));
pdcrt_fijar_local(ctx, m, 14, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 78:46 >> 78:59 */
pdcrt_fijar_local_nb(ctx, m, 17, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 78:61 >> 78:74 */
pdcrt_fijar_local_nb(ctx, m, 17, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 78:61 >> 78:74 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 17));
pdcrt_fijar_local(ctx, m, 15, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 78:61 >> 78:74 */
pdcrt_fijar_local_nb(ctx, m, 17, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 109:10 >> 109:20 */
pdcrt_fijar_local_nb(ctx, m, 17, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 109:10 >> 109:20 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 17));
pdcrt_fijar_local(ctx, m, 16, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 109:10 >> 109:20 */
pdcrt_fijar_local_nb(ctx, m, 17, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 79:26 >> 79:37 */
pdcrt_fijar_local(ctx, m, 18, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 1)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 79:37 >> 79:38 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 17);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k107, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 18)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_f20(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd|1:0|157:10";
PDCRT_ALOJAR_MARCO(ctx, 140, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_x_N95_algebraico_p20 { const pdcrt_params_base base; const pdcrt_param_data params[1]; };
static const struct pdc_params_data_mpdzibepd_N95_x_N95_algebraico_p20 pdc_params = { .base = { .num_params = 0, .tiene_variadic = false, .idc_variadic = 0, }, .params = {} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
PDCRT_DEFINE_RAICES(2);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_arreglo *constantes = pdcrt_crear_arreglo_vacio(ctx, PDCRT_GC(), 42LLU);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
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
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "_atr~t", 6));
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
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "áéíóúüñ", 14));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "ÁÉÍÓÚÜÑ", 14));
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
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "Alternativa", 11));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "nombre", 6));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "campos", 6));
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
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "TipoAlgebraico ~t: alternativa ~t duplicada", 43));
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
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "Algebraico", 10));
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
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "_tipo", 5));
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
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "_crear", 6));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "fijar__tipo", 11));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "fijar_", 6));
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
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "es", 2));
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
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "~t#~t no contiene el campo ~t", 29));
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
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "(~t#~t: ~t)", 11));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), ", ", 2));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
PDCRT_FIJAR_CONSTANTES(ctx, m, constantes);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 135));
pdcrt_fijar_local(ctx, m, 62, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 135));
pdcrt_fijar_local(ctx, m, 64, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 135));
pdcrt_fijar_local(ctx, m, 66, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 135));
pdcrt_fijar_local(ctx, m, 68, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 135));
pdcrt_fijar_local(ctx, m, 70, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 135));
pdcrt_fijar_local(ctx, m, 72, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 135));
pdcrt_fijar_local(ctx, m, 74, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 135));
pdcrt_fijar_local(ctx, m, 76, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 135));
pdcrt_fijar_local(ctx, m, 78, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 135));
pdcrt_fijar_local(ctx, m, 80, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 135));
pdcrt_fijar_local(ctx, m, 82, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 135));
pdcrt_fijar_local(ctx, m, 84, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 135));
pdcrt_fijar_local(ctx, m, 86, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 135));
pdcrt_fijar_local(ctx, m, 88, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 135));
pdcrt_fijar_local(ctx, m, 90, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 135));
pdcrt_fijar_local(ctx, m, 92, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 135));
pdcrt_fijar_local(ctx, m, 94, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 135));
pdcrt_fijar_local(ctx, m, 96, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 135));
pdcrt_fijar_local(ctx, m, 98, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 135));
pdcrt_fijar_local(ctx, m, 100, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 135));
pdcrt_fijar_local(ctx, m, 102, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 135));
pdcrt_fijar_local(ctx, m, 104, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 135));
pdcrt_fijar_local(ctx, m, 106, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 135));
pdcrt_fijar_local(ctx, m, 108, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 135));
pdcrt_fijar_local(ctx, m, 110, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 135));
pdcrt_fijar_local(ctx, m, 112, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 135));
pdcrt_fijar_local(ctx, m, 114, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 135));
pdcrt_fijar_local(ctx, m, 115, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 135));
pdcrt_fijar_local(ctx, m, 113, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 135));
pdcrt_fijar_local(ctx, m, 111, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 135));
pdcrt_fijar_local(ctx, m, 109, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 135));
pdcrt_fijar_local(ctx, m, 107, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 135));
pdcrt_fijar_local(ctx, m, 105, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 135));
pdcrt_fijar_local(ctx, m, 103, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 135));
pdcrt_fijar_local(ctx, m, 101, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 135));
pdcrt_fijar_local(ctx, m, 99, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 135));
pdcrt_fijar_local(ctx, m, 97, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 135));
pdcrt_fijar_local(ctx, m, 95, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 135));
pdcrt_fijar_local(ctx, m, 93, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 135));
pdcrt_fijar_local(ctx, m, 91, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 89, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 135));
pdcrt_fijar_local(ctx, m, 87, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 135));
pdcrt_fijar_local(ctx, m, 85, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 135));
pdcrt_fijar_local(ctx, m, 83, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 135));
pdcrt_fijar_local(ctx, m, 81, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 135));
pdcrt_fijar_local(ctx, m, 79, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 135));
pdcrt_fijar_local(ctx, m, 77, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 135));
pdcrt_fijar_local(ctx, m, 75, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 135));
pdcrt_fijar_local(ctx, m, 73, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 135));
pdcrt_fijar_local(ctx, m, 71, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 135));
pdcrt_fijar_local(ctx, m, 69, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 135));
pdcrt_fijar_local(ctx, m, 67, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 135));
pdcrt_fijar_local(ctx, m, 65, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 135));
pdcrt_fijar_local(ctx, m, 63, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 135));
pdcrt_fijar_local(ctx, m, 61, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 2:0 >> 2:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 135));
pdcrt_fijar_local(ctx, m, 116, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 3:0 >> 3:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 3:0 >> 3:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 135));
pdcrt_fijar_local(ctx, m, 117, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 3:0 >> 3:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 4:0 >> 4:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 4:0 >> 4:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 135));
pdcrt_fijar_local(ctx, m, 118, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 4:0 >> 4:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 5:0 >> 5:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 5:0 >> 5:8 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 6:0 >> 6:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 6:0 >> 6:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 135));
pdcrt_fijar_local(ctx, m, 121, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 6:0 >> 6:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 8:0 >> 8:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 8:0 >> 8:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 135));
pdcrt_fijar_local(ctx, m, 122, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 8:0 >> 8:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 11:9 >> 11:21 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 11:9 >> 11:21 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 135));
pdcrt_fijar_local(ctx, m, 123, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 11:9 >> 11:21 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 13:14 >> 13:29 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 13:14 >> 13:29 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 135));
pdcrt_fijar_local(ctx, m, 124, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 13:14 >> 13:29 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 18:10 >> 18:32 */
pdcrt_fijar_local_nb(ctx, m, 125, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 18:34 >> 18:56 */
pdcrt_fijar_local_nb(ctx, m, 126, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 22:9 >> 22:26 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 22:9 >> 22:26 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 135));
pdcrt_fijar_local(ctx, m, 127, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 22:9 >> 22:26 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 22:28 >> 22:45 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 22:28 >> 22:45 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 135));
pdcrt_fijar_local(ctx, m, 128, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 22:28 >> 22:45 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 26:8 >> 26:18 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 26:8 >> 26:18 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 135));
pdcrt_fijar_local(ctx, m, 129, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 26:8 >> 26:18 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 38:8 >> 38:19 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 38:8 >> 38:19 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 135));
pdcrt_fijar_local(ctx, m, 130, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 38:8 >> 38:19 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 65:8 >> 65:26 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 65:8 >> 65:26 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 135));
pdcrt_fijar_local(ctx, m, 131, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 65:8 >> 65:26 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 69:9 >> 69:24 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 69:9 >> 69:24 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 135));
pdcrt_fijar_local(ctx, m, 132, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 69:9 >> 69:24 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 72:8 >> 72:19 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 72:8 >> 72:19 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 135));
pdcrt_fijar_local(ctx, m, 133, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 72:8 >> 72:19 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 77:8 >> 77:22 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 77:8 >> 77:22 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 135));
pdcrt_fijar_local(ctx, m, 134, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 77:8 >> 77:22 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
return pdcrt_importar(ctx, m, "pdzibepd_N95_builtins", 21, pdc_mpdzibepd_N95_x_N95_algebraico_k0);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k0(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 135, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 135), "ParaCadaElemento", 16, pdc_mpdzibepd_N95_x_N95_algebraico_k1);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k1(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 61), pdcrt_obtener_local(ctx, m, 136));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 135), "Todos", 5, pdc_mpdzibepd_N95_x_N95_algebraico_k2);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k2(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k2);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 62), pdcrt_obtener_local(ctx, m, 136));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 135), "Contiene", 8, pdc_mpdzibepd_N95_x_N95_algebraico_k3);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k3(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k3);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 63), pdcrt_obtener_local(ctx, m, 136));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 135), "EsImpar", 7, pdc_mpdzibepd_N95_x_N95_algebraico_k4);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k4(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k4);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 64), pdcrt_obtener_local(ctx, m, 136));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 135), "Escribir", 8, pdc_mpdzibepd_N95_x_N95_algebraico_k5);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k5(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k5);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 65), pdcrt_obtener_local(ctx, m, 136));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 135), "Reducir", 7, pdc_mpdzibepd_N95_x_N95_algebraico_k6);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k6(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k6);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 66), pdcrt_obtener_local(ctx, m, 136));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 135), "Filtrar", 7, pdc_mpdzibepd_N95_x_N95_algebraico_k7);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k7(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k7);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 67), pdcrt_obtener_local(ctx, m, 136));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 135), "DígitoAEntero", 14, pdc_mpdzibepd_N95_x_N95_algebraico_k8);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k8(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k8);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 68), pdcrt_obtener_local(ctx, m, 136));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 135), "ConvertirAEntero", 16, pdc_mpdzibepd_N95_x_N95_algebraico_k9);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k9(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k9);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 69), pdcrt_obtener_local(ctx, m, 136));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 135), "EsNúmeroEntero", 15, pdc_mpdzibepd_N95_x_N95_algebraico_k10);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k10(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k10);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 70), pdcrt_obtener_local(ctx, m, 136));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 135), "Concatenar", 10, pdc_mpdzibepd_N95_x_N95_algebraico_k11);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k11(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k11);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 71), pdcrt_obtener_local(ctx, m, 136));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 135), "Aplicar\'", 8, pdc_mpdzibepd_N95_x_N95_algebraico_k12);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k12(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k12);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 72), pdcrt_obtener_local(ctx, m, 136));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 135), "EnviarMensaje", 13, pdc_mpdzibepd_N95_x_N95_algebraico_k13);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k13(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k13);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 73), pdcrt_obtener_local(ctx, m, 136));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 135), "Abs", 3, pdc_mpdzibepd_N95_x_N95_algebraico_k14);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k14(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k14);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 74), pdcrt_obtener_local(ctx, m, 136));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 135), "EsPar", 5, pdc_mpdzibepd_N95_x_N95_algebraico_k15);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k15(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k15);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 75), pdcrt_obtener_local(ctx, m, 136));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 135), "AplanarTodo", 11, pdc_mpdzibepd_N95_x_N95_algebraico_k16);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k16(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k16);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 76), pdcrt_obtener_local(ctx, m, 136));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 135), "PrimerElemento", 14, pdc_mpdzibepd_N95_x_N95_algebraico_k17);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k17(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k17);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 77), pdcrt_obtener_local(ctx, m, 136));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 135), "ÚnicoElemento", 14, pdc_mpdzibepd_N95_x_N95_algebraico_k18);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k18(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k18);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 78), pdcrt_obtener_local(ctx, m, 136));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 135), "Max", 3, pdc_mpdzibepd_N95_x_N95_algebraico_k19);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k19(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k19);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 79), pdcrt_obtener_local(ctx, m, 136));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 135), "NoImplementado", 14, pdc_mpdzibepd_N95_x_N95_algebraico_k20);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k20(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k20);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 80), pdcrt_obtener_local(ctx, m, 136));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 135), "Inalcanzable", 12, pdc_mpdzibepd_N95_x_N95_algebraico_k21);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k21(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k21);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 81), pdcrt_obtener_local(ctx, m, 136));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 135), "ArregloSinElementoEnÍndice", 27, pdc_mpdzibepd_N95_x_N95_algebraico_k22);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k22(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k22);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 82), pdcrt_obtener_local(ctx, m, 136));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 135), "LeerNúmero", 11, pdc_mpdzibepd_N95_x_N95_algebraico_k23);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k23(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k23);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 83), pdcrt_obtener_local(ctx, m, 136));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 135), "MétodoComoFunción", 19, pdc_mpdzibepd_N95_x_N95_algebraico_k24);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k24(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k24);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 84), pdcrt_obtener_local(ctx, m, 136));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 135), "ContienePredicado", 17, pdc_mpdzibepd_N95_x_N95_algebraico_k25);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k25(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k25);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 85), pdcrt_obtener_local(ctx, m, 136));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 135), "ParaCadaElementoEnReversa", 25, pdc_mpdzibepd_N95_x_N95_algebraico_k26);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k26(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k26);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 86), pdcrt_obtener_local(ctx, m, 136));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 135), "Resultado", 9, pdc_mpdzibepd_N95_x_N95_algebraico_k27);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k27(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k27);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 87), pdcrt_obtener_local(ctx, m, 136));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 135), "Pila", 4, pdc_mpdzibepd_N95_x_N95_algebraico_k28);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k28(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k28);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 88), pdcrt_obtener_local(ctx, m, 136));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 135), "Diccionario", 11, pdc_mpdzibepd_N95_x_N95_algebraico_k29);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k29(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k29);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 89, pdcrt_obtener_local(ctx, m, 136));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 135), "BuscarPredicado", 15, pdc_mpdzibepd_N95_x_N95_algebraico_k30);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k30(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k30);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 90), pdcrt_obtener_local(ctx, m, 136));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 135), "OperadorBinario", 15, pdc_mpdzibepd_N95_x_N95_algebraico_k31);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k31(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k31);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 91), pdcrt_obtener_local(ctx, m, 136));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 135), "Parcial", 7, pdc_mpdzibepd_N95_x_N95_algebraico_k32);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k32(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k32);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 92), pdcrt_obtener_local(ctx, m, 136));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 135), "LeerLínea", 10, pdc_mpdzibepd_N95_x_N95_algebraico_k33);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k33(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k33);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 93), pdcrt_obtener_local(ctx, m, 136));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 135), "LlamarConEC", 11, pdc_mpdzibepd_N95_x_N95_algebraico_k34);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k34(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k34);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 94), pdcrt_obtener_local(ctx, m, 136));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 135), "MétodoAbstracto", 16, pdc_mpdzibepd_N95_x_N95_algebraico_k35);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k35(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k35);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 95), pdcrt_obtener_local(ctx, m, 136));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 135), "Min", 3, pdc_mpdzibepd_N95_x_N95_algebraico_k36);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k36(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k36);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 96), pdcrt_obtener_local(ctx, m, 136));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 135), "EsNulo", 6, pdc_mpdzibepd_N95_x_N95_algebraico_k37);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k37(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k37);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 97), pdcrt_obtener_local(ctx, m, 136));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 135), "ÚltimoElemento", 15, pdc_mpdzibepd_N95_x_N95_algebraico_k38);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k38(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k38);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 98), pdcrt_obtener_local(ctx, m, 136));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 135), "PedazoDeArreglo", 15, pdc_mpdzibepd_N95_x_N95_algebraico_k39);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k39(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k39);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 99), pdcrt_obtener_local(ctx, m, 136));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 135), "Aplanar", 7, pdc_mpdzibepd_N95_x_N95_algebraico_k40);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k40(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k40);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 100), pdcrt_obtener_local(ctx, m, 136));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 135), "Mod", 3, pdc_mpdzibepd_N95_x_N95_algebraico_k41);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k41(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k41);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 101), pdcrt_obtener_local(ctx, m, 136));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 135), "Resto", 5, pdc_mpdzibepd_N95_x_N95_algebraico_k42);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k42(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k42);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 102), pdcrt_obtener_local(ctx, m, 136));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 135), "Aplicar\'i", 9, pdc_mpdzibepd_N95_x_N95_algebraico_k43);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k43(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k43);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 103), pdcrt_obtener_local(ctx, m, 136));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 135), "ArregloConFinal", 15, pdc_mpdzibepd_N95_x_N95_algebraico_k44);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k44(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k44);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 104), pdcrt_obtener_local(ctx, m, 136));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 135), "EsNúmero", 9, pdc_mpdzibepd_N95_x_N95_algebraico_k45);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k45(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k45);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 105), pdcrt_obtener_local(ctx, m, 136));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 135), "ConvertirANúmero", 17, pdc_mpdzibepd_N95_x_N95_algebraico_k46);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k46(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k46);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 106), pdcrt_obtener_local(ctx, m, 136));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 135), "Elevar", 6, pdc_mpdzibepd_N95_x_N95_algebraico_k47);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k47(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k47);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 107), pdcrt_obtener_local(ctx, m, 136));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 135), "Algún", 6, pdc_mpdzibepd_N95_x_N95_algebraico_k48);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k48(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k48);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 136));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 135), "Mapear", 6, pdc_mpdzibepd_N95_x_N95_algebraico_k49);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k49(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k49);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 109), pdcrt_obtener_local(ctx, m, 136));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 135), "Identidad", 9, pdc_mpdzibepd_N95_x_N95_algebraico_k50);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k50(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k50);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 110), pdcrt_obtener_local(ctx, m, 136));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 135), "ParaCadaNúmeroConPaso", 22, pdc_mpdzibepd_N95_x_N95_algebraico_k51);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k51(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k51);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 111), pdcrt_obtener_local(ctx, m, 136));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 135), "EsInstancia", 11, pdc_mpdzibepd_N95_x_N95_algebraico_k52);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k52(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k52);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 112), pdcrt_obtener_local(ctx, m, 136));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 135), "EsSubclase", 10, pdc_mpdzibepd_N95_x_N95_algebraico_k53);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k53(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k53);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 113), pdcrt_obtener_local(ctx, m, 136));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 135), "ParaCadaElementoConÍndice", 26, pdc_mpdzibepd_N95_x_N95_algebraico_k54);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k54(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k54);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 114), pdcrt_obtener_local(ctx, m, 136));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 135), "ParaCadaNúmero", 15, pdc_mpdzibepd_N95_x_N95_algebraico_k55);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k55(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k55);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 115), pdcrt_obtener_local(ctx, m, 136));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 2:0 >> 2:8 */
return pdcrt_importar(ctx, m, "pdzibepd_N95_datos_N95_diccionario", 34, pdc_mpdzibepd_N95_x_N95_algebraico_k56);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k56(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k56);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 135, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 2:33 >> 2:44 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 135), "Diccionario", 11, pdc_mpdzibepd_N95_x_N95_algebraico_k57);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k57(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k57);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 2:33 >> 2:44 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 2:33 >> 2:44 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 116), pdcrt_obtener_local(ctx, m, 136));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 2:33 >> 2:44 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 3:0 >> 3:8 */
return pdcrt_importar(ctx, m, "pdzibepd_N95_utilidades_N95_arreglo", 35, pdc_mpdzibepd_N95_x_N95_algebraico_k58);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k58(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k58);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 3:0 >> 3:8 */
pdcrt_fijar_local(ctx, m, 135, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 3:34 >> 3:41 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 135), "Únicos", 7, pdc_mpdzibepd_N95_x_N95_algebraico_k59);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k59(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k59);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 3:34 >> 3:41 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 3:34 >> 3:41 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 117), pdcrt_obtener_local(ctx, m, 136));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 3:34 >> 3:41 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 3:0 >> 3:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 4:0 >> 4:8 */
return pdcrt_importar(ctx, m, "pdzibepd_N95_utilidades_N95_texto", 33, pdc_mpdzibepd_N95_x_N95_algebraico_k60);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k60(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k60);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 4:0 >> 4:8 */
pdcrt_fijar_local(ctx, m, 135, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 4:32 >> 4:36 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 135), "Unir", 4, pdc_mpdzibepd_N95_x_N95_algebraico_k61);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k61(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k61);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 4:32 >> 4:36 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 4:32 >> 4:36 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 118), pdcrt_obtener_local(ctx, m, 136));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 4:32 >> 4:36 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 4:0 >> 4:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 5:0 >> 5:8 */
return pdcrt_importar(ctx, m, "pdzibepd_N95_utilidades_N95_texto_N95_ascii", 43, pdc_mpdzibepd_N95_x_N95_algebraico_k62);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k62(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k62);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 5:0 >> 5:8 */
pdcrt_fijar_local(ctx, m, 135, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 5:38 >> 5:64 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 135), "ALFABETO_ASCII_MAYÚSCULAS", 26, pdc_mpdzibepd_N95_x_N95_algebraico_k63);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k63(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k63);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 5:38 >> 5:64 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 5:38 >> 5:64 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_obtener_local(ctx, m, 136));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 5:38 >> 5:64 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 5:66 >> 5:92 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 135), "ALFABETO_ASCII_MINÚSCULAS", 26, pdc_mpdzibepd_N95_x_N95_algebraico_k64);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k64(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k64);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 5:66 >> 5:92 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 5:66 >> 5:92 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_obtener_local(ctx, m, 136));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 5:66 >> 5:92 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 5:0 >> 5:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 6:0 >> 6:8 */
return pdcrt_importar(ctx, m, "pdzibepd_N95_x_N95_utf8", 23, pdc_mpdzibepd_N95_x_N95_algebraico_k65);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k65(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k65);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 6:0 >> 6:8 */
pdcrt_fijar_local(ctx, m, 135, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 6:22 >> 6:39 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 135), "ParaCadaCodepoint", 17, pdc_mpdzibepd_N95_x_N95_algebraico_k66);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k66(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k66);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 6:22 >> 6:39 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 6:22 >> 6:39 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 121), pdcrt_obtener_local(ctx, m, 136));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 6:22 >> 6:39 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 6:0 >> 6:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 8:0 >> 8:8 */
return pdcrt_importar(ctx, m, "pdzibepd_N95_x_N95_datos", 24, pdc_mpdzibepd_N95_x_N95_algebraico_k67);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k67(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k67);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 8:0 >> 8:8 */
pdcrt_fijar_local(ctx, m, 135, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 8:23 >> 8:34 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 135), "TipoDeDatos", 11, pdc_mpdzibepd_N95_x_N95_algebraico_k68);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k68(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k68);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 8:23 >> 8:34 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 8:23 >> 8:34 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 122), pdcrt_obtener_local(ctx, m, 136));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 8:23 >> 8:34 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 8:0 >> 8:8 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 12:21 >> 12:22 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_entero(PDCRT_ENTERO_C(0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 12:6 >> 12:18 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 123), pdcrt_obtener_local(ctx, m, 135));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 12:6 >> 12:18 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 13:0 >> 16:16 */
do {
static const pdcrt_captura caps[] = {{123}};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzibepd_N95_x_N95_algebraico_f0, caps, 1);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 135, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 13:14 >> 13:29 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 124), pdcrt_obtener_local(ctx, m, 135));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 13:14 >> 13:29 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 19:31 >> 19:47 */
pdcrt_fijar_local(ctx, m, 135, PDCRT_OBTENER_CONSTANTE(ctx, m, 3));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 19:6 >> 19:28 */
pdcrt_fijar_local_nb(ctx, m, 125, pdcrt_obtener_local(ctx, m, 135));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 19:6 >> 19:28 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 20:31 >> 20:47 */
pdcrt_fijar_local(ctx, m, 135, PDCRT_OBTENER_CONSTANTE(ctx, m, 4));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 20:6 >> 20:28 */
pdcrt_fijar_local_nb(ctx, m, 126, pdcrt_obtener_local(ctx, m, 135));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 20:6 >> 20:28 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 23:26 >> 23:52 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_obtener_local(ctx, m, 120));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 23:65 >> 23:87 */
pdcrt_fijar_local_nb(ctx, m, 137, pdcrt_obtener_local(ctx, m, 125));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 23:52 >> 23:53 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 5);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k70, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 136)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 137)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k69(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k69);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 14:25 >> 14:41 */
pdcrt_fijar_local(ctx, m, 1, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 14:25 >> 14:41 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 14:25 >> 14:41 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 14:10 >> 14:22 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 0), pdcrt_obtener_local(ctx, m, 1));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 14:10 >> 14:22 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 15:13 >> 15:21 */
pdcrt_fijar_local(ctx, m, 2, PDCRT_OBTENER_CONSTANTE(ctx, m, 1));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 15:33 >> 15:45 */
pdcrt_fijar_local(ctx, m, 3, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 15:21 >> 15:22 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 2);
return pdcrt_llamar1(ctx, m->k.marco, m->k.kf, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 2)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 3)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 15:21 >> 15:22 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 15:21 >> 15:22 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 13:0 >> 16:16 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 13:0 >> 16:16 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 2)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 13:0 >> 16:16 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k70(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k70);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 23:52 >> 23:53 */
pdcrt_fijar_local(ctx, m, 135, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 23:52 >> 23:53 */
pdcrt_fijar_local_nb(ctx, m, 137, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 23:52 >> 23:53 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 23:6 >> 23:23 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 127), pdcrt_obtener_local(ctx, m, 135));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 23:6 >> 23:23 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 24:26 >> 24:52 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_obtener_local(ctx, m, 119));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 24:65 >> 24:87 */
pdcrt_fijar_local_nb(ctx, m, 137, pdcrt_obtener_local(ctx, m, 126));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 24:52 >> 24:53 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 5);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k71, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 136)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 137)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k71(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k71);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 24:52 >> 24:53 */
pdcrt_fijar_local(ctx, m, 135, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 24:52 >> 24:53 */
pdcrt_fijar_local_nb(ctx, m, 137, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 24:52 >> 24:53 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 24:6 >> 24:23 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 128), pdcrt_obtener_local(ctx, m, 135));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 24:6 >> 24:23 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 26:0 >> 36:10 */
do {
static const pdcrt_captura caps[] = {{127}, {97}, {128}};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzibepd_N95_x_N95_algebraico_f1, caps, 3);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 135, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 26:8 >> 26:18 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 129), pdcrt_obtener_local(ctx, m, 135));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 26:8 >> 26:18 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 38:0 >> 63:10 */
do {
static const pdcrt_captura caps[] = {{94}, {121}, {97}, {129}};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzibepd_N95_x_N95_algebraico_f4, caps, 4);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 135, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 38:8 >> 38:19 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 130), pdcrt_obtener_local(ctx, m, 135));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 38:8 >> 38:19 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 65:0 >> 67:10 */
do {
static const pdcrt_captura caps[] = {{130}};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzibepd_N95_x_N95_algebraico_f5, caps, 1);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 135, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 65:8 >> 65:26 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 131), pdcrt_obtener_local(ctx, m, 135));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 65:8 >> 65:26 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 70:24 >> 70:35 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 122)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 70:37 >> 70:50 */
pdcrt_fijar_local(ctx, m, 137, PDCRT_OBTENER_CONSTANTE(ctx, m, 13));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 70:52 >> 70:60 */
pdcrt_fijar_local(ctx, m, 138, PDCRT_OBTENER_CONSTANTE(ctx, m, 14));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 70:62 >> 70:70 */
pdcrt_fijar_local(ctx, m, 139, PDCRT_OBTENER_CONSTANTE(ctx, m, 15));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 70:24 >> 70:36 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 7);
return pdcrt_llamar3(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k102, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 136)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 137)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 138)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 139)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k72(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k72);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 30:31 >> 30:32 */
pdcrt_fijar_local(ctx, m, 5, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 30:31 >> 30:32 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 30:31 >> 30:32 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 30:31 >> 30:32 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 30:10 >> 30:11 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_obtener_local(ctx, m, 5));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 30:10 >> 30:11 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 31:7 >> 31:13 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 1)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 31:15 >> 31:16 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_obtener_local(ctx, m, 4));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 31:7 >> 31:14 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 7);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k73, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k73(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k73);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 31:7 >> 31:14 */
pdcrt_fijar_local(ctx, m, 5, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 31:7 >> 31:14 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 31:7 >> 31:14 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 31:4 >> 35:9 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 5);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 31:4 >> 35:9 */
pdcrt_obj csaltar_obj = pdcrt_obtener_local(ctx, m, 6);
if(csaltar_obj.recv != &pdcrt_recv_booleano) pdcrt_error(ctx, "Se esperaba un objeto de tipo Boole");
if(csaltar_obj.bval)
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k76, PDCRT_XMM_NULO());
else
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k74, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k74(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k74);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 31:4 >> 35:9 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 31:4 >> 35:9 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 32:17 >> 32:18 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_obtener_local(ctx, m, 3));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 32:8 >> 32:18 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 32:8 >> 32:18 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 31:4 >> 35:9 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k78, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k75(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k75);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k76, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k76(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k76);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 34:17 >> 34:34 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 2)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 34:45 >> 34:46 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_obtener_local(ctx, m, 4));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 34:48 >> 34:49 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_obtener_local(ctx, m, 3));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 34:49 >> 34:50 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 8);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k77, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k77(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k77);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 34:49 >> 34:50 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 34:49 >> 34:50 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 34:34 >> 34:35 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 9);
return pdcrt_llamar2(ctx, m->k.marco, m->k.kf, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 34:34 >> 34:35 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 34:34 >> 34:35 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 34:34 >> 34:35 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k78, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k78(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k78);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 26:0 >> 36:10 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 26:0 >> 36:10 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 26:0 >> 36:10 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k79(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k79);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 39:7 >> 39:15 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 39:7 >> 39:15 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 39:7 >> 39:15 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 39:4 >> 41:9 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 8);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 39:4 >> 41:9 */
pdcrt_obj csaltar_obj = pdcrt_obtener_local(ctx, m, 9);
if(csaltar_obj.recv != &pdcrt_recv_booleano) pdcrt_error(ctx, "Se esperaba un objeto de tipo Boole");
if(csaltar_obj.bval)
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k82, PDCRT_XMM_NULO());
else
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k80, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k80(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k80);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 39:4 >> 41:9 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 39:4 >> 41:9 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 40:17 >> 40:19 */
pdcrt_fijar_local(ctx, m, 8, PDCRT_OBTENER_CONSTANTE(ctx, m, 10));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 40:8 >> 40:19 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 40:8 >> 40:19 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 39:4 >> 41:9 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k83, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k81(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k81);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k82, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k82(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k82);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k83, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k83(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k83);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 44:4 >> 44:15 */
pdcrt_fijar_local(ctx, m, 9, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 44:17 >> 44:30 */
do {
static const pdcrt_captura caps[] = {{6}, {5}, {1}, {4}};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzibepd_N95_x_N95_algebraico_f3, caps, 4);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 10, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 44:4 >> 44:16 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 7);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k92, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k84(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k84);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 46:15 >> 46:22 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 46:15 >> 46:22 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 46:15 >> 46:22 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 46:12 >> 51:17 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 6);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 46:12 >> 51:17 */
pdcrt_obj csaltar_obj = pdcrt_obtener_local(ctx, m, 7);
if(csaltar_obj.recv != &pdcrt_recv_booleano) pdcrt_error(ctx, "Se esperaba un objeto de tipo Boole");
if(csaltar_obj.bval)
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k87, PDCRT_XMM_NULO());
else
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k85, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k85(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k85);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 46:12 >> 51:17 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 46:12 >> 51:17 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 47:40 >> 47:41 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_obtener_local(ctx, m, 3));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 47:22 >> 47:37 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 2), pdcrt_obtener_local(ctx, m, 6));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 47:22 >> 47:37 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 46:12 >> 51:17 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k90, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k86(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k86);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k87, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k87(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k87);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 49:42 >> 49:45 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_obtener_local(ctx, m, 5));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 49:22 >> 49:39 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 1), pdcrt_obtener_local(ctx, m, 6));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 49:22 >> 49:39 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 50:17 >> 50:22 */
pdcrt_fijar_local(ctx, m, 7, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 50:24 >> 50:28 */
pdcrt_fijar_local(ctx, m, 9, ctx->espacio_de_nombres_runtime);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 50:24 >> 50:28 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 12);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k88, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k88(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k88);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 50:24 >> 50:28 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 50:24 >> 50:28 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 50:17 >> 50:28 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 7);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k89, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k89(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k89);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 50:17 >> 50:28 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 50:17 >> 50:28 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 50:17 >> 50:28 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 49:16 >> 50:28 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k90, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k90(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k90);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 45:32 >> 45:45 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 45:32 >> 45:45 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 45:32 >> 45:45 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k91(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k91);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 45:8 >> 45:26 */
pdcrt_fijar_local(ctx, m, 5, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 45:8 >> 45:26 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 45:8 >> 45:26 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 45:8 >> 45:26 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 45:8 >> 45:26 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 44:17 >> 44:30 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 44:17 >> 44:30 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 44:17 >> 44:30 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k92(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k92);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 44:4 >> 44:16 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 44:4 >> 44:16 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 44:4 >> 44:16 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 39:4 >> 62:43 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 56:7 >> 56:13 */
pdcrt_fijar_local(ctx, m, 9, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 2)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 56:15 >> 56:32 */
pdcrt_fijar_local(ctx, m, 10, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 6)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 56:7 >> 56:14 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 7);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k93, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k93(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k93);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 56:7 >> 56:14 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 56:7 >> 56:14 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 56:7 >> 56:14 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 56:4 >> 60:9 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 8);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 56:4 >> 60:9 */
pdcrt_obj csaltar_obj = pdcrt_obtener_local(ctx, m, 9);
if(csaltar_obj.recv != &pdcrt_recv_booleano) pdcrt_error(ctx, "Se esperaba un objeto de tipo Boole");
if(csaltar_obj.bval)
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k96, PDCRT_XMM_NULO());
else
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k94, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k94(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k94);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 56:4 >> 60:9 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 56:4 >> 60:9 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 57:22 >> 57:24 */
pdcrt_fijar_local(ctx, m, 8, PDCRT_OBTENER_CONSTANTE(ctx, m, 10));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 57:14 >> 57:19 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_obtener_local(ctx, m, 8));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 57:14 >> 57:19 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 56:4 >> 60:9 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k99, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k95(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k95);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k96, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k96(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k96);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 59:22 >> 59:25 */
pdcrt_fijar_local(ctx, m, 9, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 4)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 59:36 >> 59:53 */
pdcrt_fijar_local(ctx, m, 10, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 6)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 59:55 >> 59:58 */
pdcrt_fijar_local(ctx, m, 12, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 4)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 59:58 >> 59:59 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 8);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k97, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 12)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k97(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k97);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 59:58 >> 59:59 */
pdcrt_fijar_local(ctx, m, 11, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 59:58 >> 59:59 */
pdcrt_fijar_local_nb(ctx, m, 12, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 59:25 >> 59:26 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 9);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k98, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 11)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k98(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k98);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 59:25 >> 59:26 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 59:25 >> 59:26 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 59:25 >> 59:26 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 59:25 >> 59:26 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 59:14 >> 59:19 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_obtener_local(ctx, m, 8));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 59:14 >> 59:19 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k99, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k99(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k99);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 62:14 >> 62:24 */
pdcrt_fijar_local(ctx, m, 10, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 3)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 62:26 >> 62:41 */
pdcrt_fijar_local(ctx, m, 11, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 5)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 62:14 >> 62:25 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 7);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k100, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 11)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k100(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k100);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 62:14 >> 62:25 */
pdcrt_fijar_local(ctx, m, 9, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 62:14 >> 62:25 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 62:14 >> 62:25 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 62:55 >> 62:60 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_obtener_local(ctx, m, 7));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 62:42 >> 62:43 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 5);
return pdcrt_llamar1(ctx, m->k.marco, m->k.kf, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 62:42 >> 62:43 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 62:42 >> 62:43 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 38:0 >> 63:10 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 38:0 >> 63:10 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 38:0 >> 63:10 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k101(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k101);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 66:34 >> 66:46 */
pdcrt_fijar_local(ctx, m, 5, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 66:34 >> 66:46 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 66:34 >> 66:46 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 66:20 >> 66:21 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 5);
return pdcrt_llamar1(ctx, m->k.marco, m->k.kf, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 66:20 >> 66:21 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 66:20 >> 66:21 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 65:0 >> 67:10 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 65:0 >> 67:10 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 65:0 >> 67:10 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k102(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k102);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 70:24 >> 70:36 */
pdcrt_fijar_local(ctx, m, 135, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 70:24 >> 70:36 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 70:24 >> 70:36 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 70:24 >> 70:36 */
pdcrt_fijar_local_nb(ctx, m, 137, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 70:24 >> 70:36 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 70:6 >> 70:21 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 135));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 70:6 >> 70:21 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 72:0 >> 75:10 */
do {
static const pdcrt_captura caps[] = {{117}, {132}};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzibepd_N95_x_N95_algebraico_f6, caps, 2);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 135, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 72:8 >> 72:19 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 133), pdcrt_obtener_local(ctx, m, 135));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 72:8 >> 72:19 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 77:0 >> 157:10 */
do {
static const pdcrt_captura caps[] = {{61}, {116}, {114}, {79}, {115}, {124}, {73}, {131}, {109}, {118}};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzibepd_N95_x_N95_algebraico_f19, caps, 10);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 135, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 77:8 >> 77:22 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 134), pdcrt_obtener_local(ctx, m, 135));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 77:8 >> 77:22 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cons = pdcrt_crear_espacio_de_nombres_cons(ctx, PDCRT_GC());
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 135, cons);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 115)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 135), pdcrt_obtener_local(ctx, m, 136), "ParaCadaNúmero", 15, true, pdc_mpdzibepd_N95_x_N95_algebraico_k190);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k103(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k103);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 73:15 >> 73:23 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 73:15 >> 73:23 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 73:15 >> 73:23 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 73:31 >> 73:32 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 8);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k104, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k104(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k104);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 73:31 >> 73:32 */
pdcrt_fijar_local(ctx, m, 5, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 73:31 >> 73:32 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 73:43 >> 73:49 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_obtener_local(ctx, m, 3));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 73:49 >> 73:50 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 8);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k105, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k105(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k105);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 73:49 >> 73:50 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 73:49 >> 73:50 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 73:31 >> 73:50 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 11);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k106, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k106(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k106);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 73:31 >> 73:50 */
pdcrt_fijar_local(ctx, m, 4, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 73:31 >> 73:50 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 73:31 >> 73:50 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 73:4 >> 73:50 */
pdcrt_assert(ctx, pdcrt_obtener_local(ctx, m, 4));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 73:4 >> 73:50 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 74:13 >> 74:28 */
pdcrt_fijar_local(ctx, m, 5, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 1)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 74:36 >> 74:42 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_obtener_local(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 74:44 >> 74:50 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_obtener_local(ctx, m, 3));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 74:28 >> 74:29 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 16);
return pdcrt_llamar2(ctx, m->k.marco, m->k.kf, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 74:28 >> 74:29 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 74:28 >> 74:29 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 74:28 >> 74:29 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 72:0 >> 75:10 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 72:0 >> 75:10 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 72:0 >> 75:10 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k107(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k107);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 79:37 >> 79:38 */
pdcrt_fijar_local(ctx, m, 17, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 79:37 >> 79:38 */
pdcrt_fijar_local_nb(ctx, m, 18, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 79:10 >> 79:23 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 12), pdcrt_obtener_local(ctx, m, 17));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 79:10 >> 79:23 */
pdcrt_fijar_local_nb(ctx, m, 17, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 80:28 >> 80:35 */
pdcrt_fijar_local(ctx, m, 19, ctx->espacio_de_nombres_runtime);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 80:28 >> 80:35 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 18);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k108, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 19)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k108(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k108);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 80:28 >> 80:35 */
pdcrt_fijar_local(ctx, m, 18, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 80:28 >> 80:35 */
pdcrt_fijar_local_nb(ctx, m, 19, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 80:35 >> 80:36 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 19);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k109, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 18)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k109(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k109);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 80:35 >> 80:36 */
pdcrt_fijar_local(ctx, m, 17, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 80:35 >> 80:36 */
pdcrt_fijar_local_nb(ctx, m, 18, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 80:10 >> 80:25 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 13), pdcrt_obtener_local(ctx, m, 17));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 80:10 >> 80:25 */
pdcrt_fijar_local_nb(ctx, m, 17, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 81:26 >> 81:27 */
pdcrt_fijar_local_nb(ctx, m, 17, pdcrt_objeto_entero(PDCRT_ENTERO_C(0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 81:10 >> 81:23 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 14), pdcrt_obtener_local(ctx, m, 17));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 81:10 >> 81:23 */
pdcrt_fijar_local_nb(ctx, m, 17, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 82:26 >> 82:37 */
pdcrt_fijar_local(ctx, m, 18, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 1)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 82:37 >> 82:38 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 17);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k110, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 18)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k110(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k110);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 82:37 >> 82:38 */
pdcrt_fijar_local(ctx, m, 17, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 82:37 >> 82:38 */
pdcrt_fijar_local_nb(ctx, m, 18, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 82:10 >> 82:23 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 15), pdcrt_obtener_local(ctx, m, 17));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 82:10 >> 82:23 */
pdcrt_fijar_local_nb(ctx, m, 17, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 84:4 >> 84:20 */
pdcrt_fijar_local(ctx, m, 18, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 84:22 >> 84:34 */
pdcrt_fijar_local_nb(ctx, m, 19, pdcrt_obtener_local(ctx, m, 11));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 84:36 >> 84:49 */
do {
static const pdcrt_captura caps[] = {{12}, {10}, {1}, {15}, {14}, {2}, {3}};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzibepd_N95_x_N95_algebraico_f8, caps, 7);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 20, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 84:4 >> 84:21 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 7);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k138, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 18)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 19)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 20)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k111(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k111);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 85:38 >> 85:39 */
pdcrt_fijar_local(ctx, m, 10, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 85:38 >> 85:39 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 85:24 >> 85:25 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 20);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k112, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k112(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k112);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 85:24 >> 85:25 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 85:24 >> 85:25 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 85:24 >> 85:25 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 85:8 >> 87:13 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 8);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 85:8 >> 87:13 */
pdcrt_obj csaltar_obj = pdcrt_obtener_local(ctx, m, 9);
if(csaltar_obj.recv != &pdcrt_recv_booleano) pdcrt_error(ctx, "Se esperaba un objeto de tipo Boole");
if(csaltar_obj.bval)
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k118, PDCRT_XMM_NULO());
else
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k113, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k113(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k113);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 85:8 >> 87:13 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 85:8 >> 87:13 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 86:12 >> 86:30 */
pdcrt_fijar_local(ctx, m, 9, ctx->espacio_de_nombres_runtime);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 86:33 >> 86:78 */
pdcrt_fijar_local(ctx, m, 11, PDCRT_OBTENER_CONSTANTE(ctx, m, 21));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 86:90 >> 86:96 */
pdcrt_fijar_local(ctx, m, 12, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 1)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 86:98 >> 86:101 */
pdcrt_fijar_local(ctx, m, 14, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 7)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 86:101 >> 86:102 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 14);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k114, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 14)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k114(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k114);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 86:101 >> 86:102 */
pdcrt_fijar_local(ctx, m, 13, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 86:101 >> 86:102 */
pdcrt_fijar_local_nb(ctx, m, 14, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 86:78 >> 86:79 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 2);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k115, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 11)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 12)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 13)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k115(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k115);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 86:78 >> 86:79 */
pdcrt_fijar_local(ctx, m, 10, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 86:78 >> 86:79 */
pdcrt_fijar_local_nb(ctx, m, 13, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 86:78 >> 86:79 */
pdcrt_fijar_local_nb(ctx, m, 12, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 86:78 >> 86:79 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 86:12 >> 86:30 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 22);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k116, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k116(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k116);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 86:12 >> 86:30 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 86:12 >> 86:30 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 86:12 >> 86:30 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 86:12 >> 86:31 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 85:8 >> 87:13 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k119, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k117(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k117);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k118, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k118(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k118);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k119, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k119(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k119);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 89:8 >> 89:21 */
pdcrt_fijar_local(ctx, m, 9, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 89:31 >> 89:34 */
pdcrt_fijar_local(ctx, m, 11, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 7)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 89:34 >> 89:35 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 14);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k120, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 11)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k120(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k120);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 89:34 >> 89:35 */
pdcrt_fijar_local(ctx, m, 10, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 89:34 >> 89:35 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 89:43 >> 89:46 */
pdcrt_fijar_local(ctx, m, 12, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 7)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 89:46 >> 89:47 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 15);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k121, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 12)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k121(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k121);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 89:46 >> 89:47 */
pdcrt_fijar_local(ctx, m, 11, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 89:46 >> 89:47 */
pdcrt_fijar_local_nb(ctx, m, 12, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 89:21 >> 89:22 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 23);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k122, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 11)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k122(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k122);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 89:21 >> 89:22 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 89:21 >> 89:22 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 89:21 >> 89:22 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 89:21 >> 89:22 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 85:8 >> 102:34 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 91:8 >> 91:34 */
pdcrt_fijar_local(ctx, m, 9, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 5)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 91:36 >> 91:39 */
pdcrt_fijar_local(ctx, m, 11, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 7)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 91:39 >> 91:40 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 15);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k123, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 11)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k123(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k123);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 91:39 >> 91:40 */
pdcrt_fijar_local(ctx, m, 10, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 91:39 >> 91:40 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 91:48 >> 91:61 */
do {
static const pdcrt_captura caps[] = {{7}, {2}, {3}};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzibepd_N95_x_N95_algebraico_f7, caps, 3);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 11, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 91:8 >> 91:35 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 7);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k134, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 11)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k124(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k124);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 93:28 >> 93:29 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 93:28 >> 93:29 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 93:28 >> 93:29 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 93:12 >> 98:17 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 6);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 93:12 >> 98:17 */
pdcrt_obj csaltar_obj = pdcrt_obtener_local(ctx, m, 7);
if(csaltar_obj.recv != &pdcrt_recv_booleano) pdcrt_error(ctx, "Se esperaba un objeto de tipo Boole");
if(csaltar_obj.bval)
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k128, PDCRT_XMM_NULO());
else
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k125, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k125(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k125);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 93:12 >> 98:17 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 93:12 >> 98:17 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 94:31 >> 94:44 */
pdcrt_fijar_local(ctx, m, 7, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 2)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 94:49 >> 94:54 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_obtener_local(ctx, m, 3));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 94:44 >> 94:45 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 24);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k126, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k126(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k126);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 94:44 >> 94:45 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 94:44 >> 94:45 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 94:44 >> 94:45 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 94:22 >> 94:28 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_obtener_local(ctx, m, 6));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 94:22 >> 94:28 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 93:12 >> 98:17 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k131, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k127(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k127);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k128, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k128(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k128);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 96:31 >> 96:42 */
pdcrt_fijar_local(ctx, m, 7, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 1)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 96:42 >> 96:43 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 17);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k129, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k129(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k129);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 96:42 >> 96:43 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 96:42 >> 96:43 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 96:22 >> 96:28 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_obtener_local(ctx, m, 6));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 96:22 >> 96:28 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 97:16 >> 97:29 */
pdcrt_fijar_local(ctx, m, 7, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 2)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 97:39 >> 97:44 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_obtener_local(ctx, m, 3));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 97:46 >> 97:52 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_obtener_local(ctx, m, 5));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 97:29 >> 97:30 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 23);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k130, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k130(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k130);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 97:29 >> 97:30 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 97:29 >> 97:30 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 97:29 >> 97:30 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 97:29 >> 97:30 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 96:16 >> 97:30 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k131, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k131(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k131);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 99:12 >> 99:18 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_obtener_local(ctx, m, 5));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 99:28 >> 99:31 */
pdcrt_fijar_local(ctx, m, 9, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 99:31 >> 99:32 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 14);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k132, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k132(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k132);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 99:31 >> 99:32 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 99:31 >> 99:32 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 99:40 >> 99:41 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_obtener_local(ctx, m, 4));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 99:18 >> 99:19 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 23);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k133, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k133(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k133);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 99:18 >> 99:19 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 99:18 >> 99:19 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 99:18 >> 99:19 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 99:18 >> 99:19 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 92:12 >> 99:19 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 91:48 >> 91:61 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 91:48 >> 91:61 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 91:48 >> 91:61 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k134(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k134);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 91:8 >> 91:35 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 91:8 >> 91:35 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 91:8 >> 91:35 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 91:8 >> 91:35 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 85:8 >> 102:34 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 102:30 >> 102:33 */
pdcrt_fijar_local(ctx, m, 9, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 6)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 102:35 >> 102:48 */
pdcrt_fijar_local(ctx, m, 10, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 4)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 102:50 >> 102:53 */
pdcrt_fijar_local(ctx, m, 13, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 7)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 102:53 >> 102:54 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 15);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k135, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 13)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k135(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k135);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 102:53 >> 102:54 */
pdcrt_fijar_local(ctx, m, 12, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 102:53 >> 102:54 */
pdcrt_fijar_local_nb(ctx, m, 13, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 102:60 >> 102:61 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 8);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k136, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 12)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k136(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k136);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 102:60 >> 102:61 */
pdcrt_fijar_local(ctx, m, 11, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 102:60 >> 102:61 */
pdcrt_fijar_local_nb(ctx, m, 12, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 102:30 >> 102:34 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 7);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k137, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 11)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k137(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k137);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 102:30 >> 102:34 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 102:30 >> 102:34 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 102:30 >> 102:34 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 102:30 >> 102:34 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 102:14 >> 102:27 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 4), pdcrt_obtener_local(ctx, m, 8));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 102:14 >> 102:27 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 84:36 >> 84:49 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 84:36 >> 84:49 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 84:36 >> 84:49 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k138(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k138);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 84:4 >> 84:21 */
pdcrt_fijar_local(ctx, m, 17, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 84:4 >> 84:21 */
pdcrt_fijar_local_nb(ctx, m, 20, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 84:4 >> 84:21 */
pdcrt_fijar_local_nb(ctx, m, 19, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 84:4 >> 84:21 */
pdcrt_fijar_local_nb(ctx, m, 18, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 78:4 >> 156:23 */
pdcrt_fijar_local_nb(ctx, m, 17, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 105:4 >> 105:19 */
pdcrt_fijar_local(ctx, m, 18, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 4)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 105:21 >> 105:22 */
pdcrt_fijar_local_nb(ctx, m, 19, pdcrt_objeto_entero(PDCRT_ENTERO_C(0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 105:24 >> 105:37 */
pdcrt_fijar_local(ctx, m, 20, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 14)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 105:39 >> 105:52 */
do {
static const pdcrt_captura caps[] = {{13}, {5}};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzibepd_N95_x_N95_algebraico_f9, caps, 2);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 21, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 105:4 >> 105:20 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 7);
return pdcrt_llamar3(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k141, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 18)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 19)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 20)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 21)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k139(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k139);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 106:40 >> 106:55 */
pdcrt_fijar_local(ctx, m, 5, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 106:40 >> 106:55 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 106:23 >> 106:24 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 25);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k140, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k140(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k140);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 106:23 >> 106:24 */
pdcrt_fijar_local(ctx, m, 3, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 106:23 >> 106:24 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 106:23 >> 106:24 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 106:23 >> 106:24 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 105:39 >> 105:52 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 105:39 >> 105:52 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 3)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 105:39 >> 105:52 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k141(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k141);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 105:4 >> 105:20 */
pdcrt_fijar_local(ctx, m, 17, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 105:4 >> 105:20 */
pdcrt_fijar_local_nb(ctx, m, 21, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 105:4 >> 105:20 */
pdcrt_fijar_local_nb(ctx, m, 20, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 105:4 >> 105:20 */
pdcrt_fijar_local_nb(ctx, m, 19, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 105:4 >> 105:20 */
pdcrt_fijar_local_nb(ctx, m, 18, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 78:4 >> 156:23 */
pdcrt_fijar_local_nb(ctx, m, 17, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 109:4 >> 109:9 */
pdcrt_fijar_local(ctx, m, 18, ctx->clase_objeto);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 109:4 >> 109:9 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 26);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k142, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 18)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k142(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k142);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 109:4 >> 109:9 */
pdcrt_fijar_local(ctx, m, 17, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 109:4 >> 109:9 */
pdcrt_fijar_local_nb(ctx, m, 18, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 109:10 >> 109:20 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 16), pdcrt_obtener_local(ctx, m, 17));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 109:10 >> 109:20 */
pdcrt_fijar_local_nb(ctx, m, 17, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 109:10 >> 109:20 */
pdcrt_fijar_local(ctx, m, 18, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 16)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 109:4 >> 109:9 */
pdcrt_fijar_local(ctx, m, 19, PDCRT_OBTENER_CONSTANTE(ctx, m, 27));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 109:4 >> 109:9 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 28);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k143, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 18)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 19)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k143(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k143);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 109:4 >> 109:9 */
pdcrt_fijar_local(ctx, m, 17, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 109:4 >> 109:9 */
pdcrt_fijar_local_nb(ctx, m, 19, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 109:4 >> 109:9 */
pdcrt_fijar_local_nb(ctx, m, 18, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 78:4 >> 156:23 */
pdcrt_fijar_local_nb(ctx, m, 17, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 113:13 >> 113:23 */
pdcrt_fijar_local(ctx, m, 18, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 16)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 113:24 >> 113:29 */
pdcrt_fijar_local(ctx, m, 19, PDCRT_OBTENER_CONSTANTE(ctx, m, 29));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 113:4 >> 113:12 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 30);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k144, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 18)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 19)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k144(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k144);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 113:4 >> 113:12 */
pdcrt_fijar_local(ctx, m, 17, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 113:4 >> 113:12 */
pdcrt_fijar_local_nb(ctx, m, 19, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 113:4 >> 113:12 */
pdcrt_fijar_local_nb(ctx, m, 18, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 78:4 >> 156:23 */
pdcrt_fijar_local_nb(ctx, m, 17, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 115:10 >> 115:20 */
pdcrt_fijar_local(ctx, m, 18, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 16)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 115:30 >> 115:36 */
pdcrt_fijar_local(ctx, m, 19, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 10)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 115:4 >> 115:36 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 28);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k145, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 18)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 19)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k145(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k145);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 115:4 >> 115:36 */
pdcrt_fijar_local(ctx, m, 17, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 115:4 >> 115:36 */
pdcrt_fijar_local_nb(ctx, m, 19, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 115:4 >> 115:36 */
pdcrt_fijar_local_nb(ctx, m, 18, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 78:4 >> 156:23 */
pdcrt_fijar_local_nb(ctx, m, 17, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 116:4 >> 116:20 */
pdcrt_fijar_local(ctx, m, 18, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 116:22 >> 116:37 */
pdcrt_fijar_local(ctx, m, 19, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 13)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 116:39 >> 116:52 */
do {
static const pdcrt_captura caps[] = {{16}};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzibepd_N95_x_N95_algebraico_f10, caps, 1);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 20, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 116:4 >> 116:21 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 7);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k147, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 18)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 19)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 20)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k146(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k146);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 117:18 >> 117:19 */
pdcrt_fijar_local(ctx, m, 2, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 117:18 >> 117:19 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 117:18 >> 117:19 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 117:18 >> 117:19 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 116:39 >> 116:52 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 116:39 >> 116:52 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 2)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 116:39 >> 116:52 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k147(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k147);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 116:4 >> 116:21 */
pdcrt_fijar_local(ctx, m, 17, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 116:4 >> 116:21 */
pdcrt_fijar_local_nb(ctx, m, 20, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 116:4 >> 116:21 */
pdcrt_fijar_local_nb(ctx, m, 19, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 116:4 >> 116:21 */
pdcrt_fijar_local_nb(ctx, m, 18, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 78:4 >> 156:23 */
pdcrt_fijar_local_nb(ctx, m, 17, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 120:4 >> 120:20 */
pdcrt_fijar_local(ctx, m, 18, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 120:22 >> 120:34 */
pdcrt_fijar_local_nb(ctx, m, 19, pdcrt_obtener_local(ctx, m, 11));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 120:36 >> 120:49 */
do {
static const pdcrt_captura caps[] = {{13}, {2}, {6}, {16}, {7}};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzibepd_N95_x_N95_algebraico_f14, caps, 5);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 20, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 120:4 >> 120:21 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 7);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k168, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 18)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 19)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 20)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k148(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k148);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 121:45 >> 121:46 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 121:45 >> 121:46 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 121:54 >> 121:60 */
do {
static const pdcrt_captura caps[] = {{2}, {5}, {1}, {0}};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzibepd_N95_x_N95_algebraico_f12, caps, 4);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 9, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 121:18 >> 121:19 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 34);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k162, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k149(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k149);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 122:29 >> 122:30 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 122:29 >> 122:30 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 122:41 >> 122:44 */
pdcrt_fijar_local(ctx, m, 11, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 1)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 122:44 >> 122:45 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 15);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k150, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 11)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k150(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k150);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 122:44 >> 122:45 */
pdcrt_fijar_local(ctx, m, 10, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 122:44 >> 122:45 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 122:51 >> 122:52 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 8);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k151, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k151(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k151);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 122:51 >> 122:52 */
pdcrt_fijar_local(ctx, m, 9, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 122:51 >> 122:52 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 122:29 >> 122:52 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 11);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k152, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k152(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k152);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 122:29 >> 122:52 */
pdcrt_fijar_local(ctx, m, 7, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 122:29 >> 122:52 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 122:29 >> 122:52 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 122:12 >> 122:52 */
pdcrt_assert(ctx, pdcrt_obtener_local(ctx, m, 7));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 122:12 >> 122:52 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 124:25 >> 124:27 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_obtener_local(ctx, m, 4));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 124:27 >> 124:28 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 31);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k153, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k153(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k153);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 124:27 >> 124:28 */
pdcrt_fijar_local(ctx, m, 7, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 124:27 >> 124:28 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 124:18 >> 124:22 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 6), pdcrt_obtener_local(ctx, m, 7));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 124:18 >> 124:22 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 125:18 >> 125:22 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 6)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 125:31 >> 125:34 */
pdcrt_fijar_local(ctx, m, 10, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 1)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 125:34 >> 125:35 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 14);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k154, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k154(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k154);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 125:34 >> 125:35 */
pdcrt_fijar_local(ctx, m, 9, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 125:34 >> 125:35 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 125:12 >> 125:35 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 32);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k155, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k155(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k155);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 125:12 >> 125:35 */
pdcrt_fijar_local(ctx, m, 7, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 125:12 >> 125:35 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 125:12 >> 125:35 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 122:12 >> 129:25 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 126:12 >> 126:38 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 2)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 126:40 >> 126:43 */
pdcrt_fijar_local(ctx, m, 10, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 1)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 126:43 >> 126:44 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 15);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k156, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k156(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k156);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 126:43 >> 126:44 */
pdcrt_fijar_local(ctx, m, 9, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 126:43 >> 126:44 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 126:52 >> 126:65 */
do {
static const pdcrt_captura caps[] = {{6}, {5}, {0}, {3}};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzibepd_N95_x_N95_algebraico_f11, caps, 4);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 10, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 126:12 >> 126:39 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 7);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k161, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k157(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k157);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 127:75 >> 127:76 */
pdcrt_fijar_local(ctx, m, 11, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 127:75 >> 127:76 */
pdcrt_fijar_local_nb(ctx, m, 13, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 127:75 >> 127:76 */
pdcrt_fijar_local_nb(ctx, m, 12, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 127:46 >> 127:47 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 5);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k158, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 11)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k158(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k158);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 127:46 >> 127:47 */
pdcrt_fijar_local(ctx, m, 9, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 127:46 >> 127:47 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 127:46 >> 127:47 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 127:86 >> 127:93 */
pdcrt_fijar_local(ctx, m, 11, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 1)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 127:98 >> 127:99 */
pdcrt_fijar_local_nb(ctx, m, 12, pdcrt_obtener_local(ctx, m, 5));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 127:93 >> 127:94 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 24);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k159, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 11)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 12)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k159(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k159);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 127:93 >> 127:94 */
pdcrt_fijar_local(ctx, m, 10, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 127:93 >> 127:94 */
pdcrt_fijar_local_nb(ctx, m, 12, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 127:93 >> 127:94 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 127:16 >> 127:30 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 7);
return pdcrt_llamar3(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k160, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k160(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k160);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 127:16 >> 127:30 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 127:16 >> 127:30 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 127:16 >> 127:30 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 127:16 >> 127:30 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 127:16 >> 127:30 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 127:16 >> 127:30 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 126:52 >> 126:65 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 126:52 >> 126:65 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 126:52 >> 126:65 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k161(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k161);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 126:12 >> 126:39 */
pdcrt_fijar_local(ctx, m, 7, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 126:12 >> 126:39 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 126:12 >> 126:39 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 126:12 >> 126:39 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 122:12 >> 129:25 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 129:21 >> 129:25 */
pdcrt_fijar_local(ctx, m, 7, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 6)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 129:12 >> 129:25 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 129:12 >> 129:25 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 121:54 >> 121:60 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 121:54 >> 121:60 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 121:54 >> 121:60 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k162(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k162);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 121:18 >> 121:19 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 121:18 >> 121:19 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 121:18 >> 121:19 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 121:18 >> 121:19 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 121:18 >> 132:19 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 132:8 >> 132:18 */
pdcrt_fijar_local(ctx, m, 7, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 3)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 132:35 >> 132:53 */
pdcrt_fijar_local(ctx, m, 9, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 4)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 132:55 >> 132:59 */
pdcrt_fijar_local(ctx, m, 10, PDCRT_OBTENER_CONSTANTE(ctx, m, 35));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 132:61 >> 132:64 */
pdcrt_fijar_local(ctx, m, 12, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 5)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 132:64 >> 132:65 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 14);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k163, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 12)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k163(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k163);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 132:64 >> 132:65 */
pdcrt_fijar_local(ctx, m, 11, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 132:64 >> 132:65 */
pdcrt_fijar_local_nb(ctx, m, 12, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 132:35 >> 132:54 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 7);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k164, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 11)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k164(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k164);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 132:35 >> 132:54 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 132:35 >> 132:54 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 132:35 >> 132:54 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 132:35 >> 132:54 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 132:74 >> 132:80 */
do {
static const pdcrt_captura caps[] = {{5}};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzibepd_N95_x_N95_algebraico_f13, caps, 1);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 9, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 132:18 >> 132:19 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 36);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k167, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k165(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k165);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 133:23 >> 133:24 */
pdcrt_fijar_local(ctx, m, 3, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 133:23 >> 133:24 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 133:32 >> 133:35 */
pdcrt_fijar_local(ctx, m, 5, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 133:35 >> 133:36 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 14);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k166, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k166(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k166);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 133:35 >> 133:36 */
pdcrt_fijar_local(ctx, m, 4, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 133:35 >> 133:36 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 133:23 >> 133:36 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 11);
return pdcrt_llamar1(ctx, m->k.marco, m->k.kf, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 3)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 133:23 >> 133:36 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 133:23 >> 133:36 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 132:74 >> 132:80 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 132:74 >> 132:80 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 3)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 132:74 >> 132:80 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k167(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k167);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 132:18 >> 132:19 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 132:18 >> 132:19 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 132:18 >> 132:19 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 132:18 >> 132:19 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 121:18 >> 132:19 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 120:36 >> 120:49 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 120:36 >> 120:49 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 120:36 >> 120:49 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k168(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k168);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 120:4 >> 120:21 */
pdcrt_fijar_local(ctx, m, 17, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 120:4 >> 120:21 */
pdcrt_fijar_local_nb(ctx, m, 20, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 120:4 >> 120:21 */
pdcrt_fijar_local_nb(ctx, m, 19, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 120:4 >> 120:21 */
pdcrt_fijar_local_nb(ctx, m, 18, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 78:4 >> 156:23 */
pdcrt_fijar_local_nb(ctx, m, 17, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 137:4 >> 137:17 */
pdcrt_fijar_local(ctx, m, 18, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 15)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 137:31 >> 137:44 */
do {
static const pdcrt_captura caps[] = {{13}, {6}, {10}, {16}};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzibepd_N95_x_N95_algebraico_f16, caps, 4);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 19, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 137:17 >> 137:18 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 38);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k182, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 18)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 19)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k169(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k169);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 139:37 >> 139:38 */
pdcrt_fijar_local(ctx, m, 10, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 139:37 >> 139:38 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 139:24 >> 139:25 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 20);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k170, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k170(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k170);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 139:24 >> 139:25 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 139:24 >> 139:25 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 139:24 >> 139:25 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 139:15 >> 139:25 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 8);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 139:15 >> 139:25 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 139:12 >> 141:17 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 7);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 139:12 >> 141:17 */
pdcrt_obj csaltar_obj = pdcrt_obtener_local(ctx, m, 8);
if(csaltar_obj.recv != &pdcrt_recv_booleano) pdcrt_error(ctx, "Se esperaba un objeto de tipo Boole");
if(csaltar_obj.bval)
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k176, PDCRT_XMM_NULO());
else
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k171, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k171(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k171);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 139:12 >> 141:17 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 139:12 >> 141:17 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 140:16 >> 140:34 */
pdcrt_fijar_local(ctx, m, 8, ctx->espacio_de_nombres_runtime);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 140:37 >> 140:68 */
pdcrt_fijar_local(ctx, m, 10, PDCRT_OBTENER_CONSTANTE(ctx, m, 37));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 140:80 >> 140:86 */
pdcrt_fijar_local(ctx, m, 11, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 3)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 140:88 >> 140:90 */
pdcrt_fijar_local_nb(ctx, m, 13, pdcrt_obtener_local(ctx, m, 5));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 140:90 >> 140:91 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 29);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k172, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 13)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k172(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k172);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 140:90 >> 140:91 */
pdcrt_fijar_local(ctx, m, 12, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 140:90 >> 140:91 */
pdcrt_fijar_local_nb(ctx, m, 13, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 140:98 >> 140:103 */
pdcrt_fijar_local(ctx, m, 13, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 2)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 140:68 >> 140:69 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 2);
return pdcrt_llamar3(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k173, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 11)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 12)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 13)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k173(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k173);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 140:68 >> 140:69 */
pdcrt_fijar_local(ctx, m, 9, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 140:68 >> 140:69 */
pdcrt_fijar_local_nb(ctx, m, 13, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 140:68 >> 140:69 */
pdcrt_fijar_local_nb(ctx, m, 12, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 140:68 >> 140:69 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 140:68 >> 140:69 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 140:16 >> 140:34 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 22);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k174, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k174(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k174);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 140:16 >> 140:34 */
pdcrt_fijar_local(ctx, m, 7, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 140:16 >> 140:34 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 140:16 >> 140:34 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 140:16 >> 140:35 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 139:12 >> 141:17 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k177, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k175(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k175);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 19:6 >> 19:28 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k176, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k176(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k176);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 20:0 >> 20:47 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k177, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k177(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k177);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 143:22 >> 143:28 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 1)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 143:33 >> 143:35 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_obtener_local(ctx, m, 5));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 143:35 >> 143:36 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 29);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k178, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k178(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k178);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 143:35 >> 143:36 */
pdcrt_fijar_local(ctx, m, 9, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 143:35 >> 143:36 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 143:28 >> 143:29 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 24);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k179, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k179(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k179);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 143:28 >> 143:29 */
pdcrt_fijar_local(ctx, m, 7, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 143:28 >> 143:29 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 143:28 >> 143:29 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 143:18 >> 143:19 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_obtener_local(ctx, m, 7));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 143:18 >> 143:19 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 144:21 >> 144:34 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 4)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 144:36 >> 144:38 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_obtener_local(ctx, m, 5));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 144:41 >> 144:56 */
pdcrt_fijar_local(ctx, m, 11, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 144:61 >> 144:62 */
pdcrt_fijar_local_nb(ctx, m, 12, pdcrt_obtener_local(ctx, m, 6));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 144:56 >> 144:57 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 24);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k180, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 11)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 12)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k180(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k180);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 144:56 >> 144:57 */
pdcrt_fijar_local(ctx, m, 10, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 144:56 >> 144:57 */
pdcrt_fijar_local_nb(ctx, m, 12, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 144:56 >> 144:57 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 144:21 >> 144:35 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 7);
return pdcrt_llamar2(ctx, m->k.marco, m->k.kf, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 144:21 >> 144:35 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 144:21 >> 144:35 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 144:21 >> 144:35 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 138:41 >> 138:47 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 138:41 >> 138:47 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 138:41 >> 138:47 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k181(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k181);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 138:18 >> 138:19 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 138:18 >> 138:19 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 138:18 >> 138:19 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 138:18 >> 138:19 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 138:18 >> 138:19 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 137:31 >> 137:44 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 137:31 >> 137:44 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 137:31 >> 137:44 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k182(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k182);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 137:17 >> 137:18 */
pdcrt_fijar_local(ctx, m, 17, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 137:17 >> 137:18 */
pdcrt_fijar_local_nb(ctx, m, 19, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 137:17 >> 137:18 */
pdcrt_fijar_local_nb(ctx, m, 18, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 78:4 >> 156:23 */
pdcrt_fijar_local_nb(ctx, m, 17, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 148:4 >> 148:14 */
pdcrt_fijar_local(ctx, m, 18, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 16)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 148:30 >> 148:41 */
pdcrt_fijar_local(ctx, m, 19, PDCRT_OBTENER_CONSTANTE(ctx, m, 39));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 148:43 >> 148:49 */
do {
static const pdcrt_captura caps[] = {{6}, {8}, {12}, {10}, {9}};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzibepd_N95_x_N95_algebraico_f18, caps, 5);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 20, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 148:14 >> 148:15 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 36);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k189, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 18)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 19)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 20)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k183(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k183);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 150:52 >> 150:53 */
pdcrt_fijar_local(ctx, m, 11, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 150:52 >> 150:53 */
pdcrt_fijar_local_nb(ctx, m, 12, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 150:45 >> 150:46 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 24);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k184, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 11)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k184(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k184);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 150:45 >> 150:46 */
pdcrt_fijar_local(ctx, m, 9, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 150:45 >> 150:46 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 150:45 >> 150:46 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 150:61 >> 150:68 */
do {
static const pdcrt_captura caps[] = {{0}, {5}};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzibepd_N95_x_N95_algebraico_f17, caps, 2);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 10, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 150:23 >> 150:30 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 7);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k186, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k185(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k185);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 151:22 >> 151:36 */
pdcrt_fijar_local(ctx, m, 4, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 151:22 >> 151:36 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 151:22 >> 151:36 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 151:22 >> 151:36 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 151:47 >> 151:48 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 39);
return pdcrt_llamar0(ctx, m->k.marco, m->k.kf, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)), pdcrt_xmm_desde_obj(llamar_msj));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 151:47 >> 151:48 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 150:61 >> 150:68 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 150:61 >> 150:68 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 150:61 >> 150:68 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k186(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k186);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 150:23 >> 150:30 */
pdcrt_fijar_local(ctx, m, 7, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 150:23 >> 150:30 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 150:23 >> 150:30 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 150:23 >> 150:30 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 150:14 >> 150:20 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_obtener_local(ctx, m, 7));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 150:14 >> 150:20 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 153:17 >> 153:30 */
pdcrt_fijar_local(ctx, m, 8, PDCRT_OBTENER_CONSTANTE(ctx, m, 40));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 153:42 >> 153:48 */
pdcrt_fijar_local(ctx, m, 9, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 3)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 153:50 >> 153:52 */
pdcrt_fijar_local(ctx, m, 11, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 5)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 153:52 >> 153:53 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 29);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k187, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 11)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k187(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k187);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 153:52 >> 153:53 */
pdcrt_fijar_local(ctx, m, 10, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 153:52 >> 153:53 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 153:61 >> 153:65 */
pdcrt_fijar_local(ctx, m, 12, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 4)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 153:67 >> 153:73 */
pdcrt_fijar_local_nb(ctx, m, 13, pdcrt_obtener_local(ctx, m, 6));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 153:75 >> 153:79 */
pdcrt_fijar_local(ctx, m, 14, PDCRT_OBTENER_CONSTANTE(ctx, m, 41));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 153:61 >> 153:66 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 7);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_x_N95_algebraico_k188, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 12)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 13)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 14)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k188(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k188);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 153:61 >> 153:66 */
pdcrt_fijar_local(ctx, m, 11, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 153:61 >> 153:66 */
pdcrt_fijar_local_nb(ctx, m, 14, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 153:61 >> 153:66 */
pdcrt_fijar_local_nb(ctx, m, 13, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 153:61 >> 153:66 */
pdcrt_fijar_local_nb(ctx, m, 12, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 153:30 >> 153:31 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 2);
return pdcrt_llamar3(ctx, m->k.marco, m->k.kf, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 11)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 153:30 >> 153:31 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 153:30 >> 153:31 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 153:30 >> 153:31 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 153:30 >> 153:31 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 148:43 >> 148:49 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 148:43 >> 148:49 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 148:43 >> 148:49 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k189(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k189);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 148:14 >> 148:15 */
pdcrt_fijar_local(ctx, m, 17, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 148:14 >> 148:15 */
pdcrt_fijar_local_nb(ctx, m, 20, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 148:14 >> 148:15 */
pdcrt_fijar_local_nb(ctx, m, 19, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 148:14 >> 148:15 */
pdcrt_fijar_local_nb(ctx, m, 18, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 78:4 >> 156:23 */
pdcrt_fijar_local_nb(ctx, m, 17, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 156:13 >> 156:23 */
pdcrt_fijar_local(ctx, m, 17, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 16)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 156:4 >> 156:23 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 17)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 156:4 >> 156:23 */
pdcrt_fijar_local_nb(ctx, m, 17, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 77:0 >> 157:10 */
pdcrt_fijar_local_nb(ctx, m, 17, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 77:0 >> 157:10 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 17)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 77:0 >> 157:10 */
pdcrt_fijar_local_nb(ctx, m, 17, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k190(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k190);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 61)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 135), pdcrt_obtener_local(ctx, m, 136), "ParaCadaElemento", 16, true, pdc_mpdzibepd_N95_x_N95_algebraico_k191);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k191(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k191);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 114)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 135), pdcrt_obtener_local(ctx, m, 136), "ParaCadaElementoConÍndice", 26, true, pdc_mpdzibepd_N95_x_N95_algebraico_k192);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k192(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k192);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 62)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 135), pdcrt_obtener_local(ctx, m, 136), "Todos", 5, true, pdc_mpdzibepd_N95_x_N95_algebraico_k193);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k193(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k193);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 113)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 135), pdcrt_obtener_local(ctx, m, 136), "EsSubclase", 10, true, pdc_mpdzibepd_N95_x_N95_algebraico_k194);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k194(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k194);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 63)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 135), pdcrt_obtener_local(ctx, m, 136), "Contiene", 8, true, pdc_mpdzibepd_N95_x_N95_algebraico_k195);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k195(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k195);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 112)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 135), pdcrt_obtener_local(ctx, m, 136), "EsInstancia", 11, true, pdc_mpdzibepd_N95_x_N95_algebraico_k196);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k196(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k196);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 64)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 135), pdcrt_obtener_local(ctx, m, 136), "EsImpar", 7, true, pdc_mpdzibepd_N95_x_N95_algebraico_k197);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k197(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k197);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 111)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 135), pdcrt_obtener_local(ctx, m, 136), "ParaCadaNúmeroConPaso", 22, true, pdc_mpdzibepd_N95_x_N95_algebraico_k198);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k198(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k198);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 65)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 135), pdcrt_obtener_local(ctx, m, 136), "Escribir", 8, true, pdc_mpdzibepd_N95_x_N95_algebraico_k199);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k199(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k199);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 110)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 135), pdcrt_obtener_local(ctx, m, 136), "Identidad", 9, true, pdc_mpdzibepd_N95_x_N95_algebraico_k200);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k200(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k200);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 66)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 135), pdcrt_obtener_local(ctx, m, 136), "Reducir", 7, true, pdc_mpdzibepd_N95_x_N95_algebraico_k201);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k201(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k201);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 109)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 135), pdcrt_obtener_local(ctx, m, 136), "Mapear", 6, true, pdc_mpdzibepd_N95_x_N95_algebraico_k202);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k202(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k202);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 67)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 135), pdcrt_obtener_local(ctx, m, 136), "Filtrar", 7, true, pdc_mpdzibepd_N95_x_N95_algebraico_k203);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k203(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k203);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 108)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 135), pdcrt_obtener_local(ctx, m, 136), "Algún", 6, true, pdc_mpdzibepd_N95_x_N95_algebraico_k204);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k204(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k204);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 68)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 135), pdcrt_obtener_local(ctx, m, 136), "DígitoAEntero", 14, true, pdc_mpdzibepd_N95_x_N95_algebraico_k205);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k205(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k205);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 107)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 135), pdcrt_obtener_local(ctx, m, 136), "Elevar", 6, true, pdc_mpdzibepd_N95_x_N95_algebraico_k206);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k206(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k206);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 69)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 135), pdcrt_obtener_local(ctx, m, 136), "ConvertirAEntero", 16, true, pdc_mpdzibepd_N95_x_N95_algebraico_k207);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k207(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k207);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 106)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 135), pdcrt_obtener_local(ctx, m, 136), "ConvertirANúmero", 17, true, pdc_mpdzibepd_N95_x_N95_algebraico_k208);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k208(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k208);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 70)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 135), pdcrt_obtener_local(ctx, m, 136), "EsNúmeroEntero", 15, true, pdc_mpdzibepd_N95_x_N95_algebraico_k209);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k209(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k209);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 105)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 135), pdcrt_obtener_local(ctx, m, 136), "EsNúmero", 9, true, pdc_mpdzibepd_N95_x_N95_algebraico_k210);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k210(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k210);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 71)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 135), pdcrt_obtener_local(ctx, m, 136), "Concatenar", 10, true, pdc_mpdzibepd_N95_x_N95_algebraico_k211);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k211(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k211);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 104)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 135), pdcrt_obtener_local(ctx, m, 136), "ArregloConFinal", 15, true, pdc_mpdzibepd_N95_x_N95_algebraico_k212);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k212(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k212);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 72)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 135), pdcrt_obtener_local(ctx, m, 136), "Aplicar\'", 8, true, pdc_mpdzibepd_N95_x_N95_algebraico_k213);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k213(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k213);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 103)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 135), pdcrt_obtener_local(ctx, m, 136), "Aplicar\'i", 9, true, pdc_mpdzibepd_N95_x_N95_algebraico_k214);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k214(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k214);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 73)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 135), pdcrt_obtener_local(ctx, m, 136), "EnviarMensaje", 13, true, pdc_mpdzibepd_N95_x_N95_algebraico_k215);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k215(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k215);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 102)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 135), pdcrt_obtener_local(ctx, m, 136), "Resto", 5, true, pdc_mpdzibepd_N95_x_N95_algebraico_k216);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k216(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k216);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 74)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 135), pdcrt_obtener_local(ctx, m, 136), "Abs", 3, true, pdc_mpdzibepd_N95_x_N95_algebraico_k217);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k217(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k217);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 101)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 135), pdcrt_obtener_local(ctx, m, 136), "Mod", 3, true, pdc_mpdzibepd_N95_x_N95_algebraico_k218);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k218(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k218);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 75)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 135), pdcrt_obtener_local(ctx, m, 136), "EsPar", 5, true, pdc_mpdzibepd_N95_x_N95_algebraico_k219);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k219(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k219);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 100)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 135), pdcrt_obtener_local(ctx, m, 136), "Aplanar", 7, true, pdc_mpdzibepd_N95_x_N95_algebraico_k220);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k220(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k220);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 76)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 135), pdcrt_obtener_local(ctx, m, 136), "AplanarTodo", 11, true, pdc_mpdzibepd_N95_x_N95_algebraico_k221);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k221(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k221);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 99)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 135), pdcrt_obtener_local(ctx, m, 136), "PedazoDeArreglo", 15, true, pdc_mpdzibepd_N95_x_N95_algebraico_k222);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k222(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k222);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 77)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 135), pdcrt_obtener_local(ctx, m, 136), "PrimerElemento", 14, true, pdc_mpdzibepd_N95_x_N95_algebraico_k223);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k223(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k223);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 98)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 135), pdcrt_obtener_local(ctx, m, 136), "ÚltimoElemento", 15, true, pdc_mpdzibepd_N95_x_N95_algebraico_k224);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k224(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k224);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 78)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 135), pdcrt_obtener_local(ctx, m, 136), "ÚnicoElemento", 14, true, pdc_mpdzibepd_N95_x_N95_algebraico_k225);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k225(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k225);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 97)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 135), pdcrt_obtener_local(ctx, m, 136), "EsNulo", 6, true, pdc_mpdzibepd_N95_x_N95_algebraico_k226);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k226(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k226);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 79)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 135), pdcrt_obtener_local(ctx, m, 136), "Max", 3, true, pdc_mpdzibepd_N95_x_N95_algebraico_k227);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k227(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k227);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 96)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 135), pdcrt_obtener_local(ctx, m, 136), "Min", 3, true, pdc_mpdzibepd_N95_x_N95_algebraico_k228);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k228(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k228);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 80)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 135), pdcrt_obtener_local(ctx, m, 136), "NoImplementado", 14, true, pdc_mpdzibepd_N95_x_N95_algebraico_k229);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k229(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k229);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 95)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 135), pdcrt_obtener_local(ctx, m, 136), "MétodoAbstracto", 16, true, pdc_mpdzibepd_N95_x_N95_algebraico_k230);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k230(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k230);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 81)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 135), pdcrt_obtener_local(ctx, m, 136), "Inalcanzable", 12, true, pdc_mpdzibepd_N95_x_N95_algebraico_k231);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k231(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k231);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 94)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 135), pdcrt_obtener_local(ctx, m, 136), "LlamarConEC", 11, true, pdc_mpdzibepd_N95_x_N95_algebraico_k232);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k232(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k232);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 82)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 135), pdcrt_obtener_local(ctx, m, 136), "ArregloSinElementoEnÍndice", 27, true, pdc_mpdzibepd_N95_x_N95_algebraico_k233);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k233(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k233);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 93)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 135), pdcrt_obtener_local(ctx, m, 136), "LeerLínea", 10, true, pdc_mpdzibepd_N95_x_N95_algebraico_k234);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k234(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k234);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 83)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 135), pdcrt_obtener_local(ctx, m, 136), "LeerNúmero", 11, true, pdc_mpdzibepd_N95_x_N95_algebraico_k235);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k235(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k235);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 92)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 135), pdcrt_obtener_local(ctx, m, 136), "Parcial", 7, true, pdc_mpdzibepd_N95_x_N95_algebraico_k236);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k236(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k236);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 84)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 135), pdcrt_obtener_local(ctx, m, 136), "MétodoComoFunción", 19, true, pdc_mpdzibepd_N95_x_N95_algebraico_k237);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k237(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k237);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 91)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 135), pdcrt_obtener_local(ctx, m, 136), "OperadorBinario", 15, true, pdc_mpdzibepd_N95_x_N95_algebraico_k238);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k238(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k238);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 85)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 135), pdcrt_obtener_local(ctx, m, 136), "ContienePredicado", 17, true, pdc_mpdzibepd_N95_x_N95_algebraico_k239);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k239(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k239);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 90)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 135), pdcrt_obtener_local(ctx, m, 136), "BuscarPredicado", 15, true, pdc_mpdzibepd_N95_x_N95_algebraico_k240);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k240(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k240);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 86)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 135), pdcrt_obtener_local(ctx, m, 136), "ParaCadaElementoEnReversa", 25, true, pdc_mpdzibepd_N95_x_N95_algebraico_k241);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k241(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k241);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 2:33 >> 2:44 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 116)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 135), pdcrt_obtener_local(ctx, m, 136), "Diccionario", 11, false, pdc_mpdzibepd_N95_x_N95_algebraico_k242);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k242(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k242);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 87)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 135), pdcrt_obtener_local(ctx, m, 136), "Resultado", 9, false, pdc_mpdzibepd_N95_x_N95_algebraico_k243);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k243(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k243);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 88)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 135), pdcrt_obtener_local(ctx, m, 136), "Pila", 4, false, pdc_mpdzibepd_N95_x_N95_algebraico_k244);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k244(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k244);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 3:34 >> 3:41 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 117)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 135), pdcrt_obtener_local(ctx, m, 136), "Únicos", 7, true, pdc_mpdzibepd_N95_x_N95_algebraico_k245);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k245(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k245);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 4:32 >> 4:36 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 118)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 135), pdcrt_obtener_local(ctx, m, 136), "Unir", 4, true, pdc_mpdzibepd_N95_x_N95_algebraico_k246);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k246(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k246);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 5:38 >> 5:64 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_obtener_local(ctx, m, 119));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 135), pdcrt_obtener_local(ctx, m, 136), "ALFABETO_ASCII_MAYÚSCULAS", 26, false, pdc_mpdzibepd_N95_x_N95_algebraico_k247);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k247(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k247);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 5:66 >> 5:92 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_obtener_local(ctx, m, 120));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 135), pdcrt_obtener_local(ctx, m, 136), "ALFABETO_ASCII_MINÚSCULAS", 26, false, pdc_mpdzibepd_N95_x_N95_algebraico_k248);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k248(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k248);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 6:22 >> 6:39 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 121)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 135), pdcrt_obtener_local(ctx, m, 136), "ParaCadaCodepoint", 17, true, pdc_mpdzibepd_N95_x_N95_algebraico_k249);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k249(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k249);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 8:23 >> 8:34 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 122)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 135), pdcrt_obtener_local(ctx, m, 136), "TipoDeDatos", 11, true, pdc_mpdzibepd_N95_x_N95_algebraico_k250);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k250(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k250);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 11:9 >> 11:21 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 123)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 135), pdcrt_obtener_local(ctx, m, 136), "númAtributo", 12, false, pdc_mpdzibepd_N95_x_N95_algebraico_k251);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k251(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k251);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 13:14 >> 13:29 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 124)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 135), pdcrt_obtener_local(ctx, m, 136), "GenerarAtributo", 15, true, pdc_mpdzibepd_N95_x_N95_algebraico_k252);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k252(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k252);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 18:10 >> 18:32 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_obtener_local(ctx, m, 125));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 135), pdcrt_obtener_local(ctx, m, 136), "ESPECIALES_MINÚSCULAS", 22, false, pdc_mpdzibepd_N95_x_N95_algebraico_k253);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k253(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k253);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 18:34 >> 18:56 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_obtener_local(ctx, m, 126));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 135), pdcrt_obtener_local(ctx, m, 136), "ESPECIALES_MAYÚSCULAS", 22, false, pdc_mpdzibepd_N95_x_N95_algebraico_k254);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k254(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k254);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 22:9 >> 22:26 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 127)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 135), pdcrt_obtener_local(ctx, m, 136), "TABLA_MINÚSCULAS", 17, false, pdc_mpdzibepd_N95_x_N95_algebraico_k255);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k255(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k255);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 22:28 >> 22:45 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 128)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 135), pdcrt_obtener_local(ctx, m, 136), "TABLA_MAYÚSCULAS", 17, false, pdc_mpdzibepd_N95_x_N95_algebraico_k256);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k256(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k256);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 26:8 >> 26:18 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 129)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 135), pdcrt_obtener_local(ctx, m, 136), "Mayúscula", 10, true, pdc_mpdzibepd_N95_x_N95_algebraico_k257);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k257(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k257);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 38:8 >> 38:19 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 130)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 135), pdcrt_obtener_local(ctx, m, 136), "Capitalizar", 11, true, pdc_mpdzibepd_N95_x_N95_algebraico_k258);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k258(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k258);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 65:8 >> 65:26 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 131)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 135), pdcrt_obtener_local(ctx, m, 136), "AtributoConPrefijo", 18, true, pdc_mpdzibepd_N95_x_N95_algebraico_k259);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k259(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k259);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 69:9 >> 69:24 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 132)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 135), pdcrt_obtener_local(ctx, m, 136), "AlternativaImpl", 15, false, pdc_mpdzibepd_N95_x_N95_algebraico_k260);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k260(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k260);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 72:8 >> 72:19 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 133)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 135), pdcrt_obtener_local(ctx, m, 136), "Alternativa", 11, true, pdc_mpdzibepd_N95_x_N95_algebraico_k261);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k261(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k261);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 77:8 >> 77:22 */
pdcrt_fijar_local(ctx, m, 136, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 134)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 135), pdcrt_obtener_local(ctx, m, 136), "TipoAlgebraico", 14, true, pdc_mpdzibepd_N95_x_N95_algebraico_k262);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_algebraico_k262(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_algebraico_k262);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
return pdcrt_exportar(ctx, m, pdcrt_obtener_local(ctx, m, 135), "pdzibepd_N95_x_N95_algebraico", 29);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/algebraico.pd" => 1:0 >> 157:10 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
}
PDCRT_DECLARAR_ENTRYPOINT(pdzibepd_N95_x_N95_algebraico, pdc_mpdzibepd_N95_x_N95_algebraico_f20)
#ifdef PDCRT_MAIN
#define PDCRT_DEPS(X) \
    X(pdzibepd_N95_x_N95_algebraico, "pdzibepd_N95_x_N95_algebraico", 29) \
    X(pdzibepd_N95_x_N95_adhoc, "pdzibepd_N95_x_N95_adhoc", 24) \
    X(pdzibepd_N95_builtins, "pdzibepd_N95_builtins", 21) \
    X(pdzibepd_N95_datos_N95_conjunto, "pdzibepd_N95_datos_N95_conjunto", 31) \
    X(pdzibepd_N95_builtinsImpl, "pdzibepd_N95_builtinsImpl", 25) \
    X(pdzibepd_N95_datos_N95_pila, "pdzibepd_N95_datos_N95_pila", 27) \
    X(pdzibepd_N95_datos_N95_diccionario, "pdzibepd_N95_datos_N95_diccionario", 34) \
    X(pdzibepd_N95_datos_N95_diccionario_N95_hashmap, "pdzibepd_N95_datos_N95_diccionario_N95_hashmap", 46) \
    X(pdzibepd_N95_datos_N95_diccionario_N95_interfaz, "pdzibepd_N95_datos_N95_diccionario_N95_interfaz", 47) \
    X(pdzibepd_N95_datos_N95_diccionario_N95_alist, "pdzibepd_N95_datos_N95_diccionario_N95_alist", 44) \
    X(pdzibepd_N95_datos_N95_resultado, "pdzibepd_N95_datos_N95_resultado", 32) \
    X(pdzibepd_N95_utilidades_N95_arreglo, "pdzibepd_N95_utilidades_N95_arreglo", 35) \
    X(pdzibepd_N95_utilidades_N95_texto, "pdzibepd_N95_utilidades_N95_texto", 33) \
    X(pdzibepd_N95_utilidades_N95_texto_N95_ascii, "pdzibepd_N95_utilidades_N95_texto_N95_ascii", 43) \
    X(pdzibepd_N95_x_N95_utf8, "pdzibepd_N95_x_N95_utf8", 23) \
    X(pdzibepd_N95_x_N95_datos, "pdzibepd_N95_x_N95_datos", 24)
PDCRT_DECLARAR_DEPS(PDCRT_DEPS)
PDCRT_DECLARAR_MAIN(pdzibepd_N95_x_N95_algebraico)
#endif
