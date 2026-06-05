#define PDCRT_INTERNO
#include "pdcrt/pdcrt.h"
#include "pdcrt/pdcrt_ops.h"
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_f0(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_f1(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_f2(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_f3(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_f4(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_f5(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_f6(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k0(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k1(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k2(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k3(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k4(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k5(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k6(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k7(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k8(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k9(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k10(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k11(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k12(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k13(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k14(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k15(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k16(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k17(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k18(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k19(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k20(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k21(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k22(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k23(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k24(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k25(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k26(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k27(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k28(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k29(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k30(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k31(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k32(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k33(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k34(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k35(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k36(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k37(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k38(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k39(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k40(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k41(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k42(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k43(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k44(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k45(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k46(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k47(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k48(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k49(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k50(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k51(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k52(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k53(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k54(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k55(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k56(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k57(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k58(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k59(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k60(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k61(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k62(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k63(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k64(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k65(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k66(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k67(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k68(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k69(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k70(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k71(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k72(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k73(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k74(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k75(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k76(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k77(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k78(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k79(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k80(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k81(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k82(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k83(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k84(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k85(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k86(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k87(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k88(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k89(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k90(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k91(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k92(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k93(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k94(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k95(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k96(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k97(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k98(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k99(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k100(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k101(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k102(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k103(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k104(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k105(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k106(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k107(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k108(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k109(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k110(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k111(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k112(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k113(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k114(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k115(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k116(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k117(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k118(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k119(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k120(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k121(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k122(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k123(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k124(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k125(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k126(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k127(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k128(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k129(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k130(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k131(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k132(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k133(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k134(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k135(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k136(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k137(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k138(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k139(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k140(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k141(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k142(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k143(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k144(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k145(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k146(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k147(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k148(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k149(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k150(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k151(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k152(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k153(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k154(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k155(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k156(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k157(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k158(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k159(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k160(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k161(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k162(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k163(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k164(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k165(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k166(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k167(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k168(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k169(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k170(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k171(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k172(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k173(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k174(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k175(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k176(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k177(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k178(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k179(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k180(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k181(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k182(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k183(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k184(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k185(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k186(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k187(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k188(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_f0(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 17:20 >> 17:27 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd|17:20|17:27";
PDCRT_ALOJAR_MARCO(ctx, 10, args, k, func_srcloc);
struct pdc_params_data_mpdzipdc_N95_validaci_N95__N95_n_p0 { const pdcrt_params_base base; const pdcrt_param_data params[1]; };
static const struct pdc_params_data_mpdzipdc_N95_validaci_N95__N95_n_p0 pdc_params = { .base = { .num_params = 1, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{3}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 17:29 >> 17:32 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 17:29 >> 17:32 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_obtener_local(ctx, m, 3));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 17:29 >> 17:32 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 18:18 >> 18:29 */
pdcrt_fijar_local(ctx, m, 5, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 1)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 18:31 >> 18:34 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_obtener_local(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 18:36 >> 18:39 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 18:39 >> 18:40 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 0);
return pdcrt_llamar0(ctx, m, pdc_mpdzipdc_N95_validaci_N95__N95_n_k65, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_f1(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 20:16 >> 20:23 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd|20:16|20:23";
PDCRT_ALOJAR_MARCO(ctx, 30, args, k, func_srcloc);
struct pdc_params_data_mpdzipdc_N95_validaci_N95__N95_n_p1 { const pdcrt_params_base base; const pdcrt_param_data params[2]; };
static const struct pdc_params_data_mpdzipdc_N95_validaci_N95__N95_n_p1 pdc_params = { .base = { .num_params = 2, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{18}, {19}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 20:30 >> 20:39 */
pdcrt_fijar_local_nb(ctx, m, 13, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 20:30 >> 20:39 */
pdcrt_fijar_local_nb(ctx, m, 13, pdcrt_obtener_local(ctx, m, 19));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 20:30 >> 20:39 */
pdcrt_fijar_local_nb(ctx, m, 19, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 20:25 >> 20:28 */
pdcrt_fijar_local_nb(ctx, m, 12, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 20:25 >> 20:28 */
pdcrt_fijar_local_nb(ctx, m, 12, pdcrt_obtener_local(ctx, m, 18));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 20:25 >> 20:28 */
pdcrt_fijar_local_nb(ctx, m, 18, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 35:18 >> 35:21 */
pdcrt_fijar_local_nb(ctx, m, 18, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 35:18 >> 35:21 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 18));
pdcrt_fijar_local(ctx, m, 16, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 35:18 >> 35:21 */
pdcrt_fijar_local_nb(ctx, m, 18, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 35:23 >> 35:30 */
pdcrt_fijar_local_nb(ctx, m, 18, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 35:23 >> 35:30 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 18));
pdcrt_fijar_local(ctx, m, 17, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 35:23 >> 35:30 */
pdcrt_fijar_local_nb(ctx, m, 18, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 21:11 >> 21:22 */
pdcrt_fijar_local(ctx, m, 19, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 3)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 21:24 >> 21:27 */
pdcrt_fijar_local_nb(ctx, m, 20, pdcrt_obtener_local(ctx, m, 12));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 21:29 >> 21:32 */
pdcrt_fijar_local(ctx, m, 22, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 2)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 21:32 >> 21:33 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 2);
return pdcrt_llamar0(ctx, m, pdc_mpdzipdc_N95_validaci_N95__N95_n_k69, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 22)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_f2(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 16:0 >> 48:10 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd|16:0|48:10";
PDCRT_ALOJAR_MARCO(ctx, 19, args, k, func_srcloc);
struct pdc_params_data_mpdzipdc_N95_validaci_N95__N95_n_p2 { const pdcrt_params_base base; const pdcrt_param_data params[3]; };
static const struct pdc_params_data_mpdzipdc_N95_validaci_N95__N95_n_p2 pdc_params = { .base = { .num_params = 3, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{14}, {15}, {16}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 16:57 >> 16:65 */
pdcrt_fijar_local_nb(ctx, m, 17, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 16:57 >> 16:65 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 17));
pdcrt_fijar_local(ctx, m, 13, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 16:57 >> 16:65 */
pdcrt_fijar_local_nb(ctx, m, 17, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 16:57 >> 16:65 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 13), pdcrt_obtener_local(ctx, m, 16));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 16:57 >> 16:65 */
pdcrt_fijar_local_nb(ctx, m, 16, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 16:44 >> 16:55 */
pdcrt_fijar_local_nb(ctx, m, 16, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 16:44 >> 16:55 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 16));
pdcrt_fijar_local(ctx, m, 12, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 16:44 >> 16:55 */
pdcrt_fijar_local_nb(ctx, m, 16, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 16:44 >> 16:55 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 12), pdcrt_obtener_local(ctx, m, 15));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 16:44 >> 16:55 */
pdcrt_fijar_local_nb(ctx, m, 15, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 16:39 >> 16:42 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 16:39 >> 16:42 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_obtener_local(ctx, m, 14));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 16:39 >> 16:42 */
pdcrt_fijar_local_nb(ctx, m, 14, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 17:4 >> 17:13 */
pdcrt_fijar_local(ctx, m, 15, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 1)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 17:15 >> 17:18 */
pdcrt_fijar_local_nb(ctx, m, 16, pdcrt_obtener_local(ctx, m, 11));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 17:20 >> 17:27 */
do {
static const pdcrt_captura caps[] = {{5}, {2}};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzipdc_N95_validaci_N95__N95_n_f0, caps, 2);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 17, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 20:16 >> 20:23 */
do {
static const pdcrt_captura caps[] = {{13}, {12}, {5}, {2}, {4}, {6}, {3}, {7}, {8}, {9}, {10}, {0}};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzipdc_N95_validaci_N95__N95_n_f1, caps, 12);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 18, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 17:4 >> 17:14 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 1);
return pdcrt_llamar3(ctx, m, pdc_mpdzipdc_N95_validaci_N95__N95_n_k109, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 15)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 16)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 17)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 18)));
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_f3(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 57:19 >> 57:26 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd|57:19|57:26";
PDCRT_ALOJAR_MARCO(ctx, 10, args, k, func_srcloc);
struct pdc_params_data_mpdzipdc_N95_validaci_N95__N95_n_p3 { const pdcrt_params_base base; const pdcrt_param_data params[1]; };
static const struct pdc_params_data_mpdzipdc_N95_validaci_N95__N95_n_p3 pdc_params = { .base = { .num_params = 1, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{3}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 57:28 >> 57:31 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 57:28 >> 57:31 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_obtener_local(ctx, m, 3));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 57:28 >> 57:31 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 58:18 >> 58:29 */
pdcrt_fijar_local(ctx, m, 5, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 1)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 58:31 >> 58:34 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_obtener_local(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 58:36 >> 58:39 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 58:39 >> 58:40 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 24);
return pdcrt_llamar0(ctx, m, pdc_mpdzipdc_N95_validaci_N95__N95_n_k110, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_f4(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 60:16 >> 60:23 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd|60:16|60:23";
PDCRT_ALOJAR_MARCO(ctx, 15, args, k, func_srcloc);
struct pdc_params_data_mpdzipdc_N95_validaci_N95__N95_n_p4 { const pdcrt_params_base base; const pdcrt_param_data params[1]; };
static const struct pdc_params_data_mpdzipdc_N95_validaci_N95__N95_n_p4 pdc_params = { .base = { .num_params = 1, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{6}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 60:25 >> 60:28 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 60:25 >> 60:28 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_obtener_local(ctx, m, 6));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 60:25 >> 60:28 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 61:11 >> 61:22 */
pdcrt_fijar_local(ctx, m, 7, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 2)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 61:24 >> 61:27 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_obtener_local(ctx, m, 5));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 61:29 >> 61:32 */
pdcrt_fijar_local(ctx, m, 10, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 1)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 61:32 >> 61:33 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 25);
return pdcrt_llamar0(ctx, m, pdc_mpdzipdc_N95_validaci_N95__N95_n_k114, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_f5(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 56:0 >> 70:10 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd|56:0|70:10";
PDCRT_ALOJAR_MARCO(ctx, 12, args, k, func_srcloc);
struct pdc_params_data_mpdzipdc_N95_validaci_N95__N95_n_p5 { const pdcrt_params_base base; const pdcrt_param_data params[1]; };
static const struct pdc_params_data_mpdzipdc_N95_validaci_N95__N95_n_p5 pdc_params = { .base = { .num_params = 1, .tiene_variadic = false, .idc_variadic = 0, }, .params = {{7}} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 56:39 >> 56:42 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 56:39 >> 56:42 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_obtener_local(ctx, m, 7));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 56:39 >> 56:42 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 57:4 >> 57:12 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 1)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 57:14 >> 57:17 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_obtener_local(ctx, m, 6));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 57:19 >> 57:26 */
do {
static const pdcrt_captura caps[] = {{2}, {3}};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzipdc_N95_validaci_N95__N95_n_f3, caps, 2);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 10, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 60:16 >> 60:23 */
do {
static const pdcrt_captura caps[] = {{5}, {2}, {3}, {4}, {0}};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzipdc_N95_validaci_N95__N95_n_f4, caps, 5);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 11, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 57:4 >> 57:13 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 1);
return pdcrt_llamar3(ctx, m, pdc_mpdzipdc_N95_validaci_N95__N95_n_k125, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 11)));
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_f6(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd|1:0|70:10";
PDCRT_ALOJAR_MARCO(ctx, 121, args, k, func_srcloc);
struct pdc_params_data_mpdzipdc_N95_validaci_N95__N95_n_p6 { const pdcrt_params_base base; const pdcrt_param_data params[1]; };
static const struct pdc_params_data_mpdzipdc_N95_validaci_N95__N95_n_p6 pdc_params = { .base = { .num_params = 0, .tiene_variadic = false, .idc_variadic = 0, }, .params = {} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
PDCRT_DEFINE_RAICES(2);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_arreglo *constantes = pdcrt_crear_arreglo_vacio(ctx, PDCRT_GC(), 27LLU);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "NodoLlamarProcedimiento", 23));
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
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "NodoSi", 6));
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
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "tablaCondicionalEstático", 25));
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
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "intentaBuscarÚnico", 19));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "idBloque", 8));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "buscarÚnico", 12));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "nodo", 4));
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
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "tablaUsos", 9));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "proc", 4));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "tablaNombres", 12));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "binding", 7));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "esAutoejecutable", 16));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "La variable ~t no es autoejecutable", 35));
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
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "conMensajeYLugar", 16));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "Variable no es autoejecutable", 29));
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
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "NodoFunciónAnónima", 20));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "NodoDevolver", 12));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "Devolver fuera de una función/método/procedimiento", 52));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_CARGAR_RAIZ_CABECERA(1, constantes);
pdcrt_barrera_de_escritura(ctx, pdcrt_objeto_arreglo(constantes), txt);
constantes->valores[constantes->longitud++] = txt;
} while(0);
PDCRT_FIJAR_CONSTANTES(ctx, m, constantes);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 119));
pdcrt_fijar_local(ctx, m, 57, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 119));
pdcrt_fijar_local(ctx, m, 59, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 119));
pdcrt_fijar_local(ctx, m, 61, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 119));
pdcrt_fijar_local(ctx, m, 63, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 119));
pdcrt_fijar_local(ctx, m, 65, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 119));
pdcrt_fijar_local(ctx, m, 67, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 119));
pdcrt_fijar_local(ctx, m, 69, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 119));
pdcrt_fijar_local(ctx, m, 71, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 119));
pdcrt_fijar_local(ctx, m, 73, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 119));
pdcrt_fijar_local(ctx, m, 75, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 119));
pdcrt_fijar_local(ctx, m, 77, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 119));
pdcrt_fijar_local(ctx, m, 79, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 119));
pdcrt_fijar_local(ctx, m, 81, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 119));
pdcrt_fijar_local(ctx, m, 83, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 119));
pdcrt_fijar_local(ctx, m, 85, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 119));
pdcrt_fijar_local(ctx, m, 87, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 119));
pdcrt_fijar_local(ctx, m, 89, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 119));
pdcrt_fijar_local(ctx, m, 91, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 119));
pdcrt_fijar_local(ctx, m, 93, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 119));
pdcrt_fijar_local(ctx, m, 95, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 119));
pdcrt_fijar_local(ctx, m, 97, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 119));
pdcrt_fijar_local(ctx, m, 99, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 119));
pdcrt_fijar_local(ctx, m, 101, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 119));
pdcrt_fijar_local(ctx, m, 103, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 119));
pdcrt_fijar_local(ctx, m, 105, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 119));
pdcrt_fijar_local(ctx, m, 107, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 119));
pdcrt_fijar_local(ctx, m, 109, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 110, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 119));
pdcrt_fijar_local(ctx, m, 108, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 119));
pdcrt_fijar_local(ctx, m, 106, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 119));
pdcrt_fijar_local(ctx, m, 104, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 119));
pdcrt_fijar_local(ctx, m, 102, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 119));
pdcrt_fijar_local(ctx, m, 100, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 119));
pdcrt_fijar_local(ctx, m, 98, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 119));
pdcrt_fijar_local(ctx, m, 96, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 119));
pdcrt_fijar_local(ctx, m, 94, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 119));
pdcrt_fijar_local(ctx, m, 92, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 119));
pdcrt_fijar_local(ctx, m, 90, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 119));
pdcrt_fijar_local(ctx, m, 88, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 119));
pdcrt_fijar_local(ctx, m, 86, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 119));
pdcrt_fijar_local(ctx, m, 84, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 119));
pdcrt_fijar_local(ctx, m, 82, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 119));
pdcrt_fijar_local(ctx, m, 80, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 119));
pdcrt_fijar_local(ctx, m, 78, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 119));
pdcrt_fijar_local(ctx, m, 76, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 119));
pdcrt_fijar_local(ctx, m, 74, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 119));
pdcrt_fijar_local(ctx, m, 72, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 119));
pdcrt_fijar_local(ctx, m, 70, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 119));
pdcrt_fijar_local(ctx, m, 68, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 119));
pdcrt_fijar_local(ctx, m, 66, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 119));
pdcrt_fijar_local(ctx, m, 64, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 119));
pdcrt_fijar_local(ctx, m, 62, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 119));
pdcrt_fijar_local(ctx, m, 60, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 119));
pdcrt_fijar_local(ctx, m, 58, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 56, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 3:22 >> 3:25 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 3:22 >> 3:25 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 119));
pdcrt_fijar_local(ctx, m, 111, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 3:22 >> 3:25 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 4:22 >> 4:25 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 4:22 >> 4:25 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 119));
pdcrt_fijar_local(ctx, m, 112, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 4:22 >> 4:25 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 5:0 >> 5:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 5:0 >> 5:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 119));
pdcrt_fijar_local(ctx, m, 113, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 5:0 >> 5:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 5:0 >> 5:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 5:0 >> 5:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 119));
pdcrt_fijar_local(ctx, m, 114, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 5:0 >> 5:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 6:0 >> 6:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 6:0 >> 6:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 119));
pdcrt_fijar_local(ctx, m, 115, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 6:0 >> 6:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 7:0 >> 7:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 7:0 >> 7:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 119));
pdcrt_fijar_local(ctx, m, 116, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 7:0 >> 7:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 16:8 >> 16:37 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 16:8 >> 16:37 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 119));
pdcrt_fijar_local(ctx, m, 117, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 16:8 >> 16:37 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 56:8 >> 56:37 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 56:8 >> 56:37 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 119));
pdcrt_fijar_local(ctx, m, 118, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 56:8 >> 56:37 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
return pdcrt_importar(ctx, m, "pdzibepd_N95_builtins", 21, pdc_mpdzipdc_N95_validaci_N95__N95_n_k0);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k0(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 119), "ParaCadaElemento", 16, pdc_mpdzipdc_N95_validaci_N95__N95_n_k1);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k1(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 56, pdcrt_obtener_local(ctx, m, 120));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 119), "Todos", 5, pdc_mpdzipdc_N95_validaci_N95__N95_n_k2);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k2(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k2);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 57), pdcrt_obtener_local(ctx, m, 120));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 119), "Contiene", 8, pdc_mpdzipdc_N95_validaci_N95__N95_n_k3);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k3(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k3);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 58), pdcrt_obtener_local(ctx, m, 120));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 119), "EsImpar", 7, pdc_mpdzipdc_N95_validaci_N95__N95_n_k4);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k4(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k4);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 59), pdcrt_obtener_local(ctx, m, 120));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 119), "Escribir", 8, pdc_mpdzipdc_N95_validaci_N95__N95_n_k5);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k5(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k5);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 60), pdcrt_obtener_local(ctx, m, 120));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 119), "Reducir", 7, pdc_mpdzipdc_N95_validaci_N95__N95_n_k6);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k6(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k6);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 61), pdcrt_obtener_local(ctx, m, 120));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 119), "Filtrar", 7, pdc_mpdzipdc_N95_validaci_N95__N95_n_k7);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k7(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k7);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 62), pdcrt_obtener_local(ctx, m, 120));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 119), "DígitoAEntero", 14, pdc_mpdzipdc_N95_validaci_N95__N95_n_k8);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k8(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k8);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 63), pdcrt_obtener_local(ctx, m, 120));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 119), "ConvertirAEntero", 16, pdc_mpdzipdc_N95_validaci_N95__N95_n_k9);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k9(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k9);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 64), pdcrt_obtener_local(ctx, m, 120));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 119), "EsNúmeroEntero", 15, pdc_mpdzipdc_N95_validaci_N95__N95_n_k10);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k10(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k10);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 65), pdcrt_obtener_local(ctx, m, 120));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 119), "Concatenar", 10, pdc_mpdzipdc_N95_validaci_N95__N95_n_k11);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k11(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k11);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 66), pdcrt_obtener_local(ctx, m, 120));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 119), "Aplicar\'", 8, pdc_mpdzipdc_N95_validaci_N95__N95_n_k12);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k12(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k12);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 67), pdcrt_obtener_local(ctx, m, 120));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 119), "EnviarMensaje", 13, pdc_mpdzipdc_N95_validaci_N95__N95_n_k13);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k13(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k13);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 68), pdcrt_obtener_local(ctx, m, 120));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 119), "Abs", 3, pdc_mpdzipdc_N95_validaci_N95__N95_n_k14);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k14(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k14);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 69), pdcrt_obtener_local(ctx, m, 120));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 119), "EsPar", 5, pdc_mpdzipdc_N95_validaci_N95__N95_n_k15);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k15(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k15);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 70), pdcrt_obtener_local(ctx, m, 120));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 119), "AplanarTodo", 11, pdc_mpdzipdc_N95_validaci_N95__N95_n_k16);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k16(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k16);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 71), pdcrt_obtener_local(ctx, m, 120));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 119), "PrimerElemento", 14, pdc_mpdzipdc_N95_validaci_N95__N95_n_k17);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k17(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k17);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 72), pdcrt_obtener_local(ctx, m, 120));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 119), "ÚnicoElemento", 14, pdc_mpdzipdc_N95_validaci_N95__N95_n_k18);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k18(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k18);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 73), pdcrt_obtener_local(ctx, m, 120));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 119), "Max", 3, pdc_mpdzipdc_N95_validaci_N95__N95_n_k19);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k19(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k19);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 74), pdcrt_obtener_local(ctx, m, 120));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 119), "NoImplementado", 14, pdc_mpdzipdc_N95_validaci_N95__N95_n_k20);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k20(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k20);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 75), pdcrt_obtener_local(ctx, m, 120));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 119), "Inalcanzable", 12, pdc_mpdzipdc_N95_validaci_N95__N95_n_k21);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k21(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k21);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 76), pdcrt_obtener_local(ctx, m, 120));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 119), "ArregloSinElementoEnÍndice", 27, pdc_mpdzipdc_N95_validaci_N95__N95_n_k22);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k22(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k22);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 77), pdcrt_obtener_local(ctx, m, 120));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 119), "LeerNúmero", 11, pdc_mpdzipdc_N95_validaci_N95__N95_n_k23);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k23(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k23);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 78), pdcrt_obtener_local(ctx, m, 120));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 119), "MétodoComoFunción", 19, pdc_mpdzipdc_N95_validaci_N95__N95_n_k24);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k24(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k24);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 79), pdcrt_obtener_local(ctx, m, 120));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 119), "ContienePredicado", 17, pdc_mpdzipdc_N95_validaci_N95__N95_n_k25);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k25(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k25);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 80), pdcrt_obtener_local(ctx, m, 120));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 119), "ParaCadaElementoEnReversa", 25, pdc_mpdzipdc_N95_validaci_N95__N95_n_k26);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k26(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k26);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 81), pdcrt_obtener_local(ctx, m, 120));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 119), "Resultado", 9, pdc_mpdzipdc_N95_validaci_N95__N95_n_k27);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k27(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k27);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 82), pdcrt_obtener_local(ctx, m, 120));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 119), "Pila", 4, pdc_mpdzipdc_N95_validaci_N95__N95_n_k28);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k28(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k28);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 83), pdcrt_obtener_local(ctx, m, 120));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 119), "Diccionario", 11, pdc_mpdzipdc_N95_validaci_N95__N95_n_k29);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k29(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k29);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 84), pdcrt_obtener_local(ctx, m, 120));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 119), "BuscarPredicado", 15, pdc_mpdzipdc_N95_validaci_N95__N95_n_k30);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k30(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k30);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 85), pdcrt_obtener_local(ctx, m, 120));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 119), "OperadorBinario", 15, pdc_mpdzipdc_N95_validaci_N95__N95_n_k31);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k31(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k31);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 86), pdcrt_obtener_local(ctx, m, 120));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 119), "Parcial", 7, pdc_mpdzipdc_N95_validaci_N95__N95_n_k32);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k32(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k32);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 87), pdcrt_obtener_local(ctx, m, 120));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 119), "LeerLínea", 10, pdc_mpdzipdc_N95_validaci_N95__N95_n_k33);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k33(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k33);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 88), pdcrt_obtener_local(ctx, m, 120));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 119), "LlamarConEC", 11, pdc_mpdzipdc_N95_validaci_N95__N95_n_k34);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k34(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k34);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 89), pdcrt_obtener_local(ctx, m, 120));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 119), "MétodoAbstracto", 16, pdc_mpdzipdc_N95_validaci_N95__N95_n_k35);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k35(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k35);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 90), pdcrt_obtener_local(ctx, m, 120));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 119), "Min", 3, pdc_mpdzipdc_N95_validaci_N95__N95_n_k36);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k36(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k36);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 91), pdcrt_obtener_local(ctx, m, 120));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 119), "EsNulo", 6, pdc_mpdzipdc_N95_validaci_N95__N95_n_k37);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k37(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k37);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 92), pdcrt_obtener_local(ctx, m, 120));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 119), "ÚltimoElemento", 15, pdc_mpdzipdc_N95_validaci_N95__N95_n_k38);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k38(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k38);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 93), pdcrt_obtener_local(ctx, m, 120));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 119), "PedazoDeArreglo", 15, pdc_mpdzipdc_N95_validaci_N95__N95_n_k39);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k39(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k39);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 94), pdcrt_obtener_local(ctx, m, 120));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 119), "Aplanar", 7, pdc_mpdzipdc_N95_validaci_N95__N95_n_k40);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k40(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k40);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 95), pdcrt_obtener_local(ctx, m, 120));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 119), "Mod", 3, pdc_mpdzipdc_N95_validaci_N95__N95_n_k41);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k41(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k41);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 96), pdcrt_obtener_local(ctx, m, 120));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 119), "Resto", 5, pdc_mpdzipdc_N95_validaci_N95__N95_n_k42);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k42(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k42);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 97), pdcrt_obtener_local(ctx, m, 120));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 119), "Aplicar\'i", 9, pdc_mpdzipdc_N95_validaci_N95__N95_n_k43);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k43(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k43);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 98), pdcrt_obtener_local(ctx, m, 120));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 119), "ArregloConFinal", 15, pdc_mpdzipdc_N95_validaci_N95__N95_n_k44);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k44(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k44);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 99), pdcrt_obtener_local(ctx, m, 120));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 119), "EsNúmero", 9, pdc_mpdzipdc_N95_validaci_N95__N95_n_k45);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k45(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k45);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 100), pdcrt_obtener_local(ctx, m, 120));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 119), "ConvertirANúmero", 17, pdc_mpdzipdc_N95_validaci_N95__N95_n_k46);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k46(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k46);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 101), pdcrt_obtener_local(ctx, m, 120));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 119), "Elevar", 6, pdc_mpdzipdc_N95_validaci_N95__N95_n_k47);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k47(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k47);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 102), pdcrt_obtener_local(ctx, m, 120));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 119), "Algún", 6, pdc_mpdzipdc_N95_validaci_N95__N95_n_k48);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k48(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k48);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 103), pdcrt_obtener_local(ctx, m, 120));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 119), "Mapear", 6, pdc_mpdzipdc_N95_validaci_N95__N95_n_k49);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k49(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k49);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 104), pdcrt_obtener_local(ctx, m, 120));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 119), "Identidad", 9, pdc_mpdzipdc_N95_validaci_N95__N95_n_k50);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k50(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k50);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 105), pdcrt_obtener_local(ctx, m, 120));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 119), "ParaCadaNúmeroConPaso", 22, pdc_mpdzipdc_N95_validaci_N95__N95_n_k51);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k51(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k51);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 106), pdcrt_obtener_local(ctx, m, 120));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 119), "EsInstancia", 11, pdc_mpdzipdc_N95_validaci_N95__N95_n_k52);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k52(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k52);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 107), pdcrt_obtener_local(ctx, m, 120));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 119), "EsSubclase", 10, pdc_mpdzipdc_N95_validaci_N95__N95_n_k53);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k53(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k53);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 108), pdcrt_obtener_local(ctx, m, 120));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 119), "ParaCadaElementoConÍndice", 26, pdc_mpdzipdc_N95_validaci_N95__N95_n_k54);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k54(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k54);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 109), pdcrt_obtener_local(ctx, m, 120));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 119), "ParaCadaNúmero", 15, pdc_mpdzipdc_N95_validaci_N95__N95_n_k55);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k55(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k55);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 110, pdcrt_obtener_local(ctx, m, 120));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 3:0 >> 3:8 */
return pdcrt_importar(ctx, m, "pdzipdc_N95_cst", 15, pdc_mpdzipdc_N95_validaci_N95__N95_n_k56);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k56(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k56);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 3:0 >> 3:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 3:0 >> 3:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_convertir_a_espacio_de_nombres(ctx, m, pdcrt_obtener_local(ctx, m, 119)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 3:22 >> 3:25 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 111), pdcrt_obtener_local(ctx, m, 120));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 3:22 >> 3:25 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 3:0 >> 3:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 4:0 >> 4:8 */
return pdcrt_importar(ctx, m, "pdzipdc_N95_ast", 15, pdc_mpdzipdc_N95_validaci_N95__N95_n_k57);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k57(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k57);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 4:0 >> 4:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 4:0 >> 4:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_convertir_a_espacio_de_nombres(ctx, m, pdcrt_obtener_local(ctx, m, 119)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 4:22 >> 4:25 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 112), pdcrt_obtener_local(ctx, m, 120));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 4:22 >> 4:25 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 4:0 >> 4:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 5:0 >> 5:8 */
return pdcrt_importar(ctx, m, "pdzipdc_N95_catamorfismos", 25, pdc_mpdzipdc_N95_validaci_N95__N95_n_k58);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k58(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k58);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 5:0 >> 5:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 5:28 >> 5:36 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 119), "Buscando", 8, pdc_mpdzipdc_N95_validaci_N95__N95_n_k59);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k59(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k59);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 5:28 >> 5:36 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 5:28 >> 5:36 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 113), pdcrt_obtener_local(ctx, m, 120));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 5:28 >> 5:36 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 5:38 >> 5:47 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 119), "Buscando\'", 9, pdc_mpdzipdc_N95_validaci_N95__N95_n_k60);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k60(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k60);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 5:38 >> 5:47 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 5:38 >> 5:47 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 114), pdcrt_obtener_local(ctx, m, 120));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 5:38 >> 5:47 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 5:0 >> 5:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 6:0 >> 6:8 */
return pdcrt_importar(ctx, m, "pdzipdc_N95_combinadores", 24, pdc_mpdzipdc_N95_validaci_N95__N95_n_k61);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k61(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k61);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 6:0 >> 6:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 6:27 >> 6:32 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 119), "Error", 5, pdc_mpdzipdc_N95_validaci_N95__N95_n_k62);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k62(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k62);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 6:27 >> 6:32 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 6:27 >> 6:32 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 115), pdcrt_obtener_local(ctx, m, 120));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 6:27 >> 6:32 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 6:0 >> 6:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 7:0 >> 7:8 */
return pdcrt_importar(ctx, m, "pdzipdc_N95_parser", 18, pdc_mpdzipdc_N95_validaci_N95__N95_n_k63);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k63(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k63);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 7:0 >> 7:8 */
pdcrt_fijar_local(ctx, m, 119, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 7:21 >> 7:39 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 119), "ErrorComoTraceback", 18, pdc_mpdzipdc_N95_validaci_N95__N95_n_k64);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k64(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k64);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 7:21 >> 7:39 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 7:21 >> 7:39 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 116), pdcrt_obtener_local(ctx, m, 120));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 7:21 >> 7:39 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 7:0 >> 7:8 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 16:0 >> 48:10 */
do {
static const pdcrt_captura caps[] = {{115}, {114}, {107}, {117}, {92}, {111}, {1}, {2}, {0}, {60}, {116}};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzipdc_N95_validaci_N95__N95_n_f2, caps, 11);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 119, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 16:8 >> 16:37 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 117), pdcrt_obtener_local(ctx, m, 119));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 16:8 >> 16:37 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 56:0 >> 70:10 */
do {
static const pdcrt_captura caps[] = {{115}, {113}, {112}, {107}, {116}, {60}};
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cl = pdcrt_mk_closure(ctx, m, PDCRT_GC(), pdc_mpdzipdc_N95_validaci_N95__N95_n_f5, caps, 6);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 119, cl);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 56:8 >> 56:37 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 118), pdcrt_obtener_local(ctx, m, 119));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 56:8 >> 56:37 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cons = pdcrt_crear_espacio_de_nombres_cons(ctx, PDCRT_GC());
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 119, cons);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_obtener_local(ctx, m, 110));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 119), pdcrt_obtener_local(ctx, m, 120), "ParaCadaNúmero", 15, true, pdc_mpdzipdc_N95_validaci_N95__N95_n_k126);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k65(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k65);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 18:39 >> 18:40 */
pdcrt_fijar_local(ctx, m, 7, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 18:39 >> 18:40 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 18:18 >> 18:30 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 1);
return pdcrt_llamar2(ctx, m, pdc_mpdzipdc_N95_validaci_N95__N95_n_k66, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)));
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k66(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k66);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 18:18 >> 18:30 */
pdcrt_fijar_local(ctx, m, 4, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 18:18 >> 18:30 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 18:18 >> 18:30 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 18:18 >> 18:30 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 19:18 >> 19:29 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 1)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 19:31 >> 19:34 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_obtener_local(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 19:36 >> 19:39 */
pdcrt_fijar_local(ctx, m, 9, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 19:39 >> 19:40 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 2);
return pdcrt_llamar0(ctx, m, pdc_mpdzipdc_N95_validaci_N95__N95_n_k67, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k67(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k67);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 19:39 >> 19:40 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 19:39 >> 19:40 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 19:18 >> 19:30 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 1);
return pdcrt_llamar2(ctx, m, pdc_mpdzipdc_N95_validaci_N95__N95_n_k68, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)));
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k68(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k68);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 19:18 >> 19:30 */
pdcrt_fijar_local(ctx, m, 5, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 19:18 >> 19:30 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 19:18 >> 19:30 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 19:18 >> 19:30 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 18:18 >> 19:30 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 3);
return pdcrt_llamar1(ctx, m->k.marco, m->k.kf, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 18:18 >> 19:30 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 18:18 >> 19:30 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 17:20 >> 17:27 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 17:20 >> 17:27 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 17:20 >> 17:27 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k69(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k69);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 21:32 >> 21:33 */
pdcrt_fijar_local(ctx, m, 21, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 21:32 >> 21:33 */
pdcrt_fijar_local_nb(ctx, m, 22, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 21:11 >> 21:23 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 1);
return pdcrt_llamar2(ctx, m, pdc_mpdzipdc_N95_validaci_N95__N95_n_k70, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 19)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 20)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 21)));
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k70(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k70);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 21:11 >> 21:23 */
pdcrt_fijar_local(ctx, m, 18, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 21:11 >> 21:23 */
pdcrt_fijar_local_nb(ctx, m, 21, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 21:11 >> 21:23 */
pdcrt_fijar_local_nb(ctx, m, 20, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 21:11 >> 21:23 */
pdcrt_fijar_local_nb(ctx, m, 19, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 21:8 >> 33:13 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 18);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 19, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 21:8 >> 33:13 */
pdcrt_obj csaltar_obj = pdcrt_obtener_local(ctx, m, 19);
if(csaltar_obj.recv != &pdcrt_recv_booleano) pdcrt_error(ctx, "Se esperaba un objeto de tipo Boole");
if(csaltar_obj.bval)
return pdcrt_saltar(ctx, m, pdc_mpdzipdc_N95_validaci_N95__N95_n_k86, PDCRT_XMM_NULO());
else
return pdcrt_saltar(ctx, m, pdc_mpdzipdc_N95_validaci_N95__N95_n_k71, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k71(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k71);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 21:8 >> 33:13 */
pdcrt_fijar_local_nb(ctx, m, 19, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 21:8 >> 33:13 */
pdcrt_fijar_local_nb(ctx, m, 18, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 22:21 >> 22:24 */
pdcrt_fijar_local_nb(ctx, m, 14, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 23:24 >> 23:35 */
pdcrt_fijar_local(ctx, m, 20, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 1)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 23:35 >> 23:36 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 4);
return pdcrt_llamar0(ctx, m, pdc_mpdzipdc_N95_validaci_N95__N95_n_k72, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 20)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k72(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k72);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 23:35 >> 23:36 */
pdcrt_fijar_local(ctx, m, 19, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 23:35 >> 23:36 */
pdcrt_fijar_local_nb(ctx, m, 20, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 23:83 >> 23:91 */
pdcrt_fijar_local(ctx, m, 20, PDCRT_OBTENER_CONSTANTE(ctx, m, 5));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 23:93 >> 23:96 */
pdcrt_fijar_local_nb(ctx, m, 22, pdcrt_obtener_local(ctx, m, 12));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 23:96 >> 23:97 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 6);
return pdcrt_llamar0(ctx, m, pdc_mpdzipdc_N95_validaci_N95__N95_n_k73, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 22)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k73(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k73);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 23:96 >> 23:97 */
pdcrt_fijar_local(ctx, m, 21, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 23:96 >> 23:97 */
pdcrt_fijar_local_nb(ctx, m, 22, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 23:61 >> 23:62 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 7);
return pdcrt_llamar2(ctx, m, pdc_mpdzipdc_N95_validaci_N95__N95_n_k74, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 19)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 20)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 21)));
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k74(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k74);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 23:61 >> 23:62 */
pdcrt_fijar_local(ctx, m, 18, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 23:61 >> 23:62 */
pdcrt_fijar_local_nb(ctx, m, 21, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 23:61 >> 23:62 */
pdcrt_fijar_local_nb(ctx, m, 20, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 23:61 >> 23:62 */
pdcrt_fijar_local_nb(ctx, m, 19, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 23:18 >> 23:21 */
pdcrt_fijar_local_nb(ctx, m, 14, pdcrt_obtener_local(ctx, m, 18));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 23:18 >> 23:21 */
pdcrt_fijar_local_nb(ctx, m, 18, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 24:15 >> 24:21 */
pdcrt_fijar_local(ctx, m, 19, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 4)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 24:23 >> 24:26 */
pdcrt_fijar_local_nb(ctx, m, 20, pdcrt_obtener_local(ctx, m, 14));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 24:15 >> 24:22 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 1);
return pdcrt_llamar1(ctx, m, pdc_mpdzipdc_N95_validaci_N95__N95_n_k75, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 19)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 20)));
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k75(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k75);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 24:15 >> 24:22 */
pdcrt_fijar_local(ctx, m, 18, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 24:15 >> 24:22 */
pdcrt_fijar_local_nb(ctx, m, 20, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 24:15 >> 24:22 */
pdcrt_fijar_local_nb(ctx, m, 19, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 24:12 >> 32:17 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 18);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 19, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 24:12 >> 32:17 */
pdcrt_obj csaltar_obj = pdcrt_obtener_local(ctx, m, 19);
if(csaltar_obj.recv != &pdcrt_recv_booleano) pdcrt_error(ctx, "Se esperaba un objeto de tipo Boole");
if(csaltar_obj.bval)
return pdcrt_saltar(ctx, m, pdc_mpdzipdc_N95_validaci_N95__N95_n_k78, PDCRT_XMM_NULO());
else
return pdcrt_saltar(ctx, m, pdc_mpdzipdc_N95_validaci_N95__N95_n_k76, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k76(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k76);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 24:12 >> 32:17 */
pdcrt_fijar_local_nb(ctx, m, 19, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 24:12 >> 32:17 */
pdcrt_fijar_local_nb(ctx, m, 18, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 26:26 >> 26:35 */
pdcrt_fijar_local_nb(ctx, m, 19, pdcrt_obtener_local(ctx, m, 13));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 26:26 >> 26:35 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 1);
return pdcrt_llamar0(ctx, m->k.marco, m->k.kf, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 19)), pdcrt_xmm_desde_obj(llamar_msj));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 26:26 >> 26:35 */
pdcrt_fijar_local_nb(ctx, m, 19, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 24:12 >> 32:17 */
return pdcrt_saltar(ctx, m, pdc_mpdzipdc_N95_validaci_N95__N95_n_k84, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k77(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k77);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
return pdcrt_saltar(ctx, m, pdc_mpdzipdc_N95_validaci_N95__N95_n_k78, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k78(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k78);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 28:25 >> 28:31 */
pdcrt_fijar_local_nb(ctx, m, 19, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 28:25 >> 28:31 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 19));
pdcrt_fijar_local(ctx, m, 15, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 28:25 >> 28:31 */
pdcrt_fijar_local_nb(ctx, m, 19, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 29:31 >> 29:39 */
pdcrt_fijar_local(ctx, m, 20, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 29:54 >> 29:58 */
pdcrt_fijar_local(ctx, m, 21, PDCRT_OBTENER_CONSTANTE(ctx, m, 6));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 29:60 >> 29:63 */
pdcrt_fijar_local_nb(ctx, m, 23, pdcrt_obtener_local(ctx, m, 14));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 29:63 >> 29:64 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 8);
return pdcrt_llamar0(ctx, m, pdc_mpdzipdc_N95_validaci_N95__N95_n_k79, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 23)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k79(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k79);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 29:63 >> 29:64 */
pdcrt_fijar_local(ctx, m, 22, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 29:63 >> 29:64 */
pdcrt_fijar_local_nb(ctx, m, 23, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 29:39 >> 29:40 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 9);
return pdcrt_llamar2(ctx, m, pdc_mpdzipdc_N95_validaci_N95__N95_n_k80, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 20)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 21)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 22)));
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k80(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k80);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 29:39 >> 29:40 */
pdcrt_fijar_local(ctx, m, 19, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 29:39 >> 29:40 */
pdcrt_fijar_local_nb(ctx, m, 22, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 29:39 >> 29:40 */
pdcrt_fijar_local_nb(ctx, m, 21, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 29:39 >> 29:40 */
pdcrt_fijar_local_nb(ctx, m, 20, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 29:22 >> 29:28 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 15), pdcrt_obtener_local(ctx, m, 19));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 29:22 >> 29:28 */
pdcrt_fijar_local_nb(ctx, m, 19, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 30:16 >> 30:45 */
pdcrt_fijar_local(ctx, m, 20, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 6)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 30:47 >> 30:53 */
pdcrt_fijar_local(ctx, m, 22, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 15)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 30:53 >> 30:54 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 10);
return pdcrt_llamar0(ctx, m, pdc_mpdzipdc_N95_validaci_N95__N95_n_k81, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 22)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k81(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k81);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 30:53 >> 30:54 */
pdcrt_fijar_local(ctx, m, 21, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 30:53 >> 30:54 */
pdcrt_fijar_local_nb(ctx, m, 22, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 30:60 >> 30:71 */
pdcrt_fijar_local(ctx, m, 22, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 1)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 30:73 >> 30:81 */
pdcrt_fijar_local(ctx, m, 23, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 30:16 >> 30:46 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 1);
return pdcrt_llamar3(ctx, m, pdc_mpdzipdc_N95_validaci_N95__N95_n_k82, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 20)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 21)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 22)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 23)));
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k82(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k82);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 30:16 >> 30:46 */
pdcrt_fijar_local(ctx, m, 19, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 30:16 >> 30:46 */
pdcrt_fijar_local_nb(ctx, m, 23, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 30:16 >> 30:46 */
pdcrt_fijar_local_nb(ctx, m, 22, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 30:16 >> 30:46 */
pdcrt_fijar_local_nb(ctx, m, 21, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 30:16 >> 30:46 */
pdcrt_fijar_local_nb(ctx, m, 20, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 28:16 >> 31:29 */
pdcrt_fijar_local_nb(ctx, m, 19, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 31:25 >> 31:29 */
pdcrt_fijar_local(ctx, m, 20, ctx->espacio_de_nombres_runtime);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 31:25 >> 31:29 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 11);
return pdcrt_llamar0(ctx, m, pdc_mpdzipdc_N95_validaci_N95__N95_n_k83, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 20)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k83(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k83);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 31:25 >> 31:29 */
pdcrt_fijar_local(ctx, m, 19, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 31:25 >> 31:29 */
pdcrt_fijar_local_nb(ctx, m, 20, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 31:16 >> 31:29 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 19)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 31:16 >> 31:29 */
pdcrt_fijar_local_nb(ctx, m, 19, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
return pdcrt_saltar(ctx, m, pdc_mpdzipdc_N95_validaci_N95__N95_n_k84, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k84(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k84);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 21:8 >> 33:13 */
return pdcrt_saltar(ctx, m, pdc_mpdzipdc_N95_validaci_N95__N95_n_k87, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k85(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k85);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
return pdcrt_saltar(ctx, m, pdc_mpdzipdc_N95_validaci_N95__N95_n_k86, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k86(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k86);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
return pdcrt_saltar(ctx, m, pdc_mpdzipdc_N95_validaci_N95__N95_n_k87, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k87(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k87);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 36:20 >> 36:31 */
pdcrt_fijar_local(ctx, m, 21, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 1)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 36:31 >> 36:32 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 12);
return pdcrt_llamar0(ctx, m, pdc_mpdzipdc_N95_validaci_N95__N95_n_k88, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 21)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k88(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k88);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 36:31 >> 36:32 */
pdcrt_fijar_local(ctx, m, 20, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 36:31 >> 36:32 */
pdcrt_fijar_local_nb(ctx, m, 21, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 36:56 >> 36:64 */
pdcrt_fijar_local(ctx, m, 21, PDCRT_OBTENER_CONSTANTE(ctx, m, 5));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 36:66 >> 36:69 */
pdcrt_fijar_local_nb(ctx, m, 24, pdcrt_obtener_local(ctx, m, 12));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 36:69 >> 36:70 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 13);
return pdcrt_llamar0(ctx, m, pdc_mpdzipdc_N95_validaci_N95__N95_n_k89, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 24)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k89(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k89);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 36:69 >> 36:70 */
pdcrt_fijar_local(ctx, m, 23, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 36:69 >> 36:70 */
pdcrt_fijar_local_nb(ctx, m, 24, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 36:74 >> 36:75 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 6);
return pdcrt_llamar0(ctx, m, pdc_mpdzipdc_N95_validaci_N95__N95_n_k90, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 23)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k90(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k90);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 36:74 >> 36:75 */
pdcrt_fijar_local(ctx, m, 22, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 36:74 >> 36:75 */
pdcrt_fijar_local_nb(ctx, m, 23, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 36:41 >> 36:42 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 9);
return pdcrt_llamar2(ctx, m, pdc_mpdzipdc_N95_validaci_N95__N95_n_k91, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 20)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 21)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 22)));
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k91(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k91);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 36:41 >> 36:42 */
pdcrt_fijar_local(ctx, m, 19, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 36:41 >> 36:42 */
pdcrt_fijar_local_nb(ctx, m, 22, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 36:41 >> 36:42 */
pdcrt_fijar_local_nb(ctx, m, 21, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 36:41 >> 36:42 */
pdcrt_fijar_local_nb(ctx, m, 20, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 36:14 >> 36:17 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 16), pdcrt_obtener_local(ctx, m, 19));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 36:14 >> 36:17 */
pdcrt_fijar_local_nb(ctx, m, 19, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 37:24 >> 37:35 */
pdcrt_fijar_local(ctx, m, 21, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 1)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 37:35 >> 37:36 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 14);
return pdcrt_llamar0(ctx, m, pdc_mpdzipdc_N95_validaci_N95__N95_n_k92, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 21)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k92(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k92);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 37:35 >> 37:36 */
pdcrt_fijar_local(ctx, m, 20, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 37:35 >> 37:36 */
pdcrt_fijar_local_nb(ctx, m, 21, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 37:63 >> 37:72 */
pdcrt_fijar_local(ctx, m, 21, PDCRT_OBTENER_CONSTANTE(ctx, m, 15));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 37:74 >> 37:77 */
pdcrt_fijar_local(ctx, m, 23, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 16)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 37:77 >> 37:78 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 15);
return pdcrt_llamar0(ctx, m, pdc_mpdzipdc_N95_validaci_N95__N95_n_k93, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 23)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k93(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k93);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 37:77 >> 37:78 */
pdcrt_fijar_local(ctx, m, 22, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 37:77 >> 37:78 */
pdcrt_fijar_local_nb(ctx, m, 23, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 37:48 >> 37:49 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 9);
return pdcrt_llamar2(ctx, m, pdc_mpdzipdc_N95_validaci_N95__N95_n_k94, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 20)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 21)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 22)));
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k94(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k94);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 37:48 >> 37:49 */
pdcrt_fijar_local(ctx, m, 19, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 37:48 >> 37:49 */
pdcrt_fijar_local_nb(ctx, m, 22, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 37:48 >> 37:49 */
pdcrt_fijar_local_nb(ctx, m, 21, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 37:48 >> 37:49 */
pdcrt_fijar_local_nb(ctx, m, 20, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 37:14 >> 37:21 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 17), pdcrt_obtener_local(ctx, m, 19));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 37:14 >> 37:21 */
pdcrt_fijar_local_nb(ctx, m, 19, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 38:14 >> 38:21 */
pdcrt_fijar_local(ctx, m, 21, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 17)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 38:21 >> 38:22 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 16);
return pdcrt_llamar0(ctx, m, pdc_mpdzipdc_N95_validaci_N95__N95_n_k95, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 21)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k95(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k95);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 38:21 >> 38:22 */
pdcrt_fijar_local(ctx, m, 20, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 38:21 >> 38:22 */
pdcrt_fijar_local_nb(ctx, m, 21, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 38:11 >> 38:22 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 20);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 19, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 38:11 >> 38:22 */
pdcrt_fijar_local_nb(ctx, m, 20, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 38:8 >> 45:13 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 19);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 20, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 38:8 >> 45:13 */
pdcrt_obj csaltar_obj = pdcrt_obtener_local(ctx, m, 20);
if(csaltar_obj.recv != &pdcrt_recv_booleano) pdcrt_error(ctx, "Se esperaba un objeto de tipo Boole");
if(csaltar_obj.bval)
return pdcrt_saltar(ctx, m, pdc_mpdzipdc_N95_validaci_N95__N95_n_k107, PDCRT_XMM_NULO());
else
return pdcrt_saltar(ctx, m, pdc_mpdzipdc_N95_validaci_N95__N95_n_k96, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k96(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k96);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 38:8 >> 45:13 */
pdcrt_fijar_local_nb(ctx, m, 20, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 38:8 >> 45:13 */
pdcrt_fijar_local_nb(ctx, m, 19, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 39:12 >> 39:20 */
pdcrt_fijar_local(ctx, m, 20, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 9)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 40:17 >> 40:35 */
pdcrt_fijar_local(ctx, m, 22, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 10)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 41:21 >> 41:26 */
pdcrt_fijar_local(ctx, m, 24, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 11)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 42:25 >> 42:62 */
pdcrt_fijar_local(ctx, m, 26, PDCRT_OBTENER_CONSTANTE(ctx, m, 17));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 42:74 >> 42:77 */
pdcrt_fijar_local_nb(ctx, m, 29, pdcrt_obtener_local(ctx, m, 12));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 42:77 >> 42:78 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 13);
return pdcrt_llamar0(ctx, m, pdc_mpdzipdc_N95_validaci_N95__N95_n_k97, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 29)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k97(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k97);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 42:77 >> 42:78 */
pdcrt_fijar_local(ctx, m, 28, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 42:77 >> 42:78 */
pdcrt_fijar_local_nb(ctx, m, 29, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 42:82 >> 42:83 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 18);
return pdcrt_llamar0(ctx, m, pdc_mpdzipdc_N95_validaci_N95__N95_n_k98, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 28)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k98(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k98);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 42:82 >> 42:83 */
pdcrt_fijar_local(ctx, m, 27, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 42:82 >> 42:83 */
pdcrt_fijar_local_nb(ctx, m, 28, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 42:62 >> 42:63 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 19);
return pdcrt_llamar1(ctx, m, pdc_mpdzipdc_N95_validaci_N95__N95_n_k99, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 26)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 27)));
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k99(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k99);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 42:62 >> 42:63 */
pdcrt_fijar_local(ctx, m, 25, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 42:62 >> 42:63 */
pdcrt_fijar_local_nb(ctx, m, 27, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 42:62 >> 42:63 */
pdcrt_fijar_local_nb(ctx, m, 26, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 43:24 >> 43:27 */
pdcrt_fijar_local_nb(ctx, m, 28, pdcrt_obtener_local(ctx, m, 12));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 43:27 >> 43:28 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 13);
return pdcrt_llamar0(ctx, m, pdc_mpdzipdc_N95_validaci_N95__N95_n_k100, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 28)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k100(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k100);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 43:27 >> 43:28 */
pdcrt_fijar_local(ctx, m, 27, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 43:27 >> 43:28 */
pdcrt_fijar_local_nb(ctx, m, 28, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 43:32 >> 43:33 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 20);
return pdcrt_llamar0(ctx, m, pdc_mpdzipdc_N95_validaci_N95__N95_n_k101, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 27)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k101(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k101);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 43:32 >> 43:33 */
pdcrt_fijar_local(ctx, m, 26, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 43:32 >> 43:33 */
pdcrt_fijar_local_nb(ctx, m, 27, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 41:26 >> 41:27 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 21);
return pdcrt_llamar2(ctx, m, pdc_mpdzipdc_N95_validaci_N95__N95_n_k102, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 24)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 25)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 26)));
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k102(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k102);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 41:26 >> 41:27 */
pdcrt_fijar_local(ctx, m, 23, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 41:26 >> 41:27 */
pdcrt_fijar_local_nb(ctx, m, 26, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 41:26 >> 41:27 */
pdcrt_fijar_local_nb(ctx, m, 25, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 41:26 >> 41:27 */
pdcrt_fijar_local_nb(ctx, m, 24, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 40:17 >> 40:36 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 1);
return pdcrt_llamar1(ctx, m, pdc_mpdzipdc_N95_validaci_N95__N95_n_k103, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 22)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 23)));
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k103(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k103);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 40:17 >> 40:36 */
pdcrt_fijar_local(ctx, m, 21, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 40:17 >> 40:36 */
pdcrt_fijar_local_nb(ctx, m, 23, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 40:17 >> 40:36 */
pdcrt_fijar_local_nb(ctx, m, 22, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 39:12 >> 39:21 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 1);
return pdcrt_llamar1(ctx, m, pdc_mpdzipdc_N95_validaci_N95__N95_n_k104, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 20)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 21)));
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k104(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k104);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 39:12 >> 39:21 */
pdcrt_fijar_local(ctx, m, 19, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 39:12 >> 39:21 */
pdcrt_fijar_local_nb(ctx, m, 21, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 39:12 >> 39:21 */
pdcrt_fijar_local_nb(ctx, m, 20, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 39:12 >> 44:31 */
pdcrt_fijar_local_nb(ctx, m, 19, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 44:12 >> 44:30 */
pdcrt_fijar_local(ctx, m, 20, ctx->espacio_de_nombres_runtime);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 44:32 >> 44:63 */
pdcrt_fijar_local(ctx, m, 21, PDCRT_OBTENER_CONSTANTE(ctx, m, 22));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 44:12 >> 44:30 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 23);
return pdcrt_llamar1(ctx, m, pdc_mpdzipdc_N95_validaci_N95__N95_n_k105, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 20)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 21)));
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k105(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k105);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 44:12 >> 44:30 */
pdcrt_fijar_local(ctx, m, 19, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 44:12 >> 44:30 */
pdcrt_fijar_local_nb(ctx, m, 21, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 44:12 >> 44:30 */
pdcrt_fijar_local_nb(ctx, m, 20, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 39:12 >> 44:31 */
pdcrt_fijar_local_nb(ctx, m, 19, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 38:8 >> 45:13 */
return pdcrt_saltar(ctx, m, pdc_mpdzipdc_N95_validaci_N95__N95_n_k108, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k106(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k106);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
return pdcrt_saltar(ctx, m, pdc_mpdzipdc_N95_validaci_N95__N95_n_k107, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k107(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k107);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
return pdcrt_saltar(ctx, m, pdc_mpdzipdc_N95_validaci_N95__N95_n_k108, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k108(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k108);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 46:18 >> 46:27 */
pdcrt_fijar_local_nb(ctx, m, 20, pdcrt_obtener_local(ctx, m, 13));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 46:18 >> 46:27 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 1);
return pdcrt_llamar0(ctx, m->k.marco, m->k.kf, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 20)), pdcrt_xmm_desde_obj(llamar_msj));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 46:18 >> 46:27 */
pdcrt_fijar_local_nb(ctx, m, 20, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 20:16 >> 20:23 */
pdcrt_fijar_local_nb(ctx, m, 20, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 20:16 >> 20:23 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 20)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 20:16 >> 20:23 */
pdcrt_fijar_local_nb(ctx, m, 20, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k109(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k109);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 17:4 >> 17:14 */
pdcrt_fijar_local(ctx, m, 14, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 17:4 >> 17:14 */
pdcrt_fijar_local_nb(ctx, m, 18, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 17:4 >> 17:14 */
pdcrt_fijar_local_nb(ctx, m, 17, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 17:4 >> 17:14 */
pdcrt_fijar_local_nb(ctx, m, 16, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 17:4 >> 17:14 */
pdcrt_fijar_local_nb(ctx, m, 15, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 17:4 >> 17:14 */
pdcrt_fijar_local_nb(ctx, m, 14, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 16:0 >> 48:10 */
pdcrt_fijar_local_nb(ctx, m, 14, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 16:0 >> 48:10 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 14)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 16:0 >> 48:10 */
pdcrt_fijar_local_nb(ctx, m, 14, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k110(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k110);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 58:39 >> 58:40 */
pdcrt_fijar_local(ctx, m, 7, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 58:39 >> 58:40 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 58:18 >> 58:30 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 1);
return pdcrt_llamar2(ctx, m, pdc_mpdzipdc_N95_validaci_N95__N95_n_k111, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)));
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k111(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k111);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 58:18 >> 58:30 */
pdcrt_fijar_local(ctx, m, 4, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 58:18 >> 58:30 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 58:18 >> 58:30 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 58:18 >> 58:30 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 59:18 >> 59:29 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 1)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 59:31 >> 59:34 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_obtener_local(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 59:36 >> 59:39 */
pdcrt_fijar_local(ctx, m, 9, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 59:39 >> 59:40 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 25);
return pdcrt_llamar0(ctx, m, pdc_mpdzipdc_N95_validaci_N95__N95_n_k112, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k112(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k112);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 59:39 >> 59:40 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 59:39 >> 59:40 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 59:18 >> 59:30 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 1);
return pdcrt_llamar2(ctx, m, pdc_mpdzipdc_N95_validaci_N95__N95_n_k113, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)));
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k113(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k113);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 59:18 >> 59:30 */
pdcrt_fijar_local(ctx, m, 5, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 59:18 >> 59:30 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 59:18 >> 59:30 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 59:18 >> 59:30 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 58:18 >> 59:30 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 3);
return pdcrt_llamar1(ctx, m->k.marco, m->k.kf, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 5)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 58:18 >> 59:30 */
pdcrt_fijar_local_nb(ctx, m, 5, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 58:18 >> 59:30 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 57:19 >> 57:26 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 57:19 >> 57:26 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 57:19 >> 57:26 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k114(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k114);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 61:32 >> 61:33 */
pdcrt_fijar_local(ctx, m, 9, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 61:32 >> 61:33 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 61:11 >> 61:23 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 1);
return pdcrt_llamar2(ctx, m, pdc_mpdzipdc_N95_validaci_N95__N95_n_k115, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)));
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k115(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k115);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 61:11 >> 61:23 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 61:11 >> 61:23 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 61:11 >> 61:23 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 61:11 >> 61:23 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 61:8 >> 68:13 */
do {
pdcrt_obj b = pdcrt_obtener_local(ctx, m, 6);
if(pdcrt_tipo_de_obj(b) != PDCRT_TOBJ_BOOLEANO) pdcrt_error(ctx, "Se esperaba un objeto booleano");
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_booleano(!b.bval));
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 61:8 >> 68:13 */
pdcrt_obj csaltar_obj = pdcrt_obtener_local(ctx, m, 7);
if(csaltar_obj.recv != &pdcrt_recv_booleano) pdcrt_error(ctx, "Se esperaba un objeto de tipo Boole");
if(csaltar_obj.bval)
return pdcrt_saltar(ctx, m, pdc_mpdzipdc_N95_validaci_N95__N95_n_k123, PDCRT_XMM_NULO());
else
return pdcrt_saltar(ctx, m, pdc_mpdzipdc_N95_validaci_N95__N95_n_k116, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k116(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k116);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 61:8 >> 68:13 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 61:8 >> 68:13 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 62:12 >> 62:20 */
pdcrt_fijar_local(ctx, m, 7, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 0)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 63:17 >> 63:35 */
pdcrt_fijar_local(ctx, m, 9, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 3)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 64:21 >> 64:26 */
pdcrt_fijar_local(ctx, m, 11, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 4)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 65:24 >> 65:78 */
pdcrt_fijar_local(ctx, m, 12, PDCRT_OBTENER_CONSTANTE(ctx, m, 26));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 66:24 >> 66:27 */
pdcrt_fijar_local_nb(ctx, m, 14, pdcrt_obtener_local(ctx, m, 5));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 66:27 >> 66:28 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 20);
return pdcrt_llamar0(ctx, m, pdc_mpdzipdc_N95_validaci_N95__N95_n_k117, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 14)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k117(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k117);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 66:27 >> 66:28 */
pdcrt_fijar_local(ctx, m, 13, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 66:27 >> 66:28 */
pdcrt_fijar_local_nb(ctx, m, 14, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 64:26 >> 64:27 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 21);
return pdcrt_llamar2(ctx, m, pdc_mpdzipdc_N95_validaci_N95__N95_n_k118, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 11)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 12)), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 13)));
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k118(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k118);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 64:26 >> 64:27 */
pdcrt_fijar_local(ctx, m, 10, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 64:26 >> 64:27 */
pdcrt_fijar_local_nb(ctx, m, 13, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 64:26 >> 64:27 */
pdcrt_fijar_local_nb(ctx, m, 12, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 64:26 >> 64:27 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 63:17 >> 63:36 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 1);
return pdcrt_llamar1(ctx, m, pdc_mpdzipdc_N95_validaci_N95__N95_n_k119, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 9)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 10)));
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k119(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k119);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 63:17 >> 63:36 */
pdcrt_fijar_local(ctx, m, 8, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 63:17 >> 63:36 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 63:17 >> 63:36 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 62:12 >> 62:21 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 1);
return pdcrt_llamar1(ctx, m, pdc_mpdzipdc_N95_validaci_N95__N95_n_k120, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)));
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k120(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k120);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 62:12 >> 62:21 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 62:12 >> 62:21 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 62:12 >> 62:21 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 62:12 >> 67:31 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 67:12 >> 67:30 */
pdcrt_fijar_local(ctx, m, 7, ctx->espacio_de_nombres_runtime);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 67:32 >> 67:86 */
pdcrt_fijar_local(ctx, m, 8, PDCRT_OBTENER_CONSTANTE(ctx, m, 26));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 67:12 >> 67:30 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 23);
return pdcrt_llamar1(ctx, m, pdc_mpdzipdc_N95_validaci_N95__N95_n_k121, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 8)));
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k121(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k121);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 67:12 >> 67:30 */
pdcrt_fijar_local(ctx, m, 6, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 67:12 >> 67:30 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 67:12 >> 67:30 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 62:12 >> 67:31 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 61:8 >> 68:13 */
return pdcrt_saltar(ctx, m, pdc_mpdzipdc_N95_validaci_N95__N95_n_k124, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k122(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k122);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 3:0 >> 3:8 */
return pdcrt_saltar(ctx, m, pdc_mpdzipdc_N95_validaci_N95__N95_n_k123, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k123(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k123);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 3:22 >> 3:25 */
return pdcrt_saltar(ctx, m, pdc_mpdzipdc_N95_validaci_N95__N95_n_k124, PDCRT_XMM_NULO());
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k124(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k124);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 60:16 >> 60:23 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 60:16 >> 60:23 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 6)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 60:16 >> 60:23 */
pdcrt_fijar_local_nb(ctx, m, 6, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k125(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k125);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 57:4 >> 57:13 */
pdcrt_fijar_local(ctx, m, 7, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 57:4 >> 57:13 */
pdcrt_fijar_local_nb(ctx, m, 11, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 57:4 >> 57:13 */
pdcrt_fijar_local_nb(ctx, m, 10, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 57:4 >> 57:13 */
pdcrt_fijar_local_nb(ctx, m, 9, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 57:4 >> 57:13 */
pdcrt_fijar_local_nb(ctx, m, 8, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 57:4 >> 57:13 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 56:0 >> 70:10 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 56:0 >> 70:10 */
return pdcrt_devolver1(ctx, m, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 7)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 56:0 >> 70:10 */
pdcrt_fijar_local_nb(ctx, m, 7, pdcrt_objeto_nulo());
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k126(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k126);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_obtener_local(ctx, m, 56));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 119), pdcrt_obtener_local(ctx, m, 120), "ParaCadaElemento", 16, true, pdc_mpdzipdc_N95_validaci_N95__N95_n_k127);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k127(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k127);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 109)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 119), pdcrt_obtener_local(ctx, m, 120), "ParaCadaElementoConÍndice", 26, true, pdc_mpdzipdc_N95_validaci_N95__N95_n_k128);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k128(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k128);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 57)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 119), pdcrt_obtener_local(ctx, m, 120), "Todos", 5, true, pdc_mpdzipdc_N95_validaci_N95__N95_n_k129);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k129(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k129);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 108)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 119), pdcrt_obtener_local(ctx, m, 120), "EsSubclase", 10, true, pdc_mpdzipdc_N95_validaci_N95__N95_n_k130);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k130(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k130);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 58)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 119), pdcrt_obtener_local(ctx, m, 120), "Contiene", 8, true, pdc_mpdzipdc_N95_validaci_N95__N95_n_k131);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k131(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k131);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 107)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 119), pdcrt_obtener_local(ctx, m, 120), "EsInstancia", 11, true, pdc_mpdzipdc_N95_validaci_N95__N95_n_k132);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k132(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k132);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 59)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 119), pdcrt_obtener_local(ctx, m, 120), "EsImpar", 7, true, pdc_mpdzipdc_N95_validaci_N95__N95_n_k133);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k133(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k133);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 106)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 119), pdcrt_obtener_local(ctx, m, 120), "ParaCadaNúmeroConPaso", 22, true, pdc_mpdzipdc_N95_validaci_N95__N95_n_k134);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k134(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k134);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 60)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 119), pdcrt_obtener_local(ctx, m, 120), "Escribir", 8, true, pdc_mpdzipdc_N95_validaci_N95__N95_n_k135);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k135(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k135);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 105)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 119), pdcrt_obtener_local(ctx, m, 120), "Identidad", 9, true, pdc_mpdzipdc_N95_validaci_N95__N95_n_k136);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k136(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k136);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 61)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 119), pdcrt_obtener_local(ctx, m, 120), "Reducir", 7, true, pdc_mpdzipdc_N95_validaci_N95__N95_n_k137);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k137(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k137);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 104)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 119), pdcrt_obtener_local(ctx, m, 120), "Mapear", 6, true, pdc_mpdzipdc_N95_validaci_N95__N95_n_k138);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k138(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k138);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 62)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 119), pdcrt_obtener_local(ctx, m, 120), "Filtrar", 7, true, pdc_mpdzipdc_N95_validaci_N95__N95_n_k139);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k139(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k139);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 103)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 119), pdcrt_obtener_local(ctx, m, 120), "Algún", 6, true, pdc_mpdzipdc_N95_validaci_N95__N95_n_k140);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k140(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k140);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 63)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 119), pdcrt_obtener_local(ctx, m, 120), "DígitoAEntero", 14, true, pdc_mpdzipdc_N95_validaci_N95__N95_n_k141);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k141(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k141);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 102)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 119), pdcrt_obtener_local(ctx, m, 120), "Elevar", 6, true, pdc_mpdzipdc_N95_validaci_N95__N95_n_k142);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k142(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k142);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 64)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 119), pdcrt_obtener_local(ctx, m, 120), "ConvertirAEntero", 16, true, pdc_mpdzipdc_N95_validaci_N95__N95_n_k143);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k143(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k143);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 101)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 119), pdcrt_obtener_local(ctx, m, 120), "ConvertirANúmero", 17, true, pdc_mpdzipdc_N95_validaci_N95__N95_n_k144);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k144(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k144);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 65)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 119), pdcrt_obtener_local(ctx, m, 120), "EsNúmeroEntero", 15, true, pdc_mpdzipdc_N95_validaci_N95__N95_n_k145);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k145(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k145);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 100)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 119), pdcrt_obtener_local(ctx, m, 120), "EsNúmero", 9, true, pdc_mpdzipdc_N95_validaci_N95__N95_n_k146);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k146(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k146);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 66)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 119), pdcrt_obtener_local(ctx, m, 120), "Concatenar", 10, true, pdc_mpdzipdc_N95_validaci_N95__N95_n_k147);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k147(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k147);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 99)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 119), pdcrt_obtener_local(ctx, m, 120), "ArregloConFinal", 15, true, pdc_mpdzipdc_N95_validaci_N95__N95_n_k148);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k148(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k148);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 67)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 119), pdcrt_obtener_local(ctx, m, 120), "Aplicar\'", 8, true, pdc_mpdzipdc_N95_validaci_N95__N95_n_k149);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k149(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k149);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 98)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 119), pdcrt_obtener_local(ctx, m, 120), "Aplicar\'i", 9, true, pdc_mpdzipdc_N95_validaci_N95__N95_n_k150);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k150(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k150);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 68)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 119), pdcrt_obtener_local(ctx, m, 120), "EnviarMensaje", 13, true, pdc_mpdzipdc_N95_validaci_N95__N95_n_k151);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k151(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k151);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 97)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 119), pdcrt_obtener_local(ctx, m, 120), "Resto", 5, true, pdc_mpdzipdc_N95_validaci_N95__N95_n_k152);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k152(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k152);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 69)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 119), pdcrt_obtener_local(ctx, m, 120), "Abs", 3, true, pdc_mpdzipdc_N95_validaci_N95__N95_n_k153);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k153(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k153);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 96)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 119), pdcrt_obtener_local(ctx, m, 120), "Mod", 3, true, pdc_mpdzipdc_N95_validaci_N95__N95_n_k154);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k154(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k154);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 70)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 119), pdcrt_obtener_local(ctx, m, 120), "EsPar", 5, true, pdc_mpdzipdc_N95_validaci_N95__N95_n_k155);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k155(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k155);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 95)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 119), pdcrt_obtener_local(ctx, m, 120), "Aplanar", 7, true, pdc_mpdzipdc_N95_validaci_N95__N95_n_k156);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k156(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k156);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 71)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 119), pdcrt_obtener_local(ctx, m, 120), "AplanarTodo", 11, true, pdc_mpdzipdc_N95_validaci_N95__N95_n_k157);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k157(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k157);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 94)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 119), pdcrt_obtener_local(ctx, m, 120), "PedazoDeArreglo", 15, true, pdc_mpdzipdc_N95_validaci_N95__N95_n_k158);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k158(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k158);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 72)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 119), pdcrt_obtener_local(ctx, m, 120), "PrimerElemento", 14, true, pdc_mpdzipdc_N95_validaci_N95__N95_n_k159);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k159(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k159);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 93)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 119), pdcrt_obtener_local(ctx, m, 120), "ÚltimoElemento", 15, true, pdc_mpdzipdc_N95_validaci_N95__N95_n_k160);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k160(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k160);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 73)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 119), pdcrt_obtener_local(ctx, m, 120), "ÚnicoElemento", 14, true, pdc_mpdzipdc_N95_validaci_N95__N95_n_k161);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k161(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k161);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 92)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 119), pdcrt_obtener_local(ctx, m, 120), "EsNulo", 6, true, pdc_mpdzipdc_N95_validaci_N95__N95_n_k162);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k162(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k162);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 74)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 119), pdcrt_obtener_local(ctx, m, 120), "Max", 3, true, pdc_mpdzipdc_N95_validaci_N95__N95_n_k163);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k163(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k163);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 91)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 119), pdcrt_obtener_local(ctx, m, 120), "Min", 3, true, pdc_mpdzipdc_N95_validaci_N95__N95_n_k164);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k164(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k164);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 75)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 119), pdcrt_obtener_local(ctx, m, 120), "NoImplementado", 14, true, pdc_mpdzipdc_N95_validaci_N95__N95_n_k165);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k165(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k165);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 90)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 119), pdcrt_obtener_local(ctx, m, 120), "MétodoAbstracto", 16, true, pdc_mpdzipdc_N95_validaci_N95__N95_n_k166);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k166(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k166);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 76)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 119), pdcrt_obtener_local(ctx, m, 120), "Inalcanzable", 12, true, pdc_mpdzipdc_N95_validaci_N95__N95_n_k167);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k167(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k167);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 89)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 119), pdcrt_obtener_local(ctx, m, 120), "LlamarConEC", 11, true, pdc_mpdzipdc_N95_validaci_N95__N95_n_k168);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k168(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k168);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 77)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 119), pdcrt_obtener_local(ctx, m, 120), "ArregloSinElementoEnÍndice", 27, true, pdc_mpdzipdc_N95_validaci_N95__N95_n_k169);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k169(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k169);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 88)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 119), pdcrt_obtener_local(ctx, m, 120), "LeerLínea", 10, true, pdc_mpdzipdc_N95_validaci_N95__N95_n_k170);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k170(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k170);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 78)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 119), pdcrt_obtener_local(ctx, m, 120), "LeerNúmero", 11, true, pdc_mpdzipdc_N95_validaci_N95__N95_n_k171);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k171(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k171);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 87)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 119), pdcrt_obtener_local(ctx, m, 120), "Parcial", 7, true, pdc_mpdzipdc_N95_validaci_N95__N95_n_k172);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k172(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k172);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 79)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 119), pdcrt_obtener_local(ctx, m, 120), "MétodoComoFunción", 19, true, pdc_mpdzipdc_N95_validaci_N95__N95_n_k173);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k173(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k173);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 86)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 119), pdcrt_obtener_local(ctx, m, 120), "OperadorBinario", 15, true, pdc_mpdzipdc_N95_validaci_N95__N95_n_k174);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k174(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k174);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 80)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 119), pdcrt_obtener_local(ctx, m, 120), "ContienePredicado", 17, true, pdc_mpdzipdc_N95_validaci_N95__N95_n_k175);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k175(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k175);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 85)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 119), pdcrt_obtener_local(ctx, m, 120), "BuscarPredicado", 15, true, pdc_mpdzipdc_N95_validaci_N95__N95_n_k176);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k176(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k176);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 81)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 119), pdcrt_obtener_local(ctx, m, 120), "ParaCadaElementoEnReversa", 25, true, pdc_mpdzipdc_N95_validaci_N95__N95_n_k177);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k177(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k177);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 84)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 119), pdcrt_obtener_local(ctx, m, 120), "Diccionario", 11, false, pdc_mpdzipdc_N95_validaci_N95__N95_n_k178);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k178(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k178);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 82)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 119), pdcrt_obtener_local(ctx, m, 120), "Resultado", 9, false, pdc_mpdzipdc_N95_validaci_N95__N95_n_k179);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k179(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k179);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 83)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 119), pdcrt_obtener_local(ctx, m, 120), "Pila", 4, false, pdc_mpdzipdc_N95_validaci_N95__N95_n_k180);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k180(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k180);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 3:22 >> 3:25 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 111)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 119), pdcrt_obtener_local(ctx, m, 120), "CST", 3, false, pdc_mpdzipdc_N95_validaci_N95__N95_n_k181);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k181(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k181);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 4:22 >> 4:25 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 112)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 119), pdcrt_obtener_local(ctx, m, 120), "AST", 3, false, pdc_mpdzipdc_N95_validaci_N95__N95_n_k182);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k182(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k182);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 5:28 >> 5:36 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 113)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 119), pdcrt_obtener_local(ctx, m, 120), "Buscando", 8, true, pdc_mpdzipdc_N95_validaci_N95__N95_n_k183);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k183(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k183);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 5:38 >> 5:47 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 114)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 119), pdcrt_obtener_local(ctx, m, 120), "Buscando\'", 9, true, pdc_mpdzipdc_N95_validaci_N95__N95_n_k184);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k184(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k184);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 6:27 >> 6:32 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 115)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 119), pdcrt_obtener_local(ctx, m, 120), "Error", 5, false, pdc_mpdzipdc_N95_validaci_N95__N95_n_k185);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k185(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k185);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 7:21 >> 7:39 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 116)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 119), pdcrt_obtener_local(ctx, m, 120), "ErrorComoTraceback", 18, true, pdc_mpdzipdc_N95_validaci_N95__N95_n_k186);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k186(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k186);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 16:8 >> 16:37 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 117)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 119), pdcrt_obtener_local(ctx, m, 120), "ValidaLlamadasAutoejecutables", 29, true, pdc_mpdzipdc_N95_validaci_N95__N95_n_k187);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k187(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k187);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 56:8 >> 56:37 */
pdcrt_fijar_local(ctx, m, 120, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 118)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 119), pdcrt_obtener_local(ctx, m, 120), "ValidaDevolverFueraDeFunción", 29, true, pdc_mpdzipdc_N95_validaci_N95__N95_n_k188);
}
static pdcrt_tk pdc_mpdzipdc_N95_validaci_N95__N95_n_k188(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_validaci_N95__N95_n_k188);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
pdcrt_fijar_local_nb(ctx, m, 120, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
return pdcrt_exportar(ctx, m, pdcrt_obtener_local(ctx, m, 119), "pdzipdc_N95_validaci_N95__N95_n", 31);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/validación.pd" => 1:0 >> 70:10 */
pdcrt_fijar_local_nb(ctx, m, 119, pdcrt_objeto_nulo());
}
PDCRT_DECLARAR_ENTRYPOINT(pdzipdc_N95_validaci_N95__N95_n, pdc_mpdzipdc_N95_validaci_N95__N95_n_f6)
#ifdef PDCRT_MAIN
#define PDCRT_DEPS(X) \
    X(pdzipdc_N95_validaci_N95__N95_n, "pdzipdc_N95_validaci_N95__N95_n", 31) \
    X(pdzipdc_N95_parser, "pdzipdc_N95_parser", 18) \
    X(pdzipdc_N95_cst, "pdzipdc_N95_cst", 15) \
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
    X(pdzipdc_N95_ast, "pdzipdc_N95_ast", 15) \
    X(pdzipdc_N95_catamorfismos, "pdzipdc_N95_catamorfismos", 25) \
    X(pdzipdc_N95_combinadores, "pdzipdc_N95_combinadores", 24) \
    X(pdzibepd_N95_x_N95_puerto, "pdzibepd_N95_x_N95_puerto", 25) \
    X(pdzibepd_N95_utilidades_N95_texto, "pdzibepd_N95_utilidades_N95_texto", 33) \
    X(pdzipdc_N95_tokens, "pdzipdc_N95_tokens", 18) \
    X(pdzibepd_N95_x_N95_sistemaDeArchivos_N95_archivo, "pdzibepd_N95_x_N95_sistemaDeArchivos_N95_archivo", 48) \
    X(pdzibepd_N95_algoritmos, "pdzibepd_N95_algoritmos", 23) \
    X(pdzipdc_N95_tokenizador, "pdzipdc_N95_tokenizador", 23) \
    X(pdzibepd_N95_utilidades_N95_texto_N95_ascii, "pdzibepd_N95_utilidades_N95_texto_N95_ascii", 43) \
    X(pdzibepd_N95_x_N95_puerto_N95_deArchivo, "pdzibepd_N95_x_N95_puerto_N95_deArchivo", 39)
PDCRT_DECLARAR_DEPS(PDCRT_DEPS)
PDCRT_DECLARAR_MAIN(pdzipdc_N95_validaci_N95__N95_n)
#endif
