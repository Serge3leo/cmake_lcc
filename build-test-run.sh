#!
# vim:set sw=4 ts=8 fileencoding=utf8::Кодировка:UTF-8[АБЁЪЯабёъя]
# SPDX-License-Identifier: BSD-2-Clause
# SPDX-FileCopyrightText: 2025 Сергей Леонтьев (leo@sai.msu.ru)
# История:
# 2025-12-11 11:13:20 - Создан.

set -e
set -x

if [ -z "$1" -o -z "$2" ] ; then
    echo "Использование: $0 <C-компилятор> <C++-компилятор>" 1>&2
    exit 3
fi
build_type=Release
build_output_dir="build/`uname -s`_$1_$2"
mkdir -p "$build_output_dir"
case "$1" in
 lcc)
    cross_emul=e2k
    cmake_add="-DCMAKE_CROSSCOMPILING=ON -DCMAKE_SYSTEM_NAME=Generic-ELF \
	       -DCMAKE_CROSSCOMPILING_EMULATOR=$cross_emul"
    ;;
esac
cmake -B "$build_output_dir" \
      -DCMAKE_C_COMPILER="$1" \
      -DCMAKE_CXX_COMPILER="$2" \
      -DCMAKE_BUILD_TYPE=$build_type $cmake_add -S .
cmake --build "$build_output_dir" --config $build_type
cd "$build_output_dir"
ctest --build-config $build_type
for h in ./hello* ; do
    $cross_emul $h
done
