#ifndef S21_BANKING_ROUND_H_
#define S21_BANKING_ROUND_H_
#include "s21_subfuncs.h"

int banking_round(s21_big_decimal* bigDecimal);
void get_integral_and_fraction(int integral[], int fraction[], int size_array, int exp,
                               s21_big_decimal bigDecimal);

void logic_banking(int integral[], int fraction[], int size_array);
#endif  // S21_BANKING_ROUND_H_