#ifndef S21_DECIMAL_UTILS_H
#define S21_DECIMAL_UTILS_H

#include "s21_decimal.h"
#define CHECK_MINUS 0x80000000
#define CHECK_SCALE 0x00ff0000
#include <stdlib.h>
#define DEC_ARRAY 256

enum status_code { FALSE, TRUE };

// Function prototypes
void from_decimal_to_array(s21_decimal decimal, int array[], int size);
void from_big_decimal_to_array(s21_big_decimal bigDecimal, int array[], int size);

void init_array(int array[], int size);

int get_bit(s21_decimal decimal, int index);

int get_bit_from_big_decimal(s21_big_decimal bigDecimal, int index);

int set_bit(s21_decimal* decimal, int index, int value);

int get_scale(s21_decimal value);

void set_scale(s21_decimal* decimal, int scale);

int get_sign(s21_decimal value);

void set_sign(s21_decimal* decimal, int sign);

void decimal_to_big_decimal(s21_decimal decimal, s21_big_decimal* bigDecimal);

int s21_is_decimal_correct(s21_decimal decimal);

#endif  // S21_DECIMAL_UTILS_H
