#include <stdio.h>

#include "inc/arithmetic_helpers.h"
#include "inc/s21_add.h"
#include "inc/s21_decimal.h"
int main() {
     s21_decimal value1 = {{0b00000000000000000000000001011111, 0b00000000000000000000000000000000,
                            0b00000000000000000000000000000000, (11 << 16)}};
     s21_decimal value2 = {{0b00000000000000000000000000000001, 0b00000000000000000000000000000000,
                            0b00000000000000000000000000000000, (12 << 16)}};

     s21_decimal result = {};

     unsigned int res = s21_add(value1, value2, &result);


}