//
// Created by lyalkid on 03.08.24.
//

#include "../inc/s21_arithmetic.h"
#include "../inc/arithmetic_helpers.h"
#include "../inc/s21_other_funcs.h"
#include "../inc/my_banking_round.h"
#include  "../inc/s21_normalize_scale.h"

int s21_sub(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) {
    int check = is_zero_decimal(value_1) + is_zero_decimal(value_2);
    int status_code = OK;
    int size = DEC_ARRAY;

    int mantissa1[size];
    int mantissa2[size];

    from_decimal_to_array(value_1, mantissa1, size);
    from_decimal_to_array(value_2, mantissa2, size);
    s21_big_decimal big_result = {};

    //    output_reversed_array(mantissa1, size);
    //    output_reversed_array(mantissa2, size);

    int res[size];
    init_array(res, size);
    int sign1 = get_sign(value_1);
    int sign2 = get_sign(value_1);

    int exp1 = get_scale(value_1);
    int exp2 = get_scale(value_2);

    // если знаки одинаковые, то складываем
    if (sign1 + sign2 != 1) {
    }
    else{}
}
