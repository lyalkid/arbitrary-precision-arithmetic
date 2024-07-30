#ifndef S21_EQUALIZERS_H_
#define S21_EQUALIZERS_H_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "s21_add.h"
#include "s21_decimal.h"
//#include "s21_normalization.h"
#include "s21_decimal_utils.h"


enum status{FALSE, TRUE};

// <
int s21_is_less(s21_decimal value_1, s21_decimal value_2);

// <=
int s21_is_less_or_equal(s21_decimal value_1, s21_decimal value_2);

// >
int s21_is_greater(s21_decimal value_1, s21_decimal value_2);

// >=
int s21_is_greater_or_equal(s21_decimal value_1, s21_decimal value_2);

// ==
int s21_is_equal(s21_decimal value_1, s21_decimal value_2);

// !=
int s21_is_not_equal(s21_decimal value_1, s21_decimal value_2);

#endif // S21_EQUALIZERS_H_
