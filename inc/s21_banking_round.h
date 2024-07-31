#ifndef S21_BANKING_ROUND_H_
#define S21_BANKING_ROUND_H_
#include "s21_decimal_utils.h"

enum { EQUALS, GREATER, LESS };

void banking_round(s21_big_decimal bigDecimal);
void get_integral_and_fraction(int integral[], int fraction[], int size_array, int exp,
                               s21_big_decimal bigDecimal);
void delete_not_necessary_zero(int array[], int size);

int compare(const int v1[], const int v2[], int size);

void ten_to_two_base(int ten_base[], int binary_base[], int size_array);
int is_zero(int array[], int size_array);
#endif  // S21_BANKING_ROUND_H_