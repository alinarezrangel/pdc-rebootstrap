#define PDCRT_INTERNO
#include "pdcrt/pdcrt.h"
#include "pdcrt/pdcrt_ops.h"
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_f0(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_f1(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_f2(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k0(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k1(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k2(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k3(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k4(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k5(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k6(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k7(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k8(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k9(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k10(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k11(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k12(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k13(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k14(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k15(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k16(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k17(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k18(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k19(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k20(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k21(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k22(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k23(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k24(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k25(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k26(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k27(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k28(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k29(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k30(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k31(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k32(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k33(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k34(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k35(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k36(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k37(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k38(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k39(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k40(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k41(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k42(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k43(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k44(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k45(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k46(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k47(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k48(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k49(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k50(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k51(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k52(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k53(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k54(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k55(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k56(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k57(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k58(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k59(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k60(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k61(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k62(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k63(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k64(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k65(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k66(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k67(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k68(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k69(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k70(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k71(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k72(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k73(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k74(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k75(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k76(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k77(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k78(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k79(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k80(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k81(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k82(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k83(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k84(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k85(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k86(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k87(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k88(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k89(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k90(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k91(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k92(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k93(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k94(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k95(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k96(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k97(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k98(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k99(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k100(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k101(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k102(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k103(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k104(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k105(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k106(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k107(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k108(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k109(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k110(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k111(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k112(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k113(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k114(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k115(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k116(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k117(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k118(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k119(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k120(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k121(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k122(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k123(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k124(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k125(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k126(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k127(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k128(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k129(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k130(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k131(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k132(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k133(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k134(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k135(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k136(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k137(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k138(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k139(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k140(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k141(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k142(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k143(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k144(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k145(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k146(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k147(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k148(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k149(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k150(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k151(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k152(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k153(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k154(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k155(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k156(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k157(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k158(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k159(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k160(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k161(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k162(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k163(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k164(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k165(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k166(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k167(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_f0(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 51:4 >> 84:13 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd|51:4|84:13";
PDCRT_ALOJAR_MARCO(ctx, 13, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_x_N95_adhoc_p0 { const pdcrt_params_base base; const pdcrt_param_data params[3]; };
static const struct pdc_params_data_mpdzibepd_N95_x_N95_adhoc_p0 pdc_params = { .base = { .num_params = 3, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{6}, {7}, {8}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 51:51 >> 51:61 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 51:51 >> 51:61 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_obtener_local(ctx, m, 8));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 51:51 >> 51:61 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 51:42 >> 51:49 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 51:42 >> 51:49 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_obtener_local(ctx, m, 7));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 51:42 >> 51:49 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 51:4 >> 84:13 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 51:4 >> 84:13 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_obtener_local(ctx, m, 6));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 51:4 >> 84:13 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 65:18 >> 65:25 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 65:27 >> 65:36 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 52:12 >> 52:19 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_obtener_local(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 52:22 >> 52:34 */
pdcrt_fijar_local(ctx, m, 9, PDCRT_OBTENER_CONSTANTE(ctx, m, 5));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 52:12 >> 52:34 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 5);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_adhoc_k59, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_f1(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 46:0 >> 87:10 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd|46:0|87:10";
PDCRT_ALOJAR_MARCO(ctx, 8, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_x_N95_adhoc_p1 { const pdcrt_params_base base; const pdcrt_param_data params[1]; };
static const struct pdc_params_data_mpdzibepd_N95_x_N95_adhoc_p1 pdc_params = { .base = { .num_params = 1, .tiene_variadic = true, .idc_variadic = 0, }, .params = {{4}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 46:24 >> 46:29 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 46:24 >> 46:29 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_obtener_local(ctx, m, 4));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 46:24 >> 46:29 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 47:13 >> 47:16 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 47:13 >> 47:16 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 4));
pdcrt_fijar_local(ctx, m, 2, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 47:13 >> 47:16 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 50:10 >> 50:20 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 48:16 >> 48:27 */
pdcrt_fijar_local(ctx, m, 5, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 48:43 >> 48:48 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_obtener_local(ctx, m, 1));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 48:27 >> 48:28 */
static const int proto[] =
{ 1, };
pdcrt_extender_pila(ctx, 1);
pdcrt_empujar(ctx, pdcrt_obtener_local(ctx, m, 6));
size_t llamar_nargs = pdcrt_expandir_varargs(ctx, proto, 1);
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 0);
return pdcrt_llamarn(ctx, m, pdc_mpdzibepd_N95_x_N95_adhoc_k56, llamar_nargs, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_f2(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd|1:0|87:10";
PDCRT_ALOJAR_MARCO(ctx, 105, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_x_N95_adhoc_p2 { const pdcrt_params_base base; const pdcrt_param_data params[1]; };
static const struct pdc_params_data_mpdzibepd_N95_x_N95_adhoc_p2 pdc_params = { .base = { .num_params = 0, .tiene_variadic = false, .idc_variadic = 0, }, .params = {} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
PDCRT_DEFINE_RAICES(2);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_arreglo *constantes = pdcrt_crear_arreglo_vacio(ctx, PDCRT_GC(), 24LLU);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "desdePares", 10));
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
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "ClaseAdHoc", 10));
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
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "metodoNoEncontrado", 18));
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
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "igualA", 6));
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
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "No se pueden comparar los objetos ad-hoc por igualdad.", 54));
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
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "clonar", 6));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "__ClonarObjeto", 14));
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
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "(ObjetoAdHoc: ~t)", 17));
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
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "No exíste el atributo [~t] en el objeto (del método ~t)", 57));
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
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "crear", 5));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
PDCRT_FIJAR_CONSTANTES(ctx, m, constantes);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 48, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 50, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 103));
pdcrt_fijar_local(ctx, m, 52, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 103));
pdcrt_fijar_local(ctx, m, 54, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 103));
pdcrt_fijar_local(ctx, m, 56, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 103));
pdcrt_fijar_local(ctx, m, 58, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 103));
pdcrt_fijar_local(ctx, m, 60, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 103));
pdcrt_fijar_local(ctx, m, 62, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 103));
pdcrt_fijar_local(ctx, m, 64, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 103));
pdcrt_fijar_local(ctx, m, 66, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 103));
pdcrt_fijar_local(ctx, m, 68, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 103));
pdcrt_fijar_local(ctx, m, 70, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 103));
pdcrt_fijar_local(ctx, m, 72, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 103));
pdcrt_fijar_local(ctx, m, 74, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 103));
pdcrt_fijar_local(ctx, m, 76, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 103));
pdcrt_fijar_local(ctx, m, 78, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 103));
pdcrt_fijar_local(ctx, m, 80, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 103));
pdcrt_fijar_local(ctx, m, 82, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 103));
pdcrt_fijar_local(ctx, m, 84, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 103));
pdcrt_fijar_local(ctx, m, 86, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 103));
pdcrt_fijar_local(ctx, m, 88, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 103));
pdcrt_fijar_local(ctx, m, 90, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 103));
pdcrt_fijar_local(ctx, m, 92, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 103));
pdcrt_fijar_local(ctx, m, 94, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 103));
pdcrt_fijar_local(ctx, m, 96, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 98, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 100, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 101, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 103));
pdcrt_fijar_local(ctx, m, 99, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 103));
pdcrt_fijar_local(ctx, m, 97, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 103));
pdcrt_fijar_local(ctx, m, 95, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 103));
pdcrt_fijar_local(ctx, m, 93, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 103));
pdcrt_fijar_local(ctx, m, 91, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 103));
pdcrt_fijar_local(ctx, m, 89, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 103));
pdcrt_fijar_local(ctx, m, 87, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 103));
pdcrt_fijar_local(ctx, m, 85, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 103));
pdcrt_fijar_local(ctx, m, 83, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 103));
pdcrt_fijar_local(ctx, m, 81, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 103));
pdcrt_fijar_local(ctx, m, 79, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 103));
pdcrt_fijar_local(ctx, m, 77, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 103));
pdcrt_fijar_local(ctx, m, 75, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 103));
pdcrt_fijar_local(ctx, m, 73, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 103));
pdcrt_fijar_local(ctx, m, 71, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 103));
pdcrt_fijar_local(ctx, m, 69, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 103));
pdcrt_fijar_local(ctx, m, 67, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 103));
pdcrt_fijar_local(ctx, m, 65, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 103));
pdcrt_fijar_local(ctx, m, 63, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 103));
pdcrt_fijar_local(ctx, m, 61, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 103));
pdcrt_fijar_local(ctx, m, 59, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 103));
pdcrt_fijar_local(ctx, m, 57, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 103));
pdcrt_fijar_local(ctx, m, 55, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 103));
pdcrt_fijar_local(ctx, m, 53, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 103));
pdcrt_fijar_local(ctx, m, 51, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 49, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 47, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 46:8 >> 46:19 */
pdcrt_fijar_local_nb(ctx, m, 102, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
return pdcrt_importar(ctx, m, "pdzibepd_N95_builtins", 21, pdc_mpdzibepd_N95_x_N95_adhoc_k0);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k0(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 103, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 103), "ParaCadaElemento", 16, pdc_mpdzibepd_N95_x_N95_adhoc_k1);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k1(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 47, pdcrt_obtener_local(ctx, m, 104));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 103), "Todos", 5, pdc_mpdzibepd_N95_x_N95_adhoc_k2);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k2(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k2);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 48, pdcrt_obtener_local(ctx, m, 104));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 103), "Contiene", 8, pdc_mpdzibepd_N95_x_N95_adhoc_k3);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k3(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k3);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 49, pdcrt_obtener_local(ctx, m, 104));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 103), "EsImpar", 7, pdc_mpdzibepd_N95_x_N95_adhoc_k4);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k4(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k4);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 50, pdcrt_obtener_local(ctx, m, 104));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 103), "Escribir", 8, pdc_mpdzibepd_N95_x_N95_adhoc_k5);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k5(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k5);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 51), pdcrt_obtener_local(ctx, m, 104));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 103), "Reducir", 7, pdc_mpdzibepd_N95_x_N95_adhoc_k6);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k6(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k6);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 52), pdcrt_obtener_local(ctx, m, 104));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 103), "Filtrar", 7, pdc_mpdzibepd_N95_x_N95_adhoc_k7);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k7(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k7);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 53), pdcrt_obtener_local(ctx, m, 104));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 103), "DígitoAEntero", 14, pdc_mpdzibepd_N95_x_N95_adhoc_k8);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k8(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k8);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 54), pdcrt_obtener_local(ctx, m, 104));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 103), "ConvertirAEntero", 16, pdc_mpdzibepd_N95_x_N95_adhoc_k9);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k9(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k9);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 55), pdcrt_obtener_local(ctx, m, 104));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 103), "EsNúmeroEntero", 15, pdc_mpdzibepd_N95_x_N95_adhoc_k10);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k10(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k10);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 56), pdcrt_obtener_local(ctx, m, 104));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 103), "Concatenar", 10, pdc_mpdzibepd_N95_x_N95_adhoc_k11);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k11(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k11);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 57), pdcrt_obtener_local(ctx, m, 104));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 103), "Aplicar\'", 8, pdc_mpdzibepd_N95_x_N95_adhoc_k12);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k12(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k12);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 58), pdcrt_obtener_local(ctx, m, 104));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 103), "EnviarMensaje", 13, pdc_mpdzibepd_N95_x_N95_adhoc_k13);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k13(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k13);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 59), pdcrt_obtener_local(ctx, m, 104));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 103), "Abs", 3, pdc_mpdzibepd_N95_x_N95_adhoc_k14);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k14(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k14);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 60), pdcrt_obtener_local(ctx, m, 104));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 103), "EsPar", 5, pdc_mpdzibepd_N95_x_N95_adhoc_k15);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k15(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k15);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 61), pdcrt_obtener_local(ctx, m, 104));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 103), "AplanarTodo", 11, pdc_mpdzibepd_N95_x_N95_adhoc_k16);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k16(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k16);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 62), pdcrt_obtener_local(ctx, m, 104));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 103), "PrimerElemento", 14, pdc_mpdzibepd_N95_x_N95_adhoc_k17);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k17(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k17);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 63), pdcrt_obtener_local(ctx, m, 104));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 103), "ÚnicoElemento", 14, pdc_mpdzibepd_N95_x_N95_adhoc_k18);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k18(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k18);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 64), pdcrt_obtener_local(ctx, m, 104));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 103), "Max", 3, pdc_mpdzibepd_N95_x_N95_adhoc_k19);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k19(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k19);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 65), pdcrt_obtener_local(ctx, m, 104));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 103), "NoImplementado", 14, pdc_mpdzibepd_N95_x_N95_adhoc_k20);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k20(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k20);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 66), pdcrt_obtener_local(ctx, m, 104));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 103), "Inalcanzable", 12, pdc_mpdzibepd_N95_x_N95_adhoc_k21);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k21(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k21);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 67), pdcrt_obtener_local(ctx, m, 104));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 103), "ArregloSinElementoEnÍndice", 27, pdc_mpdzibepd_N95_x_N95_adhoc_k22);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k22(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k22);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 68), pdcrt_obtener_local(ctx, m, 104));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 103), "LeerNúmero", 11, pdc_mpdzibepd_N95_x_N95_adhoc_k23);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k23(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k23);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 69), pdcrt_obtener_local(ctx, m, 104));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 103), "MétodoComoFunción", 19, pdc_mpdzibepd_N95_x_N95_adhoc_k24);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k24(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k24);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 70), pdcrt_obtener_local(ctx, m, 104));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 103), "ContienePredicado", 17, pdc_mpdzibepd_N95_x_N95_adhoc_k25);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k25(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k25);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 71), pdcrt_obtener_local(ctx, m, 104));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 103), "ParaCadaElementoEnReversa", 25, pdc_mpdzibepd_N95_x_N95_adhoc_k26);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k26(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k26);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 72), pdcrt_obtener_local(ctx, m, 104));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 103), "Resultado", 9, pdc_mpdzibepd_N95_x_N95_adhoc_k27);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k27(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k27);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 73), pdcrt_obtener_local(ctx, m, 104));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 103), "Pila", 4, pdc_mpdzibepd_N95_x_N95_adhoc_k28);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k28(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k28);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 74), pdcrt_obtener_local(ctx, m, 104));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 103), "Diccionario", 11, pdc_mpdzibepd_N95_x_N95_adhoc_k29);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k29(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k29);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 75), pdcrt_obtener_local(ctx, m, 104));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 103), "BuscarPredicado", 15, pdc_mpdzibepd_N95_x_N95_adhoc_k30);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k30(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k30);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 76), pdcrt_obtener_local(ctx, m, 104));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 103), "OperadorBinario", 15, pdc_mpdzibepd_N95_x_N95_adhoc_k31);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k31(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k31);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 77), pdcrt_obtener_local(ctx, m, 104));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 103), "Parcial", 7, pdc_mpdzibepd_N95_x_N95_adhoc_k32);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k32(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k32);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 78), pdcrt_obtener_local(ctx, m, 104));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 103), "LeerLínea", 10, pdc_mpdzibepd_N95_x_N95_adhoc_k33);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k33(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k33);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 79), pdcrt_obtener_local(ctx, m, 104));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 103), "LlamarConEC", 11, pdc_mpdzibepd_N95_x_N95_adhoc_k34);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k34(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k34);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 80), pdcrt_obtener_local(ctx, m, 104));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 103), "MétodoAbstracto", 16, pdc_mpdzibepd_N95_x_N95_adhoc_k35);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k35(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k35);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 81), pdcrt_obtener_local(ctx, m, 104));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 103), "Min", 3, pdc_mpdzibepd_N95_x_N95_adhoc_k36);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k36(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k36);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 82), pdcrt_obtener_local(ctx, m, 104));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 103), "EsNulo", 6, pdc_mpdzibepd_N95_x_N95_adhoc_k37);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k37(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k37);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 83), pdcrt_obtener_local(ctx, m, 104));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 103), "ÚltimoElemento", 15, pdc_mpdzibepd_N95_x_N95_adhoc_k38);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k38(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k38);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 84), pdcrt_obtener_local(ctx, m, 104));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 103), "PedazoDeArreglo", 15, pdc_mpdzibepd_N95_x_N95_adhoc_k39);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k39(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k39);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 85), pdcrt_obtener_local(ctx, m, 104));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 103), "Aplanar", 7, pdc_mpdzibepd_N95_x_N95_adhoc_k40);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k40(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k40);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 86), pdcrt_obtener_local(ctx, m, 104));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 103), "Mod", 3, pdc_mpdzibepd_N95_x_N95_adhoc_k41);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k41(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k41);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 87), pdcrt_obtener_local(ctx, m, 104));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 103), "Resto", 5, pdc_mpdzibepd_N95_x_N95_adhoc_k42);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k42(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k42);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 88), pdcrt_obtener_local(ctx, m, 104));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 103), "Aplicar\'i", 9, pdc_mpdzibepd_N95_x_N95_adhoc_k43);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k43(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k43);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 89), pdcrt_obtener_local(ctx, m, 104));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 103), "ArregloConFinal", 15, pdc_mpdzibepd_N95_x_N95_adhoc_k44);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k44(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k44);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 90), pdcrt_obtener_local(ctx, m, 104));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 103), "EsNúmero", 9, pdc_mpdzibepd_N95_x_N95_adhoc_k45);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k45(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k45);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 91), pdcrt_obtener_local(ctx, m, 104));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 103), "ConvertirANúmero", 17, pdc_mpdzibepd_N95_x_N95_adhoc_k46);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k46(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k46);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 92), pdcrt_obtener_local(ctx, m, 104));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 103), "Elevar", 6, pdc_mpdzibepd_N95_x_N95_adhoc_k47);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k47(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k47);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 93), pdcrt_obtener_local(ctx, m, 104));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 103), "Algún", 6, pdc_mpdzibepd_N95_x_N95_adhoc_k48);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k48(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k48);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 94), pdcrt_obtener_local(ctx, m, 104));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 103), "Mapear", 6, pdc_mpdzibepd_N95_x_N95_adhoc_k49);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k49(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k49);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 95), pdcrt_obtener_local(ctx, m, 104));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 103), "Identidad", 9, pdc_mpdzibepd_N95_x_N95_adhoc_k50);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k50(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k50);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 96), pdcrt_obtener_local(ctx, m, 104));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 103), "ParaCadaNúmeroConPaso", 22, pdc_mpdzibepd_N95_x_N95_adhoc_k51);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k51(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k51);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 97), pdcrt_obtener_local(ctx, m, 104));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 103), "EsInstancia", 11, pdc_mpdzibepd_N95_x_N95_adhoc_k52);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k52(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k52);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 98, pdcrt_obtener_local(ctx, m, 104));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 103), "EsSubclase", 10, pdc_mpdzibepd_N95_x_N95_adhoc_k53);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k53(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k53);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 99), pdcrt_obtener_local(ctx, m, 104));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 103), "ParaCadaElementoConÍndice", 26, pdc_mpdzibepd_N95_x_N95_adhoc_k54);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k54(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k54);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 100, pdcrt_obtener_local(ctx, m, 104));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 103), "ParaCadaNúmero", 15, pdc_mpdzibepd_N95_x_N95_adhoc_k55);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k55(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k55);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 101, pdcrt_obtener_local(ctx, m, 104));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 46:0 >> 87:10 */
do {
static const pdcrt_captura caps[] = {{75}};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzibepd_N95_x_N95_adhoc_f1, caps, 1);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 103, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 46:8 >> 46:19 */
pdcrt_fijar_local_nb(ctx, m, 102, pdcrt_obtener_local(ctx, m, 103));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 46:8 >> 46:19 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cons = pdcrt_crear_espacio_de_nombres_cons(ctx, PDCRT_GC());
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 103, cons);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_obtener_local(ctx, m, 101));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 103), pdcrt_obtener_local(ctx, m, 104), "ParaCadaNúmero", 15, true, pdc_mpdzibepd_N95_x_N95_adhoc_k112);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k56(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k56);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 48:27 >> 48:28 */
pdcrt_fijar_local(ctx, m, 4, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 48:27 >> 48:28 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 48:27 >> 48:28 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 48:10 >> 48:13 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 2), pdcrt_obtener_local(ctx, m, 4));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 48:10 >> 48:13 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 50:4 >> 50:9 */
pdcrt_fijar_local(ctx, m, 5, ctx->clase_objeto);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 50:4 >> 50:9 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 1);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_adhoc_k57, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k57(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k57);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 50:4 >> 50:9 */
pdcrt_fijar_local(ctx, m, 4, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 50:4 >> 50:9 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 50:10 >> 50:20 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_obtener_local(ctx, m, 4));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 50:10 >> 50:20 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 50:10 >> 50:20 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_obtener_local(ctx, m, 3));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 50:4 >> 50:9 */
pdcrt_fijar_local(ctx, m, 6, PDCRT_OBTENER_CONSTANTE(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 50:4 >> 50:9 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 3);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_adhoc_k58, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k58(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k58);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 50:4 >> 50:9 */
pdcrt_fijar_local(ctx, m, 4, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 50:4 >> 50:9 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 50:4 >> 50:9 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 47:4 >> 86:24 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 51:11 >> 51:21 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_obtener_local(ctx, m, 3));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 51:22 >> 51:40 */
pdcrt_fijar_local(ctx, m, 6, PDCRT_OBTENER_CONSTANTE(ctx, m, 4));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 51:4 >> 84:13 */
do {
static const pdcrt_captura caps[] = {{2}};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzibepd_N95_x_N95_adhoc_f0, caps, 1);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 7, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 51:4 >> 84:13 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 22);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_x_N95_adhoc_k111, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k59(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k59);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 52:12 >> 52:34 */
pdcrt_fijar_local(ctx, m, 7, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 52:12 >> 52:34 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 52:12 >> 52:34 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 52:40 >> 52:47 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_obtener_local(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 52:50 >> 52:58 */
pdcrt_fijar_local(ctx, m, 10, PDCRT_OBTENER_CONSTANTE(ctx, m, 6));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 52:40 >> 52:58 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 5);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_adhoc_k60, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k60(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k60);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 52:40 >> 52:58 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 52:40 >> 52:58 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 52:40 >> 52:58 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 52:12 >> 52:58 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 7);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_adhoc_k61, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k61(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k61);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 52:12 >> 52:58 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 52:12 >> 52:58 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 52:12 >> 52:58 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 52:8 >> 55:13 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 6);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 52:8 >> 55:13 */
pdcrt_obj csaltar_obj = pdcrt_obtener_local(ctx, m, 7);
if(csaltar_obj.recv != &pdcrt_recv_booleano) pdcrt_error(ctx, "Se esperaba un objeto de tipo Boole");
if(csaltar_obj.bval)
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_adhoc_k67, PDCRT_XMM_NULO());
else
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_adhoc_k62, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k62(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k62);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 52:8 >> 55:13 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 52:8 >> 55:13 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 53:22 >> 53:32 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_obtener_local(ctx, m, 3));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 53:32 >> 53:33 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 8);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_adhoc_k63, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k63(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k63);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 53:32 >> 53:33 */
pdcrt_fijar_local(ctx, m, 7, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 53:32 >> 53:33 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 53:44 >> 53:45 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_entero(PDCRT_ENTERO_C(1)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 53:32 >> 53:45 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 5);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_adhoc_k64, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k64(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k64);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 53:32 >> 53:45 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 53:32 >> 53:45 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 53:32 >> 53:45 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 53:12 >> 53:45 */
pdcrt_assert(ctx, pdcrt_obtener_local(ctx, m, 6));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 53:12 >> 53:45 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 54:12 >> 54:30 */
pdcrt_fijar_local(ctx, m, 7, ctx->espacio_de_nombres_runtime);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 54:32 >> 54:88 */
pdcrt_fijar_local(ctx, m, 8, PDCRT_OBTENER_CONSTANTE(ctx, m, 9));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 54:12 >> 54:30 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 10);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_adhoc_k65, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k65(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k65);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 54:12 >> 54:30 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 54:12 >> 54:30 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 54:12 >> 54:30 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 53:12 >> 54:31 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 52:8 >> 55:13 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_adhoc_k68, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k66(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k66);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_adhoc_k67, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k67(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k67);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_adhoc_k68, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k68(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k68);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 56:11 >> 56:18 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_obtener_local(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 56:21 >> 56:29 */
pdcrt_fijar_local(ctx, m, 8, PDCRT_OBTENER_CONSTANTE(ctx, m, 11));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 56:11 >> 56:29 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 5);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_adhoc_k69, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k69(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k69);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 56:11 >> 56:29 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 56:11 >> 56:29 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 56:11 >> 56:29 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 56:8 >> 59:13 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 6);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 56:8 >> 59:13 */
pdcrt_obj csaltar_obj = pdcrt_obtener_local(ctx, m, 7);
if(csaltar_obj.recv != &pdcrt_recv_booleano) pdcrt_error(ctx, "Se esperaba un objeto de tipo Boole");
if(csaltar_obj.bval)
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_adhoc_k75, PDCRT_XMM_NULO());
else
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_adhoc_k70, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k70(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k70);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 56:8 >> 59:13 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 56:8 >> 59:13 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 57:22 >> 57:32 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_obtener_local(ctx, m, 3));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 57:32 >> 57:33 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 8);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_adhoc_k71, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k71(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k71);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 57:32 >> 57:33 */
pdcrt_fijar_local(ctx, m, 7, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 57:32 >> 57:33 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 57:44 >> 57:45 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_entero(PDCRT_ENTERO_C(0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 57:32 >> 57:45 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 5);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_adhoc_k72, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k72(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k72);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 57:32 >> 57:45 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 57:32 >> 57:45 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 57:32 >> 57:45 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 57:12 >> 57:45 */
pdcrt_assert(ctx, pdcrt_obtener_local(ctx, m, 6));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 57:12 >> 57:45 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 58:21 >> 58:35 */
pdcrt_fijar_local(ctx, m, 7, ctx->espacio_de_nombres_runtime);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 58:37 >> 58:39 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_obtener_local(ctx, m, 1));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 58:21 >> 58:35 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 12);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_adhoc_k73, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k73(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k73);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 58:21 >> 58:35 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 58:21 >> 58:35 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 58:21 >> 58:35 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 58:12 >> 58:36 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 58:12 >> 58:36 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 56:8 >> 59:13 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_adhoc_k76, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k74(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k74);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_adhoc_k75, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k75(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k75);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_adhoc_k76, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k76(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k76);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 60:11 >> 60:18 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_obtener_local(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 60:21 >> 60:32 */
pdcrt_fijar_local(ctx, m, 8, PDCRT_OBTENER_CONSTANTE(ctx, m, 13));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 60:11 >> 60:32 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 5);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_adhoc_k77, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k77(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k77);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 60:11 >> 60:32 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 60:11 >> 60:32 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 60:11 >> 60:32 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 60:8 >> 63:13 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 6);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 60:8 >> 63:13 */
pdcrt_obj csaltar_obj = pdcrt_obtener_local(ctx, m, 7);
if(csaltar_obj.recv != &pdcrt_recv_booleano) pdcrt_error(ctx, "Se esperaba un objeto de tipo Boole");
if(csaltar_obj.bval)
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_adhoc_k82, PDCRT_XMM_NULO());
else
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_adhoc_k78, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k78(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k78);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 60:8 >> 63:13 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 60:8 >> 63:13 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 61:22 >> 61:32 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_obtener_local(ctx, m, 3));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 61:32 >> 61:33 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 8);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_adhoc_k79, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k79(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k79);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 61:32 >> 61:33 */
pdcrt_fijar_local(ctx, m, 7, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 61:32 >> 61:33 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 61:44 >> 61:45 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_entero(PDCRT_ENTERO_C(0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 61:32 >> 61:45 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 5);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_adhoc_k80, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k80(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k80);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 61:32 >> 61:45 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 61:32 >> 61:45 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 61:32 >> 61:45 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 61:12 >> 61:45 */
pdcrt_assert(ctx, pdcrt_obtener_local(ctx, m, 6));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 61:12 >> 61:45 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 62:21 >> 62:40 */
pdcrt_fijar_local(ctx, m, 7, PDCRT_OBTENER_CONSTANTE(ctx, m, 14));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 62:52 >> 62:55 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 62:40 >> 62:41 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 15);
return pdcrt_llamar1(ctx, m->k.marco, m->k.kf, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 62:40 >> 62:41 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 62:40 >> 62:41 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 60:8 >> 63:13 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_adhoc_k83, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k81(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k81);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_adhoc_k82, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k82(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k82);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_adhoc_k83, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k83(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k83);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 66:25 >> 66:32 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_obtener_local(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 66:43 >> 66:44 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_entero(PDCRT_ENTERO_C(0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 66:46 >> 66:54 */
pdcrt_fijar_local(ctx, m, 12, PDCRT_OBTENER_CONSTANTE(ctx, m, 16));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 66:54 >> 66:55 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 8);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_adhoc_k84, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 12)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k84(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k84);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 66:54 >> 66:55 */
pdcrt_fijar_local(ctx, m, 11, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 66:54 >> 66:55 */
pdcrt_fijar_local_nb(ctx, m, 12, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 66:32 >> 66:33 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 17);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_x_N95_adhoc_k85, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 11)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k85(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k85);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 66:32 >> 66:33 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 66:32 >> 66:33 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 66:32 >> 66:33 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 66:32 >> 66:33 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 66:67 >> 66:75 */
pdcrt_fijar_local(ctx, m, 9, PDCRT_OBTENER_CONSTANTE(ctx, m, 16));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 66:32 >> 66:75 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 5);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_adhoc_k86, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k86(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k86);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 66:32 >> 66:75 */
pdcrt_fijar_local(ctx, m, 7, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 66:32 >> 66:75 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 66:32 >> 66:75 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 66:14 >> 66:21 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_obtener_local(ctx, m, 7));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 66:14 >> 66:21 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 67:11 >> 67:18 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_obtener_local(ctx, m, 4));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 67:8 >> 71:13 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 7);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 67:8 >> 71:13 */
pdcrt_obj csaltar_obj = pdcrt_obtener_local(ctx, m, 8);
if(csaltar_obj.recv != &pdcrt_recv_booleano) pdcrt_error(ctx, "Se esperaba un objeto de tipo Boole");
if(csaltar_obj.bval)
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_adhoc_k92, PDCRT_XMM_NULO());
else
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_adhoc_k87, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k87(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k87);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 67:8 >> 71:13 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 67:8 >> 71:13 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 68:30 >> 68:37 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_obtener_local(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 68:48 >> 68:56 */
pdcrt_fijar_local(ctx, m, 10, PDCRT_OBTENER_CONSTANTE(ctx, m, 16));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 68:56 >> 68:57 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 8);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_adhoc_k88, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k88(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k88);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 68:56 >> 68:57 */
pdcrt_fijar_local(ctx, m, 9, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 68:56 >> 68:57 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 68:67 >> 68:74 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_obtener_local(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 68:74 >> 68:75 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 8);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_adhoc_k89, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 11)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k89(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k89);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 68:74 >> 68:75 */
pdcrt_fijar_local(ctx, m, 10, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 68:74 >> 68:75 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 68:37 >> 68:38 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 17);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_x_N95_adhoc_k90, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k90(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k90);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 68:37 >> 68:38 */
pdcrt_fijar_local(ctx, m, 7, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 68:37 >> 68:38 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 68:37 >> 68:38 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 68:37 >> 68:38 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 68:18 >> 68:27 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_obtener_local(ctx, m, 7));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 68:18 >> 68:27 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 67:8 >> 71:13 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_adhoc_k93, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k91(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k91);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_adhoc_k92, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k92(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k92);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 70:30 >> 70:37 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_obtener_local(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 70:18 >> 70:27 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_obtener_local(ctx, m, 7));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 70:18 >> 70:27 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_adhoc_k93, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k93(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k93);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 73:14 >> 73:17 */
pdcrt_fijar_local(ctx, m, 9, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 73:28 >> 73:37 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_obtener_local(ctx, m, 5));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 73:17 >> 73:18 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 18);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_adhoc_k94, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k94(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k94);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 73:17 >> 73:18 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 73:17 >> 73:18 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 73:17 >> 73:18 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 73:11 >> 73:18 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 8);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 73:11 >> 73:18 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 73:8 >> 75:13 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 7);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 73:8 >> 75:13 */
pdcrt_obj csaltar_obj = pdcrt_obtener_local(ctx, m, 8);
if(csaltar_obj.recv != &pdcrt_recv_booleano) pdcrt_error(ctx, "Se esperaba un objeto de tipo Boole");
if(csaltar_obj.bval)
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_adhoc_k99, PDCRT_XMM_NULO());
else
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_adhoc_k95, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k95(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k95);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 73:8 >> 75:13 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 73:8 >> 75:13 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 74:12 >> 74:30 */
pdcrt_fijar_local(ctx, m, 8, ctx->espacio_de_nombres_runtime);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 74:33 >> 74:92 */
pdcrt_fijar_local(ctx, m, 10, PDCRT_OBTENER_CONSTANTE(ctx, m, 19));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 74:104 >> 74:113 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_obtener_local(ctx, m, 5));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 74:115 >> 74:122 */
pdcrt_fijar_local_nb(ctx, m, 12, pdcrt_obtener_local(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 74:92 >> 74:93 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 15);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_x_N95_adhoc_k96, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 11)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 12)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k96(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k96);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 74:92 >> 74:93 */
pdcrt_fijar_local(ctx, m, 9, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 74:92 >> 74:93 */
pdcrt_fijar_local_nb(ctx, m, 12, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 74:92 >> 74:93 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 74:92 >> 74:93 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 74:12 >> 74:30 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 10);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_adhoc_k97, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k97(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k97);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 74:12 >> 74:30 */
pdcrt_fijar_local(ctx, m, 7, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 74:12 >> 74:30 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 74:12 >> 74:30 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 74:12 >> 74:31 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 73:8 >> 75:13 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_adhoc_k100, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k98(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k98);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_adhoc_k99, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k99(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k99);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_adhoc_k100, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k100(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k100);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 77:11 >> 77:18 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_obtener_local(ctx, m, 4));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 77:8 >> 83:13 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 7);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 77:8 >> 83:13 */
pdcrt_obj csaltar_obj = pdcrt_obtener_local(ctx, m, 8);
if(csaltar_obj.recv != &pdcrt_recv_booleano) pdcrt_error(ctx, "Se esperaba un objeto de tipo Boole");
if(csaltar_obj.bval)
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_adhoc_k107, PDCRT_XMM_NULO());
else
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_adhoc_k101, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k101(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k101);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 77:8 >> 83:13 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 77:8 >> 83:13 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 78:22 >> 78:32 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_obtener_local(ctx, m, 3));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 78:32 >> 78:33 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 8);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_adhoc_k102, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k102(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k102);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 78:32 >> 78:33 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 78:32 >> 78:33 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 78:44 >> 78:45 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_entero(PDCRT_ENTERO_C(1)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 78:32 >> 78:45 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 5);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_adhoc_k103, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k103(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k103);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 78:32 >> 78:45 */
pdcrt_fijar_local(ctx, m, 7, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 78:32 >> 78:45 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 78:32 >> 78:45 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 78:12 >> 78:45 */
pdcrt_assert(ctx, pdcrt_obtener_local(ctx, m, 7));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 78:12 >> 78:45 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 79:12 >> 79:15 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 79:25 >> 79:34 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_obtener_local(ctx, m, 5));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 79:37 >> 79:47 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_obtener_local(ctx, m, 3));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 79:52 >> 79:53 */
pdcrt_fijar_local_nb(ctx, m, 12, pdcrt_objeto_entero(PDCRT_ENTERO_C(0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 79:47 >> 79:48 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 20);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_adhoc_k104, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 11)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 12)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k104(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k104);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 79:47 >> 79:48 */
pdcrt_fijar_local(ctx, m, 10, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 79:47 >> 79:48 */
pdcrt_fijar_local_nb(ctx, m, 12, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 79:47 >> 79:48 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 79:15 >> 79:16 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 21);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_x_N95_adhoc_k105, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k105(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k105);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 79:15 >> 79:16 */
pdcrt_fijar_local(ctx, m, 7, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 79:15 >> 79:16 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 79:15 >> 79:16 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 79:15 >> 79:16 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 78:12 >> 79:16 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 77:8 >> 83:13 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_adhoc_k110, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k106(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k106);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_adhoc_k107, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k107(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k107);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 81:22 >> 81:32 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_obtener_local(ctx, m, 3));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 81:32 >> 81:33 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 8);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_adhoc_k108, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k108(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k108);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 81:32 >> 81:33 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 81:32 >> 81:33 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 81:44 >> 81:45 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_entero(PDCRT_ENTERO_C(0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 81:32 >> 81:45 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 5);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_adhoc_k109, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k109(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k109);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 81:32 >> 81:45 */
pdcrt_fijar_local(ctx, m, 7, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 81:32 >> 81:45 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 81:32 >> 81:45 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 81:12 >> 81:45 */
pdcrt_assert(ctx, pdcrt_obtener_local(ctx, m, 7));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 81:12 >> 81:45 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 82:21 >> 82:24 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 82:29 >> 82:38 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_obtener_local(ctx, m, 5));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 82:24 >> 82:25 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 20);
return pdcrt_llamar1(ctx, m->k.marco, m->k.kf, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 82:24 >> 82:25 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 82:24 >> 82:25 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_adhoc_k110, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k110(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k110);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 51:4 >> 84:13 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 51:4 >> 84:13 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 51:4 >> 84:13 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k111(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k111);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 51:4 >> 84:13 */
pdcrt_fijar_local(ctx, m, 4, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 51:4 >> 84:13 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 51:4 >> 84:13 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 51:4 >> 84:13 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 47:4 >> 86:24 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 86:13 >> 86:23 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_obtener_local(ctx, m, 3));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 86:23 >> 86:24 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 23);
return pdcrt_llamar0(ctx, m->k.marco, m->k.kf, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)), pdcrt_xmm_desde_obj(llamar_msj));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 86:23 >> 86:24 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 46:0 >> 87:10 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 46:0 >> 87:10 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 46:0 >> 87:10 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k112(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k112);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_obtener_local(ctx, m, 47));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 103), pdcrt_obtener_local(ctx, m, 104), "ParaCadaElemento", 16, true, pdc_mpdzibepd_N95_x_N95_adhoc_k113);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k113(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k113);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_obtener_local(ctx, m, 100));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 103), pdcrt_obtener_local(ctx, m, 104), "ParaCadaElementoConÍndice", 26, true, pdc_mpdzibepd_N95_x_N95_adhoc_k114);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k114(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k114);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_obtener_local(ctx, m, 48));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 103), pdcrt_obtener_local(ctx, m, 104), "Todos", 5, true, pdc_mpdzibepd_N95_x_N95_adhoc_k115);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k115(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k115);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 99)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 103), pdcrt_obtener_local(ctx, m, 104), "EsSubclase", 10, true, pdc_mpdzibepd_N95_x_N95_adhoc_k116);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k116(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k116);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_obtener_local(ctx, m, 49));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 103), pdcrt_obtener_local(ctx, m, 104), "Contiene", 8, true, pdc_mpdzibepd_N95_x_N95_adhoc_k117);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k117(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k117);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_obtener_local(ctx, m, 98));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 103), pdcrt_obtener_local(ctx, m, 104), "EsInstancia", 11, true, pdc_mpdzibepd_N95_x_N95_adhoc_k118);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k118(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k118);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_obtener_local(ctx, m, 50));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 103), pdcrt_obtener_local(ctx, m, 104), "EsImpar", 7, true, pdc_mpdzibepd_N95_x_N95_adhoc_k119);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k119(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k119);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 97)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 103), pdcrt_obtener_local(ctx, m, 104), "ParaCadaNúmeroConPaso", 22, true, pdc_mpdzibepd_N95_x_N95_adhoc_k120);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k120(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k120);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 51)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 103), pdcrt_obtener_local(ctx, m, 104), "Escribir", 8, true, pdc_mpdzibepd_N95_x_N95_adhoc_k121);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k121(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k121);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 96)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 103), pdcrt_obtener_local(ctx, m, 104), "Identidad", 9, true, pdc_mpdzibepd_N95_x_N95_adhoc_k122);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k122(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k122);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 52)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 103), pdcrt_obtener_local(ctx, m, 104), "Reducir", 7, true, pdc_mpdzibepd_N95_x_N95_adhoc_k123);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k123(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k123);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 95)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 103), pdcrt_obtener_local(ctx, m, 104), "Mapear", 6, true, pdc_mpdzibepd_N95_x_N95_adhoc_k124);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k124(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k124);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 53)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 103), pdcrt_obtener_local(ctx, m, 104), "Filtrar", 7, true, pdc_mpdzibepd_N95_x_N95_adhoc_k125);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k125(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k125);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 94)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 103), pdcrt_obtener_local(ctx, m, 104), "Algún", 6, true, pdc_mpdzibepd_N95_x_N95_adhoc_k126);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k126(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k126);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 54)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 103), pdcrt_obtener_local(ctx, m, 104), "DígitoAEntero", 14, true, pdc_mpdzibepd_N95_x_N95_adhoc_k127);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k127(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k127);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 93)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 103), pdcrt_obtener_local(ctx, m, 104), "Elevar", 6, true, pdc_mpdzibepd_N95_x_N95_adhoc_k128);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k128(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k128);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 55)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 103), pdcrt_obtener_local(ctx, m, 104), "ConvertirAEntero", 16, true, pdc_mpdzibepd_N95_x_N95_adhoc_k129);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k129(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k129);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 92)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 103), pdcrt_obtener_local(ctx, m, 104), "ConvertirANúmero", 17, true, pdc_mpdzibepd_N95_x_N95_adhoc_k130);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k130(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k130);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 56)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 103), pdcrt_obtener_local(ctx, m, 104), "EsNúmeroEntero", 15, true, pdc_mpdzibepd_N95_x_N95_adhoc_k131);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k131(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k131);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 91)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 103), pdcrt_obtener_local(ctx, m, 104), "EsNúmero", 9, true, pdc_mpdzibepd_N95_x_N95_adhoc_k132);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k132(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k132);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 57)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 103), pdcrt_obtener_local(ctx, m, 104), "Concatenar", 10, true, pdc_mpdzibepd_N95_x_N95_adhoc_k133);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k133(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k133);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 90)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 103), pdcrt_obtener_local(ctx, m, 104), "ArregloConFinal", 15, true, pdc_mpdzibepd_N95_x_N95_adhoc_k134);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k134(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k134);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 58)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 103), pdcrt_obtener_local(ctx, m, 104), "Aplicar\'", 8, true, pdc_mpdzibepd_N95_x_N95_adhoc_k135);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k135(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k135);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 89)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 103), pdcrt_obtener_local(ctx, m, 104), "Aplicar\'i", 9, true, pdc_mpdzibepd_N95_x_N95_adhoc_k136);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k136(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k136);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 59)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 103), pdcrt_obtener_local(ctx, m, 104), "EnviarMensaje", 13, true, pdc_mpdzibepd_N95_x_N95_adhoc_k137);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k137(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k137);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 88)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 103), pdcrt_obtener_local(ctx, m, 104), "Resto", 5, true, pdc_mpdzibepd_N95_x_N95_adhoc_k138);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k138(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k138);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 60)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 103), pdcrt_obtener_local(ctx, m, 104), "Abs", 3, true, pdc_mpdzibepd_N95_x_N95_adhoc_k139);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k139(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k139);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 87)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 103), pdcrt_obtener_local(ctx, m, 104), "Mod", 3, true, pdc_mpdzibepd_N95_x_N95_adhoc_k140);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k140(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k140);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 61)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 103), pdcrt_obtener_local(ctx, m, 104), "EsPar", 5, true, pdc_mpdzibepd_N95_x_N95_adhoc_k141);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k141(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k141);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 86)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 103), pdcrt_obtener_local(ctx, m, 104), "Aplanar", 7, true, pdc_mpdzibepd_N95_x_N95_adhoc_k142);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k142(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k142);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 62)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 103), pdcrt_obtener_local(ctx, m, 104), "AplanarTodo", 11, true, pdc_mpdzibepd_N95_x_N95_adhoc_k143);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k143(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k143);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 85)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 103), pdcrt_obtener_local(ctx, m, 104), "PedazoDeArreglo", 15, true, pdc_mpdzibepd_N95_x_N95_adhoc_k144);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k144(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k144);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 63)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 103), pdcrt_obtener_local(ctx, m, 104), "PrimerElemento", 14, true, pdc_mpdzibepd_N95_x_N95_adhoc_k145);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k145(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k145);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 84)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 103), pdcrt_obtener_local(ctx, m, 104), "ÚltimoElemento", 15, true, pdc_mpdzibepd_N95_x_N95_adhoc_k146);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k146(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k146);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 64)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 103), pdcrt_obtener_local(ctx, m, 104), "ÚnicoElemento", 14, true, pdc_mpdzibepd_N95_x_N95_adhoc_k147);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k147(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k147);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 83)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 103), pdcrt_obtener_local(ctx, m, 104), "EsNulo", 6, true, pdc_mpdzibepd_N95_x_N95_adhoc_k148);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k148(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k148);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 65)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 103), pdcrt_obtener_local(ctx, m, 104), "Max", 3, true, pdc_mpdzibepd_N95_x_N95_adhoc_k149);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k149(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k149);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 82)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 103), pdcrt_obtener_local(ctx, m, 104), "Min", 3, true, pdc_mpdzibepd_N95_x_N95_adhoc_k150);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k150(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k150);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 66)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 103), pdcrt_obtener_local(ctx, m, 104), "NoImplementado", 14, true, pdc_mpdzibepd_N95_x_N95_adhoc_k151);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k151(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k151);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 81)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 103), pdcrt_obtener_local(ctx, m, 104), "MétodoAbstracto", 16, true, pdc_mpdzibepd_N95_x_N95_adhoc_k152);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k152(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k152);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 67)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 103), pdcrt_obtener_local(ctx, m, 104), "Inalcanzable", 12, true, pdc_mpdzibepd_N95_x_N95_adhoc_k153);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k153(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k153);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 80)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 103), pdcrt_obtener_local(ctx, m, 104), "LlamarConEC", 11, true, pdc_mpdzibepd_N95_x_N95_adhoc_k154);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k154(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k154);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 68)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 103), pdcrt_obtener_local(ctx, m, 104), "ArregloSinElementoEnÍndice", 27, true, pdc_mpdzibepd_N95_x_N95_adhoc_k155);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k155(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k155);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 79)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 103), pdcrt_obtener_local(ctx, m, 104), "LeerLínea", 10, true, pdc_mpdzibepd_N95_x_N95_adhoc_k156);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k156(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k156);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 69)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 103), pdcrt_obtener_local(ctx, m, 104), "LeerNúmero", 11, true, pdc_mpdzibepd_N95_x_N95_adhoc_k157);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k157(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k157);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 78)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 103), pdcrt_obtener_local(ctx, m, 104), "Parcial", 7, true, pdc_mpdzibepd_N95_x_N95_adhoc_k158);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k158(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k158);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 70)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 103), pdcrt_obtener_local(ctx, m, 104), "MétodoComoFunción", 19, true, pdc_mpdzibepd_N95_x_N95_adhoc_k159);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k159(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k159);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 77)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 103), pdcrt_obtener_local(ctx, m, 104), "OperadorBinario", 15, true, pdc_mpdzibepd_N95_x_N95_adhoc_k160);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k160(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k160);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 71)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 103), pdcrt_obtener_local(ctx, m, 104), "ContienePredicado", 17, true, pdc_mpdzibepd_N95_x_N95_adhoc_k161);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k161(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k161);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 76)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 103), pdcrt_obtener_local(ctx, m, 104), "BuscarPredicado", 15, true, pdc_mpdzibepd_N95_x_N95_adhoc_k162);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k162(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k162);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 72)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 103), pdcrt_obtener_local(ctx, m, 104), "ParaCadaElementoEnReversa", 25, true, pdc_mpdzibepd_N95_x_N95_adhoc_k163);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k163(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k163);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 75)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 103), pdcrt_obtener_local(ctx, m, 104), "Diccionario", 11, false, pdc_mpdzibepd_N95_x_N95_adhoc_k164);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k164(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k164);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 73)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 103), pdcrt_obtener_local(ctx, m, 104), "Resultado", 9, false, pdc_mpdzibepd_N95_x_N95_adhoc_k165);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k165(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k165);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 104, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 74)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 103), pdcrt_obtener_local(ctx, m, 104), "Pila", 4, false, pdc_mpdzibepd_N95_x_N95_adhoc_k166);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k166(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k166);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 46:8 >> 46:19 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_obtener_local(ctx, m, 102));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 103), pdcrt_obtener_local(ctx, m, 104), "ObjetoAdHoc", 11, true, pdc_mpdzibepd_N95_x_N95_adhoc_k167);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_adhoc_k167(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_adhoc_k167);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
return pdcrt_exportar(ctx, m, pdcrt_obtener_local(ctx, m, 103), "pdzibepd_N95_x_N95_adhoc", 24);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/adhoc.pd" => 1:0 >> 87:10 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_objeto_nulo());
}
PDCRT_DECLARAR_ENTRYPOINT(pdzibepd_N95_x_N95_adhoc, pdc_mpdzibepd_N95_x_N95_adhoc_f2)
#ifdef PDCRT_MAIN
#define PDCRT_DEPS(X) \
    X(pdzibepd_N95_x_N95_adhoc, "pdzibepd_N95_x_N95_adhoc", 24) \
    X(pdzibepd_N95_builtins, "pdzibepd_N95_builtins", 21) \
    X(pdzibepd_N95_builtinsImpl, "pdzibepd_N95_builtinsImpl", 25) \
    X(pdzibepd_N95_datos_N95_pila, "pdzibepd_N95_datos_N95_pila", 27) \
    X(pdzibepd_N95_datos_N95_diccionario, "pdzibepd_N95_datos_N95_diccionario", 34) \
    X(pdzibepd_N95_datos_N95_diccionario_N95_hashmap, "pdzibepd_N95_datos_N95_diccionario_N95_hashmap", 46) \
    X(pdzibepd_N95_datos_N95_diccionario_N95_interfaz, "pdzibepd_N95_datos_N95_diccionario_N95_interfaz", 47) \
    X(pdzibepd_N95_datos_N95_diccionario_N95_alist, "pdzibepd_N95_datos_N95_diccionario_N95_alist", 44) \
    X(pdzibepd_N95_datos_N95_resultado, "pdzibepd_N95_datos_N95_resultado", 32)
PDCRT_DECLARAR_DEPS(PDCRT_DEPS)
PDCRT_DECLARAR_MAIN(pdzibepd_N95_x_N95_adhoc)
#endif
