#define PDCRT_INTERNO
#include "pdcrt/pdcrt.h"
#include "pdcrt/pdcrt_ops.h"
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_f0(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_f1(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_f2(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_f3(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_f4(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_f5(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_f6(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_f7(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_f8(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_f9(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_f10(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_f11(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_f12(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_f13(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_f14(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_f15(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_f16(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_f17(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_f18(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k0(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k1(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k2(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k3(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k4(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k5(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k6(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k7(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k8(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k9(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k10(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k11(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k12(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k13(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k14(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k15(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k16(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k17(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k18(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k19(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k20(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k21(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k22(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k23(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k24(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k25(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k26(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k27(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k28(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k29(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k30(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k31(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k32(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k33(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k34(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k35(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k36(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k37(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k38(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k39(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k40(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k41(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k42(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k43(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k44(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k45(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k46(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k47(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k48(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k49(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k50(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k51(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k52(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k53(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k54(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k55(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k56(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k57(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k58(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k59(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k60(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k61(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k62(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k63(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k64(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k65(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k66(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k67(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k68(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k69(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k70(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k71(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k72(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k73(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k74(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k75(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k76(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k77(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k78(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k79(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k80(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k81(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k82(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k83(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k84(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k85(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k86(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k87(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k88(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k89(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k90(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k91(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k92(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k93(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k94(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k95(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k96(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k97(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k98(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k99(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k100(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k101(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k102(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k103(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k104(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k105(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k106(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k107(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k108(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k109(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k110(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k111(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k112(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k113(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k114(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k115(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k116(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k117(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k118(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k119(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k120(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k121(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k122(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k123(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k124(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k125(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k126(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k127(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k128(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k129(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k130(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k131(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k132(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k133(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k134(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k135(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k136(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k137(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k138(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k139(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k140(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k141(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k142(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k143(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k144(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k145(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k146(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k147(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k148(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k149(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k150(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k151(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k152(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k153(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k154(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k155(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k156(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k157(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k158(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k159(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k160(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k161(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k162(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k163(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k164(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k165(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k166(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k167(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k168(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k169(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k170(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k171(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k172(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k173(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k174(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k175(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k176(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k177(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k178(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k179(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k180(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k181(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k182(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k183(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k184(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k185(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k186(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k187(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k188(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k189(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k190(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k191(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k192(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k193(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k194(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k195(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k196(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k197(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k198(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k199(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k200(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k201(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k202(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k203(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k204(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k205(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k206(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k207(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k208(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k209(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k210(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k211(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k212(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k213(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k214(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k215(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k216(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k217(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k218(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k219(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k220(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k221(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k222(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k223(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k224(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k225(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k226(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k227(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k228(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k229(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k230(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k231(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k232(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k233(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k234(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k235(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k236(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k237(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k238(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k239(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k240(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k241(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k242(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k243(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k244(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k245(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k246(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k247(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k248(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_f0(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 9:0 >> 11:10 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd|9:0|11:10";
PDCRT_ALOJAR_MARCO(ctx, 8, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_utilidades_N95_texto_p0 { const pdcrt_params_base base; const pdcrt_param_data params[2]; };
static const struct pdc_params_data_mpdzibepd_N95_utilidades_N95_texto_p0 pdc_params = { .base = { .num_params = 2, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{2}, {3}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 9:30 >> 9:35 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 9:30 >> 9:35 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_obtener_local(ctx, m, 3));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 9:30 >> 9:35 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 9:23 >> 9:28 */
pdcrt_fijar_local_nb(ctx, m, 0, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 9:23 >> 9:28 */
pdcrt_fijar_local_nb(ctx, m, 0, pdcrt_obtener_local(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 9:23 >> 9:28 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 10:18 >> 10:23 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_obtener_local(ctx, m, 0));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 10:32 >> 10:33 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_entero(PDCRT_ENTERO_C(0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 10:35 >> 10:40 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_obtener_local(ctx, m, 1));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 10:23 >> 10:24 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 0);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k53, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_f1(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 43:4 >> 53:20 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd|43:4|53:20";
PDCRT_ALOJAR_MARCO(ctx, 13, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_utilidades_N95_texto_p1 { const pdcrt_params_base base; const pdcrt_param_data params[1]; };
static const struct pdc_params_data_mpdzibepd_N95_utilidades_N95_texto_p1 pdc_params = { .base = { .num_params = 1, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{5}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 43:32 >> 43:37 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 43:32 >> 43:37 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_obtener_local(ctx, m, 5));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 43:32 >> 43:37 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 44:11 >> 44:19 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 3)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 44:28 >> 44:33 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_obtener_local(ctx, m, 4));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 44:36 >> 44:38 */
pdcrt_fijar_local(ctx, m, 11, PDCRT_OBTENER_CONSTANTE(ctx, m, 9));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 44:28 >> 44:38 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 2);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k62, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 11)));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_f2(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 32:0 >> 66:10 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd|32:0|66:10";
PDCRT_ALOJAR_MARCO(ctx, 22, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_utilidades_N95_texto_p2 { const pdcrt_params_base base; const pdcrt_param_data params[3]; };
static const struct pdc_params_data_mpdzibepd_N95_utilidades_N95_texto_p2 pdc_params = { .base = { .num_params = 3, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{15}, {16}, {17}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 32:35 >> 32:43 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 32:35 >> 32:43 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_obtener_local(ctx, m, 17));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 32:35 >> 32:43 */
pdcrt_fijar_local_nb(ctx, m, 17, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 32:24 >> 32:33 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 32:24 >> 32:33 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_obtener_local(ctx, m, 16));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 32:24 >> 32:33 */
pdcrt_fijar_local_nb(ctx, m, 16, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 32:17 >> 32:22 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 32:17 >> 32:22 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_obtener_local(ctx, m, 15));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 32:17 >> 32:22 */
pdcrt_fijar_local_nb(ctx, m, 15, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 33:14 >> 33:30 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 33:32 >> 33:38 */
pdcrt_fijar_local_nb(ctx, m, 15, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 33:32 >> 33:38 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 15));
pdcrt_fijar_local(ctx, m, 8, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 33:32 >> 33:38 */
pdcrt_fijar_local_nb(ctx, m, 15, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 33:40 >> 33:47 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 33:49 >> 33:57 */
pdcrt_fijar_local_nb(ctx, m, 15, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 33:49 >> 33:57 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 15));
pdcrt_fijar_local(ctx, m, 10, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 33:49 >> 33:57 */
pdcrt_fijar_local_nb(ctx, m, 15, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 33:59 >> 33:69 */
pdcrt_fijar_local_nb(ctx, m, 15, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 33:59 >> 33:69 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 15));
pdcrt_fijar_local(ctx, m, 11, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 33:59 >> 33:69 */
pdcrt_fijar_local_nb(ctx, m, 15, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 33:71 >> 33:76 */
pdcrt_fijar_local_nb(ctx, m, 15, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 33:71 >> 33:76 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 15));
pdcrt_fijar_local(ctx, m, 12, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 33:71 >> 33:76 */
pdcrt_fijar_local_nb(ctx, m, 15, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 33:78 >> 33:91 */
pdcrt_fijar_local_nb(ctx, m, 15, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 33:78 >> 33:91 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 15));
pdcrt_fijar_local(ctx, m, 13, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 33:78 >> 33:91 */
pdcrt_fijar_local_nb(ctx, m, 15, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 43:18 >> 43:30 */
pdcrt_fijar_local_nb(ctx, m, 15, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 43:18 >> 43:30 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 15));
pdcrt_fijar_local(ctx, m, 14, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 43:18 >> 43:30 */
pdcrt_fijar_local_nb(ctx, m, 15, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 35:19 >> 35:26 */
pdcrt_fijar_local(ctx, m, 17, ctx->espacio_de_nombres_runtime);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 35:19 >> 35:26 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 3);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k56, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 17)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_f3(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 92:0 >> 94:10 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd|92:0|94:10";
PDCRT_ALOJAR_MARCO(ctx, 8, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_utilidades_N95_texto_p3 { const pdcrt_params_base base; const pdcrt_param_data params[2]; };
static const struct pdc_params_data_mpdzibepd_N95_utilidades_N95_texto_p3 pdc_params = { .base = { .num_params = 2, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{3}, {4}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 92:23 >> 92:32 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 92:23 >> 92:32 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_obtener_local(ctx, m, 4));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 92:23 >> 92:32 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 92:16 >> 92:21 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 92:16 >> 92:21 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_obtener_local(ctx, m, 3));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 92:16 >> 92:21 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 93:13 >> 93:20 */
pdcrt_fijar_local(ctx, m, 4, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 93:22 >> 93:27 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_obtener_local(ctx, m, 1));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 93:29 >> 93:38 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_obtener_local(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 93:40 >> 93:42 */
pdcrt_fijar_local(ctx, m, 7, PDCRT_OBTENER_CONSTANTE(ctx, m, 9));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 93:13 >> 93:21 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 6);
return pdcrt_llamar3(ctx, m->k.marco, m->k.kf, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 93:13 >> 93:21 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 93:13 >> 93:21 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 93:13 >> 93:21 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 93:13 >> 93:21 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 92:0 >> 94:10 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 92:0 >> 94:10 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 92:0 >> 94:10 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_f4(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 103:0 >> 105:10 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd|103:0|105:10";
PDCRT_ALOJAR_MARCO(ctx, 8, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_utilidades_N95_texto_p4 { const pdcrt_params_base base; const pdcrt_param_data params[2]; };
static const struct pdc_params_data_mpdzibepd_N95_utilidades_N95_texto_p4 pdc_params = { .base = { .num_params = 2, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{3}, {4}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 103:31 >> 103:40 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 103:31 >> 103:40 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_obtener_local(ctx, m, 4));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 103:31 >> 103:40 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 103:24 >> 103:29 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 103:24 >> 103:29 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_obtener_local(ctx, m, 3));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 103:24 >> 103:29 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 104:13 >> 104:20 */
pdcrt_fijar_local(ctx, m, 4, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 104:22 >> 104:27 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_obtener_local(ctx, m, 1));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 104:29 >> 104:38 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_obtener_local(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 104:40 >> 104:43 */
pdcrt_fijar_local(ctx, m, 7, PDCRT_OBTENER_CONSTANTE(ctx, m, 5));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 104:13 >> 104:21 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 6);
return pdcrt_llamar3(ctx, m->k.marco, m->k.kf, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 104:13 >> 104:21 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 104:13 >> 104:21 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 104:13 >> 104:21 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 104:13 >> 104:21 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 103:0 >> 105:10 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 103:0 >> 105:10 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 103:0 >> 105:10 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_f5(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 112:0 >> 114:10 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd|112:0|114:10";
PDCRT_ALOJAR_MARCO(ctx, 8, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_utilidades_N95_texto_p5 { const pdcrt_params_base base; const pdcrt_param_data params[2]; };
static const struct pdc_params_data_mpdzibepd_N95_utilidades_N95_texto_p5 pdc_params = { .base = { .num_params = 2, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{3}, {4}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 112:33 >> 112:42 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 112:33 >> 112:42 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_obtener_local(ctx, m, 4));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 112:33 >> 112:42 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 112:26 >> 112:31 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 112:26 >> 112:31 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_obtener_local(ctx, m, 3));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 112:26 >> 112:31 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 113:13 >> 113:20 */
pdcrt_fijar_local(ctx, m, 4, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 113:22 >> 113:27 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_obtener_local(ctx, m, 1));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 113:29 >> 113:38 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_obtener_local(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 113:40 >> 113:43 */
pdcrt_fijar_local(ctx, m, 7, PDCRT_OBTENER_CONSTANTE(ctx, m, 7));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 113:13 >> 113:21 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 6);
return pdcrt_llamar3(ctx, m->k.marco, m->k.kf, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 113:13 >> 113:21 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 113:13 >> 113:21 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 113:13 >> 113:21 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 113:13 >> 113:21 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 112:0 >> 114:10 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 112:0 >> 114:10 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 112:0 >> 114:10 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_f6(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 138:0 >> 169:10 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd|138:0|169:10";
PDCRT_ALOJAR_MARCO(ctx, 5, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_utilidades_N95_texto_p6 { const pdcrt_params_base base; const pdcrt_param_data params[2]; };
static const struct pdc_params_data_mpdzibepd_N95_utilidades_N95_texto_p6 pdc_params = { .base = { .num_params = 2, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{2}, {3}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 138:22 >> 138:31 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 138:22 >> 138:31 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_obtener_local(ctx, m, 3));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 138:22 >> 138:31 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 138:14 >> 138:20 */
pdcrt_fijar_local_nb(ctx, m, 0, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 138:14 >> 138:20 */
pdcrt_fijar_local_nb(ctx, m, 0, pdcrt_obtener_local(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 138:14 >> 138:20 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 148:21 >> 148:27 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_obtener_local(ctx, m, 0));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 148:34 >> 148:43 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_obtener_local(ctx, m, 1));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 148:27 >> 148:28 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 15);
return pdcrt_llamar1(ctx, m->k.marco, m->k.kf, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 3)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 148:27 >> 148:28 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 148:27 >> 148:28 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 138:0 >> 169:10 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 138:0 >> 169:10 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 3)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 138:0 >> 169:10 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_f7(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 177:0 >> 186:10 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd|177:0|186:10";
PDCRT_ALOJAR_MARCO(ctx, 7, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_utilidades_N95_texto_p7 { const pdcrt_params_base base; const pdcrt_param_data params[2]; };
static const struct pdc_params_data_mpdzibepd_N95_utilidades_N95_texto_p7 pdc_params = { .base = { .num_params = 2, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{4}, {5}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 177:27 >> 177:28 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 177:27 >> 177:28 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_obtener_local(ctx, m, 5));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 177:27 >> 177:28 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 177:22 >> 177:25 */
pdcrt_fijar_local_nb(ctx, m, 0, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 177:22 >> 177:25 */
pdcrt_fijar_local_nb(ctx, m, 0, pdcrt_obtener_local(ctx, m, 4));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 177:22 >> 177:25 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 178:14 >> 178:17 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 178:19 >> 178:20 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 179:16 >> 179:18 */
pdcrt_fijar_local(ctx, m, 4, PDCRT_OBTENER_CONSTANTE(ctx, m, 9));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 179:10 >> 179:13 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_obtener_local(ctx, m, 4));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 179:10 >> 179:13 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 180:14 >> 180:15 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_entero(PDCRT_ENTERO_C(0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 180:10 >> 180:11 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_obtener_local(ctx, m, 4));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 180:10 >> 180:11 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k98, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_f8(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 197:29 >> 197:42 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd|197:29|197:42";
PDCRT_ALOJAR_MARCO(ctx, 8, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_utilidades_N95_texto_p8 { const pdcrt_params_base base; const pdcrt_param_data params[1]; };
static const struct pdc_params_data_mpdzibepd_N95_utilidades_N95_texto_p8 pdc_params = { .base = { .num_params = 1, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{3}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 197:44 >> 197:47 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 197:44 >> 197:47 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_obtener_local(ctx, m, 3));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 197:44 >> 197:47 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 198:20 >> 198:23 */
pdcrt_fijar_local(ctx, m, 4, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 198:38 >> 198:42 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 1)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 198:44 >> 198:47 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_obtener_local(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 198:38 >> 198:47 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 6);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k105, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_f9(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 194:0 >> 201:10 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd|194:0|201:10";
PDCRT_ALOJAR_MARCO(ctx, 8, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_utilidades_N95_texto_p9 { const pdcrt_params_base base; const pdcrt_param_data params[2]; };
static const struct pdc_params_data_mpdzibepd_N95_utilidades_N95_texto_p9 pdc_params = { .base = { .num_params = 2, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{4}, {5}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 194:28 >> 194:32 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 194:28 >> 194:32 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 6));
pdcrt_fijar_local(ctx, m, 2, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 194:28 >> 194:32 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 194:28 >> 194:32 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 2), pdcrt_obtener_local(ctx, m, 5));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 194:28 >> 194:32 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 194:21 >> 194:26 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 194:21 >> 194:26 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_obtener_local(ctx, m, 4));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 194:21 >> 194:26 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 195:13 >> 195:16 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 195:13 >> 195:16 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 4));
pdcrt_fijar_local(ctx, m, 3, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 195:13 >> 195:16 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 196:16 >> 196:18 */
pdcrt_fijar_local(ctx, m, 4, PDCRT_OBTENER_CONSTANTE(ctx, m, 9));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 196:10 >> 196:13 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 3), pdcrt_obtener_local(ctx, m, 4));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 196:10 >> 196:13 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 197:4 >> 197:20 */
pdcrt_fijar_local(ctx, m, 5, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 197:22 >> 197:27 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_obtener_local(ctx, m, 1));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 197:29 >> 197:42 */
do {
static const pdcrt_captura caps[] = {{3}, {2}};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzibepd_N95_utilidades_N95_texto_f8, caps, 2);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 7, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 197:4 >> 197:21 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 6);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k107, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_f10(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 208:0 >> 216:10 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd|208:0|216:10";
PDCRT_ALOJAR_MARCO(ctx, 5, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_utilidades_N95_texto_p10 { const pdcrt_params_base base; const pdcrt_param_data params[2]; };
static const struct pdc_params_data_mpdzibepd_N95_utilidades_N95_texto_p10 pdc_params = { .base = { .num_params = 2, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{2}, {3}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 208:26 >> 208:27 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 208:26 >> 208:27 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_obtener_local(ctx, m, 3));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 208:26 >> 208:27 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 208:23 >> 208:24 */
pdcrt_fijar_local_nb(ctx, m, 0, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 208:23 >> 208:24 */
pdcrt_fijar_local_nb(ctx, m, 0, pdcrt_obtener_local(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 208:23 >> 208:24 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 214:17 >> 214:18 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_obtener_local(ctx, m, 0));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 214:21 >> 214:22 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_obtener_local(ctx, m, 1));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 214:17 >> 214:22 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 16);
return pdcrt_llamar1(ctx, m->k.marco, m->k.kf, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 3)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 214:17 >> 214:22 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 214:17 >> 214:22 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 208:0 >> 216:10 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 208:0 >> 216:10 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 3)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 208:0 >> 216:10 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_f11(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 221:0 >> 226:10 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd|221:0|226:10";
PDCRT_ALOJAR_MARCO(ctx, 8, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_utilidades_N95_texto_p11 { const pdcrt_params_base base; const pdcrt_param_data params[2]; };
static const struct pdc_params_data_mpdzibepd_N95_utilidades_N95_texto_p11 pdc_params = { .base = { .num_params = 2, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{2}, {3}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 221:26 >> 221:33 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 221:26 >> 221:33 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_obtener_local(ctx, m, 3));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 221:26 >> 221:33 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 221:19 >> 221:24 */
pdcrt_fijar_local_nb(ctx, m, 0, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 221:19 >> 221:24 */
pdcrt_fijar_local_nb(ctx, m, 0, pdcrt_obtener_local(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 221:19 >> 221:24 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 222:7 >> 222:12 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_obtener_local(ctx, m, 0));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 222:12 >> 222:13 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 12);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k108, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_f12(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 231:0 >> 236:10 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd|231:0|236:10";
PDCRT_ALOJAR_MARCO(ctx, 9, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_utilidades_N95_texto_p12 { const pdcrt_params_base base; const pdcrt_param_data params[2]; };
static const struct pdc_params_data_mpdzibepd_N95_utilidades_N95_texto_p12 pdc_params = { .base = { .num_params = 2, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{2}, {3}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 231:25 >> 231:31 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 231:25 >> 231:31 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_obtener_local(ctx, m, 3));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 231:25 >> 231:31 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 231:18 >> 231:23 */
pdcrt_fijar_local_nb(ctx, m, 0, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 231:18 >> 231:23 */
pdcrt_fijar_local_nb(ctx, m, 0, pdcrt_obtener_local(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 231:18 >> 231:23 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 232:7 >> 232:12 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_obtener_local(ctx, m, 0));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 232:12 >> 232:13 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 12);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k118, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_f13(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 256:0 >> 261:10 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd|256:0|261:10";
PDCRT_ALOJAR_MARCO(ctx, 6, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_utilidades_N95_texto_p13 { const pdcrt_params_base base; const pdcrt_param_data params[3]; };
static const struct pdc_params_data_mpdzibepd_N95_utilidades_N95_texto_p13 pdc_params = { .base = { .num_params = 3, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{3}, {4}, {5}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 256:45 >> 256:53 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 256:45 >> 256:53 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_obtener_local(ctx, m, 5));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 256:45 >> 256:53 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 256:36 >> 256:43 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 256:36 >> 256:43 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_obtener_local(ctx, m, 4));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 256:36 >> 256:43 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 256:29 >> 256:34 */
pdcrt_fijar_local_nb(ctx, m, 0, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 256:29 >> 256:34 */
pdcrt_fijar_local_nb(ctx, m, 0, pdcrt_obtener_local(ctx, m, 3));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 256:29 >> 256:34 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 10:4 >> 10:48 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k131, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_f14(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 281:0 >> 286:10 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd|281:0|286:10";
PDCRT_ALOJAR_MARCO(ctx, 6, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_utilidades_N95_texto_p14 { const pdcrt_params_base base; const pdcrt_param_data params[3]; };
static const struct pdc_params_data_mpdzibepd_N95_utilidades_N95_texto_p14 pdc_params = { .base = { .num_params = 3, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{3}, {4}, {5}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 281:43 >> 281:51 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 281:43 >> 281:51 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_obtener_local(ctx, m, 5));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 281:43 >> 281:51 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 281:34 >> 281:41 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 281:34 >> 281:41 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_obtener_local(ctx, m, 4));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 281:34 >> 281:41 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 281:27 >> 281:32 */
pdcrt_fijar_local_nb(ctx, m, 0, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 281:27 >> 281:32 */
pdcrt_fijar_local_nb(ctx, m, 0, pdcrt_obtener_local(ctx, m, 3));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 281:27 >> 281:32 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 10:32 >> 10:33 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k138, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_f15(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 293:0 >> 295:9 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd|293:0|295:9";
PDCRT_ALOJAR_MARCO(ctx, 6, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_utilidades_N95_texto_p15 { const pdcrt_params_base base; const pdcrt_param_data params[1]; };
static const struct pdc_params_data_mpdzibepd_N95_utilidades_N95_texto_p15 pdc_params = { .base = { .num_params = 1, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{1}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 293:0 >> 295:9 */
pdcrt_fijar_local_nb(ctx, m, 0, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 293:0 >> 295:9 */
pdcrt_fijar_local_nb(ctx, m, 0, pdcrt_obtener_local(ctx, m, 1));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 293:0 >> 295:9 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 294:13 >> 294:34 */
pdcrt_fijar_local(ctx, m, 2, PDCRT_OBTENER_CONSTANTE(ctx, m, 27));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 294:46 >> 294:48 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_obtener_local(ctx, m, 0));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 294:48 >> 294:49 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 23);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k149, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_f16(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 298:0 >> 309:10 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd|298:0|309:10";
PDCRT_ALOJAR_MARCO(ctx, 13, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_utilidades_N95_texto_p16 { const pdcrt_params_base base; const pdcrt_param_data params[2]; };
static const struct pdc_params_data_mpdzibepd_N95_utilidades_N95_texto_p16 pdc_params = { .base = { .num_params = 2, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{6}, {7}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 298:28 >> 298:33 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 298:28 >> 298:33 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_obtener_local(ctx, m, 7));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 298:28 >> 298:33 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 298:21 >> 298:26 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 298:21 >> 298:26 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_obtener_local(ctx, m, 6));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 298:21 >> 298:26 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 299:14 >> 299:15 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 299:17 >> 299:22 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 300:14 >> 300:19 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_obtener_local(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 300:28 >> 300:29 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_entero(PDCRT_ENTERO_C(0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 300:31 >> 300:36 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_obtener_local(ctx, m, 3));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 300:19 >> 300:20 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 0);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k152, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_f17(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 312:0 >> 324:10 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd|312:0|324:10";
PDCRT_ALOJAR_MARCO(ctx, 13, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_utilidades_N95_texto_p17 { const pdcrt_params_base base; const pdcrt_param_data params[2]; };
static const struct pdc_params_data_mpdzibepd_N95_utilidades_N95_texto_p17 pdc_params = { .base = { .num_params = 2, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{6}, {7}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 312:28 >> 312:33 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 312:28 >> 312:33 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_obtener_local(ctx, m, 7));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 312:28 >> 312:33 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 312:21 >> 312:26 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 312:21 >> 312:26 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_obtener_local(ctx, m, 6));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 312:21 >> 312:26 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 313:14 >> 313:15 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 313:17 >> 313:22 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 314:18 >> 314:23 */
pdcrt_fijar_local(ctx, m, 7, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 314:23 >> 314:24 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 30);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k166, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_f18(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd|1:0|324:10";
PDCRT_ALOJAR_MARCO(ctx, 136, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_utilidades_N95_texto_p18 { const pdcrt_params_base base; const pdcrt_param_data params[1]; };
static const struct pdc_params_data_mpdzibepd_N95_utilidades_N95_texto_p18 pdc_params = { .base = { .num_params = 0, .tiene_variadic = false, .idc_variadic = 0, }, .params = {} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
PDCRT_DEFINE_RAICES(2);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_arreglo *constantes = pdcrt_crear_arreglo_vacio(ctx, PDCRT_GC(), 33LLU);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
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
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "p", 1));
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
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "unir", 4));
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
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "Corte", 5));
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
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "antes", 5));
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
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "después", 8));
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
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "(Corte [~t] | [~t])", 19));
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
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "fijar_antes", 11));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "fijar_después", 14));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
PDCRT_FIJAR_CONSTANTES(ctx, m, constantes);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 65, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 67, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 69, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 71, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 73, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 75, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 77, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 79, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 81, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 83, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 85, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 87, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 89, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 91, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 93, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 95, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 97, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 99, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 101, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 103, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 105, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 107, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 109, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 111, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 113, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 115, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 114, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 112, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 110, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 108, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 106, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 104, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 102, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 100, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 98, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 96, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 94, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 92, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 90, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 88, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 86, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 84, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 82, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 80, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 78, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 76, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 74, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 72, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 70, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 68, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 66, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 64, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 9:8 >> 9:21 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 9:8 >> 9:21 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 116, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 9:8 >> 9:21 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 32:8 >> 32:15 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 32:8 >> 32:15 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 117, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 32:8 >> 32:15 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 92:8 >> 92:14 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 103:8 >> 103:22 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 112:8 >> 112:24 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 112:8 >> 112:24 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 120, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 112:8 >> 112:24 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 138:8 >> 138:12 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 138:8 >> 138:12 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 121, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 138:8 >> 138:12 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 177:8 >> 177:20 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 194:8 >> 194:19 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 208:8 >> 208:21 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 208:8 >> 208:21 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 124, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 208:8 >> 208:21 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 221:8 >> 221:17 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 221:8 >> 221:17 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 125, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 221:8 >> 221:17 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 231:8 >> 231:16 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 231:8 >> 231:16 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 126, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 231:8 >> 231:16 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 256:8 >> 256:27 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 256:8 >> 256:27 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 127, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 256:8 >> 256:27 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 281:8 >> 281:25 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 281:8 >> 281:25 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 128, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 281:8 >> 281:25 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 289:6 >> 289:11 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 289:6 >> 289:11 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 129, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 289:6 >> 289:11 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 298:8 >> 298:19 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 298:8 >> 298:19 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 130, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 298:8 >> 298:19 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 312:8 >> 312:19 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 312:8 >> 312:19 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 132));
pdcrt_fijar_local(ctx, m, 131, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 312:8 >> 312:19 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
return pdcrt_importar(ctx, m, "pdzibepd_N95_builtinsImpl", 25, pdc_mpdzibepd_N95_utilidades_N95_texto_k0);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k0(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 132, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "ParaCadaElemento", 16, pdc_mpdzibepd_N95_utilidades_N95_texto_k1);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k1(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 64), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "Todos", 5, pdc_mpdzibepd_N95_utilidades_N95_texto_k2);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k2(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k2);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 65), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "Contiene", 8, pdc_mpdzibepd_N95_utilidades_N95_texto_k3);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k3(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k3);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 66), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "EsImpar", 7, pdc_mpdzibepd_N95_utilidades_N95_texto_k4);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k4(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k4);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 67), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "Escribir", 8, pdc_mpdzibepd_N95_utilidades_N95_texto_k5);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k5(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k5);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 68), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "Reducir", 7, pdc_mpdzibepd_N95_utilidades_N95_texto_k6);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k6(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k6);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 69), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "Filtrar", 7, pdc_mpdzibepd_N95_utilidades_N95_texto_k7);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k7(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k7);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 70), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "DígitoAEntero", 14, pdc_mpdzibepd_N95_utilidades_N95_texto_k8);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k8(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k8);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 71), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "ConvertirAEntero", 16, pdc_mpdzibepd_N95_utilidades_N95_texto_k9);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k9(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k9);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 72), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "EsNúmeroEntero", 15, pdc_mpdzibepd_N95_utilidades_N95_texto_k10);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k10(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k10);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 73), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "Concatenar", 10, pdc_mpdzibepd_N95_utilidades_N95_texto_k11);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k11(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k11);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 74), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "Aplicar\'", 8, pdc_mpdzibepd_N95_utilidades_N95_texto_k12);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k12(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k12);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 75), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "EnviarMensaje", 13, pdc_mpdzibepd_N95_utilidades_N95_texto_k13);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k13(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k13);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 76), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "Abs", 3, pdc_mpdzibepd_N95_utilidades_N95_texto_k14);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k14(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k14);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 77), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "EsPar", 5, pdc_mpdzibepd_N95_utilidades_N95_texto_k15);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k15(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k15);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 78), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "AplanarTodo", 11, pdc_mpdzibepd_N95_utilidades_N95_texto_k16);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k16(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k16);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 79), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "PrimerElemento", 14, pdc_mpdzibepd_N95_utilidades_N95_texto_k17);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k17(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k17);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 80), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "ÚnicoElemento", 14, pdc_mpdzibepd_N95_utilidades_N95_texto_k18);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k18(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k18);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 81), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "Max", 3, pdc_mpdzibepd_N95_utilidades_N95_texto_k19);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k19(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k19);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 82), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "NoImplementado", 14, pdc_mpdzibepd_N95_utilidades_N95_texto_k20);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k20(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k20);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 83), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "Inalcanzable", 12, pdc_mpdzibepd_N95_utilidades_N95_texto_k21);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k21(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k21);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 84), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "ArregloSinElementoEnÍndice", 27, pdc_mpdzibepd_N95_utilidades_N95_texto_k22);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k22(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k22);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 85), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "LeerNúmero", 11, pdc_mpdzibepd_N95_utilidades_N95_texto_k23);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k23(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k23);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 86), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "MétodoComoFunción", 19, pdc_mpdzibepd_N95_utilidades_N95_texto_k24);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k24(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k24);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 87), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "ContienePredicado", 17, pdc_mpdzibepd_N95_utilidades_N95_texto_k25);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k25(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k25);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 88), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "ParaCadaElementoEnReversa", 25, pdc_mpdzibepd_N95_utilidades_N95_texto_k26);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k26(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k26);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 89), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "BuscarPredicado", 15, pdc_mpdzibepd_N95_utilidades_N95_texto_k27);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k27(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k27);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 90), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "OperadorBinario", 15, pdc_mpdzibepd_N95_utilidades_N95_texto_k28);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k28(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k28);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 91), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "Parcial", 7, pdc_mpdzibepd_N95_utilidades_N95_texto_k29);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k29(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k29);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 92), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "LeerLínea", 10, pdc_mpdzibepd_N95_utilidades_N95_texto_k30);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k30(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k30);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 93), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "LlamarConEC", 11, pdc_mpdzibepd_N95_utilidades_N95_texto_k31);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k31(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k31);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 94), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "MétodoAbstracto", 16, pdc_mpdzibepd_N95_utilidades_N95_texto_k32);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k32(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k32);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 95), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "Min", 3, pdc_mpdzibepd_N95_utilidades_N95_texto_k33);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k33(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k33);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 96), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "EsNulo", 6, pdc_mpdzibepd_N95_utilidades_N95_texto_k34);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k34(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k34);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 97), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "ÚltimoElemento", 15, pdc_mpdzibepd_N95_utilidades_N95_texto_k35);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k35(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k35);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 98), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "PedazoDeArreglo", 15, pdc_mpdzibepd_N95_utilidades_N95_texto_k36);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k36(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k36);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 99), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "Aplanar", 7, pdc_mpdzibepd_N95_utilidades_N95_texto_k37);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k37(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k37);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 100), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "Mod", 3, pdc_mpdzibepd_N95_utilidades_N95_texto_k38);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k38(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k38);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 101), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "Resto", 5, pdc_mpdzibepd_N95_utilidades_N95_texto_k39);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k39(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k39);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 102), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "Aplicar\'i", 9, pdc_mpdzibepd_N95_utilidades_N95_texto_k40);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k40(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k40);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 103), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "ArregloConFinal", 15, pdc_mpdzibepd_N95_utilidades_N95_texto_k41);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k41(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k41);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 104), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "EsNúmero", 9, pdc_mpdzibepd_N95_utilidades_N95_texto_k42);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k42(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k42);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 105), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "ConvertirANúmero", 17, pdc_mpdzibepd_N95_utilidades_N95_texto_k43);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k43(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k43);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 106), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "Elevar", 6, pdc_mpdzibepd_N95_utilidades_N95_texto_k44);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k44(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k44);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 107), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "Algún", 6, pdc_mpdzibepd_N95_utilidades_N95_texto_k45);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k45(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k45);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "Mapear", 6, pdc_mpdzibepd_N95_utilidades_N95_texto_k46);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k46(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k46);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 109), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "Identidad", 9, pdc_mpdzibepd_N95_utilidades_N95_texto_k47);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k47(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k47);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 110), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "ParaCadaNúmeroConPaso", 22, pdc_mpdzibepd_N95_utilidades_N95_texto_k48);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k48(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k48);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 111), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "EsInstancia", 11, pdc_mpdzibepd_N95_utilidades_N95_texto_k49);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k49(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k49);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 112), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "EsSubclase", 10, pdc_mpdzibepd_N95_utilidades_N95_texto_k50);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k50(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k50);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 113), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "ParaCadaElementoConÍndice", 26, pdc_mpdzibepd_N95_utilidades_N95_texto_k51);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k51(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k51);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 114), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 132), "ParaCadaNúmero", 15, pdc_mpdzibepd_N95_utilidades_N95_texto_k52);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k52(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k52);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 115), pdcrt_obtener_local(ctx, m, 133));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 9:0 >> 11:10 */
do {
static const pdcrt_captura caps[] = {};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzibepd_N95_utilidades_N95_texto_f0, caps, 0);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 132, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 9:8 >> 9:21 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 116), pdcrt_obtener_local(ctx, m, 132));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 9:8 >> 9:21 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 32:0 >> 66:10 */
do {
static const pdcrt_captura caps[] = {{116}, {0}, {1}, {2}};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzibepd_N95_utilidades_N95_texto_f2, caps, 4);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 132, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 32:8 >> 32:15 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 117), pdcrt_obtener_local(ctx, m, 132));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 32:8 >> 32:15 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 92:0 >> 94:10 */
do {
static const pdcrt_captura caps[] = {{117}};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzibepd_N95_utilidades_N95_texto_f3, caps, 1);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 132, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 92:8 >> 92:14 */
pdcrt_fijar_local_nb(ctx, m, 118, pdcrt_obtener_local(ctx, m, 132));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 92:8 >> 92:14 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 103:0 >> 105:10 */
do {
static const pdcrt_captura caps[] = {{117}};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzibepd_N95_utilidades_N95_texto_f4, caps, 1);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 132, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 103:8 >> 103:22 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_obtener_local(ctx, m, 132));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 103:8 >> 103:22 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 112:0 >> 114:10 */
do {
static const pdcrt_captura caps[] = {{117}};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzibepd_N95_utilidades_N95_texto_f5, caps, 1);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 132, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 112:8 >> 112:24 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 120), pdcrt_obtener_local(ctx, m, 132));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 112:8 >> 112:24 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 138:0 >> 169:10 */
do {
static const pdcrt_captura caps[] = {};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzibepd_N95_utilidades_N95_texto_f6, caps, 0);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 132, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 138:8 >> 138:12 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 121), pdcrt_obtener_local(ctx, m, 132));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 138:8 >> 138:12 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 177:0 >> 186:10 */
do {
static const pdcrt_captura caps[] = {};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzibepd_N95_utilidades_N95_texto_f7, caps, 0);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 132, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 177:8 >> 177:20 */
pdcrt_fijar_local_nb(ctx, m, 122, pdcrt_obtener_local(ctx, m, 132));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 177:8 >> 177:20 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 194:0 >> 201:10 */
do {
static const pdcrt_captura caps[] = {{64}};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzibepd_N95_utilidades_N95_texto_f9, caps, 1);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 132, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 194:8 >> 194:19 */
pdcrt_fijar_local_nb(ctx, m, 123, pdcrt_obtener_local(ctx, m, 132));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 194:8 >> 194:19 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 208:0 >> 216:10 */
do {
static const pdcrt_captura caps[] = {};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzibepd_N95_utilidades_N95_texto_f10, caps, 0);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 132, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 208:8 >> 208:21 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 124), pdcrt_obtener_local(ctx, m, 132));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 208:8 >> 208:21 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 221:0 >> 226:10 */
do {
static const pdcrt_captura caps[] = {};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzibepd_N95_utilidades_N95_texto_f11, caps, 0);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 132, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 221:8 >> 221:17 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 125), pdcrt_obtener_local(ctx, m, 132));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 221:8 >> 221:17 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 231:0 >> 236:10 */
do {
static const pdcrt_captura caps[] = {};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzibepd_N95_utilidades_N95_texto_f12, caps, 0);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 132, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 231:8 >> 231:16 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 126), pdcrt_obtener_local(ctx, m, 132));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 231:8 >> 231:16 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 256:0 >> 261:10 */
do {
static const pdcrt_captura caps[] = {};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzibepd_N95_utilidades_N95_texto_f13, caps, 0);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 132, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 256:8 >> 256:27 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 127), pdcrt_obtener_local(ctx, m, 132));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 256:8 >> 256:27 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 281:0 >> 286:10 */
do {
static const pdcrt_captura caps[] = {};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzibepd_N95_utilidades_N95_texto_f14, caps, 0);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 132, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 281:8 >> 281:25 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 128), pdcrt_obtener_local(ctx, m, 132));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 281:8 >> 281:25 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 289:0 >> 289:5 */
pdcrt_fijar_local(ctx, m, 133, ctx->clase_objeto);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 289:0 >> 289:5 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 20);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k145, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 133)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k53(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k53);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 10:23 >> 10:24 */
pdcrt_fijar_local(ctx, m, 4, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 10:23 >> 10:24 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 10:23 >> 10:24 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 10:23 >> 10:24 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 10:44 >> 10:48 */
pdcrt_fijar_local(ctx, m, 6, ctx->espacio_de_nombres_runtime);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 10:44 >> 10:48 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 1);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k54, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k54(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k54);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 10:44 >> 10:48 */
pdcrt_fijar_local(ctx, m, 5, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 10:44 >> 10:48 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 10:23 >> 10:48 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 2);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k55, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k55(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k55);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 10:23 >> 10:48 */
pdcrt_fijar_local(ctx, m, 3, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 10:23 >> 10:48 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 10:23 >> 10:48 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 10:13 >> 10:48 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 3);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 10:13 >> 10:48 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 10:4 >> 10:48 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 2)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 10:4 >> 10:48 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 9:0 >> 11:10 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 9:0 >> 11:10 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 2)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 9:0 >> 11:10 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k56(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k56);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 35:19 >> 35:26 */
pdcrt_fijar_local(ctx, m, 16, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 35:19 >> 35:26 */
pdcrt_fijar_local_nb(ctx, m, 17, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 35:26 >> 35:27 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 4);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k57, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 16)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k57(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k57);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 35:26 >> 35:27 */
pdcrt_fijar_local(ctx, m, 15, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 35:26 >> 35:27 */
pdcrt_fijar_local_nb(ctx, m, 16, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 35:10 >> 35:16 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 8), pdcrt_obtener_local(ctx, m, 15));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 35:10 >> 35:16 */
pdcrt_fijar_local_nb(ctx, m, 15, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 36:20 >> 36:21 */
pdcrt_fijar_local_nb(ctx, m, 15, pdcrt_objeto_entero(PDCRT_ENTERO_C(0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 36:10 >> 36:17 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_obtener_local(ctx, m, 15));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 36:10 >> 36:17 */
pdcrt_fijar_local_nb(ctx, m, 15, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 37:29 >> 37:34 */
pdcrt_fijar_local_nb(ctx, m, 16, pdcrt_obtener_local(ctx, m, 4));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 37:43 >> 37:44 */
pdcrt_fijar_local_nb(ctx, m, 17, pdcrt_objeto_entero(PDCRT_ENTERO_C(0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 37:46 >> 37:55 */
pdcrt_fijar_local_nb(ctx, m, 18, pdcrt_obtener_local(ctx, m, 5));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 37:34 >> 37:35 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 0);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k58, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 16)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 17)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 18)));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k58(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k58);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 37:34 >> 37:35 */
pdcrt_fijar_local(ctx, m, 15, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 37:34 >> 37:35 */
pdcrt_fijar_local_nb(ctx, m, 18, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 37:34 >> 37:35 */
pdcrt_fijar_local_nb(ctx, m, 17, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 37:34 >> 37:35 */
pdcrt_fijar_local_nb(ctx, m, 16, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 37:10 >> 37:26 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_obtener_local(ctx, m, 15));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 37:10 >> 37:26 */
pdcrt_fijar_local_nb(ctx, m, 15, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 38:21 >> 38:34 */
pdcrt_fijar_local(ctx, m, 16, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 38:36 >> 38:44 */
pdcrt_fijar_local_nb(ctx, m, 17, pdcrt_obtener_local(ctx, m, 6));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 38:46 >> 38:49 */
pdcrt_fijar_local(ctx, m, 18, PDCRT_OBTENER_CONSTANTE(ctx, m, 5));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 38:21 >> 38:35 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 6);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k59, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 16)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 17)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 18)));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k59(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k59);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 38:21 >> 38:35 */
pdcrt_fijar_local(ctx, m, 15, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 38:21 >> 38:35 */
pdcrt_fijar_local_nb(ctx, m, 18, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 38:21 >> 38:35 */
pdcrt_fijar_local_nb(ctx, m, 17, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 38:21 >> 38:35 */
pdcrt_fijar_local_nb(ctx, m, 16, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 38:10 >> 38:18 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 10), pdcrt_obtener_local(ctx, m, 15));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 38:10 >> 38:18 */
pdcrt_fijar_local_nb(ctx, m, 15, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 39:23 >> 39:36 */
pdcrt_fijar_local(ctx, m, 16, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 39:38 >> 39:46 */
pdcrt_fijar_local_nb(ctx, m, 17, pdcrt_obtener_local(ctx, m, 6));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 39:48 >> 39:51 */
pdcrt_fijar_local(ctx, m, 18, PDCRT_OBTENER_CONSTANTE(ctx, m, 7));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 39:23 >> 39:37 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 6);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k60, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 16)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 17)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 18)));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k60(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k60);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 39:23 >> 39:37 */
pdcrt_fijar_local(ctx, m, 15, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 39:23 >> 39:37 */
pdcrt_fijar_local_nb(ctx, m, 18, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 39:23 >> 39:37 */
pdcrt_fijar_local_nb(ctx, m, 17, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 39:23 >> 39:37 */
pdcrt_fijar_local_nb(ctx, m, 16, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 39:10 >> 39:20 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 11), pdcrt_obtener_local(ctx, m, 15));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 39:10 >> 39:20 */
pdcrt_fijar_local_nb(ctx, m, 15, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 41:18 >> 41:26 */
pdcrt_fijar_local(ctx, m, 17, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 10)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 41:30 >> 41:40 */
pdcrt_fijar_local(ctx, m, 18, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 11)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 41:18 >> 41:40 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 8);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k61, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 17)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 18)));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k61(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k61);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 41:18 >> 41:40 */
pdcrt_fijar_local(ctx, m, 16, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 41:18 >> 41:40 */
pdcrt_fijar_local_nb(ctx, m, 18, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 41:18 >> 41:40 */
pdcrt_fijar_local_nb(ctx, m, 17, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 41:14 >> 41:40 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 16);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 15, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 41:14 >> 41:40 */
pdcrt_fijar_local_nb(ctx, m, 16, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 41:4 >> 41:40 */
pdcrt_assert(ctx, pdcrt_obtener_local(ctx, m, 15));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 41:4 >> 41:40 */
pdcrt_fijar_local_nb(ctx, m, 15, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 43:4 >> 53:20 */
do {
static const pdcrt_captura caps[] = {{8}, {13}, {11}, {10}};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzibepd_N95_utilidades_N95_texto_f1, caps, 4);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 15, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 43:18 >> 43:30 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 14), pdcrt_obtener_local(ctx, m, 15));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 43:18 >> 43:30 */
pdcrt_fijar_local_nb(ctx, m, 15, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k84, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k62(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k62);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 44:28 >> 44:38 */
pdcrt_fijar_local(ctx, m, 9, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 44:28 >> 44:38 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 44:28 >> 44:38 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 44:44 >> 44:57 */
pdcrt_fijar_local(ctx, m, 11, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 1)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 44:60 >> 44:65 */
pdcrt_fijar_local_nb(ctx, m, 12, pdcrt_obtener_local(ctx, m, 4));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 44:44 >> 44:65 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 2);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k63, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 11)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 12)));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k63(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k63);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 44:44 >> 44:65 */
pdcrt_fijar_local(ctx, m, 10, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 44:44 >> 44:65 */
pdcrt_fijar_local_nb(ctx, m, 12, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 44:44 >> 44:65 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 44:28 >> 44:65 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 8);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k64, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k64(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k64);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 44:28 >> 44:65 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 44:28 >> 44:65 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 44:28 >> 44:65 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 44:23 >> 44:65 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 8);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 44:23 >> 44:65 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 44:11 >> 44:65 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 8);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k65, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k65(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k65);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 44:11 >> 44:65 */
pdcrt_fijar_local(ctx, m, 5, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 44:11 >> 44:65 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 44:11 >> 44:65 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 44:8 >> 46:13 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 5);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 44:8 >> 46:13 */
pdcrt_obj csaltar_obj = pdcrt_obtener_local(ctx, m, 6);
if(csaltar_obj.recv != &pdcrt_recv_booleano) pdcrt_error(ctx, "Se esperaba un objeto de tipo Boole");
if(csaltar_obj.bval)
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k69, PDCRT_XMM_NULO());
else
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k66, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k66(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k66);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 44:8 >> 46:13 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 44:8 >> 46:13 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 45:12 >> 45:18 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 45:35 >> 45:40 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_obtener_local(ctx, m, 4));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 45:18 >> 45:19 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 10);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k67, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k67(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k67);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 45:18 >> 45:19 */
pdcrt_fijar_local(ctx, m, 5, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 45:18 >> 45:19 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 45:18 >> 45:19 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 45:18 >> 45:19 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 44:8 >> 46:13 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k70, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k68(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k68);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k69, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k69(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k69);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k70, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k70(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k70);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 47:11 >> 47:21 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 2)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 47:29 >> 47:34 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_obtener_local(ctx, m, 4));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 47:37 >> 47:39 */
pdcrt_fijar_local(ctx, m, 10, PDCRT_OBTENER_CONSTANTE(ctx, m, 9));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 47:29 >> 47:39 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 2);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k71, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k71(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k71);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 47:29 >> 47:39 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 47:29 >> 47:39 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 47:29 >> 47:39 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 47:25 >> 47:39 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 8);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 47:25 >> 47:39 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 47:11 >> 47:39 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 8);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k72, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k72(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k72);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 47:11 >> 47:39 */
pdcrt_fijar_local(ctx, m, 5, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 47:11 >> 47:39 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 47:11 >> 47:39 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 47:8 >> 49:13 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 5);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 47:8 >> 49:13 */
pdcrt_obj csaltar_obj = pdcrt_obtener_local(ctx, m, 6);
if(csaltar_obj.recv != &pdcrt_recv_booleano) pdcrt_error(ctx, "Se esperaba un objeto de tipo Boole");
if(csaltar_obj.bval)
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k76, PDCRT_XMM_NULO());
else
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k73, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k73(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k73);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 47:8 >> 49:13 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 47:8 >> 49:13 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 48:12 >> 48:18 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 48:35 >> 48:40 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_obtener_local(ctx, m, 4));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 48:18 >> 48:19 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 10);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k74, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k74(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k74);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 48:18 >> 48:19 */
pdcrt_fijar_local(ctx, m, 5, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 48:18 >> 48:19 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 48:18 >> 48:19 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 48:18 >> 48:19 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 47:8 >> 49:13 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k77, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k75(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k75);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k76, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k76(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k76);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k77, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k77(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k77);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 50:15 >> 50:25 */
pdcrt_fijar_local(ctx, m, 7, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 2)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 50:12 >> 50:25 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 7);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 50:12 >> 50:25 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 50:34 >> 50:42 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 3)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 50:31 >> 50:42 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 8);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 50:31 >> 50:42 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 50:12 >> 50:42 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 8);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k78, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k78(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k78);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 50:12 >> 50:42 */
pdcrt_fijar_local(ctx, m, 5, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 50:12 >> 50:42 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 50:12 >> 50:42 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 50:8 >> 52:13 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 5);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 50:8 >> 52:13 */
pdcrt_obj csaltar_obj = pdcrt_obtener_local(ctx, m, 6);
if(csaltar_obj.recv != &pdcrt_recv_booleano) pdcrt_error(ctx, "Se esperaba un objeto de tipo Boole");
if(csaltar_obj.bval)
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k82, PDCRT_XMM_NULO());
else
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k79, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k79(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k79);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 50:8 >> 52:13 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 50:8 >> 52:13 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 51:12 >> 51:18 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 51:35 >> 51:40 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_obtener_local(ctx, m, 4));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 51:18 >> 51:19 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 10);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k80, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k80(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k80);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 51:18 >> 51:19 */
pdcrt_fijar_local(ctx, m, 5, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 51:18 >> 51:19 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 51:18 >> 51:19 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 51:18 >> 51:19 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 50:8 >> 52:13 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k83, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k81(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k81);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k82, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k82(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k82);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k83, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k83(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k83);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 43:4 >> 53:20 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 43:4 >> 53:20 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 43:4 >> 53:20 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k84(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k84);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 55:17 >> 55:33 */
pdcrt_fijar_local_nb(ctx, m, 17, pdcrt_obtener_local(ctx, m, 7));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 55:36 >> 55:40 */
pdcrt_fijar_local(ctx, m, 19, ctx->espacio_de_nombres_runtime);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 55:36 >> 55:40 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 1);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k85, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 19)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k85(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k85);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 55:36 >> 55:40 */
pdcrt_fijar_local(ctx, m, 18, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 55:36 >> 55:40 */
pdcrt_fijar_local_nb(ctx, m, 19, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 55:17 >> 55:40 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 2);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k86, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 17)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 18)));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k86(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k86);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 55:17 >> 55:40 */
pdcrt_fijar_local(ctx, m, 16, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 55:17 >> 55:40 */
pdcrt_fijar_local_nb(ctx, m, 18, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 55:17 >> 55:40 */
pdcrt_fijar_local_nb(ctx, m, 17, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 55:13 >> 55:40 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 16);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 15, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 55:13 >> 55:40 */
pdcrt_fijar_local_nb(ctx, m, 16, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 55:4 >> 61:15 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 15);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 16, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 55:4 >> 61:15 */
pdcrt_obj csaltar_obj = pdcrt_obtener_local(ctx, m, 16);
if(csaltar_obj.recv != &pdcrt_recv_booleano) pdcrt_error(ctx, "Se esperaba un objeto de tipo Boole");
if(csaltar_obj.bval)
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k94, PDCRT_XMM_NULO());
else
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k87, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k87(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k87);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 55:4 >> 61:15 */
pdcrt_fijar_local_nb(ctx, m, 16, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 55:4 >> 61:15 */
pdcrt_fijar_local_nb(ctx, m, 15, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 56:22 >> 56:27 */
pdcrt_fijar_local_nb(ctx, m, 16, pdcrt_obtener_local(ctx, m, 4));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 56:43 >> 56:50 */
pdcrt_fijar_local_nb(ctx, m, 17, pdcrt_obtener_local(ctx, m, 9));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 56:52 >> 56:68 */
pdcrt_fijar_local_nb(ctx, m, 18, pdcrt_obtener_local(ctx, m, 7));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 56:27 >> 56:28 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 11);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k88, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 16)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 17)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 18)));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k88(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k88);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 56:27 >> 56:28 */
pdcrt_fijar_local(ctx, m, 15, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 56:27 >> 56:28 */
pdcrt_fijar_local_nb(ctx, m, 18, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 56:27 >> 56:28 */
pdcrt_fijar_local_nb(ctx, m, 17, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 56:27 >> 56:28 */
pdcrt_fijar_local_nb(ctx, m, 16, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 56:14 >> 56:19 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 12), pdcrt_obtener_local(ctx, m, 15));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 56:14 >> 56:19 */
pdcrt_fijar_local_nb(ctx, m, 15, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 57:8 >> 57:20 */
pdcrt_fijar_local(ctx, m, 16, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 14)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 57:22 >> 57:27 */
pdcrt_fijar_local(ctx, m, 17, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 12)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 57:8 >> 57:21 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 6);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k89, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 16)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 17)));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k89(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k89);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 57:8 >> 57:21 */
pdcrt_fijar_local(ctx, m, 15, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 57:8 >> 57:21 */
pdcrt_fijar_local_nb(ctx, m, 17, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 57:8 >> 57:21 */
pdcrt_fijar_local_nb(ctx, m, 16, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 56:8 >> 60:39 */
pdcrt_fijar_local_nb(ctx, m, 15, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 58:30 >> 58:35 */
pdcrt_fijar_local(ctx, m, 15, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 12)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 58:14 >> 58:27 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 13), pdcrt_obtener_local(ctx, m, 15));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 58:14 >> 58:27 */
pdcrt_fijar_local_nb(ctx, m, 15, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 59:24 >> 59:40 */
pdcrt_fijar_local_nb(ctx, m, 16, pdcrt_obtener_local(ctx, m, 7));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 59:43 >> 59:52 */
pdcrt_fijar_local_nb(ctx, m, 18, pdcrt_obtener_local(ctx, m, 5));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 59:52 >> 59:53 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 12);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k90, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 18)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k90(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k90);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 59:52 >> 59:53 */
pdcrt_fijar_local(ctx, m, 17, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 59:52 >> 59:53 */
pdcrt_fijar_local_nb(ctx, m, 18, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 59:24 >> 59:53 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 13);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k91, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 16)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 17)));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k91(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k91);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 59:24 >> 59:53 */
pdcrt_fijar_local(ctx, m, 15, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 59:24 >> 59:53 */
pdcrt_fijar_local_nb(ctx, m, 17, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 59:24 >> 59:53 */
pdcrt_fijar_local_nb(ctx, m, 16, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 59:14 >> 59:21 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_obtener_local(ctx, m, 15));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 59:14 >> 59:21 */
pdcrt_fijar_local_nb(ctx, m, 15, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 60:33 >> 60:38 */
pdcrt_fijar_local_nb(ctx, m, 16, pdcrt_obtener_local(ctx, m, 4));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 60:47 >> 60:54 */
pdcrt_fijar_local_nb(ctx, m, 17, pdcrt_obtener_local(ctx, m, 9));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 60:56 >> 60:65 */
pdcrt_fijar_local_nb(ctx, m, 18, pdcrt_obtener_local(ctx, m, 5));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 60:38 >> 60:39 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 0);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k92, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 16)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 17)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 18)));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k92(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k92);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 60:38 >> 60:39 */
pdcrt_fijar_local(ctx, m, 15, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 60:38 >> 60:39 */
pdcrt_fijar_local_nb(ctx, m, 18, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 60:38 >> 60:39 */
pdcrt_fijar_local_nb(ctx, m, 17, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 60:38 >> 60:39 */
pdcrt_fijar_local_nb(ctx, m, 16, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 60:14 >> 60:30 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_obtener_local(ctx, m, 15));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 60:14 >> 60:30 */
pdcrt_fijar_local_nb(ctx, m, 15, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 55:4 >> 61:15 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k84, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k93(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k93);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k94, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k94(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k94);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 63:4 >> 63:16 */
pdcrt_fijar_local(ctx, m, 16, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 14)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 63:19 >> 63:24 */
pdcrt_fijar_local_nb(ctx, m, 18, pdcrt_obtener_local(ctx, m, 4));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 63:35 >> 63:42 */
pdcrt_fijar_local_nb(ctx, m, 19, pdcrt_obtener_local(ctx, m, 9));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 63:44 >> 63:49 */
pdcrt_fijar_local_nb(ctx, m, 21, pdcrt_obtener_local(ctx, m, 4));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 63:49 >> 63:50 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 12);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k95, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 21)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k95(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k95);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 63:49 >> 63:50 */
pdcrt_fijar_local(ctx, m, 20, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 63:49 >> 63:50 */
pdcrt_fijar_local_nb(ctx, m, 21, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 63:24 >> 63:25 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 14);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k96, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 18)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 19)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 20)));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k96(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k96);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 63:24 >> 63:25 */
pdcrt_fijar_local(ctx, m, 17, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 63:24 >> 63:25 */
pdcrt_fijar_local_nb(ctx, m, 20, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 63:24 >> 63:25 */
pdcrt_fijar_local_nb(ctx, m, 19, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 63:24 >> 63:25 */
pdcrt_fijar_local_nb(ctx, m, 18, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 63:4 >> 63:17 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 6);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k97, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 16)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 17)));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k97(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k97);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 63:4 >> 63:17 */
pdcrt_fijar_local(ctx, m, 15, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 63:4 >> 63:17 */
pdcrt_fijar_local_nb(ctx, m, 17, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 63:4 >> 63:17 */
pdcrt_fijar_local_nb(ctx, m, 16, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 33:4 >> 65:19 */
pdcrt_fijar_local_nb(ctx, m, 15, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 65:13 >> 65:19 */
pdcrt_fijar_local(ctx, m, 15, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 8)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 65:4 >> 65:19 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 15)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 65:4 >> 65:19 */
pdcrt_fijar_local_nb(ctx, m, 15, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 32:0 >> 66:10 */
pdcrt_fijar_local_nb(ctx, m, 15, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 32:0 >> 66:10 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 15)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 32:0 >> 66:10 */
pdcrt_fijar_local_nb(ctx, m, 15, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k98(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k98);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 181:13 >> 181:14 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_obtener_local(ctx, m, 3));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 181:17 >> 181:18 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_obtener_local(ctx, m, 1));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 181:13 >> 181:18 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 16);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k99, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k99(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k99);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 181:13 >> 181:18 */
pdcrt_fijar_local(ctx, m, 4, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 181:13 >> 181:18 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 181:13 >> 181:18 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 181:4 >> 184:15 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 4);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 181:4 >> 184:15 */
pdcrt_obj csaltar_obj = pdcrt_obtener_local(ctx, m, 5);
if(csaltar_obj.recv != &pdcrt_recv_booleano) pdcrt_error(ctx, "Se esperaba un objeto de tipo Boole");
if(csaltar_obj.bval)
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k104, PDCRT_XMM_NULO());
else
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k100, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k100(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k100);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 181:4 >> 184:15 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 181:4 >> 184:15 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 182:18 >> 182:19 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_obtener_local(ctx, m, 3));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 182:22 >> 182:23 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_entero(PDCRT_ENTERO_C(1)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 182:18 >> 182:23 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 13);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k101, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k101(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k101);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 182:18 >> 182:23 */
pdcrt_fijar_local(ctx, m, 4, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 182:18 >> 182:23 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 182:18 >> 182:23 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 182:14 >> 182:15 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_obtener_local(ctx, m, 4));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 182:14 >> 182:15 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 183:20 >> 183:23 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_obtener_local(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 183:36 >> 183:39 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_obtener_local(ctx, m, 0));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 183:23 >> 183:24 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 17);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k102, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k102(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k102);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 183:23 >> 183:24 */
pdcrt_fijar_local(ctx, m, 4, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 183:23 >> 183:24 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 183:23 >> 183:24 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 183:14 >> 183:17 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_obtener_local(ctx, m, 4));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 183:14 >> 183:17 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 181:4 >> 184:15 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k98, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k103(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k103);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k104, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k104(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k104);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 185:13 >> 185:16 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_obtener_local(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 185:4 >> 185:16 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 185:4 >> 185:16 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 177:0 >> 186:10 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 177:0 >> 186:10 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 177:0 >> 186:10 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k105(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k105);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 198:38 >> 198:47 */
pdcrt_fijar_local(ctx, m, 5, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 198:38 >> 198:47 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 198:38 >> 198:47 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 198:23 >> 198:24 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 17);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k106, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k106(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k106);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 198:23 >> 198:24 */
pdcrt_fijar_local(ctx, m, 3, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 198:23 >> 198:24 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 198:23 >> 198:24 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 198:14 >> 198:17 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 0), pdcrt_obtener_local(ctx, m, 3));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 198:14 >> 198:17 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 197:29 >> 197:42 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 197:29 >> 197:42 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 3)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 197:29 >> 197:42 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k107(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k107);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 197:4 >> 197:21 */
pdcrt_fijar_local(ctx, m, 4, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 197:4 >> 197:21 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 197:4 >> 197:21 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 197:4 >> 197:21 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 195:4 >> 200:16 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 200:13 >> 200:16 */
pdcrt_fijar_local(ctx, m, 4, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 3)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 200:4 >> 200:16 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 200:4 >> 200:16 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 194:0 >> 201:10 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 194:0 >> 201:10 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 194:0 >> 201:10 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k108(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k108);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 222:12 >> 222:13 */
pdcrt_fijar_local(ctx, m, 3, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 222:12 >> 222:13 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 222:24 >> 222:31 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_obtener_local(ctx, m, 1));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 222:31 >> 222:32 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 12);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k109, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k109(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k109);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 222:31 >> 222:32 */
pdcrt_fijar_local(ctx, m, 4, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 222:31 >> 222:32 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 222:12 >> 222:32 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 16);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k110, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 3)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k110(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k110);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 222:12 >> 222:32 */
pdcrt_fijar_local(ctx, m, 2, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 222:12 >> 222:32 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 222:12 >> 222:32 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 222:4 >> 224:9 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 2);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 222:4 >> 224:9 */
pdcrt_obj csaltar_obj = pdcrt_obtener_local(ctx, m, 3);
if(csaltar_obj.recv != &pdcrt_recv_booleano) pdcrt_error(ctx, "Se esperaba un objeto de tipo Boole");
if(csaltar_obj.bval)
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k114, PDCRT_XMM_NULO());
else
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k111, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k111(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k111);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 222:4 >> 224:9 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 222:4 >> 224:9 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 223:17 >> 223:22 */
pdcrt_fijar_local(ctx, m, 3, ctx->espacio_de_nombres_runtime);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 223:17 >> 223:22 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 18);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k112, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 3)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k112(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k112);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 223:17 >> 223:22 */
pdcrt_fijar_local(ctx, m, 2, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 223:17 >> 223:22 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 223:8 >> 223:22 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 2)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 223:8 >> 223:22 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 222:4 >> 224:9 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k115, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k113(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k113);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k114, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k114(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k114);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k115, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k115(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k115);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 225:14 >> 225:19 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_obtener_local(ctx, m, 0));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 225:30 >> 225:31 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_entero(PDCRT_ENTERO_C(0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 225:33 >> 225:40 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_obtener_local(ctx, m, 1));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 225:40 >> 225:41 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 12);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k116, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k116(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k116);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 225:40 >> 225:41 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 225:40 >> 225:41 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 225:19 >> 225:20 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 14);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k117, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k117(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k117);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 225:19 >> 225:20 */
pdcrt_fijar_local(ctx, m, 3, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 225:19 >> 225:20 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 225:19 >> 225:20 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 225:19 >> 225:20 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 225:53 >> 225:60 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_obtener_local(ctx, m, 1));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 225:19 >> 225:60 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 2);
return pdcrt_llamar1(ctx, m->k.marco, m->k.kf, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 3)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 225:19 >> 225:60 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 225:19 >> 225:60 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 221:0 >> 226:10 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 221:0 >> 226:10 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 3)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 221:0 >> 226:10 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k118(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k118);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 232:12 >> 232:13 */
pdcrt_fijar_local(ctx, m, 3, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 232:12 >> 232:13 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 232:24 >> 232:30 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_obtener_local(ctx, m, 1));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 232:30 >> 232:31 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 12);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k119, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k119(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k119);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 232:30 >> 232:31 */
pdcrt_fijar_local(ctx, m, 4, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 232:30 >> 232:31 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 232:12 >> 232:31 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 16);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k120, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 3)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k120(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k120);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 232:12 >> 232:31 */
pdcrt_fijar_local(ctx, m, 2, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 232:12 >> 232:31 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 232:12 >> 232:31 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 232:4 >> 234:9 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 2);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 232:4 >> 234:9 */
pdcrt_obj csaltar_obj = pdcrt_obtener_local(ctx, m, 3);
if(csaltar_obj.recv != &pdcrt_recv_booleano) pdcrt_error(ctx, "Se esperaba un objeto de tipo Boole");
if(csaltar_obj.bval)
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k124, PDCRT_XMM_NULO());
else
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k121, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k121(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k121);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 232:4 >> 234:9 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 232:4 >> 234:9 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 233:17 >> 233:22 */
pdcrt_fijar_local(ctx, m, 3, ctx->espacio_de_nombres_runtime);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 233:17 >> 233:22 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 18);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k122, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 3)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k122(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k122);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 233:17 >> 233:22 */
pdcrt_fijar_local(ctx, m, 2, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 233:17 >> 233:22 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 233:8 >> 233:22 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 2)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 233:8 >> 233:22 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 232:4 >> 234:9 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k125, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k123(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k123);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 9:0 >> 11:10 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k124, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k124(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k124);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 9:0 >> 11:10 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k125, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k125(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k125);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 235:14 >> 235:19 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_obtener_local(ctx, m, 0));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 235:31 >> 235:36 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_obtener_local(ctx, m, 0));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 235:36 >> 235:37 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 12);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k126, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k126(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k126);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 235:36 >> 235:37 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 235:36 >> 235:37 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 235:48 >> 235:54 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_obtener_local(ctx, m, 1));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 235:54 >> 235:55 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 12);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k127, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k127(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k127);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 235:54 >> 235:55 */
pdcrt_fijar_local(ctx, m, 7, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 235:54 >> 235:55 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 235:36 >> 235:55 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 19);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k128, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k128(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k128);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 235:36 >> 235:55 */
pdcrt_fijar_local(ctx, m, 5, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 235:36 >> 235:55 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 235:36 >> 235:55 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 235:66 >> 235:72 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_obtener_local(ctx, m, 1));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 235:72 >> 235:73 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 12);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k129, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k129(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k129);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 235:72 >> 235:73 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 235:72 >> 235:73 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 235:19 >> 235:20 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 14);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k130, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k130(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k130);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 235:19 >> 235:20 */
pdcrt_fijar_local(ctx, m, 3, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 235:19 >> 235:20 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 235:19 >> 235:20 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 235:19 >> 235:20 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 235:85 >> 235:91 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_obtener_local(ctx, m, 1));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 235:19 >> 235:91 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 2);
return pdcrt_llamar1(ctx, m->k.marco, m->k.kf, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 3)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 235:19 >> 235:91 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 235:19 >> 235:91 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 231:0 >> 236:10 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 231:0 >> 236:10 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 3)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 231:0 >> 236:10 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k131(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k131);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 257:13 >> 257:18 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_obtener_local(ctx, m, 0));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 257:18 >> 257:19 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 12);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k132, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k132(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k132);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 257:18 >> 257:19 */
pdcrt_fijar_local(ctx, m, 4, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 257:18 >> 257:19 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 257:30 >> 257:38 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_obtener_local(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 257:18 >> 257:38 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 16);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k133, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k133(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k133);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 257:18 >> 257:38 */
pdcrt_fijar_local(ctx, m, 3, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 257:18 >> 257:38 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 257:18 >> 257:38 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 257:4 >> 259:15 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 3);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 257:4 >> 259:15 */
pdcrt_obj csaltar_obj = pdcrt_obtener_local(ctx, m, 4);
if(csaltar_obj.recv != &pdcrt_recv_booleano) pdcrt_error(ctx, "Se esperaba un objeto de tipo Boole");
if(csaltar_obj.bval)
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k137, PDCRT_XMM_NULO());
else
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k134, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k134(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k134);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 257:4 >> 259:15 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 257:4 >> 259:15 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 258:22 >> 258:29 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_obtener_local(ctx, m, 1));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 258:42 >> 258:47 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_obtener_local(ctx, m, 0));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 258:29 >> 258:30 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 17);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k135, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k135(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k135);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 258:29 >> 258:30 */
pdcrt_fijar_local(ctx, m, 3, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 258:29 >> 258:30 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 258:29 >> 258:30 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 258:14 >> 258:19 */
pdcrt_fijar_local_nb(ctx, m, 0, pdcrt_obtener_local(ctx, m, 3));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 258:14 >> 258:19 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 257:4 >> 259:15 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k131, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k136(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k136);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 10:18 >> 10:23 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k137, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k137(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k137);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 260:13 >> 260:18 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_obtener_local(ctx, m, 0));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 260:4 >> 260:18 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 3)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 260:4 >> 260:18 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 256:0 >> 261:10 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 256:0 >> 261:10 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 3)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 256:0 >> 261:10 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k138(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k138);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 282:13 >> 282:18 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_obtener_local(ctx, m, 0));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 282:18 >> 282:19 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 12);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k139, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k139(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k139);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 282:18 >> 282:19 */
pdcrt_fijar_local(ctx, m, 4, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 282:18 >> 282:19 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 282:30 >> 282:38 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_obtener_local(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 282:18 >> 282:38 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 16);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k140, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k140(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k140);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 282:18 >> 282:38 */
pdcrt_fijar_local(ctx, m, 3, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 282:18 >> 282:38 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 282:18 >> 282:38 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 282:4 >> 284:15 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 3);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 282:4 >> 284:15 */
pdcrt_obj csaltar_obj = pdcrt_obtener_local(ctx, m, 4);
if(csaltar_obj.recv != &pdcrt_recv_booleano) pdcrt_error(ctx, "Se esperaba un objeto de tipo Boole");
if(csaltar_obj.bval)
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k144, PDCRT_XMM_NULO());
else
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k141, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k141(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k141);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 282:4 >> 284:15 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 282:4 >> 284:15 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 283:22 >> 283:27 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_obtener_local(ctx, m, 0));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 283:40 >> 283:47 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_obtener_local(ctx, m, 1));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 283:27 >> 283:28 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 17);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k142, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k142(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k142);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 283:27 >> 283:28 */
pdcrt_fijar_local(ctx, m, 3, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 283:27 >> 283:28 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 283:27 >> 283:28 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 283:14 >> 283:19 */
pdcrt_fijar_local_nb(ctx, m, 0, pdcrt_obtener_local(ctx, m, 3));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 283:14 >> 283:19 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 282:4 >> 284:15 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k138, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k143(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k143);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 32:0 >> 66:10 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k144, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k144(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k144);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 285:13 >> 285:18 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_obtener_local(ctx, m, 0));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 285:4 >> 285:18 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 3)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 285:4 >> 285:18 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 281:0 >> 286:10 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 281:0 >> 286:10 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 3)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 281:0 >> 286:10 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k145(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k145);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 289:0 >> 289:5 */
pdcrt_fijar_local(ctx, m, 132, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 289:0 >> 289:5 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 289:6 >> 289:11 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 129), pdcrt_obtener_local(ctx, m, 132));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 289:6 >> 289:11 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 289:6 >> 289:11 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 129)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 289:0 >> 289:5 */
pdcrt_fijar_local(ctx, m, 134, PDCRT_OBTENER_CONSTANTE(ctx, m, 21));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 289:0 >> 289:5 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 22);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k146, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 133)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 134)));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k146(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k146);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 289:0 >> 289:5 */
pdcrt_fijar_local(ctx, m, 132, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 289:0 >> 289:5 */
pdcrt_fijar_local_nb(ctx, m, 134, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 289:0 >> 289:5 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 289:6 >> 289:11 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 129)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 290:14 >> 290:19 */
pdcrt_fijar_local(ctx, m, 134, PDCRT_OBTENER_CONSTANTE(ctx, m, 23));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 290:4 >> 290:13 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 24);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k147, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 133)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 134)));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k147(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k147);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 290:4 >> 290:13 */
pdcrt_fijar_local(ctx, m, 132, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 290:4 >> 290:13 */
pdcrt_fijar_local_nb(ctx, m, 134, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 290:4 >> 290:13 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 289:6 >> 289:11 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 129)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 290:21 >> 290:29 */
pdcrt_fijar_local(ctx, m, 134, PDCRT_OBTENER_CONSTANTE(ctx, m, 25));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 290:4 >> 290:13 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 24);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k148, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 133)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 134)));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k148(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k148);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 290:4 >> 290:13 */
pdcrt_fijar_local(ctx, m, 132, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 290:4 >> 290:13 */
pdcrt_fijar_local_nb(ctx, m, 134, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 290:4 >> 290:13 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 293:7 >> 293:12 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 129)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 293:13 >> 293:22 */
pdcrt_fijar_local(ctx, m, 134, PDCRT_OBTENER_CONSTANTE(ctx, m, 26));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 293:0 >> 295:9 */
do {
static const pdcrt_captura caps[] = {};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzibepd_N95_utilidades_N95_texto_f15, caps, 0);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 135, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 293:0 >> 295:9 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 29);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k151, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 133)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 134)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 135)));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k149(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k149);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 294:48 >> 294:49 */
pdcrt_fijar_local(ctx, m, 3, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 294:48 >> 294:49 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 294:56 >> 294:58 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_obtener_local(ctx, m, 0));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 294:58 >> 294:59 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 25);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k150, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k150(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k150);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 294:58 >> 294:59 */
pdcrt_fijar_local(ctx, m, 4, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 294:58 >> 294:59 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 294:34 >> 294:35 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 28);
return pdcrt_llamar2(ctx, m->k.marco, m->k.kf, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 2)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 3)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 294:34 >> 294:35 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 294:34 >> 294:35 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 294:34 >> 294:35 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 293:0 >> 295:9 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 293:0 >> 295:9 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 2)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 293:0 >> 295:9 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k151(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k151);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 293:0 >> 295:9 */
pdcrt_fijar_local(ctx, m, 132, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 293:0 >> 295:9 */
pdcrt_fijar_local_nb(ctx, m, 135, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 293:0 >> 295:9 */
pdcrt_fijar_local_nb(ctx, m, 134, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 293:0 >> 295:9 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 298:0 >> 309:10 */
do {
static const pdcrt_captura caps[] = {{97}, {129}};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzibepd_N95_utilidades_N95_texto_f16, caps, 2);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 132, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 298:8 >> 298:19 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 130), pdcrt_obtener_local(ctx, m, 132));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 298:8 >> 298:19 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 312:0 >> 324:10 */
do {
static const pdcrt_captura caps[] = {{129}, {97}};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzibepd_N95_utilidades_N95_texto_f17, caps, 2);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 132, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 312:8 >> 312:19 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 131), pdcrt_obtener_local(ctx, m, 132));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 312:8 >> 312:19 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cons = pdcrt_crear_espacio_de_nombres_cons(ctx, PDCRT_GC());
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 132, cons);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 115)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "ParaCadaNúmero", 15, true, pdc_mpdzibepd_N95_utilidades_N95_texto_k181);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k152(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k152);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 300:19 >> 300:20 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 300:19 >> 300:20 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 300:19 >> 300:20 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 300:19 >> 300:20 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 300:10 >> 300:11 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_obtener_local(ctx, m, 6));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 300:10 >> 300:11 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 301:7 >> 301:13 */
pdcrt_fijar_local(ctx, m, 7, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 301:15 >> 301:16 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_obtener_local(ctx, m, 4));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 301:7 >> 301:14 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 6);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k153, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k153(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k153);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 301:7 >> 301:14 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 301:7 >> 301:14 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 301:7 >> 301:14 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 301:4 >> 308:9 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 6);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 301:4 >> 308:9 */
pdcrt_obj csaltar_obj = pdcrt_obtener_local(ctx, m, 7);
if(csaltar_obj.recv != &pdcrt_recv_booleano) pdcrt_error(ctx, "Se esperaba un objeto de tipo Boole");
if(csaltar_obj.bval)
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k157, PDCRT_XMM_NULO());
else
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k154, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k154(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k154);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 301:4 >> 308:9 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 301:4 >> 308:9 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 302:17 >> 302:21 */
pdcrt_fijar_local(ctx, m, 7, ctx->espacio_de_nombres_runtime);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 302:17 >> 302:21 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 1);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k155, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k155(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k155);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 302:17 >> 302:21 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 302:17 >> 302:21 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 302:8 >> 302:21 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 302:8 >> 302:21 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 301:4 >> 308:9 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k165, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k156(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k156);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 33:59 >> 33:69 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k157, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k157(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k157);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 304:22 >> 304:27 */
pdcrt_fijar_local(ctx, m, 7, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 1)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 304:27 >> 304:28 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 30);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k158, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k158(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k158);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 304:27 >> 304:28 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 304:27 >> 304:28 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 304:14 >> 304:19 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_obtener_local(ctx, m, 6));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 304:14 >> 304:19 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 305:14 >> 305:19 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_obtener_local(ctx, m, 5));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 305:28 >> 305:33 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_obtener_local(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 305:44 >> 305:45 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_entero(PDCRT_ENTERO_C(0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 305:47 >> 305:48 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_obtener_local(ctx, m, 4));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 305:33 >> 305:34 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 14);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k159, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 11)));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k159(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k159);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 305:33 >> 305:34 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 305:33 >> 305:34 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 305:33 >> 305:34 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 305:33 >> 305:34 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 305:8 >> 305:34 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 31);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k160, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k160(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k160);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 305:8 >> 305:34 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 305:8 >> 305:34 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 305:8 >> 305:34 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 304:8 >> 307:22 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 306:14 >> 306:19 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_obtener_local(ctx, m, 5));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 306:31 >> 306:36 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_obtener_local(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 306:48 >> 306:49 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_obtener_local(ctx, m, 4));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 306:52 >> 306:53 */
pdcrt_fijar_local_nb(ctx, m, 12, pdcrt_objeto_entero(PDCRT_ENTERO_C(1)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 306:48 >> 306:53 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 13);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k161, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 11)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 12)));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k161(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k161);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 306:48 >> 306:53 */
pdcrt_fijar_local(ctx, m, 10, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 306:48 >> 306:53 */
pdcrt_fijar_local_nb(ctx, m, 12, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 306:48 >> 306:53 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 306:56 >> 306:61 */
pdcrt_fijar_local_nb(ctx, m, 12, pdcrt_obtener_local(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 306:61 >> 306:62 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 12);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k162, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 12)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k162(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k162);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 306:61 >> 306:62 */
pdcrt_fijar_local(ctx, m, 11, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 306:61 >> 306:62 */
pdcrt_fijar_local_nb(ctx, m, 12, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 306:36 >> 306:37 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 14);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k163, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 11)));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k163(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k163);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 306:36 >> 306:37 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 306:36 >> 306:37 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 306:36 >> 306:37 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 306:36 >> 306:37 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 306:8 >> 306:37 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 32);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k164, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k164(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k164);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 306:8 >> 306:37 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 306:8 >> 306:37 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 306:8 >> 306:37 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 304:8 >> 307:22 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 307:17 >> 307:22 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_obtener_local(ctx, m, 5));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 307:8 >> 307:22 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 307:8 >> 307:22 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 33:4 >> 33:13 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k165, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k165(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k165);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 298:0 >> 309:10 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 298:0 >> 309:10 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 298:0 >> 309:10 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k166(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k166);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 314:23 >> 314:24 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 314:23 >> 314:24 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 314:10 >> 314:15 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_obtener_local(ctx, m, 6));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 314:10 >> 314:15 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 315:14 >> 315:19 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_obtener_local(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 315:28 >> 315:29 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_entero(PDCRT_ENTERO_C(0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 315:31 >> 315:36 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_obtener_local(ctx, m, 3));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 315:19 >> 315:20 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 0);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k167, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k167(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k167);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 315:19 >> 315:20 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 315:19 >> 315:20 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 315:19 >> 315:20 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 315:19 >> 315:20 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 315:10 >> 315:11 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_obtener_local(ctx, m, 6));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 315:10 >> 315:11 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 316:7 >> 316:13 */
pdcrt_fijar_local(ctx, m, 7, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 1)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 316:15 >> 316:16 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_obtener_local(ctx, m, 4));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 316:7 >> 316:14 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 6);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k168, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k168(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k168);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 316:7 >> 316:14 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 316:7 >> 316:14 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 316:7 >> 316:14 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 316:4 >> 322:9 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 6);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 316:4 >> 322:9 */
pdcrt_obj csaltar_obj = pdcrt_obtener_local(ctx, m, 7);
if(csaltar_obj.recv != &pdcrt_recv_booleano) pdcrt_error(ctx, "Se esperaba un objeto de tipo Boole");
if(csaltar_obj.bval)
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k173, PDCRT_XMM_NULO());
else
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k169, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k169(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k169);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 316:4 >> 322:9 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 316:4 >> 322:9 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 317:14 >> 317:19 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_obtener_local(ctx, m, 5));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 317:28 >> 317:33 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_obtener_local(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 317:8 >> 317:33 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 31);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k170, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k170(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k170);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 317:8 >> 317:33 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 317:8 >> 317:33 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 317:8 >> 317:33 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 317:8 >> 318:33 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 318:14 >> 318:19 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_obtener_local(ctx, m, 5));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 318:31 >> 318:33 */
pdcrt_fijar_local(ctx, m, 8, PDCRT_OBTENER_CONSTANTE(ctx, m, 9));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 318:8 >> 318:33 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 32);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k171, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k171(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k171);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 318:8 >> 318:33 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 318:8 >> 318:33 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 318:8 >> 318:33 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 317:8 >> 318:33 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 316:4 >> 322:9 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k180, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k172(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k172);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 36:20 >> 36:21 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k173, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k173(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k173);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 320:14 >> 320:19 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_obtener_local(ctx, m, 5));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 320:28 >> 320:33 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_obtener_local(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 320:44 >> 320:45 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_entero(PDCRT_ENTERO_C(0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 320:47 >> 320:48 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_obtener_local(ctx, m, 4));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 320:33 >> 320:34 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 14);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k174, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 11)));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k174(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k174);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 320:33 >> 320:34 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 320:33 >> 320:34 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 320:33 >> 320:34 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 320:33 >> 320:34 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 320:8 >> 320:34 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 31);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k175, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k175(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k175);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 320:8 >> 320:34 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 320:8 >> 320:34 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 320:8 >> 320:34 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 320:8 >> 321:37 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 321:14 >> 321:19 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_obtener_local(ctx, m, 5));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 321:31 >> 321:36 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_obtener_local(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 321:48 >> 321:49 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_obtener_local(ctx, m, 4));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 321:52 >> 321:53 */
pdcrt_fijar_local_nb(ctx, m, 12, pdcrt_objeto_entero(PDCRT_ENTERO_C(1)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 321:48 >> 321:53 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 13);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k176, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 11)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 12)));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k176(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k176);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 321:48 >> 321:53 */
pdcrt_fijar_local(ctx, m, 10, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 321:48 >> 321:53 */
pdcrt_fijar_local_nb(ctx, m, 12, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 321:48 >> 321:53 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 321:56 >> 321:61 */
pdcrt_fijar_local_nb(ctx, m, 12, pdcrt_obtener_local(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 321:61 >> 321:62 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 12);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k177, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 12)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k177(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k177);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 321:61 >> 321:62 */
pdcrt_fijar_local(ctx, m, 11, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 321:61 >> 321:62 */
pdcrt_fijar_local_nb(ctx, m, 12, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 321:36 >> 321:37 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 14);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k178, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 11)));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k178(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k178);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 321:36 >> 321:37 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 321:36 >> 321:37 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 321:36 >> 321:37 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 321:36 >> 321:37 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 321:8 >> 321:37 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 32);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k179, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k179(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k179);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 321:8 >> 321:37 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 321:8 >> 321:37 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 321:8 >> 321:37 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 320:8 >> 321:37 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 37:46 >> 37:55 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_texto_k180, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k180(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k180);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 323:13 >> 323:18 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_obtener_local(ctx, m, 5));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 323:4 >> 323:18 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 323:4 >> 323:18 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 312:0 >> 324:10 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 312:0 >> 324:10 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 312:0 >> 324:10 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k181(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k181);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 64)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "ParaCadaElemento", 16, true, pdc_mpdzibepd_N95_utilidades_N95_texto_k182);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k182(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k182);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 114)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "ParaCadaElementoConÍndice", 26, true, pdc_mpdzibepd_N95_utilidades_N95_texto_k183);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k183(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k183);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 65)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "Todos", 5, true, pdc_mpdzibepd_N95_utilidades_N95_texto_k184);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k184(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k184);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 113)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "EsSubclase", 10, true, pdc_mpdzibepd_N95_utilidades_N95_texto_k185);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k185(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k185);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 66)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "Contiene", 8, true, pdc_mpdzibepd_N95_utilidades_N95_texto_k186);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k186(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k186);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 112)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "EsInstancia", 11, true, pdc_mpdzibepd_N95_utilidades_N95_texto_k187);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k187(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k187);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 67)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "EsImpar", 7, true, pdc_mpdzibepd_N95_utilidades_N95_texto_k188);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k188(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k188);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 111)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "ParaCadaNúmeroConPaso", 22, true, pdc_mpdzibepd_N95_utilidades_N95_texto_k189);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k189(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k189);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 68)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "Escribir", 8, true, pdc_mpdzibepd_N95_utilidades_N95_texto_k190);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k190(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k190);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 110)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "Identidad", 9, true, pdc_mpdzibepd_N95_utilidades_N95_texto_k191);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k191(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k191);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 69)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "Reducir", 7, true, pdc_mpdzibepd_N95_utilidades_N95_texto_k192);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k192(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k192);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 109)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "Mapear", 6, true, pdc_mpdzibepd_N95_utilidades_N95_texto_k193);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k193(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k193);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 70)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "Filtrar", 7, true, pdc_mpdzibepd_N95_utilidades_N95_texto_k194);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k194(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k194);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 108)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "Algún", 6, true, pdc_mpdzibepd_N95_utilidades_N95_texto_k195);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k195(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k195);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 71)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "DígitoAEntero", 14, true, pdc_mpdzibepd_N95_utilidades_N95_texto_k196);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k196(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k196);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 107)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "Elevar", 6, true, pdc_mpdzibepd_N95_utilidades_N95_texto_k197);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k197(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k197);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 72)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "ConvertirAEntero", 16, true, pdc_mpdzibepd_N95_utilidades_N95_texto_k198);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k198(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k198);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 106)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "ConvertirANúmero", 17, true, pdc_mpdzibepd_N95_utilidades_N95_texto_k199);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k199(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k199);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 73)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "EsNúmeroEntero", 15, true, pdc_mpdzibepd_N95_utilidades_N95_texto_k200);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k200(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k200);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 105)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "EsNúmero", 9, true, pdc_mpdzibepd_N95_utilidades_N95_texto_k201);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k201(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k201);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 74)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "Concatenar", 10, true, pdc_mpdzibepd_N95_utilidades_N95_texto_k202);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k202(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k202);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 104)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "ArregloConFinal", 15, true, pdc_mpdzibepd_N95_utilidades_N95_texto_k203);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k203(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k203);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 75)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "Aplicar\'", 8, true, pdc_mpdzibepd_N95_utilidades_N95_texto_k204);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k204(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k204);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 103)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "Aplicar\'i", 9, true, pdc_mpdzibepd_N95_utilidades_N95_texto_k205);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k205(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k205);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 76)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "EnviarMensaje", 13, true, pdc_mpdzibepd_N95_utilidades_N95_texto_k206);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k206(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k206);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 102)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "Resto", 5, true, pdc_mpdzibepd_N95_utilidades_N95_texto_k207);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k207(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k207);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 77)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "Abs", 3, true, pdc_mpdzibepd_N95_utilidades_N95_texto_k208);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k208(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k208);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 101)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "Mod", 3, true, pdc_mpdzibepd_N95_utilidades_N95_texto_k209);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k209(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k209);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 78)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "EsPar", 5, true, pdc_mpdzibepd_N95_utilidades_N95_texto_k210);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k210(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k210);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 100)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "Aplanar", 7, true, pdc_mpdzibepd_N95_utilidades_N95_texto_k211);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k211(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k211);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 79)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "AplanarTodo", 11, true, pdc_mpdzibepd_N95_utilidades_N95_texto_k212);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k212(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k212);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 99)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "PedazoDeArreglo", 15, true, pdc_mpdzibepd_N95_utilidades_N95_texto_k213);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k213(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k213);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 80)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "PrimerElemento", 14, true, pdc_mpdzibepd_N95_utilidades_N95_texto_k214);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k214(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k214);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 98)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "ÚltimoElemento", 15, true, pdc_mpdzibepd_N95_utilidades_N95_texto_k215);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k215(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k215);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 81)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "ÚnicoElemento", 14, true, pdc_mpdzibepd_N95_utilidades_N95_texto_k216);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k216(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k216);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 97)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "EsNulo", 6, true, pdc_mpdzibepd_N95_utilidades_N95_texto_k217);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k217(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k217);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 82)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "Max", 3, true, pdc_mpdzibepd_N95_utilidades_N95_texto_k218);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k218(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k218);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 96)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "Min", 3, true, pdc_mpdzibepd_N95_utilidades_N95_texto_k219);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k219(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k219);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 83)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "NoImplementado", 14, true, pdc_mpdzibepd_N95_utilidades_N95_texto_k220);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k220(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k220);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 95)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "MétodoAbstracto", 16, true, pdc_mpdzibepd_N95_utilidades_N95_texto_k221);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k221(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k221);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 84)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "Inalcanzable", 12, true, pdc_mpdzibepd_N95_utilidades_N95_texto_k222);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k222(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k222);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 94)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "LlamarConEC", 11, true, pdc_mpdzibepd_N95_utilidades_N95_texto_k223);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k223(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k223);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 85)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "ArregloSinElementoEnÍndice", 27, true, pdc_mpdzibepd_N95_utilidades_N95_texto_k224);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k224(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k224);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 93)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "LeerLínea", 10, true, pdc_mpdzibepd_N95_utilidades_N95_texto_k225);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k225(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k225);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 86)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "LeerNúmero", 11, true, pdc_mpdzibepd_N95_utilidades_N95_texto_k226);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k226(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k226);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 92)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "Parcial", 7, true, pdc_mpdzibepd_N95_utilidades_N95_texto_k227);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k227(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k227);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 87)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "MétodoComoFunción", 19, true, pdc_mpdzibepd_N95_utilidades_N95_texto_k228);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k228(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k228);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 91)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "OperadorBinario", 15, true, pdc_mpdzibepd_N95_utilidades_N95_texto_k229);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k229(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k229);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 88)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "ContienePredicado", 17, true, pdc_mpdzibepd_N95_utilidades_N95_texto_k230);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k230(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k230);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 90)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "BuscarPredicado", 15, true, pdc_mpdzibepd_N95_utilidades_N95_texto_k231);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k231(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k231);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 89)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "ParaCadaElementoEnReversa", 25, true, pdc_mpdzibepd_N95_utilidades_N95_texto_k232);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k232(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k232);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 9:8 >> 9:21 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 116)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "TextoContiene", 13, true, pdc_mpdzibepd_N95_utilidades_N95_texto_k233);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k233(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k233);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 32:8 >> 32:15 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 117)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "Partir\'", 7, true, pdc_mpdzibepd_N95_utilidades_N95_texto_k234);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k234(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k234);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 92:8 >> 92:14 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_obtener_local(ctx, m, 118));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "Partir", 6, true, pdc_mpdzibepd_N95_utilidades_N95_texto_k235);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k235(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k235);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 103:8 >> 103:22 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_obtener_local(ctx, m, 119));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "PartirComoPerl", 14, true, pdc_mpdzibepd_N95_utilidades_N95_texto_k236);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k236(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k236);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 112:8 >> 112:24 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 120)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "PartirSinVacíos", 16, true, pdc_mpdzibepd_N95_utilidades_N95_texto_k237);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k237(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k237);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 138:8 >> 138:12 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 121)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "Unir", 4, true, pdc_mpdzibepd_N95_utilidades_N95_texto_k238);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k238(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k238);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 177:8 >> 177:20 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_obtener_local(ctx, m, 122));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "RepetirTexto", 12, true, pdc_mpdzibepd_N95_utilidades_N95_texto_k239);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k239(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k239);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 194:8 >> 194:19 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_obtener_local(ctx, m, 123));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "MapearTexto", 11, true, pdc_mpdzibepd_N95_utilidades_N95_texto_k240);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k240(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k240);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 208:8 >> 208:21 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 124)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "TextoMenorQue", 13, true, pdc_mpdzibepd_N95_utilidades_N95_texto_k241);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k241(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k241);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 221:8 >> 221:17 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 125)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "EsPrefijo", 9, true, pdc_mpdzibepd_N95_utilidades_N95_texto_k242);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k242(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k242);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 231:8 >> 231:16 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 126)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "EsSufijo", 8, true, pdc_mpdzibepd_N95_utilidades_N95_texto_k243);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k243(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k243);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 256:8 >> 256:27 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 127)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "AjustarALaIzquierda", 19, true, pdc_mpdzibepd_N95_utilidades_N95_texto_k244);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k244(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k244);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 281:8 >> 281:25 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 128)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "AjustarALaDerecha", 17, true, pdc_mpdzibepd_N95_utilidades_N95_texto_k245);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k245(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k245);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 289:6 >> 289:11 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 129)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "Corte", 5, false, pdc_mpdzibepd_N95_utilidades_N95_texto_k246);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k246(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k246);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 298:8 >> 298:19 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 130)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "CortarONulo", 11, true, pdc_mpdzibepd_N95_utilidades_N95_texto_k247);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k247(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k247);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 312:8 >> 312:19 */
pdcrt_fijar_local(ctx, m, 133, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 131)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 133), "CortarOTodo", 11, true, pdc_mpdzibepd_N95_utilidades_N95_texto_k248);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_texto_k248(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_texto_k248);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
pdcrt_fijar_local_nb(ctx, m, 133, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
return pdcrt_exportar(ctx, m, pdcrt_obtener_local(ctx, m, 132), "pdzibepd_N95_utilidades_N95_texto", 33);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/texto.pd" => 1:0 >> 324:10 */
pdcrt_fijar_local_nb(ctx, m, 132, pdcrt_objeto_nulo());
}
PDCRT_DECLARAR_ENTRYPOINT(pdzibepd_N95_utilidades_N95_texto, pdc_mpdzibepd_N95_utilidades_N95_texto_f18)
#ifdef PDCRT_MAIN
#define PDCRT_DEPS(X) \
    X(pdzibepd_N95_utilidades_N95_texto, "pdzibepd_N95_utilidades_N95_texto", 33) \
    X(pdzibepd_N95_builtinsImpl, "pdzibepd_N95_builtinsImpl", 25)
PDCRT_DECLARAR_DEPS(PDCRT_DEPS)
PDCRT_DECLARAR_MAIN(pdzibepd_N95_utilidades_N95_texto)
#endif
