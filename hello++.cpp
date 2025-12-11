// vim:set sw=4 ts=8 et fileencoding=utf8::Кодировка:UTF-8[АБЁЪЯабёъя]
// SPDX-License-Identifier: BSD-2-Clause
// SPDX-FileCopyrightText: 2025 Сергей Леонтьев (leo@sai.msu.ru)
// История:
// 2025-12-11 11:45:43 - Создан.

#include <iostream>

int main(void) {
    std::cout << "Привет мир++\nМы из ";
    #if __clang_major__
        std::cout << "__clang_major__ __clang_minor__: "
                  << __clang_major__ << ' ' << __clang_minor__ << '\n';
    #endif
    #if __GNUC__
        std::cout << "__GNUC__ __GNUC_MINOR__: "
                  << __GNUC__ << ' ' << __GNUC_MINOR__ << '\n';
    #endif
    #if _MSC_VER
        std::cout << "_MSC_VER: " << _MSC_VER << '\n';
    #endif
    #if __INTEL_COMPILER
        std::cout << "__INTEL_COMPILER: " << __INTEL_COMPILER << '\n';
    #endif
    #if __LCC__
        std::cout << "__LCC__ __LCC_MINOR__: "
                  << __LCC__ << ' ' << __LCC_MINOR__ << '\n';
    #endif
}
