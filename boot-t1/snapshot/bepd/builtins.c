#define PDCRT_INTERNO
#include "pdcrt/pdcrt.h"
#include "pdcrt/pdcrt_ops.h"
static pdcrt_tk pdc_mpdzibepd_N95_builtins_f0(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k0(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k1(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k2(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k3(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k4(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k5(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k6(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k7(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k8(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k9(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k10(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k11(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k12(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k13(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k14(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k15(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k16(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k17(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k18(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k19(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k20(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k21(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k22(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k23(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k24(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k25(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k26(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k27(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k28(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k29(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k30(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k31(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k32(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k33(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k34(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k35(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k36(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k37(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k38(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k39(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k40(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k41(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k42(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k43(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k44(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k45(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k46(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k47(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k48(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k49(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k50(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k51(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k52(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k53(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k54(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k55(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k56(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k57(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k58(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k59(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k60(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k61(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k62(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k63(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k64(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k65(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k66(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k67(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k68(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k69(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k70(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k71(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k72(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k73(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k74(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k75(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k76(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k77(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k78(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k79(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k80(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k81(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k82(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k83(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k84(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k85(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k86(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k87(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k88(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k89(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k90(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k91(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k92(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k93(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k94(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k95(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k96(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k97(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k98(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k99(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k100(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k101(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k102(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k103(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k104(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k105(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k106(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k107(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k108(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k109(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k110(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k111(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k112(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k113(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzibepd_N95_builtins_f0(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd|13:0|17:8";
PDCRT_ALOJAR_MARCO(ctx, 82, args, k, func_srcloc);
struct pdc_params_data_mpdzibepd_N95_builtins_p0 { const pdcrt_params_base base; const pdcrt_param_data params[1]; };
static const struct pdc_params_data_mpdzibepd_N95_builtins_p0 pdc_params = { .base = { .num_params = 0, .tiene_variadic = false, .idc_variadic = 0, }, .params = {} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
PDCRT_DEFINE_RAICES(2);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_arreglo *constantes = pdcrt_crear_arreglo_vacio(ctx, PDCRT_GC(), 0LLU);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
PDCRT_FIJAR_CONSTANTES(ctx, m, constantes);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 26, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 28, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 80, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 80));
pdcrt_fijar_local(ctx, m, 30, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 80, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 80, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 80));
pdcrt_fijar_local(ctx, m, 32, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 80, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 80, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 80));
pdcrt_fijar_local(ctx, m, 34, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 80, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 80, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 80));
pdcrt_fijar_local(ctx, m, 36, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 80, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 80, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 80));
pdcrt_fijar_local(ctx, m, 38, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 80, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 80, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 80));
pdcrt_fijar_local(ctx, m, 40, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 80, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 80, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 80));
pdcrt_fijar_local(ctx, m, 42, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 80, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 80, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 80));
pdcrt_fijar_local(ctx, m, 44, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 80, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 80, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 80));
pdcrt_fijar_local(ctx, m, 46, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 80, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 80, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 80));
pdcrt_fijar_local(ctx, m, 48, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 80, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 80, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 80));
pdcrt_fijar_local(ctx, m, 50, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 80, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 52, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 54, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 56, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 58, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 60, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 62, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 64, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 66, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 68, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 70, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 72, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 74, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 76, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 75, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 73, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 71, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 69, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 67, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 65, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 63, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 61, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 59, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 57, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 55, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 53, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 51, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 80, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 80));
pdcrt_fijar_local(ctx, m, 49, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 80, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 80, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 80));
pdcrt_fijar_local(ctx, m, 47, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 80, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 80, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 80));
pdcrt_fijar_local(ctx, m, 45, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 80, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 80, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 80));
pdcrt_fijar_local(ctx, m, 43, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 80, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 80, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 80));
pdcrt_fijar_local(ctx, m, 41, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 80, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 80, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 80));
pdcrt_fijar_local(ctx, m, 39, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 80, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 80, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 80));
pdcrt_fijar_local(ctx, m, 37, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 80, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 80, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 80));
pdcrt_fijar_local(ctx, m, 35, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 80, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 80, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 80));
pdcrt_fijar_local(ctx, m, 33, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 80, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 80, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 80));
pdcrt_fijar_local(ctx, m, 31, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 80, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 80, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 80));
pdcrt_fijar_local(ctx, m, 29, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 80, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 27, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 25, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 15:0 >> 15:8 */
pdcrt_fijar_local_nb(ctx, m, 80, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 15:0 >> 15:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 80));
pdcrt_fijar_local(ctx, m, 77, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 15:0 >> 15:8 */
pdcrt_fijar_local_nb(ctx, m, 80, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 16:0 >> 16:8 */
pdcrt_fijar_local_nb(ctx, m, 80, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 16:0 >> 16:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 80));
pdcrt_fijar_local(ctx, m, 78, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 16:0 >> 16:8 */
pdcrt_fijar_local_nb(ctx, m, 80, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 17:0 >> 17:8 */
pdcrt_fijar_local_nb(ctx, m, 80, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 17:0 >> 17:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj caja = pdcrt_objeto_caja(pdcrt_crear_caja(ctx, PDCRT_GC()));
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_caja(ctx, caja, pdcrt_obtener_local(ctx, m, 80));
pdcrt_fijar_local(ctx, m, 79, caja);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 17:0 >> 17:8 */
pdcrt_fijar_local_nb(ctx, m, 80, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
return pdcrt_importar(ctx, m, "pdzibepd_N95_builtinsImpl", 25, pdc_mpdzibepd_N95_builtins_k0);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k0(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local(ctx, m, 80, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 80), "ParaCadaElemento", 16, pdc_mpdzibepd_N95_builtins_k1);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k1(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local(ctx, m, 81, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 25, pdcrt_obtener_local(ctx, m, 81));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 80), "Todos", 5, pdc_mpdzibepd_N95_builtins_k2);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k2(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k2);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local(ctx, m, 81, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 26, pdcrt_obtener_local(ctx, m, 81));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 80), "Contiene", 8, pdc_mpdzibepd_N95_builtins_k3);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k3(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k3);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local(ctx, m, 81, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 27, pdcrt_obtener_local(ctx, m, 81));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 80), "EsImpar", 7, pdc_mpdzibepd_N95_builtins_k4);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k4(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k4);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local(ctx, m, 81, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 28, pdcrt_obtener_local(ctx, m, 81));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 80), "Escribir", 8, pdc_mpdzibepd_N95_builtins_k5);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k5(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k5);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local(ctx, m, 81, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 29), pdcrt_obtener_local(ctx, m, 81));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 80), "Reducir", 7, pdc_mpdzibepd_N95_builtins_k6);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k6(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k6);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local(ctx, m, 81, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 30), pdcrt_obtener_local(ctx, m, 81));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 80), "Filtrar", 7, pdc_mpdzibepd_N95_builtins_k7);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k7(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k7);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local(ctx, m, 81, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 31), pdcrt_obtener_local(ctx, m, 81));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 80), "DígitoAEntero", 14, pdc_mpdzibepd_N95_builtins_k8);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k8(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k8);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local(ctx, m, 81, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 32), pdcrt_obtener_local(ctx, m, 81));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 80), "ConvertirAEntero", 16, pdc_mpdzibepd_N95_builtins_k9);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k9(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k9);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local(ctx, m, 81, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 33), pdcrt_obtener_local(ctx, m, 81));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 80), "EsNúmeroEntero", 15, pdc_mpdzibepd_N95_builtins_k10);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k10(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k10);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local(ctx, m, 81, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 34), pdcrt_obtener_local(ctx, m, 81));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 80), "Concatenar", 10, pdc_mpdzibepd_N95_builtins_k11);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k11(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k11);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local(ctx, m, 81, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 35), pdcrt_obtener_local(ctx, m, 81));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 80), "Aplicar\'", 8, pdc_mpdzibepd_N95_builtins_k12);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k12(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k12);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local(ctx, m, 81, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 36), pdcrt_obtener_local(ctx, m, 81));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 80), "EnviarMensaje", 13, pdc_mpdzibepd_N95_builtins_k13);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k13(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k13);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local(ctx, m, 81, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 37), pdcrt_obtener_local(ctx, m, 81));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 80), "Abs", 3, pdc_mpdzibepd_N95_builtins_k14);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k14(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k14);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local(ctx, m, 81, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 38), pdcrt_obtener_local(ctx, m, 81));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 80), "EsPar", 5, pdc_mpdzibepd_N95_builtins_k15);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k15(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k15);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local(ctx, m, 81, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 39), pdcrt_obtener_local(ctx, m, 81));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 80), "AplanarTodo", 11, pdc_mpdzibepd_N95_builtins_k16);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k16(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k16);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local(ctx, m, 81, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 40), pdcrt_obtener_local(ctx, m, 81));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 80), "PrimerElemento", 14, pdc_mpdzibepd_N95_builtins_k17);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k17(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k17);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local(ctx, m, 81, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 41), pdcrt_obtener_local(ctx, m, 81));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 80), "ÚnicoElemento", 14, pdc_mpdzibepd_N95_builtins_k18);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k18(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k18);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local(ctx, m, 81, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 42), pdcrt_obtener_local(ctx, m, 81));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 80), "Max", 3, pdc_mpdzibepd_N95_builtins_k19);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k19(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k19);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local(ctx, m, 81, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 43), pdcrt_obtener_local(ctx, m, 81));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 80), "NoImplementado", 14, pdc_mpdzibepd_N95_builtins_k20);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k20(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k20);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local(ctx, m, 81, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 44), pdcrt_obtener_local(ctx, m, 81));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 80), "Inalcanzable", 12, pdc_mpdzibepd_N95_builtins_k21);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k21(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k21);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local(ctx, m, 81, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 45), pdcrt_obtener_local(ctx, m, 81));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 80), "ArregloSinElementoEnÍndice", 27, pdc_mpdzibepd_N95_builtins_k22);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k22(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k22);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local(ctx, m, 81, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 46), pdcrt_obtener_local(ctx, m, 81));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 80), "LeerNúmero", 11, pdc_mpdzibepd_N95_builtins_k23);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k23(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k23);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local(ctx, m, 81, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 47), pdcrt_obtener_local(ctx, m, 81));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 80), "MétodoComoFunción", 19, pdc_mpdzibepd_N95_builtins_k24);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k24(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k24);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local(ctx, m, 81, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 48), pdcrt_obtener_local(ctx, m, 81));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 80), "ContienePredicado", 17, pdc_mpdzibepd_N95_builtins_k25);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k25(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k25);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local(ctx, m, 81, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 49), pdcrt_obtener_local(ctx, m, 81));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 80), "ParaCadaElementoEnReversa", 25, pdc_mpdzibepd_N95_builtins_k26);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k26(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k26);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local(ctx, m, 81, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 50), pdcrt_obtener_local(ctx, m, 81));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 80), "BuscarPredicado", 15, pdc_mpdzibepd_N95_builtins_k27);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k27(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k27);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local(ctx, m, 81, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 51, pdcrt_obtener_local(ctx, m, 81));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 80), "OperadorBinario", 15, pdc_mpdzibepd_N95_builtins_k28);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k28(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k28);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local(ctx, m, 81, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 52, pdcrt_obtener_local(ctx, m, 81));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 80), "Parcial", 7, pdc_mpdzibepd_N95_builtins_k29);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k29(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k29);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local(ctx, m, 81, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 53, pdcrt_obtener_local(ctx, m, 81));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 80), "LeerLínea", 10, pdc_mpdzibepd_N95_builtins_k30);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k30(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k30);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local(ctx, m, 81, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 54, pdcrt_obtener_local(ctx, m, 81));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 80), "LlamarConEC", 11, pdc_mpdzibepd_N95_builtins_k31);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k31(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k31);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local(ctx, m, 81, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 55, pdcrt_obtener_local(ctx, m, 81));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 80), "MétodoAbstracto", 16, pdc_mpdzibepd_N95_builtins_k32);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k32(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k32);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local(ctx, m, 81, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 56, pdcrt_obtener_local(ctx, m, 81));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 80), "Min", 3, pdc_mpdzibepd_N95_builtins_k33);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k33(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k33);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local(ctx, m, 81, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 57, pdcrt_obtener_local(ctx, m, 81));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 80), "EsNulo", 6, pdc_mpdzibepd_N95_builtins_k34);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k34(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k34);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local(ctx, m, 81, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 58, pdcrt_obtener_local(ctx, m, 81));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 80), "ÚltimoElemento", 15, pdc_mpdzibepd_N95_builtins_k35);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k35(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k35);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local(ctx, m, 81, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 59, pdcrt_obtener_local(ctx, m, 81));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 80), "PedazoDeArreglo", 15, pdc_mpdzibepd_N95_builtins_k36);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k36(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k36);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local(ctx, m, 81, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 60, pdcrt_obtener_local(ctx, m, 81));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 80), "Aplanar", 7, pdc_mpdzibepd_N95_builtins_k37);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k37(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k37);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local(ctx, m, 81, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 61, pdcrt_obtener_local(ctx, m, 81));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 80), "Mod", 3, pdc_mpdzibepd_N95_builtins_k38);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k38(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k38);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local(ctx, m, 81, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 62, pdcrt_obtener_local(ctx, m, 81));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 80), "Resto", 5, pdc_mpdzibepd_N95_builtins_k39);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k39(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k39);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local(ctx, m, 81, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 63, pdcrt_obtener_local(ctx, m, 81));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 80), "Aplicar\'i", 9, pdc_mpdzibepd_N95_builtins_k40);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k40(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k40);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local(ctx, m, 81, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 64, pdcrt_obtener_local(ctx, m, 81));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 80), "ArregloConFinal", 15, pdc_mpdzibepd_N95_builtins_k41);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k41(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k41);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local(ctx, m, 81, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 65, pdcrt_obtener_local(ctx, m, 81));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 80), "EsNúmero", 9, pdc_mpdzibepd_N95_builtins_k42);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k42(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k42);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local(ctx, m, 81, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 66, pdcrt_obtener_local(ctx, m, 81));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 80), "ConvertirANúmero", 17, pdc_mpdzibepd_N95_builtins_k43);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k43(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k43);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local(ctx, m, 81, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 67, pdcrt_obtener_local(ctx, m, 81));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 80), "Elevar", 6, pdc_mpdzibepd_N95_builtins_k44);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k44(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k44);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local(ctx, m, 81, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 68, pdcrt_obtener_local(ctx, m, 81));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 80), "Algún", 6, pdc_mpdzibepd_N95_builtins_k45);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k45(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k45);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local(ctx, m, 81, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 69, pdcrt_obtener_local(ctx, m, 81));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 80), "Mapear", 6, pdc_mpdzibepd_N95_builtins_k46);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k46(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k46);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local(ctx, m, 81, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 70, pdcrt_obtener_local(ctx, m, 81));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 80), "Identidad", 9, pdc_mpdzibepd_N95_builtins_k47);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k47(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k47);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local(ctx, m, 81, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 71, pdcrt_obtener_local(ctx, m, 81));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 80), "ParaCadaNúmeroConPaso", 22, pdc_mpdzibepd_N95_builtins_k48);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k48(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k48);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local(ctx, m, 81, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 72, pdcrt_obtener_local(ctx, m, 81));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 80), "EsInstancia", 11, pdc_mpdzibepd_N95_builtins_k49);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k49(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k49);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local(ctx, m, 81, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 73, pdcrt_obtener_local(ctx, m, 81));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 80), "EsSubclase", 10, pdc_mpdzibepd_N95_builtins_k50);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k50(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k50);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local(ctx, m, 81, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 74, pdcrt_obtener_local(ctx, m, 81));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 80), "ParaCadaElementoConÍndice", 26, pdc_mpdzibepd_N95_builtins_k51);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k51(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k51);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local(ctx, m, 81, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 75, pdcrt_obtener_local(ctx, m, 81));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 80), "ParaCadaNúmero", 15, pdc_mpdzibepd_N95_builtins_k52);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k52(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k52);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local(ctx, m, 81, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 76, pdcrt_obtener_local(ctx, m, 81));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 80, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 15:0 >> 15:8 */
return pdcrt_importar(ctx, m, "pdzibepd_N95_datos_N95_diccionario", 34, pdc_mpdzibepd_N95_builtins_k53);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k53(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k53);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 15:0 >> 15:8 */
pdcrt_fijar_local(ctx, m, 80, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 15:33 >> 15:44 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 80), "Diccionario", 11, pdc_mpdzibepd_N95_builtins_k54);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k54(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k54);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 15:33 >> 15:44 */
pdcrt_fijar_local(ctx, m, 81, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 15:33 >> 15:44 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 77), pdcrt_obtener_local(ctx, m, 81));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 15:33 >> 15:44 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 15:0 >> 15:8 */
pdcrt_fijar_local_nb(ctx, m, 80, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 16:0 >> 16:8 */
return pdcrt_importar(ctx, m, "pdzibepd_N95_datos_N95_resultado", 32, pdc_mpdzibepd_N95_builtins_k55);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k55(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k55);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 16:0 >> 16:8 */
pdcrt_fijar_local(ctx, m, 80, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 16:31 >> 16:40 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 80), "Resultado", 9, pdc_mpdzibepd_N95_builtins_k56);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k56(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k56);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 16:31 >> 16:40 */
pdcrt_fijar_local(ctx, m, 81, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 16:31 >> 16:40 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 78), pdcrt_obtener_local(ctx, m, 81));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 16:31 >> 16:40 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 16:0 >> 16:8 */
pdcrt_fijar_local_nb(ctx, m, 80, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 17:0 >> 17:8 */
return pdcrt_importar(ctx, m, "pdzibepd_N95_datos_N95_pila", 27, pdc_mpdzibepd_N95_builtins_k57);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k57(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k57);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 17:0 >> 17:8 */
pdcrt_fijar_local(ctx, m, 80, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 17:26 >> 17:30 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 80), "Pila", 4, pdc_mpdzibepd_N95_builtins_k58);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k58(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k58);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 17:26 >> 17:30 */
pdcrt_fijar_local(ctx, m, 81, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 17:26 >> 17:30 */
pdcrt_fijar_caja(ctx, pdcrt_obtener_local(ctx, m, 79), pdcrt_obtener_local(ctx, m, 81));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 17:26 >> 17:30 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 17:0 >> 17:8 */
pdcrt_fijar_local_nb(ctx, m, 80, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cons = pdcrt_crear_espacio_de_nombres_cons(ctx, PDCRT_GC());
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 80, cons);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_obtener_local(ctx, m, 76));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 80), pdcrt_obtener_local(ctx, m, 81), "ParaCadaNúmero", 15, true, pdc_mpdzibepd_N95_builtins_k59);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k59(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k59);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_obtener_local(ctx, m, 25));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 80), pdcrt_obtener_local(ctx, m, 81), "ParaCadaElemento", 16, true, pdc_mpdzibepd_N95_builtins_k60);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k60(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k60);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_obtener_local(ctx, m, 75));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 80), pdcrt_obtener_local(ctx, m, 81), "ParaCadaElementoConÍndice", 26, true, pdc_mpdzibepd_N95_builtins_k61);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k61(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k61);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_obtener_local(ctx, m, 26));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 80), pdcrt_obtener_local(ctx, m, 81), "Todos", 5, true, pdc_mpdzibepd_N95_builtins_k62);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k62(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k62);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_obtener_local(ctx, m, 74));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 80), pdcrt_obtener_local(ctx, m, 81), "EsSubclase", 10, true, pdc_mpdzibepd_N95_builtins_k63);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k63(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k63);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_obtener_local(ctx, m, 27));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 80), pdcrt_obtener_local(ctx, m, 81), "Contiene", 8, true, pdc_mpdzibepd_N95_builtins_k64);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k64(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k64);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_obtener_local(ctx, m, 73));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 80), pdcrt_obtener_local(ctx, m, 81), "EsInstancia", 11, true, pdc_mpdzibepd_N95_builtins_k65);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k65(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k65);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_obtener_local(ctx, m, 28));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 80), pdcrt_obtener_local(ctx, m, 81), "EsImpar", 7, true, pdc_mpdzibepd_N95_builtins_k66);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k66(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k66);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_obtener_local(ctx, m, 72));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 80), pdcrt_obtener_local(ctx, m, 81), "ParaCadaNúmeroConPaso", 22, true, pdc_mpdzibepd_N95_builtins_k67);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k67(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k67);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local(ctx, m, 81, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 29)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 80), pdcrt_obtener_local(ctx, m, 81), "Escribir", 8, true, pdc_mpdzibepd_N95_builtins_k68);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k68(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k68);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_obtener_local(ctx, m, 71));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 80), pdcrt_obtener_local(ctx, m, 81), "Identidad", 9, true, pdc_mpdzibepd_N95_builtins_k69);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k69(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k69);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local(ctx, m, 81, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 30)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 80), pdcrt_obtener_local(ctx, m, 81), "Reducir", 7, true, pdc_mpdzibepd_N95_builtins_k70);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k70(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k70);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_obtener_local(ctx, m, 70));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 80), pdcrt_obtener_local(ctx, m, 81), "Mapear", 6, true, pdc_mpdzibepd_N95_builtins_k71);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k71(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k71);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local(ctx, m, 81, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 31)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 80), pdcrt_obtener_local(ctx, m, 81), "Filtrar", 7, true, pdc_mpdzibepd_N95_builtins_k72);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k72(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k72);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_obtener_local(ctx, m, 69));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 80), pdcrt_obtener_local(ctx, m, 81), "Algún", 6, true, pdc_mpdzibepd_N95_builtins_k73);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k73(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k73);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local(ctx, m, 81, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 32)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 80), pdcrt_obtener_local(ctx, m, 81), "DígitoAEntero", 14, true, pdc_mpdzibepd_N95_builtins_k74);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k74(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k74);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_obtener_local(ctx, m, 68));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 80), pdcrt_obtener_local(ctx, m, 81), "Elevar", 6, true, pdc_mpdzibepd_N95_builtins_k75);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k75(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k75);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local(ctx, m, 81, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 33)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 80), pdcrt_obtener_local(ctx, m, 81), "ConvertirAEntero", 16, true, pdc_mpdzibepd_N95_builtins_k76);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k76(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k76);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_obtener_local(ctx, m, 67));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 80), pdcrt_obtener_local(ctx, m, 81), "ConvertirANúmero", 17, true, pdc_mpdzibepd_N95_builtins_k77);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k77(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k77);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local(ctx, m, 81, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 34)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 80), pdcrt_obtener_local(ctx, m, 81), "EsNúmeroEntero", 15, true, pdc_mpdzibepd_N95_builtins_k78);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k78(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k78);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_obtener_local(ctx, m, 66));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 80), pdcrt_obtener_local(ctx, m, 81), "EsNúmero", 9, true, pdc_mpdzibepd_N95_builtins_k79);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k79(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k79);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local(ctx, m, 81, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 35)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 80), pdcrt_obtener_local(ctx, m, 81), "Concatenar", 10, true, pdc_mpdzibepd_N95_builtins_k80);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k80(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k80);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_obtener_local(ctx, m, 65));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 80), pdcrt_obtener_local(ctx, m, 81), "ArregloConFinal", 15, true, pdc_mpdzibepd_N95_builtins_k81);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k81(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k81);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local(ctx, m, 81, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 36)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 80), pdcrt_obtener_local(ctx, m, 81), "Aplicar\'", 8, true, pdc_mpdzibepd_N95_builtins_k82);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k82(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k82);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_obtener_local(ctx, m, 64));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 80), pdcrt_obtener_local(ctx, m, 81), "Aplicar\'i", 9, true, pdc_mpdzibepd_N95_builtins_k83);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k83(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k83);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local(ctx, m, 81, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 37)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 80), pdcrt_obtener_local(ctx, m, 81), "EnviarMensaje", 13, true, pdc_mpdzibepd_N95_builtins_k84);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k84(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k84);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_obtener_local(ctx, m, 63));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 80), pdcrt_obtener_local(ctx, m, 81), "Resto", 5, true, pdc_mpdzibepd_N95_builtins_k85);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k85(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k85);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local(ctx, m, 81, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 38)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 80), pdcrt_obtener_local(ctx, m, 81), "Abs", 3, true, pdc_mpdzibepd_N95_builtins_k86);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k86(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k86);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_obtener_local(ctx, m, 62));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 80), pdcrt_obtener_local(ctx, m, 81), "Mod", 3, true, pdc_mpdzibepd_N95_builtins_k87);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k87(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k87);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local(ctx, m, 81, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 39)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 80), pdcrt_obtener_local(ctx, m, 81), "EsPar", 5, true, pdc_mpdzibepd_N95_builtins_k88);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k88(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k88);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_obtener_local(ctx, m, 61));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 80), pdcrt_obtener_local(ctx, m, 81), "Aplanar", 7, true, pdc_mpdzibepd_N95_builtins_k89);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k89(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k89);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local(ctx, m, 81, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 40)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 80), pdcrt_obtener_local(ctx, m, 81), "AplanarTodo", 11, true, pdc_mpdzibepd_N95_builtins_k90);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k90(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k90);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_obtener_local(ctx, m, 60));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 80), pdcrt_obtener_local(ctx, m, 81), "PedazoDeArreglo", 15, true, pdc_mpdzibepd_N95_builtins_k91);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k91(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k91);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local(ctx, m, 81, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 41)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 80), pdcrt_obtener_local(ctx, m, 81), "PrimerElemento", 14, true, pdc_mpdzibepd_N95_builtins_k92);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k92(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k92);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_obtener_local(ctx, m, 59));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 80), pdcrt_obtener_local(ctx, m, 81), "ÚltimoElemento", 15, true, pdc_mpdzibepd_N95_builtins_k93);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k93(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k93);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local(ctx, m, 81, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 42)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 80), pdcrt_obtener_local(ctx, m, 81), "ÚnicoElemento", 14, true, pdc_mpdzibepd_N95_builtins_k94);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k94(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k94);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_obtener_local(ctx, m, 58));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 80), pdcrt_obtener_local(ctx, m, 81), "EsNulo", 6, true, pdc_mpdzibepd_N95_builtins_k95);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k95(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k95);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local(ctx, m, 81, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 43)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 80), pdcrt_obtener_local(ctx, m, 81), "Max", 3, true, pdc_mpdzibepd_N95_builtins_k96);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k96(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k96);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_obtener_local(ctx, m, 57));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 80), pdcrt_obtener_local(ctx, m, 81), "Min", 3, true, pdc_mpdzibepd_N95_builtins_k97);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k97(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k97);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local(ctx, m, 81, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 44)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 80), pdcrt_obtener_local(ctx, m, 81), "NoImplementado", 14, true, pdc_mpdzibepd_N95_builtins_k98);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k98(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k98);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_obtener_local(ctx, m, 56));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 80), pdcrt_obtener_local(ctx, m, 81), "MétodoAbstracto", 16, true, pdc_mpdzibepd_N95_builtins_k99);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k99(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k99);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local(ctx, m, 81, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 45)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 80), pdcrt_obtener_local(ctx, m, 81), "Inalcanzable", 12, true, pdc_mpdzibepd_N95_builtins_k100);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k100(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k100);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_obtener_local(ctx, m, 55));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 80), pdcrt_obtener_local(ctx, m, 81), "LlamarConEC", 11, true, pdc_mpdzibepd_N95_builtins_k101);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k101(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k101);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local(ctx, m, 81, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 46)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 80), pdcrt_obtener_local(ctx, m, 81), "ArregloSinElementoEnÍndice", 27, true, pdc_mpdzibepd_N95_builtins_k102);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k102(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k102);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_obtener_local(ctx, m, 54));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 80), pdcrt_obtener_local(ctx, m, 81), "LeerLínea", 10, true, pdc_mpdzibepd_N95_builtins_k103);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k103(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k103);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local(ctx, m, 81, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 47)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 80), pdcrt_obtener_local(ctx, m, 81), "LeerNúmero", 11, true, pdc_mpdzibepd_N95_builtins_k104);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k104(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k104);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_obtener_local(ctx, m, 53));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 80), pdcrt_obtener_local(ctx, m, 81), "Parcial", 7, true, pdc_mpdzibepd_N95_builtins_k105);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k105(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k105);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local(ctx, m, 81, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 48)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 80), pdcrt_obtener_local(ctx, m, 81), "MétodoComoFunción", 19, true, pdc_mpdzibepd_N95_builtins_k106);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k106(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k106);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_obtener_local(ctx, m, 52));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 80), pdcrt_obtener_local(ctx, m, 81), "OperadorBinario", 15, true, pdc_mpdzibepd_N95_builtins_k107);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k107(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k107);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local(ctx, m, 81, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 49)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 80), pdcrt_obtener_local(ctx, m, 81), "ContienePredicado", 17, true, pdc_mpdzibepd_N95_builtins_k108);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k108(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k108);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_obtener_local(ctx, m, 51));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 80), pdcrt_obtener_local(ctx, m, 81), "BuscarPredicado", 15, true, pdc_mpdzibepd_N95_builtins_k109);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k109(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k109);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 13:8 */
pdcrt_fijar_local(ctx, m, 81, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 50)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 80), pdcrt_obtener_local(ctx, m, 81), "ParaCadaElementoEnReversa", 25, true, pdc_mpdzibepd_N95_builtins_k110);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k110(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k110);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 15:33 >> 15:44 */
pdcrt_fijar_local(ctx, m, 81, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 77)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 80), pdcrt_obtener_local(ctx, m, 81), "Diccionario", 11, false, pdc_mpdzibepd_N95_builtins_k111);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k111(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k111);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 16:31 >> 16:40 */
pdcrt_fijar_local(ctx, m, 81, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 78)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 80), pdcrt_obtener_local(ctx, m, 81), "Resultado", 9, false, pdc_mpdzibepd_N95_builtins_k112);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k112(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k112);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 17:26 >> 17:30 */
pdcrt_fijar_local(ctx, m, 81, pdcrt_obtener_caja(ctx, pdcrt_obtener_local(ctx, m, 79)));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 80), pdcrt_obtener_local(ctx, m, 81), "Pila", 4, false, pdc_mpdzibepd_N95_builtins_k113);
}
static pdcrt_tk pdc_mpdzibepd_N95_builtins_k113(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzibepd_N95_builtins_k113);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
pdcrt_fijar_local_nb(ctx, m, 81, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
return pdcrt_exportar(ctx, m, pdcrt_obtener_local(ctx, m, 80), "pdzibepd_N95_builtins", 21);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/bepd/builtins.pd" => 13:0 >> 17:8 */
pdcrt_fijar_local_nb(ctx, m, 80, pdcrt_objeto_nulo());
}
PDCRT_DECLARAR_ENTRYPOINT(pdzibepd_N95_builtins, pdc_mpdzibepd_N95_builtins_f0)
#ifdef PDCRT_MAIN
#define PDCRT_DEPS(X) \
    X(pdzibepd_N95_builtins, "pdzibepd_N95_builtins", 21) \
    X(pdzibepd_N95_datos_N95_diccionario_N95_hashmap, "pdzibepd_N95_datos_N95_diccionario_N95_hashmap", 46) \
    X(pdzibepd_N95_builtinsImpl, "pdzibepd_N95_builtinsImpl", 25) \
    X(pdzibepd_N95_datos_N95_pila, "pdzibepd_N95_datos_N95_pila", 27) \
    X(pdzibepd_N95_datos_N95_diccionario, "pdzibepd_N95_datos_N95_diccionario", 34) \
    X(pdzibepd_N95_datos_N95_diccionario_N95_interfaz, "pdzibepd_N95_datos_N95_diccionario_N95_interfaz", 47) \
    X(pdzibepd_N95_datos_N95_diccionario_N95_alist, "pdzibepd_N95_datos_N95_diccionario_N95_alist", 44) \
    X(pdzibepd_N95_datos_N95_resultado, "pdzibepd_N95_datos_N95_resultado", 32)
PDCRT_DECLARAR_DEPS(PDCRT_DEPS)
PDCRT_DECLARAR_MAIN(pdzibepd_N95_builtins)
#endif
