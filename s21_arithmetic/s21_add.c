#include "../inc/s21_add.h"

#include <stdlib.h>

#include "../inc/arithmetic_helpers.h"
#include "../inc/my_banking_round.h"

// TODO сделать с нормализацией
/*
    mantissa1 = 12345 AND scale = 2 => 123,45
    mantissa2 = 12345 AND scale = 3 => 12,345
*/

/*
ЭТО НЕ ДОДЕЛАНО
*/
int s21_add(s21_decimal value_1, s21_decimal value_2, s21_decimal* result) {
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
        if (check != 2) normalize_arrays(mantissa1, mantissa2, size, &exp1, &exp2);
        get_add_binary(mantissa1, mantissa2, res, size);
       // output_reversed_array(res, size);

        int ten[size];
        from_binary_to_10(res, ten, size, size);
       // output_reversed_array(ten, size);

        array_to_bigDecimal(res, size, sign1, exp1, &big_result);
//        for (int i = 0; i < 8; i++) {
//            print_binary(big_result.bits[i]);
//        }
        status_code = s21_big_decimal_to_decimal(big_result, result);
    }
    // если разные знаки, то вызываем вычитание
    else {
        // int s21_sub(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);
        // status_code = s21_sub();
    }

    return status_code;
}



// void binArray_to_bigDecimal(int bin_array[], int size, ){}
//  int is_overflowed(int array[], int size, int base, int exp){
//
//      int status_code = FALSE;
//
//
//      if(base == 2){
//          int ten_base[size];
//          from_binary_to_10(array, ten_base, size, size);
//          int len = get_real_len_of_number();
//      }
//      if(base == 10) {}
//  }
//   int s21_sub(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);
//   int s21_mul(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);
//   int s21_div(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);