cmake_minimum_required(VERSION 3.26)
project(depimal C)

set(CMAKE_C_STANDARD 11)

add_executable(depimal main.c s21_add.c s21_decimal_utils.c s21_normalize_scale.c
        arithmetic_helpers.c)
