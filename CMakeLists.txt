cmake_minimum_required(VERSION 3.26)
project(depimal C)

set(CMAKE_C_STANDARD 11)

add_executable(depimal
        src/main.c
        src/s21_arithmetic/s21_add.c
        src/other_funcs/my_banking_round.c
        src/other_funcs/s21_subfuncs.c
        src/other_funcs/s21_normalize_scale.c
        src/other_funcs/arithmetic_helpers.c

)
