#include <stdio.h>

#include "inc/s21_add.h"
#include "inc/s21_decimal.h"
#include "inc/arithmetic_helpers.h"
int main() {
    // s21_decimal value1 = {{0b11111111111111111111111111111111, 0b11111111111111111111111111111111,
    //                        0b00000000000000000000000000000000, 196608}};
    // s21_decimal value2 = {{0b00000000000000000000000000000001, 0b00000000000000000000000000000000,
    //                        0b00000000000000000000000000000000, 196608}};
    //
    // s21_decimal result = {};
    //
    // int res = s21_add(value1, value2, &result);
    //printf("1");
        int size = 11;
        int test[] = {0,0,0,0,0,0,0,0,0,0, 1};
    //init_array(test, size);
    int result[size];
    init_array(result, size);
    from_binary_to_10(test, result, size, size);
}