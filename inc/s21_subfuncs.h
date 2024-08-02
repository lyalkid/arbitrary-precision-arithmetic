#ifndef S21_DECIMAL_UTILS_H
#define S21_DECIMAL_UTILS_H

#include "arithmetic_helpers.h"
#include "s21_decimal.h"
#define CHECK_MINUS 0x80000000
#define CHECK_SCALE 0x00ff0000
#include <stdlib.h>
#define DEC_ARRAY 256


enum status_code { FALSE, TRUE };

// Function prototypes
void from_decimal_to_array(s21_decimal decimal, int array[], int size);
void from_big_decimal_to_array(s21_big_decimal bigDecimal, int array[], int size);

int s21_overflow_check(s21_big_decimal* value);
int s21_get_scale_big(s21_big_decimal bigDecimal);
void s21_div_10(s21_big_decimal* bigDecimal, int* remainder);
// void init_array(int array[], int size);

int get_bit(s21_decimal decimal, int index);

int get_bit_from_big_decimal(s21_big_decimal bigDecimal, int index);

int set_bit(s21_decimal* decimal, int index, int value);

int get_scale(s21_decimal value);

void set_scale(s21_decimal* decimal, int scale);

int get_sign(s21_decimal value);

void set_sign(s21_decimal* decimal, int sign);

void decimal_to_big_decimal(s21_decimal decimal, s21_big_decimal* bigDecimal);

int s21_is_decimal_correct(s21_decimal decimal);

void s21_set_bit_big(s21_big_decimal* num, int bit, unsigned value);
void array_to_bigDecimal(int array[], int size, int sign, int exp, s21_big_decimal* bigDecimal);


int s21_big_decimal_to_decimal(s21_big_decimal src, s21_decimal* res);
int is_zero_decimal(s21_decimal decimal);\


void s21_set_sign_big(s21_big_decimal *num, unsigned value);

int s21_get_bit_big(s21_big_decimal value, int bit) ;
void set_big_scale(s21_big_decimal * bigDecimal, int scale) ;
#endif  // S21_DECIMAL_UTILS_H
