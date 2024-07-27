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
    int result_code = OK;
    //получаем знаки
    int sign1 = get_sign(value_1);
    int sign2 = get_sign(value_2);

    int scale1 = get_scale(value_1);
    int scale2 = get_scale(value_2);

    // normalize_scale(&scale1, &scale2);

    int mantissa1[DEC_ARRAY] = {};  // инициализация пустого массива , заполненного нулями
    int mantissa2[DEC_ARRAY] = {};
    int result_value[DEC_ARRAY] = {};
    init_array(result_value, DEC_ARRAY);

    from_decimal_to_array(value_1, mantissa1, DEC_ARRAY);
    from_decimal_to_array(value_2, mantissa2, DEC_ARRAY);

    int sum_of_signs =
        get_sign(value_1) +
        get_sign(value_2);  // если 0 или 2 , то делаем сложение, а потом ставим знак, если 1, то

    // нормализация

    if (sum_of_signs != 1) {
        get_add(mantissa1, mantissa2, result_value, DEC_ARRAY);

        // overflow
        // to decimal
        // return OK
    }

    return result_code;
}
