#define PDCRT_INTERNO
#include "pdcrt/pdcrt.h"
#include "pdcrt/pdcrt_ops.h"
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_f0(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_f1(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_f2(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_f3(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_f4(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_f5(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k0(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k1(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k2(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k3(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k4(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k5(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k6(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k7(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k8(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k9(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k10(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k11(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k12(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k13(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k14(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k15(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k16(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k17(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k18(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k19(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k20(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k21(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k22(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k23(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k24(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k25(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k26(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k27(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k28(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k29(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k30(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k31(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k32(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k33(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k34(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k35(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k36(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k37(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k38(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k39(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k40(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k41(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k42(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k43(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k44(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k45(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k46(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k47(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k48(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k49(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k50(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k51(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k52(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k53(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k54(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k55(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k56(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k57(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k58(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k59(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k60(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k61(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k62(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k63(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k64(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k65(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k66(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k67(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k68(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k69(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k70(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k71(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k72(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k73(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k74(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k75(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k76(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k77(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k78(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k79(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k80(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k81(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k82(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k83(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k84(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k85(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k86(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k87(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k88(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k89(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k90(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k91(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k92(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k93(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k94(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k95(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k96(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k97(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k98(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k99(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k100(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k101(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k102(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k103(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k104(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k105(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k106(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k107(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k108(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k109(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k110(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k111(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k112(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k113(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k114(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k115(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k116(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k117(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k118(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k119(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k120(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k121(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k122(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k123(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k124(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k125(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k126(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k127(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k128(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k129(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k130(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k131(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k132(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k133(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k134(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k135(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k136(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k137(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k138(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k139(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k140(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k141(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k142(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k143(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k144(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k145(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k146(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k147(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k148(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k149(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k150(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k151(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k152(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k153(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k154(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k155(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k156(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k157(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k158(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k159(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k160(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k161(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k162(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k163(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k164(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k165(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k166(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k167(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k168(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k169(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k170(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k171(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k172(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k173(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k174(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k175(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k176(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k177(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k178(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k179(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k180(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k181(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k182(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k183(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k184(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k185(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k186(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k187(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k188(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_f0(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 50:0 >> 57:10 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd|50:0|57:10";
PDCRT_ALOJAR_MARCO(ctx, 8, args, k, func_srcloc);
struct pdc_params_data_mpdzipdc_N95_dependencias_p0 { const pdcrt_params_base base; const pdcrt_param_data params[1]; };
static const struct pdc_params_data_mpdzipdc_N95_dependencias_p0 pdc_params = { .base = { .num_params = 1, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{3}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 50:27 >> 50:31 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 50:27 >> 50:31 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_obtener_local(ctx, m, 3));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 50:27 >> 50:31 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 51:13 >> 51:14 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 52:14 >> 52:18 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_obtener_local(ctx, m, 1));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 52:27 >> 52:28 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_entero(PDCRT_ENTERO_C(0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 52:30 >> 52:33 */
pdcrt_fijar_local(ctx, m, 6, PDCRT_OBTENER_CONSTANTE(ctx, m, 8));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 52:18 >> 52:19 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 9);
return pdcrt_llamar2(ctx, m, pdc_mpdzipdc_N95_dependencias_k76, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)));
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_f1(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 65:0 >> 72:10 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd|65:0|72:10";
PDCRT_ALOJAR_MARCO(ctx, 8, args, k, func_srcloc);
struct pdc_params_data_mpdzipdc_N95_dependencias_p1 { const pdcrt_params_base base; const pdcrt_param_data params[1]; };
static const struct pdc_params_data_mpdzipdc_N95_dependencias_p1 pdc_params = { .base = { .num_params = 1, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{3}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 65:27 >> 65:31 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 65:27 >> 65:31 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_obtener_local(ctx, m, 3));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 65:27 >> 65:31 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 66:13 >> 66:14 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 67:14 >> 67:18 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_obtener_local(ctx, m, 1));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 67:27 >> 67:28 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_entero(PDCRT_ENTERO_C(0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 67:30 >> 67:33 */
pdcrt_fijar_local(ctx, m, 6, PDCRT_OBTENER_CONSTANTE(ctx, m, 8));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 67:18 >> 67:19 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 9);
return pdcrt_llamar2(ctx, m, pdc_mpdzipdc_N95_dependencias_k84, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)));
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_f2(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 86:23 >> 86:30 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd|86:23|86:30";
PDCRT_ALOJAR_MARCO(ctx, 8, args, k, func_srcloc);
struct pdc_params_data_mpdzipdc_N95_dependencias_p2 { const pdcrt_params_base base; const pdcrt_param_data params[1]; };
static const struct pdc_params_data_mpdzipdc_N95_dependencias_p2 pdc_params = { .base = { .num_params = 1, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{3}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 86:32 >> 86:36 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 86:32 >> 86:36 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_obtener_local(ctx, m, 3));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 86:32 >> 86:36 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 87:17 >> 87:28 */
pdcrt_fijar_local(ctx, m, 4, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 1)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 87:30 >> 87:34 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_obtener_local(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 87:36 >> 87:39 */
pdcrt_fijar_local(ctx, m, 7, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 87:39 >> 87:40 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 18);
return pdcrt_llamar0(ctx, m, pdc_mpdzipdc_N95_dependencias_k96, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_f3(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 88:16 >> 88:29 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd|88:16|88:29";
PDCRT_ALOJAR_MARCO(ctx, 23, args, k, func_srcloc);
struct pdc_params_data_mpdzipdc_N95_dependencias_p3 { const pdcrt_params_base base; const pdcrt_param_data params[1]; };
static const struct pdc_params_data_mpdzipdc_N95_dependencias_p3 pdc_params = { .base = { .num_params = 1, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{16}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 88:31 >> 88:35 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 88:31 >> 88:35 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_obtener_local(ctx, m, 16));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 88:31 >> 88:35 */
pdcrt_fijar_local_nb(ctx, m, 16, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 89:18 >> 89:29 */
pdcrt_fijar_local_nb(ctx, m, 12, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 89:31 >> 89:38 */
pdcrt_fijar_local_nb(ctx, m, 13, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 89:40 >> 89:43 */
pdcrt_fijar_local_nb(ctx, m, 14, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 90:28 >> 90:32 */
pdcrt_fijar_local_nb(ctx, m, 17, pdcrt_obtener_local(ctx, m, 11));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 90:32 >> 90:33 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 2);
return pdcrt_llamar0(ctx, m, pdc_mpdzipdc_N95_dependencias_k97, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 17)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_f4(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 83:0 >> 104:16 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd|83:0|104:16";
PDCRT_ALOJAR_MARCO(ctx, 19, args, k, func_srcloc);
struct pdc_params_data_mpdzipdc_N95_dependencias_p4 { const pdcrt_params_base base; const pdcrt_param_data params[4]; };
static const struct pdc_params_data_mpdzipdc_N95_dependencias_p4 pdc_params = { .base = { .num_params = 4, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{14}, {15}, {16}, {17}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 83:63 >> 83:79 */
pdcrt_fijar_local_nb(ctx, m, 18, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 83:63 >> 83:79 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 18));
pdcrt_fijar_local(ctx, m, 12, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 83:63 >> 83:79 */
pdcrt_fijar_local_nb(ctx, m, 18, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 83:63 >> 83:79 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 12), pdcrt_obtener_local(ctx, m, 17));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 83:63 >> 83:79 */
pdcrt_fijar_local_nb(ctx, m, 17, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 83:54 >> 83:61 */
pdcrt_fijar_local_nb(ctx, m, 17, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 83:54 >> 83:61 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 17));
pdcrt_fijar_local(ctx, m, 11, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 83:54 >> 83:61 */
pdcrt_fijar_local_nb(ctx, m, 17, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 83:54 >> 83:61 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 11), pdcrt_obtener_local(ctx, m, 16));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 83:54 >> 83:61 */
pdcrt_fijar_local_nb(ctx, m, 16, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 83:44 >> 83:52 */
pdcrt_fijar_local_nb(ctx, m, 16, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 83:44 >> 83:52 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 16));
pdcrt_fijar_local(ctx, m, 10, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 83:44 >> 83:52 */
pdcrt_fijar_local_nb(ctx, m, 16, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 83:44 >> 83:52 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 10), pdcrt_obtener_local(ctx, m, 15));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 83:44 >> 83:52 */
pdcrt_fijar_local_nb(ctx, m, 15, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 83:35 >> 83:42 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 83:35 >> 83:42 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_obtener_local(ctx, m, 14));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 83:35 >> 83:42 */
pdcrt_fijar_local_nb(ctx, m, 14, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 84:13 >> 84:25 */
pdcrt_fijar_local_nb(ctx, m, 14, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 84:13 >> 84:25 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 14));
pdcrt_fijar_local(ctx, m, 13, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 84:13 >> 84:25 */
pdcrt_fijar_local_nb(ctx, m, 14, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 85:25 >> 85:32 */
pdcrt_fijar_local(ctx, m, 16, ctx->espacio_de_nombres_runtime);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 85:25 >> 85:32 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 16);
return pdcrt_llamar0(ctx, m, pdc_mpdzipdc_N95_dependencias_k94, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 16)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_f5(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd|1:0|104:16";
PDCRT_ALOJAR_MARCO(ctx, 144, args, k, func_srcloc);
struct pdc_params_data_mpdzipdc_N95_dependencias_p5 { const pdcrt_params_base base; const pdcrt_param_data params[1]; };
static const struct pdc_params_data_mpdzipdc_N95_dependencias_p5 pdc_params = { .base = { .num_params = 0, .tiene_variadic = false, .idc_variadic = 0, }, .params = {} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
PDCRT_DEFINE_RAICES(2);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_arreglo *constantes = pdcrt_crear_arreglo_vacio(ctx, PDCRT_GC(), 26LLU);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "ReferenciaAMódulo", 18));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "paquete", 7));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "módulo", 7));
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
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "InformaciónDeMódulo", 21));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "idNodo", 6));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "ÚNICO", 6));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "ORDENADO", 8));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "/", 1));
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
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "No se pudo separar los componentes de ~t", 40));
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
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "NodoUtilizar", 12));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "NodoIdentificador", 17));
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
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "id", 2));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "agregar", 7));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
PDCRT_FIJAR_CONSTANTES(ctx, m, constantes);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 62, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 64, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 66, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 68, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 70, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 72, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 74, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 76, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 78, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 80, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 82, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 84, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 86, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 88, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 90, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 92, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 94, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 96, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 98, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 100, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 102, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 104, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 106, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 108, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 110, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 112, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 114, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 115, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 113, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 111, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 109, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 107, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 105, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 103, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 101, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 99, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 97, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 95, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 93, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 91, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 89, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 87, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 85, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 83, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 81, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 79, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 77, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 75, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 73, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 71, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 69, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 67, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 65, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 63, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 61, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 2:0 >> 2:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 116, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 3:0 >> 3:8 */
pdcrt_fijar_local_nb(ctx, m, 117, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 5:22 >> 5:25 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 5:22 >> 5:25 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 118, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 5:22 >> 5:25 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 6:22 >> 6:25 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 6:22 >> 6:25 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 119, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 6:22 >> 6:25 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 7:0 >> 7:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 7:0 >> 7:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 121, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 7:0 >> 7:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 7:0 >> 7:8 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 7:0 >> 7:8 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 7:0 >> 7:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 7:0 >> 7:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 124, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 7:0 >> 7:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 7:0 >> 7:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 7:0 >> 7:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 125, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 7:0 >> 7:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 7:0 >> 7:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 7:0 >> 7:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 123, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 7:0 >> 7:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 8:0 >> 8:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 8:0 >> 8:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 126, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 8:0 >> 8:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 18:9 >> 18:27 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 18:9 >> 18:27 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 127, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 18:9 >> 18:27 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 36:9 >> 36:30 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 36:9 >> 36:30 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 128, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 36:9 >> 36:30 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 50:8 >> 50:25 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 50:8 >> 50:25 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 129, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 50:8 >> 50:25 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 65:8 >> 65:25 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 65:8 >> 65:25 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 130, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 65:8 >> 65:25 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 83:14 >> 83:33 */
pdcrt_fijar_local_nb(ctx, m, 131, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
return pdcrt_importar(ctx, m, "pdzibepd_N95_builtins", 21, pdc_mpdzipdc_N95_dependencias_k0);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k0(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 132, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "ParaCadaElemento", 16, pdc_mpdzipdc_N95_dependencias_k1);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k1(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 61, pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "Todos", 5, pdc_mpdzipdc_N95_dependencias_k2);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k2(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k2);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 62), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "Contiene", 8, pdc_mpdzipdc_N95_dependencias_k3);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k3(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k3);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 63), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "EsImpar", 7, pdc_mpdzipdc_N95_dependencias_k4);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k4(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k4);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 64), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "Escribir", 8, pdc_mpdzipdc_N95_dependencias_k5);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k5(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k5);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 65), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "Reducir", 7, pdc_mpdzipdc_N95_dependencias_k6);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k6(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k6);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 66), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "Filtrar", 7, pdc_mpdzipdc_N95_dependencias_k7);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k7(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k7);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 67), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "DígitoAEntero", 14, pdc_mpdzipdc_N95_dependencias_k8);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k8(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k8);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 68), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "ConvertirAEntero", 16, pdc_mpdzipdc_N95_dependencias_k9);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k9(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k9);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 69), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "EsNúmeroEntero", 15, pdc_mpdzipdc_N95_dependencias_k10);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k10(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k10);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 70), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "Concatenar", 10, pdc_mpdzipdc_N95_dependencias_k11);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k11(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k11);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 71), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "Aplicar\'", 8, pdc_mpdzipdc_N95_dependencias_k12);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k12(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k12);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 72), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "EnviarMensaje", 13, pdc_mpdzipdc_N95_dependencias_k13);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k13(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k13);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 73), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "Abs", 3, pdc_mpdzipdc_N95_dependencias_k14);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k14(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k14);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 74), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "EsPar", 5, pdc_mpdzipdc_N95_dependencias_k15);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k15(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k15);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 75), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "AplanarTodo", 11, pdc_mpdzipdc_N95_dependencias_k16);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k16(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k16);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 76), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "PrimerElemento", 14, pdc_mpdzipdc_N95_dependencias_k17);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k17(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k17);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 77), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "ÚnicoElemento", 14, pdc_mpdzipdc_N95_dependencias_k18);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k18(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k18);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 78), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "Max", 3, pdc_mpdzipdc_N95_dependencias_k19);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k19(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k19);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 79), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "NoImplementado", 14, pdc_mpdzipdc_N95_dependencias_k20);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k20(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k20);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 80), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "Inalcanzable", 12, pdc_mpdzipdc_N95_dependencias_k21);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k21(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k21);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 81), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "ArregloSinElementoEnÍndice", 27, pdc_mpdzipdc_N95_dependencias_k22);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k22(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k22);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 82), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "LeerNúmero", 11, pdc_mpdzipdc_N95_dependencias_k23);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k23(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k23);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 83), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "MétodoComoFunción", 19, pdc_mpdzipdc_N95_dependencias_k24);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k24(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k24);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 84), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "ContienePredicado", 17, pdc_mpdzipdc_N95_dependencias_k25);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k25(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k25);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 85), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "ParaCadaElementoEnReversa", 25, pdc_mpdzipdc_N95_dependencias_k26);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k26(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k26);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 86), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "Resultado", 9, pdc_mpdzipdc_N95_dependencias_k27);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k27(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k27);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 87), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "Pila", 4, pdc_mpdzipdc_N95_dependencias_k28);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k28(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k28);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 88), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "Diccionario", 11, pdc_mpdzipdc_N95_dependencias_k29);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k29(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k29);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 89), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "BuscarPredicado", 15, pdc_mpdzipdc_N95_dependencias_k30);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k30(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k30);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 90), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "OperadorBinario", 15, pdc_mpdzipdc_N95_dependencias_k31);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k31(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k31);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 91), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "Parcial", 7, pdc_mpdzipdc_N95_dependencias_k32);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k32(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k32);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 92), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "LeerLínea", 10, pdc_mpdzipdc_N95_dependencias_k33);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k33(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k33);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 93), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "LlamarConEC", 11, pdc_mpdzipdc_N95_dependencias_k34);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k34(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k34);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 94), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "MétodoAbstracto", 16, pdc_mpdzipdc_N95_dependencias_k35);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k35(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k35);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 95), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "Min", 3, pdc_mpdzipdc_N95_dependencias_k36);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k36(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k36);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 96), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "EsNulo", 6, pdc_mpdzipdc_N95_dependencias_k37);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k37(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k37);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 97), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "ÚltimoElemento", 15, pdc_mpdzipdc_N95_dependencias_k38);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k38(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k38);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 98), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "PedazoDeArreglo", 15, pdc_mpdzipdc_N95_dependencias_k39);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k39(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k39);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 99), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "Aplanar", 7, pdc_mpdzipdc_N95_dependencias_k40);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k40(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k40);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 100), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "Mod", 3, pdc_mpdzipdc_N95_dependencias_k41);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k41(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k41);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 101), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "Resto", 5, pdc_mpdzipdc_N95_dependencias_k42);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k42(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k42);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 102), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "Aplicar\'i", 9, pdc_mpdzipdc_N95_dependencias_k43);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k43(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k43);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 103), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "ArregloConFinal", 15, pdc_mpdzipdc_N95_dependencias_k44);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k44(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k44);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 104), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "EsNúmero", 9, pdc_mpdzipdc_N95_dependencias_k45);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k45(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k45);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 105), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "ConvertirANúmero", 17, pdc_mpdzipdc_N95_dependencias_k46);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k46(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k46);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 106), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "Elevar", 6, pdc_mpdzipdc_N95_dependencias_k47);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k47(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k47);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 107), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "Algún", 6, pdc_mpdzipdc_N95_dependencias_k48);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k48(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k48);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "Mapear", 6, pdc_mpdzipdc_N95_dependencias_k49);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k49(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k49);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 109), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "Identidad", 9, pdc_mpdzipdc_N95_dependencias_k50);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k50(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k50);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 110), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "ParaCadaNúmeroConPaso", 22, pdc_mpdzipdc_N95_dependencias_k51);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k51(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k51);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 111), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "EsInstancia", 11, pdc_mpdzipdc_N95_dependencias_k52);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k52(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k52);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 112), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "EsSubclase", 10, pdc_mpdzipdc_N95_dependencias_k53);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k53(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k53);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 113), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "ParaCadaElementoConÍndice", 26, pdc_mpdzipdc_N95_dependencias_k54);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k54(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k54);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 114), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "ParaCadaNúmero", 15, pdc_mpdzipdc_N95_dependencias_k55);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k55(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k55);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 115), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 2:0 >> 2:8 */
return pdcrt_importar(ctx, m, "pdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas", 46, pdc_mpdzipdc_N95_dependencias_k56);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k56(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k56);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 132, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 2:41 >> 2:61 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "ResolverRutaRelativa", 20, pdc_mpdzipdc_N95_dependencias_k57);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k57(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k57);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 2:41 >> 2:61 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 2:41 >> 2:61 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 116), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 2:41 >> 2:61 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 3:0 >> 3:8 */
return pdcrt_importar(ctx, m, "pdzibepd_N95_x_N95_datos", 24, pdc_mpdzipdc_N95_dependencias_k58);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k58(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k58);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 3:0 >> 3:8 */
pdcrt_fijar_local(ctx, m, 132, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 3:23 >> 3:34 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "TipoDeDatos", 11, pdc_mpdzipdc_N95_dependencias_k59);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k59(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k59);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 3:23 >> 3:34 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 3:23 >> 3:34 */
pdcrt_fijar_local_nb(ctx, m, 117, pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 3:23 >> 3:34 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 3:0 >> 3:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 5:0 >> 5:8 */
return pdcrt_importar(ctx, m, "pdzipdc_N95_cst", 15, pdc_mpdzipdc_N95_dependencias_k60);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k60(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k60);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 5:0 >> 5:8 */
pdcrt_fijar_local(ctx, m, 132, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 5:0 >> 5:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_convertir_a_espacio_de_nombres(ctx, m, pdcrt_obtener_local(ctx, m, 132)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 5:22 >> 5:25 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 118), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 5:22 >> 5:25 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 5:0 >> 5:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 6:0 >> 6:8 */
return pdcrt_importar(ctx, m, "pdzipdc_N95_ast", 15, pdc_mpdzipdc_N95_dependencias_k61);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k61(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k61);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 6:0 >> 6:8 */
pdcrt_fijar_local(ctx, m, 132, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 6:0 >> 6:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_convertir_a_espacio_de_nombres(ctx, m, pdcrt_obtener_local(ctx, m, 132)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 6:22 >> 6:25 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 119), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 6:22 >> 6:25 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 6:0 >> 6:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 7:0 >> 7:8 */
return pdcrt_importar(ctx, m, "pdzipdc_N95_tabla", 17, pdc_mpdzipdc_N95_dependencias_k62);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k62(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k62);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 7:0 >> 7:8 */
pdcrt_fijar_local(ctx, m, 132, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 7:20 >> 7:39 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "CrearTipoDeRegistro", 19, pdc_mpdzipdc_N95_dependencias_k63);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k63(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k63);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 7:20 >> 7:39 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 7:20 >> 7:39 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 7:20 >> 7:39 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 7:41 >> 7:46 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "Tabla", 5, pdc_mpdzipdc_N95_dependencias_k64);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k64(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k64);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 7:41 >> 7:46 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 7:41 >> 7:46 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 121), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 7:41 >> 7:46 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 7:48 >> 7:55 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "Índice", 7, pdc_mpdzipdc_N95_dependencias_k65);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k65(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k65);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 7:48 >> 7:55 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 7:48 >> 7:55 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 7:48 >> 7:55 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 7:57 >> 7:69 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "NodoDeÁrbol", 12, pdc_mpdzipdc_N95_dependencias_k66);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k66(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k66);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 7:57 >> 7:69 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 7:57 >> 7:69 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 123), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 7:57 >> 7:69 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 7:71 >> 7:85 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "EntablarÁrbol", 14, pdc_mpdzipdc_N95_dependencias_k67);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k67(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k67);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 7:71 >> 7:85 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 7:71 >> 7:85 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 124), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 7:71 >> 7:85 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 7:87 >> 7:100 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "EscribirTabla", 13, pdc_mpdzipdc_N95_dependencias_k68);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k68(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k68);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 7:87 >> 7:100 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 7:87 >> 7:100 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 125), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 7:87 >> 7:100 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 7:0 >> 7:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 8:0 >> 8:8 */
return pdcrt_importar(ctx, m, "pdzipdc_N95_catamorfismos", 25, pdc_mpdzipdc_N95_dependencias_k69);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k69(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k69);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 8:0 >> 8:8 */
pdcrt_fijar_local(ctx, m, 132, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 8:28 >> 8:36 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "Buscando", 8, pdc_mpdzipdc_N95_dependencias_k70);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k70(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k70);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 8:28 >> 8:36 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 8:28 >> 8:36 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 126), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 8:28 >> 8:36 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 8:0 >> 8:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 19:27 >> 19:38 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_obtener_local(ctx, m, 117));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 19:40 >> 19:60 */
pdcrt_fijar_local(ctx, m, 134, PDCRT_OBTENER_CONSTANTE(ctx, m, 0));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 19:62 >> 19:71 */
pdcrt_fijar_local(ctx, m, 135, PDCRT_OBTENER_CONSTANTE(ctx, m, 1));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 19:73 >> 19:82 */
pdcrt_fijar_local(ctx, m, 136, PDCRT_OBTENER_CONSTANTE(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 19:27 >> 19:39 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 3);
return pdcrt_llamar3(ctx, m, pdc_mpdzipdc_N95_dependencias_k71, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 133)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 134)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 135)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 136)));
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k71(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k71);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 19:27 >> 19:39 */
pdcrt_fijar_local(ctx, m, 132, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 19:27 >> 19:39 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 19:27 >> 19:39 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 19:27 >> 19:39 */
pdcrt_fijar_local_nb(ctx, m, 134, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 19:27 >> 19:39 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 19:6 >> 19:24 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 127), pdcrt_obtener_local(ctx, m, 132));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 19:6 >> 19:24 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 37:30 >> 37:49 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_obtener_local(ctx, m, 120));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 37:51 >> 37:74 */
pdcrt_fijar_local(ctx, m, 134, PDCRT_OBTENER_CONSTANTE(ctx, m, 4));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 38:4 >> 38:12 */
pdcrt_fijar_local(ctx, m, 135, PDCRT_OBTENER_CONSTANTE(ctx, m, 5));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 38:14 >> 38:23 */
pdcrt_fijar_local(ctx, m, 136, PDCRT_OBTENER_CONSTANTE(ctx, m, 1));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 38:25 >> 38:34 */
pdcrt_fijar_local(ctx, m, 137, PDCRT_OBTENER_CONSTANTE(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 39:5 >> 39:12 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_obtener_local(ctx, m, 122));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 39:21 >> 39:29 */
pdcrt_fijar_local(ctx, m, 140, PDCRT_OBTENER_CONSTANTE(ctx, m, 5));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 39:12 >> 39:13 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 6);
return pdcrt_llamar1(ctx, m, pdc_mpdzipdc_N95_dependencias_k72, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 139)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 140)));
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k72(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k72);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 39:12 >> 39:13 */
pdcrt_fijar_local(ctx, m, 138, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 39:12 >> 39:13 */
pdcrt_fijar_local_nb(ctx, m, 140, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 39:12 >> 39:13 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 40:5 >> 40:12 */
pdcrt_fijar_local_nb(ctx, m, 140, pdcrt_obtener_local(ctx, m, 122));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 40:23 >> 40:32 */
pdcrt_fijar_local(ctx, m, 141, PDCRT_OBTENER_CONSTANTE(ctx, m, 1));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 40:12 >> 40:13 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 7);
return pdcrt_llamar1(ctx, m, pdc_mpdzipdc_N95_dependencias_k73, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 140)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 141)));
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k73(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k73);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 40:12 >> 40:13 */
pdcrt_fijar_local(ctx, m, 139, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 40:12 >> 40:13 */
pdcrt_fijar_local_nb(ctx, m, 141, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 40:12 >> 40:13 */
pdcrt_fijar_local_nb(ctx, m, 140, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 41:5 >> 41:12 */
pdcrt_fijar_local_nb(ctx, m, 141, pdcrt_obtener_local(ctx, m, 122));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 41:23 >> 41:32 */
pdcrt_fijar_local(ctx, m, 142, PDCRT_OBTENER_CONSTANTE(ctx, m, 1));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 41:34 >> 41:43 */
pdcrt_fijar_local(ctx, m, 143, PDCRT_OBTENER_CONSTANTE(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 41:12 >> 41:13 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 7);
return pdcrt_llamar2(ctx, m, pdc_mpdzipdc_N95_dependencias_k74, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 141)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 142)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 143)));
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k74(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k74);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 41:12 >> 41:13 */
pdcrt_fijar_local(ctx, m, 140, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 41:12 >> 41:13 */
pdcrt_fijar_local_nb(ctx, m, 143, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 41:12 >> 41:13 */
pdcrt_fijar_local_nb(ctx, m, 142, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 41:12 >> 41:13 */
pdcrt_fijar_local_nb(ctx, m, 141, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 37:30 >> 37:50 */
pdcrt_extender_pila(ctx, 1);
pdcrt_empujar(ctx, pdcrt_obtener_local(ctx, m, 140));
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 3);
return pdcrt_llamarnr(ctx, m, pdc_mpdzipdc_N95_dependencias_k75, 7, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 133)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 134)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 135)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 136)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 137)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 138)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 139)));
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k75(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k75);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 37:30 >> 37:50 */
pdcrt_fijar_local(ctx, m, 132, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 37:30 >> 37:50 */
pdcrt_fijar_local_nb(ctx, m, 140, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 37:30 >> 37:50 */
pdcrt_fijar_local_nb(ctx, m, 139, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 37:30 >> 37:50 */
pdcrt_fijar_local_nb(ctx, m, 138, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 37:30 >> 37:50 */
pdcrt_fijar_local_nb(ctx, m, 137, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 37:30 >> 37:50 */
pdcrt_fijar_local_nb(ctx, m, 136, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 37:30 >> 37:50 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 37:30 >> 37:50 */
pdcrt_fijar_local_nb(ctx, m, 134, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 37:30 >> 37:50 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 37:6 >> 37:27 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 128), pdcrt_obtener_local(ctx, m, 132));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 37:6 >> 37:27 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 50:0 >> 57:10 */
do {
static const pdcrt_captura caps[] = {{97}};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzipdc_N95_dependencias_f0, caps, 1);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 132, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 50:8 >> 50:25 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 129), pdcrt_obtener_local(ctx, m, 132));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 50:8 >> 50:25 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 65:0 >> 72:10 */
do {
static const pdcrt_captura caps[] = {{97}};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzipdc_N95_dependencias_f1, caps, 1);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 132, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 65:8 >> 65:25 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 130), pdcrt_obtener_local(ctx, m, 132));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 65:8 >> 65:25 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 83:0 >> 104:16 */
do {
static const pdcrt_captura caps[] = {{127}, {126}, {112}, {130}, {129}, {118}, {116}, {3}, {128}};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzipdc_N95_dependencias_f4, caps, 9);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 132, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 83:14 >> 83:33 */
pdcrt_fijar_local_nb(ctx, m, 131, pdcrt_obtener_local(ctx, m, 132));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 83:14 >> 83:33 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cons = pdcrt_crear_espacio_de_nombres_cons(ctx, PDCRT_GC());
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 132, cons);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 115)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "ParaCadaNúmero", 15, true, pdc_mpdzipdc_N95_dependencias_k118);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k76(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k76);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 52:18 >> 52:19 */
pdcrt_fijar_local(ctx, m, 3, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 52:18 >> 52:19 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 52:18 >> 52:19 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 52:18 >> 52:19 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 52:10 >> 52:11 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_obtener_local(ctx, m, 3));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 52:10 >> 52:11 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 53:7 >> 53:13 */
pdcrt_fijar_local(ctx, m, 4, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 53:15 >> 53:16 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_obtener_local(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 53:7 >> 53:14 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 3);
return pdcrt_llamar1(ctx, m, pdc_mpdzipdc_N95_dependencias_k77, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)));
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k77(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k77);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 53:7 >> 53:14 */
pdcrt_fijar_local(ctx, m, 3, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 53:7 >> 53:14 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 53:7 >> 53:14 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 53:4 >> 55:9 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 3);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 53:4 >> 55:9 */
pdcrt_obj csaltar_obj = pdcrt_obtener_local(ctx, m, 4);
if(csaltar_obj.recv != &pdcrt_recv_booleano) pdcrt_error(ctx, "Se esperaba un objeto de tipo Boole");
if(csaltar_obj.bval)
return pdcrt_saltar(ctx, m, pdc_mpdzipdc_N95_dependencias_k82, PDCRT_XMM_NULO());
else
return pdcrt_saltar(ctx, m, pdc_mpdzipdc_N95_dependencias_k78, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k78(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k78);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 53:4 >> 55:9 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 53:4 >> 55:9 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 54:8 >> 54:26 */
pdcrt_fijar_local(ctx, m, 4, ctx->espacio_de_nombres_runtime);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 54:29 >> 54:71 */
pdcrt_fijar_local(ctx, m, 6, PDCRT_OBTENER_CONSTANTE(ctx, m, 10));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 54:83 >> 54:87 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_obtener_local(ctx, m, 1));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 54:71 >> 54:72 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 11);
return pdcrt_llamar1(ctx, m, pdc_mpdzipdc_N95_dependencias_k79, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)));
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k79(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k79);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 54:71 >> 54:72 */
pdcrt_fijar_local(ctx, m, 5, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 54:71 >> 54:72 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 54:71 >> 54:72 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 54:8 >> 54:26 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 12);
return pdcrt_llamar1(ctx, m, pdc_mpdzipdc_N95_dependencias_k80, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)));
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k80(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k80);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 54:8 >> 54:26 */
pdcrt_fijar_local(ctx, m, 3, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 54:8 >> 54:26 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 54:8 >> 54:26 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 54:8 >> 54:27 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 53:4 >> 55:9 */
return pdcrt_saltar(ctx, m, pdc_mpdzipdc_N95_dependencias_k83, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k81(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k81);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
return pdcrt_saltar(ctx, m, pdc_mpdzipdc_N95_dependencias_k82, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k82(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k82);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
return pdcrt_saltar(ctx, m, pdc_mpdzipdc_N95_dependencias_k83, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k83(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k83);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 56:13 >> 56:17 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_obtener_local(ctx, m, 1));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 56:33 >> 56:34 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_entero(PDCRT_ENTERO_C(0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 56:36 >> 56:37 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_obtener_local(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 56:17 >> 56:18 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 13);
return pdcrt_llamar2(ctx, m->k.marco, m->k.kf, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 56:17 >> 56:18 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 56:17 >> 56:18 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 56:17 >> 56:18 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 50:0 >> 57:10 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 50:0 >> 57:10 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 50:0 >> 57:10 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k84(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k84);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 67:18 >> 67:19 */
pdcrt_fijar_local(ctx, m, 3, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 67:18 >> 67:19 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 67:18 >> 67:19 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 67:18 >> 67:19 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 67:10 >> 67:11 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_obtener_local(ctx, m, 3));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 67:10 >> 67:11 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 68:7 >> 68:13 */
pdcrt_fijar_local(ctx, m, 4, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 68:15 >> 68:16 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_obtener_local(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 68:7 >> 68:14 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 3);
return pdcrt_llamar1(ctx, m, pdc_mpdzipdc_N95_dependencias_k85, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)));
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k85(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k85);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 68:7 >> 68:14 */
pdcrt_fijar_local(ctx, m, 3, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 68:7 >> 68:14 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 68:7 >> 68:14 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 68:4 >> 70:9 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 3);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 68:4 >> 70:9 */
pdcrt_obj csaltar_obj = pdcrt_obtener_local(ctx, m, 4);
if(csaltar_obj.recv != &pdcrt_recv_booleano) pdcrt_error(ctx, "Se esperaba un objeto de tipo Boole");
if(csaltar_obj.bval)
return pdcrt_saltar(ctx, m, pdc_mpdzipdc_N95_dependencias_k90, PDCRT_XMM_NULO());
else
return pdcrt_saltar(ctx, m, pdc_mpdzipdc_N95_dependencias_k86, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k86(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k86);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 68:4 >> 70:9 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 68:4 >> 70:9 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 69:8 >> 69:26 */
pdcrt_fijar_local(ctx, m, 4, ctx->espacio_de_nombres_runtime);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 69:29 >> 69:71 */
pdcrt_fijar_local(ctx, m, 6, PDCRT_OBTENER_CONSTANTE(ctx, m, 10));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 69:83 >> 69:87 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_obtener_local(ctx, m, 1));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 69:71 >> 69:72 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 11);
return pdcrt_llamar1(ctx, m, pdc_mpdzipdc_N95_dependencias_k87, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)));
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k87(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k87);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 69:71 >> 69:72 */
pdcrt_fijar_local(ctx, m, 5, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 69:71 >> 69:72 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 69:71 >> 69:72 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 69:8 >> 69:26 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 12);
return pdcrt_llamar1(ctx, m, pdc_mpdzipdc_N95_dependencias_k88, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)));
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k88(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k88);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 69:8 >> 69:26 */
pdcrt_fijar_local(ctx, m, 3, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 69:8 >> 69:26 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 69:8 >> 69:26 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 69:8 >> 69:27 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 68:4 >> 70:9 */
return pdcrt_saltar(ctx, m, pdc_mpdzipdc_N95_dependencias_k91, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k89(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k89);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
return pdcrt_saltar(ctx, m, pdc_mpdzipdc_N95_dependencias_k90, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k90(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k90);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
return pdcrt_saltar(ctx, m, pdc_mpdzipdc_N95_dependencias_k91, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k91(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k91);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 71:13 >> 71:17 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_obtener_local(ctx, m, 1));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 71:34 >> 71:35 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_obtener_local(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 71:38 >> 71:39 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_entero(PDCRT_ENTERO_C(1)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 71:34 >> 71:39 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 14);
return pdcrt_llamar1(ctx, m, pdc_mpdzipdc_N95_dependencias_k92, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)));
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k92(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k92);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 71:34 >> 71:39 */
pdcrt_fijar_local(ctx, m, 5, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 71:34 >> 71:39 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 71:34 >> 71:39 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 71:42 >> 71:46 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_obtener_local(ctx, m, 1));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 71:46 >> 71:47 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 15);
return pdcrt_llamar0(ctx, m, pdc_mpdzipdc_N95_dependencias_k93, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k93(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k93);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 71:46 >> 71:47 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 71:46 >> 71:47 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 71:17 >> 71:18 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 13);
return pdcrt_llamar2(ctx, m->k.marco, m->k.kf, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 71:17 >> 71:18 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 71:17 >> 71:18 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 71:17 >> 71:18 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 65:0 >> 72:10 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 65:0 >> 72:10 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 65:0 >> 72:10 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k94(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k94);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 85:25 >> 85:32 */
pdcrt_fijar_local(ctx, m, 15, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 85:25 >> 85:32 */
pdcrt_fijar_local_nb(ctx, m, 16, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 85:32 >> 85:33 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 17);
return pdcrt_llamar0(ctx, m, pdc_mpdzipdc_N95_dependencias_k95, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 15)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k95(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k95);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 85:32 >> 85:33 */
pdcrt_fijar_local(ctx, m, 14, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 85:32 >> 85:33 */
pdcrt_fijar_local_nb(ctx, m, 15, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 85:10 >> 85:22 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 13), pdcrt_obtener_local(ctx, m, 14));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 85:10 >> 85:22 */
pdcrt_fijar_local_nb(ctx, m, 14, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 86:4 >> 86:12 */
pdcrt_fijar_local(ctx, m, 15, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 1)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 86:14 >> 86:21 */
pdcrt_fijar_local_nb(ctx, m, 16, pdcrt_obtener_local(ctx, m, 9));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 86:23 >> 86:30 */
do {
static const pdcrt_captura caps[] = {{5}, {2}};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzipdc_N95_dependencias_f2, caps, 2);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 17, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 88:16 >> 88:29 */
do {
static const pdcrt_captura caps[] = {{6}, {2}, {5}, {4}, {3}, {11}, {12}, {13}, {0}, {10}, {8}};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzipdc_N95_dependencias_f3, caps, 11);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 18, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 86:4 >> 86:13 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 3);
return pdcrt_llamar3(ctx, m, pdc_mpdzipdc_N95_dependencias_k117, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 15)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 16)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 17)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 18)));
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k96(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k96);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 87:39 >> 87:40 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 87:39 >> 87:40 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 87:17 >> 87:29 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 3);
return pdcrt_llamar2(ctx, m->k.marco, m->k.kf, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 87:17 >> 87:29 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 87:17 >> 87:29 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 87:17 >> 87:29 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 86:23 >> 86:30 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 86:23 >> 86:30 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 86:23 >> 86:30 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k97(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k97);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 90:32 >> 90:33 */
pdcrt_fijar_local(ctx, m, 16, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 90:32 >> 90:33 */
pdcrt_fijar_local_nb(ctx, m, 17, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 90:14 >> 90:25 */
pdcrt_fijar_local_nb(ctx, m, 12, pdcrt_obtener_local(ctx, m, 16));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 90:14 >> 90:25 */
pdcrt_fijar_local_nb(ctx, m, 16, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 91:11 >> 91:22 */
pdcrt_fijar_local(ctx, m, 17, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 1)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 91:24 >> 91:28 */
pdcrt_fijar_local_nb(ctx, m, 19, pdcrt_obtener_local(ctx, m, 11));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 91:28 >> 91:29 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 2);
return pdcrt_llamar0(ctx, m, pdc_mpdzipdc_N95_dependencias_k98, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 19)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k98(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k98);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 91:28 >> 91:29 */
pdcrt_fijar_local(ctx, m, 18, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 91:28 >> 91:29 */
pdcrt_fijar_local_nb(ctx, m, 19, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 91:38 >> 91:41 */
pdcrt_fijar_local(ctx, m, 20, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 2)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 91:41 >> 91:42 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 19);
return pdcrt_llamar0(ctx, m, pdc_mpdzipdc_N95_dependencias_k99, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 20)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k99(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k99);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 91:41 >> 91:42 */
pdcrt_fijar_local(ctx, m, 19, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 91:41 >> 91:42 */
pdcrt_fijar_local_nb(ctx, m, 20, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 91:11 >> 91:23 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 3);
return pdcrt_llamar2(ctx, m, pdc_mpdzipdc_N95_dependencias_k100, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 17)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 18)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 19)));
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k100(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k100);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 91:11 >> 91:23 */
pdcrt_fijar_local(ctx, m, 16, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 91:11 >> 91:23 */
pdcrt_fijar_local_nb(ctx, m, 19, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 91:11 >> 91:23 */
pdcrt_fijar_local_nb(ctx, m, 18, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 91:11 >> 91:23 */
pdcrt_fijar_local_nb(ctx, m, 17, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 91:8 >> 99:13 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 16);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 17, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 91:8 >> 99:13 */
pdcrt_obj csaltar_obj = pdcrt_obtener_local(ctx, m, 17);
if(csaltar_obj.recv != &pdcrt_recv_booleano) pdcrt_error(ctx, "Se esperaba un objeto de tipo Boole");
if(csaltar_obj.bval)
return pdcrt_saltar(ctx, m, pdc_mpdzipdc_N95_dependencias_k107, PDCRT_XMM_NULO());
else
return pdcrt_saltar(ctx, m, pdc_mpdzipdc_N95_dependencias_k101, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k101(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k101);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 91:8 >> 99:13 */
pdcrt_fijar_local_nb(ctx, m, 17, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 91:8 >> 99:13 */
pdcrt_fijar_local_nb(ctx, m, 16, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 92:21 >> 92:25 */
pdcrt_fijar_local_nb(ctx, m, 15, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 93:25 >> 93:29 */
pdcrt_fijar_local_nb(ctx, m, 18, pdcrt_obtener_local(ctx, m, 11));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 93:29 >> 93:30 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 2);
return pdcrt_llamar0(ctx, m, pdc_mpdzipdc_N95_dependencias_k102, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 18)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k102(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k102);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 93:29 >> 93:30 */
pdcrt_fijar_local(ctx, m, 17, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 93:29 >> 93:30 */
pdcrt_fijar_local_nb(ctx, m, 18, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 93:37 >> 93:38 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 20);
return pdcrt_llamar0(ctx, m, pdc_mpdzipdc_N95_dependencias_k103, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 17)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k103(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k103);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 93:37 >> 93:38 */
pdcrt_fijar_local(ctx, m, 16, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 93:37 >> 93:38 */
pdcrt_fijar_local_nb(ctx, m, 17, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 93:18 >> 93:22 */
pdcrt_fijar_local_nb(ctx, m, 15, pdcrt_obtener_local(ctx, m, 16));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 93:18 >> 93:22 */
pdcrt_fijar_local_nb(ctx, m, 16, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 94:24 >> 94:41 */
pdcrt_fijar_local(ctx, m, 17, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 3)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 94:43 >> 94:47 */
pdcrt_fijar_local_nb(ctx, m, 18, pdcrt_obtener_local(ctx, m, 15));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 94:24 >> 94:42 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 3);
return pdcrt_llamar1(ctx, m, pdc_mpdzipdc_N95_dependencias_k104, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 17)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 18)));
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k104(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k104);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 94:24 >> 94:42 */
pdcrt_fijar_local(ctx, m, 16, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 94:24 >> 94:42 */
pdcrt_fijar_local_nb(ctx, m, 18, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 94:24 >> 94:42 */
pdcrt_fijar_local_nb(ctx, m, 17, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 94:18 >> 94:21 */
pdcrt_fijar_local_nb(ctx, m, 14, pdcrt_obtener_local(ctx, m, 16));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 94:18 >> 94:21 */
pdcrt_fijar_local_nb(ctx, m, 16, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 95:28 >> 95:45 */
pdcrt_fijar_local(ctx, m, 17, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 4)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 95:47 >> 95:51 */
pdcrt_fijar_local_nb(ctx, m, 18, pdcrt_obtener_local(ctx, m, 15));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 95:28 >> 95:46 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 3);
return pdcrt_llamar1(ctx, m, pdc_mpdzipdc_N95_dependencias_k105, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 17)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 18)));
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k105(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k105);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 95:28 >> 95:46 */
pdcrt_fijar_local(ctx, m, 16, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 95:28 >> 95:46 */
pdcrt_fijar_local_nb(ctx, m, 18, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 95:28 >> 95:46 */
pdcrt_fijar_local_nb(ctx, m, 17, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 95:18 >> 95:25 */
pdcrt_fijar_local_nb(ctx, m, 13, pdcrt_obtener_local(ctx, m, 16));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 95:18 >> 95:25 */
pdcrt_fijar_local_nb(ctx, m, 16, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 91:8 >> 99:13 */
return pdcrt_saltar(ctx, m, pdc_mpdzipdc_N95_dependencias_k111, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k106(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k106);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
return pdcrt_saltar(ctx, m, pdc_mpdzipdc_N95_dependencias_k107, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k107(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k107);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 97:24 >> 97:31 */
pdcrt_fijar_local(ctx, m, 16, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 5)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 97:18 >> 97:21 */
pdcrt_fijar_local_nb(ctx, m, 14, pdcrt_obtener_local(ctx, m, 16));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 97:18 >> 97:21 */
pdcrt_fijar_local_nb(ctx, m, 16, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 98:28 >> 98:48 */
pdcrt_fijar_local(ctx, m, 17, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 98:50 >> 98:66 */
pdcrt_fijar_local(ctx, m, 18, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 6)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 98:68 >> 98:72 */
pdcrt_fijar_local_nb(ctx, m, 21, pdcrt_obtener_local(ctx, m, 11));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 98:72 >> 98:73 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 2);
return pdcrt_llamar0(ctx, m, pdc_mpdzipdc_N95_dependencias_k108, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 21)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k108(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k108);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 98:72 >> 98:73 */
pdcrt_fijar_local(ctx, m, 20, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 98:72 >> 98:73 */
pdcrt_fijar_local_nb(ctx, m, 21, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 98:80 >> 98:81 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 21);
return pdcrt_llamar0(ctx, m, pdc_mpdzipdc_N95_dependencias_k109, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 20)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k109(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k109);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 98:80 >> 98:81 */
pdcrt_fijar_local(ctx, m, 19, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 98:80 >> 98:81 */
pdcrt_fijar_local_nb(ctx, m, 20, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 98:28 >> 98:49 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 3);
return pdcrt_llamar2(ctx, m, pdc_mpdzipdc_N95_dependencias_k110, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 17)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 18)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 19)));
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k110(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k110);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 98:28 >> 98:49 */
pdcrt_fijar_local(ctx, m, 16, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 98:28 >> 98:49 */
pdcrt_fijar_local_nb(ctx, m, 19, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 98:28 >> 98:49 */
pdcrt_fijar_local_nb(ctx, m, 18, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 98:28 >> 98:49 */
pdcrt_fijar_local_nb(ctx, m, 17, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 98:18 >> 98:25 */
pdcrt_fijar_local_nb(ctx, m, 13, pdcrt_obtener_local(ctx, m, 16));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 98:18 >> 98:25 */
pdcrt_fijar_local_nb(ctx, m, 16, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
return pdcrt_saltar(ctx, m, pdc_mpdzipdc_N95_dependencias_k111, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k111(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k111);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 100:8 >> 100:20 */
pdcrt_fijar_local(ctx, m, 17, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 7)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 100:38 >> 100:56 */
pdcrt_fijar_local(ctx, m, 19, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 8)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 100:64 >> 100:67 */
pdcrt_fijar_local_nb(ctx, m, 20, pdcrt_obtener_local(ctx, m, 14));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 100:69 >> 100:76 */
pdcrt_fijar_local_nb(ctx, m, 21, pdcrt_obtener_local(ctx, m, 13));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 100:56 >> 100:57 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 22);
return pdcrt_llamar2(ctx, m, pdc_mpdzipdc_N95_dependencias_k112, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 19)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 20)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 21)));
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k112(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k112);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 100:56 >> 100:57 */
pdcrt_fijar_local(ctx, m, 18, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 100:56 >> 100:57 */
pdcrt_fijar_local_nb(ctx, m, 21, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 100:56 >> 100:57 */
pdcrt_fijar_local_nb(ctx, m, 20, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 100:56 >> 100:57 */
pdcrt_fijar_local_nb(ctx, m, 19, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 100:20 >> 100:21 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 23);
return pdcrt_llamar1(ctx, m, pdc_mpdzipdc_N95_dependencias_k113, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 17)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 18)));
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k113(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k113);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 100:20 >> 100:21 */
pdcrt_fijar_local(ctx, m, 16, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 100:20 >> 100:21 */
pdcrt_fijar_local_nb(ctx, m, 18, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 100:20 >> 100:21 */
pdcrt_fijar_local_nb(ctx, m, 17, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 89:8 >> 101:17 */
pdcrt_fijar_local_nb(ctx, m, 16, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 101:8 >> 101:16 */
pdcrt_fijar_local(ctx, m, 17, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 9)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 101:27 >> 101:48 */
pdcrt_fijar_local(ctx, m, 19, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 10)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 101:56 >> 101:60 */
pdcrt_fijar_local_nb(ctx, m, 21, pdcrt_obtener_local(ctx, m, 11));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 101:60 >> 101:61 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 24);
return pdcrt_llamar0(ctx, m, pdc_mpdzipdc_N95_dependencias_k114, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 21)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k114(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k114);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 101:60 >> 101:61 */
pdcrt_fijar_local(ctx, m, 20, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 101:60 >> 101:61 */
pdcrt_fijar_local_nb(ctx, m, 21, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 101:65 >> 101:68 */
pdcrt_fijar_local_nb(ctx, m, 21, pdcrt_obtener_local(ctx, m, 14));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 101:70 >> 101:77 */
pdcrt_fijar_local_nb(ctx, m, 22, pdcrt_obtener_local(ctx, m, 13));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 101:48 >> 101:49 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 22);
return pdcrt_llamar3(ctx, m, pdc_mpdzipdc_N95_dependencias_k115, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 19)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 20)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 21)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 22)));
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k115(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k115);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 101:48 >> 101:49 */
pdcrt_fijar_local(ctx, m, 18, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 101:48 >> 101:49 */
pdcrt_fijar_local_nb(ctx, m, 22, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 101:48 >> 101:49 */
pdcrt_fijar_local_nb(ctx, m, 21, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 101:48 >> 101:49 */
pdcrt_fijar_local_nb(ctx, m, 20, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 101:48 >> 101:49 */
pdcrt_fijar_local_nb(ctx, m, 19, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 101:16 >> 101:17 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 25);
return pdcrt_llamar1(ctx, m, pdc_mpdzipdc_N95_dependencias_k116, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 17)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 18)));
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k116(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k116);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 101:16 >> 101:17 */
pdcrt_fijar_local(ctx, m, 16, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 101:16 >> 101:17 */
pdcrt_fijar_local_nb(ctx, m, 18, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 101:16 >> 101:17 */
pdcrt_fijar_local_nb(ctx, m, 17, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 89:8 >> 101:17 */
pdcrt_fijar_local_nb(ctx, m, 16, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 88:16 >> 88:29 */
pdcrt_fijar_local_nb(ctx, m, 16, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 88:16 >> 88:29 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 16)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 88:16 >> 88:29 */
pdcrt_fijar_local_nb(ctx, m, 16, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k117(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k117);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 86:4 >> 86:13 */
pdcrt_fijar_local(ctx, m, 14, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 86:4 >> 86:13 */
pdcrt_fijar_local_nb(ctx, m, 18, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 86:4 >> 86:13 */
pdcrt_fijar_local_nb(ctx, m, 17, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 86:4 >> 86:13 */
pdcrt_fijar_local_nb(ctx, m, 16, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 86:4 >> 86:13 */
pdcrt_fijar_local_nb(ctx, m, 15, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 84:4 >> 103:25 */
pdcrt_fijar_local_nb(ctx, m, 14, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 103:13 >> 103:25 */
pdcrt_fijar_local(ctx, m, 14, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 13)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 103:4 >> 103:25 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 14)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 103:4 >> 103:25 */
pdcrt_fijar_local_nb(ctx, m, 14, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 83:0 >> 104:16 */
pdcrt_fijar_local_nb(ctx, m, 14, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 83:0 >> 104:16 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 14)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 83:0 >> 104:16 */
pdcrt_fijar_local_nb(ctx, m, 14, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k118(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k118);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_obtener_local(ctx, m, 61));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "ParaCadaElemento", 16, true, pdc_mpdzipdc_N95_dependencias_k119);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k119(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k119);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 114)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "ParaCadaElementoConÍndice", 26, true, pdc_mpdzipdc_N95_dependencias_k120);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k120(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k120);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 62)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "Todos", 5, true, pdc_mpdzipdc_N95_dependencias_k121);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k121(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k121);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 113)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "EsSubclase", 10, true, pdc_mpdzipdc_N95_dependencias_k122);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k122(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k122);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 63)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "Contiene", 8, true, pdc_mpdzipdc_N95_dependencias_k123);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k123(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k123);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 112)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "EsInstancia", 11, true, pdc_mpdzipdc_N95_dependencias_k124);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k124(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k124);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 64)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "EsImpar", 7, true, pdc_mpdzipdc_N95_dependencias_k125);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k125(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k125);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 111)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "ParaCadaNúmeroConPaso", 22, true, pdc_mpdzipdc_N95_dependencias_k126);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k126(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k126);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 65)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "Escribir", 8, true, pdc_mpdzipdc_N95_dependencias_k127);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k127(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k127);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 110)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "Identidad", 9, true, pdc_mpdzipdc_N95_dependencias_k128);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k128(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k128);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 66)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "Reducir", 7, true, pdc_mpdzipdc_N95_dependencias_k129);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k129(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k129);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 109)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "Mapear", 6, true, pdc_mpdzipdc_N95_dependencias_k130);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k130(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k130);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 67)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "Filtrar", 7, true, pdc_mpdzipdc_N95_dependencias_k131);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k131(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k131);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 108)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "Algún", 6, true, pdc_mpdzipdc_N95_dependencias_k132);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k132(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k132);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 68)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "DígitoAEntero", 14, true, pdc_mpdzipdc_N95_dependencias_k133);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k133(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k133);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 107)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "Elevar", 6, true, pdc_mpdzipdc_N95_dependencias_k134);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k134(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k134);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 69)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "ConvertirAEntero", 16, true, pdc_mpdzipdc_N95_dependencias_k135);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k135(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k135);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 106)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "ConvertirANúmero", 17, true, pdc_mpdzipdc_N95_dependencias_k136);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k136(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k136);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 70)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "EsNúmeroEntero", 15, true, pdc_mpdzipdc_N95_dependencias_k137);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k137(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k137);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 105)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "EsNúmero", 9, true, pdc_mpdzipdc_N95_dependencias_k138);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k138(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k138);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 71)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "Concatenar", 10, true, pdc_mpdzipdc_N95_dependencias_k139);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k139(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k139);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 104)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "ArregloConFinal", 15, true, pdc_mpdzipdc_N95_dependencias_k140);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k140(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k140);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 72)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "Aplicar\'", 8, true, pdc_mpdzipdc_N95_dependencias_k141);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k141(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k141);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 103)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "Aplicar\'i", 9, true, pdc_mpdzipdc_N95_dependencias_k142);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k142(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k142);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 73)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "EnviarMensaje", 13, true, pdc_mpdzipdc_N95_dependencias_k143);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k143(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k143);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 102)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "Resto", 5, true, pdc_mpdzipdc_N95_dependencias_k144);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k144(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k144);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 74)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "Abs", 3, true, pdc_mpdzipdc_N95_dependencias_k145);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k145(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k145);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 101)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "Mod", 3, true, pdc_mpdzipdc_N95_dependencias_k146);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k146(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k146);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 75)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "EsPar", 5, true, pdc_mpdzipdc_N95_dependencias_k147);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k147(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k147);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 100)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "Aplanar", 7, true, pdc_mpdzipdc_N95_dependencias_k148);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k148(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k148);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 76)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "AplanarTodo", 11, true, pdc_mpdzipdc_N95_dependencias_k149);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k149(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k149);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 99)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "PedazoDeArreglo", 15, true, pdc_mpdzipdc_N95_dependencias_k150);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k150(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k150);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 77)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "PrimerElemento", 14, true, pdc_mpdzipdc_N95_dependencias_k151);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k151(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k151);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 98)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "ÚltimoElemento", 15, true, pdc_mpdzipdc_N95_dependencias_k152);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k152(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k152);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 78)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "ÚnicoElemento", 14, true, pdc_mpdzipdc_N95_dependencias_k153);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k153(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k153);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 97)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "EsNulo", 6, true, pdc_mpdzipdc_N95_dependencias_k154);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k154(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k154);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 79)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "Max", 3, true, pdc_mpdzipdc_N95_dependencias_k155);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k155(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k155);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 96)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "Min", 3, true, pdc_mpdzipdc_N95_dependencias_k156);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k156(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k156);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 80)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "NoImplementado", 14, true, pdc_mpdzipdc_N95_dependencias_k157);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k157(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k157);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 95)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "MétodoAbstracto", 16, true, pdc_mpdzipdc_N95_dependencias_k158);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k158(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k158);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 81)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "Inalcanzable", 12, true, pdc_mpdzipdc_N95_dependencias_k159);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k159(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k159);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 94)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "LlamarConEC", 11, true, pdc_mpdzipdc_N95_dependencias_k160);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k160(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k160);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 82)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "ArregloSinElementoEnÍndice", 27, true, pdc_mpdzipdc_N95_dependencias_k161);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k161(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k161);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 93)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "LeerLínea", 10, true, pdc_mpdzipdc_N95_dependencias_k162);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k162(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k162);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 83)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "LeerNúmero", 11, true, pdc_mpdzipdc_N95_dependencias_k163);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k163(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k163);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 92)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "Parcial", 7, true, pdc_mpdzipdc_N95_dependencias_k164);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k164(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k164);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 84)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "MétodoComoFunción", 19, true, pdc_mpdzipdc_N95_dependencias_k165);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k165(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k165);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 91)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "OperadorBinario", 15, true, pdc_mpdzipdc_N95_dependencias_k166);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k166(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k166);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 85)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "ContienePredicado", 17, true, pdc_mpdzipdc_N95_dependencias_k167);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k167(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k167);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 90)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "BuscarPredicado", 15, true, pdc_mpdzipdc_N95_dependencias_k168);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k168(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k168);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 86)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "ParaCadaElementoEnReversa", 25, true, pdc_mpdzipdc_N95_dependencias_k169);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k169(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k169);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 89)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "Diccionario", 11, false, pdc_mpdzipdc_N95_dependencias_k170);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k170(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k170);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 87)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "Resultado", 9, false, pdc_mpdzipdc_N95_dependencias_k171);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k171(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k171);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 88)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "Pila", 4, false, pdc_mpdzipdc_N95_dependencias_k172);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k172(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k172);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 2:41 >> 2:61 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 116)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "ResolverRutaRelativa", 20, true, pdc_mpdzipdc_N95_dependencias_k173);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k173(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k173);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 3:23 >> 3:34 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_obtener_local(ctx, m, 117));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "TipoDeDatos", 11, true, pdc_mpdzipdc_N95_dependencias_k174);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k174(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k174);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 5:22 >> 5:25 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 118)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "CST", 3, false, pdc_mpdzipdc_N95_dependencias_k175);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k175(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k175);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 6:22 >> 6:25 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 119)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "AST", 3, false, pdc_mpdzipdc_N95_dependencias_k176);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k176(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k176);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 7:20 >> 7:39 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_obtener_local(ctx, m, 120));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "CrearTipoDeRegistro", 19, true, pdc_mpdzipdc_N95_dependencias_k177);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k177(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k177);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 7:41 >> 7:46 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 121)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "Tabla", 5, false, pdc_mpdzipdc_N95_dependencias_k178);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k178(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k178);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 7:48 >> 7:55 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_obtener_local(ctx, m, 122));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "Índice", 7, false, pdc_mpdzipdc_N95_dependencias_k179);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k179(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k179);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 7:57 >> 7:69 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 123)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "NodoDeÁrbol", 12, false, pdc_mpdzipdc_N95_dependencias_k180);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k180(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k180);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 7:71 >> 7:85 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 124)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "EntablarÁrbol", 14, true, pdc_mpdzipdc_N95_dependencias_k181);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k181(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k181);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 7:87 >> 7:100 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 125)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "EscribirTabla", 13, true, pdc_mpdzipdc_N95_dependencias_k182);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k182(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k182);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 8:28 >> 8:36 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 126)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "Buscando", 8, true, pdc_mpdzipdc_N95_dependencias_k183);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k183(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k183);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 18:9 >> 18:27 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 127)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "ReferenciaAMódulo", 18, false, pdc_mpdzipdc_N95_dependencias_k184);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k184(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k184);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 36:9 >> 36:30 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 128)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "InformaciónDeMódulo", 21, false, pdc_mpdzipdc_N95_dependencias_k185);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k185(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k185);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 50:8 >> 50:25 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 129)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "PaqueteDeUtilizar", 17, true, pdc_mpdzipdc_N95_dependencias_k186);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k186(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k186);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 65:8 >> 65:25 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 130)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "MóduloDeUtilizar", 17, true, pdc_mpdzipdc_N95_dependencias_k187);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k187(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k187);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 83:14 >> 83:33 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_obtener_local(ctx, m, 131));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "DependenciasDelNodo", 19, true, pdc_mpdzipdc_N95_dependencias_k188);
}
static pdcrt_tk pdc_mpdzipdc_N95_dependencias_k188(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_dependencias_k188);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
return pdcrt_exportar(ctx, m, pdcrt_obtener_local(ctx, m, 132), "pdzipdc_N95_dependencias", 24);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/dependencias.pd" => 1:0 >> 104:16 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
}
PDCRT_DECLARAR_ENTRYPOINT(pdzipdc_N95_dependencias, pdc_mpdzipdc_N95_dependencias_f5)
#ifdef PDCRT_MAIN
#define PDCRT_DEPS(X) \
    X(pdzipdc_N95_dependencias, "pdzipdc_N95_dependencias", 24) \
    X(pdzibepd_N95_x_N95_adhoc, "pdzibepd_N95_x_N95_adhoc", 24) \
    X(pdzipdc_N95_cst, "pdzipdc_N95_cst", 15) \
    X(pdzibepd_N95_builtins, "pdzibepd_N95_builtins", 21) \
    X(pdzipdc_N95_tabla, "pdzipdc_N95_tabla", 17) \
    X(pdzibepd_N95_builtinsImpl, "pdzibepd_N95_builtinsImpl", 25) \
    X(pdzibepd_N95_datos_N95_pila, "pdzibepd_N95_datos_N95_pila", 27) \
    X(pdzibepd_N95_datos_N95_diccionario, "pdzibepd_N95_datos_N95_diccionario", 34) \
    X(pdzibepd_N95_datos_N95_diccionario_N95_hashmap, "pdzibepd_N95_datos_N95_diccionario_N95_hashmap", 46) \
    X(pdzibepd_N95_datos_N95_diccionario_N95_interfaz, "pdzibepd_N95_datos_N95_diccionario_N95_interfaz", 47) \
    X(pdzibepd_N95_datos_N95_diccionario_N95_alist, "pdzibepd_N95_datos_N95_diccionario_N95_alist", 44) \
    X(pdzibepd_N95_datos_N95_resultado, "pdzibepd_N95_datos_N95_resultado", 32) \
    X(pdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas, "pdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas", 46) \
    X(pdzibepd_N95_utilidades_N95_texto, "pdzibepd_N95_utilidades_N95_texto", 33) \
    X(pdzibepd_N95_x_N95_datos, "pdzibepd_N95_x_N95_datos", 24) \
    X(pdzibepd_N95_x_N95_enum, "pdzibepd_N95_x_N95_enum", 23) \
    X(pdzipdc_N95_ast, "pdzipdc_N95_ast", 15) \
    X(pdzibepd_N95_datos_N95_conjunto, "pdzibepd_N95_datos_N95_conjunto", 31) \
    X(pdzibepd_N95_utilidades_N95_arreglo, "pdzibepd_N95_utilidades_N95_arreglo", 35) \
    X(pdzibepd_N95_algoritmos, "pdzibepd_N95_algoritmos", 23) \
    X(pdzipdc_N95_catamorfismos, "pdzipdc_N95_catamorfismos", 25)
PDCRT_DECLARAR_DEPS(PDCRT_DEPS)
PDCRT_DECLARAR_MAIN(pdzipdc_N95_dependencias)
#endif
