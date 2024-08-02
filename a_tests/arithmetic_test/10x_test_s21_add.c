#include <check.h>

#include "../../inc/s21_add.h"
//START_TEST(invalid_dec_s21_add_1) {
//    // ссылка на результат - NULL
//    s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x0}};
//    s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x0}};
//    int result_value = s21_add(dec_1, dec_2, NULL);
//
//    ck_assert_int_eq(result_value, 1);
//}
//
//START_TEST(invalid_dec_s21_add_2) {
//    // степень 56 (допустимое значение от 0 до 28)
//    // биты 0-15 не пустые
//    // биты 24-30 не пустые
//    s21_decimal dec_1 = {{0x0, 0x0, 0x0, 0x380000}};
//    s21_decimal dec_2 = {{0xFFFFFFFF, 0x0, 0xFFFFFFFF, 0x0}};
//    s21_decimal result;
//    int result_value = s21_add(dec_1, dec_2, &result);
//
//    ck_assert_int_eq(result_value, 1);
//}
//END_TEST
//
//START_TEST(invalid_dec_s21_add_3) {
//    // степень 29 (допустимое значение от 0 до 28)
//    s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x1D0000}};
//    s21_decimal dec_2 = {{0xFFFFFFFF, 0x0, 0xFFFFFFFF, 0x0}};
//    s21_decimal result;
//    int result_value = s21_add(dec_1, dec_2, &result);
//
//    ck_assert_int_eq(result_value, 1);
//}
//END_TEST
//
//START_TEST(invalid_dec_s21_add_4) {
//    // степень 28
//    // биты 0-15 не пустые
//    s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x1C0001}};
//    s21_decimal dec_2 = {{0xFFFFFFFF, 0x0, 0xFFFFFFFF, 0x140000}};
//    s21_decimal result;
//    int result_value = s21_add(dec_1, dec_2, &result);
//
//    ck_assert_int_eq(result_value, 1);
//}
//END_TEST
//
//START_TEST(invalid_dec_s21_add_5) {
//    // степень 28
//    // биты 0-15 не пустые
//    s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x1C8000}};
//    s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0x0, 0x140000}};
//    s21_decimal result;
//    int result_value = s21_add(dec_1, dec_2, &result);
//
//    ck_assert_int_eq(result_value, 1);
//}
//END_TEST
//
//START_TEST(invalid_dec_s21_add_6) {
//    // степень 28
//    // биты 24-30 не пустые
//    s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x11C0000}};
//    s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x140000}};
//    s21_decimal result;
//    int result_value = s21_add(dec_1, dec_2, &result);
//
//    ck_assert_int_eq(result_value, 1);
//}
//END_TEST
//
//START_TEST(invalid_dec_s21_add_7) {
//    // степень 28
//    // биты 24-30 не пустые
//    s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x401C0000}};
//    s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x140000}};
//    s21_decimal result;
//    int result_value = s21_add(dec_1, dec_2, &result);
//
//    ck_assert_int_eq(result_value, 1);
//}
//END_TEST
//
//START_TEST(invalid_dec_s21_add_8) {
//    // Все биты имеют максимальное значение
//    s21_decimal dec_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF}};
//    s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
//    s21_decimal result;
//    int result_value = s21_add(dec_1, dec_2, &result);
//
//    ck_assert_int_eq(result_value, 1);
//}
//END_TEST
//
//START_TEST(invalid_dec_s21_add_9) {
//    // степень 56 (допустимое значение от 0 до 28)
//    // биты 0-15 не пустые
//    // биты 24-30 не пустые
//    s21_decimal dec_2 = {{0xA, 0x0, 0x0, 0x380000}};
//    s21_decimal dec_1 = {{0xFFFFFFFF, 0x0, 0xFFFFFFFF, 0x140000}};
//    s21_decimal result;
//    int result_value = s21_add(dec_1, dec_2, &result);
//
//    ck_assert_int_eq(result_value, 1);
//}
//END_TEST
//
//START_TEST(invalid_dec_s21_add_10) {
//    // степень 29 (допустимое значение от 0 до 28)
//    s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x1D0000}};
//    s21_decimal dec_1 = {{0xFFFFFFFF, 0x0, 0xFFFFFFFF, 0x0}};
//    s21_decimal result;
//    int result_value = s21_add(dec_1, dec_2, &result);
//
//    ck_assert_int_eq(result_value, 1);
//}
//END_TEST
//
//START_TEST(invalid_dec_s21_add_11) {
//    // степень 29 (допустимое значение от 0 до 28)
//    s21_decimal dec_2 = {{0xA, 0x0, 0x0, 0x1D0000}};
//    s21_decimal dec_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x20000}};
//    s21_decimal result;
//    int result_value = s21_add(dec_1, dec_2, &result);
//
//    ck_assert_int_eq(result_value, 1);
//}
//END_TEST
//
//START_TEST(invalid_dec_s21_add_12) {
//    // степень 28
//    // биты 0-15 не пустые
//    s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x1C0001}};
//    s21_decimal dec_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x20000}};
//    s21_decimal result;
//    int result_value = s21_add(dec_1, dec_2, &result);
//
//    ck_assert_int_eq(result_value, 1);
//}
//END_TEST
//
//START_TEST(invalid_dec_s21_add_13) {
//    // степень 28
//    // биты 0-15 не пустые
//    s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x1C8000}};
//    s21_decimal dec_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
//    s21_decimal result;
//    int result_value = s21_add(dec_1, dec_2, &result);
//
//    ck_assert_int_eq(result_value, 1);
//}
//END_TEST
//
//START_TEST(invalid_dec_s21_add_14) {
//    // степень 28
//    // биты 24-30 не пустые
//    s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x11C0000}};
//    s21_decimal dec_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
//    s21_decimal result;
//    int result_value = s21_add(dec_1, dec_2, &result);
//
//    ck_assert_int_eq(result_value, 1);
//}
//END_TEST
//
//START_TEST(invalid_dec_s21_add_15) {
//    // степень 28
//    // биты 24-30 не пустые
//    s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x401C0000}};
//    s21_decimal dec_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x140000}};
//    s21_decimal result;
//    int result_value = s21_add(dec_1, dec_2, &result);
//
//    ck_assert_int_eq(result_value, 1);
//}
//END_TEST
//
//START_TEST(invalid_dec_s21_add_16) {
//    // Все биты имеют максимальное значение
//    s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF}};
//    s21_decimal dec_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x140000}};
//    s21_decimal result;
//    int result_value = s21_add(dec_1, dec_2, &result);
//
//    ck_assert_int_eq(result_value, 1);
//}
//END_TEST

