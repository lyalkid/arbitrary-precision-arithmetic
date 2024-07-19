#ifndef S21_DECIMAL_H
#define S21_DECIMAL_H

#include <stdlib.h>
#include "s21_decimal.h"
#include "s21_decimal_utils.h"

#define MINUS 0x80000000
#define SC 0x00ff0000
#define DEC_ARRAY 512
#define SIZE_MANTISSA 100

/*
0 — OK;
1 — the number is too large or equal to infinity;
2 — the number is too small or equal to negative infinity;
3 — division by 0.
*/
enum errors { OK, INF, NINF, DIV_BY_ZERO };

// Function prototypes
int s21_add(s21_decimal value_1, s21_decimal value_2, s21_decimal* result);

void get_add(const int value1[], const int value2[], int coef[], int size, int base);

void add_normalize(int coef[], int size, int base);

#endif // S21_DECIMAL_H