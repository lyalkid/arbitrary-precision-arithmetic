#ifndef ARITHMETIC_HELPERS_H_
#define ARITHMETIC_HELPERS_H_
#include <stdio.h>

#include "s21_decimal.h"
#include "s21_subfuncs.h"

void get_add_binary(const int value1[], const int value2[], int coef[], int size);
void get_add(int value1[], const int value2[], int size);

// первое число в передаваемых аргументых больше второго
void subtract(int value1[], int value2[], int result[], int size);

void add_normalize(int coef[], int size, int base);

void init_array(int a[], int n);

void init_array_for_power(int a[], int n);
void init_ten_in_binary(int a[], int n);

void simple_multiply(int a[], int b, int result[], int size_a, int base);

// получает размер вектора (массива) коэффициентов
int get_real_len_of_number(const int a[], int size);

void multiply(int a[], int b[], int result[], int size, int base);

void print_binary(const unsigned int number);

void copy_array(int from[], int to[], int size_from, int size_to);

void my_power(int a[], int a_size, int exp, int digit, int base);

void power_ten_in_binary(int ten[], int ten_size, int exp);

void from_binary_to_10(int bin_arr[], int result[], int size_bin_arr, int size_res);

void output_array(const int arr[], int size);
void output_reversed_array(const int arr[], int size);

void delete_not_necessary_zero(int array[], int size, int len_frac);

int compare(const int v1[], const int v2[], int size);

void ten_to_two_base(int ten_base[], int binary_base[], int size_array, int size_res);
int is_zero(int array[], int size_array);

void from_array_to_decimal(int array[], int size_array, int exp, int sign, s21_decimal* decimal);

enum { EQUALS, GREATER, LESS };

#endif  // ARITHMETIC_HELPERS_H_