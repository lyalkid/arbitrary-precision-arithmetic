#include "inc/s21_add.h"

#include <stdlib.h>

#include "inc/arithmetic_helpers.h"

// TODO сделать с нормализацией
/*
    mantissa1 = 12345 AND scale = 2 => 123,45
    mantissa2 = 12345 AND scale = 3 => 12,345
*/

/*
ЭТО НЕ ДОДЕЛАНО
*/
int s21_add(s21_decimal value_1, s21_decimal value_2, s21_decimal* result) {
    int size = DEC_ARRAY;
    int result_code = OK;
    //получаем знаки
    int sign1 = get_sign(value_1);
    int sign2 = get_sign(value_2);

    // получаем exp ( 10 ^ scale )
    int exp1 = get_scale(value_1);
    int exp2 = get_scale(value_2);



    int mantissa1[size];  // инициализация пустого массива , заполненного нулями
    int mantissa2[size];
    int result_value[size];
    init_array(result_value, size);

    from_decimal_to_array(value_1, mantissa1, size);
    from_decimal_to_array(value_2, mantissa2, size);
//---------
    printf("mantissa1:\n");
    output_reversed_array(mantissa1, size);

//     printf("mantissa2:\n");
//     output_reversed_array(mantissa2, size);
//
//
// //---------

    normalize_arrays(mantissa1, mantissa2, size, &exp1, &exp2);
    //---------
    printf("mantissa1:\n");
    output_reversed_array(mantissa1, size);


    // printf("mantissa2:\n");
    // output_reversed_array(mantissa2, size);
    //
    //
    // //---------

    int sum_of_signs =
        get_sign(value_1) +
        get_sign(value_2);  // если 0 или 2 , то делаем сложение, а потом ставим знак, если 1, то

    if (sum_of_signs != 1) {
        get_add_binary(mantissa1, mantissa2, result_value, DEC_ARRAY);

        // overflow
        // to decimal
        // return OK
    }
    int norm[size];
    from_binary_to_10(result_value, norm, size, size );
    //output_reversed_array(norm, size);
    //output_reversed_array(result_value, size);
    return result_code;
}
