#define PDCRT_INTERNO
#include "pdcrt/pdcrt.h"
#include "pdcrt/pdcrt_ops.h"
static pdcrt_tk pdc_mpdzipdc_N95_inicio_f0(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM);
static pdcrt_tk pdc_mpdzipdc_N95_inicio_k0(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_inicio_k1(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_inicio_k2(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_inicio_k3(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_inicio_k4(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res);
static pdcrt_tk pdc_mpdzipdc_N95_inicio_f0(pdcrt_ctx* ctx, int args, pdcrt_k k, PDCRT_F_IMM)
{
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/inicio.pd" => 1:0 >> 3:19 */
static const char *const func_srcloc = "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/inicio.pd|1:0|3:19";
PDCRT_ALOJAR_MARCO(ctx, 5, args, k, func_srcloc);
struct pdc_params_data_mpdzipdc_N95_inicio_p0 { const pdcrt_params_base base; const pdcrt_param_data params[1]; };
static const struct pdc_params_data_mpdzipdc_N95_inicio_p0 pdc_params = { .base = { .num_params = 0, .tiene_variadic = false, .idc_variadic = 0, }, .params = {} };
pdcrt_params(ctx, m, (pdcrt_params_data*) &pdc_params, PDCRT_A_IMM);
PDCRT_DEFINE_RAICES(2);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/inicio.pd" => 1:0 >> 3:19 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_arreglo *constantes = pdcrt_crear_arreglo_vacio(ctx, PDCRT_GC(), 2LLU);
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
PDCRT_GUARDAR_RAIZ_CABECERA(1, constantes);
pdcrt_obj txt = pdcrt_objeto_texto(pdcrt_crear_texto(ctx, PDCRT_GC(), "__Argv", 6));
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
PDCRT_FIJAR_CONSTANTES(ctx, m, constantes);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/inicio.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 0, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/inicio.pd" => 1:0 >> 1:8 */
return pdcrt_importar(ctx, m, "pdzipdc_N95_compilador", 22, pdc_mpdzipdc_N95_inicio_k0);
}
static pdcrt_tk pdc_mpdzipdc_N95_inicio_k0(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_inicio_k0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/inicio.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local(ctx, m, 1, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/inicio.pd" => 1:25 >> 1:43 */
return pdcrt_extraerv(ctx, m, pdcrt_obtener_local(ctx, m, 1), "EjecutarCompilador", 18, pdc_mpdzipdc_N95_inicio_k1);
}
static pdcrt_tk pdc_mpdzipdc_N95_inicio_k1(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_inicio_k1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/inicio.pd" => 1:25 >> 1:43 */
pdcrt_fijar_local(ctx, m, 2, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/inicio.pd" => 1:25 >> 1:43 */
pdcrt_fijar_local_nb(ctx, m, 0, pdcrt_obtener_local(ctx, m, 2));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/inicio.pd" => 1:25 >> 1:43 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/inicio.pd" => 1:0 >> 1:8 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/inicio.pd" => 3:0 >> 3:18 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_obtener_local(ctx, m, 0));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/inicio.pd" => 3:20 >> 3:26 */
pdcrt_fijar_local(ctx, m, 4, ctx->espacio_de_nombres_runtime);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/inicio.pd" => 3:20 >> 3:26 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 0);
return pdcrt_llamar0(ctx, m, pdc_mpdzipdc_N95_inicio_k2, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 4)), pdcrt_xmm_desde_obj(llamar_msj));
}
static pdcrt_tk pdc_mpdzipdc_N95_inicio_k2(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_inicio_k2);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/inicio.pd" => 3:20 >> 3:26 */
pdcrt_fijar_local(ctx, m, 3, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/inicio.pd" => 3:20 >> 3:26 */
pdcrt_fijar_local_nb(ctx, m, 4, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/inicio.pd" => 3:0 >> 3:19 */
pdcrt_obj llamar_msj = PDCRT_OBTENER_CONSTANTE(ctx, m, 1);
return pdcrt_llamar1(ctx, m, pdc_mpdzipdc_N95_inicio_k3, pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 2)), pdcrt_xmm_desde_obj(llamar_msj), pdcrt_xmm_desde_obj(pdcrt_obtener_local(ctx, m, 3)));
}
static pdcrt_tk pdc_mpdzipdc_N95_inicio_k3(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_inicio_k3);
PDCRT_DEFINE_RAICES(1);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/inicio.pd" => 3:0 >> 3:19 */
pdcrt_fijar_local(ctx, m, 1, pdcrt_obj_desde_xmm(res));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/inicio.pd" => 3:0 >> 3:19 */
pdcrt_fijar_local_nb(ctx, m, 3, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/inicio.pd" => 3:0 >> 3:19 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/inicio.pd" => 1:0 >> 3:19 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/inicio.pd" => 1:0 >> 3:19 */
do {
PDCRT_REINICIAR_RAICES();
PDCRT_GUARDAR_RAIZ_CABECERA(0, m);
pdcrt_obj cons = pdcrt_crear_espacio_de_nombres_cons(ctx, PDCRT_GC());
PDCRT_CARGAR_RAIZ_CABECERA(0, m);
pdcrt_fijar_local(ctx, m, 1, cons);
} while(0);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/inicio.pd" => 1:25 >> 1:43 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_obtener_local(ctx, m, 0));
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/inicio.pd" => 1:0 >> 3:19 */
return pdcrt_agregar_nombre(ctx, m, pdcrt_obtener_local(ctx, m, 1), pdcrt_obtener_local(ctx, m, 2), "EjecutarCompilador", 18, true, pdc_mpdzipdc_N95_inicio_k4);
}
static pdcrt_tk pdc_mpdzipdc_N95_inicio_k4(pdcrt_ctx* ctx, pdcrt_marco* m, __m128i res)
{
PDCRT_VERIFICA_PILA(ctx, m, res, pdc_mpdzipdc_N95_inicio_k4);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/inicio.pd" => 1:0 >> 3:19 */
pdcrt_fijar_local_nb(ctx, m, 2, pdcrt_objeto_nulo());
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/inicio.pd" => 1:0 >> 3:19 */
return pdcrt_exportar(ctx, m, pdcrt_obtener_local(ctx, m, 1), "pdzipdc_N95_inicio", 18);
/* ##SRCLOC## "/home/alinarezrangel/Mega/MEGAsync/PRogramacion-nuevo/pseudod/new-new/pdc/inicio.pd" => 1:0 >> 3:19 */
pdcrt_fijar_local_nb(ctx, m, 1, pdcrt_objeto_nulo());
}
PDCRT_DECLARAR_ENTRYPOINT(pdzipdc_N95_inicio, pdc_mpdzipdc_N95_inicio_f0)
#ifdef PDCRT_MAIN
#define PDCRT_DEPS(X) \
    X(pdzipdc_N95_inicio, "pdzipdc_N95_inicio", 18) \
    X(pdzibepd_N95_x_N95_adhoc, "pdzibepd_N95_x_N95_adhoc", 24) \
    X(pdzipdc_N95_cst, "pdzipdc_N95_cst", 15) \
    X(pdzibepd_N95_builtins, "pdzibepd_N95_builtins", 21) \
    X(pdzibepd_N95_datos_N95_conjunto, "pdzibepd_N95_datos_N95_conjunto", 31) \
    X(pdzibepd_N95_datos_N95_caja, "pdzibepd_N95_datos_N95_caja", 27) \
    X(pdzibepd_N95_builtinsImpl, "pdzibepd_N95_builtinsImpl", 25) \
    X(pdzipdc_N95_compilador, "pdzipdc_N95_compilador", 22) \
    X(pdzibepd_N95_datos_N95_diccionario, "pdzibepd_N95_datos_N95_diccionario", 34) \
    X(pdzibepd_N95_datos_N95_pila, "pdzibepd_N95_datos_N95_pila", 27) \
    X(pdzibepd_N95_datos_N95_diccionario_N95_hashmap, "pdzibepd_N95_datos_N95_diccionario_N95_hashmap", 46) \
    X(pdzibepd_N95_datos_N95_diccionario_N95_interfaz, "pdzibepd_N95_datos_N95_diccionario_N95_interfaz", 47) \
    X(pdzibepd_N95_datos_N95_diccionario_N95_alist, "pdzibepd_N95_datos_N95_diccionario_N95_alist", 44) \
    X(pdzibepd_N95_datos_N95_resultado, "pdzibepd_N95_datos_N95_resultado", 32) \
    X(pdzibepd_N95_x_N95_puerto, "pdzibepd_N95_x_N95_puerto", 25) \
    X(pdzibepd_N95_utilidades_N95_texto, "pdzibepd_N95_utilidades_N95_texto", 33) \
    X(pdzibepd_N95_x_N95_puerto_N95_deArchivo, "pdzibepd_N95_x_N95_puerto_N95_deArchivo", 39) \
    X(pdzibepd_N95_x_N95_sistemaDeArchivos_N95_archivo, "pdzibepd_N95_x_N95_sistemaDeArchivos_N95_archivo", 48) \
    X(pdzibepd_N95_utilidades_N95_arreglo, "pdzibepd_N95_utilidades_N95_arreglo", 35) \
    X(pdzibepd_N95_utilidades_N95_texto_N95_ascii, "pdzibepd_N95_utilidades_N95_texto_N95_ascii", 43) \
    X(pdzibepd_N95_x_N95_enum, "pdzibepd_N95_x_N95_enum", 23) \
    X(pdzibepd_N95_x_N95_datos, "pdzibepd_N95_x_N95_datos", 24) \
    X(pdzibepd_N95_x_N95_datos2, "pdzibepd_N95_x_N95_datos2", 25) \
    X(pdzibepd_N95_x_N95_algebraico, "pdzibepd_N95_x_N95_algebraico", 29) \
    X(pdzibepd_N95_x_N95_utf8, "pdzibepd_N95_x_N95_utf8", 23) \
    X(pdzibepd_N95_x_N95_cli, "pdzibepd_N95_x_N95_cli", 22) \
    X(pdzibepd_N95_x_N95_entorno, "pdzibepd_N95_x_N95_entorno", 26) \
    X(pdzipdc_N95_ast, "pdzipdc_N95_ast", 15) \
    X(pdzipdc_N95_tabla, "pdzipdc_N95_tabla", 17) \
    X(pdzibepd_N95_algoritmos, "pdzibepd_N95_algoritmos", 23) \
    X(pdzipdc_N95_combinadores, "pdzipdc_N95_combinadores", 24) \
    X(pdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n, "pdzibepd_N95_x_N95_puerto_N95_conPosici_N95__N95_n", 50) \
    X(pdzipdc_N95_tokens, "pdzipdc_N95_tokens", 18) \
    X(pdzipdc_N95_parser, "pdzipdc_N95_parser", 18) \
    X(pdzipdc_N95_tokenizador, "pdzipdc_N95_tokenizador", 23) \
    X(pdzipdc_N95_validaci_N95__N95_n, "pdzipdc_N95_validaci_N95__N95_n", 31) \
    X(pdzipdc_N95_catamorfismos, "pdzipdc_N95_catamorfismos", 25) \
    X(pdzipdc_N95_nombres, "pdzipdc_N95_nombres", 19) \
    X(pdzipdc_N95_dependencias, "pdzipdc_N95_dependencias", 24) \
    X(pdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas, "pdzibepd_N95_x_N95_sistemaDeArchivos_N95_rutas", 46) \
    X(pdzipdc_N95_m_N95__N95_dulos, "pdzipdc_N95_m_N95__N95_dulos", 28) \
    X(pdzibepd_N95_x_N95_json, "pdzibepd_N95_x_N95_json", 23) \
    X(pdzibepd_N95_x_N95_control, "pdzibepd_N95_x_N95_control", 26) \
    X(pdzipdc_N95_info, "pdzipdc_N95_info", 16) \
    X(pdzipdc_N95_abstraer, "pdzipdc_N95_abstraer", 20) \
    X(pdzipdc_N95_capturas, "pdzipdc_N95_capturas", 20) \
    X(pdzipdc_N95_backend_N95_c_N95_ir, "pdzipdc_N95_backend_N95_c_N95_ir", 32) \
    X(pdzipdc_N95_backend_N95_c_N95_lowerer, "pdzipdc_N95_backend_N95_c_N95_lowerer", 37) \
    X(pdzibepd_N95_utilidades_N95_iteraci_N95__N95_n, "pdzibepd_N95_utilidades_N95_iteraci_N95__N95_n", 46) \
    X(pdzipdc_N95_backend_N95_c, "pdzipdc_N95_backend_N95_c", 25) \
    X(pdzipdc_N95_subproceso, "pdzipdc_N95_subproceso", 22)
PDCRT_DECLARAR_DEPS(PDCRT_DEPS)
PDCRT_DECLARAR_MAIN(pdzipdc_N95_inicio)
#endif
