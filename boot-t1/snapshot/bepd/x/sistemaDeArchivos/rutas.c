#define PDCRT_INTERNO
#include "pdcrt/pdcrt.h"
#include "pdcrt/pdcrt_ops.h"
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_f0(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_f1(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k0(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k1(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k2(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k3(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k4(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k5(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k6(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k7(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k8(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k9(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k10(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k11(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k12(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k13(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k14(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k15(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k16(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k17(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k18(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k19(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k20(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k21(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k22(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k23(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k24(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k25(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k26(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k27(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k28(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k29(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k30(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k31(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k32(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k33(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k34(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k35(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k36(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k37(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k38(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k39(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k40(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k41(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k42(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k43(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k44(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k45(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k46(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k47(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k48(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k49(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k50(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k51(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k52(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k53(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k54(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k55(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k56(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k57(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k58(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k59(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k60(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k61(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k62(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k63(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k64(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k65(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k66(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k67(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k68(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k69(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k70(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k71(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k72(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k73(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k74(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k75(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k76(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k77(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k78(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k79(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k80(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k81(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k82(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k83(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k84(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k85(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k86(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k87(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k88(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k89(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k90(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k91(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k92(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k93(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k94(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k95(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k96(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k97(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k98(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k99(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k100(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k101(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k102(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k103(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k104(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k105(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k106(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k107(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k108(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k109(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k110(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k111(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k112(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k113(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k114(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k115(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k116(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k117(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k118(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k119(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k120(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k121(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k122(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k123(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k124(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k125(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k126(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k127(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k128(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k129(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k130(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k131(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k132(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k133(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k134(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k135(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k136(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k137(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k138(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k139(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k140(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k141(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k142(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k143(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k144(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k145(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k146(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k147(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k148(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k149(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_f0(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 15:0 >> 33:10 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd|15:0|33:10";
PDCRT_ALOJAR_MARCO(ctx, 12, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_p0 { const pdcrt_params_base base; const pdcrt_param_data params[2]; };
static const struct pdc_params_data_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_p0 pdc_params = { .base = { .num_params = 2, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{6}, {7}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 15:36 >> 15:40 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 15:36 >> 15:40 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_obtener_local(ctx, m, 7));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 15:36 >> 15:40 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 15:30 >> 15:34 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 15:30 >> 15:34 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_obtener_local(ctx, m, 6));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 15:30 >> 15:34 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 19:13 >> 19:19 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 16:7 >> 16:16 */
pdcrt_fijar_local(ctx, m, 7, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 2)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 16:18 >> 16:22 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_obtener_local(ctx, m, 4));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 16:24 >> 16:27 */
pdcrt_fijar_local(ctx, m, 9, PDCRT_OBTENER_CONSTANTE(ctx, m, 0));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 16:7 >> 16:17 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 1);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k60, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_f1(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd|1:0|33:10";
PDCRT_ALOJAR_MARCO(ctx, 110, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_p1 { const pdcrt_params_base base; const pdcrt_param_data params[1]; };
static const struct pdc_params_data_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_p1 pdc_params = { .base = { .num_params = 0, .tiene_variadic = false, .idc_variadic = 0, }, .params = {} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
PDCRT_DEFINE_RAICES(2);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_arreglo *constantes = pdcrt_crear_arreglo_vacio(ctx, PDCRT_GC(), 8LLU);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
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
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "../", 3));
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
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "redimensionar", 13));
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
PDCRT_FIJAR_CONSTANTES(ctx, m, constantes);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 50, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 108));
pdcrt_fijar_local(ctx, m, 52, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 108));
pdcrt_fijar_local(ctx, m, 54, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 108));
pdcrt_fijar_local(ctx, m, 56, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 108));
pdcrt_fijar_local(ctx, m, 58, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 108));
pdcrt_fijar_local(ctx, m, 60, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 108));
pdcrt_fijar_local(ctx, m, 62, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 108));
pdcrt_fijar_local(ctx, m, 64, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 108));
pdcrt_fijar_local(ctx, m, 66, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 108));
pdcrt_fijar_local(ctx, m, 68, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 108));
pdcrt_fijar_local(ctx, m, 70, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 108));
pdcrt_fijar_local(ctx, m, 72, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 108));
pdcrt_fijar_local(ctx, m, 74, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 108));
pdcrt_fijar_local(ctx, m, 76, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 108));
pdcrt_fijar_local(ctx, m, 78, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 108));
pdcrt_fijar_local(ctx, m, 80, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 108));
pdcrt_fijar_local(ctx, m, 82, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 108));
pdcrt_fijar_local(ctx, m, 84, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 108));
pdcrt_fijar_local(ctx, m, 86, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 108));
pdcrt_fijar_local(ctx, m, 88, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 108));
pdcrt_fijar_local(ctx, m, 90, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 108));
pdcrt_fijar_local(ctx, m, 92, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 108));
pdcrt_fijar_local(ctx, m, 94, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 108));
pdcrt_fijar_local(ctx, m, 96, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 108));
pdcrt_fijar_local(ctx, m, 98, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 100, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 108));
pdcrt_fijar_local(ctx, m, 102, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 101, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 108));
pdcrt_fijar_local(ctx, m, 99, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 108));
pdcrt_fijar_local(ctx, m, 97, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 108));
pdcrt_fijar_local(ctx, m, 95, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 108));
pdcrt_fijar_local(ctx, m, 93, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 108));
pdcrt_fijar_local(ctx, m, 91, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 108));
pdcrt_fijar_local(ctx, m, 89, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 108));
pdcrt_fijar_local(ctx, m, 87, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 108));
pdcrt_fijar_local(ctx, m, 85, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 108));
pdcrt_fijar_local(ctx, m, 83, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 108));
pdcrt_fijar_local(ctx, m, 81, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 108));
pdcrt_fijar_local(ctx, m, 79, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 108));
pdcrt_fijar_local(ctx, m, 77, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 108));
pdcrt_fijar_local(ctx, m, 75, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 108));
pdcrt_fijar_local(ctx, m, 73, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 108));
pdcrt_fijar_local(ctx, m, 71, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 108));
pdcrt_fijar_local(ctx, m, 69, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 108));
pdcrt_fijar_local(ctx, m, 67, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 108));
pdcrt_fijar_local(ctx, m, 65, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 108));
pdcrt_fijar_local(ctx, m, 63, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 108));
pdcrt_fijar_local(ctx, m, 61, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 108));
pdcrt_fijar_local(ctx, m, 59, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 108));
pdcrt_fijar_local(ctx, m, 57, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 108));
pdcrt_fijar_local(ctx, m, 55, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 108));
pdcrt_fijar_local(ctx, m, 53, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 51, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 49, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 3:0 >> 3:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 3:0 >> 3:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 108));
pdcrt_fijar_local(ctx, m, 106, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 3:0 >> 3:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 3:0 >> 3:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 3:0 >> 3:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 108));
pdcrt_fijar_local(ctx, m, 104, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 3:0 >> 3:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 3:0 >> 3:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 3:0 >> 3:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 108));
pdcrt_fijar_local(ctx, m, 105, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 3:0 >> 3:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 15:8 >> 15:28 */
pdcrt_fijar_local_nb(ctx, m, 107, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
return pdcrt_importar(ctx, m, "pdzibepd_N95_builtins", 21, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k0);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k0(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 108, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "ParaCadaElemento", 16, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k1);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k1(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 49, pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "Todos", 5, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k2);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k2(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k2);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 50, pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "Contiene", 8, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k3);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k3(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k3);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 51, pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "EsImpar", 7, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k4);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k4(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k4);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 52), pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "Escribir", 8, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k5);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k5(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k5);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 53), pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "Reducir", 7, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k6);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k6(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k6);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 54), pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "Filtrar", 7, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k7);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k7(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k7);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 55), pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "DígitoAEntero", 14, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k8);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k8(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k8);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 56), pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "ConvertirAEntero", 16, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k9);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k9(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k9);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 57), pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "EsNúmeroEntero", 15, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k10);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k10(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k10);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 58), pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "Concatenar", 10, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k11);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k11(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k11);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 59), pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "Aplicar\'", 8, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k12);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k12(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k12);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 60), pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "EnviarMensaje", 13, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k13);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k13(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k13);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 61), pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "Abs", 3, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k14);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k14(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k14);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 62), pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "EsPar", 5, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k15);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k15(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k15);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 63), pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "AplanarTodo", 11, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k16);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k16(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k16);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 64), pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "PrimerElemento", 14, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k17);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k17(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k17);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 65), pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "ÚnicoElemento", 14, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k18);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k18(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k18);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 66), pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "Max", 3, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k19);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k19(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k19);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 67), pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "NoImplementado", 14, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k20);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k20(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k20);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 68), pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "Inalcanzable", 12, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k21);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k21(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k21);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 69), pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "ArregloSinElementoEnÍndice", 27, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k22);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k22(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k22);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 70), pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "LeerNúmero", 11, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k23);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k23(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k23);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 71), pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "MétodoComoFunción", 19, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k24);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k24(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k24);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 72), pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "ContienePredicado", 17, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k25);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k25(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k25);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 73), pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "ParaCadaElementoEnReversa", 25, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k26);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k26(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k26);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 74), pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "Resultado", 9, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k27);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k27(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k27);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 75), pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "Pila", 4, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k28);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k28(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k28);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 76), pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "Diccionario", 11, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k29);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k29(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k29);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 77), pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "BuscarPredicado", 15, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k30);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k30(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k30);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 78), pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "OperadorBinario", 15, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k31);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k31(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k31);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 79), pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "Parcial", 7, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k32);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k32(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k32);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 80), pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "LeerLínea", 10, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k33);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k33(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k33);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 81), pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "LlamarConEC", 11, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k34);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k34(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k34);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 82), pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "MétodoAbstracto", 16, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k35);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k35(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k35);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 83), pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "Min", 3, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k36);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k36(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k36);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 84), pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "EsNulo", 6, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k37);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k37(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k37);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 85), pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "ÚltimoElemento", 15, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k38);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k38(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k38);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 86), pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "PedazoDeArreglo", 15, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k39);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k39(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k39);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 87), pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "Aplanar", 7, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k40);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k40(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k40);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 88), pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "Mod", 3, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k41);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k41(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k41);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 89), pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "Resto", 5, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k42);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k42(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k42);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 90), pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "Aplicar\'i", 9, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k43);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k43(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k43);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 91), pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "ArregloConFinal", 15, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k44);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k44(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k44);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 92), pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "EsNúmero", 9, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k45);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k45(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k45);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 93), pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "ConvertirANúmero", 17, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k46);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k46(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k46);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 94), pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "Elevar", 6, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k47);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k47(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k47);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 95), pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "Algún", 6, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k48);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k48(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k48);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 96), pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "Mapear", 6, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k49);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k49(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k49);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 97), pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "Identidad", 9, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k50);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k50(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k50);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 98), pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "ParaCadaNúmeroConPaso", 22, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k51);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k51(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k51);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 99), pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "EsInstancia", 11, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k52);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k52(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k52);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 100, pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "EsSubclase", 10, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k53);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k53(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k53);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 101, pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "ParaCadaElementoConÍndice", 26, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k54);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k54(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k54);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 102), pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "ParaCadaNúmero", 15, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k55);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k55(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k55);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 3:0 >> 3:8 */
return pdcrt_importar(ctx, m, "pdzibepd_N95_utilidades_N95_texto", 33, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k56);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k56(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k56);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 3:0 >> 3:8 */
pdcrt_fijar_local(ctx, m, 108, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 3:32 >> 3:41 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "EsPrefijo", 9, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k57);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k57(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k57);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 3:32 >> 3:41 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 3:32 >> 3:41 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 104), pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 3:32 >> 3:41 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 3:43 >> 3:49 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "Partir", 6, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k58);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k58(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k58);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 3:43 >> 3:49 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 3:43 >> 3:49 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 105), pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 3:43 >> 3:49 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 3:51 >> 3:55 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "Unir", 4, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k59);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k59(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k59);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 3:51 >> 3:55 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 3:51 >> 3:55 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 106), pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 3:51 >> 3:55 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 3:0 >> 3:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 15:0 >> 33:10 */
do {
static const pdcrt_captura caps[] = {{106}, {105}, {104}};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_f0, caps, 3);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 108, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 15:8 >> 15:28 */
pdcrt_fijar_local_nb(ctx, m, 107, pdcrt_obtener_local(ctx, m, 108));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 15:8 >> 15:28 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cons = pdcrt_crear_espacio_de_nombres_cons(ctx, PDCRT_GC());
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 108, cons);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_obtener_local(ctx, m, 103));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "ParaCadaNúmero", 15, true, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k91);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k60(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k60);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 16:7 >> 16:17 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 16:7 >> 16:17 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 16:7 >> 16:17 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 16:7 >> 16:17 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 16:4 >> 18:9 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 6);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 16:4 >> 18:9 */
pdcrt_obj csaltar_obj = pdcrt_obtener_local(ctx, m, 7);
if(csaltar_obj.recv != &pdcrt_recv_booleano) pdcrt_error(ctx, "Se esperaba un objeto de tipo Boole");
if(csaltar_obj.bval)
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k64, PDCRT_XMM_NULO());
else
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k61, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k61(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k61);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 16:4 >> 18:9 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 16:4 >> 18:9 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 17:17 >> 17:21 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_obtener_local(ctx, m, 4));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 17:32 >> 17:33 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_entero(PDCRT_ENTERO_C(1)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 17:35 >> 17:39 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_obtener_local(ctx, m, 4));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 17:39 >> 17:40 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 2);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k62, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k62(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k62);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 17:39 >> 17:40 */
pdcrt_fijar_local(ctx, m, 9, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 17:39 >> 17:40 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 17:21 >> 17:22 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 3);
return pdcrt_llamar2(ctx, m->k.marco, m->k.kf, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 17:21 >> 17:22 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 17:21 >> 17:22 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 17:21 >> 17:22 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 16:4 >> 18:9 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k65, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k63(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k63);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k64, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k64(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k64);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k65, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k65(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k65);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 20:19 >> 20:25 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 1)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 20:27 >> 20:31 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_obtener_local(ctx, m, 3));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 20:33 >> 20:36 */
pdcrt_fijar_local(ctx, m, 10, PDCRT_OBTENER_CONSTANTE(ctx, m, 0));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 20:19 >> 20:26 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 1);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k66, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k66(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k66);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 20:19 >> 20:26 */
pdcrt_fijar_local(ctx, m, 7, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 20:19 >> 20:26 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 20:19 >> 20:26 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 20:19 >> 20:26 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 20:10 >> 20:16 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_obtener_local(ctx, m, 7));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 20:10 >> 20:16 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k67, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k67(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k67);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 21:13 >> 21:22 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 2)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 21:24 >> 21:28 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_obtener_local(ctx, m, 4));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 21:30 >> 21:35 */
pdcrt_fijar_local(ctx, m, 10, PDCRT_OBTENER_CONSTANTE(ctx, m, 4));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 21:13 >> 21:23 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 1);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k68, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k68(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k68);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 21:13 >> 21:23 */
pdcrt_fijar_local(ctx, m, 7, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 21:13 >> 21:23 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 21:13 >> 21:23 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 21:13 >> 21:23 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 21:4 >> 27:15 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 7);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 21:4 >> 27:15 */
pdcrt_obj csaltar_obj = pdcrt_obtener_local(ctx, m, 8);
if(csaltar_obj.recv != &pdcrt_recv_booleano) pdcrt_error(ctx, "Se esperaba un objeto de tipo Boole");
if(csaltar_obj.bval)
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k83, PDCRT_XMM_NULO());
else
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k69, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k69(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k69);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 21:4 >> 27:15 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 21:4 >> 27:15 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 22:8 >> 22:14 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_obtener_local(ctx, m, 5));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 22:31 >> 22:37 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_obtener_local(ctx, m, 5));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 22:37 >> 22:38 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 2);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k70, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 11)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k70(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k70);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 22:37 >> 22:38 */
pdcrt_fijar_local(ctx, m, 10, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 22:37 >> 22:38 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 22:49 >> 22:50 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_entero(PDCRT_ENTERO_C(1)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 22:37 >> 22:50 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 5);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k71, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 11)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k71(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k71);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 22:37 >> 22:50 */
pdcrt_fijar_local(ctx, m, 9, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 22:37 >> 22:50 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 22:37 >> 22:50 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 22:14 >> 22:15 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 6);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k72, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k72(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k72);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 22:14 >> 22:15 */
pdcrt_fijar_local(ctx, m, 7, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 22:14 >> 22:15 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 22:14 >> 22:15 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 22:14 >> 26:19 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 23:21 >> 23:25 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_obtener_local(ctx, m, 4));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 23:36 >> 23:37 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_entero(PDCRT_ENTERO_C(3)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 23:39 >> 23:43 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_obtener_local(ctx, m, 4));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 23:43 >> 23:44 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 2);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k73, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 11)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k73(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k73);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 23:43 >> 23:44 */
pdcrt_fijar_local(ctx, m, 10, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 23:43 >> 23:44 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 23:25 >> 23:26 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 3);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k74, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k74(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k74);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 23:25 >> 23:26 */
pdcrt_fijar_local(ctx, m, 7, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 23:25 >> 23:26 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 23:25 >> 23:26 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 23:25 >> 23:26 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 23:14 >> 23:18 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_obtener_local(ctx, m, 7));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 23:14 >> 23:18 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k75, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k75(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k75);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 24:17 >> 24:26 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 2)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 24:28 >> 24:32 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_obtener_local(ctx, m, 4));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 24:34 >> 24:37 */
pdcrt_fijar_local(ctx, m, 10, PDCRT_OBTENER_CONSTANTE(ctx, m, 0));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 24:17 >> 24:27 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 1);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k76, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k76(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k76);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 24:17 >> 24:27 */
pdcrt_fijar_local(ctx, m, 7, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 24:17 >> 24:27 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 24:17 >> 24:27 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 24:17 >> 24:27 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 24:8 >> 26:19 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 7);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 24:8 >> 26:19 */
pdcrt_obj csaltar_obj = pdcrt_obtener_local(ctx, m, 8);
if(csaltar_obj.recv != &pdcrt_recv_booleano) pdcrt_error(ctx, "Se esperaba un objeto de tipo Boole");
if(csaltar_obj.bval)
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k81, PDCRT_XMM_NULO());
else
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k77, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k77(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k77);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 24:8 >> 26:19 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 24:8 >> 26:19 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 25:25 >> 25:29 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_obtener_local(ctx, m, 4));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 25:40 >> 25:41 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_entero(PDCRT_ENTERO_C(1)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 25:43 >> 25:47 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_obtener_local(ctx, m, 4));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 25:47 >> 25:48 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 2);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k78, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 11)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k78(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k78);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 25:47 >> 25:48 */
pdcrt_fijar_local(ctx, m, 10, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 25:47 >> 25:48 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 25:29 >> 25:30 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 3);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k79, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k79(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k79);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 25:29 >> 25:30 */
pdcrt_fijar_local(ctx, m, 7, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 25:29 >> 25:30 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 25:29 >> 25:30 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 25:29 >> 25:30 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 25:18 >> 25:22 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_obtener_local(ctx, m, 7));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 25:18 >> 25:22 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 24:8 >> 26:19 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k75, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k80(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k80);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k81, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k81(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k81);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 21:4 >> 27:15 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k67, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k82(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k82);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k83, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k83(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k83);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 29:10 >> 29:19 */
pdcrt_fijar_local(ctx, m, 9, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 2)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 29:21 >> 29:25 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_obtener_local(ctx, m, 4));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 29:27 >> 29:30 */
pdcrt_fijar_local(ctx, m, 11, PDCRT_OBTENER_CONSTANTE(ctx, m, 0));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 29:10 >> 29:20 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 1);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k84, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 11)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k84(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k84);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 29:10 >> 29:20 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 29:10 >> 29:20 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 29:10 >> 29:20 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 29:10 >> 29:20 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 29:7 >> 29:20 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 8);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 29:7 >> 29:20 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 29:4 >> 31:9 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 7);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 29:4 >> 31:9 */
pdcrt_obj csaltar_obj = pdcrt_obtener_local(ctx, m, 8);
if(csaltar_obj.recv != &pdcrt_recv_booleano) pdcrt_error(ctx, "Se esperaba un objeto de tipo Boole");
if(csaltar_obj.bval)
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k88, PDCRT_XMM_NULO());
else
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k85, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k85(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k85);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 29:4 >> 31:9 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 29:4 >> 31:9 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 30:21 >> 30:24 */
pdcrt_fijar_local(ctx, m, 8, PDCRT_OBTENER_CONSTANTE(ctx, m, 0));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 30:37 >> 30:41 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_obtener_local(ctx, m, 4));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 30:24 >> 30:25 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 7);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k86, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k86(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k86);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 30:24 >> 30:25 */
pdcrt_fijar_local(ctx, m, 7, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 30:24 >> 30:25 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 30:24 >> 30:25 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 30:14 >> 30:18 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_obtener_local(ctx, m, 7));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 30:14 >> 30:18 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 29:4 >> 31:9 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k89, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k87(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k87);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k88, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k88(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k88);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k89, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k89(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k89);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 32:14 >> 32:18 */
pdcrt_fijar_local(ctx, m, 9, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 32:20 >> 32:26 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_obtener_local(ctx, m, 5));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 32:28 >> 32:31 */
pdcrt_fijar_local(ctx, m, 11, PDCRT_OBTENER_CONSTANTE(ctx, m, 0));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 32:14 >> 32:19 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 1);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k90, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 11)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k90(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k90);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 32:14 >> 32:19 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 32:14 >> 32:19 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 32:14 >> 32:19 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 32:14 >> 32:19 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 32:45 >> 32:49 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_obtener_local(ctx, m, 4));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 32:32 >> 32:33 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 7);
return pdcrt_llamar1(ctx, m->k.marco, m->k.kf, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 32:32 >> 32:33 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 32:32 >> 32:33 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 15:0 >> 33:10 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 15:0 >> 33:10 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 15:0 >> 33:10 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k91(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k91);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_obtener_local(ctx, m, 49));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "ParaCadaElemento", 16, true, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k92);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k92(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k92);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 102)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "ParaCadaElementoConÍndice", 26, true, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k93);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k93(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k93);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_obtener_local(ctx, m, 50));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "Todos", 5, true, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k94);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k94(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k94);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_obtener_local(ctx, m, 101));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "EsSubclase", 10, true, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k95);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k95(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k95);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_obtener_local(ctx, m, 51));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "Contiene", 8, true, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k96);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k96(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k96);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_obtener_local(ctx, m, 100));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "EsInstancia", 11, true, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k97);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k97(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k97);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 52)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "EsImpar", 7, true, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k98);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k98(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k98);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 99)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "ParaCadaNúmeroConPaso", 22, true, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k99);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k99(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k99);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 53)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "Escribir", 8, true, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k100);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k100(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k100);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 98)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "Identidad", 9, true, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k101);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k101(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k101);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 54)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "Reducir", 7, true, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k102);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k102(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k102);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 97)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "Mapear", 6, true, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k103);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k103(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k103);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 55)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "Filtrar", 7, true, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k104);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k104(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k104);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 96)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "Algún", 6, true, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k105);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k105(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k105);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 56)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "DígitoAEntero", 14, true, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k106);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k106(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k106);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 95)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "Elevar", 6, true, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k107);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k107(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k107);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 57)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "ConvertirAEntero", 16, true, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k108);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k108(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k108);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 94)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "ConvertirANúmero", 17, true, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k109);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k109(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k109);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 58)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "EsNúmeroEntero", 15, true, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k110);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k110(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k110);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 93)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "EsNúmero", 9, true, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k111);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k111(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k111);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 59)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "Concatenar", 10, true, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k112);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k112(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k112);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 92)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "ArregloConFinal", 15, true, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k113);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k113(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k113);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 60)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "Aplicar\'", 8, true, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k114);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k114(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k114);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 91)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "Aplicar\'i", 9, true, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k115);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k115(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k115);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 61)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "EnviarMensaje", 13, true, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k116);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k116(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k116);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 90)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "Resto", 5, true, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k117);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k117(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k117);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 62)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "Abs", 3, true, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k118);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k118(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k118);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 89)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "Mod", 3, true, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k119);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k119(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k119);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 63)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "EsPar", 5, true, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k120);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k120(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k120);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 88)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "Aplanar", 7, true, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k121);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k121(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k121);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 64)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "AplanarTodo", 11, true, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k122);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k122(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k122);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 87)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "PedazoDeArreglo", 15, true, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k123);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k123(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k123);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 65)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "PrimerElemento", 14, true, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k124);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k124(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k124);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 86)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "ÚltimoElemento", 15, true, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k125);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k125(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k125);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 66)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "ÚnicoElemento", 14, true, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k126);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k126(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k126);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 85)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "EsNulo", 6, true, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k127);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k127(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k127);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 67)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "Max", 3, true, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k128);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k128(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k128);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 84)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "Min", 3, true, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k129);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k129(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k129);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 68)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "NoImplementado", 14, true, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k130);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k130(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k130);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 83)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "MétodoAbstracto", 16, true, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k131);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k131(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k131);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 69)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "Inalcanzable", 12, true, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k132);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k132(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k132);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 82)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "LlamarConEC", 11, true, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k133);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k133(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k133);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 70)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "ArregloSinElementoEnÍndice", 27, true, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k134);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k134(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k134);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 81)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "LeerLínea", 10, true, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k135);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k135(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k135);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 71)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "LeerNúmero", 11, true, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k136);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k136(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k136);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 80)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "Parcial", 7, true, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k137);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k137(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k137);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 72)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "MétodoComoFunción", 19, true, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k138);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k138(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k138);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 79)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "OperadorBinario", 15, true, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k139);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k139(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k139);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 73)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "ContienePredicado", 17, true, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k140);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k140(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k140);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 78)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "BuscarPredicado", 15, true, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k141);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k141(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k141);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 74)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "ParaCadaElementoEnReversa", 25, true, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k142);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k142(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k142);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 77)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "Diccionario", 11, false, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k143);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k143(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k143);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 75)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "Resultado", 9, false, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k144);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k144(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k144);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 76)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "Pila", 4, false, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k145);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k145(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k145);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 3:32 >> 3:41 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 104)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "EsPrefijo", 9, true, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k146);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k146(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k146);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 3:43 >> 3:49 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 105)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "Partir", 6, true, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k147);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k147(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k147);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 3:51 >> 3:55 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 106)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "Unir", 4, true, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k148);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k148(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k148);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 15:8 >> 15:28 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_obtener_local(ctx, m, 107));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "ResolverRutaRelativa", 20, true, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k149);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k149(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_k149);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
return pdcrt_exportar(ctx, m, pdcrt_obtener_local(ctx, m, 108), "pdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas", 46);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/sistemaDeArchivos/rutas.pd" => 1:0 >> 33:10 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
}
PDCRT_DECLARAR_ENTRYPOINT(pdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas, pdc_mpdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas_f1)
#ifdef PDCRT_MAIN
#define PDCRT_DEPS(X) \
    X(pdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas, "pdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas", 46) \
    X(pdzibepd_N95_builtins, "pdzibepd_N95_builtins", 21) \
    X(pdzibepd_N95_builtinsImpl, "pdzibepd_N95_builtinsImpl", 25) \
    X(pdzibepd_N95_datos_N95_pila, "pdzibepd_N95_datos_N95_pila", 27) \
    X(pdzibepd_N95_datos_N95_diccionario, "pdzibepd_N95_datos_N95_diccionario", 34) \
    X(pdzibepd_N95_datos_N95_diccionario_N95_hashmap, "pdzibepd_N95_datos_N95_diccionario_N95_hashmap", 46) \
    X(pdzibepd_N95_datos_N95_diccionario_N95_interfaz, "pdzibepd_N95_datos_N95_diccionario_N95_interfaz", 47) \
    X(pdzibepd_N95_datos_N95_diccionario_N95_alist, "pdzibepd_N95_datos_N95_diccionario_N95_alist", 44) \
    X(pdzibepd_N95_datos_N95_resultado, "pdzibepd_N95_datos_N95_resultado", 32) \
    X(pdzibepd_N95_utilidades_N95_texto, "pdzibepd_N95_utilidades_N95_texto", 33)
PDCRT_DECLARAR_DEPS(PDCRT_DEPS)
PDCRT_DECLARAR_MAIN(pdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas)
#endif
