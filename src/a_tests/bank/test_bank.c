#include "../test.h"

START_TEST(s21_bank_round_1) {
    s21_big_decimal src = {{0x0, 0x0, 0x0, 1, 0, 0, 0, 0}};
    s21_big_decimal v1 = s21_bigdecimal_init(), v2 = s21_bigdecimal_init();

    /* умножение decimal на 10 */
    s21_shift_left_big(src, 3, &v1);  // умножение src на 8
    s21_shift_left_big(src, 1, &v2);  // Умножение src на 2

    for (int i = 0, temp = 0; i < 224; i++) {
        int result_bit = s21_get_bit_big(v1, i) + s21_get_bit_big(v2, i) + temp;
        temp = result_bit / 2;
        result_bit %= 2;
        s21_set_bit_big(&src, i, result_bit);
    }
    /* 79 228 162 514 264 337 593 543 950 335 -> 79 228 162 514 264 337 593 543
     * 950 335 0 */

    /* прибавляем к decimal 5 */
    s21_big_decimal dec_5 = {{5, 0, 0, 0, 0, 0, 0, 0}};
    s21_big_decimal result = {{0}};

    for (int i = 0, temp = 0; i < 224; i++) {
        unsigned result_bit = s21_get_bit_big(src, i) + s21_get_bit_big(dec_5, i) + temp;
        temp = result_bit / 2;
        result_bit %= 2;
        s21_set_bit_big(&result, i, result_bit);
    }

    s21_set_scale_big(&result, 1);
    int code = s21_banking_round(&result);

    ck_assert_int_eq(code, 1);

    s21_decimal result_dec = s21_decimal_init();

    code = s21_big_decimal_to_decimal(result, &result_dec);

    ck_assert_int_eq(code, 1);
}
END_TEST

START_TEST(s21_bank_round_2) {
    s21_big_decimal src = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0, 0, 0, 0, 0}};
    s21_big_decimal v1 = s21_bigdecimal_init(), v2 = s21_bigdecimal_init();

    /* умножение decimal на 10 */
    s21_shift_left_big(src, 3, &v1);  // умножение src на 8
    s21_shift_left_big(src, 1, &v2);  // Умножение src на 2

    for (int i = 0, temp = 0; i < 224; i++) {
        int result_bit = s21_get_bit_big(v1, i) + s21_get_bit_big(v2, i) + temp;
        temp = result_bit / 2;
        result_bit %= 2;
        s21_set_bit_big(&src, i, result_bit);
    }
    /* 79 228 162 514 264 337 593 543 950 335 -> 79 228 162 514 264 337 593 543
     * 950 335 0 */

    /* прибавляем к decimal 4 */
    s21_big_decimal dec_4 = {{4, 0, 0, 0, 0, 0, 0, 0}};
    s21_big_decimal result = {{0}};

    for (int i = 0, temp = 0; i < 224; i++) {
        unsigned result_bit = s21_get_bit_big(src, i) + s21_get_bit_big(dec_4, i) + temp;
        temp = result_bit / 2;
        result_bit %= 2;
        s21_set_bit_big(&result, i, result_bit);
    }

    s21_set_scale_big(&result, 1);
    int code = s21_banking_round(&result);

    ck_assert_int_eq(code, 0);

    s21_decimal result_dec = s21_decimal_init();

    code = s21_big_decimal_to_decimal(result, &result_dec);

    ck_assert_int_eq(code, 0);
    s21_decimal expected = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0}};
    code = s21_is_decimal_identical(result_dec, expected);
    ck_assert_int_eq(code, 1);
    printf("\n\n\n");
    out_decimal(result_dec);
    out_decimal(expected);

}
END_TEST

Suite *s21_bank_round_suite(void) {
    Suite *s;
    s = suite_create("\033[33ms21_s21_bank_round\033[0m");

    TCase *tc_core;
    tc_core = tcase_create("s21_s21_bank_round_core");
    tcase_add_test(tc_core, s21_bank_round_1);
    tcase_add_test(tc_core, s21_bank_round_2);
    // tcase_add_test(tc_core, s21_bank_round_3);
    // tcase_add_test(tc_core, s21_bank_round_4);
    // tcase_add_test(tc_core, s21_bank_round_5);
    // tcase_add_test(tc_core, s21_bank_round_6);
    // tcase_add_test(tc_core, s21_bank_round_7);

    suite_add_tcase(s, tc_core);
    return s;
}