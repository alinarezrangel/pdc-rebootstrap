cmake_minimum_required(VERSION 3.30)
project(pdc-t1
  VERSION 1.0.0
  DESCRIPTION "PDC t1"
  LANGUAGES C
)

set(BOOT_PREFIX "" CACHE STRING "Prefix for libraries and tools")

set(CMAKE_C_STANDARD 11)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -march=x86-64-v4 -Werror=vla -fwrapv")
set(PSEUDOD_CFLAGS -O1 -fno-var-tracking-assignments)

include(CheckCSourceCompiles)
include(GNUInstallDirs)


# ======= PDCRT


add_library(pdcrt_pd OBJECT
    runtime/c/runtime.c
)

target_compile_options(pdcrt_pd PRIVATE ${PSEUDOD_CFLAGS})

add_library(pdcrt STATIC
    runtime/c/pdcrt/pdcrt.c
    runtime/c/pdcrt/pdcrt.h
    runtime/c/pdcrt/pdcrt_base.c
    runtime/c/pdcrt/pdcrt_base.h
    runtime/c/pdcrt/pdcrt_dtrace.c
    runtime/c/pdcrt/pdcrt_dtrace.h
    runtime/c/pdcrt/pdcrt_gc.c
    runtime/c/pdcrt/pdcrt_hash.c
    runtime/c/pdcrt/pdcrt_hash.h
    runtime/c/pdcrt/pdcrt_impls.c
    runtime/c/pdcrt/pdcrt_impls/archivo.c
    runtime/c/pdcrt/pdcrt_impls/archivo.h
    runtime/c/pdcrt/pdcrt_ops.c
    runtime/c/pdcrt/pdcrt_ops.h
    runtime/c/pdcrt/pdcrt_tabla.c
    runtime/c/pdcrt/pdcrt_vio.c
    runtime/c/pdcrt/pdcrt_vio.h
    runtime/c/pdcrt/pdcrt_vios/vio_linux.c
    runtime/c/pdcrt/pdcrt_vios/vio_linux.h
    runtime/c/pdcrt/pdffi.c
    runtime/c/pdcrt/pdffi.h
    $<TARGET_OBJECTS:pdcrt_pd>
)

set_target_properties(pdcrt PROPERTIES OUTPUT_NAME "${BOOT_PREFIX}pdcrt")

target_include_directories(pdcrt PRIVATE libs/systemtap)
target_compile_options(pdcrt PRIVATE $<$<CONFIG:Debug>:-O1>)
target_link_libraries(pdcrt INTERFACE m)

message(CHECK_START "Feature PTR_32_BITS")
file(READ "${CMAKE_CURRENT_SOURCE_DIR}/runtime/c/probes/ptr32.c" PROBE_SOURCE)
check_c_source_compiles("${PROBE_SOURCE}" PDCRT_PLATAFORMA_PTR_32_BITS)
if(PDCRT_PLATAFORMA_PTR_32_BITS)
  message(CHECK_PASS "yes")
else()
  message(CHECK_FAIL "no")
endif()

message(CHECK_START "Feature PTR_64_BITS")
file(READ "${CMAKE_CURRENT_SOURCE_DIR}/runtime/c/probes/ptr64.c" PROBE_SOURCE)
check_c_source_compiles("${PROBE_SOURCE}" PDCRT_PLATAFORMA_PTR_64_BITS)
if(PDCRT_PLATAFORMA_PTR_64_BITS)
  message(CHECK_PASS "yes")
else()
  message(CHECK_FAIL "no")
endif()

if(PDCRT_PLATAFORMA_PTR_64_BITS)
  set(PDCRT_PTR_BITS 64)
else()
  if(NOT PDCRT_PLATAFORMA_PTR_32_BITS)
    message(WARNING "No pude detectar el tamaño de los punteros en tu plataforma. Asumiendo 32 bits")
  endif()

  set(PDCRT_PTR_BITS 32)
endif()

set(PDCRT_DTRACE ON)

set(PDCRT_PUBLIC_INCLUDES "${CMAKE_CURRENT_BINARY_DIR}/public-includes")

file(MAKE_DIRECTORY "${PDCRT_PUBLIC_INCLUDES}")

configure_file(
  "${CMAKE_CURRENT_SOURCE_DIR}/runtime/c/probes/pdcrt-plataforma.h.in"
  "${PDCRT_PUBLIC_INCLUDES}/pdcrt-plataforma.h"
  @ONLY
)

