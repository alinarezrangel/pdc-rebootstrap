#define PDCRT_INTERNO
#include "pdcrt/pdcrt.h"
#include "pdcrt/pdcrt_ops.h"
static pdcrt_tk pdc_mpdzipdc_N95_tokens_f0(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_f1(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_f2(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_f3(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_f4(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_f5(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_f6(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_f7(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_f8(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_f9(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_f10(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_f11(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_f12(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_f13(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_f14(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_f15(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_f16(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_f17(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k0(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k1(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k2(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k3(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k4(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k5(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k6(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k7(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k8(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k9(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k10(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k11(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k12(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k13(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k14(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k15(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k16(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k17(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k18(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k19(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k20(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k21(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k22(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k23(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k24(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k25(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k26(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k27(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k28(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k29(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k30(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k31(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k32(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k33(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k34(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k35(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k36(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k37(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k38(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k39(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k40(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k41(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k42(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k43(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k44(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k45(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k46(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k47(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k48(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k49(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k50(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k51(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k52(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k53(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k54(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k55(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k56(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k57(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k58(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k59(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k60(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k61(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k62(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k63(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k64(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k65(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k66(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k67(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k68(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k69(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k70(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k71(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k72(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k73(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k74(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k75(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k76(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k77(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k78(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k79(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k80(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k81(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k82(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k83(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k84(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k85(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k86(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k87(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k88(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k89(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k90(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k91(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k92(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k93(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k94(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k95(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k96(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k97(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k98(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k99(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k100(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k101(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k102(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k103(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k104(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k105(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k106(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k107(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k108(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k109(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k110(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k111(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k112(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k113(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k114(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k115(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k116(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k117(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k118(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k119(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k120(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k121(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k122(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k123(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k124(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k125(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k126(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k127(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k128(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k129(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k130(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k131(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k132(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k133(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k134(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k135(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k136(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k137(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k138(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k139(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k140(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k141(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k142(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k143(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k144(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k145(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k146(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k147(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k148(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k149(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k150(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k151(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k152(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k153(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k154(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k155(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k156(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k157(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k158(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k159(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k160(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k161(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k162(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k163(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k164(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k165(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k166(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k167(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k168(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k169(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k170(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k171(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k172(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k173(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k174(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k175(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k176(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k177(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k178(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k179(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k180(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k181(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k182(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k183(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k184(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_tokens_f0(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 33:0 >> 36:9 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd|33:0|36:9";
PDCRT_ALOJAR_MARCO(ctx, 6, args, k, func_srcloc);
struct pdc_params_data_mpdzipdc_N95_tokens_p0 { const pdcrt_params_base base; const pdcrt_param_data params[3]; };
static const struct pdc_params_data_mpdzipdc_N95_tokens_p0 pdc_params = { .base = { .num_params = 3, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{3}, {4}, {5}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 33:51 >> 33:65 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 33:51 >> 33:65 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_obtener_local(ctx, m, 5));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 33:51 >> 33:65 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 33:33 >> 33:49 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 33:33 >> 33:49 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_obtener_local(ctx, m, 4));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 33:33 >> 33:49 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 33:0 >> 36:9 */
pdcrt_fijar_local_nb(ctx, m, 0, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 33:0 >> 36:9 */
pdcrt_fijar_local_nb(ctx, m, 0, pdcrt_obtener_local(ctx, m, 3));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 33:0 >> 36:9 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 34:10 >> 34:12 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_obtener_local(ctx, m, 0));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 34:32 >> 34:48 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_obtener_local(ctx, m, 1));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 34:4 >> 34:48 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 7);
return pdcrt_llamar1(ctx, m, pdc_mpdzipdc_N95_tokens_k64, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)));
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_f1(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 38:0 >> 40:9 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd|38:0|40:9";
PDCRT_ALOJAR_MARCO(ctx, 6, args, k, func_srcloc);
struct pdc_params_data_mpdzipdc_N95_tokens_p1 { const pdcrt_params_base base; const pdcrt_param_data params[1]; };
static const struct pdc_params_data_mpdzipdc_N95_tokens_p1 pdc_params = { .base = { .num_params = 1, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{1}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 38:0 >> 40:9 */
pdcrt_fijar_local_nb(ctx, m, 0, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 38:0 >> 40:9 */
pdcrt_fijar_local_nb(ctx, m, 0, pdcrt_obtener_local(ctx, m, 1));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 38:0 >> 40:9 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 39:13 >> 39:34 */
pdcrt_fijar_local(ctx, m, 2, PDCRT_OBTENER_CONSTANTE(ctx, m, 11));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 39:46 >> 39:48 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_obtener_local(ctx, m, 0));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 39:48 >> 39:49 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 3);
return pdcrt_llamar0(ctx, m, pdc_mpdzipdc_N95_tokens_k67, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_f2(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 160:0 >> 162:9 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd|160:0|162:9";
PDCRT_ALOJAR_MARCO(ctx, 9, args, k, func_srcloc);
struct pdc_params_data_mpdzipdc_N95_tokens_p2 { const pdcrt_params_base base; const pdcrt_param_data params[3]; };
static const struct pdc_params_data_mpdzipdc_N95_tokens_p2 pdc_params = { .base = { .num_params = 3, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{4}, {5}, {6}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 160:38 >> 160:47 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 160:38 >> 160:47 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_obtener_local(ctx, m, 6));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 160:38 >> 160:47 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 160:31 >> 160:36 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 160:31 >> 160:36 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_obtener_local(ctx, m, 5));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 160:31 >> 160:36 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 160:0 >> 162:9 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 160:0 >> 162:9 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_obtener_local(ctx, m, 4));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 160:0 >> 162:9 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 161:13 >> 161:15 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_obtener_local(ctx, m, 1));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 161:23 >> 161:34 */
pdcrt_fijar_local(ctx, m, 7, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 161:34 >> 161:35 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 14);
return pdcrt_llamar0(ctx, m, pdc_mpdzipdc_N95_tokens_k76, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_f3(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 164:0 >> 166:9 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd|164:0|166:9";
PDCRT_ALOJAR_MARCO(ctx, 9, args, k, func_srcloc);
struct pdc_params_data_mpdzipdc_N95_tokens_p3 { const pdcrt_params_base base; const pdcrt_param_data params[3]; };
static const struct pdc_params_data_mpdzipdc_N95_tokens_p3 pdc_params = { .base = { .num_params = 3, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{4}, {5}, {6}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 164:36 >> 164:45 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 164:36 >> 164:45 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_obtener_local(ctx, m, 6));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 164:36 >> 164:45 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 164:29 >> 164:34 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 164:29 >> 164:34 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_obtener_local(ctx, m, 5));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 164:29 >> 164:34 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 164:0 >> 166:9 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 164:0 >> 166:9 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_obtener_local(ctx, m, 4));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 164:0 >> 166:9 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 165:13 >> 165:15 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_obtener_local(ctx, m, 1));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 165:23 >> 165:34 */
pdcrt_fijar_local(ctx, m, 7, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 165:34 >> 165:35 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 15);
return pdcrt_llamar0(ctx, m, pdc_mpdzipdc_N95_tokens_k78, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_f4(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 168:0 >> 170:9 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd|168:0|170:9";
PDCRT_ALOJAR_MARCO(ctx, 9, args, k, func_srcloc);
struct pdc_params_data_mpdzipdc_N95_tokens_p4 { const pdcrt_params_base base; const pdcrt_param_data params[3]; };
static const struct pdc_params_data_mpdzipdc_N95_tokens_p4 pdc_params = { .base = { .num_params = 3, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{4}, {5}, {6}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 168:44 >> 168:53 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 168:44 >> 168:53 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_obtener_local(ctx, m, 6));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 168:44 >> 168:53 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 168:37 >> 168:42 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 168:37 >> 168:42 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_obtener_local(ctx, m, 5));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 168:37 >> 168:42 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 168:0 >> 170:9 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 168:0 >> 170:9 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_obtener_local(ctx, m, 4));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 168:0 >> 170:9 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 169:13 >> 169:15 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_obtener_local(ctx, m, 1));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 169:23 >> 169:34 */
pdcrt_fijar_local(ctx, m, 7, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 169:34 >> 169:35 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 16);
return pdcrt_llamar0(ctx, m, pdc_mpdzipdc_N95_tokens_k80, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_f5(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 172:0 >> 174:9 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd|172:0|174:9";
PDCRT_ALOJAR_MARCO(ctx, 10, args, k, func_srcloc);
struct pdc_params_data_mpdzipdc_N95_tokens_p5 { const pdcrt_params_base base; const pdcrt_param_data params[3]; };
static const struct pdc_params_data_mpdzipdc_N95_tokens_p5 pdc_params = { .base = { .num_params = 3, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{5}, {6}, {7}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 172:43 >> 172:52 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 172:43 >> 172:52 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 8));
pdcrt_fijar_local(ctx, m, 4, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 172:43 >> 172:52 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 172:43 >> 172:52 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 4), pdcrt_obtener_local(ctx, m, 7));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 172:43 >> 172:52 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 172:36 >> 172:41 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 172:36 >> 172:41 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_obtener_local(ctx, m, 6));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 172:36 >> 172:41 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 172:0 >> 174:9 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 172:0 >> 174:9 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_obtener_local(ctx, m, 5));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 172:0 >> 174:9 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 173:13 >> 173:15 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_obtener_local(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 173:23 >> 173:34 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 173:34 >> 173:35 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 17);
return pdcrt_llamar0(ctx, m, pdc_mpdzipdc_N95_tokens_k82, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_f6(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 176:0 >> 178:9 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd|176:0|178:9";
PDCRT_ALOJAR_MARCO(ctx, 10, args, k, func_srcloc);
struct pdc_params_data_mpdzipdc_N95_tokens_p6 { const pdcrt_params_base base; const pdcrt_param_data params[3]; };
static const struct pdc_params_data_mpdzipdc_N95_tokens_p6 pdc_params = { .base = { .num_params = 3, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{5}, {6}, {7}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 176:39 >> 176:48 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 176:39 >> 176:48 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_obtener_local(ctx, m, 7));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 176:39 >> 176:48 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 176:32 >> 176:37 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 176:32 >> 176:37 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 7));
pdcrt_fijar_local(ctx, m, 3, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 176:32 >> 176:37 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 176:32 >> 176:37 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 3), pdcrt_obtener_local(ctx, m, 6));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 176:32 >> 176:37 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 176:0 >> 178:9 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 176:0 >> 178:9 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_obtener_local(ctx, m, 5));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 176:0 >> 178:9 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 177:13 >> 177:15 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_obtener_local(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 177:23 >> 177:34 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 177:34 >> 177:35 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 18);
return pdcrt_llamar0(ctx, m, pdc_mpdzipdc_N95_tokens_k84, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_f7(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 180:0 >> 182:9 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd|180:0|182:9";
PDCRT_ALOJAR_MARCO(ctx, 9, args, k, func_srcloc);
struct pdc_params_data_mpdzipdc_N95_tokens_p7 { const pdcrt_params_base base; const pdcrt_param_data params[3]; };
static const struct pdc_params_data_mpdzipdc_N95_tokens_p7 pdc_params = { .base = { .num_params = 3, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{4}, {5}, {6}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 180:41 >> 180:50 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 180:41 >> 180:50 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_obtener_local(ctx, m, 6));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 180:41 >> 180:50 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 180:34 >> 180:39 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 180:34 >> 180:39 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_obtener_local(ctx, m, 5));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 180:34 >> 180:39 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 180:0 >> 182:9 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 180:0 >> 182:9 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_obtener_local(ctx, m, 4));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 180:0 >> 182:9 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 181:13 >> 181:15 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_obtener_local(ctx, m, 1));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 181:23 >> 181:34 */
pdcrt_fijar_local(ctx, m, 7, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 181:34 >> 181:35 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 19);
return pdcrt_llamar0(ctx, m, pdc_mpdzipdc_N95_tokens_k86, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_f8(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 184:0 >> 188:9 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd|184:0|188:9";
PDCRT_ALOJAR_MARCO(ctx, 8, args, k, func_srcloc);
struct pdc_params_data_mpdzipdc_N95_tokens_p8 { const pdcrt_params_base base; const pdcrt_param_data params[4]; };
static const struct pdc_params_data_mpdzipdc_N95_tokens_p8 pdc_params = { .base = { .num_params = 4, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{4}, {5}, {6}, {7}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 184:39 >> 184:48 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 184:39 >> 184:48 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_obtener_local(ctx, m, 7));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 184:39 >> 184:48 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 184:32 >> 184:37 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 184:32 >> 184:37 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_obtener_local(ctx, m, 6));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 184:32 >> 184:37 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 184:26 >> 184:30 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 184:26 >> 184:30 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_obtener_local(ctx, m, 5));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 184:26 >> 184:30 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 184:0 >> 188:9 */
pdcrt_fijar_local_nb(ctx, m, 0, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 184:0 >> 188:9 */
pdcrt_fijar_local_nb(ctx, m, 0, pdcrt_obtener_local(ctx, m, 4));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 184:0 >> 188:9 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 185:10 >> 185:12 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_obtener_local(ctx, m, 0));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 185:20 >> 185:24 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_obtener_local(ctx, m, 1));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 185:4 >> 185:24 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 33);
return pdcrt_llamar1(ctx, m, pdc_mpdzipdc_N95_tokens_k88, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)));
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_f9(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 190:0 >> 192:9 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd|190:0|192:9";
PDCRT_ALOJAR_MARCO(ctx, 7, args, k, func_srcloc);
struct pdc_params_data_mpdzipdc_N95_tokens_p9 { const pdcrt_params_base base; const pdcrt_param_data params[1]; };
static const struct pdc_params_data_mpdzipdc_N95_tokens_p9 pdc_params = { .base = { .num_params = 1, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{1}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 190:0 >> 192:9 */
pdcrt_fijar_local_nb(ctx, m, 0, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 190:0 >> 192:9 */
pdcrt_fijar_local_nb(ctx, m, 0, pdcrt_obtener_local(ctx, m, 1));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 190:0 >> 192:9 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 191:13 >> 191:38 */
pdcrt_fijar_local(ctx, m, 2, PDCRT_OBTENER_CONSTANTE(ctx, m, 36));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 191:50 >> 191:52 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_obtener_local(ctx, m, 0));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 191:52 >> 191:53 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 22);
return pdcrt_llamar0(ctx, m, pdc_mpdzipdc_N95_tokens_k92, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_f10(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 194:0 >> 196:9 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd|194:0|196:9";
PDCRT_ALOJAR_MARCO(ctx, 6, args, k, func_srcloc);
struct pdc_params_data_mpdzipdc_N95_tokens_p10 { const pdcrt_params_base base; const pdcrt_param_data params[1]; };
static const struct pdc_params_data_mpdzipdc_N95_tokens_p10 pdc_params = { .base = { .num_params = 1, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{2}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 194:0 >> 196:9 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 194:0 >> 196:9 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_obtener_local(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 194:0 >> 196:9 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 195:13 >> 195:15 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_obtener_local(ctx, m, 1));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 195:15 >> 195:16 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 22);
return pdcrt_llamar0(ctx, m, pdc_mpdzipdc_N95_tokens_k96, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_f11(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 198:0 >> 200:9 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd|198:0|200:9";
PDCRT_ALOJAR_MARCO(ctx, 6, args, k, func_srcloc);
struct pdc_params_data_mpdzipdc_N95_tokens_p11 { const pdcrt_params_base base; const pdcrt_param_data params[1]; };
static const struct pdc_params_data_mpdzipdc_N95_tokens_p11 pdc_params = { .base = { .num_params = 1, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{2}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 198:0 >> 200:9 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 198:0 >> 200:9 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_obtener_local(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 198:0 >> 200:9 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 199:13 >> 199:15 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_obtener_local(ctx, m, 1));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 199:15 >> 199:16 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 22);
return pdcrt_llamar0(ctx, m, pdc_mpdzipdc_N95_tokens_k99, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_f12(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 202:0 >> 204:9 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd|202:0|204:9";
PDCRT_ALOJAR_MARCO(ctx, 6, args, k, func_srcloc);
struct pdc_params_data_mpdzipdc_N95_tokens_p12 { const pdcrt_params_base base; const pdcrt_param_data params[1]; };
static const struct pdc_params_data_mpdzipdc_N95_tokens_p12 pdc_params = { .base = { .num_params = 1, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{2}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 202:0 >> 204:9 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 202:0 >> 204:9 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_obtener_local(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 202:0 >> 204:9 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 203:13 >> 203:15 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_obtener_local(ctx, m, 1));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 203:15 >> 203:16 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 22);
return pdcrt_llamar0(ctx, m, pdc_mpdzipdc_N95_tokens_k102, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_f13(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 206:0 >> 208:9 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd|206:0|208:9";
PDCRT_ALOJAR_MARCO(ctx, 9, args, k, func_srcloc);
struct pdc_params_data_mpdzipdc_N95_tokens_p13 { const pdcrt_params_base base; const pdcrt_param_data params[2]; };
static const struct pdc_params_data_mpdzipdc_N95_tokens_p13 pdc_params = { .base = { .num_params = 2, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{4}, {5}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 206:29 >> 206:36 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 206:29 >> 206:36 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 6));
pdcrt_fijar_local(ctx, m, 3, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 206:29 >> 206:36 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 206:29 >> 206:36 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 3), pdcrt_obtener_local(ctx, m, 5));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 206:29 >> 206:36 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 206:0 >> 208:9 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 206:0 >> 208:9 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_obtener_local(ctx, m, 4));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 206:0 >> 208:9 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 207:14 >> 207:16 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_obtener_local(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 207:16 >> 207:17 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 22);
return pdcrt_llamar0(ctx, m, pdc_mpdzipdc_N95_tokens_k105, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_f14(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 210:0 >> 212:9 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd|210:0|212:9";
PDCRT_ALOJAR_MARCO(ctx, 6, args, k, func_srcloc);
struct pdc_params_data_mpdzipdc_N95_tokens_p14 { const pdcrt_params_base base; const pdcrt_param_data params[1]; };
static const struct pdc_params_data_mpdzipdc_N95_tokens_p14 pdc_params = { .base = { .num_params = 1, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{2}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 210:0 >> 212:9 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 210:0 >> 212:9 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_obtener_local(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 210:0 >> 212:9 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 211:13 >> 211:15 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_obtener_local(ctx, m, 1));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 211:15 >> 211:16 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 22);
return pdcrt_llamar0(ctx, m, pdc_mpdzipdc_N95_tokens_k111, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_f15(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 214:0 >> 216:9 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd|214:0|216:9";
PDCRT_ALOJAR_MARCO(ctx, 6, args, k, func_srcloc);
struct pdc_params_data_mpdzipdc_N95_tokens_p15 { const pdcrt_params_base base; const pdcrt_param_data params[1]; };
static const struct pdc_params_data_mpdzipdc_N95_tokens_p15 pdc_params = { .base = { .num_params = 1, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{2}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 214:0 >> 216:9 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 214:0 >> 216:9 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_obtener_local(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 214:0 >> 216:9 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 215:13 >> 215:15 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_obtener_local(ctx, m, 1));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 215:15 >> 215:16 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 22);
return pdcrt_llamar0(ctx, m, pdc_mpdzipdc_N95_tokens_k114, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_f16(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 251:12 >> 251:19 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd|251:12|251:19";
PDCRT_ALOJAR_MARCO(ctx, 6, args, k, func_srcloc);
struct pdc_params_data_mpdzipdc_N95_tokens_p16 { const pdcrt_params_base base; const pdcrt_param_data params[1]; };
static const struct pdc_params_data_mpdzipdc_N95_tokens_p16 pdc_params = { .base = { .num_params = 1, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{1}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 251:21 >> 251:28 */
pdcrt_fijar_local_nb(ctx, m, 0, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 251:21 >> 251:28 */
pdcrt_fijar_local_nb(ctx, m, 0, pdcrt_obtener_local(ctx, m, 1));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 251:21 >> 251:28 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 252:25 >> 252:32 */
pdcrt_fijar_local(ctx, m, 3, ctx->espacio_de_nombres_runtime);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 252:25 >> 252:32 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 45);
return pdcrt_llamar0(ctx, m, pdc_mpdzipdc_N95_tokens_k119, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 3)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_f17(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd|1:0|248:16";
PDCRT_ALOJAR_MARCO(ctx, 189, args, k, func_srcloc);
struct pdc_params_data_mpdzipdc_N95_tokens_p17 { const pdcrt_params_base base; const pdcrt_param_data params[1]; };
static const struct pdc_params_data_mpdzipdc_N95_tokens_p17 pdc_params = { .base = { .num_params = 0, .tiene_variadic = false, .idc_variadic = 0, }, .params = {} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
PDCRT_DEFINE_RAICES(2);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_arreglo *constantes = pdcrt_crear_arreglo_vacio(ctx, PDCRT_GC(), 116LLU);
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
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "ÁreaTextual", 12));
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
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "posiciónInicial", 16));
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
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "posiciónFinal", 14));
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
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "fijar_posiciónInicial", 22));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "fijar_posiciónFinal", 20));
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
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "(desde ~t hasta ~t)", 19));
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
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "TipoDeToken", 11));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "NÚMERO", 7));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "TEXTO", 5));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "IDENTIFICADOR", 13));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "PALABRA_CLAVE", 13));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "OPERADOR", 8));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "COMENTARIO", 10));
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
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "Token", 5));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "tipo", 4));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "áreaTextual", 12));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "contenido", 9));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "número", 7));
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
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "texto", 5));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "identificador", 13));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "palabraClave", 12));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "operador", 8));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "comentario", 10));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "fijar_tipo", 10));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "fijar_áreaTextual", 18));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "fijar_contenido", 15));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "(Token ~t en ~t con ~t)", 23));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "esNúmero", 9));
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
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "esTexto", 7));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "esIdentificador", 15));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "esPalabraClave", 14));
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
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "esOperador", 10));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "esComentario", 12));
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
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "#", 1));
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
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), ",", 1));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), ".", 1));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), ":", 1));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "%", 1));
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
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "\"", 1));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "«", 2));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "»", 2));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "{", 1));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "}", 1));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "[", 1));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "]", 1));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "&", 1));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "variable", 8));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "variables", 9));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "adquirir", 8));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "instancia", 9));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "fijar", 5));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "a", 1));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "escribir", 8));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "nl", 2));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "leer", 4));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "si", 2));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "finsi", 5));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "sino", 4));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "mientras", 8));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "finmientras", 11));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "funcion", 7));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "finfuncion", 10));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "procedimiento", 13));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "finprocedimiento", 16));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "metodo", 6));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "finmetodo", 9));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "devolver", 8));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "finargs", 7));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "con", 3));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "de", 2));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "y", 1));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "e", 1));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "clase", 5));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "hereda", 6));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "extiende", 8));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "implementa", 10));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "finclase", 8));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "atributo", 8));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "atributos", 9));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "estatico", 8));
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
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "finclonar", 9));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "son", 3));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "sean", 4));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "iguales", 7));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "diferentes", 10));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "tanto", 5));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "como", 4));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "algun", 5));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "o", 1));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "necesitas", 9));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "utilizar", 8));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "no", 2));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "finimplementa", 13));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "ref", 3));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "identicos", 9));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "identicas", 9));
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
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "desdeArreglo", 12));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
PDCRT_FIJAR_CONSTANTES(ctx, m, constantes);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 57, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 118));
pdcrt_fijar_local(ctx, m, 59, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 118));
pdcrt_fijar_local(ctx, m, 61, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 118));
pdcrt_fijar_local(ctx, m, 63, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 118));
pdcrt_fijar_local(ctx, m, 65, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 118));
pdcrt_fijar_local(ctx, m, 67, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 118));
pdcrt_fijar_local(ctx, m, 69, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 118));
pdcrt_fijar_local(ctx, m, 71, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 118));
pdcrt_fijar_local(ctx, m, 73, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 118));
pdcrt_fijar_local(ctx, m, 75, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 118));
pdcrt_fijar_local(ctx, m, 77, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 118));
pdcrt_fijar_local(ctx, m, 79, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 118));
pdcrt_fijar_local(ctx, m, 81, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 118));
pdcrt_fijar_local(ctx, m, 83, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 118));
pdcrt_fijar_local(ctx, m, 85, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 118));
pdcrt_fijar_local(ctx, m, 87, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 118));
pdcrt_fijar_local(ctx, m, 89, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 118));
pdcrt_fijar_local(ctx, m, 91, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 118));
pdcrt_fijar_local(ctx, m, 93, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 118));
pdcrt_fijar_local(ctx, m, 95, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 118));
pdcrt_fijar_local(ctx, m, 97, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 118));
pdcrt_fijar_local(ctx, m, 99, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 118));
pdcrt_fijar_local(ctx, m, 101, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 118));
pdcrt_fijar_local(ctx, m, 103, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 118));
pdcrt_fijar_local(ctx, m, 105, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 118));
pdcrt_fijar_local(ctx, m, 107, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 118));
pdcrt_fijar_local(ctx, m, 109, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 110, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 118));
pdcrt_fijar_local(ctx, m, 108, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 118));
pdcrt_fijar_local(ctx, m, 106, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 118));
pdcrt_fijar_local(ctx, m, 104, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 118));
pdcrt_fijar_local(ctx, m, 102, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 118));
pdcrt_fijar_local(ctx, m, 100, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 118));
pdcrt_fijar_local(ctx, m, 98, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 118));
pdcrt_fijar_local(ctx, m, 96, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 118));
pdcrt_fijar_local(ctx, m, 94, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 118));
pdcrt_fijar_local(ctx, m, 92, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 118));
pdcrt_fijar_local(ctx, m, 90, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 118));
pdcrt_fijar_local(ctx, m, 88, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 118));
pdcrt_fijar_local(ctx, m, 86, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 84, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 118));
pdcrt_fijar_local(ctx, m, 82, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 118));
pdcrt_fijar_local(ctx, m, 80, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 118));
pdcrt_fijar_local(ctx, m, 78, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 118));
pdcrt_fijar_local(ctx, m, 76, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 118));
pdcrt_fijar_local(ctx, m, 74, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 118));
pdcrt_fijar_local(ctx, m, 72, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 118));
pdcrt_fijar_local(ctx, m, 70, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 118));
pdcrt_fijar_local(ctx, m, 68, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 118));
pdcrt_fijar_local(ctx, m, 66, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 118));
pdcrt_fijar_local(ctx, m, 64, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 118));
pdcrt_fijar_local(ctx, m, 62, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 118));
pdcrt_fijar_local(ctx, m, 60, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 118));
pdcrt_fijar_local(ctx, m, 58, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 56, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 111, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 3:0 >> 3:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 3:0 >> 3:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 118));
pdcrt_fijar_local(ctx, m, 112, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 3:0 >> 3:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 11:6 >> 11:18 */
pdcrt_fijar_local_nb(ctx, m, 113, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 54:9 >> 54:20 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 54:9 >> 54:20 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 118));
pdcrt_fijar_local(ctx, m, 114, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 54:9 >> 54:20 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 69:6 >> 69:11 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 69:6 >> 69:11 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 118));
pdcrt_fijar_local(ctx, m, 115, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 69:6 >> 69:11 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 224:9 >> 224:23 */
pdcrt_fijar_local_nb(ctx, m, 116, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 246:9 >> 246:40 */
pdcrt_fijar_local_nb(ctx, m, 117, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
return pdcrt_importar(ctx, m, "pdzibepd_N95_builtins", 21, pdc_mpdzipdc_N95_tokens_k0);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k0(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 118, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 118), "ParaCadaElemento", 16, pdc_mpdzipdc_N95_tokens_k1);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k1(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 56, pdcrt_obtener_local(ctx, m, 119));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 118), "Todos", 5, pdc_mpdzipdc_N95_tokens_k2);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k2(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k2);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 57, pdcrt_obtener_local(ctx, m, 119));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 118), "Contiene", 8, pdc_mpdzipdc_N95_tokens_k3);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k3(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k3);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 58), pdcrt_obtener_local(ctx, m, 119));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 118), "EsImpar", 7, pdc_mpdzipdc_N95_tokens_k4);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k4(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k4);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 59), pdcrt_obtener_local(ctx, m, 119));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 118), "Escribir", 8, pdc_mpdzipdc_N95_tokens_k5);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k5(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k5);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 60), pdcrt_obtener_local(ctx, m, 119));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 118), "Reducir", 7, pdc_mpdzipdc_N95_tokens_k6);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k6(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k6);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 61), pdcrt_obtener_local(ctx, m, 119));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 118), "Filtrar", 7, pdc_mpdzipdc_N95_tokens_k7);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k7(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k7);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 62), pdcrt_obtener_local(ctx, m, 119));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 118), "DígitoAEntero", 14, pdc_mpdzipdc_N95_tokens_k8);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k8(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k8);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 63), pdcrt_obtener_local(ctx, m, 119));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 118), "ConvertirAEntero", 16, pdc_mpdzipdc_N95_tokens_k9);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k9(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k9);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 64), pdcrt_obtener_local(ctx, m, 119));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 118), "EsNúmeroEntero", 15, pdc_mpdzipdc_N95_tokens_k10);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k10(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k10);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 65), pdcrt_obtener_local(ctx, m, 119));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 118), "Concatenar", 10, pdc_mpdzipdc_N95_tokens_k11);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k11(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k11);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 66), pdcrt_obtener_local(ctx, m, 119));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 118), "Aplicar\'", 8, pdc_mpdzipdc_N95_tokens_k12);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k12(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k12);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 67), pdcrt_obtener_local(ctx, m, 119));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 118), "EnviarMensaje", 13, pdc_mpdzipdc_N95_tokens_k13);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k13(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k13);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 68), pdcrt_obtener_local(ctx, m, 119));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 118), "Abs", 3, pdc_mpdzipdc_N95_tokens_k14);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k14(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k14);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 69), pdcrt_obtener_local(ctx, m, 119));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 118), "EsPar", 5, pdc_mpdzipdc_N95_tokens_k15);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k15(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k15);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 70), pdcrt_obtener_local(ctx, m, 119));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 118), "AplanarTodo", 11, pdc_mpdzipdc_N95_tokens_k16);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k16(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k16);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 71), pdcrt_obtener_local(ctx, m, 119));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 118), "PrimerElemento", 14, pdc_mpdzipdc_N95_tokens_k17);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k17(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k17);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 72), pdcrt_obtener_local(ctx, m, 119));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 118), "ÚnicoElemento", 14, pdc_mpdzipdc_N95_tokens_k18);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k18(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k18);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 73), pdcrt_obtener_local(ctx, m, 119));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 118), "Max", 3, pdc_mpdzipdc_N95_tokens_k19);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k19(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k19);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 74), pdcrt_obtener_local(ctx, m, 119));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 118), "NoImplementado", 14, pdc_mpdzipdc_N95_tokens_k20);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k20(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k20);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 75), pdcrt_obtener_local(ctx, m, 119));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 118), "Inalcanzable", 12, pdc_mpdzipdc_N95_tokens_k21);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k21(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k21);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 76), pdcrt_obtener_local(ctx, m, 119));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 118), "ArregloSinElementoEnÍndice", 27, pdc_mpdzipdc_N95_tokens_k22);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k22(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k22);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 77), pdcrt_obtener_local(ctx, m, 119));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 118), "LeerNúmero", 11, pdc_mpdzipdc_N95_tokens_k23);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k23(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k23);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 78), pdcrt_obtener_local(ctx, m, 119));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 118), "MétodoComoFunción", 19, pdc_mpdzipdc_N95_tokens_k24);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k24(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k24);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 79), pdcrt_obtener_local(ctx, m, 119));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 118), "ContienePredicado", 17, pdc_mpdzipdc_N95_tokens_k25);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k25(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k25);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 80), pdcrt_obtener_local(ctx, m, 119));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 118), "ParaCadaElementoEnReversa", 25, pdc_mpdzipdc_N95_tokens_k26);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k26(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k26);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 81), pdcrt_obtener_local(ctx, m, 119));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 118), "Resultado", 9, pdc_mpdzipdc_N95_tokens_k27);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k27(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k27);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 82), pdcrt_obtener_local(ctx, m, 119));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 118), "Pila", 4, pdc_mpdzipdc_N95_tokens_k28);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k28(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k28);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 83), pdcrt_obtener_local(ctx, m, 119));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 118), "Diccionario", 11, pdc_mpdzipdc_N95_tokens_k29);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k29(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k29);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 84, pdcrt_obtener_local(ctx, m, 119));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 118), "BuscarPredicado", 15, pdc_mpdzipdc_N95_tokens_k30);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k30(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k30);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 85), pdcrt_obtener_local(ctx, m, 119));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 118), "OperadorBinario", 15, pdc_mpdzipdc_N95_tokens_k31);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k31(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k31);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 86), pdcrt_obtener_local(ctx, m, 119));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 118), "Parcial", 7, pdc_mpdzipdc_N95_tokens_k32);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k32(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k32);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 87), pdcrt_obtener_local(ctx, m, 119));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 118), "LeerLínea", 10, pdc_mpdzipdc_N95_tokens_k33);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k33(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k33);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 88), pdcrt_obtener_local(ctx, m, 119));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 118), "LlamarConEC", 11, pdc_mpdzipdc_N95_tokens_k34);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k34(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k34);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 89), pdcrt_obtener_local(ctx, m, 119));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 118), "MétodoAbstracto", 16, pdc_mpdzipdc_N95_tokens_k35);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k35(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k35);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 90), pdcrt_obtener_local(ctx, m, 119));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 118), "Min", 3, pdc_mpdzipdc_N95_tokens_k36);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k36(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k36);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 91), pdcrt_obtener_local(ctx, m, 119));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 118), "EsNulo", 6, pdc_mpdzipdc_N95_tokens_k37);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k37(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k37);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 92), pdcrt_obtener_local(ctx, m, 119));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 118), "ÚltimoElemento", 15, pdc_mpdzipdc_N95_tokens_k38);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k38(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k38);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 93), pdcrt_obtener_local(ctx, m, 119));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 118), "PedazoDeArreglo", 15, pdc_mpdzipdc_N95_tokens_k39);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k39(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k39);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 94), pdcrt_obtener_local(ctx, m, 119));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 118), "Aplanar", 7, pdc_mpdzipdc_N95_tokens_k40);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k40(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k40);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 95), pdcrt_obtener_local(ctx, m, 119));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 118), "Mod", 3, pdc_mpdzipdc_N95_tokens_k41);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k41(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k41);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 96), pdcrt_obtener_local(ctx, m, 119));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 118), "Resto", 5, pdc_mpdzipdc_N95_tokens_k42);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k42(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k42);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 97), pdcrt_obtener_local(ctx, m, 119));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 118), "Aplicar\'i", 9, pdc_mpdzipdc_N95_tokens_k43);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k43(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k43);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 98), pdcrt_obtener_local(ctx, m, 119));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 118), "ArregloConFinal", 15, pdc_mpdzipdc_N95_tokens_k44);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k44(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k44);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 99), pdcrt_obtener_local(ctx, m, 119));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 118), "EsNúmero", 9, pdc_mpdzipdc_N95_tokens_k45);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k45(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k45);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 100), pdcrt_obtener_local(ctx, m, 119));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 118), "ConvertirANúmero", 17, pdc_mpdzipdc_N95_tokens_k46);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k46(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k46);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 101), pdcrt_obtener_local(ctx, m, 119));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 118), "Elevar", 6, pdc_mpdzipdc_N95_tokens_k47);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k47(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k47);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 102), pdcrt_obtener_local(ctx, m, 119));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 118), "Algún", 6, pdc_mpdzipdc_N95_tokens_k48);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k48(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k48);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 103), pdcrt_obtener_local(ctx, m, 119));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 118), "Mapear", 6, pdc_mpdzipdc_N95_tokens_k49);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k49(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k49);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 104), pdcrt_obtener_local(ctx, m, 119));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 118), "Identidad", 9, pdc_mpdzipdc_N95_tokens_k50);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k50(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k50);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 105), pdcrt_obtener_local(ctx, m, 119));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 118), "ParaCadaNúmeroConPaso", 22, pdc_mpdzipdc_N95_tokens_k51);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k51(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k51);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 106), pdcrt_obtener_local(ctx, m, 119));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 118), "EsInstancia", 11, pdc_mpdzipdc_N95_tokens_k52);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k52(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k52);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 107), pdcrt_obtener_local(ctx, m, 119));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 118), "EsSubclase", 10, pdc_mpdzipdc_N95_tokens_k53);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k53(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k53);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 119));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 118), "ParaCadaElementoConÍndice", 26, pdc_mpdzipdc_N95_tokens_k54);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k54(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k54);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 109), pdcrt_obtener_local(ctx, m, 119));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 118), "ParaCadaNúmero", 15, pdc_mpdzipdc_N95_tokens_k55);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k55(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k55);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 110, pdcrt_obtener_local(ctx, m, 119));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 2:0 >> 2:8 */
return pdcrt_importar(ctx, m, "pdzibepd_N95_x_N95_enum", 23, pdc_mpdzipdc_N95_tokens_k56);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k56(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k56);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 118, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 2:22 >> 2:26 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 118), "Enum", 4, pdc_mpdzipdc_N95_tokens_k57);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k57(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k57);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 2:22 >> 2:26 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 2:22 >> 2:26 */
pdcrt_fijar_local_nb(ctx, m, 111, pdcrt_obtener_local(ctx, m, 119));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 2:22 >> 2:26 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 3:0 >> 3:8 */
return pdcrt_importar(ctx, m, "pdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n", 50, pdc_mpdzipdc_N95_tokens_k58);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k58(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k58);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 3:0 >> 3:8 */
pdcrt_fijar_local(ctx, m, 118, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 3:37 >> 3:53 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 118), "PosiciónTextual", 16, pdc_mpdzipdc_N95_tokens_k59);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k59(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k59);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 3:37 >> 3:53 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 3:37 >> 3:53 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 112), pdcrt_obtener_local(ctx, m, 119));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 3:37 >> 3:53 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 3:0 >> 3:8 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 11:0 >> 11:5 */
pdcrt_fijar_local(ctx, m, 119, ctx->clase_objeto);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 11:0 >> 11:5 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 0);
return pdcrt_llamar0(ctx, m, pdc_mpdzipdc_N95_tokens_k60, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 119)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k60(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k60);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 11:0 >> 11:5 */
pdcrt_fijar_local(ctx, m, 118, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 11:0 >> 11:5 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 11:6 >> 11:18 */
pdcrt_fijar_local_nb(ctx, m, 113, pdcrt_obtener_local(ctx, m, 118));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 11:6 >> 11:18 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 11:6 >> 11:18 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_obtener_local(ctx, m, 113));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 11:0 >> 11:5 */
pdcrt_fijar_local(ctx, m, 120, PDCRT_OBTENER_CONSTANTE(ctx, m, 1));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 11:0 >> 11:5 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 2);
return pdcrt_llamar1(ctx, m, pdc_mpdzipdc_N95_tokens_k61, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 119)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 120)));
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k61(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k61);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 11:0 >> 11:5 */
pdcrt_fijar_local(ctx, m, 118, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 11:0 >> 11:5 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 11:0 >> 11:5 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 11:6 >> 11:18 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_obtener_local(ctx, m, 113));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 15:13 >> 15:29 */
pdcrt_fijar_local(ctx, m, 120, PDCRT_OBTENER_CONSTANTE(ctx, m, 3));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 15:4 >> 15:12 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 4);
return pdcrt_llamar1(ctx, m, pdc_mpdzipdc_N95_tokens_k62, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 119)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 120)));
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k62(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k62);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 15:4 >> 15:12 */
pdcrt_fijar_local(ctx, m, 118, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 15:4 >> 15:12 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 15:4 >> 15:12 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 11:6 >> 11:18 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_obtener_local(ctx, m, 113));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 20:13 >> 20:27 */
pdcrt_fijar_local(ctx, m, 120, PDCRT_OBTENER_CONSTANTE(ctx, m, 5));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 20:4 >> 20:12 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 4);
return pdcrt_llamar1(ctx, m, pdc_mpdzipdc_N95_tokens_k63, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 119)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 120)));
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k63(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k63);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 20:4 >> 20:12 */
pdcrt_fijar_local(ctx, m, 118, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 20:4 >> 20:12 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 20:4 >> 20:12 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 33:7 >> 33:19 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_obtener_local(ctx, m, 113));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 33:20 >> 33:31 */
pdcrt_fijar_local(ctx, m, 120, PDCRT_OBTENER_CONSTANTE(ctx, m, 6));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 33:0 >> 36:9 */
do {
static const pdcrt_captura caps[] = {};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzipdc_N95_tokens_f0, caps, 0);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 121, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 33:0 >> 36:9 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 9);
return pdcrt_llamar2(ctx, m, pdc_mpdzipdc_N95_tokens_k66, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 119)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 120)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 121)));
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k64(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k64);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 34:4 >> 34:48 */
pdcrt_fijar_local(ctx, m, 3, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 34:4 >> 34:48 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 34:4 >> 34:48 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 34:4 >> 35:44 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 35:10 >> 35:12 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_obtener_local(ctx, m, 0));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 35:30 >> 35:44 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_obtener_local(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 35:4 >> 35:44 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 8);
return pdcrt_llamar1(ctx, m, pdc_mpdzipdc_N95_tokens_k65, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)));
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k65(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k65);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 35:4 >> 35:44 */
pdcrt_fijar_local(ctx, m, 3, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 35:4 >> 35:44 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 35:4 >> 35:44 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 34:4 >> 35:44 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 33:0 >> 36:9 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 33:0 >> 36:9 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 3)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 33:0 >> 36:9 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k66(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k66);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 33:0 >> 36:9 */
pdcrt_fijar_local(ctx, m, 118, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 33:0 >> 36:9 */
pdcrt_fijar_local_nb(ctx, m, 121, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 33:0 >> 36:9 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 33:0 >> 36:9 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 38:7 >> 38:19 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_obtener_local(ctx, m, 113));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 38:20 >> 38:29 */
pdcrt_fijar_local(ctx, m, 120, PDCRT_OBTENER_CONSTANTE(ctx, m, 10));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 38:0 >> 40:9 */
do {
static const pdcrt_captura caps[] = {};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzipdc_N95_tokens_f1, caps, 0);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 121, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 38:0 >> 40:9 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 9);
return pdcrt_llamar2(ctx, m, pdc_mpdzipdc_N95_tokens_k69, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 119)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 120)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 121)));
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k67(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k67);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 39:48 >> 39:49 */
pdcrt_fijar_local(ctx, m, 3, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 39:48 >> 39:49 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 39:67 >> 39:69 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_obtener_local(ctx, m, 0));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 39:69 >> 39:70 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 5);
return pdcrt_llamar0(ctx, m, pdc_mpdzipdc_N95_tokens_k68, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k68(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k68);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 39:69 >> 39:70 */
pdcrt_fijar_local(ctx, m, 4, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 39:69 >> 39:70 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 39:34 >> 39:35 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 12);
return pdcrt_llamar2(ctx, m->k.marco, m->k.kf, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 2)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 3)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 39:34 >> 39:35 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 39:34 >> 39:35 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 39:34 >> 39:35 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 38:0 >> 40:9 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 38:0 >> 40:9 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 2)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 38:0 >> 40:9 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k69(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k69);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 38:0 >> 40:9 */
pdcrt_fijar_local(ctx, m, 118, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 38:0 >> 40:9 */
pdcrt_fijar_local_nb(ctx, m, 121, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 38:0 >> 40:9 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 38:0 >> 40:9 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 55:20 >> 55:24 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_obtener_local(ctx, m, 111));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 55:26 >> 55:39 */
pdcrt_fijar_local(ctx, m, 120, PDCRT_OBTENER_CONSTANTE(ctx, m, 13));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 56:4 >> 56:13 */
pdcrt_fijar_local(ctx, m, 121, PDCRT_OBTENER_CONSTANTE(ctx, m, 14));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 57:4 >> 57:11 */
pdcrt_fijar_local(ctx, m, 122, PDCRT_OBTENER_CONSTANTE(ctx, m, 15));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 58:4 >> 58:19 */
pdcrt_fijar_local(ctx, m, 123, PDCRT_OBTENER_CONSTANTE(ctx, m, 16));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 59:4 >> 59:19 */
pdcrt_fijar_local(ctx, m, 124, PDCRT_OBTENER_CONSTANTE(ctx, m, 17));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 60:4 >> 60:14 */
pdcrt_fijar_local(ctx, m, 125, PDCRT_OBTENER_CONSTANTE(ctx, m, 18));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 61:4 >> 61:16 */
pdcrt_fijar_local(ctx, m, 126, PDCRT_OBTENER_CONSTANTE(ctx, m, 19));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 55:20 >> 55:25 */
pdcrt_extender_pila(ctx, 1);
pdcrt_empujar(ctx, pdcrt_obtener_local(ctx, m, 126));
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 20);
return pdcrt_llamarnr(ctx, m, pdc_mpdzipdc_N95_tokens_k70, 7, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 119)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 120)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 121)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 122)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 123)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 124)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 125)));
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k70(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k70);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 55:20 >> 55:25 */
pdcrt_fijar_local(ctx, m, 118, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 55:20 >> 55:25 */
pdcrt_fijar_local_nb(ctx, m, 126, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 55:20 >> 55:25 */
pdcrt_fijar_local_nb(ctx, m, 125, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 55:20 >> 55:25 */
pdcrt_fijar_local_nb(ctx, m, 124, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 55:20 >> 55:25 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 55:20 >> 55:25 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 55:20 >> 55:25 */
pdcrt_fijar_local_nb(ctx, m, 121, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 55:20 >> 55:25 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 55:20 >> 55:25 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 55:6 >> 55:17 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 114), pdcrt_obtener_local(ctx, m, 118));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 55:6 >> 55:17 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 69:0 >> 69:5 */
pdcrt_fijar_local(ctx, m, 119, ctx->clase_objeto);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 69:0 >> 69:5 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 0);
return pdcrt_llamar0(ctx, m, pdc_mpdzipdc_N95_tokens_k71, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 119)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k71(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k71);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 69:0 >> 69:5 */
pdcrt_fijar_local(ctx, m, 118, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 69:0 >> 69:5 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 69:6 >> 69:11 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 115), pdcrt_obtener_local(ctx, m, 118));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 69:6 >> 69:11 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 69:6 >> 69:11 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 115)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 69:0 >> 69:5 */
pdcrt_fijar_local(ctx, m, 120, PDCRT_OBTENER_CONSTANTE(ctx, m, 21));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 69:0 >> 69:5 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 2);
return pdcrt_llamar1(ctx, m, pdc_mpdzipdc_N95_tokens_k72, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 119)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 120)));
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k72(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k72);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 69:0 >> 69:5 */
pdcrt_fijar_local(ctx, m, 118, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 69:0 >> 69:5 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 69:0 >> 69:5 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 69:6 >> 69:11 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 115)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 75:13 >> 75:17 */
pdcrt_fijar_local(ctx, m, 120, PDCRT_OBTENER_CONSTANTE(ctx, m, 22));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 75:4 >> 75:12 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 4);
return pdcrt_llamar1(ctx, m, pdc_mpdzipdc_N95_tokens_k73, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 119)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 120)));
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k73(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k73);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 75:4 >> 75:12 */
pdcrt_fijar_local(ctx, m, 118, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 75:4 >> 75:12 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 75:4 >> 75:12 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 69:6 >> 69:11 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 115)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 80:13 >> 80:25 */
pdcrt_fijar_local(ctx, m, 120, PDCRT_OBTENER_CONSTANTE(ctx, m, 23));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 80:4 >> 80:12 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 4);
return pdcrt_llamar1(ctx, m, pdc_mpdzipdc_N95_tokens_k74, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 119)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 120)));
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k74(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k74);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 80:4 >> 80:12 */
pdcrt_fijar_local(ctx, m, 118, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 80:4 >> 80:12 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 80:4 >> 80:12 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 69:6 >> 69:11 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 115)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 87:13 >> 87:22 */
pdcrt_fijar_local(ctx, m, 120, PDCRT_OBTENER_CONSTANTE(ctx, m, 24));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 87:4 >> 87:12 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 4);
return pdcrt_llamar1(ctx, m, pdc_mpdzipdc_N95_tokens_k75, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 119)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 120)));
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k75(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k75);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 87:4 >> 87:12 */
pdcrt_fijar_local(ctx, m, 118, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 87:4 >> 87:12 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 87:4 >> 87:12 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 160:16 >> 160:21 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 115)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 160:22 >> 160:29 */
pdcrt_fijar_local(ctx, m, 120, PDCRT_OBTENER_CONSTANTE(ctx, m, 25));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 160:0 >> 162:9 */
do {
static const pdcrt_captura caps[] = {{114}};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzipdc_N95_tokens_f2, caps, 1);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 121, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 160:0 >> 162:9 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 27);
return pdcrt_llamar2(ctx, m, pdc_mpdzipdc_N95_tokens_k77, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 119)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 120)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 121)));
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k76(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k76);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 161:34 >> 161:35 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 161:34 >> 161:35 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 161:44 >> 161:49 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_obtener_local(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 161:51 >> 161:60 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_obtener_local(ctx, m, 3));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 161:15 >> 161:16 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 26);
return pdcrt_llamar3(ctx, m->k.marco, m->k.kf, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 161:15 >> 161:16 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 161:15 >> 161:16 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 161:15 >> 161:16 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 161:15 >> 161:16 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 160:0 >> 162:9 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 160:0 >> 162:9 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 160:0 >> 162:9 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k77(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k77);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 160:0 >> 162:9 */
pdcrt_fijar_local(ctx, m, 118, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 160:0 >> 162:9 */
pdcrt_fijar_local_nb(ctx, m, 121, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 160:0 >> 162:9 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 160:0 >> 162:9 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 164:16 >> 164:21 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 115)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 164:22 >> 164:27 */
pdcrt_fijar_local(ctx, m, 120, PDCRT_OBTENER_CONSTANTE(ctx, m, 28));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 164:0 >> 166:9 */
do {
static const pdcrt_captura caps[] = {{114}};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzipdc_N95_tokens_f3, caps, 1);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 121, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 164:0 >> 166:9 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 27);
return pdcrt_llamar2(ctx, m, pdc_mpdzipdc_N95_tokens_k79, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 119)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 120)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 121)));
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k78(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k78);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 165:34 >> 165:35 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 165:34 >> 165:35 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 165:42 >> 165:47 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_obtener_local(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 165:49 >> 165:58 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_obtener_local(ctx, m, 3));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 165:15 >> 165:16 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 26);
return pdcrt_llamar3(ctx, m->k.marco, m->k.kf, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 165:15 >> 165:16 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 165:15 >> 165:16 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 165:15 >> 165:16 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 165:15 >> 165:16 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 164:0 >> 166:9 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 164:0 >> 166:9 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 164:0 >> 166:9 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k79(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k79);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 164:0 >> 166:9 */
pdcrt_fijar_local(ctx, m, 118, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 164:0 >> 166:9 */
pdcrt_fijar_local_nb(ctx, m, 121, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 164:0 >> 166:9 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 164:0 >> 166:9 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 168:16 >> 168:21 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 115)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 168:22 >> 168:35 */
pdcrt_fijar_local(ctx, m, 120, PDCRT_OBTENER_CONSTANTE(ctx, m, 29));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 168:0 >> 170:9 */
do {
static const pdcrt_captura caps[] = {{114}};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzipdc_N95_tokens_f4, caps, 1);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 121, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 168:0 >> 170:9 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 27);
return pdcrt_llamar2(ctx, m, pdc_mpdzipdc_N95_tokens_k81, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 119)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 120)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 121)));
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k80(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k80);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 169:34 >> 169:35 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 169:34 >> 169:35 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 169:50 >> 169:55 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_obtener_local(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 169:57 >> 169:66 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_obtener_local(ctx, m, 3));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 169:15 >> 169:16 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 26);
return pdcrt_llamar3(ctx, m->k.marco, m->k.kf, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 169:15 >> 169:16 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 169:15 >> 169:16 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 169:15 >> 169:16 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 169:15 >> 169:16 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 168:0 >> 170:9 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 168:0 >> 170:9 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 168:0 >> 170:9 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k81(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k81);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 168:0 >> 170:9 */
pdcrt_fijar_local(ctx, m, 118, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 168:0 >> 170:9 */
pdcrt_fijar_local_nb(ctx, m, 121, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 168:0 >> 170:9 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 168:0 >> 170:9 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 172:16 >> 172:21 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 115)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 172:22 >> 172:34 */
pdcrt_fijar_local(ctx, m, 120, PDCRT_OBTENER_CONSTANTE(ctx, m, 30));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 172:0 >> 174:9 */
do {
static const pdcrt_captura caps[] = {{114}, {2}};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzipdc_N95_tokens_f5, caps, 2);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 121, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 172:0 >> 174:9 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 27);
return pdcrt_llamar2(ctx, m, pdc_mpdzipdc_N95_tokens_k83, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 119)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 120)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 121)));
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k82(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k82);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 173:34 >> 173:35 */
pdcrt_fijar_local(ctx, m, 7, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 173:34 >> 173:35 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 173:50 >> 173:55 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_obtener_local(ctx, m, 3));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 173:57 >> 173:66 */
pdcrt_fijar_local(ctx, m, 9, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 4)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 173:15 >> 173:16 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 26);
return pdcrt_llamar3(ctx, m->k.marco, m->k.kf, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 173:15 >> 173:16 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 173:15 >> 173:16 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 173:15 >> 173:16 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 173:15 >> 173:16 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 172:0 >> 174:9 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 172:0 >> 174:9 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 172:0 >> 174:9 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k83(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k83);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 172:0 >> 174:9 */
pdcrt_fijar_local(ctx, m, 118, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 172:0 >> 174:9 */
pdcrt_fijar_local_nb(ctx, m, 121, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 172:0 >> 174:9 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 172:0 >> 174:9 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 176:16 >> 176:21 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 115)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 176:22 >> 176:30 */
pdcrt_fijar_local(ctx, m, 120, PDCRT_OBTENER_CONSTANTE(ctx, m, 31));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 176:0 >> 178:9 */
do {
static const pdcrt_captura caps[] = {{114}, {0}};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzipdc_N95_tokens_f6, caps, 2);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 121, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 176:0 >> 178:9 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 27);
return pdcrt_llamar2(ctx, m, pdc_mpdzipdc_N95_tokens_k85, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 119)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 120)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 121)));
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k84(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k84);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 177:34 >> 177:35 */
pdcrt_fijar_local(ctx, m, 7, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 177:34 >> 177:35 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 177:45 >> 177:50 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 3)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 177:52 >> 177:61 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_obtener_local(ctx, m, 4));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 177:15 >> 177:16 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 26);
return pdcrt_llamar3(ctx, m->k.marco, m->k.kf, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 177:15 >> 177:16 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 177:15 >> 177:16 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 177:15 >> 177:16 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 177:15 >> 177:16 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 176:0 >> 178:9 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 176:0 >> 178:9 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 176:0 >> 178:9 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k85(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k85);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 176:0 >> 178:9 */
pdcrt_fijar_local(ctx, m, 118, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 176:0 >> 178:9 */
pdcrt_fijar_local_nb(ctx, m, 121, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 176:0 >> 178:9 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 176:0 >> 178:9 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 180:16 >> 180:21 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 115)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 180:22 >> 180:32 */
pdcrt_fijar_local(ctx, m, 120, PDCRT_OBTENER_CONSTANTE(ctx, m, 32));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 180:0 >> 182:9 */
do {
static const pdcrt_captura caps[] = {{114}};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzipdc_N95_tokens_f7, caps, 1);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 121, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 180:0 >> 182:9 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 27);
return pdcrt_llamar2(ctx, m, pdc_mpdzipdc_N95_tokens_k87, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 119)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 120)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 121)));
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k86(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k86);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 181:34 >> 181:35 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 181:34 >> 181:35 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 181:47 >> 181:52 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_obtener_local(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 181:54 >> 181:63 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_obtener_local(ctx, m, 3));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 181:15 >> 181:16 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 26);
return pdcrt_llamar3(ctx, m->k.marco, m->k.kf, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 181:15 >> 181:16 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 181:15 >> 181:16 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 181:15 >> 181:16 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 181:15 >> 181:16 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 180:0 >> 182:9 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 180:0 >> 182:9 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 180:0 >> 182:9 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k87(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k87);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 180:0 >> 182:9 */
pdcrt_fijar_local(ctx, m, 118, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 180:0 >> 182:9 */
pdcrt_fijar_local_nb(ctx, m, 121, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 180:0 >> 182:9 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 180:0 >> 182:9 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 184:7 >> 184:12 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 115)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 184:13 >> 184:24 */
pdcrt_fijar_local(ctx, m, 120, PDCRT_OBTENER_CONSTANTE(ctx, m, 6));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 184:0 >> 188:9 */
do {
static const pdcrt_captura caps[] = {};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzipdc_N95_tokens_f8, caps, 0);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 121, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 184:0 >> 188:9 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 9);
return pdcrt_llamar2(ctx, m, pdc_mpdzipdc_N95_tokens_k91, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 119)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 120)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 121)));
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k88(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k88);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 185:4 >> 185:24 */
pdcrt_fijar_local(ctx, m, 4, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 185:4 >> 185:24 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 185:4 >> 185:24 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 185:4 >> 187:34 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 186:10 >> 186:12 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_obtener_local(ctx, m, 0));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 186:28 >> 186:33 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_obtener_local(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 186:4 >> 186:33 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 34);
return pdcrt_llamar1(ctx, m, pdc_mpdzipdc_N95_tokens_k89, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)));
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k89(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k89);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 186:4 >> 186:33 */
pdcrt_fijar_local(ctx, m, 4, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 186:4 >> 186:33 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 186:4 >> 186:33 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 185:4 >> 187:34 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 187:10 >> 187:12 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_obtener_local(ctx, m, 0));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 187:25 >> 187:34 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_obtener_local(ctx, m, 3));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 187:4 >> 187:34 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 35);
return pdcrt_llamar1(ctx, m, pdc_mpdzipdc_N95_tokens_k90, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)));
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k90(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k90);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 187:4 >> 187:34 */
pdcrt_fijar_local(ctx, m, 4, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 187:4 >> 187:34 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 187:4 >> 187:34 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 185:4 >> 187:34 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 184:0 >> 188:9 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 184:0 >> 188:9 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 184:0 >> 188:9 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k91(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k91);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 184:0 >> 188:9 */
pdcrt_fijar_local(ctx, m, 118, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 184:0 >> 188:9 */
pdcrt_fijar_local_nb(ctx, m, 121, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 184:0 >> 188:9 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 184:0 >> 188:9 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 190:7 >> 190:12 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 115)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 190:13 >> 190:22 */
pdcrt_fijar_local(ctx, m, 120, PDCRT_OBTENER_CONSTANTE(ctx, m, 10));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 190:0 >> 192:9 */
do {
static const pdcrt_captura caps[] = {};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzipdc_N95_tokens_f9, caps, 0);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 121, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 190:0 >> 192:9 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 9);
return pdcrt_llamar2(ctx, m, pdc_mpdzipdc_N95_tokens_k95, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 119)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 120)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 121)));
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k92(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k92);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 191:52 >> 191:53 */
pdcrt_fijar_local(ctx, m, 3, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 191:52 >> 191:53 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 191:59 >> 191:61 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_obtener_local(ctx, m, 0));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 191:61 >> 191:62 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 23);
return pdcrt_llamar0(ctx, m, pdc_mpdzipdc_N95_tokens_k93, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k93(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k93);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 191:61 >> 191:62 */
pdcrt_fijar_local(ctx, m, 4, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 191:61 >> 191:62 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 191:76 >> 191:78 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_obtener_local(ctx, m, 0));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 191:78 >> 191:79 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 24);
return pdcrt_llamar0(ctx, m, pdc_mpdzipdc_N95_tokens_k94, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k94(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k94);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 191:78 >> 191:79 */
pdcrt_fijar_local(ctx, m, 5, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 191:78 >> 191:79 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 191:38 >> 191:39 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 12);
return pdcrt_llamar3(ctx, m->k.marco, m->k.kf, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 2)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 3)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 191:38 >> 191:39 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 191:38 >> 191:39 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 191:38 >> 191:39 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 191:38 >> 191:39 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 190:0 >> 192:9 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 190:0 >> 192:9 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 2)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 190:0 >> 192:9 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k95(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k95);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 190:0 >> 192:9 */
pdcrt_fijar_local(ctx, m, 118, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 190:0 >> 192:9 */
pdcrt_fijar_local_nb(ctx, m, 121, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 190:0 >> 192:9 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 190:0 >> 192:9 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 194:7 >> 194:12 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 115)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 194:13 >> 194:22 */
pdcrt_fijar_local(ctx, m, 120, PDCRT_OBTENER_CONSTANTE(ctx, m, 37));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 194:0 >> 196:9 */
do {
static const pdcrt_captura caps[] = {{114}};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzipdc_N95_tokens_f10, caps, 1);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 121, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 194:0 >> 196:9 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 9);
return pdcrt_llamar2(ctx, m, pdc_mpdzipdc_N95_tokens_k98, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 119)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 120)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 121)));
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k96(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k96);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 195:15 >> 195:16 */
pdcrt_fijar_local(ctx, m, 3, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 195:15 >> 195:16 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 195:23 >> 195:34 */
pdcrt_fijar_local(ctx, m, 5, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 195:34 >> 195:35 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 14);
return pdcrt_llamar0(ctx, m, pdc_mpdzipdc_N95_tokens_k97, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k97(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k97);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 195:34 >> 195:35 */
pdcrt_fijar_local(ctx, m, 4, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 195:34 >> 195:35 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 195:15 >> 195:35 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 38);
return pdcrt_llamar1(ctx, m->k.marco, m->k.kf, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 3)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 195:15 >> 195:35 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 195:15 >> 195:35 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 194:0 >> 196:9 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 194:0 >> 196:9 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 3)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 194:0 >> 196:9 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k98(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k98);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 194:0 >> 196:9 */
pdcrt_fijar_local(ctx, m, 118, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 194:0 >> 196:9 */
pdcrt_fijar_local_nb(ctx, m, 121, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 194:0 >> 196:9 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 194:0 >> 196:9 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 198:7 >> 198:12 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 115)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 198:13 >> 198:20 */
pdcrt_fijar_local(ctx, m, 120, PDCRT_OBTENER_CONSTANTE(ctx, m, 39));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 198:0 >> 200:9 */
do {
static const pdcrt_captura caps[] = {{114}};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzipdc_N95_tokens_f11, caps, 1);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 121, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 198:0 >> 200:9 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 9);
return pdcrt_llamar2(ctx, m, pdc_mpdzipdc_N95_tokens_k101, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 119)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 120)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 121)));
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k99(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k99);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 199:15 >> 199:16 */
pdcrt_fijar_local(ctx, m, 3, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 199:15 >> 199:16 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 199:23 >> 199:34 */
pdcrt_fijar_local(ctx, m, 5, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 199:34 >> 199:35 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 15);
return pdcrt_llamar0(ctx, m, pdc_mpdzipdc_N95_tokens_k100, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k100(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k100);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 199:34 >> 199:35 */
pdcrt_fijar_local(ctx, m, 4, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 199:34 >> 199:35 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 199:15 >> 199:35 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 38);
return pdcrt_llamar1(ctx, m->k.marco, m->k.kf, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 3)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 199:15 >> 199:35 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 199:15 >> 199:35 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 198:0 >> 200:9 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 198:0 >> 200:9 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 3)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 198:0 >> 200:9 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k101(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k101);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 198:0 >> 200:9 */
pdcrt_fijar_local(ctx, m, 118, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 198:0 >> 200:9 */
pdcrt_fijar_local_nb(ctx, m, 121, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 198:0 >> 200:9 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 198:0 >> 200:9 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 202:7 >> 202:12 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 115)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 202:13 >> 202:28 */
pdcrt_fijar_local(ctx, m, 120, PDCRT_OBTENER_CONSTANTE(ctx, m, 40));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 202:0 >> 204:9 */
do {
static const pdcrt_captura caps[] = {{114}};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzipdc_N95_tokens_f12, caps, 1);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 121, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 202:0 >> 204:9 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 9);
return pdcrt_llamar2(ctx, m, pdc_mpdzipdc_N95_tokens_k104, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 119)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 120)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 121)));
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k102(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k102);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 203:15 >> 203:16 */
pdcrt_fijar_local(ctx, m, 3, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 203:15 >> 203:16 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 203:23 >> 203:34 */
pdcrt_fijar_local(ctx, m, 5, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 203:34 >> 203:35 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 16);
return pdcrt_llamar0(ctx, m, pdc_mpdzipdc_N95_tokens_k103, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k103(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k103);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 203:34 >> 203:35 */
pdcrt_fijar_local(ctx, m, 4, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 203:34 >> 203:35 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 203:15 >> 203:35 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 38);
return pdcrt_llamar1(ctx, m->k.marco, m->k.kf, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 3)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 203:15 >> 203:35 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 203:15 >> 203:35 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 202:0 >> 204:9 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 202:0 >> 204:9 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 3)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 202:0 >> 204:9 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k104(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k104);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 202:0 >> 204:9 */
pdcrt_fijar_local(ctx, m, 118, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 202:0 >> 204:9 */
pdcrt_fijar_local_nb(ctx, m, 121, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 202:0 >> 204:9 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 202:0 >> 204:9 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 206:7 >> 206:12 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 115)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 206:13 >> 206:27 */
pdcrt_fijar_local(ctx, m, 120, PDCRT_OBTENER_CONSTANTE(ctx, m, 41));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 206:0 >> 208:9 */
do {
static const pdcrt_captura caps[] = {{114}, {3}};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzipdc_N95_tokens_f13, caps, 2);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 121, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 206:0 >> 208:9 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 9);
return pdcrt_llamar2(ctx, m, pdc_mpdzipdc_N95_tokens_k110, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 119)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 120)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 121)));
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k105(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k105);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 207:16 >> 207:17 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 207:16 >> 207:17 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 207:24 >> 207:35 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 207:35 >> 207:36 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 17);
return pdcrt_llamar0(ctx, m, pdc_mpdzipdc_N95_tokens_k106, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k106(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k106);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 207:35 >> 207:36 */
pdcrt_fijar_local(ctx, m, 7, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 207:35 >> 207:36 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 207:16 >> 207:36 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 38);
return pdcrt_llamar1(ctx, m, pdc_mpdzipdc_N95_tokens_k107, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)));
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k107(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k107);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 207:16 >> 207:36 */
pdcrt_fijar_local(ctx, m, 5, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 207:16 >> 207:36 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 207:16 >> 207:36 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 207:55 >> 207:57 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_obtener_local(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 207:57 >> 207:58 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 24);
return pdcrt_llamar0(ctx, m, pdc_mpdzipdc_N95_tokens_k108, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k108(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k108);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 207:57 >> 207:58 */
pdcrt_fijar_local(ctx, m, 7, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 207:57 >> 207:58 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 207:70 >> 207:77 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 3)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 207:57 >> 207:77 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 38);
return pdcrt_llamar1(ctx, m, pdc_mpdzipdc_N95_tokens_k109, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)));
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k109(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k109);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 207:57 >> 207:77 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 207:57 >> 207:77 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 207:57 >> 207:77 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 207:16 >> 207:77 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 42);
return pdcrt_llamar1(ctx, m->k.marco, m->k.kf, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 207:16 >> 207:77 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 207:16 >> 207:77 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 206:0 >> 208:9 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 206:0 >> 208:9 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 206:0 >> 208:9 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k110(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k110);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 206:0 >> 208:9 */
pdcrt_fijar_local(ctx, m, 118, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 206:0 >> 208:9 */
pdcrt_fijar_local_nb(ctx, m, 121, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 206:0 >> 208:9 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 206:0 >> 208:9 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 210:7 >> 210:12 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 115)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 210:13 >> 210:23 */
pdcrt_fijar_local(ctx, m, 120, PDCRT_OBTENER_CONSTANTE(ctx, m, 43));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 210:0 >> 212:9 */
do {
static const pdcrt_captura caps[] = {{114}};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzipdc_N95_tokens_f14, caps, 1);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 121, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 210:0 >> 212:9 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 9);
return pdcrt_llamar2(ctx, m, pdc_mpdzipdc_N95_tokens_k113, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 119)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 120)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 121)));
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k111(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k111);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 211:15 >> 211:16 */
pdcrt_fijar_local(ctx, m, 3, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 211:15 >> 211:16 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 211:23 >> 211:34 */
pdcrt_fijar_local(ctx, m, 5, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 211:34 >> 211:35 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 18);
return pdcrt_llamar0(ctx, m, pdc_mpdzipdc_N95_tokens_k112, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k112(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k112);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 211:34 >> 211:35 */
pdcrt_fijar_local(ctx, m, 4, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 211:34 >> 211:35 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 211:15 >> 211:35 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 38);
return pdcrt_llamar1(ctx, m->k.marco, m->k.kf, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 3)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 211:15 >> 211:35 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 211:15 >> 211:35 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 210:0 >> 212:9 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 210:0 >> 212:9 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 3)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 210:0 >> 212:9 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k113(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k113);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 210:0 >> 212:9 */
pdcrt_fijar_local(ctx, m, 118, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 210:0 >> 212:9 */
pdcrt_fijar_local_nb(ctx, m, 121, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 210:0 >> 212:9 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 210:0 >> 212:9 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 214:7 >> 214:12 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 115)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 214:13 >> 214:25 */
pdcrt_fijar_local(ctx, m, 120, PDCRT_OBTENER_CONSTANTE(ctx, m, 44));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 214:0 >> 216:9 */
do {
static const pdcrt_captura caps[] = {{114}};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzipdc_N95_tokens_f15, caps, 1);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 121, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 214:0 >> 216:9 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 9);
return pdcrt_llamar2(ctx, m, pdc_mpdzipdc_N95_tokens_k116, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 119)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 120)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 121)));
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k114(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k114);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 215:15 >> 215:16 */
pdcrt_fijar_local(ctx, m, 3, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 215:15 >> 215:16 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 215:23 >> 215:34 */
pdcrt_fijar_local(ctx, m, 5, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 215:34 >> 215:35 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 19);
return pdcrt_llamar0(ctx, m, pdc_mpdzipdc_N95_tokens_k115, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k115(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k115);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 215:34 >> 215:35 */
pdcrt_fijar_local(ctx, m, 4, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 215:34 >> 215:35 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 215:15 >> 215:35 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 38);
return pdcrt_llamar1(ctx, m->k.marco, m->k.kf, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 3)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 215:15 >> 215:35 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 215:15 >> 215:35 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 214:0 >> 216:9 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 214:0 >> 216:9 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 3)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 214:0 >> 216:9 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k116(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k116);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 214:0 >> 216:9 */
pdcrt_fijar_local(ctx, m, 118, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 214:0 >> 216:9 */
pdcrt_fijar_local_nb(ctx, m, 121, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 214:0 >> 216:9 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 214:0 >> 216:9 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 226:5 >> 226:12 */
pdcrt_fijar_local(ctx, m, 120, ctx->espacio_de_nombres_runtime);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 226:5 >> 226:12 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 45);
return pdcrt_llamar0(ctx, m, pdc_mpdzipdc_N95_tokens_k117, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 120)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k117(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k117);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 226:5 >> 226:12 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 226:5 >> 226:12 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 227:8 >> 227:11 */
pdcrt_fijar_local(ctx, m, 120, PDCRT_OBTENER_CONSTANTE(ctx, m, 46));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 227:13 >> 227:16 */
pdcrt_fijar_local(ctx, m, 121, PDCRT_OBTENER_CONSTANTE(ctx, m, 47));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 227:18 >> 227:21 */
pdcrt_fijar_local(ctx, m, 122, PDCRT_OBTENER_CONSTANTE(ctx, m, 48));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 227:23 >> 227:26 */
pdcrt_fijar_local(ctx, m, 123, PDCRT_OBTENER_CONSTANTE(ctx, m, 49));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 227:28 >> 227:31 */
pdcrt_fijar_local(ctx, m, 124, PDCRT_OBTENER_CONSTANTE(ctx, m, 50));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 227:33 >> 227:36 */
pdcrt_fijar_local(ctx, m, 125, PDCRT_OBTENER_CONSTANTE(ctx, m, 51));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 227:38 >> 227:41 */
pdcrt_fijar_local(ctx, m, 126, PDCRT_OBTENER_CONSTANTE(ctx, m, 52));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 227:43 >> 227:46 */
pdcrt_fijar_local(ctx, m, 127, PDCRT_OBTENER_CONSTANTE(ctx, m, 53));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 227:48 >> 227:51 */
pdcrt_fijar_local(ctx, m, 128, PDCRT_OBTENER_CONSTANTE(ctx, m, 54));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 227:53 >> 227:57 */
pdcrt_fijar_local(ctx, m, 129, PDCRT_OBTENER_CONSTANTE(ctx, m, 55));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 227:59 >> 227:63 */
pdcrt_fijar_local(ctx, m, 130, PDCRT_OBTENER_CONSTANTE(ctx, m, 56));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 227:65 >> 227:70 */
pdcrt_fijar_local(ctx, m, 131, PDCRT_OBTENER_CONSTANTE(ctx, m, 57));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 227:72 >> 227:77 */
pdcrt_fijar_local(ctx, m, 132, PDCRT_OBTENER_CONSTANTE(ctx, m, 58));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 228:8 >> 228:11 */
pdcrt_fijar_local(ctx, m, 133, PDCRT_OBTENER_CONSTANTE(ctx, m, 59));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 228:13 >> 228:16 */
pdcrt_fijar_local(ctx, m, 134, PDCRT_OBTENER_CONSTANTE(ctx, m, 60));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 228:18 >> 228:21 */
pdcrt_fijar_local(ctx, m, 135, PDCRT_OBTENER_CONSTANTE(ctx, m, 61));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 229:8 >> 229:18 */
pdcrt_fijar_local(ctx, m, 136, PDCRT_OBTENER_CONSTANTE(ctx, m, 62));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 229:20 >> 229:31 */
pdcrt_fijar_local(ctx, m, 137, PDCRT_OBTENER_CONSTANTE(ctx, m, 63));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 229:33 >> 229:43 */
pdcrt_fijar_local(ctx, m, 138, PDCRT_OBTENER_CONSTANTE(ctx, m, 64));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 229:45 >> 229:56 */
pdcrt_fijar_local(ctx, m, 139, PDCRT_OBTENER_CONSTANTE(ctx, m, 65));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 229:58 >> 229:65 */
pdcrt_fijar_local(ctx, m, 140, PDCRT_OBTENER_CONSTANTE(ctx, m, 66));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 229:67 >> 229:70 */
pdcrt_fijar_local(ctx, m, 141, PDCRT_OBTENER_CONSTANTE(ctx, m, 67));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 230:8 >> 230:18 */
pdcrt_fijar_local(ctx, m, 142, PDCRT_OBTENER_CONSTANTE(ctx, m, 68));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 230:20 >> 230:24 */
pdcrt_fijar_local(ctx, m, 143, PDCRT_OBTENER_CONSTANTE(ctx, m, 69));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 230:26 >> 230:32 */
pdcrt_fijar_local(ctx, m, 144, PDCRT_OBTENER_CONSTANTE(ctx, m, 70));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 230:34 >> 230:38 */
pdcrt_fijar_local(ctx, m, 145, PDCRT_OBTENER_CONSTANTE(ctx, m, 71));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 230:40 >> 230:47 */
pdcrt_fijar_local(ctx, m, 146, PDCRT_OBTENER_CONSTANTE(ctx, m, 72));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 230:49 >> 230:55 */
pdcrt_fijar_local(ctx, m, 147, PDCRT_OBTENER_CONSTANTE(ctx, m, 73));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 230:57 >> 230:67 */
pdcrt_fijar_local(ctx, m, 148, PDCRT_OBTENER_CONSTANTE(ctx, m, 74));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 231:8 >> 231:21 */
pdcrt_fijar_local(ctx, m, 149, PDCRT_OBTENER_CONSTANTE(ctx, m, 75));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 231:23 >> 231:32 */
pdcrt_fijar_local(ctx, m, 150, PDCRT_OBTENER_CONSTANTE(ctx, m, 76));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 231:34 >> 231:46 */
pdcrt_fijar_local(ctx, m, 151, PDCRT_OBTENER_CONSTANTE(ctx, m, 77));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 231:48 >> 231:63 */
pdcrt_fijar_local(ctx, m, 152, PDCRT_OBTENER_CONSTANTE(ctx, m, 78));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 232:8 >> 232:26 */
pdcrt_fijar_local(ctx, m, 153, PDCRT_OBTENER_CONSTANTE(ctx, m, 79));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 232:28 >> 232:36 */
pdcrt_fijar_local(ctx, m, 154, PDCRT_OBTENER_CONSTANTE(ctx, m, 80));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 232:38 >> 232:49 */
pdcrt_fijar_local(ctx, m, 155, PDCRT_OBTENER_CONSTANTE(ctx, m, 81));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 232:51 >> 232:61 */
pdcrt_fijar_local(ctx, m, 156, PDCRT_OBTENER_CONSTANTE(ctx, m, 82));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 232:63 >> 232:71 */
pdcrt_fijar_local(ctx, m, 157, PDCRT_OBTENER_CONSTANTE(ctx, m, 20));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 233:8 >> 233:17 */
pdcrt_fijar_local(ctx, m, 158, PDCRT_OBTENER_CONSTANTE(ctx, m, 83));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 233:19 >> 233:24 */
pdcrt_fijar_local(ctx, m, 159, PDCRT_OBTENER_CONSTANTE(ctx, m, 84));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 233:26 >> 233:30 */
pdcrt_fijar_local(ctx, m, 160, PDCRT_OBTENER_CONSTANTE(ctx, m, 85));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 233:32 >> 233:35 */
pdcrt_fijar_local(ctx, m, 161, PDCRT_OBTENER_CONSTANTE(ctx, m, 86));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 233:37 >> 233:40 */
pdcrt_fijar_local(ctx, m, 162, PDCRT_OBTENER_CONSTANTE(ctx, m, 87));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 233:42 >> 233:49 */
pdcrt_fijar_local(ctx, m, 163, PDCRT_OBTENER_CONSTANTE(ctx, m, 88));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 233:51 >> 233:59 */
pdcrt_fijar_local(ctx, m, 164, PDCRT_OBTENER_CONSTANTE(ctx, m, 89));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 233:61 >> 233:71 */
pdcrt_fijar_local(ctx, m, 165, PDCRT_OBTENER_CONSTANTE(ctx, m, 90));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 234:8 >> 234:20 */
pdcrt_fijar_local(ctx, m, 166, PDCRT_OBTENER_CONSTANTE(ctx, m, 91));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 234:22 >> 234:32 */
pdcrt_fijar_local(ctx, m, 167, PDCRT_OBTENER_CONSTANTE(ctx, m, 92));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 234:34 >> 234:44 */
pdcrt_fijar_local(ctx, m, 168, PDCRT_OBTENER_CONSTANTE(ctx, m, 93));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 234:46 >> 234:57 */
pdcrt_fijar_local(ctx, m, 169, PDCRT_OBTENER_CONSTANTE(ctx, m, 94));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 234:59 >> 234:69 */
pdcrt_fijar_local(ctx, m, 170, PDCRT_OBTENER_CONSTANTE(ctx, m, 95));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 235:8 >> 235:16 */
pdcrt_fijar_local(ctx, m, 171, PDCRT_OBTENER_CONSTANTE(ctx, m, 96));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 235:18 >> 235:29 */
pdcrt_fijar_local(ctx, m, 172, PDCRT_OBTENER_CONSTANTE(ctx, m, 97));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 235:31 >> 235:36 */
pdcrt_fijar_local(ctx, m, 173, PDCRT_OBTENER_CONSTANTE(ctx, m, 98));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 235:38 >> 235:44 */
pdcrt_fijar_local(ctx, m, 174, PDCRT_OBTENER_CONSTANTE(ctx, m, 99));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 235:46 >> 235:55 */
pdcrt_fijar_local(ctx, m, 175, PDCRT_OBTENER_CONSTANTE(ctx, m, 100));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 235:57 >> 235:69 */
pdcrt_fijar_local(ctx, m, 176, PDCRT_OBTENER_CONSTANTE(ctx, m, 101));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 235:71 >> 235:74 */
pdcrt_fijar_local(ctx, m, 177, PDCRT_OBTENER_CONSTANTE(ctx, m, 86));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 236:8 >> 236:15 */
pdcrt_fijar_local(ctx, m, 178, PDCRT_OBTENER_CONSTANTE(ctx, m, 102));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 236:17 >> 236:23 */
pdcrt_fijar_local(ctx, m, 179, PDCRT_OBTENER_CONSTANTE(ctx, m, 103));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 236:25 >> 236:32 */
pdcrt_fijar_local(ctx, m, 180, PDCRT_OBTENER_CONSTANTE(ctx, m, 104));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 236:34 >> 236:37 */
pdcrt_fijar_local(ctx, m, 181, PDCRT_OBTENER_CONSTANTE(ctx, m, 105));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 236:39 >> 236:50 */
pdcrt_fijar_local(ctx, m, 182, PDCRT_OBTENER_CONSTANTE(ctx, m, 106));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 236:52 >> 236:62 */
pdcrt_fijar_local(ctx, m, 183, PDCRT_OBTENER_CONSTANTE(ctx, m, 107));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 236:64 >> 236:68 */
pdcrt_fijar_local(ctx, m, 184, PDCRT_OBTENER_CONSTANTE(ctx, m, 108));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 237:8 >> 237:23 */
pdcrt_fijar_local(ctx, m, 185, PDCRT_OBTENER_CONSTANTE(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 237:25 >> 237:30 */
pdcrt_fijar_local(ctx, m, 186, PDCRT_OBTENER_CONSTANTE(ctx, m, 110));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 237:32 >> 237:43 */
pdcrt_fijar_local(ctx, m, 187, PDCRT_OBTENER_CONSTANTE(ctx, m, 111));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 237:45 >> 237:56 */
pdcrt_fijar_local(ctx, m, 188, PDCRT_OBTENER_CONSTANTE(ctx, m, 112));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 226:12 >> 226:13 */
pdcrt_extender_pila(ctx, 63);
pdcrt_empujar(ctx, pdcrt_obtener_local(ctx, m, 126));
pdcrt_empujar(ctx, pdcrt_obtener_local(ctx, m, 127));
pdcrt_empujar(ctx, pdcrt_obtener_local(ctx, m, 128));
pdcrt_empujar(ctx, pdcrt_obtener_local(ctx, m, 129));
pdcrt_empujar(ctx, pdcrt_obtener_local(ctx, m, 130));
pdcrt_empujar(ctx, pdcrt_obtener_local(ctx, m, 131));
pdcrt_empujar(ctx, pdcrt_obtener_local(ctx, m, 132));
pdcrt_empujar(ctx, pdcrt_obtener_local(ctx, m, 133));
pdcrt_empujar(ctx, pdcrt_obtener_local(ctx, m, 134));
pdcrt_empujar(ctx, pdcrt_obtener_local(ctx, m, 135));
pdcrt_empujar(ctx, pdcrt_obtener_local(ctx, m, 136));
pdcrt_empujar(ctx, pdcrt_obtener_local(ctx, m, 137));
pdcrt_empujar(ctx, pdcrt_obtener_local(ctx, m, 138));
pdcrt_empujar(ctx, pdcrt_obtener_local(ctx, m, 139));
pdcrt_empujar(ctx, pdcrt_obtener_local(ctx, m, 140));
pdcrt_empujar(ctx, pdcrt_obtener_local(ctx, m, 141));
pdcrt_empujar(ctx, pdcrt_obtener_local(ctx, m, 142));
pdcrt_empujar(ctx, pdcrt_obtener_local(ctx, m, 143));
pdcrt_empujar(ctx, pdcrt_obtener_local(ctx, m, 144));
pdcrt_empujar(ctx, pdcrt_obtener_local(ctx, m, 145));
pdcrt_empujar(ctx, pdcrt_obtener_local(ctx, m, 146));
pdcrt_empujar(ctx, pdcrt_obtener_local(ctx, m, 147));
pdcrt_empujar(ctx, pdcrt_obtener_local(ctx, m, 148));
pdcrt_empujar(ctx, pdcrt_obtener_local(ctx, m, 149));
pdcrt_empujar(ctx, pdcrt_obtener_local(ctx, m, 150));
pdcrt_empujar(ctx, pdcrt_obtener_local(ctx, m, 151));
pdcrt_empujar(ctx, pdcrt_obtener_local(ctx, m, 152));
pdcrt_empujar(ctx, pdcrt_obtener_local(ctx, m, 153));
pdcrt_empujar(ctx, pdcrt_obtener_local(ctx, m, 154));
pdcrt_empujar(ctx, pdcrt_obtener_local(ctx, m, 155));
pdcrt_empujar(ctx, pdcrt_obtener_local(ctx, m, 156));
pdcrt_empujar(ctx, pdcrt_obtener_local(ctx, m, 157));
pdcrt_empujar(ctx, pdcrt_obtener_local(ctx, m, 158));
pdcrt_empujar(ctx, pdcrt_obtener_local(ctx, m, 159));
pdcrt_empujar(ctx, pdcrt_obtener_local(ctx, m, 160));
pdcrt_empujar(ctx, pdcrt_obtener_local(ctx, m, 161));
pdcrt_empujar(ctx, pdcrt_obtener_local(ctx, m, 162));
pdcrt_empujar(ctx, pdcrt_obtener_local(ctx, m, 163));
pdcrt_empujar(ctx, pdcrt_obtener_local(ctx, m, 164));
pdcrt_empujar(ctx, pdcrt_obtener_local(ctx, m, 165));
pdcrt_empujar(ctx, pdcrt_obtener_local(ctx, m, 166));
pdcrt_empujar(ctx, pdcrt_obtener_local(ctx, m, 167));
pdcrt_empujar(ctx, pdcrt_obtener_local(ctx, m, 168));
pdcrt_empujar(ctx, pdcrt_obtener_local(ctx, m, 169));
pdcrt_empujar(ctx, pdcrt_obtener_local(ctx, m, 170));
pdcrt_empujar(ctx, pdcrt_obtener_local(ctx, m, 171));
pdcrt_empujar(ctx, pdcrt_obtener_local(ctx, m, 172));
pdcrt_empujar(ctx, pdcrt_obtener_local(ctx, m, 173));
pdcrt_empujar(ctx, pdcrt_obtener_local(ctx, m, 174));
pdcrt_empujar(ctx, pdcrt_obtener_local(ctx, m, 175));
pdcrt_empujar(ctx, pdcrt_obtener_local(ctx, m, 176));
pdcrt_empujar(ctx, pdcrt_obtener_local(ctx, m, 177));
pdcrt_empujar(ctx, pdcrt_obtener_local(ctx, m, 178));
pdcrt_empujar(ctx, pdcrt_obtener_local(ctx, m, 179));
pdcrt_empujar(ctx, pdcrt_obtener_local(ctx, m, 180));
pdcrt_empujar(ctx, pdcrt_obtener_local(ctx, m, 181));
pdcrt_empujar(ctx, pdcrt_obtener_local(ctx, m, 182));
pdcrt_empujar(ctx, pdcrt_obtener_local(ctx, m, 183));
pdcrt_empujar(ctx, pdcrt_obtener_local(ctx, m, 184));
pdcrt_empujar(ctx, pdcrt_obtener_local(ctx, m, 185));
pdcrt_empujar(ctx, pdcrt_obtener_local(ctx, m, 186));
pdcrt_empujar(ctx, pdcrt_obtener_local(ctx, m, 187));
pdcrt_empujar(ctx, pdcrt_obtener_local(ctx, m, 188));
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 113);
return pdcrt_llamarnr(ctx, m, pdc_mpdzipdc_N95_tokens_k118, 69, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 119)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 120)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 121)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 122)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 123)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 124)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 125)));
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k118(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k118);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 226:12 >> 226:13 */
pdcrt_fijar_local(ctx, m, 118, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 226:12 >> 226:13 */
pdcrt_fijar_local_nb(ctx, m, 188, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 226:12 >> 226:13 */
pdcrt_fijar_local_nb(ctx, m, 187, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 226:12 >> 226:13 */
pdcrt_fijar_local_nb(ctx, m, 186, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 226:12 >> 226:13 */
pdcrt_fijar_local_nb(ctx, m, 185, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 226:12 >> 226:13 */
pdcrt_fijar_local_nb(ctx, m, 184, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 226:12 >> 226:13 */
pdcrt_fijar_local_nb(ctx, m, 183, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 226:12 >> 226:13 */
pdcrt_fijar_local_nb(ctx, m, 182, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 226:12 >> 226:13 */
pdcrt_fijar_local_nb(ctx, m, 181, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 226:12 >> 226:13 */
pdcrt_fijar_local_nb(ctx, m, 180, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 226:12 >> 226:13 */
pdcrt_fijar_local_nb(ctx, m, 179, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 226:12 >> 226:13 */
pdcrt_fijar_local_nb(ctx, m, 178, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 226:12 >> 226:13 */
pdcrt_fijar_local_nb(ctx, m, 177, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 226:12 >> 226:13 */
pdcrt_fijar_local_nb(ctx, m, 176, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 226:12 >> 226:13 */
pdcrt_fijar_local_nb(ctx, m, 175, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 226:12 >> 226:13 */
pdcrt_fijar_local_nb(ctx, m, 174, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 226:12 >> 226:13 */
pdcrt_fijar_local_nb(ctx, m, 173, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 226:12 >> 226:13 */
pdcrt_fijar_local_nb(ctx, m, 172, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 226:12 >> 226:13 */
pdcrt_fijar_local_nb(ctx, m, 171, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 226:12 >> 226:13 */
pdcrt_fijar_local_nb(ctx, m, 170, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 226:12 >> 226:13 */
pdcrt_fijar_local_nb(ctx, m, 169, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 226:12 >> 226:13 */
pdcrt_fijar_local_nb(ctx, m, 168, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 226:12 >> 226:13 */
pdcrt_fijar_local_nb(ctx, m, 167, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 226:12 >> 226:13 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 226:12 >> 226:13 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 226:12 >> 226:13 */
pdcrt_fijar_local_nb(ctx, m, 164, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 226:12 >> 226:13 */
pdcrt_fijar_local_nb(ctx, m, 163, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 226:12 >> 226:13 */
pdcrt_fijar_local_nb(ctx, m, 162, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 226:12 >> 226:13 */
pdcrt_fijar_local_nb(ctx, m, 161, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 226:12 >> 226:13 */
pdcrt_fijar_local_nb(ctx, m, 160, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 226:12 >> 226:13 */
pdcrt_fijar_local_nb(ctx, m, 159, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 226:12 >> 226:13 */
pdcrt_fijar_local_nb(ctx, m, 158, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 226:12 >> 226:13 */
pdcrt_fijar_local_nb(ctx, m, 157, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 226:12 >> 226:13 */
pdcrt_fijar_local_nb(ctx, m, 156, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 226:12 >> 226:13 */
pdcrt_fijar_local_nb(ctx, m, 155, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 226:12 >> 226:13 */
pdcrt_fijar_local_nb(ctx, m, 154, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 226:12 >> 226:13 */
pdcrt_fijar_local_nb(ctx, m, 153, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 226:12 >> 226:13 */
pdcrt_fijar_local_nb(ctx, m, 152, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 226:12 >> 226:13 */
pdcrt_fijar_local_nb(ctx, m, 151, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 226:12 >> 226:13 */
pdcrt_fijar_local_nb(ctx, m, 150, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 226:12 >> 226:13 */
pdcrt_fijar_local_nb(ctx, m, 149, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 226:12 >> 226:13 */
pdcrt_fijar_local_nb(ctx, m, 148, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 226:12 >> 226:13 */
pdcrt_fijar_local_nb(ctx, m, 147, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 226:12 >> 226:13 */
pdcrt_fijar_local_nb(ctx, m, 146, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 226:12 >> 226:13 */
pdcrt_fijar_local_nb(ctx, m, 145, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 226:12 >> 226:13 */
pdcrt_fijar_local_nb(ctx, m, 144, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 226:12 >> 226:13 */
pdcrt_fijar_local_nb(ctx, m, 143, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 226:12 >> 226:13 */
pdcrt_fijar_local_nb(ctx, m, 142, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 226:12 >> 226:13 */
pdcrt_fijar_local_nb(ctx, m, 141, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 226:12 >> 226:13 */
pdcrt_fijar_local_nb(ctx, m, 140, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 226:12 >> 226:13 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 226:12 >> 226:13 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 226:12 >> 226:13 */
pdcrt_fijar_local_nb(ctx, m, 137, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 226:12 >> 226:13 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 226:12 >> 226:13 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 226:12 >> 226:13 */
pdcrt_fijar_local_nb(ctx, m, 134, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 226:12 >> 226:13 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 226:12 >> 226:13 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 226:12 >> 226:13 */
pdcrt_fijar_local_nb(ctx, m, 131, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 226:12 >> 226:13 */
pdcrt_fijar_local_nb(ctx, m, 130, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 226:12 >> 226:13 */
pdcrt_fijar_local_nb(ctx, m, 129, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 226:12 >> 226:13 */
pdcrt_fijar_local_nb(ctx, m, 128, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 226:12 >> 226:13 */
pdcrt_fijar_local_nb(ctx, m, 127, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 226:12 >> 226:13 */
pdcrt_fijar_local_nb(ctx, m, 126, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 226:12 >> 226:13 */
pdcrt_fijar_local_nb(ctx, m, 125, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 226:12 >> 226:13 */
pdcrt_fijar_local_nb(ctx, m, 124, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 226:12 >> 226:13 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 226:12 >> 226:13 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 226:12 >> 226:13 */
pdcrt_fijar_local_nb(ctx, m, 121, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 226:12 >> 226:13 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 226:12 >> 226:13 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 225:6 >> 225:20 */
pdcrt_fijar_local_nb(ctx, m, 116, pdcrt_obtener_local(ctx, m, 118));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 225:6 >> 225:20 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 248:4 >> 248:15 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_obtener_local(ctx, m, 84));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 249:9 >> 249:15 */
pdcrt_fijar_local(ctx, m, 121, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 104)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 250:12 >> 250:26 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_obtener_local(ctx, m, 116));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 251:12 >> 251:19 */
do {
static const pdcrt_captura caps[] = {};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzipdc_N95_tokens_f16, caps, 0);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 123, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 249:9 >> 249:16 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 20);
return pdcrt_llamar2(ctx, m, pdc_mpdzipdc_N95_tokens_k121, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 121)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 122)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 123)));
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k119(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k119);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 252:25 >> 252:32 */
pdcrt_fijar_local(ctx, m, 2, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 252:25 >> 252:32 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 252:43 >> 252:50 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_obtener_local(ctx, m, 0));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 252:52 >> 252:61 */
pdcrt_fijar_local(ctx, m, 5, ctx->espacio_de_nombres_runtime);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 252:52 >> 252:61 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 114);
return pdcrt_llamar0(ctx, m, pdc_mpdzipdc_N95_tokens_k120, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k120(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k120);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 252:52 >> 252:61 */
pdcrt_fijar_local(ctx, m, 4, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 252:52 >> 252:61 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 252:32 >> 252:33 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 113);
return pdcrt_llamar2(ctx, m->k.marco, m->k.kf, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 2)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 3)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 252:32 >> 252:33 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 252:32 >> 252:33 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 252:32 >> 252:33 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 251:12 >> 251:19 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 251:12 >> 251:19 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 2)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 251:12 >> 251:19 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k121(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k121);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 249:9 >> 249:16 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 249:9 >> 249:16 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 249:9 >> 249:16 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 249:9 >> 249:16 */
pdcrt_fijar_local_nb(ctx, m, 121, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 248:15 >> 248:16 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 115);
return pdcrt_llamar1(ctx, m, pdc_mpdzipdc_N95_tokens_k122, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 119)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 120)));
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k122(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k122);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 248:15 >> 248:16 */
pdcrt_fijar_local(ctx, m, 118, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 248:15 >> 248:16 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 248:15 >> 248:16 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 247:6 >> 247:37 */
pdcrt_fijar_local_nb(ctx, m, 117, pdcrt_obtener_local(ctx, m, 118));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 247:6 >> 247:37 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cons = pdcrt_crear_espacio_de_nombres_cons(ctx, PDCRT_GC());
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 118, cons);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_obtener_local(ctx, m, 110));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 118), pdcrt_obtener_local(ctx, m, 119), "ParaCadaNúmero", 15, true, pdc_mpdzipdc_N95_tokens_k123);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k123(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k123);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_obtener_local(ctx, m, 56));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 118), pdcrt_obtener_local(ctx, m, 119), "ParaCadaElemento", 16, true, pdc_mpdzipdc_N95_tokens_k124);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k124(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k124);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 109)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 118), pdcrt_obtener_local(ctx, m, 119), "ParaCadaElementoConÍndice", 26, true, pdc_mpdzipdc_N95_tokens_k125);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k125(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k125);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_obtener_local(ctx, m, 57));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 118), pdcrt_obtener_local(ctx, m, 119), "Todos", 5, true, pdc_mpdzipdc_N95_tokens_k126);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k126(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k126);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 108)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 118), pdcrt_obtener_local(ctx, m, 119), "EsSubclase", 10, true, pdc_mpdzipdc_N95_tokens_k127);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k127(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k127);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 58)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 118), pdcrt_obtener_local(ctx, m, 119), "Contiene", 8, true, pdc_mpdzipdc_N95_tokens_k128);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k128(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k128);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 107)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 118), pdcrt_obtener_local(ctx, m, 119), "EsInstancia", 11, true, pdc_mpdzipdc_N95_tokens_k129);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k129(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k129);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 59)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 118), pdcrt_obtener_local(ctx, m, 119), "EsImpar", 7, true, pdc_mpdzipdc_N95_tokens_k130);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k130(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k130);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 106)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 118), pdcrt_obtener_local(ctx, m, 119), "ParaCadaNúmeroConPaso", 22, true, pdc_mpdzipdc_N95_tokens_k131);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k131(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k131);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 60)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 118), pdcrt_obtener_local(ctx, m, 119), "Escribir", 8, true, pdc_mpdzipdc_N95_tokens_k132);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k132(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k132);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 105)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 118), pdcrt_obtener_local(ctx, m, 119), "Identidad", 9, true, pdc_mpdzipdc_N95_tokens_k133);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k133(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k133);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 61)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 118), pdcrt_obtener_local(ctx, m, 119), "Reducir", 7, true, pdc_mpdzipdc_N95_tokens_k134);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k134(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k134);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 104)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 118), pdcrt_obtener_local(ctx, m, 119), "Mapear", 6, true, pdc_mpdzipdc_N95_tokens_k135);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k135(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k135);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 62)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 118), pdcrt_obtener_local(ctx, m, 119), "Filtrar", 7, true, pdc_mpdzipdc_N95_tokens_k136);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k136(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k136);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 103)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 118), pdcrt_obtener_local(ctx, m, 119), "Algún", 6, true, pdc_mpdzipdc_N95_tokens_k137);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k137(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k137);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 63)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 118), pdcrt_obtener_local(ctx, m, 119), "DígitoAEntero", 14, true, pdc_mpdzipdc_N95_tokens_k138);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k138(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k138);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 102)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 118), pdcrt_obtener_local(ctx, m, 119), "Elevar", 6, true, pdc_mpdzipdc_N95_tokens_k139);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k139(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k139);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 64)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 118), pdcrt_obtener_local(ctx, m, 119), "ConvertirAEntero", 16, true, pdc_mpdzipdc_N95_tokens_k140);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k140(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k140);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 101)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 118), pdcrt_obtener_local(ctx, m, 119), "ConvertirANúmero", 17, true, pdc_mpdzipdc_N95_tokens_k141);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k141(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k141);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 65)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 118), pdcrt_obtener_local(ctx, m, 119), "EsNúmeroEntero", 15, true, pdc_mpdzipdc_N95_tokens_k142);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k142(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k142);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 100)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 118), pdcrt_obtener_local(ctx, m, 119), "EsNúmero", 9, true, pdc_mpdzipdc_N95_tokens_k143);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k143(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k143);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 66)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 118), pdcrt_obtener_local(ctx, m, 119), "Concatenar", 10, true, pdc_mpdzipdc_N95_tokens_k144);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k144(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k144);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 99)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 118), pdcrt_obtener_local(ctx, m, 119), "ArregloConFinal", 15, true, pdc_mpdzipdc_N95_tokens_k145);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k145(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k145);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 67)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 118), pdcrt_obtener_local(ctx, m, 119), "Aplicar\'", 8, true, pdc_mpdzipdc_N95_tokens_k146);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k146(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k146);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 98)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 118), pdcrt_obtener_local(ctx, m, 119), "Aplicar\'i", 9, true, pdc_mpdzipdc_N95_tokens_k147);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k147(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k147);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 68)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 118), pdcrt_obtener_local(ctx, m, 119), "EnviarMensaje", 13, true, pdc_mpdzipdc_N95_tokens_k148);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k148(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k148);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 97)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 118), pdcrt_obtener_local(ctx, m, 119), "Resto", 5, true, pdc_mpdzipdc_N95_tokens_k149);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k149(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k149);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 69)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 118), pdcrt_obtener_local(ctx, m, 119), "Abs", 3, true, pdc_mpdzipdc_N95_tokens_k150);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k150(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k150);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 96)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 118), pdcrt_obtener_local(ctx, m, 119), "Mod", 3, true, pdc_mpdzipdc_N95_tokens_k151);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k151(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k151);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 70)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 118), pdcrt_obtener_local(ctx, m, 119), "EsPar", 5, true, pdc_mpdzipdc_N95_tokens_k152);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k152(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k152);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 95)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 118), pdcrt_obtener_local(ctx, m, 119), "Aplanar", 7, true, pdc_mpdzipdc_N95_tokens_k153);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k153(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k153);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 71)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 118), pdcrt_obtener_local(ctx, m, 119), "AplanarTodo", 11, true, pdc_mpdzipdc_N95_tokens_k154);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k154(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k154);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 94)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 118), pdcrt_obtener_local(ctx, m, 119), "PedazoDeArreglo", 15, true, pdc_mpdzipdc_N95_tokens_k155);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k155(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k155);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 72)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 118), pdcrt_obtener_local(ctx, m, 119), "PrimerElemento", 14, true, pdc_mpdzipdc_N95_tokens_k156);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k156(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k156);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 93)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 118), pdcrt_obtener_local(ctx, m, 119), "ÚltimoElemento", 15, true, pdc_mpdzipdc_N95_tokens_k157);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k157(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k157);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 73)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 118), pdcrt_obtener_local(ctx, m, 119), "ÚnicoElemento", 14, true, pdc_mpdzipdc_N95_tokens_k158);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k158(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k158);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 92)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 118), pdcrt_obtener_local(ctx, m, 119), "EsNulo", 6, true, pdc_mpdzipdc_N95_tokens_k159);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k159(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k159);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 74)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 118), pdcrt_obtener_local(ctx, m, 119), "Max", 3, true, pdc_mpdzipdc_N95_tokens_k160);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k160(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k160);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 91)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 118), pdcrt_obtener_local(ctx, m, 119), "Min", 3, true, pdc_mpdzipdc_N95_tokens_k161);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k161(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k161);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 75)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 118), pdcrt_obtener_local(ctx, m, 119), "NoImplementado", 14, true, pdc_mpdzipdc_N95_tokens_k162);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k162(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k162);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 90)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 118), pdcrt_obtener_local(ctx, m, 119), "MétodoAbstracto", 16, true, pdc_mpdzipdc_N95_tokens_k163);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k163(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k163);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 76)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 118), pdcrt_obtener_local(ctx, m, 119), "Inalcanzable", 12, true, pdc_mpdzipdc_N95_tokens_k164);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k164(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k164);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 89)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 118), pdcrt_obtener_local(ctx, m, 119), "LlamarConEC", 11, true, pdc_mpdzipdc_N95_tokens_k165);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k165(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k165);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 77)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 118), pdcrt_obtener_local(ctx, m, 119), "ArregloSinElementoEnÍndice", 27, true, pdc_mpdzipdc_N95_tokens_k166);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k166(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k166);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 88)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 118), pdcrt_obtener_local(ctx, m, 119), "LeerLínea", 10, true, pdc_mpdzipdc_N95_tokens_k167);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k167(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k167);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 78)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 118), pdcrt_obtener_local(ctx, m, 119), "LeerNúmero", 11, true, pdc_mpdzipdc_N95_tokens_k168);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k168(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k168);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 87)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 118), pdcrt_obtener_local(ctx, m, 119), "Parcial", 7, true, pdc_mpdzipdc_N95_tokens_k169);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k169(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k169);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 79)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 118), pdcrt_obtener_local(ctx, m, 119), "MétodoComoFunción", 19, true, pdc_mpdzipdc_N95_tokens_k170);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k170(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k170);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 86)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 118), pdcrt_obtener_local(ctx, m, 119), "OperadorBinario", 15, true, pdc_mpdzipdc_N95_tokens_k171);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k171(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k171);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 80)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 118), pdcrt_obtener_local(ctx, m, 119), "ContienePredicado", 17, true, pdc_mpdzipdc_N95_tokens_k172);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k172(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k172);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 85)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 118), pdcrt_obtener_local(ctx, m, 119), "BuscarPredicado", 15, true, pdc_mpdzipdc_N95_tokens_k173);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k173(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k173);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 81)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 118), pdcrt_obtener_local(ctx, m, 119), "ParaCadaElementoEnReversa", 25, true, pdc_mpdzipdc_N95_tokens_k174);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k174(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k174);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_obtener_local(ctx, m, 84));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 118), pdcrt_obtener_local(ctx, m, 119), "Diccionario", 11, false, pdc_mpdzipdc_N95_tokens_k175);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k175(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k175);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 82)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 118), pdcrt_obtener_local(ctx, m, 119), "Resultado", 9, false, pdc_mpdzipdc_N95_tokens_k176);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k176(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k176);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 83)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 118), pdcrt_obtener_local(ctx, m, 119), "Pila", 4, false, pdc_mpdzipdc_N95_tokens_k177);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k177(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k177);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 2:22 >> 2:26 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_obtener_local(ctx, m, 111));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 118), pdcrt_obtener_local(ctx, m, 119), "Enum", 4, true, pdc_mpdzipdc_N95_tokens_k178);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k178(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k178);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 3:37 >> 3:53 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 112)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 118), pdcrt_obtener_local(ctx, m, 119), "PosiciónTextual", 16, false, pdc_mpdzipdc_N95_tokens_k179);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k179(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k179);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 11:6 >> 11:18 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_obtener_local(ctx, m, 113));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 118), pdcrt_obtener_local(ctx, m, 119), "ÁreaTextual", 12, false, pdc_mpdzipdc_N95_tokens_k180);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k180(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k180);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 54:9 >> 54:20 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 114)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 118), pdcrt_obtener_local(ctx, m, 119), "TipoDeToken", 11, false, pdc_mpdzipdc_N95_tokens_k181);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k181(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k181);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 69:6 >> 69:11 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 115)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 118), pdcrt_obtener_local(ctx, m, 119), "Token", 5, false, pdc_mpdzipdc_N95_tokens_k182);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k182(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k182);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 224:9 >> 224:23 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_obtener_local(ctx, m, 116));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 118), pdcrt_obtener_local(ctx, m, 119), "PALABRAS_CLAVE", 14, false, pdc_mpdzipdc_N95_tokens_k183);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k183(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k183);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 246:9 >> 246:40 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_obtener_local(ctx, m, 117));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 118), pdcrt_obtener_local(ctx, m, 119), "PALABRAS_CLAVE_COMO_DICCIONARIO", 31, false, pdc_mpdzipdc_N95_tokens_k184);
}
static pdcrt_tk pdc_mpdzipdc_N95_tokens_k184(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_tokens_k184);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
return pdcrt_exportar(ctx, m, pdcrt_obtener_local(ctx, m, 118), "pdzipdc_N95_tokens", 18);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/tokens.pd" => 1:0 >> 248:16 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
}
PDCRT_DECLARAR_ENTRYPOINT(pdzipdc_N95_tokens, pdc_mpdzipdc_N95_tokens_f17)
#ifdef PDCRT_MAIN
#define PDCRT_DEPS(X) \
    X(pdzipdc_N95_tokens, "pdzipdc_N95_tokens", 18) \
    X(pdzibepd_N95_builtins, "pdzibepd_N95_builtins", 21) \
    X(pdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n, "pdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n", 50) \
    X(pdzibepd_N95_builtinsImpl, "pdzibepd_N95_builtinsImpl", 25) \
    X(pdzibepd_N95_datos_N95_pila, "pdzibepd_N95_datos_N95_pila", 27) \
    X(pdzibepd_N95_datos_N95_diccionario, "pdzibepd_N95_datos_N95_diccionario", 34) \
    X(pdzibepd_N95_datos_N95_diccionario_N95_hashmap, "pdzibepd_N95_datos_N95_diccionario_N95_hashmap", 46) \
    X(pdzibepd_N95_datos_N95_diccionario_N95_interfaz, "pdzibepd_N95_datos_N95_diccionario_N95_interfaz", 47) \
    X(pdzibepd_N95_datos_N95_diccionario_N95_alist, "pdzibepd_N95_datos_N95_diccionario_N95_alist", 44) \
    X(pdzibepd_N95_datos_N95_resultado, "pdzibepd_N95_datos_N95_resultado", 32) \
    X(pdzibepd_N95_x_N95_enum, "pdzibepd_N95_x_N95_enum", 23) \
    X(pdzibepd_N95_x_N95_puerto, "pdzibepd_N95_x_N95_puerto", 25) \
    X(pdzibepd_N95_utilidades_N95_texto, "pdzibepd_N95_utilidades_N95_texto", 33)
PDCRT_DECLARAR_DEPS(PDCRT_DEPS)
PDCRT_DECLARAR_MAIN(pdzipdc_N95_tokens)
#endif
