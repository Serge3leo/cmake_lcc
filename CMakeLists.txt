# vim:set sw=4 ts=8 et fileencoding=utf8::Кодировка:UTF-8[АБЁЪЯабёъя]
# SPDX-License-Identifier: BSD-2-Clause
# SPDX-FileCopyrightText: 2025 Сергей Леонтьев (leo@sai.msu.ru)
# История:
# 2025-12-11 12:01:02 - Создан.

cmake_minimum_required (VERSION 3.25)
project(cmake_lcc
        VERSION 0.1.0
        DESCRIPTION
        "Use LCC, MCST Elbrus in CMake project running on multiple platforms"
        HOMEPAGE_URL https://github.com/Serge3leo/cmake_lcc.git
        LANGUAGES C CXX)

add_executable(hello hello.c)
add_test(NAME hello COMMAND hello)
set_tests_properties(hello PROPERTIES PASS_REGULAR_EXPRESSION "Привет мир")

add_executable(hello++ hello++.cpp)
add_test(NAME hello++ COMMAND hello++)
set_tests_properties(hello++ PROPERTIES PASS_REGULAR_EXPRESSION "Привет мир[+]")

add_executable(simple_false simple_false.c)
add_test(NAME simple_false COMMAND simple_false)
set_tests_properties(simple_false PROPERTIES WILL_FAIL true)

add_executable(bsd_echo bsd_echo.c)
add_test(NAME bsd_echo COMMAND bsd_echo -n a b c)
set_tests_properties(bsd_echo PROPERTIES PASS_REGULAR_EXPRESSION "a b c")

enable_testing()
