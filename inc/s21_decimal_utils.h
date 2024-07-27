#ifndef S21_DECIMAL_UTILS_H
#define S21_DECIMAL_UTILS_H

#include "s21_decimal.h"

#include <stdlib.h>

// Function prototypes
void from_decimal_to_array(s21_decimal decimal, int array[], int size);

void init_array(int array[], int size);

int get_bit(s21_decimal decimal, int index);

int set_bit(s21_decimal* decimal, int index, int value);

int get_scale(s21_decimal value);

void set_scale(s21_decimal* decimal, int scale);

int get_sign(s21_decimal value);

void set_sign(s21_decimal* decimal, int sign);

#endif // S21_DECIMAL_UTILS_H
