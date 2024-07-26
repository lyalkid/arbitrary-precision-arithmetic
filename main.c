#include "s21_add.h"
#include "s21_decimal.h"
#include <stdio.h>

int main (){
    s21_decimal value1 = {};
    s21_decimal value2 = {};
    s21_decimal result = {};

    int res = s21_add(value1, value2, &result);
    printf("1");
}