START_TEST(s21_add_1) {
    // -55807677187151666154470
    s21_decimal dec_1 = {{0xe6210be6, 0x571a1ff7, 0xbd1, 0x80000000}};
    // 20079302221904
    s21_decimal dec_2 = {{0x13ad2050, 0x1243, 0x0, 0x0}};
    // -55807677167072363932566
    s21_decimal dec_check = {{0xd273eb96, 0x571a0db4, 0xbd1, 0x80000000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_2) {
    // 4188738
    s21_decimal dec_1 = {{0x3fea42, 0x0, 0x0, 0x0}};
    // -4151.6913
    s21_decimal dec_2 = {{0x2797f71, 0x0, 0x0, 0x80040000}};
    // 4184586.3087
    s21_decimal dec_check = {{0xbe3532af, 0x9, 0x0, 0x40000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_3) {
    // -8547905980698209
    s21_decimal dec_1 = {{0x738d8e61, 0x1e5e46, 0x0, 0x80000000}};
    // 706634404536646697
    s21_decimal dec_2 = {{0x3c79fc29, 0x9ce783f, 0x0, 0x0}};
    // 698086498555948488
    s21_decimal dec_check = {{0xc8ec6dc8, 0x9b019f8, 0x0, 0x0}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_4) {
    // -7002
    s21_decimal dec_1 = {{0x1b5a, 0x0, 0x0, 0x80000000}};
    // -19.8359672348311125258872003
    s21_decimal dec_2 = {{0x9b3f24c3, 0x627a3afc, 0xa4144b, 0x80190000}};
    // -7021.8359672348311125258872003
    s21_decimal dec_check = {{0x9f3f24c3, 0x41a54e34, 0xe2e34409, 0x80190000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_5) {
    // -28393233850820235634
    s21_decimal dec_1 = {{0xe6bc9172, 0x8a0907c0, 0x1, 0x80000000}};
    // -7.8
    s21_decimal dec_2 = {{0x4e, 0x0, 0x0, 0x80010000}};
    // -28393233850820235641.8
    s21_decimal dec_check = {{0x35daec2, 0x645a4d89, 0xf, 0x80010000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_6) {
    // -331846883540011
    s21_decimal dec_1 = {{0x1f9cfc2b, 0x12dd0, 0x0, 0x80000000}};
    // -7672329789445738
    s21_decimal dec_2 = {{0x7bb3166a, 0x1b41f1, 0x0, 0x80000000}};
    // -8004176672985749
    s21_decimal dec_check = {{0x9b501295, 0x1c6fc1, 0x0, 0x80000000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_7) {
    // 367.07
    s21_decimal dec_1 = {{0x8f63, 0x0, 0x0, 0x20000}};
    // 9807.1
    s21_decimal dec_2 = {{0x17f17, 0x0, 0x0, 0x10000}};
    // 10174.17
    s21_decimal dec_check = {{0xf8649, 0x0, 0x0, 0x20000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_8) {
    // -0.204195874760776
    s21_decimal dec_1 = {{0xe946848, 0xb9b7, 0x0, 0x800f0000}};
    // 3.45527222749
    s21_decimal dec_2 = {{0x730701dd, 0x50, 0x0, 0xb0000}};
    // 3.251076352729224
    s21_decimal dec_check = {{0x33246088, 0xb8cd6, 0x0, 0xf0000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_9) {
    // -696.57411504
    s21_decimal dec_1 = {{0x37e7bfb0, 0x10, 0x0, 0x80080000}};
    // -19333165.4708961627951
    s21_decimal dec_2 = {{0x8e224f2f, 0x7b0403a4, 0xa, 0x800d0000}};
    // -19333862.0450112027951
    s21_decimal dec_check = {{0x8d003d2f, 0x7b1cc2f2, 0xa, 0x800d0000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_10) {
    // -7903329989
    s21_decimal dec_1 = {{0xd7133ec5, 0x1, 0x0, 0x80000000}};
    // -15058345936
    s21_decimal dec_2 = {{0x818c1fd0, 0x3, 0x0, 0x80000000}};
    // -22961675925
    s21_decimal dec_check = {{0x589f5e95, 0x5, 0x0, 0x80000000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(fail_s21_add_1) {
    // 80975323090365597028798
    s21_decimal dec_1 = {{0xdf9f11be, 0xae59fd09, 0x1125, 0x0}};
    // 954447.094227645562128026
    s21_decimal dec_2 = {{0x459c869a, 0xae3f5a9c, 0xca1c, 0x120000}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_2) {
    // -1642.71294200540909286385340
    s21_decimal dec_1 = {{0x92ae6bc, 0xb3d485e9, 0x87e1cc, 0x80170000}};
    // 950323367106714632167945.48655
    s21_decimal dec_2 = {{0x9e1fb9af, 0xe7798281, 0x3310e80f, 0x50000}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_3) {
    // 71.175599432552900868932
    s21_decimal dec_1 = {{0x4a323b44, 0x6fddb36b, 0xf12, 0x150000}};
    // 967186964650.569
    s21_decimal dec_2 = {{0xc3759a49, 0x36fa6, 0x0, 0x30000}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

Suite *s21_add_cases(void) {
    Suite *c = suite_create("s21_add_cases");
    TCase *tc = tcase_create("s21_add_tc");
//
//    tcase_add_test(tc, invalid_dec_s21_add_1);
//    tcase_add_test(tc, invalid_dec_s21_add_2);
//    tcase_add_test(tc, invalid_dec_s21_add_3);
//    tcase_add_test(tc, invalid_dec_s21_add_4);
//    tcase_add_test(tc, invalid_dec_s21_add_5);
//    tcase_add_test(tc, invalid_dec_s21_add_6);
//    tcase_add_test(tc, invalid_dec_s21_add_7);
//    tcase_add_test(tc, invalid_dec_s21_add_8);
//    tcase_add_test(tc, invalid_dec_s21_add_9);
//    tcase_add_test(tc, invalid_dec_s21_add_10);
//    tcase_add_test(tc, invalid_dec_s21_add_11);
//    tcase_add_test(tc, invalid_dec_s21_add_12);
//    tcase_add_test(tc, invalid_dec_s21_add_13);
//    tcase_add_test(tc, invalid_dec_s21_add_14);
//    tcase_add_test(tc, invalid_dec_s21_add_15);
//    tcase_add_test(tc, invalid_dec_s21_add_16);
    tcase_add_test(tc, s21_add_1);
    tcase_add_test(tc, s21_add_2);
    tcase_add_test(tc, s21_add_3);
    tcase_add_test(tc, s21_add_4);
    tcase_add_test(tc, s21_add_5);
    tcase_add_test(tc, s21_add_6);
    tcase_add_test(tc, s21_add_7);
    tcase_add_test(tc, s21_add_8);
    tcase_add_test(tc, s21_add_9);
    tcase_add_test(tc, s21_add_10);
    tcase_add_test(tc, fail_s21_add_1);
    tcase_add_test(tc, fail_s21_add_2);
    tcase_add_test(tc, fail_s21_add_3);

    suite_add_tcase(c, tc);
    return c;
}
