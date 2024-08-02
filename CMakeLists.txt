cmake_minimum_required(VERSION 3.26)
project(depimal C)

set(CMAKE_C_STANDARD 11)

add_executable(depimal
        main.c
        s21_arithmetic/s21_add.c
        other_funcs/my_banking_round.c
        other_funcs/s21_subfuncs.c
        other_funcs/s21_normalize_scale.c
        other_funcs/arithmetic_helpers.c
        #        arithmetic_test/5x_test_s21_add.c
        #        arithmetic_test/100x_test_s21_add.c
#        arithmetic_test/5x_test_s21_add.c
#        arithmetic_test/10x_test_s21_add.c
#        arithmetic_test/30x_test_s21_add.c
#        arithmetic_test/50x_test_s21_add.c
#        arithmetic_test/300x_test_s21_add.c
)
