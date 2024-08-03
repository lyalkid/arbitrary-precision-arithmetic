#include "../inc/my_banking_round.h"

#include "../inc/arithmetic_helpers.h"
#include "../inc/s21_arithmetic.h"
#include "../inc/s21_decimal.h"

int banking_round(s21_big_decimal* bigDecimal) {
    int err = OK;

    int size_array = DEC_ARRAY;
    int exp = (int)((bigDecimal->bits[7] & CHECK_SCALE) >> 16);
    int sign = (int)((bigDecimal->bits[7] & CHECK_MINUS) >> 31);

    int integral[size_array];
    int fraction[size_array];
    int binary_integral[size_array];

    get_integral_and_fraction(integral, fraction, size_array, exp, *bigDecimal);
    // output_reversed_array(binary_integral, size_array);
    // output_reversed_array(binary_fraction, size_array);
    int last = integral[0];

    logic_banking(integral, fraction, size_array);
    ten_to_two_base(integral, binary_integral, size_array, size_array);

    return err;
}

void logic_banking(int integral[], int fraction[], int size_array) {
    int half[size_array];
    int addition[size_array];
    init_array(half, size_array);
    init_array(addition, size_array);
    int ost = integral[0];
    addition[0] = 1;

    int frac_len = get_real_len_of_number(fraction, size_array);
    if (frac_len >= 1) {
        half[frac_len - 1] = 5;
    }
    output_reversed_array(half, size_array);
    int status_compare = compare(fraction, half, size_array);
    if (status_compare == EQUALS && (ost % 2 != 0)) {
        get_add(integral, addition, size_array);
    } else if (status_compare == GREATER) {
        get_add(integral, addition, size_array);
    }
    output_reversed_array(integral, size_array);
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
        exp--;
    }
    output_reversed_array(fraction, size_array);
    int frac_len = get_real_len_of_number(fraction, size_array);
    subtract(tmp_base_ten, fraction, integral, size_array);
    // output_reversed_array(fraction, size_array);
    output_reversed_array(integral, size_array);

    delete_not_necessary_zero(integral, size_array, frac_len);
    output_reversed_array(integral, size_array);
    output_reversed_array(tmp_base_ten, size_array);

    // copy_array(tmp_base_ten, integral, size_array, size_array);
    output_reversed_array(integral, size_array);

    //   ten_to_two_base(integral, );
}
