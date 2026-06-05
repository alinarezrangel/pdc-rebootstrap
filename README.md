# Bootstrapper #

El compilador de PseudoD, precompilado.

**NOTA**: El único propósito de este repo es distribuir versiones de `pdc` que
sirvan como "arranque" para compilar la versión "real" en [pdc][pdc]. Las
versiones de pdc que son distribuidas por este repo son inestables, viejas y
generalmente carecen de las últimas mejoras y parches.

[pdc]: https://github.com/alinarezrangel/pseudod-v3-pdc

## Distribución ##

Cada compilador precompilado tiene la forma `boot-tN` donde *N* es un entero;
por ejemplo, `boot-t1`. Cada commit de [pdc][pdc] necesita una versión
específica de `boot-tN`. Para saber que versión necesitas, lee el archivo
`DIST_BOOTSTRAP` en [pdc][pdc].

Además, la pseudo-versión `latest` compila el último compilador de arranque:
este siempre debería ser útil para compilar la última versión de [pdc][pdc].

## Uso ##

```shell
./instalar.sh latest /usr/local
# O también:
./instalar.sh boot-t1 /usr/local
```

Lo cual es más o menos equivalente a:

```shell
mkdir build
cd build
cmake -S .. -B . --install-prefix /usr/local -G Ninja
cmake --build . -t latest -j 10
# O también:
#   cmake --build . -t boot-t1 -j 10
cmake --install .
```

Esto instalará el compilador de arranque bajo un prefijo `btN-`, por ejemplo,
`boot-t1` será instalado bajo `bt1-pdc`, `libbt1-pdcrt.a`,
`include/bt1-include/pdcrt/...`.

## Versiones de arranque ##

- `boot-t1`, `latest`: La última versión.
