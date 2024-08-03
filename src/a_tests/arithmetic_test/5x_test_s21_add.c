#include <check.h>

#include "../test.h"
// START_TEST(invalid_dec_s21_add_1) {
//     // ссылка на результат - NULL
//     s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x0}};
//     s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x0}};
//     int result_value = s21_add(dec_1, dec_2, NULL);
//
//     ck_assert_int_eq(result_value, 1);
// }
//
// START_TEST(invalid_dec_s21_add_2) {
//     // степень 56 (допустимое значение от 0 до 28)
//     // биты 0-15 не пустые
//     // биты 24-30 не пустые
//     s21_decimal dec_1 = {{0x0, 0x0, 0x0, 0x380000}};
//     s21_decimal dec_2 = {{0xFFFFFFFF, 0x0, 0xFFFFFFFF, 0x0}};
//     s21_decimal result;
//     int result_value = s21_add(dec_1, dec_2, &result);
//
//     ck_assert_int_eq(result_value, 1);
// }
// END_TEST
//
// START_TEST(invalid_dec_s21_add_3) {
//     // степень 29 (допустимое значение от 0 до 28)
//     s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x1D0000}};
//     s21_decimal dec_2 = {{0xFFFFFFFF, 0x0, 0xFFFFFFFF, 0x0}};
//     s21_decimal result;
//     int result_value = s21_add(dec_1, dec_2, &result);
//
//     ck_assert_int_eq(result_value, 1);
// }
// END_TEST
//
// START_TEST(invalid_dec_s21_add_4) {
//     // степень 28
//     // биты 0-15 не пустые
//     s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x1C0001}};
//     s21_decimal dec_2 = {{0xFFFFFFFF, 0x0, 0xFFFFFFFF, 0x140000}};
//     s21_decimal result;
//     int result_value = s21_add(dec_1, dec_2, &result);
//
//     ck_assert_int_eq(result_value, 1);
// }
// END_TEST
//
// START_TEST(invalid_dec_s21_add_5) {
//     // степень 28
//     // биты 0-15 не пустые
//     s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x1C8000}};
//     s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0x0, 0x140000}};
//     s21_decimal result;
//     int result_value = s21_add(dec_1, dec_2, &result);
//
//     ck_assert_int_eq(result_value, 1);
// }
// END_TEST
//
// START_TEST(invalid_dec_s21_add_6) {
//     // степень 28
//     // биты 24-30 не пустые
//     s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x11C0000}};
//     s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x140000}};
//     s21_decimal result;
//     int result_value = s21_add(dec_1, dec_2, &result);
//
//     ck_assert_int_eq(result_value, 1);
// }
// END_TEST
//
// START_TEST(invalid_dec_s21_add_7) {
//     // степень 28
//     // биты 24-30 не пустые
//     s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x401C0000}};
//     s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x140000}};
//     s21_decimal result;
//     int result_value = s21_add(dec_1, dec_2, &result);
//
//     ck_assert_int_eq(result_value, 1);
// }
// END_TEST
//
// START_TEST(invalid_dec_s21_add_8) {
//     // Все биты имеют максимальное значение
//     s21_decimal dec_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF}};
//     s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
//     s21_decimal result;
//     int result_value = s21_add(dec_1, dec_2, &result);
//
//     ck_assert_int_eq(result_value, 1);
// }
// END_TEST
//
// START_TEST(invalid_dec_s21_add_9) {
//     // степень 56 (допустимое значение от 0 до 28)
//     // биты 0-15 не пустые
//     // биты 24-30 не пустые
//     s21_decimal dec_2 = {{0xA, 0x0, 0x0, 0x380000}};
//     s21_decimal dec_1 = {{0xFFFFFFFF, 0x0, 0xFFFFFFFF, 0x140000}};
//     s21_decimal result;
//     int result_value = s21_add(dec_1, dec_2, &result);
//
//     ck_assert_int_eq(result_value, 1);
// }
// END_TEST
//
// START_TEST(invalid_dec_s21_add_10) {
//     // степень 29 (допустимое значение от 0 до 28)
//     s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x1D0000}};
//     s21_decimal dec_1 = {{0xFFFFFFFF, 0x0, 0xFFFFFFFF, 0x0}};
//     s21_decimal result;
//     int result_value = s21_add(dec_1, dec_2, &result);
//
//     ck_assert_int_eq(result_value, 1);
// }
// END_TEST
//
// START_TEST(invalid_dec_s21_add_11) {
//     // степень 29 (допустимое значение от 0 до 28)
//     s21_decimal dec_2 = {{0xA, 0x0, 0x0, 0x1D0000}};
//     s21_decimal dec_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x20000}};
//     s21_decimal result;
//     int result_value = s21_add(dec_1, dec_2, &result);
//
//     ck_assert_int_eq(result_value, 1);
// }
// END_TEST
//
// START_TEST(invalid_dec_s21_add_12) {
//     // степень 28
//     // биты 0-15 не пустые
//     s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x1C0001}};
//     s21_decimal dec_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x20000}};
//     s21_decimal result;
//     int result_value = s21_add(dec_1, dec_2, &result);
//
//     ck_assert_int_eq(result_value, 1);
// }
// END_TEST
//
// START_TEST(invalid_dec_s21_add_13) {
//     // степень 28
//     // биты 0-15 не пустые
//     s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x1C8000}};
//     s21_decimal dec_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
//     s21_decimal result;
//     int result_value = s21_add(dec_1, dec_2, &result);
//
//     ck_assert_int_eq(result_value, 1);
// }
// END_TEST
//
// START_TEST(invalid_dec_s21_add_14) {
//     // степень 28
//     // биты 24-30 не пустые
//     s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x11C0000}};
//     s21_decimal dec_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
//     s21_decimal result;
//     int result_value = s21_add(dec_1, dec_2, &result);
//
//     ck_assert_int_eq(result_value, 1);
// }
// END_TEST
//
// START_TEST(invalid_dec_s21_add_15) {
//     // степень 28
//     // биты 24-30 не пустые
//     s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x401C0000}};
//     s21_decimal dec_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x140000}};
//     s21_decimal result;
//     int result_value = s21_add(dec_1, dec_2, &result);
//
//     ck_assert_int_eq(result_value, 1);
// }
// END_TEST
//
// START_TEST(invalid_dec_s21_add_16) {
//     // Все биты имеют максимальное значение
//     s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF}};
//     s21_decimal dec_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x140000}};
//     s21_decimal result;
//     int result_value = s21_add(dec_1, dec_2, &result);
//
//     ck_assert_int_eq(result_value, 1);
// }
// END_TEST

