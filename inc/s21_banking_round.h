#ifndef S21_BANKING_ROUND_H_
#define S21_BANKING_ROUND_H_
#include "s21_decimal_utils.h"

s21_decimal banking_round(s21_big_decimal bigDecimal);
void get_integral_and_fraction(int integral[], int fraction[], int size_array, int exp,  s21_big_decimal bigDecimal);
#endif  // S21_BANKING_ROUND_H_