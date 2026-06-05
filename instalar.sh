#!/bin/sh

versions="latest boot-t1"

help() {
    printf "Uso: ./instalar.sh ARRANQUE PREFIJO"
    printf "  ARRANQUE: La versión a instalar: %s" "$versions"
    printf "  PREFIJO: El prefijo de instalación, por ejemplo, /usr/local"
}

if [ "$#" -eq 0 ]; then
    help
    exit
fi

if [ "$#" -ne 2 ]; then
    help
    exit
fi


TARGET="$1"
PREFIX="$2"

case "$PREFIX" in
    "/"*)
        prefix="$PREFIX"
    ;;
    *)
        prefix="$(pwd)/$PREFIX"
    ;;
esac

srcdir="$(pwd)"
builddir="$srcdir/outputs/build-$TARGET"

ntarget="$(printf '%s' "$TARGET" | tr - _)"

mkdir -p "$builddir" || exit
cd "$builddir" || exit
cmake -S "$srcdir" -B . --install-prefix "$prefix" -G Ninja || exit
cmake --build . -t "$ntarget" || exit
cmake --install . || exit
