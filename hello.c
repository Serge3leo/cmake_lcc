// vim:set sw=4 ts=8 et fileencoding=utf8::Кодировка:UTF-8[АБЁЪЯабёъя]
// SPDX-License-Identifier: BSD-2-Clause
// SPDX-FileCopyrightText: 2025 Сергей Леонтьев (leo@sai.msu.ru)
// История:
// 2025-12-11 11:41:33 - Создан.

#include <stdio.h>

int main(void) {
    printf("Привет мир\nМы из ");
    #if __clang_major__
        printf("__clang_major__.__clang_minor__ %d.%d\n",
                __clang_major__, __clang_minor__);
    #endif
    #if __GNUC__
        printf("__GNUC__.__GNUC_MINOR__ %d.%d\n",
                __GNUC__, __GNUC_MINOR__);
    #endif
    #if _MSC_VER
        printf("_MSC_VER %d\n", _MSC_VER);
    #endif
    #if __LCC__
        printf("__LCC__.__LCC_MINOR__ %d.%d\n",
                __LCC__, __LCC_MINOR__);
    #endif
}
