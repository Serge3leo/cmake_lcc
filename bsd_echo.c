// vim:set sw=4 ts=8 et fileencoding=utf8::Кодировка:UTF-8[АБЁЪЯабёъя]
// SPDX-License-Identifier: BSD-2-Clause
// SPDX-FileCopyrightText: 2025 Сергей Леонтьев (leo@sai.msu.ru)
// История:
// 2025-12-11 11:41:33 - Создан.

#include <stdio.h>
#include <string.h>

int main(int ac, char *av[]) {
    const char *endl = "\n";
    const char *dlm = "";
    if (*++av && 0 == strcmp(*av, "-n")) {
        endl = "";
        av++;
    }
    while (*av) {
        printf("%s%s", dlm, *av++);
        dlm = " ";
    }
    printf("%s", endl);
}
