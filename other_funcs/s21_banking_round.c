#include "../inc/s21_banking_round.h"

#include "../inc/arithmetic_helpers.h"
#include "../inc/s21_decimal.h"

void banking_round(s21_big_decimal bigDecimal) {
    int size_array = DEC_ARRAY;
    int exp = (int)((bigDecimal.bits[7] & CHECK_SCALE) >> 16);
    int sign = (int)((bigDecimal.bits[7] & CHECK_MINUS) >> 31);

    int binary_integral[size_array];
    int binary_fraction[size_array];

    get_integral_and_fraction(binary_integral, binary_fraction, size_array, exp, bigDecimal);
    output_reversed_array(binary_integral, size_array);
    output_reversed_array(binary_fraction, size_array);

    //    int binary_view[size_array];
    //    init_array(binary_view, size_array);
    //    int base_ten_digit[size_array];
    //
    //    from_binary_to_10();
}

// получает отдельно дробь и целую часть
void get_integral_and_fraction(int integral[], int fraction[], int size_array, int exp,
                               s21_big_decimal bigDecimal) {
    int tmp_binary[size_array];
    int tmp_base_ten[size_array];
    int integral_binary[DEC_ARRAY] = {};
    int fraction_binary[DEC_ARRAY] = {};

    // TODO сделать так чтобы можно было передавать неограниченное количество массивов и инициализировать их
    // все
    init_array(tmp_base_ten, size_array);
    init_array(tmp_binary, size_array);
    init_array(integral, size_array);
    init_array(fraction, size_array);

    from_big_decimal_to_array(bigDecimal, tmp_binary, size_array);

    from_binary_to_10(tmp_binary, tmp_base_ten, size_array, size_array);
    output_reversed_array(tmp_base_ten, size_array);

    int i = 0;
    while (exp != 0 && (i < exp || i < size_array)) {
        fraction[i] = tmp_base_ten[i];
        i++;
        output_reversed_array(fraction, size_array);
        exp--;
    }
    subtract(tmp_base_ten, fraction, integral, size_array);
    // output_reversed_array(fraction, size_array);
    output_reversed_array(integral, size_array);

    delete_not_necessary_zero(tmp_base_ten, size_array);
    copy_array(tmp_base_ten, integral, size_array, size_array);
    output_reversed_array(integral, size_array);

    //   ten_to_two_base(integral, );
}

void ten_to_two_base(int ten_base[], int binary_base[], int size_array, int size_binary) {
    int two_powers[size_array];
    int size_of_len_two_powers = 256;
    int len_of_two_powers[size_of_len_two_powers];
    int copy_ten_base[size_of_len_two_powers];
    copy_array(ten_base, copy_ten_base, size_array, size_of_len_two_powers);
    init_array(len_of_two_powers, size_of_len_two_powers);
    int start = size_array;
    int status_code = -1;

    // в этом цикле мы выясняем с какой степени двойки нам начинать
    for (int i = 0; i < 100; i++) {  // до 100 потому что максимальное число децимала 2^96, больше мне не
                                     // нужно, 100 взято с запасом

        my_power(len_of_two_powers, size_of_len_two_powers, i, 2, 10);
        status_code = compare(copy_ten_base, len_of_two_powers, size_of_len_two_powers);
        if (status_code == LESS) {
            start = i - 1;
            break;
        } else if (status_code == EQUALS) {
            start = i;
            break;
        }
    }

    for (int i = start; i >= 0 && !(is_zero(ten_base, size_array)); i--) {
        my_power(two_powers, size_array, i, 2, 10);
        int sub_res[size_array];
        status_code = compare(ten_base, two_powers, size_array);
        if (status_code == LESS) {
            continue;
        } else if (status_code == GREATER || status_code == EQUALS) {
            subtract(ten_base, two_powers, sub_res, size_array);
            binary_base[i] = 1;
            copy_array(sub_res, ten_base, size_array, size_array);
        }
    }
}

void delete_not_necessary_zero(int array[], int size_array) {
    int real_size = get_real_len_of_number(array, size_array);
    int count_zero = 0;
    for (int i = 0; i < real_size; i++) {
        if (array[i] == 0) {
            count_zero++;
        }
    }
    for (int i = count_zero; i < real_size; i++) {
        int tmp = array[i];
        array[i - count_zero] = tmp;
        array[i] = 0;
    }
}

// сравнивается первое относительно второго
// == 0 EQUALS
// v1 > v2 1 GREATER
// v1 < v2 2 LESS
int compare(const int v1[], const int v2[], int size) {
    int len1 = get_real_len_of_number(v1, size);
    int len2 = get_real_len_of_number(v2, size);

    int res = len1 == len2 ? EQUALS : len1 > len2 ? GREATER : LESS;

    if (res == EQUALS) {
        int i = len1;
        int k = 0;
        while (--i > 0 && v1[i] == v2[i]) {
        }
        if (v1[i] > v2[i]) res = GREATER;
        if (v1[i] < v2[i]) res = LESS;
    }

    return res;
}

int is_zero(int array[], int size_array) {
    return (get_real_len_of_number(array, size_array) == 0 ? TRUE : FALSE);
}