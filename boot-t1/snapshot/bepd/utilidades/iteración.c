#define PDCRT_INTERNO
#include "pdcrt/pdcrt.h"
#include "pdcrt/pdcrt_ops.h"
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_f0(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_f1(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_f2(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_f3(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_f4(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_f5(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_f6(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_f7(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_f8(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_f9(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_f10(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_f11(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k0(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k1(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k2(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k3(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k4(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k5(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k6(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k7(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k8(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k9(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k10(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k11(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k12(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k13(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k14(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k15(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k16(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k17(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k18(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k19(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k20(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k21(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k22(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k23(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k24(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k25(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k26(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k27(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k28(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k29(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k30(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k31(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k32(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k33(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k34(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k35(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k36(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k37(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k38(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k39(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k40(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k41(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k42(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k43(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k44(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k45(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k46(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k47(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k48(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k49(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k50(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k51(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k52(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k53(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k54(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k55(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k56(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k57(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k58(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k59(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k60(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k61(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k62(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k63(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k64(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k65(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k66(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k67(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k68(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k69(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k70(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k71(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k72(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k73(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k74(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k75(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k76(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k77(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k78(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k79(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k80(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k81(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k82(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k83(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k84(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k85(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k86(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k87(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k88(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k89(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k90(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k91(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k92(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k93(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k94(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k95(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k96(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k97(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k98(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k99(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k100(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k101(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k102(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k103(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k104(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k105(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k106(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k107(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k108(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k109(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k110(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k111(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k112(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k113(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k114(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k115(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k116(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k117(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k118(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k119(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k120(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k121(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k122(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k123(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k124(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k125(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k126(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k127(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k128(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k129(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k130(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k131(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k132(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k133(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k134(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k135(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k136(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k137(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k138(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k139(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k140(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k141(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k142(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k143(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k144(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k145(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k146(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k147(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k148(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k149(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k150(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k151(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k152(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k153(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k154(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k155(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k156(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k157(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k158(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k159(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k160(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k161(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k162(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k163(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k164(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k165(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k166(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k167(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k168(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k169(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k170(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k171(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k172(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k173(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k174(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k175(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k176(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k177(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k178(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k179(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k180(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k181(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k182(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k183(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k184(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k185(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k186(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k187(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k188(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k189(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k190(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k191(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k192(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k193(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k194(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k195(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k196(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k197(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k198(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k199(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k200(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k201(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k202(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k203(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k204(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k205(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k206(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k207(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k208(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k209(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k210(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k211(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k212(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k213(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k214(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k215(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k216(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k217(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k218(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k219(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k220(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k221(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_f0(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 12:43 >> 12:50 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd|12:43|12:50";
PDCRT_ALOJAR_MARCO(ctx, 5, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_p0 { const pdcrt_params_base base; const pdcrt_param_data params[1]; };
static const struct pdc_params_data_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_p0 pdc_params = { .base = { .num_params = 1, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{2}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 12:52 >> 12:55 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 12:52 >> 12:55 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_obtener_local(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 12:52 >> 12:55 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 13:56 >> 13:59 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_obtener_local(ctx, m, 1));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 13:64 >> 13:65 */
pdcrt_fijar_local(ctx, m, 4, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 13:59 >> 13:60 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 2);
return pdcrt_llamar1(ctx, m->k.marco, m->k.kf, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 3)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 13:59 >> 13:60 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 13:59 >> 13:60 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 12:43 >> 12:50 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 12:43 >> 12:50 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 3)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 12:43 >> 12:50 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_f1(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 8:38 >> 8:51 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd|8:38|8:51";
PDCRT_ALOJAR_MARCO(ctx, 13, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_p1 { const pdcrt_params_base base; const pdcrt_param_data params[1]; };
static const struct pdc_params_data_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_p1 pdc_params = { .base = { .num_params = 1, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{6}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 8:53 >> 8:54 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 8:53 >> 8:54 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 7));
pdcrt_fijar_local(ctx, m, 4, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 8:53 >> 8:54 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 8:53 >> 8:54 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 4), pdcrt_obtener_local(ctx, m, 6));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 8:53 >> 8:54 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 9:17 >> 9:22 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 10:23 >> 10:29 */
pdcrt_fijar_local(ctx, m, 7, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 3)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 10:32 >> 10:39 */
pdcrt_fijar_local(ctx, m, 9, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 2)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 10:44 >> 10:45 */
pdcrt_fijar_local(ctx, m, 10, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 4)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 10:39 >> 10:40 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 2);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k117, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_f2(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 5:0 >> 16:16 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd|5:0|16:16";
PDCRT_ALOJAR_MARCO(ctx, 17, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_p2 { const pdcrt_params_base base; const pdcrt_param_data params[3]; };
static const struct pdc_params_data_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_p2 pdc_params = { .base = { .num_params = 3, .tiene_variadic = true, .idc_variadic = 2, }, .params = {{8}, {9}, {10}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 5:55 >> 5:68 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 5:55 >> 5:68 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 11));
pdcrt_fijar_local(ctx, m, 6, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 5:55 >> 5:68 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 5:55 >> 5:68 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 6), pdcrt_obtener_local(ctx, m, 10));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 5:55 >> 5:68 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 5:43 >> 5:50 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 5:43 >> 5:50 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 10));
pdcrt_fijar_local(ctx, m, 5, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 5:43 >> 5:50 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 5:43 >> 5:50 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 5), pdcrt_obtener_local(ctx, m, 9));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 5:43 >> 5:50 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 5:35 >> 5:41 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 5:35 >> 5:41 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 9));
pdcrt_fijar_local(ctx, m, 4, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 5:35 >> 5:41 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 5:35 >> 5:41 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 4), pdcrt_obtener_local(ctx, m, 8));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 5:35 >> 5:41 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 6:13 >> 6:25 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 7:25 >> 7:28 */
pdcrt_fijar_local(ctx, m, 9, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 1)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 7:30 >> 7:37 */
pdcrt_fijar_local(ctx, m, 11, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 5)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 7:37 >> 7:38 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 0);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k113, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 11)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_f3(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 21:25 >> 21:38 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd|21:25|21:38";
PDCRT_ALOJAR_MARCO(ctx, 8, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_p3 { const pdcrt_params_base base; const pdcrt_param_data params[1]; };
static const struct pdc_params_data_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_p3 pdc_params = { .base = { .num_params = 1, .tiene_variadic = true, .idc_variadic = 0, }, .params = {{3}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 21:43 >> 21:50 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 21:43 >> 21:50 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_obtener_local(ctx, m, 3));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 21:43 >> 21:50 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 22:8 >> 22:17 */
pdcrt_fijar_local(ctx, m, 4, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 1)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 22:36 >> 22:40 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 22:45 >> 22:52 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_obtener_local(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 22:36 >> 22:52 */
static const int proto[] =
{ 1, };
pdcrt_extender_pila(ctx, 1);
pdcrt_empujar(ctx, pdcrt_obtener_local(ctx, m, 7));
size_t llamar_nargs = pdcrt_expandir_varargs(ctx, proto, 1);
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 1);
return pdcrt_llamarn(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k123, llamar_nargs, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_f4(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 18:0 >> 25:10 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd|18:0|25:10";
PDCRT_ALOJAR_MARCO(ctx, 10, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_p4 { const pdcrt_params_base base; const pdcrt_param_data params[3]; };
static const struct pdc_params_data_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_p4 pdc_params = { .base = { .num_params = 3, .tiene_variadic = true, .idc_variadic = 2, }, .params = {{5}, {6}, {7}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 18:35 >> 18:48 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 18:35 >> 18:48 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_obtener_local(ctx, m, 7));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 18:35 >> 18:48 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 18:23 >> 18:30 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 18:23 >> 18:30 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_obtener_local(ctx, m, 6));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 18:23 >> 18:30 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 18:17 >> 18:21 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 18:17 >> 18:21 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 6));
pdcrt_fijar_local(ctx, m, 1, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 18:17 >> 18:21 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 18:17 >> 18:21 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 1), pdcrt_obtener_local(ctx, m, 5));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 18:17 >> 18:21 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 19:13 >> 19:22 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 19:13 >> 19:22 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 5));
pdcrt_fijar_local(ctx, m, 4, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 19:13 >> 19:22 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 20:22 >> 20:29 */
pdcrt_fijar_local(ctx, m, 7, ctx->espacio_de_nombres_runtime);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 20:22 >> 20:29 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 3);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k121, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_f5(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 34:25 >> 34:38 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd|34:25|34:38";
PDCRT_ALOJAR_MARCO(ctx, 5, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_p5 { const pdcrt_params_base base; const pdcrt_param_data params[1]; };
static const struct pdc_params_data_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_p5 pdc_params = { .base = { .num_params = 1, .tiene_variadic = true, .idc_variadic = 0, }, .params = {{2}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 34:43 >> 34:50 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 34:43 >> 34:50 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_obtener_local(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 34:43 >> 34:50 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 35:9 >> 35:15 */
pdcrt_fijar_local(ctx, m, 3, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 35:20 >> 35:27 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_obtener_local(ctx, m, 1));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 35:9 >> 35:27 */
static const int proto[] =
{ 1, };
pdcrt_extender_pila(ctx, 1);
pdcrt_empujar(ctx, pdcrt_obtener_local(ctx, m, 4));
size_t llamar_nargs = pdcrt_expandir_varargs(ctx, proto, 1);
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 1);
return pdcrt_llamarn(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k141, llamar_nargs, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 3)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_f6(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 27:0 >> 37:16 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd|27:0|37:16";
PDCRT_ALOJAR_MARCO(ctx, 12, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_p6 { const pdcrt_params_base base; const pdcrt_param_data params[1]; };
static const struct pdc_params_data_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_p6 pdc_params = { .base = { .num_params = 1, .tiene_variadic = true, .idc_variadic = 0, }, .params = {{5}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 27:36 >> 27:51 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 27:36 >> 27:51 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_obtener_local(ctx, m, 5));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 27:36 >> 27:51 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 31:14 >> 31:22 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 31:24 >> 31:30 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 31:24 >> 31:30 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 5));
pdcrt_fijar_local(ctx, m, 4, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 31:24 >> 31:30 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 28:7 >> 28:22 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_obtener_local(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 28:22 >> 28:23 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 0);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k126, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_f7(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 43:28 >> 43:41 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd|43:28|43:41";
PDCRT_ALOJAR_MARCO(ctx, 5, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_p7 { const pdcrt_params_base base; const pdcrt_param_data params[1]; };
static const struct pdc_params_data_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_p7 pdc_params = { .base = { .num_params = 1, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{2}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 43:43 >> 43:44 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 43:43 >> 43:44 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_obtener_local(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 43:43 >> 43:44 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 44:11 >> 44:12 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_obtener_local(ctx, m, 1));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 44:15 >> 44:18 */
pdcrt_fijar_local(ctx, m, 4, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 44:11 >> 44:18 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 11);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k146, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 3)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_f8(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 39:0 >> 49:10 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd|39:0|49:10";
PDCRT_ALOJAR_MARCO(ctx, 7, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_p8 { const pdcrt_params_base base; const pdcrt_param_data params[1]; };
static const struct pdc_params_data_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_p8 pdc_params = { .base = { .num_params = 1, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{3}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 39:17 >> 39:21 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 39:17 >> 39:21 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_obtener_local(ctx, m, 3));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 39:17 >> 39:21 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 41:13 >> 41:16 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 41:13 >> 41:16 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 3));
pdcrt_fijar_local(ctx, m, 2, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 41:13 >> 41:16 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 40:14 >> 40:18 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_obtener_local(ctx, m, 1));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 40:18 >> 40:19 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 0);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k143, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_f9(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 55:28 >> 55:41 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd|55:28|55:41";
PDCRT_ALOJAR_MARCO(ctx, 5, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_p9 { const pdcrt_params_base base; const pdcrt_param_data params[1]; };
static const struct pdc_params_data_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_p9 pdc_params = { .base = { .num_params = 1, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{2}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 55:43 >> 55:44 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 55:43 >> 55:44 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_obtener_local(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 55:43 >> 55:44 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 56:11 >> 56:12 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_obtener_local(ctx, m, 1));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 56:15 >> 56:18 */
pdcrt_fijar_local(ctx, m, 4, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 56:11 >> 56:18 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 6);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k155, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 3)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_f10(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 51:0 >> 61:10 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd|51:0|61:10";
PDCRT_ALOJAR_MARCO(ctx, 7, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_p10 { const pdcrt_params_base base; const pdcrt_param_data params[1]; };
static const struct pdc_params_data_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_p10 pdc_params = { .base = { .num_params = 1, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{3}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 51:17 >> 51:21 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 51:17 >> 51:21 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_obtener_local(ctx, m, 3));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 51:17 >> 51:21 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 53:13 >> 53:16 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 53:13 >> 53:16 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 3));
pdcrt_fijar_local(ctx, m, 2, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 53:13 >> 53:16 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 52:14 >> 52:18 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_obtener_local(ctx, m, 1));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 52:18 >> 52:19 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 0);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k152, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_f11(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd|1:0|61:10";
PDCRT_ALOJAR_MARCO(ctx, 167, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_p11 { const pdcrt_params_base base; const pdcrt_param_data params[1]; };
static const struct pdc_params_data_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_p11 pdc_params = { .base = { .num_params = 0, .tiene_variadic = false, .idc_variadic = 0, }, .params = {} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
PDCRT_DEFINE_RAICES(2);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_arreglo *constantes = pdcrt_crear_arreglo_vacio(ctx, PDCRT_GC(), 12LLU);
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
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "ParaCadaElemento\' requiere al menos 2 argumentos, pero solo especificastes ~t", 77));
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
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "operador_>", 10));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
PDCRT_FIJAR_CONSTANTES(ctx, m, constantes);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 50, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 52, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 54, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 56, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 58, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 60, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 62, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 64, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 66, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 68, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 70, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 72, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 74, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 76, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 78, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 80, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 82, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 84, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 86, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 88, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 90, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 92, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 94, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 96, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 98, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 100, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 102, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 101, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 99, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 97, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 95, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 93, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 91, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 89, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 87, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 85, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 83, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 79, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 77, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 75, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 73, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 71, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 69, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 67, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 65, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 63, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 61, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 59, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 57, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 55, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 53, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 51, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 49, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 165));
pdcrt_fijar_local(ctx, m, 159, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 165));
pdcrt_fijar_local(ctx, m, 122, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 165));
pdcrt_fijar_local(ctx, m, 124, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 165));
pdcrt_fijar_local(ctx, m, 125, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 165));
pdcrt_fijar_local(ctx, m, 126, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 165));
pdcrt_fijar_local(ctx, m, 128, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 165));
pdcrt_fijar_local(ctx, m, 129, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 165));
pdcrt_fijar_local(ctx, m, 130, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 165));
pdcrt_fijar_local(ctx, m, 132, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 165));
pdcrt_fijar_local(ctx, m, 133, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 165));
pdcrt_fijar_local(ctx, m, 134, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 165));
pdcrt_fijar_local(ctx, m, 136, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 165));
pdcrt_fijar_local(ctx, m, 137, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 165));
pdcrt_fijar_local(ctx, m, 138, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 165));
pdcrt_fijar_local(ctx, m, 140, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 165));
pdcrt_fijar_local(ctx, m, 141, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 165));
pdcrt_fijar_local(ctx, m, 142, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 165));
pdcrt_fijar_local(ctx, m, 144, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 165));
pdcrt_fijar_local(ctx, m, 145, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 165));
pdcrt_fijar_local(ctx, m, 146, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 165));
pdcrt_fijar_local(ctx, m, 148, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 165));
pdcrt_fijar_local(ctx, m, 149, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 165));
pdcrt_fijar_local(ctx, m, 150, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 165));
pdcrt_fijar_local(ctx, m, 152, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 165));
pdcrt_fijar_local(ctx, m, 153, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 165));
pdcrt_fijar_local(ctx, m, 154, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 156, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 165));
pdcrt_fijar_local(ctx, m, 157, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 165));
pdcrt_fijar_local(ctx, m, 158, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 165));
pdcrt_fijar_local(ctx, m, 155, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 165));
pdcrt_fijar_local(ctx, m, 151, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 165));
pdcrt_fijar_local(ctx, m, 147, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 165));
pdcrt_fijar_local(ctx, m, 143, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 165));
pdcrt_fijar_local(ctx, m, 139, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 165));
pdcrt_fijar_local(ctx, m, 135, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 165));
pdcrt_fijar_local(ctx, m, 131, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 165));
pdcrt_fijar_local(ctx, m, 127, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 165));
pdcrt_fijar_local(ctx, m, 123, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 165));
pdcrt_fijar_local(ctx, m, 112, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 165));
pdcrt_fijar_local(ctx, m, 113, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 165));
pdcrt_fijar_local(ctx, m, 114, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 165));
pdcrt_fijar_local(ctx, m, 115, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 165));
pdcrt_fijar_local(ctx, m, 116, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 165));
pdcrt_fijar_local(ctx, m, 117, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 165));
pdcrt_fijar_local(ctx, m, 118, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 165));
pdcrt_fijar_local(ctx, m, 120, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 165));
pdcrt_fijar_local(ctx, m, 121, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 165));
pdcrt_fijar_local(ctx, m, 119, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 165));
pdcrt_fijar_local(ctx, m, 111, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 165));
pdcrt_fijar_local(ctx, m, 107, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 165));
pdcrt_fijar_local(ctx, m, 108, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 165));
pdcrt_fijar_local(ctx, m, 109, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 165));
pdcrt_fijar_local(ctx, m, 110, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 105, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 165));
pdcrt_fijar_local(ctx, m, 106, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 5:14 >> 5:33 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 5:14 >> 5:33 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 165));
pdcrt_fijar_local(ctx, m, 160, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 5:14 >> 5:33 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 18:8 >> 18:15 */
pdcrt_fijar_local_nb(ctx, m, 161, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 27:14 >> 27:31 */
pdcrt_fijar_local_nb(ctx, m, 162, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 39:8 >> 39:15 */
pdcrt_fijar_local_nb(ctx, m, 163, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 51:8 >> 51:15 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 51:8 >> 51:15 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 165));
pdcrt_fijar_local(ctx, m, 164, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 51:8 >> 51:15 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
return pdcrt_importar(ctx, m, "pdzibepd_N95_builtins", 21, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k0);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k0(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 165, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "ParaCadaElemento", 16, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k1);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k1(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 49, pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "Todos", 5, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k2);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k2(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k2);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 50, pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "Contiene", 8, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k3);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k3(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k3);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 51, pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "EsImpar", 7, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k4);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k4(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k4);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 52, pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "Escribir", 8, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k5);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k5(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k5);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 53, pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "Reducir", 7, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k6);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k6(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k6);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 54, pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "Filtrar", 7, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k7);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k7(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k7);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 55, pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "DígitoAEntero", 14, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k8);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k8(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k8);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 56, pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "ConvertirAEntero", 16, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k9);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k9(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k9);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 57, pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "EsNúmeroEntero", 15, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k10);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k10(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k10);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 58, pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "Concatenar", 10, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k11);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k11(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k11);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 59, pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "Aplicar\'", 8, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k12);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k12(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k12);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 60, pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "EnviarMensaje", 13, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k13);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k13(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k13);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 61, pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "Abs", 3, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k14);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k14(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k14);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 62, pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "EsPar", 5, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k15);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k15(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k15);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 63, pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "AplanarTodo", 11, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k16);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k16(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k16);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 64, pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "PrimerElemento", 14, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k17);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k17(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k17);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 65, pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "ÚnicoElemento", 14, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k18);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k18(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k18);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 66, pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "Max", 3, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k19);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k19(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k19);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 67, pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "NoImplementado", 14, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k20);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k20(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k20);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 68, pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "Inalcanzable", 12, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k21);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k21(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k21);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 69, pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "ArregloSinElementoEnÍndice", 27, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k22);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k22(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k22);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 70, pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "LeerNúmero", 11, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k23);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k23(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k23);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 71, pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "MétodoComoFunción", 19, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k24);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k24(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k24);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 72, pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "ContienePredicado", 17, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k25);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k25(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k25);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 73, pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "ParaCadaElementoEnReversa", 25, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k26);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k26(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k26);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 74, pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "Resultado", 9, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k27);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k27(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k27);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 75, pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "Pila", 4, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k28);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k28(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k28);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 76, pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "Diccionario", 11, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k29);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k29(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k29);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 77, pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "BuscarPredicado", 15, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k30);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k30(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k30);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 78, pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "OperadorBinario", 15, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k31);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k31(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k31);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 79, pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "Parcial", 7, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k32);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k32(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k32);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 80, pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "LeerLínea", 10, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k33);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k33(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k33);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "LlamarConEC", 11, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k34);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k34(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k34);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 82, pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "MétodoAbstracto", 16, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k35);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k35(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k35);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 83, pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "Min", 3, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k36);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k36(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k36);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 84, pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "EsNulo", 6, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k37);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k37(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k37);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 85, pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "ÚltimoElemento", 15, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k38);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k38(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k38);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 86, pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "PedazoDeArreglo", 15, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k39);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k39(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k39);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 87, pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "Aplanar", 7, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k40);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k40(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k40);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 88, pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "Mod", 3, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k41);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k41(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k41);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 89, pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "Resto", 5, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k42);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k42(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k42);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 90, pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "Aplicar\'i", 9, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k43);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k43(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k43);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 91, pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "ArregloConFinal", 15, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k44);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k44(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k44);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 92, pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "EsNúmero", 9, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k45);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k45(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k45);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 93, pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "ConvertirANúmero", 17, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k46);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k46(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k46);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 94, pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "Elevar", 6, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k47);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k47(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k47);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 95, pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "Algún", 6, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k48);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k48(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k48);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 96, pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "Mapear", 6, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k49);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k49(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k49);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 97, pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "Identidad", 9, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k50);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k50(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k50);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 98, pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "ParaCadaNúmeroConPaso", 22, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k51);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k51(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k51);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 99, pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "EsInstancia", 11, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k52);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k52(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k52);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 100, pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "EsSubclase", 10, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k53);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k53(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k53);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 101, pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "ParaCadaElementoConÍndice", 26, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k54);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k54(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k54);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 102, pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "ParaCadaNúmero", 15, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k55);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k55(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k55);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
return pdcrt_importar(ctx, m, "pdzibepd_N95_x_N95_adhoc", 24, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k56);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k56(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k56);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 165, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "ObjetoAdHoc", 11, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k57);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k57(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k57);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "ConvertirANúmero", 17, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k58);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k58(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k58);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 105, pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "EsNúmero", 9, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k59);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k59(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k59);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 106), pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "Concatenar", 10, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k60);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k60(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k60);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 107), pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "ArregloConFinal", 15, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k61);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k61(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k61);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "Aplicar\'i", 9, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k62);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k62(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k62);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 109), pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "EnviarMensaje", 13, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k63);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k63(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k63);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 110), pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "Resto", 5, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k64);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k64(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k64);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 111), pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "Mod", 3, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k65);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k65(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k65);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 112), pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "EsPar", 5, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k66);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k66(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k66);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 113), pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "Aplanar", 7, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k67);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k67(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k67);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 114), pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "PedazoDeArreglo", 15, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k68);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k68(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k68);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 115), pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "PrimerElemento", 14, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k69);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k69(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k69);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 116), pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "ÚltimoElemento", 15, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k70);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k70(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k70);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 117), pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "EsNulo", 6, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k71);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k71(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k71);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 118), pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "Max", 3, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k72);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k72(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k72);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 119), pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "Min", 3, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k73);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k73(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k73);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 120), pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "MétodoAbstracto", 16, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k74);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k74(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k74);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 121), pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "Inalcanzable", 12, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k75);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k75(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k75);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 122), pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "LlamarConEC", 11, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k76);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k76(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k76);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 123), pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "LeerLínea", 10, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k77);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k77(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k77);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 124), pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "LeerNúmero", 11, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k78);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k78(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k78);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 125), pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "Parcial", 7, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k79);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k79(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k79);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 126), pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "OperadorBinario", 15, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k80);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k80(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k80);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 127), pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "ContienePredicado", 17, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k81);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k81(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k81);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 128), pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "BuscarPredicado", 15, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k82);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k82(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k82);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 129), pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "Diccionario", 11, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k83);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k83(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k83);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 130), pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "Resultado", 9, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k84);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k84(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k84);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 131), pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "Pila", 4, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k85);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k85(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k85);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 132), pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "ParaCadaElementoEnReversa", 25, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k86);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k86(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k86);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 133), pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "MétodoComoFunción", 19, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k87);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k87(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k87);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 134), pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "ArregloSinElementoEnÍndice", 27, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k88);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k88(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k88);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 135), pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "NoImplementado", 14, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k89);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k89(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k89);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 136), pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "ÚnicoElemento", 14, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k90);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k90(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k90);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 137), pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "AplanarTodo", 11, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k91);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k91(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k91);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 138), pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "Abs", 3, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k92);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k92(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k92);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 139), pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "Aplicar\'", 8, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k93);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k93(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k93);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 140), pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "EsNúmeroEntero", 15, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k94);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k94(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k94);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 141), pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "ParaCadaNúmeroConPaso", 22, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k95);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k95(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k95);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 142), pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "Escribir", 8, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k96);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k96(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k96);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 143), pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "Identidad", 9, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k97);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k97(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k97);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 144), pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "Reducir", 7, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k98);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k98(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k98);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 145), pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "Mapear", 6, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k99);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k99(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k99);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 146), pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "Filtrar", 7, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k100);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k100(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k100);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 147), pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "Algún", 6, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k101);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k101(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k101);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 148), pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "Elevar", 6, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k102);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k102(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k102);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 149), pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "ConvertirAEntero", 16, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k103);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k103(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k103);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 150), pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "DígitoAEntero", 14, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k104);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k104(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k104);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 151), pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "EsImpar", 7, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k105);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k105(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k105);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 152), pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "Todos", 5, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k106);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k106(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k106);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 153), pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "EsSubclase", 10, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k107);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k107(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k107);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 154), pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "Contiene", 8, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k108);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k108(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k108);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 155), pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "EsInstancia", 11, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k109);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k109(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k109);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 156, pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "ParaCadaElemento", 16, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k110);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k110(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k110);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 157), pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "ParaCadaElementoConÍndice", 26, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k111);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k111(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k111);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 158), pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 165), "ParaCadaNúmero", 15, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k112);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k112(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k112);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 159), pdcrt_obtener_local(ctx, m, 166));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 5:0 >> 16:16 */
do {
static const pdcrt_captura caps[] = {{146}, {119}, {134}, {159}};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_f2, caps, 4);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 165, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 5:14 >> 5:33 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 160), pdcrt_obtener_local(ctx, m, 165));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 5:14 >> 5:33 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 18:0 >> 25:10 */
do {
static const pdcrt_captura caps[] = {{160}};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_f4, caps, 1);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 165, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 18:8 >> 18:15 */
pdcrt_fijar_local_nb(ctx, m, 161, pdcrt_obtener_local(ctx, m, 165));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 18:8 >> 18:15 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 27:0 >> 37:16 */
do {
static const pdcrt_captura caps[] = {{115}, {160}};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_f6, caps, 2);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 165, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 27:14 >> 27:31 */
pdcrt_fijar_local_nb(ctx, m, 162, pdcrt_obtener_local(ctx, m, 165));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 27:14 >> 27:31 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 39:0 >> 49:10 */
do {
static const pdcrt_captura caps[] = {{157}};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_f8, caps, 1);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 165, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 39:8 >> 39:15 */
pdcrt_fijar_local_nb(ctx, m, 163, pdcrt_obtener_local(ctx, m, 165));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 39:8 >> 39:15 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 51:0 >> 61:10 */
do {
static const pdcrt_captura caps[] = {{157}};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_f10, caps, 1);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 165, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 51:8 >> 51:15 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 164), pdcrt_obtener_local(ctx, m, 165));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 51:8 >> 51:15 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cons = pdcrt_crear_espacio_de_nombres_cons(ctx, PDCRT_GC());
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 165, cons);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 159)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 165), pdcrt_obtener_local(ctx, m, 166), "ParaCadaNúmero", 15, true, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k161);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k113(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k113);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 7:37 >> 7:38 */
pdcrt_fijar_local(ctx, m, 10, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 7:37 >> 7:38 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 7:49 >> 7:55 */
pdcrt_fijar_local(ctx, m, 12, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 7:57 >> 7:70 */
pdcrt_fijar_local(ctx, m, 13, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 6)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 7:73 >> 7:92 */
pdcrt_fijar_local(ctx, m, 15, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 2)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 7:94 >> 7:104 */
pdcrt_fijar_local(ctx, m, 16, PDCRT_OBTENER_CONSTANTE(ctx, m, 0));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 7:73 >> 7:93 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 1);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k114, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 15)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 16)));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k114(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k114);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 7:73 >> 7:93 */
pdcrt_fijar_local(ctx, m, 14, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 7:73 >> 7:93 */
pdcrt_fijar_local_nb(ctx, m, 16, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 7:73 >> 7:93 */
pdcrt_fijar_local_nb(ctx, m, 15, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 7:49 >> 7:56 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 1);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k115, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 12)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 13)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 14)));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k115(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k115);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 7:49 >> 7:56 */
pdcrt_fijar_local(ctx, m, 11, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 7:49 >> 7:56 */
pdcrt_fijar_local_nb(ctx, m, 14, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 7:49 >> 7:56 */
pdcrt_fijar_local_nb(ctx, m, 13, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 7:49 >> 7:56 */
pdcrt_fijar_local_nb(ctx, m, 12, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 7:25 >> 7:29 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 1);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k116, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 11)));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k116(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k116);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 7:25 >> 7:29 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 7:25 >> 7:29 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 7:25 >> 7:29 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 7:25 >> 7:29 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 7:10 >> 7:22 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_obtener_local(ctx, m, 8));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 7:10 >> 7:22 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 8:4 >> 8:19 */
pdcrt_fijar_local(ctx, m, 9, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 3)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 8:21 >> 8:22 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_entero(PDCRT_ENTERO_C(0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 8:24 >> 8:36 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_obtener_local(ctx, m, 7));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 8:38 >> 8:51 */
do {
static const pdcrt_captura caps[] = {{0}, {6}, {5}, {4}};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_f1, caps, 4);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 12, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 8:4 >> 8:20 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 1);
return pdcrt_llamar3(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k120, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 11)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 12)));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k117(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k117);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 10:39 >> 10:40 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 10:39 >> 10:40 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 10:39 >> 10:40 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 11:35 >> 11:41 */
pdcrt_fijar_local(ctx, m, 10, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 11:43 >> 11:56 */
pdcrt_fijar_local(ctx, m, 11, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 1)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 12:43 >> 12:50 */
do {
static const pdcrt_captura caps[] = {{4}};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_f0, caps, 1);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 12, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 11:35 >> 11:42 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 1);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k118, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 11)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 12)));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k118(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k118);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 11:35 >> 11:42 */
pdcrt_fijar_local(ctx, m, 9, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 11:35 >> 11:42 */
pdcrt_fijar_local_nb(ctx, m, 12, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 11:35 >> 11:42 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 11:35 >> 11:42 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 10:23 >> 11:42 */
static const int proto[] =
{ 0, 1, };
pdcrt_extender_pila(ctx, 2);
pdcrt_empujar(ctx, pdcrt_obtener_local(ctx, m, 8));
pdcrt_empujar(ctx, pdcrt_obtener_local(ctx, m, 9));
size_t llamar_nargs = pdcrt_expandir_varargs(ctx, proto, 2);
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 1);
return pdcrt_llamarn(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k119, llamar_nargs, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k119(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k119);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 10:23 >> 11:42 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 10:23 >> 11:42 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 10:23 >> 11:42 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 10:23 >> 11:42 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 10:14 >> 10:19 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_obtener_local(ctx, m, 6));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 10:14 >> 10:19 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 8:38 >> 8:51 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 8:38 >> 8:51 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 8:38 >> 8:51 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k120(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k120);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 8:4 >> 8:20 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 8:4 >> 8:20 */
pdcrt_fijar_local_nb(ctx, m, 12, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 8:4 >> 8:20 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 8:4 >> 8:20 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 8:4 >> 8:20 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 6:4 >> 8:20 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 5:0 >> 16:16 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 5:0 >> 16:16 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 5:0 >> 16:16 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k121(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k121);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 20:22 >> 20:29 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 20:22 >> 20:29 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 20:29 >> 20:30 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 4);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k122, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k122(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k122);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 20:29 >> 20:30 */
pdcrt_fijar_local(ctx, m, 5, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 20:29 >> 20:30 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 20:10 >> 20:19 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 4), pdcrt_obtener_local(ctx, m, 5));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 20:10 >> 20:19 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 21:4 >> 21:23 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 21:25 >> 21:38 */
do {
static const pdcrt_captura caps[] = {{1}, {4}};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_f3, caps, 2);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 7, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 23:22 >> 23:29 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_obtener_local(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 23:34 >> 23:47 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_obtener_local(ctx, m, 3));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 21:4 >> 21:24 */
static const int proto[] =
{ 0, 0, 1, };
pdcrt_extender_pila(ctx, 3);
pdcrt_empujar(ctx, pdcrt_obtener_local(ctx, m, 7));
pdcrt_empujar(ctx, pdcrt_obtener_local(ctx, m, 8));
pdcrt_empujar(ctx, pdcrt_obtener_local(ctx, m, 9));
size_t llamar_nargs = pdcrt_expandir_varargs(ctx, proto, 3);
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 1);
return pdcrt_llamarn(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k125, llamar_nargs, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k123(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k123);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 22:36 >> 22:52 */
pdcrt_fijar_local(ctx, m, 5, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 22:36 >> 22:52 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 22:36 >> 22:52 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 22:17 >> 22:18 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 5);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k124, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k124(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k124);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 22:17 >> 22:18 */
pdcrt_fijar_local(ctx, m, 3, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 22:17 >> 22:18 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 22:17 >> 22:18 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 22:17 >> 22:18 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 21:25 >> 21:38 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 21:25 >> 21:38 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 3)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 21:25 >> 21:38 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k125(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k125);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 21:4 >> 21:24 */
pdcrt_fijar_local(ctx, m, 5, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 21:4 >> 21:24 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 21:4 >> 21:24 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 21:4 >> 21:24 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 21:4 >> 21:24 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 19:4 >> 24:22 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 24:13 >> 24:22 */
pdcrt_fijar_local(ctx, m, 5, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 4)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 24:4 >> 24:22 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 24:4 >> 24:22 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 18:0 >> 25:10 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 18:0 >> 25:10 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 18:0 >> 25:10 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k126(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k126);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 28:22 >> 28:23 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 28:22 >> 28:23 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 28:34 >> 28:35 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_entero(PDCRT_ENTERO_C(2)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 28:22 >> 28:35 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 6);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k127, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k127(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k127);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 28:22 >> 28:35 */
pdcrt_fijar_local(ctx, m, 5, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 28:22 >> 28:35 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 28:22 >> 28:35 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 28:4 >> 30:9 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 5);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 28:4 >> 30:9 */
pdcrt_obj csaltar_obj = pdcrt_obtener_local(ctx, m, 6);
if(csaltar_obj.recv != &pdcrt_recv_booleano) pdcrt_error(ctx, "Se esperaba un objeto de tipo Boole");
if(csaltar_obj.bval)
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k133, PDCRT_XMM_NULO());
else
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k128, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k128(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k128);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 28:4 >> 30:9 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 28:4 >> 30:9 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 29:8 >> 29:26 */
pdcrt_fijar_local(ctx, m, 6, ctx->espacio_de_nombres_runtime);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 29:29 >> 29:108 */
pdcrt_fijar_local(ctx, m, 8, PDCRT_OBTENER_CONSTANTE(ctx, m, 7));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 29:120 >> 29:135 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_obtener_local(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 29:135 >> 29:136 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 0);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k129, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k129(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k129);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 29:135 >> 29:136 */
pdcrt_fijar_local(ctx, m, 9, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 29:135 >> 29:136 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 29:108 >> 29:109 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 8);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k130, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k130(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k130);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 29:108 >> 29:109 */
pdcrt_fijar_local(ctx, m, 7, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 29:108 >> 29:109 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 29:108 >> 29:109 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 29:8 >> 29:26 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 9);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k131, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k131(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k131);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 29:8 >> 29:26 */
pdcrt_fijar_local(ctx, m, 5, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 29:8 >> 29:26 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 29:8 >> 29:26 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 29:8 >> 29:27 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 28:4 >> 30:9 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k134, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k132(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k132);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k133, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k133(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k133);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k134, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k134(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k134);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 32:21 >> 32:36 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 32:38 >> 32:53 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_obtener_local(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 32:55 >> 32:56 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_entero(PDCRT_ENTERO_C(0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 32:59 >> 32:74 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_obtener_local(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 32:74 >> 32:75 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 0);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k135, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 11)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k135(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k135);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 32:74 >> 32:75 */
pdcrt_fijar_local(ctx, m, 10, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 32:74 >> 32:75 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 32:86 >> 32:87 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_entero(PDCRT_ENTERO_C(2)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 32:74 >> 32:87 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 10);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k136, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 11)));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k136(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k136);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 32:74 >> 32:87 */
pdcrt_fijar_local(ctx, m, 9, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 32:74 >> 32:87 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 32:74 >> 32:87 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 32:21 >> 32:37 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 1);
return pdcrt_llamar3(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k137, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k137(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k137);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 32:21 >> 32:37 */
pdcrt_fijar_local(ctx, m, 5, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 32:21 >> 32:37 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 32:21 >> 32:37 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 32:21 >> 32:37 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 32:21 >> 32:37 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 32:10 >> 32:18 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_obtener_local(ctx, m, 5));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 32:10 >> 32:18 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 33:19 >> 33:34 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_obtener_local(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 33:40 >> 33:55 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_obtener_local(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 33:55 >> 33:56 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 0);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k138, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k138(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k138);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 33:55 >> 33:56 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 33:55 >> 33:56 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 33:67 >> 33:68 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_entero(PDCRT_ENTERO_C(1)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 33:55 >> 33:68 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 10);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k139, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k139(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k139);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 33:55 >> 33:68 */
pdcrt_fijar_local(ctx, m, 7, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 33:55 >> 33:68 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 33:55 >> 33:68 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 33:34 >> 33:35 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 2);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k140, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k140(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k140);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 33:34 >> 33:35 */
pdcrt_fijar_local(ctx, m, 5, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 33:34 >> 33:35 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 33:34 >> 33:35 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 33:10 >> 33:16 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 4), pdcrt_obtener_local(ctx, m, 5));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 33:10 >> 33:16 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 34:4 >> 34:23 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 1)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 34:25 >> 34:38 */
do {
static const pdcrt_captura caps[] = {{4}};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_f5, caps, 1);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 7, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 36:25 >> 36:33 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_obtener_local(ctx, m, 3));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 34:4 >> 34:24 */
static const int proto[] =
{ 0, 1, };
pdcrt_extender_pila(ctx, 2);
pdcrt_empujar(ctx, pdcrt_obtener_local(ctx, m, 7));
pdcrt_empujar(ctx, pdcrt_obtener_local(ctx, m, 8));
size_t llamar_nargs = pdcrt_expandir_varargs(ctx, proto, 2);
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 1);
return pdcrt_llamarn(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k142, llamar_nargs, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k141(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k141);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 35:9 >> 35:27 */
pdcrt_fijar_local(ctx, m, 2, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 35:9 >> 35:27 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 35:9 >> 35:27 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 35:9 >> 35:27 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 34:25 >> 34:38 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 34:25 >> 34:38 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 2)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 34:25 >> 34:38 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k142(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k142);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 34:4 >> 34:24 */
pdcrt_fijar_local(ctx, m, 5, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 34:4 >> 34:24 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 34:4 >> 34:24 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 34:4 >> 34:24 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 28:4 >> 34:24 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 27:0 >> 37:16 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 27:0 >> 37:16 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 27:0 >> 37:16 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k143(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k143);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 40:18 >> 40:19 */
pdcrt_fijar_local(ctx, m, 4, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 40:18 >> 40:19 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 40:30 >> 40:31 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_entero(PDCRT_ENTERO_C(0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 40:18 >> 40:31 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 11);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k144, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k144(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k144);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 40:18 >> 40:31 */
pdcrt_fijar_local(ctx, m, 3, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 40:18 >> 40:31 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 40:18 >> 40:31 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 40:4 >> 40:31 */
pdcrt_assert(ctx, pdcrt_obtener_local(ctx, m, 3));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 40:4 >> 40:31 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 42:16 >> 42:20 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_obtener_local(ctx, m, 1));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 42:25 >> 42:26 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_entero(PDCRT_ENTERO_C(0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 42:20 >> 42:21 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 2);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k145, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k145(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k145);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 42:20 >> 42:21 */
pdcrt_fijar_local(ctx, m, 3, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 42:20 >> 42:21 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 42:20 >> 42:21 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 42:10 >> 42:13 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 2), pdcrt_obtener_local(ctx, m, 3));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 42:10 >> 42:13 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 43:4 >> 43:20 */
pdcrt_fijar_local(ctx, m, 4, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 43:22 >> 43:26 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_obtener_local(ctx, m, 1));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 43:28 >> 43:41 */
do {
static const pdcrt_captura caps[] = {{2}};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_f7, caps, 1);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 6, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 43:4 >> 43:21 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 1);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k151, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k146(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k146);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 44:11 >> 44:18 */
pdcrt_fijar_local(ctx, m, 2, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 44:11 >> 44:18 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 44:11 >> 44:18 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 44:8 >> 46:13 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 2);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 44:8 >> 46:13 */
pdcrt_obj csaltar_obj = pdcrt_obtener_local(ctx, m, 3);
if(csaltar_obj.recv != &pdcrt_recv_booleano) pdcrt_error(ctx, "Se esperaba un objeto de tipo Boole");
if(csaltar_obj.bval)
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k149, PDCRT_XMM_NULO());
else
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k147, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k147(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k147);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 44:8 >> 46:13 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 44:8 >> 46:13 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 45:24 >> 45:25 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_obtener_local(ctx, m, 1));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 45:18 >> 45:21 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 0), pdcrt_obtener_local(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 45:18 >> 45:21 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 44:8 >> 46:13 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k150, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k148(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k148);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k149, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k149(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k149);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k150, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k150(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k150);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 43:28 >> 43:41 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 43:28 >> 43:41 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 2)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 43:28 >> 43:41 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k151(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k151);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 43:4 >> 43:21 */
pdcrt_fijar_local(ctx, m, 3, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 43:4 >> 43:21 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 43:4 >> 43:21 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 43:4 >> 43:21 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 40:4 >> 48:16 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 48:13 >> 48:16 */
pdcrt_fijar_local(ctx, m, 3, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 2)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 48:4 >> 48:16 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 3)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 48:4 >> 48:16 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 39:0 >> 49:10 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 39:0 >> 49:10 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 3)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 39:0 >> 49:10 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k152(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k152);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 52:18 >> 52:19 */
pdcrt_fijar_local(ctx, m, 4, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 52:18 >> 52:19 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 52:30 >> 52:31 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_entero(PDCRT_ENTERO_C(0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 52:18 >> 52:31 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 11);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k153, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k153(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k153);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 52:18 >> 52:31 */
pdcrt_fijar_local(ctx, m, 3, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 52:18 >> 52:31 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 52:18 >> 52:31 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 52:4 >> 52:31 */
pdcrt_assert(ctx, pdcrt_obtener_local(ctx, m, 3));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 52:4 >> 52:31 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 54:16 >> 54:20 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_obtener_local(ctx, m, 1));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 54:25 >> 54:26 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_entero(PDCRT_ENTERO_C(0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 54:20 >> 54:21 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 2);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k154, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k154(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k154);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 54:20 >> 54:21 */
pdcrt_fijar_local(ctx, m, 3, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 54:20 >> 54:21 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 54:20 >> 54:21 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 54:10 >> 54:13 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 2), pdcrt_obtener_local(ctx, m, 3));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 54:10 >> 54:13 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 55:4 >> 55:20 */
pdcrt_fijar_local(ctx, m, 4, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 55:22 >> 55:26 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_obtener_local(ctx, m, 1));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 55:28 >> 55:41 */
do {
static const pdcrt_captura caps[] = {{2}};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_f9, caps, 1);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 6, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 55:4 >> 55:21 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 1);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k160, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)));
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k155(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k155);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 56:11 >> 56:18 */
pdcrt_fijar_local(ctx, m, 2, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 56:11 >> 56:18 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 56:11 >> 56:18 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 56:8 >> 58:13 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 2);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 56:8 >> 58:13 */
pdcrt_obj csaltar_obj = pdcrt_obtener_local(ctx, m, 3);
if(csaltar_obj.recv != &pdcrt_recv_booleano) pdcrt_error(ctx, "Se esperaba un objeto de tipo Boole");
if(csaltar_obj.bval)
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k158, PDCRT_XMM_NULO());
else
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k156, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k156(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k156);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 56:8 >> 58:13 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 56:8 >> 58:13 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 57:24 >> 57:25 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_obtener_local(ctx, m, 1));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 57:18 >> 57:21 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 0), pdcrt_obtener_local(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 57:18 >> 57:21 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 56:8 >> 58:13 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k159, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k157(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k157);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k158, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k158(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k158);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k159, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k159(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k159);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 55:28 >> 55:41 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 55:28 >> 55:41 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 2)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 55:28 >> 55:41 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k160(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k160);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 55:4 >> 55:21 */
pdcrt_fijar_local(ctx, m, 3, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 55:4 >> 55:21 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 55:4 >> 55:21 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 55:4 >> 55:21 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 52:4 >> 60:16 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 60:13 >> 60:16 */
pdcrt_fijar_local(ctx, m, 3, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 2)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 60:4 >> 60:16 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 3)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 60:4 >> 60:16 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 51:0 >> 61:10 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 51:0 >> 61:10 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 3)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 51:0 >> 61:10 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k161(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k161);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 157)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 165), pdcrt_obtener_local(ctx, m, 166), "ParaCadaElemento", 16, true, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k162);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k162(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k162);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 158)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 165), pdcrt_obtener_local(ctx, m, 166), "ParaCadaElementoConÍndice", 26, true, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k163);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k163(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k163);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 153)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 165), pdcrt_obtener_local(ctx, m, 166), "Todos", 5, true, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k164);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k164(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k164);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 154)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 165), pdcrt_obtener_local(ctx, m, 166), "EsSubclase", 10, true, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k165);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k165(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k165);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 155)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 165), pdcrt_obtener_local(ctx, m, 166), "Contiene", 8, true, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k166);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k166(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k166);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_obtener_local(ctx, m, 156));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 165), pdcrt_obtener_local(ctx, m, 166), "EsInstancia", 11, true, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k167);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k167(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k167);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 152)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 165), pdcrt_obtener_local(ctx, m, 166), "EsImpar", 7, true, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k168);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k168(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k168);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 142)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 165), pdcrt_obtener_local(ctx, m, 166), "ParaCadaNúmeroConPaso", 22, true, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k169);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k169(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k169);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 143)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 165), pdcrt_obtener_local(ctx, m, 166), "Escribir", 8, true, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k170);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k170(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k170);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 144)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 165), pdcrt_obtener_local(ctx, m, 166), "Identidad", 9, true, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k171);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k171(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k171);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 145)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 165), pdcrt_obtener_local(ctx, m, 166), "Reducir", 7, true, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k172);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k172(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k172);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 146)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 165), pdcrt_obtener_local(ctx, m, 166), "Mapear", 6, true, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k173);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k173(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k173);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 147)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 165), pdcrt_obtener_local(ctx, m, 166), "Filtrar", 7, true, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k174);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k174(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k174);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 148)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 165), pdcrt_obtener_local(ctx, m, 166), "Algún", 6, true, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k175);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k175(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k175);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 151)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 165), pdcrt_obtener_local(ctx, m, 166), "DígitoAEntero", 14, true, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k176);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k176(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k176);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 149)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 165), pdcrt_obtener_local(ctx, m, 166), "Elevar", 6, true, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k177);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k177(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k177);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 150)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 165), pdcrt_obtener_local(ctx, m, 166), "ConvertirAEntero", 16, true, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k178);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k178(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k178);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_obtener_local(ctx, m, 105));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 165), pdcrt_obtener_local(ctx, m, 166), "ConvertirANúmero", 17, true, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k179);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k179(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k179);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 141)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 165), pdcrt_obtener_local(ctx, m, 166), "EsNúmeroEntero", 15, true, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k180);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k180(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k180);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 106)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 165), pdcrt_obtener_local(ctx, m, 166), "EsNúmero", 9, true, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k181);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k181(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k181);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 107)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 165), pdcrt_obtener_local(ctx, m, 166), "Concatenar", 10, true, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k182);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k182(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k182);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 108)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 165), pdcrt_obtener_local(ctx, m, 166), "ArregloConFinal", 15, true, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k183);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k183(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k183);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 140)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 165), pdcrt_obtener_local(ctx, m, 166), "Aplicar\'", 8, true, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k184);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k184(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k184);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 109)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 165), pdcrt_obtener_local(ctx, m, 166), "Aplicar\'i", 9, true, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k185);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k185(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k185);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 110)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 165), pdcrt_obtener_local(ctx, m, 166), "EnviarMensaje", 13, true, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k186);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k186(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k186);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 111)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 165), pdcrt_obtener_local(ctx, m, 166), "Resto", 5, true, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k187);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k187(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k187);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 139)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 165), pdcrt_obtener_local(ctx, m, 166), "Abs", 3, true, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k188);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k188(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k188);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 112)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 165), pdcrt_obtener_local(ctx, m, 166), "Mod", 3, true, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k189);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k189(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k189);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 113)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 165), pdcrt_obtener_local(ctx, m, 166), "EsPar", 5, true, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k190);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k190(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k190);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 114)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 165), pdcrt_obtener_local(ctx, m, 166), "Aplanar", 7, true, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k191);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k191(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k191);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 138)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 165), pdcrt_obtener_local(ctx, m, 166), "AplanarTodo", 11, true, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k192);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k192(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k192);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 115)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 165), pdcrt_obtener_local(ctx, m, 166), "PedazoDeArreglo", 15, true, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k193);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k193(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k193);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 116)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 165), pdcrt_obtener_local(ctx, m, 166), "PrimerElemento", 14, true, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k194);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k194(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k194);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 117)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 165), pdcrt_obtener_local(ctx, m, 166), "ÚltimoElemento", 15, true, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k195);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k195(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k195);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 137)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 165), pdcrt_obtener_local(ctx, m, 166), "ÚnicoElemento", 14, true, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k196);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k196(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k196);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 118)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 165), pdcrt_obtener_local(ctx, m, 166), "EsNulo", 6, true, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k197);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k197(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k197);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 119)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 165), pdcrt_obtener_local(ctx, m, 166), "Max", 3, true, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k198);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k198(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k198);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 120)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 165), pdcrt_obtener_local(ctx, m, 166), "Min", 3, true, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k199);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k199(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k199);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 136)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 165), pdcrt_obtener_local(ctx, m, 166), "NoImplementado", 14, true, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k200);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k200(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k200);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 121)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 165), pdcrt_obtener_local(ctx, m, 166), "MétodoAbstracto", 16, true, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k201);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k201(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k201);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 122)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 165), pdcrt_obtener_local(ctx, m, 166), "Inalcanzable", 12, true, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k202);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k202(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k202);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 123)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 165), pdcrt_obtener_local(ctx, m, 166), "LlamarConEC", 11, true, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k203);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k203(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k203);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 135)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 165), pdcrt_obtener_local(ctx, m, 166), "ArregloSinElementoEnÍndice", 27, true, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k204);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k204(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k204);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 124)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 165), pdcrt_obtener_local(ctx, m, 166), "LeerLínea", 10, true, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k205);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k205(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k205);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 125)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 165), pdcrt_obtener_local(ctx, m, 166), "LeerNúmero", 11, true, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k206);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k206(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k206);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 126)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 165), pdcrt_obtener_local(ctx, m, 166), "Parcial", 7, true, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k207);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k207(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k207);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 134)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 165), pdcrt_obtener_local(ctx, m, 166), "MétodoComoFunción", 19, true, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k208);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k208(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k208);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 127)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 165), pdcrt_obtener_local(ctx, m, 166), "OperadorBinario", 15, true, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k209);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k209(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k209);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 128)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 165), pdcrt_obtener_local(ctx, m, 166), "ContienePredicado", 17, true, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k210);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k210(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k210);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 129)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 165), pdcrt_obtener_local(ctx, m, 166), "BuscarPredicado", 15, true, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k211);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k211(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k211);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 133)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 165), pdcrt_obtener_local(ctx, m, 166), "ParaCadaElementoEnReversa", 25, true, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k212);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k212(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k212);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 130)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 165), pdcrt_obtener_local(ctx, m, 166), "Diccionario", 11, false, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k213);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k213(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k213);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 131)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 165), pdcrt_obtener_local(ctx, m, 166), "Resultado", 9, false, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k214);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k214(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k214);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 132)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 165), pdcrt_obtener_local(ctx, m, 166), "Pila", 4, false, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k215);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k215(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k215);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_obtener_local(ctx, m, 104));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 165), pdcrt_obtener_local(ctx, m, 166), "ObjetoAdHoc", 11, true, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k216);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k216(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k216);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 5:14 >> 5:33 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 160)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 165), pdcrt_obtener_local(ctx, m, 166), "__ParaCadaElemento\'", 19, true, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k217);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k217(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k217);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 18:8 >> 18:15 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_obtener_local(ctx, m, 161));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 165), pdcrt_obtener_local(ctx, m, 166), "Mapear\'", 7, true, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k218);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k218(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k218);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 27:14 >> 27:31 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_obtener_local(ctx, m, 162));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 165), pdcrt_obtener_local(ctx, m, 166), "ParaCadaElemento\'", 17, true, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k219);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k219(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k219);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 39:8 >> 39:15 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_obtener_local(ctx, m, 163));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 165), pdcrt_obtener_local(ctx, m, 166), "Máximo", 7, true, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k220);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k220(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k220);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 51:8 >> 51:15 */
pdcrt_fijar_local(ctx, m, 166, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 164)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 165), pdcrt_obtener_local(ctx, m, 166), "Mínimo", 7, true, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k221);
}
static pdcrt_tk pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k221(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_k221);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
pdcrt_fijar_local_nb(ctx, m, 166, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
return pdcrt_exportar(ctx, m, pdcrt_obtener_local(ctx, m, 165), "pdzibepd_N95_utilidades_N95_iteraci_N95__N95_n", 46);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/utilidades/iteración.pd" => 1:0 >> 61:10 */
pdcrt_fijar_local_nb(ctx, m, 165, pdcrt_objeto_nulo());
}
PDCRT_DECLARAR_ENTRYPOINT(pdzibepd_N95_utilidades_N95_iteraci_N95__N95_n, pdc_mpdzibepd_N95_utilidades_N95_iteraci_N95__N95_n_f11)
#ifdef PDCRT_MAIN
#define PDCRT_DEPS(X) \
    X(pdzibepd_N95_utilidades_N95_iteraci_N95__N95_n, "pdzibepd_N95_utilidades_N95_iteraci_N95__N95_n", 46) \
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
PDCRT_DECLARAR_MAIN(pdzibepd_N95_utilidades_N95_iteraci_N95__N95_n)
#endif
