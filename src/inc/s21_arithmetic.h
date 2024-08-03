#ifndef S21_ARITHMETIC_H
#define S21_ARITHMETIC_H

#include <stdlib.h>

#include "s21_decimal.h"
#include "s21_normalize_scale.h"
#include "s21_subfuncs.h"

/*
0 — OK;
1 — the number is too large or equal to infinity;
2 — the number is too small or equal to negative infinity;
3 — division by 0.
*/
enum errors { OK, INF, INF_NEG, DIV_BY_ZERO };

/*
0 - PLUS;
1 - MINUS;
*/
enum sign { PLUS, MINUS };

// Function prototypes
int s21_add(s21_decimal value_1, s21_decimal value_2, s21_decimal* result);

#endif  // S21_ARITHMETIC_H
