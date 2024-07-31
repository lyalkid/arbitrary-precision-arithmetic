#include <stdio.h>

#include "inc/arithmetic_helpers.h"
#include "inc/s21_add.h"
#include "inc/s21_decimal.h"
int main() {
    int size = 7;
    int value1[] = {0, 0, 0, 0, 1, 0, 0};
    output_reversed_array(value1, size);
    printf("-\n");
    int value2[] = {9, 9, 9, 4, 0, 0, 0};
    output_reversed_array(value2, size);
    printf("=\n");
    int result[size];
    init_array(result, size);

    subtract(value1, value2, result, size);

    output_reversed_array(result, size);

}