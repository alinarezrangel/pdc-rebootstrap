#define PDCRT_INTERNO
#include "pdcrt/pdcrt.h"
#include "pdcrt/pdcrt_ops.h"
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_f0(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_f1(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_f2(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_f3(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_f4(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_f5(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_f6(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k0(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k1(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k2(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k3(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k4(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k5(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k6(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k7(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k8(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k9(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k10(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k11(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k12(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k13(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k14(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k15(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k16(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k17(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k18(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k19(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k20(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k21(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k22(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k23(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k24(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k25(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k26(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k27(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k28(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k29(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k30(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k31(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k32(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k33(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k34(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k35(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k36(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k37(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k38(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k39(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k40(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k41(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k42(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k43(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k44(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k45(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k46(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k47(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k48(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k49(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k50(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k51(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k52(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k53(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k54(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k55(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k56(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k57(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k58(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k59(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k60(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k61(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k62(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k63(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k64(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k65(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k66(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k67(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k68(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k69(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k70(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k71(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k72(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k73(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k74(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k75(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k76(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k77(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k78(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k79(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k80(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k81(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k82(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k83(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k84(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k85(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k86(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k87(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k88(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k89(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k90(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k91(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k92(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k93(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k94(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k95(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k96(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k97(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k98(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k99(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k100(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k101(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k102(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k103(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k104(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k105(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k106(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k107(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k108(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k109(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k110(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k111(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k112(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k113(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k114(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k115(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k116(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k117(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k118(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k119(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k120(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k121(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k122(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k123(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k124(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k125(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k126(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k127(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k128(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k129(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k130(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k131(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k132(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k133(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k134(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k135(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k136(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k137(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k138(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k139(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k140(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k141(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k142(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k143(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k144(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k145(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k146(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k147(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k148(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k149(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k150(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k151(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k152(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k153(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k154(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k155(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k156(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k157(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k158(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k159(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k160(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k161(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k162(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k163(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k164(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k165(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k166(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k167(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k168(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k169(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k170(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k171(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k172(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k173(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k174(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k175(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k176(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k177(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k178(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k179(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k180(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k181(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k182(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k183(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k184(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k185(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k186(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k187(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k188(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k189(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_f0(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 46:0 >> 51:9 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd|46:0|51:9";
PDCRT_ALOJAR_MARCO(ctx, 11, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_p0 { const pdcrt_params_base base; const pdcrt_param_data params[5]; };
static const struct pdc_params_data_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_p0 pdc_params = { .base = { .num_params = 5, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{6}, {7}, {8}, {9}, {10}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 46:72 >> 46:78 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 46:72 >> 46:78 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_obtener_local(ctx, m, 10));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 46:72 >> 46:78 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 46:63 >> 46:70 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 46:63 >> 46:70 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 10));
pdcrt_fijar_local(ctx, m, 4, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 46:63 >> 46:70 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 46:63 >> 46:70 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 4), pdcrt_obtener_local(ctx, m, 9));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 46:63 >> 46:70 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 46:55 >> 46:61 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 46:55 >> 46:61 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_obtener_local(ctx, m, 8));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 46:55 >> 46:61 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 46:37 >> 46:53 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 46:37 >> 46:53 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_obtener_local(ctx, m, 7));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 46:37 >> 46:53 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 46:0 >> 51:9 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 46:0 >> 51:9 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_obtener_local(ctx, m, 6));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 46:0 >> 51:9 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 47:10 >> 47:12 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_obtener_local(ctx, m, 1));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 47:32 >> 47:48 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_obtener_local(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 47:4 >> 47:48 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 9);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k63, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_f1(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 53:0 >> 55:9 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd|53:0|55:9";
PDCRT_ALOJAR_MARCO(ctx, 8, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_p1 { const pdcrt_params_base base; const pdcrt_param_data params[1]; };
static const struct pdc_params_data_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_p1 pdc_params = { .base = { .num_params = 1, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{1}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 53:0 >> 55:9 */
pdcrt_fijar_local_nb(ctx, m, 0, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 53:0 >> 55:9 */
pdcrt_fijar_local_nb(ctx, m, 0, pdcrt_obtener_local(ctx, m, 1));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 53:0 >> 55:9 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 54:13 >> 54:32 */
pdcrt_fijar_local(ctx, m, 2, PDCRT_OBTENER_CONSTANTE(ctx, m, 15));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 54:44 >> 54:46 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_obtener_local(ctx, m, 0));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 54:46 >> 54:47 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 3);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k68, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_f2(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 86:0 >> 95:9 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd|86:0|95:9";
PDCRT_ALOJAR_MARCO(ctx, 6, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_p2 { const pdcrt_params_base base; const pdcrt_param_data params[3]; };
static const struct pdc_params_data_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_p2 pdc_params = { .base = { .num_params = 3, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{3}, {4}, {5}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 86:54 >> 86:70 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 86:54 >> 86:70 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_obtener_local(ctx, m, 5));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 86:54 >> 86:70 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 86:46 >> 86:52 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 86:46 >> 86:52 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_obtener_local(ctx, m, 4));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 86:46 >> 86:52 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 86:0 >> 95:9 */
pdcrt_fijar_local_nb(ctx, m, 0, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 86:0 >> 95:9 */
pdcrt_fijar_local_nb(ctx, m, 0, pdcrt_obtener_local(ctx, m, 3));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 86:0 >> 95:9 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 87:10 >> 87:12 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_obtener_local(ctx, m, 0));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 87:22 >> 87:28 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_obtener_local(ctx, m, 1));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 87:4 >> 87:28 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 23);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k84, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_f3(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 97:0 >> 112:9 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd|97:0|112:9";
PDCRT_ALOJAR_MARCO(ctx, 7, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_p3 { const pdcrt_params_base base; const pdcrt_param_data params[1]; };
static const struct pdc_params_data_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_p3 pdc_params = { .base = { .num_params = 1, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{2}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 97:0 >> 112:9 */
pdcrt_fijar_local_nb(ctx, m, 0, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 97:0 >> 112:9 */
pdcrt_fijar_local_nb(ctx, m, 0, pdcrt_obtener_local(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 97:0 >> 112:9 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 98:13 >> 98:14 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 99:14 >> 99:16 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_obtener_local(ctx, m, 0));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 99:16 >> 99:17 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 19);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k93, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_f4(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 114:0 >> 121:9 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd|114:0|121:9";
PDCRT_ALOJAR_MARCO(ctx, 6, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_p4 { const pdcrt_params_base base; const pdcrt_param_data params[1]; };
static const struct pdc_params_data_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_p4 pdc_params = { .base = { .num_params = 1, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{2}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 114:0 >> 121:9 */
pdcrt_fijar_local_nb(ctx, m, 0, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 114:0 >> 121:9 */
pdcrt_fijar_local_nb(ctx, m, 0, pdcrt_obtener_local(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 114:0 >> 121:9 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 115:13 >> 115:14 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 116:14 >> 116:16 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_obtener_local(ctx, m, 0));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 116:16 >> 116:17 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 19);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k118, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_f5(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 123:0 >> 125:9 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd|123:0|125:9";
PDCRT_ALOJAR_MARCO(ctx, 9, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_p5 { const pdcrt_params_base base; const pdcrt_param_data params[1]; };
static const struct pdc_params_data_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_p5 pdc_params = { .base = { .num_params = 1, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{2}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 123:0 >> 125:9 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 123:0 >> 125:9 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_obtener_local(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 123:0 >> 125:9 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 124:13 >> 124:29 */
pdcrt_fijar_local(ctx, m, 3, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 124:37 >> 124:39 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_obtener_local(ctx, m, 1));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 124:39 >> 124:40 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 3);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k127, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_f6(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd|1:0|125:9";
PDCRT_ALOJAR_MARCO(ctx, 112, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_p6 { const pdcrt_params_base base; const pdcrt_param_data params[1]; };
static const struct pdc_params_data_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_p6 pdc_params = { .base = { .num_params = 0, .tiene_variadic = false, .idc_variadic = 0, }, .params = {} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
PDCRT_DEFINE_RAICES(2);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_arreglo *constantes = pdcrt_crear_arreglo_vacio(ctx, PDCRT_GC(), 34LLU);
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
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "PosiciónTextual", 16));
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
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "nombreDelArchivo", 16));
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
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "línea", 6));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "columna", 7));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "offset", 6));
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
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "fijar_nombreDelArchivo", 22));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "fijar_línea", 12));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "fijar_columna", 13));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "fijar_offset", 12));
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
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "«~t:~t:~t @ ~t»", 17));
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
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "Puerto", 6));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "PuertoConPosiciónTextual", 25));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "puerto", 6));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "viejaLínea", 11));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "viejaColumna", 12));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "viejoOffset", 11));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "fijar_puerto", 12));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "fijar_viejaLínea", 17));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "fijar_viejaColumna", 18));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "fijar_viejoOffset", 17));
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
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "posiciónActual", 15));
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
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 51, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 108));
pdcrt_fijar_local(ctx, m, 53, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 108));
pdcrt_fijar_local(ctx, m, 55, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 108));
pdcrt_fijar_local(ctx, m, 57, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 108));
pdcrt_fijar_local(ctx, m, 59, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 108));
pdcrt_fijar_local(ctx, m, 61, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 108));
pdcrt_fijar_local(ctx, m, 63, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 108));
pdcrt_fijar_local(ctx, m, 65, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 108));
pdcrt_fijar_local(ctx, m, 67, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 108));
pdcrt_fijar_local(ctx, m, 69, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 108));
pdcrt_fijar_local(ctx, m, 71, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 108));
pdcrt_fijar_local(ctx, m, 73, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 108));
pdcrt_fijar_local(ctx, m, 75, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 108));
pdcrt_fijar_local(ctx, m, 77, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 108));
pdcrt_fijar_local(ctx, m, 79, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 108));
pdcrt_fijar_local(ctx, m, 81, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 108));
pdcrt_fijar_local(ctx, m, 83, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 108));
pdcrt_fijar_local(ctx, m, 85, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 108));
pdcrt_fijar_local(ctx, m, 87, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 108));
pdcrt_fijar_local(ctx, m, 89, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 108));
pdcrt_fijar_local(ctx, m, 91, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 108));
pdcrt_fijar_local(ctx, m, 93, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 108));
pdcrt_fijar_local(ctx, m, 95, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 108));
pdcrt_fijar_local(ctx, m, 97, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 108));
pdcrt_fijar_local(ctx, m, 99, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 101, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 102, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 108));
pdcrt_fijar_local(ctx, m, 100, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 108));
pdcrt_fijar_local(ctx, m, 98, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 108));
pdcrt_fijar_local(ctx, m, 96, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 108));
pdcrt_fijar_local(ctx, m, 94, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 108));
pdcrt_fijar_local(ctx, m, 92, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 108));
pdcrt_fijar_local(ctx, m, 90, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 108));
pdcrt_fijar_local(ctx, m, 88, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 108));
pdcrt_fijar_local(ctx, m, 86, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 108));
pdcrt_fijar_local(ctx, m, 84, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 108));
pdcrt_fijar_local(ctx, m, 82, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 108));
pdcrt_fijar_local(ctx, m, 80, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 108));
pdcrt_fijar_local(ctx, m, 78, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 108));
pdcrt_fijar_local(ctx, m, 76, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 108));
pdcrt_fijar_local(ctx, m, 74, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 108));
pdcrt_fijar_local(ctx, m, 72, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 108));
pdcrt_fijar_local(ctx, m, 70, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 108));
pdcrt_fijar_local(ctx, m, 68, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 108));
pdcrt_fijar_local(ctx, m, 66, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 108));
pdcrt_fijar_local(ctx, m, 64, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 108));
pdcrt_fijar_local(ctx, m, 62, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 108));
pdcrt_fijar_local(ctx, m, 60, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 108));
pdcrt_fijar_local(ctx, m, 58, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 108));
pdcrt_fijar_local(ctx, m, 56, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 108));
pdcrt_fijar_local(ctx, m, 54, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 108));
pdcrt_fijar_local(ctx, m, 52, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 50, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 2:28 >> 2:34 */
pdcrt_fijar_local_nb(ctx, m, 105, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 7:6 >> 7:22 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 7:6 >> 7:22 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 108));
pdcrt_fijar_local(ctx, m, 106, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 7:6 >> 7:22 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 62:6 >> 62:31 */
pdcrt_fijar_local_nb(ctx, m, 107, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
return pdcrt_importar(ctx, m, "pdzibepd_N95_builtins", 21, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k0);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k0(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 108, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "ParaCadaElemento", 16, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k1);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k1(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 50, pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "Todos", 5, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k2);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k2(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k2);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 51, pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "Contiene", 8, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k3);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k3(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k3);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 52), pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "EsImpar", 7, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k4);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k4(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k4);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 53), pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "Escribir", 8, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k5);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k5(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k5);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 54), pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "Reducir", 7, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k6);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k6(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k6);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 55), pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "Filtrar", 7, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k7);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k7(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k7);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 56), pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "DígitoAEntero", 14, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k8);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k8(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k8);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 57), pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "ConvertirAEntero", 16, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k9);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k9(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k9);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 58), pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "EsNúmeroEntero", 15, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k10);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k10(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k10);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 59), pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "Concatenar", 10, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k11);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k11(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k11);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 60), pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "Aplicar\'", 8, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k12);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k12(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k12);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 61), pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "EnviarMensaje", 13, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k13);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k13(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k13);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 62), pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "Abs", 3, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k14);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k14(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k14);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 63), pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "EsPar", 5, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k15);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k15(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k15);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 64), pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "AplanarTodo", 11, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k16);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k16(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k16);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 65), pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "PrimerElemento", 14, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k17);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k17(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k17);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 66), pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "ÚnicoElemento", 14, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k18);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k18(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k18);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 67), pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "Max", 3, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k19);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k19(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k19);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 68), pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "NoImplementado", 14, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k20);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k20(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k20);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 69), pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "Inalcanzable", 12, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k21);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k21(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k21);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 70), pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "ArregloSinElementoEnÍndice", 27, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k22);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k22(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k22);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 71), pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "LeerNúmero", 11, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k23);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k23(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k23);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 72), pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "MétodoComoFunción", 19, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k24);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k24(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k24);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 73), pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "ContienePredicado", 17, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k25);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k25(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k25);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 74), pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "ParaCadaElementoEnReversa", 25, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k26);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k26(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k26);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 75), pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "Resultado", 9, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k27);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k27(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k27);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 76), pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "Pila", 4, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k28);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k28(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k28);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 77), pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "Diccionario", 11, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k29);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k29(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k29);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 78), pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "BuscarPredicado", 15, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k30);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k30(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k30);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 79), pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "OperadorBinario", 15, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k31);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k31(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k31);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 80), pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "Parcial", 7, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k32);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k32(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k32);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 81), pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "LeerLínea", 10, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k33);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k33(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k33);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 82), pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "LlamarConEC", 11, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k34);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k34(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k34);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 83), pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "MétodoAbstracto", 16, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k35);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k35(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k35);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 84), pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "Min", 3, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k36);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k36(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k36);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 85), pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "EsNulo", 6, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k37);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k37(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k37);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 86), pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "ÚltimoElemento", 15, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k38);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k38(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k38);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 87), pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "PedazoDeArreglo", 15, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k39);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k39(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k39);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 88), pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "Aplanar", 7, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k40);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k40(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k40);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 89), pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "Mod", 3, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k41);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k41(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k41);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 90), pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "Resto", 5, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k42);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k42(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k42);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 91), pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "Aplicar\'i", 9, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k43);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k43(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k43);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 92), pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "ArregloConFinal", 15, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k44);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k44(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k44);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 93), pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "EsNúmero", 9, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k45);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k45(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k45);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 94), pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "ConvertirANúmero", 17, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k46);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k46(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k46);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 95), pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "Elevar", 6, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k47);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k47(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k47);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 96), pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "Algún", 6, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k48);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k48(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k48);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 97), pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "Mapear", 6, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k49);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k49(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k49);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 98), pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "Identidad", 9, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k50);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k50(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k50);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 99), pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "ParaCadaNúmeroConPaso", 22, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k51);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k51(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k51);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 100), pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "EsInstancia", 11, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k52);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k52(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k52);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 101, pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "EsSubclase", 10, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k53);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k53(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k53);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 102, pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "ParaCadaElementoConÍndice", 26, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k54);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k54(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k54);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 103, pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 108), "ParaCadaNúmero", 15, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k55);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k55(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k55);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 104, pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 2:0 >> 2:8 */
return pdcrt_importar(ctx, m, "pdzibepd_N95_x_N95_puerto", 25, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k56);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k56(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k56);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 108, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_convertir_a_espacio_de_nombres(ctx, m, pdcrt_obtener_local(ctx, m, 108)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 2:28 >> 2:34 */
pdcrt_fijar_local_nb(ctx, m, 105, pdcrt_obtener_local(ctx, m, 109));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 2:28 >> 2:34 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 2:0 >> 2:8 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 7:0 >> 7:5 */
pdcrt_fijar_local(ctx, m, 109, ctx->clase_objeto);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 7:0 >> 7:5 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 0);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k57, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 109)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k57(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k57);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 7:0 >> 7:5 */
pdcrt_fijar_local(ctx, m, 108, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 7:0 >> 7:5 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 7:6 >> 7:22 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 106), pdcrt_obtener_local(ctx, m, 108));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 7:6 >> 7:22 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 7:6 >> 7:22 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 106)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 7:0 >> 7:5 */
pdcrt_fijar_local(ctx, m, 110, PDCRT_OBTENER_CONSTANTE(ctx, m, 1));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 7:0 >> 7:5 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 2);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k58, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 109)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 110)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k58(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k58);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 7:0 >> 7:5 */
pdcrt_fijar_local(ctx, m, 108, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 7:0 >> 7:5 */
pdcrt_fijar_local_nb(ctx, m, 110, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 7:0 >> 7:5 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 7:6 >> 7:22 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 106)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 11:13 >> 11:29 */
pdcrt_fijar_local(ctx, m, 110, PDCRT_OBTENER_CONSTANTE(ctx, m, 3));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 11:4 >> 11:12 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 4);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k59, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 109)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 110)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k59(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k59);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 11:4 >> 11:12 */
pdcrt_fijar_local(ctx, m, 108, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 11:4 >> 11:12 */
pdcrt_fijar_local_nb(ctx, m, 110, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 11:4 >> 11:12 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 7:6 >> 7:22 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 106)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 18:13 >> 18:19 */
pdcrt_fijar_local(ctx, m, 110, PDCRT_OBTENER_CONSTANTE(ctx, m, 5));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 18:4 >> 18:12 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 4);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k60, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 109)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 110)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k60(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k60);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 18:4 >> 18:12 */
pdcrt_fijar_local(ctx, m, 108, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 18:4 >> 18:12 */
pdcrt_fijar_local_nb(ctx, m, 110, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 18:4 >> 18:12 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 7:6 >> 7:22 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 106)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 25:13 >> 25:20 */
pdcrt_fijar_local(ctx, m, 110, PDCRT_OBTENER_CONSTANTE(ctx, m, 6));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 25:4 >> 25:12 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 4);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k61, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 109)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 110)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k61(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k61);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 25:4 >> 25:12 */
pdcrt_fijar_local(ctx, m, 108, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 25:4 >> 25:12 */
pdcrt_fijar_local_nb(ctx, m, 110, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 25:4 >> 25:12 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 7:6 >> 7:22 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 106)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 33:13 >> 33:19 */
pdcrt_fijar_local(ctx, m, 110, PDCRT_OBTENER_CONSTANTE(ctx, m, 7));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 33:4 >> 33:12 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 4);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k62, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 109)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 110)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k62(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k62);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 33:4 >> 33:12 */
pdcrt_fijar_local(ctx, m, 108, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 33:4 >> 33:12 */
pdcrt_fijar_local_nb(ctx, m, 110, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 33:4 >> 33:12 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 46:7 >> 46:23 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 106)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 46:24 >> 46:35 */
pdcrt_fijar_local(ctx, m, 110, PDCRT_OBTENER_CONSTANTE(ctx, m, 8));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 46:0 >> 51:9 */
do {
static const pdcrt_captura caps[] = {{0}};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_f0, caps, 1);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 111, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 46:0 >> 51:9 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 13);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k67, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 109)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 110)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 111)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k63(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k63);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 47:4 >> 47:48 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 47:4 >> 47:48 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 47:4 >> 47:48 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 47:4 >> 50:28 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 48:10 >> 48:12 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_obtener_local(ctx, m, 1));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 48:22 >> 48:28 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_obtener_local(ctx, m, 3));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 48:4 >> 48:28 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 10);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k64, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k64(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k64);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 48:4 >> 48:28 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 48:4 >> 48:28 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 48:4 >> 48:28 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 47:4 >> 50:28 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 49:10 >> 49:12 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_obtener_local(ctx, m, 1));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 49:23 >> 49:30 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 4)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 49:4 >> 49:30 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 11);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k65, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k65(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k65);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 49:4 >> 49:30 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 49:4 >> 49:30 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 49:4 >> 49:30 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 47:4 >> 50:28 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 50:10 >> 50:12 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_obtener_local(ctx, m, 1));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 50:22 >> 50:28 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_obtener_local(ctx, m, 5));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 50:4 >> 50:28 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 12);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k66, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k66(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k66);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 50:4 >> 50:28 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 50:4 >> 50:28 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 50:4 >> 50:28 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 47:4 >> 50:28 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 46:0 >> 51:9 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 46:0 >> 51:9 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 46:0 >> 51:9 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k67(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k67);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 46:0 >> 51:9 */
pdcrt_fijar_local(ctx, m, 108, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 46:0 >> 51:9 */
pdcrt_fijar_local_nb(ctx, m, 111, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 46:0 >> 51:9 */
pdcrt_fijar_local_nb(ctx, m, 110, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 46:0 >> 51:9 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 53:7 >> 53:23 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 106)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 53:24 >> 53:33 */
pdcrt_fijar_local(ctx, m, 110, PDCRT_OBTENER_CONSTANTE(ctx, m, 14));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 53:0 >> 55:9 */
do {
static const pdcrt_captura caps[] = {};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_f1, caps, 0);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 111, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 53:0 >> 55:9 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 13);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k72, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 109)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 110)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 111)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k68(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k68);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 54:46 >> 54:47 */
pdcrt_fijar_local(ctx, m, 3, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 54:46 >> 54:47 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 54:65 >> 54:67 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_obtener_local(ctx, m, 0));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 54:67 >> 54:68 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 5);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k69, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k69(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k69);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 54:67 >> 54:68 */
pdcrt_fijar_local(ctx, m, 4, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 54:67 >> 54:68 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 54:76 >> 54:78 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_obtener_local(ctx, m, 0));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 54:78 >> 54:79 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 6);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k70, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k70(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k70);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 54:78 >> 54:79 */
pdcrt_fijar_local(ctx, m, 5, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 54:78 >> 54:79 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 54:88 >> 54:90 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_obtener_local(ctx, m, 0));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 54:90 >> 54:91 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 7);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k71, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k71(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k71);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 54:90 >> 54:91 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 54:90 >> 54:91 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 54:32 >> 54:33 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 16);
return pdcrt_llamar4(ctx, m->k.marco, m->k.kf, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 2)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 3)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 54:32 >> 54:33 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 54:32 >> 54:33 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 54:32 >> 54:33 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 54:32 >> 54:33 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 54:32 >> 54:33 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 53:0 >> 55:9 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 53:0 >> 55:9 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 2)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 53:0 >> 55:9 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k72(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k72);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 53:0 >> 55:9 */
pdcrt_fijar_local(ctx, m, 108, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 53:0 >> 55:9 */
pdcrt_fijar_local_nb(ctx, m, 111, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 53:0 >> 55:9 */
pdcrt_fijar_local_nb(ctx, m, 110, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 53:0 >> 55:9 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 62:39 >> 62:45 */
pdcrt_fijar_local_nb(ctx, m, 110, pdcrt_obtener_local(ctx, m, 105));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 62:45 >> 62:46 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 17);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k73, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 110)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k73(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k73);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 62:45 >> 62:46 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 62:45 >> 62:46 */
pdcrt_fijar_local_nb(ctx, m, 110, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 62:0 >> 62:5 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 0);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k74, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 109)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k74(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k74);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 62:0 >> 62:5 */
pdcrt_fijar_local(ctx, m, 108, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 62:0 >> 62:5 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 62:6 >> 62:31 */
pdcrt_fijar_local_nb(ctx, m, 107, pdcrt_obtener_local(ctx, m, 108));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 62:6 >> 62:31 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 62:6 >> 62:31 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_obtener_local(ctx, m, 107));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 62:0 >> 62:5 */
pdcrt_fijar_local(ctx, m, 110, PDCRT_OBTENER_CONSTANTE(ctx, m, 18));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 62:0 >> 62:5 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 2);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k75, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 109)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 110)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k75(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k75);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 62:0 >> 62:5 */
pdcrt_fijar_local(ctx, m, 108, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 62:0 >> 62:5 */
pdcrt_fijar_local_nb(ctx, m, 110, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 62:0 >> 62:5 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 77:4 >> 77:29 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_obtener_local(ctx, m, 107));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 77:30 >> 77:36 */
pdcrt_fijar_local(ctx, m, 110, PDCRT_OBTENER_CONSTANTE(ctx, m, 19));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 76:0 >> 76:9 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 4);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k76, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 109)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 110)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k76(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k76);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 76:0 >> 76:9 */
pdcrt_fijar_local(ctx, m, 108, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 76:0 >> 76:9 */
pdcrt_fijar_local_nb(ctx, m, 110, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 76:0 >> 76:9 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 77:4 >> 77:29 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_obtener_local(ctx, m, 107));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 78:30 >> 78:36 */
pdcrt_fijar_local(ctx, m, 110, PDCRT_OBTENER_CONSTANTE(ctx, m, 5));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 76:0 >> 76:9 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 4);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k77, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 109)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 110)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k77(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k77);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 76:0 >> 76:9 */
pdcrt_fijar_local(ctx, m, 108, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 76:0 >> 76:9 */
pdcrt_fijar_local_nb(ctx, m, 110, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 76:0 >> 76:9 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 77:4 >> 77:29 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_obtener_local(ctx, m, 107));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 79:30 >> 79:37 */
pdcrt_fijar_local(ctx, m, 110, PDCRT_OBTENER_CONSTANTE(ctx, m, 6));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 76:0 >> 76:9 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 4);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k78, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 109)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 110)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k78(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k78);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 76:0 >> 76:9 */
pdcrt_fijar_local(ctx, m, 108, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 76:0 >> 76:9 */
pdcrt_fijar_local_nb(ctx, m, 110, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 76:0 >> 76:9 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 77:4 >> 77:29 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_obtener_local(ctx, m, 107));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 80:30 >> 80:36 */
pdcrt_fijar_local(ctx, m, 110, PDCRT_OBTENER_CONSTANTE(ctx, m, 7));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 76:0 >> 76:9 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 4);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k79, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 109)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 110)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k79(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k79);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 76:0 >> 76:9 */
pdcrt_fijar_local(ctx, m, 108, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 76:0 >> 76:9 */
pdcrt_fijar_local_nb(ctx, m, 110, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 76:0 >> 76:9 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 77:4 >> 77:29 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_obtener_local(ctx, m, 107));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 81:30 >> 81:46 */
pdcrt_fijar_local(ctx, m, 110, PDCRT_OBTENER_CONSTANTE(ctx, m, 3));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 76:0 >> 76:9 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 4);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k80, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 109)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 110)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k80(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k80);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 76:0 >> 76:9 */
pdcrt_fijar_local(ctx, m, 108, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 76:0 >> 76:9 */
pdcrt_fijar_local_nb(ctx, m, 110, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 76:0 >> 76:9 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 77:4 >> 77:29 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_obtener_local(ctx, m, 107));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 82:30 >> 82:41 */
pdcrt_fijar_local(ctx, m, 110, PDCRT_OBTENER_CONSTANTE(ctx, m, 20));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 76:0 >> 76:9 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 4);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k81, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 109)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 110)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k81(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k81);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 76:0 >> 76:9 */
pdcrt_fijar_local(ctx, m, 108, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 76:0 >> 76:9 */
pdcrt_fijar_local_nb(ctx, m, 110, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 76:0 >> 76:9 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 77:4 >> 77:29 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_obtener_local(ctx, m, 107));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 83:30 >> 83:42 */
pdcrt_fijar_local(ctx, m, 110, PDCRT_OBTENER_CONSTANTE(ctx, m, 21));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 76:0 >> 76:9 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 4);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k82, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 109)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 110)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k82(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k82);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 76:0 >> 76:9 */
pdcrt_fijar_local(ctx, m, 108, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 76:0 >> 76:9 */
pdcrt_fijar_local_nb(ctx, m, 110, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 76:0 >> 76:9 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 77:4 >> 77:29 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_obtener_local(ctx, m, 107));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 84:30 >> 84:41 */
pdcrt_fijar_local(ctx, m, 110, PDCRT_OBTENER_CONSTANTE(ctx, m, 22));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 76:0 >> 76:9 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 4);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k83, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 109)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 110)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k83(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k83);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 76:0 >> 76:9 */
pdcrt_fijar_local(ctx, m, 108, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 76:0 >> 76:9 */
pdcrt_fijar_local_nb(ctx, m, 110, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 76:0 >> 76:9 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 86:7 >> 86:32 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_obtener_local(ctx, m, 107));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 86:33 >> 86:44 */
pdcrt_fijar_local(ctx, m, 110, PDCRT_OBTENER_CONSTANTE(ctx, m, 8));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 86:0 >> 95:9 */
do {
static const pdcrt_captura caps[] = {};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_f2, caps, 0);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 111, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 86:0 >> 95:9 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 13);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k92, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 109)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 110)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 111)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k84(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k84);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 87:4 >> 87:28 */
pdcrt_fijar_local(ctx, m, 3, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 87:4 >> 87:28 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 87:4 >> 87:28 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 87:4 >> 94:28 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 88:10 >> 88:12 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_obtener_local(ctx, m, 0));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 88:22 >> 88:23 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_entero(PDCRT_ENTERO_C(1)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 88:4 >> 88:23 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 10);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k85, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k85(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k85);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 88:4 >> 88:23 */
pdcrt_fijar_local(ctx, m, 3, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 88:4 >> 88:23 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 88:4 >> 88:23 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 87:4 >> 94:28 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 89:10 >> 89:12 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_obtener_local(ctx, m, 0));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 89:23 >> 89:24 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_entero(PDCRT_ENTERO_C(0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 89:4 >> 89:24 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 11);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k86, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k86(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k86);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 89:4 >> 89:24 */
pdcrt_fijar_local(ctx, m, 3, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 89:4 >> 89:24 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 89:4 >> 89:24 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 87:4 >> 94:28 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 90:10 >> 90:12 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_obtener_local(ctx, m, 0));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 90:22 >> 90:23 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_entero(PDCRT_ENTERO_C(0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 90:4 >> 90:23 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 12);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k87, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k87(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k87);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 90:4 >> 90:23 */
pdcrt_fijar_local(ctx, m, 3, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 90:4 >> 90:23 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 90:4 >> 90:23 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 87:4 >> 94:28 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 91:10 >> 91:12 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_obtener_local(ctx, m, 0));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 91:32 >> 91:48 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_obtener_local(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 91:4 >> 91:48 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 9);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k88, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k88(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k88);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 91:4 >> 91:48 */
pdcrt_fijar_local(ctx, m, 3, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 91:4 >> 91:48 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 91:4 >> 91:48 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 87:4 >> 94:28 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 92:10 >> 92:12 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_obtener_local(ctx, m, 0));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 92:27 >> 92:28 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_entero(PDCRT_ENTERO_C(1)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 92:4 >> 92:28 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 24);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k89, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k89(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k89);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 92:4 >> 92:28 */
pdcrt_fijar_local(ctx, m, 3, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 92:4 >> 92:28 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 92:4 >> 92:28 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 87:4 >> 94:28 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 93:10 >> 93:12 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_obtener_local(ctx, m, 0));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 93:28 >> 93:29 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_entero(PDCRT_ENTERO_C(0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 93:4 >> 93:29 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 25);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k90, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k90(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k90);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 93:4 >> 93:29 */
pdcrt_fijar_local(ctx, m, 3, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 93:4 >> 93:29 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 93:4 >> 93:29 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 87:4 >> 94:28 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 94:10 >> 94:12 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_obtener_local(ctx, m, 0));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 94:27 >> 94:28 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_entero(PDCRT_ENTERO_C(0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 94:4 >> 94:28 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 26);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k91, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k91(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k91);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 94:4 >> 94:28 */
pdcrt_fijar_local(ctx, m, 3, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 94:4 >> 94:28 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 94:4 >> 94:28 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 87:4 >> 94:28 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 86:0 >> 95:9 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 86:0 >> 95:9 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 3)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 86:0 >> 95:9 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k92(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k92);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 86:0 >> 95:9 */
pdcrt_fijar_local(ctx, m, 108, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 86:0 >> 95:9 */
pdcrt_fijar_local_nb(ctx, m, 111, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 86:0 >> 95:9 */
pdcrt_fijar_local_nb(ctx, m, 110, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 86:0 >> 95:9 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 97:7 >> 97:32 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_obtener_local(ctx, m, 107));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 97:33 >> 97:46 */
pdcrt_fijar_local(ctx, m, 110, PDCRT_OBTENER_CONSTANTE(ctx, m, 27));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 97:0 >> 112:9 */
do {
static const pdcrt_captura caps[] = {};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_f3, caps, 0);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 111, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 97:0 >> 112:9 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 13);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k117, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 109)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 110)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 111)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k93(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k93);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 99:16 >> 99:17 */
pdcrt_fijar_local(ctx, m, 3, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 99:16 >> 99:17 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 99:23 >> 99:24 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 27);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k94, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 3)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k94(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k94);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 99:23 >> 99:24 */
pdcrt_fijar_local(ctx, m, 2, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 99:23 >> 99:24 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 99:10 >> 99:11 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_obtener_local(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 99:10 >> 99:11 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 100:10 >> 100:12 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_obtener_local(ctx, m, 0));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 100:27 >> 100:29 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_obtener_local(ctx, m, 0));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 100:29 >> 100:30 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 5);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k95, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k95(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k95);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 100:29 >> 100:30 */
pdcrt_fijar_local(ctx, m, 4, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 100:29 >> 100:30 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 100:4 >> 100:30 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 24);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k96, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 3)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k96(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k96);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 100:4 >> 100:30 */
pdcrt_fijar_local(ctx, m, 2, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 100:4 >> 100:30 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 100:4 >> 100:30 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 98:4 >> 111:14 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 101:10 >> 101:12 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_obtener_local(ctx, m, 0));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 101:28 >> 101:30 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_obtener_local(ctx, m, 0));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 101:30 >> 101:31 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 6);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k97, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k97(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k97);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 101:30 >> 101:31 */
pdcrt_fijar_local(ctx, m, 4, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 101:30 >> 101:31 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 101:4 >> 101:31 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 25);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k98, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 3)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k98(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k98);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 101:4 >> 101:31 */
pdcrt_fijar_local(ctx, m, 2, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 101:4 >> 101:31 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 101:4 >> 101:31 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 98:4 >> 111:14 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 102:10 >> 102:12 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_obtener_local(ctx, m, 0));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 102:27 >> 102:29 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_obtener_local(ctx, m, 0));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 102:29 >> 102:30 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 7);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k99, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k99(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k99);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 102:29 >> 102:30 */
pdcrt_fijar_local(ctx, m, 4, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 102:29 >> 102:30 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 102:4 >> 102:30 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 26);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k100, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 3)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k100(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k100);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 102:4 >> 102:30 */
pdcrt_fijar_local(ctx, m, 2, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 102:4 >> 102:30 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 102:4 >> 102:30 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 98:4 >> 111:14 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 104:10 >> 104:12 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_obtener_local(ctx, m, 0));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 104:22 >> 104:24 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_obtener_local(ctx, m, 0));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 104:24 >> 104:25 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 7);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k101, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k101(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k101);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 104:24 >> 104:25 */
pdcrt_fijar_local(ctx, m, 5, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 104:24 >> 104:25 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 104:34 >> 104:35 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_entero(PDCRT_ENTERO_C(1)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 104:24 >> 104:35 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 28);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k102, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k102(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k102);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 104:24 >> 104:35 */
pdcrt_fijar_local(ctx, m, 4, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 104:24 >> 104:35 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 104:24 >> 104:35 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 104:4 >> 104:35 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 12);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k103, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 3)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k103(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k103);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 104:4 >> 104:35 */
pdcrt_fijar_local(ctx, m, 2, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 104:4 >> 104:35 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 104:4 >> 104:35 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 98:4 >> 111:14 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 105:7 >> 105:8 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_obtener_local(ctx, m, 1));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 105:11 >> 105:15 */
pdcrt_fijar_local(ctx, m, 5, PDCRT_OBTENER_CONSTANTE(ctx, m, 29));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 105:15 >> 105:16 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 16);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k104, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k104(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k104);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 105:15 >> 105:16 */
pdcrt_fijar_local(ctx, m, 4, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 105:15 >> 105:16 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 105:7 >> 105:16 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 30);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k105, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 3)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k105(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k105);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 105:7 >> 105:16 */
pdcrt_fijar_local(ctx, m, 2, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 105:7 >> 105:16 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 105:7 >> 105:16 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 105:4 >> 110:9 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 2);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 105:4 >> 110:9 */
pdcrt_obj csaltar_obj = pdcrt_obtener_local(ctx, m, 3);
if(csaltar_obj.recv != &pdcrt_recv_booleano) pdcrt_error(ctx, "Se esperaba un objeto de tipo Boole");
if(csaltar_obj.bval)
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k112, PDCRT_XMM_NULO());
else
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k106, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k106(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k106);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 105:4 >> 110:9 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 105:4 >> 110:9 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 106:14 >> 106:16 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_obtener_local(ctx, m, 0));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 106:26 >> 106:28 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_obtener_local(ctx, m, 0));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 106:28 >> 106:29 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 5);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k107, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k107(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k107);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 106:28 >> 106:29 */
pdcrt_fijar_local(ctx, m, 5, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 106:28 >> 106:29 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 106:38 >> 106:39 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_entero(PDCRT_ENTERO_C(1)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 106:28 >> 106:39 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 28);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k108, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k108(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k108);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 106:28 >> 106:39 */
pdcrt_fijar_local(ctx, m, 4, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 106:28 >> 106:39 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 106:28 >> 106:39 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 106:8 >> 106:39 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 10);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k109, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 3)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k109(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k109);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 106:8 >> 106:39 */
pdcrt_fijar_local(ctx, m, 2, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 106:8 >> 106:39 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 106:8 >> 106:39 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 106:8 >> 107:28 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 107:14 >> 107:16 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_obtener_local(ctx, m, 0));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 107:27 >> 107:28 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_entero(PDCRT_ENTERO_C(0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 107:8 >> 107:28 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 11);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k110, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 3)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k110(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k110);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 107:8 >> 107:28 */
pdcrt_fijar_local(ctx, m, 2, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 107:8 >> 107:28 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 107:8 >> 107:28 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 106:8 >> 107:28 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 105:4 >> 110:9 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k116, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k111(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k111);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k112, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k112(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k112);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 109:14 >> 109:16 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_obtener_local(ctx, m, 0));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 109:27 >> 109:29 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_obtener_local(ctx, m, 0));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 109:29 >> 109:30 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 6);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k113, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k113(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k113);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 109:29 >> 109:30 */
pdcrt_fijar_local(ctx, m, 5, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 109:29 >> 109:30 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 109:40 >> 109:41 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_entero(PDCRT_ENTERO_C(1)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 109:29 >> 109:41 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 28);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k114, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k114(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k114);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 109:29 >> 109:41 */
pdcrt_fijar_local(ctx, m, 4, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 109:29 >> 109:41 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 109:29 >> 109:41 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 109:8 >> 109:41 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 11);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k115, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 3)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k115(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k115);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 109:8 >> 109:41 */
pdcrt_fijar_local(ctx, m, 2, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 109:8 >> 109:41 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 109:8 >> 109:41 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 109:8 >> 109:41 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
return pdcrt_saltar(ctx, m, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k116, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k116(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k116);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 111:13 >> 111:14 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_obtener_local(ctx, m, 1));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 111:4 >> 111:14 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 2)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 111:4 >> 111:14 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 97:0 >> 112:9 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 97:0 >> 112:9 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 2)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 97:0 >> 112:9 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k117(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k117);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 97:0 >> 112:9 */
pdcrt_fijar_local(ctx, m, 108, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 97:0 >> 112:9 */
pdcrt_fijar_local_nb(ctx, m, 111, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 97:0 >> 112:9 */
pdcrt_fijar_local_nb(ctx, m, 110, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 97:0 >> 112:9 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 114:7 >> 114:32 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_obtener_local(ctx, m, 107));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 114:33 >> 114:49 */
pdcrt_fijar_local(ctx, m, 110, PDCRT_OBTENER_CONSTANTE(ctx, m, 31));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 114:0 >> 121:9 */
do {
static const pdcrt_captura caps[] = {};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_f4, caps, 0);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 111, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 114:0 >> 121:9 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 13);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k126, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 109)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 110)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 111)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k118(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k118);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 116:16 >> 116:17 */
pdcrt_fijar_local(ctx, m, 3, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 116:16 >> 116:17 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 116:23 >> 116:24 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 31);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k119, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 3)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k119(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k119);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 116:23 >> 116:24 */
pdcrt_fijar_local(ctx, m, 2, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 116:23 >> 116:24 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 116:10 >> 116:11 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_obtener_local(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 116:10 >> 116:11 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 117:10 >> 117:12 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_obtener_local(ctx, m, 0));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 117:22 >> 117:24 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_obtener_local(ctx, m, 0));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 117:24 >> 117:25 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 20);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k120, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k120(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k120);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 117:24 >> 117:25 */
pdcrt_fijar_local(ctx, m, 4, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 117:24 >> 117:25 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 117:4 >> 117:25 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 10);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k121, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 3)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k121(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k121);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 117:4 >> 117:25 */
pdcrt_fijar_local(ctx, m, 2, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 117:4 >> 117:25 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 117:4 >> 117:25 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 115:4 >> 120:14 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 118:10 >> 118:12 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_obtener_local(ctx, m, 0));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 118:23 >> 118:25 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_obtener_local(ctx, m, 0));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 118:25 >> 118:26 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 21);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k122, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k122(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k122);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 118:25 >> 118:26 */
pdcrt_fijar_local(ctx, m, 4, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 118:25 >> 118:26 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 118:4 >> 118:26 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 11);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k123, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 3)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k123(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k123);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 118:4 >> 118:26 */
pdcrt_fijar_local(ctx, m, 2, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 118:4 >> 118:26 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 118:4 >> 118:26 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 115:4 >> 120:14 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 119:10 >> 119:12 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_obtener_local(ctx, m, 0));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 119:22 >> 119:24 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_obtener_local(ctx, m, 0));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 119:24 >> 119:25 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 22);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k124, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k124(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k124);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 119:24 >> 119:25 */
pdcrt_fijar_local(ctx, m, 4, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 119:24 >> 119:25 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 119:4 >> 119:25 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 12);
return pdcrt_llamar1(ctx, m, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k125, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 3)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k125(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k125);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 119:4 >> 119:25 */
pdcrt_fijar_local(ctx, m, 2, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 119:4 >> 119:25 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 119:4 >> 119:25 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 115:4 >> 120:14 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 120:13 >> 120:14 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_obtener_local(ctx, m, 1));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 120:4 >> 120:14 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 2)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 120:4 >> 120:14 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 114:0 >> 121:9 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 114:0 >> 121:9 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 2)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 114:0 >> 121:9 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k126(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k126);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 114:0 >> 121:9 */
pdcrt_fijar_local(ctx, m, 108, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 114:0 >> 121:9 */
pdcrt_fijar_local_nb(ctx, m, 111, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 114:0 >> 121:9 */
pdcrt_fijar_local_nb(ctx, m, 110, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 114:0 >> 121:9 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 123:7 >> 123:32 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_obtener_local(ctx, m, 107));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 123:33 >> 123:48 */
pdcrt_fijar_local(ctx, m, 110, PDCRT_OBTENER_CONSTANTE(ctx, m, 32));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 123:0 >> 125:9 */
do {
static const pdcrt_captura caps[] = {{106}};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_f5, caps, 1);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 111, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 123:0 >> 125:9 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 13);
return pdcrt_llamar2(ctx, m, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k131, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 109)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 110)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 111)));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k127(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k127);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 124:39 >> 124:40 */
pdcrt_fijar_local(ctx, m, 4, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 124:39 >> 124:40 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 124:58 >> 124:60 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_obtener_local(ctx, m, 1));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 124:60 >> 124:61 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 5);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k128, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k128(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k128);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 124:60 >> 124:61 */
pdcrt_fijar_local(ctx, m, 5, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 124:60 >> 124:61 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 124:69 >> 124:71 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_obtener_local(ctx, m, 1));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 124:71 >> 124:72 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 6);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k129, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k129(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k129);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 124:71 >> 124:72 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 124:71 >> 124:72 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 124:81 >> 124:83 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_obtener_local(ctx, m, 1));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 124:83 >> 124:84 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 7);
return pdcrt_llamar0(ctx, m, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k130, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k130(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k130);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 124:83 >> 124:84 */
pdcrt_fijar_local(ctx, m, 7, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 124:83 >> 124:84 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 124:29 >> 124:30 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 33);
return pdcrt_llamar4(ctx, m->k.marco, m->k.kf, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 3)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 124:29 >> 124:30 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 124:29 >> 124:30 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 124:29 >> 124:30 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 124:29 >> 124:30 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 124:29 >> 124:30 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 123:0 >> 125:9 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 123:0 >> 125:9 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 3)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 123:0 >> 125:9 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k131(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k131);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 123:0 >> 125:9 */
pdcrt_fijar_local(ctx, m, 108, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 123:0 >> 125:9 */
pdcrt_fijar_local_nb(ctx, m, 111, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 123:0 >> 125:9 */
pdcrt_fijar_local_nb(ctx, m, 110, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 123:0 >> 125:9 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cons = pdcrt_crear_espacio_de_nombres_cons(ctx, PDCRT_GC());
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 108, cons);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_obtener_local(ctx, m, 104));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "ParaCadaNúmero", 15, true, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k132);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k132(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k132);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_obtener_local(ctx, m, 50));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "ParaCadaElemento", 16, true, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k133);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k133(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k133);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_obtener_local(ctx, m, 103));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "ParaCadaElementoConÍndice", 26, true, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k134);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k134(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k134);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_obtener_local(ctx, m, 51));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "Todos", 5, true, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k135);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k135(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k135);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_obtener_local(ctx, m, 102));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "EsSubclase", 10, true, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k136);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k136(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k136);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 52)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "Contiene", 8, true, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k137);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k137(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k137);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_obtener_local(ctx, m, 101));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "EsInstancia", 11, true, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k138);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k138(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k138);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 53)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "EsImpar", 7, true, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k139);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k139(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k139);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 100)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "ParaCadaNúmeroConPaso", 22, true, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k140);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k140(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k140);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 54)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "Escribir", 8, true, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k141);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k141(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k141);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 99)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "Identidad", 9, true, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k142);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k142(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k142);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 55)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "Reducir", 7, true, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k143);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k143(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k143);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 98)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "Mapear", 6, true, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k144);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k144(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k144);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 56)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "Filtrar", 7, true, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k145);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k145(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k145);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 97)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "Algún", 6, true, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k146);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k146(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k146);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 57)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "DígitoAEntero", 14, true, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k147);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k147(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k147);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 96)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "Elevar", 6, true, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k148);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k148(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k148);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 58)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "ConvertirAEntero", 16, true, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k149);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k149(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k149);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 95)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "ConvertirANúmero", 17, true, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k150);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k150(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k150);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 59)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "EsNúmeroEntero", 15, true, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k151);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k151(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k151);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 94)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "EsNúmero", 9, true, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k152);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k152(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k152);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 60)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "Concatenar", 10, true, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k153);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k153(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k153);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 93)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "ArregloConFinal", 15, true, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k154);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k154(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k154);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 61)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "Aplicar\'", 8, true, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k155);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k155(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k155);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 92)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "Aplicar\'i", 9, true, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k156);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k156(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k156);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 62)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "EnviarMensaje", 13, true, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k157);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k157(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k157);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 91)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "Resto", 5, true, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k158);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k158(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k158);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 63)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "Abs", 3, true, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k159);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k159(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k159);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 90)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "Mod", 3, true, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k160);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k160(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k160);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 64)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "EsPar", 5, true, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k161);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k161(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k161);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 89)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "Aplanar", 7, true, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k162);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k162(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k162);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 65)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "AplanarTodo", 11, true, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k163);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k163(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k163);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 88)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "PedazoDeArreglo", 15, true, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k164);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k164(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k164);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 66)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "PrimerElemento", 14, true, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k165);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k165(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k165);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 87)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "ÚltimoElemento", 15, true, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k166);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k166(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k166);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 67)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "ÚnicoElemento", 14, true, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k167);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k167(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k167);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 86)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "EsNulo", 6, true, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k168);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k168(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k168);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 68)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "Max", 3, true, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k169);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k169(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k169);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 85)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "Min", 3, true, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k170);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k170(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k170);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 69)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "NoImplementado", 14, true, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k171);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k171(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k171);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 84)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "MétodoAbstracto", 16, true, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k172);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k172(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k172);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 70)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "Inalcanzable", 12, true, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k173);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k173(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k173);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 83)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "LlamarConEC", 11, true, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k174);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k174(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k174);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 71)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "ArregloSinElementoEnÍndice", 27, true, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k175);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k175(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k175);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 82)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "LeerLínea", 10, true, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k176);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k176(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k176);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 72)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "LeerNúmero", 11, true, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k177);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k177(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k177);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 81)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "Parcial", 7, true, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k178);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k178(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k178);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 73)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "MétodoComoFunción", 19, true, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k179);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k179(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k179);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 80)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "OperadorBinario", 15, true, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k180);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k180(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k180);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 74)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "ContienePredicado", 17, true, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k181);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k181(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k181);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 79)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "BuscarPredicado", 15, true, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k182);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k182(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k182);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 75)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "ParaCadaElementoEnReversa", 25, true, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k183);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k183(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k183);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 78)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "Diccionario", 11, false, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k184);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k184(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k184);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 76)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "Resultado", 9, false, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k185);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k185(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k185);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 77)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "Pila", 4, false, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k186);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k186(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k186);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 2:28 >> 2:34 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_obtener_local(ctx, m, 105));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "Puerto", 6, false, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k187);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k187(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k187);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 7:6 >> 7:22 */
pdcrt_fijar_local(ctx, m, 109, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 106)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "PosiciónTextual", 16, false, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k188);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k188(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k188);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 62:6 >> 62:31 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_obtener_local(ctx, m, 107));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 109), "PuertoConPosiciónTextual", 25, false, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k189);
}
static pdcrt_tk pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k189(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_k189);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
pdcrt_fijar_local_nb(ctx, m, 109, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
return pdcrt_exportar(ctx, m, pdcrt_obtener_local(ctx, m, 108), "pdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n", 50);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/x/puerto/conPosición.pd" => 1:0 >> 125:9 */
pdcrt_fijar_local_nb(ctx, m, 108, pdcrt_objeto_nulo());
}
PDCRT_DECLARAR_ENTRYPOINT(pdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n, pdc_mpdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n_f6)
#ifdef PDCRT_MAIN
#define PDCRT_DEPS(X) \
    X(pdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n, "pdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n", 50) \
    X(pdzibepd_N95_builtins, "pdzibepd_N95_builtins", 21) \
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
PDCRT_DECLARAR_MAIN(pdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n)
#endif
