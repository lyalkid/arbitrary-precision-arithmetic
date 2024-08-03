#ifndef S21_TESTS_H
#define S21_TESTS_H
#include <check.h>
#include <float.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#include "../inc/arithmetic_helpers.h"
#include "../inc/s21_arithmetic.h"
#include "../inc/s21_decimal.h"
#include "../inc/s21_normalize_scale.h"
#include "../inc/s21_subfuncs.h"


#define TEST_HED
#define BUFFER 512

#ifndef TIME_HED
#define TIME_HED
#include <time.h>
#endif

Suite *s21_add_suite5(void);
Suite *s21_add_suite10(void);
Suite *s21_add_cases30(void);
Suite *s21_add_cases50(void);
Suite *s21_add_cases100(void);
Suite *s21_add_cases300(void);



Suite *s21_bank_round_suite(void);









#endif  // S21_TESTS_H