target_include_directories(pdcrt PUBLIC "${PDCRT_PUBLIC_INCLUDES}" "${CMAKE_CURRENT_SOURCE_DIR}/runtime/c/")
target_include_directories(pdcrt_pd PUBLIC "${PDCRT_PUBLIC_INCLUDES}" "${CMAKE_CURRENT_SOURCE_DIR}/runtime/c/")


# ======= PDC


add_library(pdc_int INTERFACE)

add_library(pdc_obj OBJECT
    snapshot/pdc/inicio.c
)

add_executable(pdc
    snapshot/bepd/algoritmos.c
    snapshot/bepd/builtins.c
    snapshot/bepd/builtinsImpl.c
    snapshot/bepd/datos/caja.c
    snapshot/bepd/datos/conjunto.c
    snapshot/bepd/datos/diccionario.c
    snapshot/bepd/datos/diccionario/alist.c
    snapshot/bepd/datos/diccionario/hashmap.c
    snapshot/bepd/datos/diccionario/interfaz.c
    snapshot/bepd/datos/pila.c
    snapshot/bepd/datos/resultado.c
    snapshot/bepd/intrinsics.c
    snapshot/bepd/utilidades/arreglo.c
    snapshot/bepd/utilidades/iteración.c
    snapshot/bepd/utilidades/texto.c
    snapshot/bepd/utilidades/texto/ascii.c
    snapshot/bepd/x/adhoc.c
    snapshot/bepd/x/algebraico.c
    snapshot/bepd/x/cli.c
    snapshot/bepd/x/control.c
    snapshot/bepd/x/datos.c
    snapshot/bepd/x/datos2.c
    snapshot/bepd/x/entorno.c
    snapshot/bepd/x/enum.c
    snapshot/bepd/x/json.c
    snapshot/bepd/x/lazy.c
    snapshot/bepd/x/logs.c
    snapshot/bepd/x/puerto.c
    snapshot/bepd/x/puerto/conPosición.c
    snapshot/bepd/x/puerto/deArchivo.c
    snapshot/bepd/x/sexpr.c
    snapshot/bepd/x/sistemaDeArchivos/archivo.c
    snapshot/bepd/x/sistemaDeArchivos/rutas.c
    snapshot/bepd/x/utf8.c
    snapshot/pdc/abstraer.c
    snapshot/pdc/ast.c
    snapshot/pdc/backend/c.c
    snapshot/pdc/backend/c/ir.c
    snapshot/pdc/backend/c/lowerer.c
    snapshot/pdc/capturas.c
    snapshot/pdc/catamorfismos.c
    snapshot/pdc/combinadores.c
    snapshot/pdc/compilador.c
    snapshot/pdc/cst.c
    snapshot/pdc/dependencias.c
    snapshot/pdc/info.c
    snapshot/pdc/módulos.c
    snapshot/pdc/nombres.c
    snapshot/pdc/parser.c
    snapshot/pdc/subproceso.c
    snapshot/pdc/tabla.c
    snapshot/pdc/tokenizador.c
    snapshot/pdc/tokens.c
    snapshot/pdc/validación.c
    $<TARGET_OBJECTS:pdc_obj>
)

target_compile_options(pdc_int INTERFACE ${PSEUDOD_CFLAGS})

target_compile_definitions(pdc_obj PRIVATE PDCRT_MAIN)
target_link_libraries(pdc_obj PUBLIC pdcrt pdc_int)

set_target_properties(pdc PROPERTIES OUTPUT_NAME "${BOOT_PREFIX}pdc")
target_link_libraries(pdc PUBLIC pdcrt pdc_int)

add_custom_target(default_target ALL DEPENDS pdcrt pdc)


configure_file(
  "${CMAKE_CURRENT_SOURCE_DIR}/toolchain.txt.in"
  "${CMAKE_CURRENT_BINARY_DIR}/toolchain.txt"
  @ONLY
)

# ======= INSTALL


install(TARGETS pdc RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR})

install(TARGETS pdcrt
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
    INCLUDES DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/${BOOT_PREFIX}pdc
)

install(DIRECTORY runtime/c/pdcrt/
    DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/${BOOT_PREFIX}pdc/pdcrt
    FILES_MATCHING PATTERN "*.h"
)

install(FILES "${PDCRT_PUBLIC_INCLUDES}/pdcrt-plataforma.h"
    DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/${BOOT_PREFIX}pdc/pdcrt
)

install(FILES "${CMAKE_CURRENT_BINARY_DIR}/toolchain.txt"
    DESTINATION ${CMAKE_INSTALL_DATADIR}/${BOOT_PREFIX}pdc
)
