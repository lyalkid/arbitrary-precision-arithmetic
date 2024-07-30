#include "inc/s21_equalizers.h"
#include "inc/s21_decimal_utils.h"

int s21_is_equal(s21_decimal d_1, s21_decimal d_2) {
    int flag_equal = 1;
    int sign_1 = get_sign(d_1);
    int sign_2 = get_sign(d_2);
    s21_normalization(&d_1, &d_2);
    if (sign_1 != sign_2)
        flag_equal = 0;
    else {
        for (int i = 95; i >= 0; i--) {
            if (get_bit(d_1, i) != get_bit(d_2, i)) {
                flag_equal = 0;
                break;
            }
        }
    }
    if (zero_check(d_1) == 1 && zero_check(d_2) == 1) flag_equal = 1;
    return flag_equal;
}

int s21_is_not_equal(s21_decimal d_1, s21_decimal d_2) {
    int flag_not_equal = 0;
    if (s21_is_equal(d_1, d_2) == 0) flag_not_equal = 1;
    return flag_not_equal;
}

int s21_is_less(s21_decimal d_1, s21_decimal d_2) {
    int flag_less = 0;
    int sign_1 = get_sign(d_1);
    int sign_2 = get_sign(d_2);
    s21_normalization(&d_1, &d_2);
    if (sign_1 != sign_2 && sign_1 == 1)
        flag_less = 1;
    else if (sign_1 == 0 && sign_2 == 0) {
        for (int i = 95; i >= 0; i--) {
            if (get_bit(d_1, i) < get_bit(d_2, i)) {
                flag_less = 1;
                break;
            }
        }
    } else if (sign_1 == 1 && sign_2 == 1) {
        for (int i = 95; i >= 0; i--) {
            if (get_bit(d_1, i) > get_bit(d_2, i)) {
                flag_less = 1;
                break;
            }
        }
    }
    return flag_less;
}

int s21_is_greater(s21_decimal d_1, s21_decimal d_2) {
    int flag_greater = 0;
    int sign_1 = get_sign(d_1);
    int sign_2 = get_sign(d_2);
    s21_normalization(&d_1, &d_2);
    if (sign_1 != sign_2 && sign_1 == 0)
        flag_greater = 1;
    else if (sign_1 == 0 && sign_2 == 0) {
        for (int i = 95; i >= 0; i--) {
            if (get_bit(d_1, i) > get_bit(d_2, i)) {
                flag_greater = 1;
                break;
            }
        }
    } else if (sign_1 == 1 && sign_2 == 1) {
        for (int i = 95; i >= 0; i--) {
            if (get_bit(d_1, i) < get_bit(d_2, i)) {
                flag_greater = 1;
                break;
            }
        }
    }
    return flag_greater;
}

int s21_is_less_or_equal(s21_decimal d_1, s21_decimal d_2) {
    int flag_less_or_equal = 0;
    if (s21_is_less(d_1, d_2) == 1 || s21_is_equal(d_1, d_2) == 1)
        flag_less_or_equal = 1;
    return flag_less_or_equal;
}

int s21_is_greater_or_equal(s21_decimal d_1, s21_decimal d_2) {
    int flag_greater_or_equal = 0;
    if (s21_is_greater(d_1, d_2) == 1 || s21_is_equal(d_1, d_2) == 1)
        flag_greater_or_equal = 1;
    return flag_greater_or_equal;
}