START_TEST(s21_add_1) {
    // 83790488807169464710
    s21_decimal dec_1 = {{0xbae1986, 0x8ad39da1, 0x4, 0x0}};
    // 7862
    s21_decimal dec_2 = {{0x1eb6, 0x0, 0x0, 0x0}};
    // 83790488807169472572
    s21_decimal dec_check = {{0xbae383c, 0x8ad39da1, 0x4, 0x0}};
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
    // -0.5925426596
    s21_decimal dec_1 = {{0x612ed5a4, 0x1, 0x0, 0x800a0000}};
    // 185173.933778
    s21_decimal dec_2 = {{0x1d39fed2, 0x2b, 0x0, 0x60000}};
    // 185173.3412353404
    s21_decimal dec_check = {{0x4843157c, 0x69424, 0x0, 0xa0000}};
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
    // 61953400540630041175966.3717
    s21_decimal dec_1 = {{0x54bb9a65, 0xbac106e7, 0x200776d, 0x40000}};
    // 2145775567390.57
    s21_decimal dec_2 = {{0x3b0bd3f1, 0xc328, 0x0, 0x20000}};
    // 61953400542775816743356.9417
    s21_decimal dec_check = {{0x655a6489, 0xbb0d429e, 0x200776d, 0x40000}};
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
    // 5535970915686
    s21_decimal dec_1 = {{0xf1947566, 0x508, 0x0, 0x0}};
    // -7244637904128823577859009149
    s21_decimal dec_2 = {{0x663b2a7d, 0xb9f31046, 0x17689fbf, 0x80000000}};
    // -7244637904128818041888093463
    s21_decimal dec_check = {{0x74a6b517, 0xb9f30b3d, 0x17689fbf, 0x80000000}};
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
    // -14803841907695.81706623584671
    s21_decimal dec_1 = {{0xd28099f, 0xc98b1a6b, 0x4c88b8b, 0x800e0000}};
    // -48563
    s21_decimal dec_2 = {{0xbdb3, 0x0, 0x0, 0x80000000}};
    // -14803841956258.81706623584671
    s21_decimal dec_check = {{0xd3e2c99f, 0xcf02589, 0x4c88b8c, 0x800e0000}};
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
    // 812301742617291873.9422232
    s21_decimal dec_1 = {{0x16decc18, 0xa8331970, 0x6b81d, 0x70000}};
    // -0.685680465112757207
    s21_decimal dec_2 = {{0x87873d7, 0x98406c0, 0x0, 0x80120000}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

Suite *s21_add_suite5(void) {
    Suite *c = suite_create("s21_add_suite5");
    TCase *tc = tcase_create("s21_add_tc");

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
    tcase_add_test(tc, fail_s21_add_1);

    suite_add_tcase(c, tc);
    return c;
}
