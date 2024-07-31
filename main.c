#include <stdio.h>

#include "inc/arithmetic_helpers.h"
#include "inc/s21_add.h"
#include "inc/s21_banking_round.h"
#include "inc/s21_decimal.h"
int main() {
    /* пример работы с вычитанием из одного массива другого
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
 */

    /* проверка функции, которая удаляет не нужные нули
       int size = 13;
       int array[] = {0,0,0,5,3, 4,1,6,7,8,0, 0, 0};
       output_array(array, size);
       output_reversed_array(array, size);

       delete_not_necessary_zero(array, size);

       output_array(array, size);
       output_reversed_array(array, size);
    */

    //
    // s21_decimal decimal = {0b11111111111111111111111111111111, 0b11111111111111111111111111111111,
    // 0b11111111111111111111111111111111, (1 << 16)}; s21_big_decimal bigDecimal;
    // decimal_to_big_decimal(decimal, &bigDecimal);
    // banking_round(bigDecimal);
    //

    /* проверка функции сравнения двух массивов
    //    int size = 7;
    //    int value1[] = {2, 1, 0, 0, 1, 0, 0};
    //    int value2[] = {2, 2, 0, 0, 1, 0, 0};
    //    int res = compare(value1, value2, size);
     */

    int size = DEC_ARRAY;
    int test[size];
    init_array(test, size);
    test[0] = 4;
    test[1] = 0;
    test[2] = 0;

    int result[size];
    init_array(result, size);
    ten_to_two_base(test, result, size);
    output_reversed_array(result, size);
    //  from_binary_to_10(test, result, size, size);
}