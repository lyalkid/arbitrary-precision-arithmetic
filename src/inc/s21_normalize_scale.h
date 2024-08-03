#ifndef S21_NORMALIZE_SCALE_H_
#define S21_NORMALIZE_SCALE_H_
#include "s21_decimal.h"

void normalization(s21_decimal decimal_1, s21_decimal decimal_2);
void normalize_arrays(int value1[], int value2[], int size, int* scale1, int* scale2);
int normalize_scale(int* scale1, int* scale2);

#endif  // S21_NORMALIZE_SCALE_H_
