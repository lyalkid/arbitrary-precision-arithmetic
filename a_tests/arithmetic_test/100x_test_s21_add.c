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
    // -8.70203
    s21_decimal dec_1 = {{0xd473b, 0x0, 0x0, 0x80050000}};
    // 61224837321978727893
    s21_decimal dec_2 = {{0x479ecdd5, 0x51aa5129, 0x3, 0x0}};
    // 61224837321978727884.29797
    s21_decimal dec_check = {{0xb0c5dbe5, 0x82179ce8, 0x5107c, 0x50000}};
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
    // 90001525607089.27220
    s21_decimal dec_1 = {{0xb160bef4, 0x7ce6f711, 0x0, 0x50000}};
    // -6789.472
    s21_decimal dec_2 = {{0x679960, 0x0, 0x0, 0x80030000}};
    // 90001525600299.80020
    s21_decimal dec_check = {{0x88e8d574, 0x7ce6f711, 0x0, 0x50000}};
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
    // 385956
    s21_decimal dec_1 = {{0x5e3a4, 0x0, 0x0, 0x0}};
    // 34480843979063904.90737068234
    s21_decimal dec_2 = {{0x76c0c8ca, 0xc1949f71, 0xb243045, 0xb0000}};
    // 34480843979449860.90737068234
    s21_decimal dec_check = {{0xdaa568ca, 0xc21dbdef, 0xb243045, 0xb0000}};
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
    // -583599131.97
    s21_decimal dec_1 = {{0x96859aed, 0xd, 0x0, 0x80020000}};
    // -5147506034979
    s21_decimal dec_2 = {{0x7f44c923, 0x4ae, 0x0, 0x80000000}};
    // -5148089634110.97
    s21_decimal dec_check = {{0x4d642c99, 0x1d437, 0x0, 0x80020000}};
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
    // -44356874413
    s21_decimal dec_1 = {{0x53e030ad, 0xa, 0x0, 0x80000000}};
    // -577
    s21_decimal dec_2 = {{0x241, 0x0, 0x0, 0x80000000}};
    // -44356874990
    s21_decimal dec_check = {{0x53e032ee, 0xa, 0x0, 0x80000000}};
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
    // 3348970480502254873175
    s21_decimal dec_1 = {{0x26282a57, 0x8c4d3c69, 0xb5, 0x0}};
    // 5579326778590538420938722
    s21_decimal dec_2 = {{0x64767e2, 0xe924cbea, 0x49d77, 0x0}};
    // 5582675749071040675811897
    s21_decimal dec_check = {{0x2c6f9239, 0x75720853, 0x49e2d, 0x0}};
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
    // 5375853930731601160
    s21_decimal dec_1 = {{0xe1a4fd08, 0x4a9adeaa, 0x0, 0x0}};
    // 456907313289
    s21_decimal dec_2 = {{0x61cc5089, 0x6a, 0x0, 0x0}};
    // 5375854387638914449
    s21_decimal dec_check = {{0x43714d91, 0x4a9adf15, 0x0, 0x0}};
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
    // 0.30
    s21_decimal dec_1 = {{0x1e, 0x0, 0x0, 0x20000}};
    // 3060.341
    s21_decimal dec_2 = {{0x2eb275, 0x0, 0x0, 0x30000}};
    // 3060.641
    s21_decimal dec_check = {{0x2eb3a1, 0x0, 0x0, 0x30000}};
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
    // -7826301535366612864712793163
    s21_decimal dec_1 = {{0xa9675c4b, 0x5bca53f2, 0x1949c3d0, 0x80000000}};
    // 0.73714
    s21_decimal dec_2 = {{0x11ff2, 0x0, 0x0, 0x50000}};
    // -7826301535366612864712793162.3
    s21_decimal dec_check = {{0x9e099ae7, 0x95e7477a, 0xfce1a623, 0x80010000}};
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
    // -0.48327072033
    s21_decimal dec_1 = {{0x40849921, 0xb, 0x0, 0x800b0000}};
    // -368
    s21_decimal dec_2 = {{0x170, 0x0, 0x0, 0x80000000}};
    // -368.48327072033
    s21_decimal dec_check = {{0x6b721921, 0x2183, 0x0, 0x800b0000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_11) {
    // 8929926568.73463
    s21_decimal dec_1 = {{0xe1997f7, 0x32c2c, 0x0, 0x50000}};
    // 49.505
    s21_decimal dec_2 = {{0xc161, 0x0, 0x0, 0x30000}};
    // 8929926618.23963
    s21_decimal dec_check = {{0xe6521db, 0x32c2c, 0x0, 0x50000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_12) {
    // 7061435.24742565026
    s21_decimal dec_1 = {{0x60b90ca2, 0x9ccb9cb, 0x0, 0xb0000}};
    // 5735612407
    s21_decimal dec_2 = {{0x55de7ff7, 0x1, 0x0, 0x0}};
    // 5742673842.24742565026
    s21_decimal dec_check = {{0x788ae4a2, 0x218f975a, 0x1f, 0xb0000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_13) {
    // -5793096747860827213866994
    s21_decimal dec_1 = {{0x4ba327f2, 0x676abd67, 0x4cabc, 0x80000000}};
    // -3050.1
    s21_decimal dec_2 = {{0x7725, 0x0, 0x0, 0x80010000}};
    // -5793096747860827213870044.1
    s21_decimal dec_check = {{0xf4600699, 0xa2b6608, 0x2feb5c, 0x80010000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_14) {
    // -49
    s21_decimal dec_1 = {{0x31, 0x0, 0x0, 0x80000000}};
    // -6644571442674253562341
    s21_decimal dec_2 = {{0xf7b201e5, 0x33f3daa9, 0x168, 0x80000000}};
    // -6644571442674253562390
    s21_decimal dec_check = {{0xf7b20216, 0x33f3daa9, 0x168, 0x80000000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_15) {
    // -326440.359
    s21_decimal dec_1 = {{0x137515a7, 0x0, 0x0, 0x80030000}};
    // 3129616163751.316669
    s21_decimal dec_2 = {{0xcbb7ccbd, 0x2b6ea151, 0x0, 0x60000}};
    // 3129615837310.957669
    s21_decimal dec_check = {{0xca5b3865, 0x2b6ea105, 0x0, 0x60000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_16) {
    // -7
    s21_decimal dec_1 = {{0x7, 0x0, 0x0, 0x80000000}};
    // 4552205570166051891729367.2
    s21_decimal dec_2 = {{0x74b74668, 0x959a685c, 0x25a7ab, 0x10000}};
    // 4552205570166051891729360.2
    s21_decimal dec_check = {{0x74b74622, 0x959a685c, 0x25a7ab, 0x10000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_17) {
    // -37126564113361
    s21_decimal dec_1 = {{0x33aa6bd1, 0x21c4, 0x0, 0x80000000}};
    // 45.67656
    s21_decimal dec_2 = {{0x45b268, 0x0, 0x0, 0x50000}};
    // -37126564113315.32344
    s21_decimal dec_check = {{0xea7e1638, 0x33860155, 0x0, 0x80050000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_18) {
    // 88561496246542082712616784
    s21_decimal dec_1 = {{0x54a53f50, 0x54da2118, 0x4941a0, 0x0}};
    // -4760397
    s21_decimal dec_2 = {{0x48a34d, 0x0, 0x0, 0x80000000}};
    // 88561496246542082707856387
    s21_decimal dec_check = {{0x545c9c03, 0x54da2118, 0x4941a0, 0x0}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_19) {
    // -252.35721040217881
    s21_decimal dec_1 = {{0x2c40c719, 0x59a7c1, 0x0, 0x800e0000}};
    // -887474108175774567836070797
    s21_decimal dec_2 = {{0x6ddab38d, 0xce31598b, 0x2de19f3, 0x80000000}};
    // -887474108175774567836071049.36
    s21_decimal dec_check = {{0xe96e85a8, 0x8b46fa76, 0x1ec2233c, 0x80020000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_20) {
    // 7551880179093448881.7
    s21_decimal dec_1 = {{0xf3c896f1, 0x1808ae1c, 0x4, 0x10000}};
    // 613547927034120
    s21_decimal dec_2 = {{0xc23e5908, 0x22e04, 0x0, 0x0}};
    // 7552493727020483001.7
    s21_decimal dec_check = {{0x8a381141, 0x181e7a4c, 0x4, 0x10000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_21) {
    // -751311858534
    s21_decimal dec_1 = {{0xedad2b66, 0xae, 0x0, 0x80000000}};
    // 89362451100443637173
    s21_decimal dec_2 = {{0x342875b5, 0xd82733d0, 0x4, 0x0}};
    // 89362450349131778639
    s21_decimal dec_check = {{0x467b4a4f, 0xd8273321, 0x4, 0x0}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_22) {
    // 7253002518221254495.336605488
    s21_decimal dec_1 = {{0x76172730, 0x5d6b215d, 0x176f8b06, 0x90000}};
    // 14779922
    s21_decimal dec_2 = {{0xe18612, 0x0, 0x0, 0x0}};
    // 7253002518236034417.336605488
    s21_decimal dec_check = {{0x36b55b30, 0x5d9fa3a0, 0x176f8b06, 0x90000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_23) {
    // -8445344.614816214
    s21_decimal dec_1 = {{0x5c599d6, 0x1e00ff, 0x0, 0x80090000}};
    // -9995089981351636515
    s21_decimal dec_2 = {{0xbc87ae23, 0x8ab5b161, 0x0, 0x80000000}};
    // -9995089981360081859.614816214
    s21_decimal dec_check = {{0xe73b37d6, 0x9953ce82, 0x204bbea1, 0x80090000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_24) {
    // 0.3
    s21_decimal dec_1 = {{0x3, 0x0, 0x0, 0x10000}};
    // 278720445670
    s21_decimal dec_2 = {{0xe5087ce6, 0x40, 0x0, 0x0}};
    // 278720445670.3
    s21_decimal dec_check = {{0xf254e0ff, 0x288, 0x0, 0x10000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_25) {
    // -1993.36
    s21_decimal dec_1 = {{0x30aa8, 0x0, 0x0, 0x80020000}};
    // -93484576020636
    s21_decimal dec_2 = {{0x12f2189c, 0x5506, 0x0, 0x80000000}};
    // -93484576022629.36
    s21_decimal dec_check = {{0x6694a798, 0x21365f, 0x0, 0x80020000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_26) {
    // -308
    s21_decimal dec_1 = {{0x134, 0x0, 0x0, 0x80000000}};
    // -41926743488364503556794303
    s21_decimal dec_2 = {{0x9665a7bf, 0x519aac22, 0x22ae55, 0x80000000}};
    // -41926743488364503556794611
    s21_decimal dec_check = {{0x9665a8f3, 0x519aac22, 0x22ae55, 0x80000000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_27) {
    // -42129708480
    s21_decimal dec_1 = {{0xcf2055c0, 0x9, 0x0, 0x80000000}};
    // -6668992019
    s21_decimal dec_2 = {{0x8d80be13, 0x1, 0x0, 0x80000000}};
    // -48798700499
    s21_decimal dec_check = {{0x5ca113d3, 0xb, 0x0, 0x80000000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_28) {
    // -15772.814846
    s21_decimal dec_1 = {{0xac220dfe, 0x3, 0x0, 0x80060000}};
    // -3
    s21_decimal dec_2 = {{0x3, 0x0, 0x0, 0x80000000}};
    // -15775.814846
    s21_decimal dec_check = {{0xac4fd4be, 0x3, 0x0, 0x80060000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_29) {
    // 43575
    s21_decimal dec_1 = {{0xaa37, 0x0, 0x0, 0x0}};
    // 84404
    s21_decimal dec_2 = {{0x149b4, 0x0, 0x0, 0x0}};
    // 127979
    s21_decimal dec_check = {{0x1f3eb, 0x0, 0x0, 0x0}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_30) {
    // 6070263.46
    s21_decimal dec_1 = {{0x242e7caa, 0x0, 0x0, 0x20000}};
    // 442573636
    s21_decimal dec_2 = {{0x1a612344, 0x0, 0x0, 0x0}};
    // 448643899.46
    s21_decimal dec_check = {{0x7220433a, 0xa, 0x0, 0x20000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_31) {
    // -10132
    s21_decimal dec_1 = {{0x2794, 0x0, 0x0, 0x80000000}};
    // 54584936643.22437578079
    s21_decimal dec_2 = {{0xc334fd5f, 0xe7d11b5c, 0x127, 0xb0000}};
    // 54584926511.22437578079
    s21_decimal dec_check = {{0xc11edd5f, 0xe7cd81dc, 0x127, 0xb0000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_32) {
    // -305070494533761696
    s21_decimal dec_1 = {{0x9a233aa0, 0x43bd3ff, 0x0, 0x80000000}};
    // -0.333
    s21_decimal dec_2 = {{0x14d, 0x0, 0x0, 0x80030000}};
    // -305070494533761696.333
    s21_decimal dec_check = {{0x199d024d, 0x89b41e72, 0x10, 0x80030000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_33) {
    // -3.5530
    s21_decimal dec_1 = {{0x8aca, 0x0, 0x0, 0x80040000}};
    // -333868914230.258788
    s21_decimal dec_2 = {{0x323d6c64, 0x4a22402, 0x0, 0x80060000}};
    // -333868914233.811788
    s21_decimal dec_check = {{0x3273a34c, 0x4a22402, 0x0, 0x80060000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_34) {
    // -470468062859350614.448
    s21_decimal dec_1 = {{0x21bda1b0, 0x810e5286, 0x19, 0x80030000}};
    // 0.188
    s21_decimal dec_2 = {{0xbc, 0x0, 0x0, 0x30000}};
    // -470468062859350614.260
    s21_decimal dec_check = {{0x21bda0f4, 0x810e5286, 0x19, 0x80030000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_35) {
    // 7.778533722033
    s21_decimal dec_1 = {{0x14bd47b1, 0x713, 0x0, 0xc0000}};
    // -0.28423116
    s21_decimal dec_2 = {{0x1b1b3cc, 0x0, 0x0, 0x80080000}};
    // 7.494302562033
    s21_decimal dec_check = {{0xe73df6f1, 0x6d0, 0x0, 0xc0000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_36) {
    // -58211.198309015028
    s21_decimal dec_1 = {{0xc5289df4, 0xcecec6, 0x0, 0x800c0000}};
    // -74.59
    s21_decimal dec_2 = {{0x1d23, 0x0, 0x0, 0x80020000}};
    // -58285.788309015028
    s21_decimal dec_check = {{0x9b9cc9f4, 0xcf129d, 0x0, 0x800c0000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_37) {
    // 41814.4387791116371
    s21_decimal dec_1 = {{0xf31cd853, 0x5cd8c1a, 0x0, 0xd0000}};
    // -43.27442454
    s21_decimal dec_2 = {{0x1ef8816, 0x1, 0x0, 0x80080000}};
    // 41771.1643545716371
    s21_decimal dec_check = {{0xd4164693, 0x5cc0286, 0x0, 0xd0000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_38) {
    // 556
    s21_decimal dec_1 = {{0x22c, 0x0, 0x0, 0x0}};
    // -261811165949075
    s21_decimal dec_2 = {{0xa98b6c93, 0xee1d, 0x0, 0x80000000}};
    // -261811165948519
    s21_decimal dec_check = {{0xa98b6a67, 0xee1d, 0x0, 0x80000000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_39) {
    // -0.1335
    s21_decimal dec_1 = {{0x537, 0x0, 0x0, 0x80040000}};
    // 2
    s21_decimal dec_2 = {{0x2, 0x0, 0x0, 0x0}};
    // 1.8665
    s21_decimal dec_check = {{0x48e9, 0x0, 0x0, 0x40000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_40) {
    // 1453163333148522743
    s21_decimal dec_1 = {{0x30f0b8f7, 0x142aac5a, 0x0, 0x0}};
    // -498208261357448936214921714.84
    s21_decimal dec_2 = {{0xa7ac2dc, 0x91e262cb, 0xa0fad24c, 0x80020000}};
    // -498208259904285603066398971.84
    s21_decimal dec_check = {{0xec728260, 0xb1370f8f, 0xa0fad244, 0x80020000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_41) {
    // 88568317.00290
    s21_decimal dec_1 = {{0x244ead42, 0x80e, 0x0, 0x50000}};
    // 18320579601701510175033393385
    s21_decimal dec_2 = {{0xa2d400e9, 0x44966365, 0x3b326da2, 0x0}};
    // 18320579601701510175121961702
    s21_decimal dec_check = {{0xa81b72e6, 0x44966365, 0x3b326da2, 0x0}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_42) {
    // 7249284819344504373731948
    s21_decimal dec_1 = {{0xf76d626c, 0x847b34be, 0x5ff18, 0x0}};
    // -42368077
    s21_decimal dec_2 = {{0x2867c4d, 0x0, 0x0, 0x80000000}};
    // 7249284819344504331363871
    s21_decimal dec_check = {{0xf4e6e61f, 0x847b34be, 0x5ff18, 0x0}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_43) {
    // -639759089547
    s21_decimal dec_1 = {{0xf49cff8b, 0x94, 0x0, 0x80000000}};
    // 42591
    s21_decimal dec_2 = {{0xa65f, 0x0, 0x0, 0x0}};
    // -639759046956
    s21_decimal dec_check = {{0xf49c592c, 0x94, 0x0, 0x80000000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_44) {
    // -9217879578228124660.9
    s21_decimal dec_1 = {{0x3a263791, 0xff3cde61, 0x4, 0x80010000}};
    // 654405266
    s21_decimal dec_2 = {{0x27016e92, 0x0, 0x0, 0x0}};
    // -9217879577573719394.9
    s21_decimal dec_check = {{0xb417e5dd, 0xff3cde5f, 0x4, 0x80010000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_45) {
    // 455.0261306615
    s21_decimal dec_1 = {{0x70b574f7, 0x423, 0x0, 0xa0000}};
    // -676.14
    s21_decimal dec_2 = {{0x1081e, 0x0, 0x0, 0x80020000}};
    // -221.1138693385
    s21_decimal dec_check = {{0xd222e909, 0x202, 0x0, 0x800a0000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_46) {
    // 7.37
    s21_decimal dec_1 = {{0x2e1, 0x0, 0x0, 0x20000}};
    // 97729.862227509840521
    s21_decimal dec_2 = {{0xa2970a89, 0x4c4637e6, 0x5, 0xf0000}};
    // 97737.232227509840521
    s21_decimal dec_check = {{0x7a95aa89, 0x4c6066e0, 0x5, 0xf0000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_47) {
    // -9283942478175326364452
    s21_decimal dec_1 = {{0x100ee324, 0x48956f77, 0x1f7, 0x80000000}};
    // -45792698250724119721250738
    s21_decimal dec_2 = {{0x9f438fb2, 0x25788806, 0x25e0fb, 0x80000000}};
    // -45801982193202295047615190
    s21_decimal dec_check = {{0xaf5272d6, 0x6e0df77d, 0x25e2f2, 0x80000000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_48) {
    // 63774999352583
    s21_decimal dec_1 = {{0xc62e9507, 0x3a00, 0x0, 0x0}};
    // -31551430751556992281946465
    s21_decimal dec_2 = {{0x14c52961, 0x7d00c886, 0x1a1946, 0x80000000}};
    // -31551430751493217282593882
    s21_decimal dec_check = {{0x4e96945a, 0x7d008e85, 0x1a1946, 0x80000000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_49) {
    // -228.3331342748063511318367
    s21_decimal dec_1 = {{0x8378f5f, 0xa3de9d6e, 0x1e383, 0x80160000}};
    // 61813438425674613
    s21_decimal dec_2 = {{0xa7b53375, 0xdb9afe, 0x0, 0x0}};
    // 61813438425674384.666865725194
    s21_decimal dec_check = {{0x6e446f0a, 0x7ee9e33f, 0xc7bae0bb, 0xc0000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_50) {
    // -0.2538044101293631630308525933
    s21_decimal dec_1 = {{0xf34fc76d, 0x6ca0cf2a, 0x8336bbe, 0x801c0000}};
    // 3195.548486139
    s21_decimal dec_2 = {{0x58849fb, 0x2e8, 0x0, 0x90000}};
    // 3195.2946817288706368369691474
    s21_decimal dec_check = {{0x44758b52, 0xd4b68482, 0x673edbad, 0x190000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_51) {
    // 87522
    s21_decimal dec_1 = {{0x155e2, 0x0, 0x0, 0x0}};
    // -95752
    s21_decimal dec_2 = {{0x17608, 0x0, 0x0, 0x80000000}};
    // -8230
    s21_decimal dec_check = {{0x2026, 0x0, 0x0, 0x80000000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_52) {
    // -9359853111
    s21_decimal dec_1 = {{0x2de40637, 0x2, 0x0, 0x80000000}};
    // 97323798889.1341562
    s21_decimal dec_2 = {{0x61c8b2fa, 0xd81a2cb, 0x0, 0x70000}};
    // 87963945778.1341562
    s21_decimal dec_check = {{0x23795d7a, 0xc351b6d, 0x0, 0x70000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_53) {
    // 4170064782183402
    s21_decimal dec_1 = {{0xde084bea, 0xed0a6, 0x0, 0x0}};
    // 736058844615050058
    s21_decimal dec_2 = {{0x8f10834a, 0xa37019e, 0x0, 0x0}};
    // 740228909397233460
    s21_decimal dec_check = {{0x6d18cf34, 0xa45d245, 0x0, 0x0}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_54) {
    // 396722382724937985872379
    s21_decimal dec_1 = {{0x1edcd1fb, 0x5d0bcb10, 0x5402, 0x0}};
    // 60167226351932.4160903
    s21_decimal dec_2 = {{0xe2894387, 0x9de147df, 0x20, 0x70000}};
    // 396722382785105212224311.41609
    s21_decimal dec_check = {{0x88a66ee9, 0x72392a73, 0x80301b3a, 0x50000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_55) {
    // 52.096583811
    s21_decimal dec_1 = {{0x2132c883, 0xc, 0x0, 0x90000}};
    // 45206917316128724572478.700438
    s21_decimal dec_2 = {{0x7904fb96, 0x46a5bfc6, 0x9212491a, 0x60000}};
    // 45206917316128724572530.797022
    s21_decimal dec_check = {{0x7c1fe9de, 0x46a5bfc6, 0x9212491a, 0x60000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_56) {
    // 872527529660447
    s21_decimal dec_1 = {{0x2576501f, 0x3198f, 0x0, 0x0}};
    // -3474065131
    s21_decimal dec_2 = {{0xcf1206eb, 0x0, 0x0, 0x80000000}};
    // 872524055595316
    s21_decimal dec_check = {{0x56644934, 0x3198e, 0x0, 0x0}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_57) {
    // 4.831568401644986
    s21_decimal dec_1 = {{0x2e49bdba, 0x112a49, 0x0, 0xf0000}};
    // -59952.270738024052767664859
    s21_decimal dec_2 = {{0xc6612adb, 0x1be62109, 0x319763, 0x80150000}};
    // -59947.439169622407781664859
    s21_decimal dec_check = {{0x1321c85b, 0x306afa7d, 0x31965d, 0x80150000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_58) {
    // -2665838637336060361071.16052
    s21_decimal dec_1 = {{0x25bb3e14, 0x35e1def6, 0xdc8354, 0x80050000}};
    // -39.8557
    s21_decimal dec_2 = {{0x614dd, 0x0, 0x0, 0x80040000}};
    // -2665838637336060361111.01622
    s21_decimal dec_check = {{0x25f80eb6, 0x35e1def6, 0xdc8354, 0x80050000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_59) {
    // -9849560783369817837
    s21_decimal dec_1 = {{0xe6604eed, 0x88b0ab58, 0x0, 0x80000000}};
    // -371720373751801057
    s21_decimal dec_2 = {{0xe14064e1, 0x5289db5, 0x0, 0x80000000}};
    // -10221281157121618894
    s21_decimal dec_check = {{0xc7a0b3ce, 0x8dd9490e, 0x0, 0x80000000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_60) {
    // -6236388
    s21_decimal dec_1 = {{0x5f28e4, 0x0, 0x0, 0x80000000}};
    // 67320201219541885692341873
    s21_decimal dec_2 = {{0x6686ee71, 0x6bb444c4, 0x37af9b, 0x0}};
    // 67320201219541885686105485
    s21_decimal dec_check = {{0x6627c58d, 0x6bb444c4, 0x37af9b, 0x0}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_61) {
    // 37940581080.4089429
    s21_decimal dec_1 = {{0x22b26255, 0x543eb93, 0x0, 0x70000}};
    // 608396395858394
    s21_decimal dec_2 = {{0x530ec9da, 0x22955, 0x0, 0x0}};
    // 608434336439474.4089429
    s21_decimal dec_check = {{0x2dcd0b55, 0xd539e5af, 0x149, 0x70000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_62) {
    // 957180052
    s21_decimal dec_1 = {{0x390d6894, 0x0, 0x0, 0x0}};
    // 348970518272064692
    s21_decimal dec_2 = {{0x62b0bcb4, 0x4d7cad6, 0x0, 0x0}};
    // 348970519229244744
    s21_decimal dec_check = {{0x9bbe2548, 0x4d7cad6, 0x0, 0x0}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_63) {
    // -8885909164477497209
    s21_decimal dec_1 = {{0x3711bf79, 0x7b51174e, 0x0, 0x80000000}};
    // -6.58763
    s21_decimal dec_2 = {{0xa0d4b, 0x0, 0x0, 0x80050000}};
    // -8885909164477497215.58763
    s21_decimal dec_check = {{0x74d40eeb, 0x9c2fb8c7, 0xbc2a, 0x80050000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_64) {
    // -958544450906922625603
    s21_decimal dec_1 = {{0x80fb2a43, 0xf679fb83, 0x33, 0x80000000}};
    // -31536606.55498830
    s21_decimal dec_2 = {{0xd71cf64e, 0xb343c, 0x0, 0x80080000}};
    // -958544450906954162209.55498830
    s21_decimal dec_check = {{0x5860d94e, 0x7c7920cc, 0x35b8f048, 0x80080000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_65) {
    // 59936681152056472.914
    s21_decimal dec_1 = {{0x1c2d3552, 0x3fc9ddf3, 0x3, 0x30000}};
    // -360
    s21_decimal dec_2 = {{0x168, 0x0, 0x0, 0x80000000}};
    // 59936681152056112.914
    s21_decimal dec_check = {{0x1c27b712, 0x3fc9ddf3, 0x3, 0x30000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_66) {
    // 1051.26319
    s21_decimal dec_1 = {{0x64419af, 0x0, 0x0, 0x50000}};
    // 5760679.1123496017009762604
    s21_decimal dec_2 = {{0x2ec6e12c, 0x67803f61, 0x2fa6b6, 0x130000}};
    // 5761730.3755396017009762604
    s21_decimal dec_check = {{0x6298a12c, 0x4b93661e, 0x2fa8f0, 0x130000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_67) {
    // -0.7889353
    s21_decimal dec_1 = {{0x7861c9, 0x0, 0x0, 0x80070000}};
    // -5137280
    s21_decimal dec_2 = {{0x4e6380, 0x0, 0x0, 0x80000000}};
    // -5137280.7889353
    s21_decimal dec_check = {{0x29f721c9, 0x2eb9, 0x0, 0x80070000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_68) {
    // -54733885053174090382111
    s21_decimal dec_1 = {{0x70113b1f, 0x213e1f4f, 0xb97, 0x80000000}};
    // -63164394.913
    s21_decimal dec_2 = {{0xb4e42da1, 0xe, 0x0, 0x80030000}};
    // -54733885053174153546505.913
    s21_decimal dec_check = {{0x78331eb9, 0xdaaa4e5c, 0x2d4659, 0x80030000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_69) {
    // -345150276.583497
    s21_decimal dec_1 = {{0x8fa14049, 0x139e9, 0x0, 0x80060000}};
    // 6872899121774854484872
    s21_decimal dec_2 = {{0xf4653388, 0x94a2b912, 0x174, 0x0}};
    // 6872899121774509334595.416503
    s21_decimal dec_check = {{0xa5ecb1b7, 0xf4803fc3, 0x163520ff, 0x60000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_70) {
    // 1990958799.536
    s21_decimal dec_1 = {{0x8e645ab0, 0x1cf, 0x0, 0x30000}};
    // -648314498.956995
    s21_decimal dec_2 = {{0x7b69bec3, 0x24da3, 0x0, 0x80060000}};
    // 1342644300.579005
    s21_decimal dec_check = {{0xbc9880bd, 0x4c520, 0x0, 0x60000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_71) {
    // -9
    s21_decimal dec_1 = {{0x9, 0x0, 0x0, 0x80000000}};
    // -86779871339714395603519
    s21_decimal dec_2 = {{0xb249823f, 0x58a3f401, 0x1260, 0x80000000}};
    // -86779871339714395603528
    s21_decimal dec_check = {{0xb2498248, 0x58a3f401, 0x1260, 0x80000000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_72) {
    // 2035548
    s21_decimal dec_1 = {{0x1f0f5c, 0x0, 0x0, 0x0}};
    // 85688.94969507602457
    s21_decimal dec_2 = {{0x2721e019, 0x76ead493, 0x0, 0xe0000}};
    // 2121236.94969507602457
    s21_decimal dec_check = {{0xfcd0e019, 0x7fcec0b1, 0xb, 0xe0000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_73) {
    // -1557420022060017408
    s21_decimal dec_1 = {{0x2cf7e700, 0x159d1142, 0x0, 0x80000000}};
    // 72387.564876
    s21_decimal dec_2 = {{0xdaa2954c, 0x10, 0x0, 0x60000}};
    // -1557420022059945020.435124
    s21_decimal dec_check = {{0xd5e52ab4, 0xe8980298, 0x149cb, 0x80060000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_74) {
    // -9236283004985.069745154128015
    s21_decimal dec_1 = {{0x1b55788f, 0xfc1b0d77, 0x1dd81300, 0x800f0000}};
    // -944953908654671.86799
    s21_decimal dec_2 = {{0x87dd1e6f, 0x1f631155, 0x5, 0x80050000}};
    // -954190191659656.93773515412802
    s21_decimal dec_check = {{0xe0855542, 0xcf0d7c61, 0x3450c341, 0x800e0000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_75) {
    // 69222364.1774
    s21_decimal dec_1 = {{0x2bbe88ae, 0xa1, 0x0, 0x40000}};
    // -5697
    s21_decimal dec_2 = {{0x1641, 0x0, 0x0, 0x80000000}};
    // 69216667.1774
    s21_decimal dec_check = {{0x28593d9e, 0xa1, 0x0, 0x40000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_76) {
    // 3275531734378833545884567470
    s21_decimal dec_1 = {{0xb50b87ae, 0x1f78cf9b, 0xa9574d3, 0x0}};
    // -67826985
    s21_decimal dec_2 = {{0x40af529, 0x0, 0x0, 0x80000000}};
    // 3275531734378833545816740485
    s21_decimal dec_check = {{0xb1009285, 0x1f78cf9b, 0xa9574d3, 0x0}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_77) {
    // -80203094613595646013807341
    s21_decimal dec_1 = {{0x83f91aed, 0x7893da1e, 0x4257aa, 0x80000000}};
    // 6259
    s21_decimal dec_2 = {{0x1873, 0x0, 0x0, 0x0}};
    // -80203094613595646013801082
    s21_decimal dec_check = {{0x83f9027a, 0x7893da1e, 0x4257aa, 0x80000000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_78) {
    // 74240148549300328575
    s21_decimal dec_1 = {{0xb147187f, 0x649fdc3, 0x4, 0x0}};
    // -988827.071567039373079347760
    s21_decimal dec_2 = {{0x2daa0230, 0xf5d47671, 0x331f046, 0x80150000}};
    // 74240148549299339747.928432961
    s21_decimal dec_check = {{0xdc61e141, 0x23ccedf6, 0xefe202f5, 0x90000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_79) {
    // 15.8
    s21_decimal dec_1 = {{0x9e, 0x0, 0x0, 0x10000}};
    // -0.493352304785278297418
    s21_decimal dec_2 = {{0x46c2e54a, 0xbea37b4f, 0x1a, 0x80150000}};
    // 15.306647695214721702582
    s21_decimal dec_check = {{0xdd1d1ab6, 0xc668a4b3, 0x33d, 0x150000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_80) {
    // -68068476018164.3829665
    s21_decimal dec_1 = {{0x78d661a1, 0xe6660ef6, 0x24, 0x80070000}};
    // -2038964124
    s21_decimal dec_2 = {{0x79881f9c, 0x0, 0x0, 0x80000000}};
    // -68070514982288.3829665
    s21_decimal dec_check = {{0xc40b97a1, 0xe6ae7f3b, 0x24, 0x80070000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_81) {
    // -553370866729582015172175
    s21_decimal dec_1 = {{0x4a7e4e4f, 0x4b77ae0c, 0x752e, 0x80000000}};
    // -435246952.9826
    s21_decimal dec_2 = {{0x636674e2, 0x3f5, 0x0, 0x80040000}};
    // -553370866729582450419127.9826
    s21_decimal dec_check = {{0x493962d2, 0xf2fec413, 0x11e16063, 0x80040000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_82) {
    // 8540210604943672
    s21_decimal dec_1 = {{0xbb6a2938, 0x1e5746, 0x0, 0x0}};
    // 7.32
    s21_decimal dec_2 = {{0x2dc, 0x0, 0x0, 0x20000}};
    // 8540210604943679.32
    s21_decimal dec_check = {{0x35781cbc, 0xbda17a1, 0x0, 0x20000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_83) {
    // 168538388813317
    s21_decimal dec_1 = {{0xe6cbd605, 0x9948, 0x0, 0x0}};
    // -7763014107006
    s21_decimal dec_2 = {{0x77b2bf7e, 0x70f, 0x0, 0x80000000}};
    // 160775374706311
    s21_decimal dec_check = {{0x6f191687, 0x9239, 0x0, 0x0}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_84) {
    // 84059.90719279844
    s21_decimal dec_1 = {{0x3aced2e4, 0x1ddd34, 0x0, 0xb0000}};
    // 6694457
    s21_decimal dec_2 = {{0x662639, 0x0, 0x0, 0x0}};
    // 6778516.90719279844
    s21_decimal dec_check = {{0x73b87ae4, 0x9683685, 0x0, 0xb0000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_85) {
    // -40902
    s21_decimal dec_1 = {{0x9fc6, 0x0, 0x0, 0x80000000}};
    // -9631412840735184754
    s21_decimal dec_2 = {{0x1281772, 0x85a9a6f3, 0x0, 0x80000000}};
    // -9631412840735225656
    s21_decimal dec_check = {{0x128b738, 0x85a9a6f3, 0x0, 0x80000000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_86) {
    // -6516490665898746
    s21_decimal dec_1 = {{0xb752b2fa, 0x1726b6, 0x0, 0x80000000}};
    // 23578899208446483
    s21_decimal dec_2 = {{0x4783a213, 0x53c4e2, 0x0, 0x0}};
    // 17062408542547737
    s21_decimal dec_check = {{0x9030ef19, 0x3c9e2b, 0x0, 0x0}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_87) {
    // -10388
    s21_decimal dec_1 = {{0x2894, 0x0, 0x0, 0x80000000}};
    // -780288815.364206362816133564
    s21_decimal dec_2 = {{0xc7f3b9bc, 0x706f7454, 0x2857095, 0x80120000}};
    // -780299203.364206362816133564
    s21_decimal dec_check = {{0x2dc3b9bc, 0x92e52659, 0x28572c8, 0x80120000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_88) {
    // -53243524554767249665473937861
    s21_decimal dec_1 = {{0x3d8481c5, 0xa737f579, 0xac0a02e1, 0x80000000}};
    // -253605209225727342236447
    s21_decimal dec_2 = {{0x5f8f531f, 0xf747d4d0, 0x35b3, 0x80000000}};
    // -53243778159976475392816174308
    s21_decimal dec_check = {{0x9d13d4e4, 0x9e7fca49, 0xac0a3895, 0x80000000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_89) {
    // -381
    s21_decimal dec_1 = {{0x17d, 0x0, 0x0, 0x80000000}};
    // -47328258114289335301.31987339
    s21_decimal dec_2 = {{0x9f317b8b, 0x565ba6ff, 0xf4ae6d9, 0x80080000}};
    // -47328258114289335682.31987339
    s21_decimal dec_check = {{0x7e21588b, 0x565ba708, 0xf4ae6d9, 0x80080000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_90) {
    // 539005838.12521
    s21_decimal dec_1 = {{0xb526bda9, 0x3105, 0x0, 0x50000}};
    // -48
    s21_decimal dec_2 = {{0x30, 0x0, 0x0, 0x80000000}};
    // 539005790.12521
    s21_decimal dec_check = {{0xb4dd7fa9, 0x3105, 0x0, 0x50000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_91) {
    // -2772899.95233
    s21_decimal dec_1 = {{0x8fc58be1, 0x40, 0x0, 0x80050000}};
    // -1684889807396
    s21_decimal dec_2 = {{0x4b422a24, 0x188, 0x0, 0x80000000}};
    // -1684892580295.95233
    s21_decimal dec_check = {{0x6552ba61, 0x2569816, 0x0, 0x80050000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_92) {
    // 794493
    s21_decimal dec_1 = {{0xc1f7d, 0x0, 0x0, 0x0}};
    // 0.52
    s21_decimal dec_2 = {{0x34, 0x0, 0x0, 0x20000}};
    // 794493.52
    s21_decimal dec_check = {{0x4bc4d08, 0x0, 0x0, 0x20000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_93) {
    // -58708145210
    s21_decimal dec_1 = {{0xab47343a, 0xd, 0x0, 0x80000000}};
    // 2387.55301531
    s21_decimal dec_2 = {{0x96ecc89b, 0x37, 0x0, 0x80000}};
    // -58708142822.44698469
    s21_decimal dec_check = {{0x1b7c3165, 0x5179527c, 0x0, 0x80080000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_94) {
    // -73965960866604332547205
    s21_decimal dec_1 = {{0x6b5afc85, 0xb3e8efb8, 0xfa9, 0x80000000}};
    // 2954
    s21_decimal dec_2 = {{0xb8a, 0x0, 0x0, 0x0}};
    // -73965960866604332544251
    s21_decimal dec_check = {{0x6b5af0fb, 0xb3e8efb8, 0xfa9, 0x80000000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_95) {
    // 2689591598557234749378426
    s21_decimal dec_1 = {{0x19760f7a, 0xd7e94c9, 0x2398b, 0x0}};
    // 86161662.28080704
    s21_decimal dec_2 = {{0x8759b840, 0x1e9c5b, 0x0, 0x80000}};
    // 2689591598557234835540088.2808
    s21_decimal dec_check = {{0x3016da78, 0x2093f03b, 0x56e7c7bf, 0x40000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_96) {
    // 77302442041466178
    s21_decimal dec_1 = {{0x5626dd42, 0x112a229, 0x0, 0x0}};
    // -57447945989
    s21_decimal dec_2 = {{0x602a1705, 0xd, 0x0, 0x80000000}};
    // 77302384593520189
    s21_decimal dec_check = {{0xf5fcc63d, 0x112a21b, 0x0, 0x0}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_97) {
    // -3113001659929
    s21_decimal dec_1 = {{0xcd5bae19, 0x2d4, 0x0, 0x80000000}};
    // -72376962.021
    s21_decimal dec_2 = {{0xda00cbe5, 0x10, 0x0, 0x80030000}};
    // -3113074036891.021
    s21_decimal dec_check = {{0x820dd8d, 0xb0f53, 0x0, 0x80030000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_98) {
    // 539226597596.7
    s21_decimal dec_1 = {{0x7c19189f, 0x4e7, 0x0, 0x10000}};
    // 4603.34690408365394529
    s21_decimal dec_2 = {{0xfc098a61, 0xf46d59f7, 0x18, 0x110000}};
    // 539226602200.04690408365394529
    s21_decimal dec_check = {{0x7ce88a61, 0xd61a4ade, 0xae3bc773, 0x110000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_99) {
    // -625052167368851.9483907
    s21_decimal dec_1 = {{0x5c472203, 0xd769d989, 0x152, 0x80070000}};
    // 2420337206030982
    s21_decimal dec_2 = {{0xab66f286, 0x89948, 0x0, 0x0}};
    // 1795285038662130.0516093
    s21_decimal dec_check = {{0xa8dca4fd, 0x39d9245a, 0x3cd, 0x70000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_100) {
    // 449775.251789059575604
    s21_decimal dec_1 = {{0xa0c5cf34, 0x61e2b07d, 0x18, 0xf0000}};
    // -7864836
    s21_decimal dec_2 = {{0x780204, 0x0, 0x0, 0x80000000}};
    // -7415060.748210940424396
    s21_decimal dec_check = {{0x7f5430cc, 0xf8a3bfd2, 0x191, 0x800f0000}};
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
    // 79228162514264337592879323411
    s21_decimal dec_1 = {{0xd8629913, 0xffffffff, 0xffffffff, 0x0}};
    // 2974852923167198700905359467
    s21_decimal dec_2 = {{0xf66ae86b, 0x1b2bc32e, 0x99cbd9c, 0x0}};
    s21_decimal result;
    // overflow
    int check = 1;  // Результат слишком велик или положительная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_2) {
    // 3508.71691
    s21_decimal dec_1 = {{0x14e9e08b, 0x0, 0x0, 0x50000}};
    // 91101054838313941199.955082781
    s21_decimal dec_2 = {{0x8bc6be1d, 0x92307f15, 0x265d06be, 0x90000}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_3) {
    // 4.4241971270169408831
    s21_decimal dec_1 = {{0x597c353f, 0x65fb0e77, 0x2, 0x130000}};
    // 8568355061073970956.7
    s21_decimal dec_2 = {{0x3f58467f, 0xa5191f4f, 0x4, 0x10000}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_4) {
    // -79228162514264337591451055612
    s21_decimal dec_1 = {{0x8340f5fc, 0xffffffff, 0xffffffff, 0x80000000}};
    // -5604392179837089420585
    s21_decimal dec_2 = {{0x2ed91529, 0xd090c238, 0x12f, 0x80000000}};
    s21_decimal result;
    // overflow
    int check = 2;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_5) {
    // 7242587303.29340949436186237
    s21_decimal dec_1 = {{0x418a3e7d, 0x7177bb9a, 0x25717c0, 0x110000}};
    // 87486410939940907
    s21_decimal dec_2 = {{0x5ebfc02b, 0x136d06d, 0x0, 0x0}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_6) {
    // 781473.0727748809886965214
    s21_decimal dec_1 = {{0x6dee9dde, 0x66d09da4, 0x676d5, 0x130000}};
    // 99358432002475555
    s21_decimal dec_2 = {{0xacf28623, 0x160fdf7, 0x0, 0x0}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_7) {
    // 98999885881316685828637
    s21_decimal dec_1 = {{0x9ab2d21d, 0xcb68c52e, 0x14f6, 0x0}};
    // 93.65706302
    s21_decimal dec_2 = {{0x2e3d563e, 0x2, 0x0, 0x80000}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_8) {
    // 868793548605361336.857812918
    s21_decimal dec_1 = {{0x87da5fb6, 0xa457e524, 0x2cea630, 0x90000}};
    // -44894454.6547160110373
    s21_decimal dec_2 = {{0x784cd525, 0x565b6e79, 0x18, 0x800d0000}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_9) {
    // -79228162514264337593451296238
    s21_decimal dec_1 = {{0xfa7a35ee, 0xffffffff, 0xffffffff, 0x80000000}};
    // -936071024
    s21_decimal dec_2 = {{0x37cb4f70, 0x0, 0x0, 0x80000000}};
    s21_decimal result;
    // overflow
    int check = 2;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_10) {
    // 794019886375486473064
    s21_decimal dec_1 = {{0xc6e5c368, 0xb3d4fc2, 0x2b, 0x0}};
    // 56.34778010478348388706
    s21_decimal dec_2 = {{0x5844c962, 0x7640ea32, 0x131, 0x140000}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_11) {
    // 8.94689574744941724
    s21_decimal dec_1 = {{0x8eeae49c, 0xc6a936d, 0x0, 0x110000}};
    // 979873366886
    s21_decimal dec_2 = {{0x25010366, 0xe4, 0x0, 0x0}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_12) {
    // -65623.21
    s21_decimal dec_1 = {{0x642211, 0x0, 0x0, 0x80020000}};
    // 853430826091704.64288243792347
    s21_decimal dec_2 = {{0x36cd39db, 0x92d90dbc, 0x13c224b2, 0xe0000}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_13) {
    // 823288062037.78985183786680901
    s21_decimal dec_1 = {{0xfcf1c245, 0x36b9244e, 0xa04cad7, 0x110000}};
    // -8
    s21_decimal dec_2 = {{0x8, 0x0, 0x0, 0x80000000}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_14) {
    // 582693798.97405140377524175998
    s21_decimal dec_1 = {{0xb7c3047e, 0xb51e2bf3, 0xbc474d25, 0x140000}};
    // 89903021745235494321395868.9
    s21_decimal dec_2 = {{0xf42cf621, 0xbe9df861, 0x2e7a90d, 0x10000}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_15) {
    // 9285249895481558705836939335
    s21_decimal dec_1 = {{0x95245847, 0x70064153, 0x1e009425, 0x0}};
    // -5404962.19
    s21_decimal dec_2 = {{0x2037515b, 0x0, 0x0, 0x80020000}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_16) {
    // 987694253818840146234543
    s21_decimal dec_1 = {{0x82fccaf, 0x34603cd, 0xd127, 0x0}};
    // -38505.1557077
    s21_decimal dec_2 = {{0xa6dc7cd5, 0x59, 0x0, 0x80070000}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_17) {
    // 13.081617935886
    s21_decimal dec_1 = {{0xcd30ae0e, 0xbe5, 0x0, 0xc0000}};
    // 924935625906273269731976
    s21_decimal dec_2 = {{0x60aa5288, 0xdc5a2ac8, 0xc3dc, 0x0}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_18) {
    // 9553226308112768804
    s21_decimal dec_1 = {{0x49fa5f24, 0x8493e0b6, 0x0, 0x0}};
    // 910.108983435796528978
    s21_decimal dec_2 = {{0x8685bf52, 0x564ca278, 0x31, 0x120000}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_19) {
    // 769576374.67651029923779437730
    s21_decimal dec_1 = {{0x3d91e4a2, 0x96c5c1c1, 0xf8a9dd9e, 0x140000}};
    // 8454227241.898080
    s21_decimal dec_2 = {{0x2b9a9060, 0x1e0913, 0x0, 0x60000}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_20) {
    // -801210936763957421
    s21_decimal dec_1 = {{0x1bf940ad, 0xb1e791a, 0x0, 0x80000000}};
    // -79228162514264337592287494661
    s21_decimal dec_2 = {{0xb51c0205, 0xffffffff, 0xffffffff, 0x80000000}};
    s21_decimal result;
    // overflow
    int check = 2;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_21) {
    // -513845.40562362621
    s21_decimal dec_1 = {{0xa72a90fd, 0xb68df7, 0x0, 0x800b0000}};
    // 802247553216764015141587
    s21_decimal dec_2 = {{0x31a5e2d3, 0xed5018f1, 0xa9e1, 0x0}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_22) {
    // 80852321065245719
    s21_decimal dec_1 = {{0xf45c1c17, 0x11f3ec1, 0x0, 0x0}};
    // -4731752263.987456304165
    s21_decimal dec_2 = {{0xdab2e425, 0x8240fe32, 0x100, 0x800c0000}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_23) {
    // 9809965669899857892353156
    s21_decimal dec_1 = {{0x45562484, 0x4df8043c, 0x81d57, 0x0}};
    // -66.8441095009785638525
    s21_decimal dec_2 = {{0xd3686e7d, 0x3c7bd25b, 0x24, 0x80130000}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_24) {
    // -48930371.58764627091490
    s21_decimal dec_1 = {{0x7837e022, 0x40880b79, 0x109, 0x800e0000}};
    // 9867199007171363076.7293462609
    s21_decimal dec_2 = {{0xbccf851, 0xf6043c97, 0x3ed38ea3, 0xa0000}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_25) {
    // 8815376290501898004972307
    s21_decimal dec_1 = {{0x8769c313, 0x819b0a2a, 0x74aba, 0x0}};
    // 431.7905
    s21_decimal dec_2 = {{0x41e2d1, 0x0, 0x0, 0x40000}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_26) {
    // 870885860705127724762689
    s21_decimal dec_1 = {{0x22d84641, 0xd12e0045, 0xb86a, 0x0}};
    // 98.35599688506698163
    s21_decimal dec_2 = {{0x326269b3, 0x887f11ce, 0x0, 0x110000}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_27) {
    // 932236828191749484444
    s21_decimal dec_1 = {{0xba16af9c, 0x89628809, 0x32, 0x0}};
    // -696353667993875971.1395537718
    s21_decimal dec_2 = {{0x369e336, 0xd41f7519, 0x16801a3f, 0x800a0000}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_28) {
    // 997113267555.069236497
    s21_decimal dec_1 = {{0xa8ee9511, 0xdb9f1e8, 0x36, 0x90000}};
    // 406861.7266834574237363890
    s21_decimal dec_2 = {{0xc1b9eeb2, 0x2f19afe5, 0x35d90, 0x130000}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_29) {
    // 8016671213718056282.4290348812
    s21_decimal dec_1 = {{0x40fbaf0c, 0x1ef8685, 0x308599d, 0xa0000}};
    // -97442.16763
    s21_decimal dec_2 = {{0x44ccf2bb, 0x2, 0x0, 0x80050000}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_30) {
    // -0.11777820
    s21_decimal dec_1 = {{0xb3b71c, 0x0, 0x0, 0x80080000}};
    // 8089860094725392566740803
    s21_decimal dec_2 = {{0xe0b66743, 0x31ca1cfb, 0x6b118, 0x0}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_31) {
    // 5.743741849
    s21_decimal dec_1 = {{0x565a8b99, 0x1, 0x0, 0x90000}};
    // 995329180577962765254719
    s21_decimal dec_2 = {{0xb447003f, 0xe72abfa5, 0xd2c4, 0x0}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_32) {
    // 21.320289197373347656813
    s21_decimal dec_1 = {{0x147cf46d, 0xc6731147, 0x483, 0x150000}};
    // 8291905652041895235934712
    s21_decimal dec_2 = {{0x99d9f8, 0x1b29551a, 0x6dbe1, 0x0}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_33) {
    // 9502237632777119141
    s21_decimal dec_1 = {{0x310765a5, 0x83debac8, 0x0, 0x0}};
    // 723.35320949884458050126
    s21_decimal dec_2 = {{0xd6af224e, 0x4e3c32f6, 0xf51, 0x140000}};
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
    tcase_add_test(tc, s21_add_11);
    tcase_add_test(tc, s21_add_12);
    tcase_add_test(tc, s21_add_13);
    tcase_add_test(tc, s21_add_14);
    tcase_add_test(tc, s21_add_15);
    tcase_add_test(tc, s21_add_16);
    tcase_add_test(tc, s21_add_17);
    tcase_add_test(tc, s21_add_18);
    tcase_add_test(tc, s21_add_19);
    tcase_add_test(tc, s21_add_20);
    tcase_add_test(tc, s21_add_21);
    tcase_add_test(tc, s21_add_22);
    tcase_add_test(tc, s21_add_23);
    tcase_add_test(tc, s21_add_24);
    tcase_add_test(tc, s21_add_25);
    tcase_add_test(tc, s21_add_26);
    tcase_add_test(tc, s21_add_27);
    tcase_add_test(tc, s21_add_28);
    tcase_add_test(tc, s21_add_29);
    tcase_add_test(tc, s21_add_30);
    tcase_add_test(tc, s21_add_31);
    tcase_add_test(tc, s21_add_32);
    tcase_add_test(tc, s21_add_33);
    tcase_add_test(tc, s21_add_34);
    tcase_add_test(tc, s21_add_35);
    tcase_add_test(tc, s21_add_36);
    tcase_add_test(tc, s21_add_37);
    tcase_add_test(tc, s21_add_38);
    tcase_add_test(tc, s21_add_39);
    tcase_add_test(tc, s21_add_40);
    tcase_add_test(tc, s21_add_41);
    tcase_add_test(tc, s21_add_42);
    tcase_add_test(tc, s21_add_43);
    tcase_add_test(tc, s21_add_44);
    tcase_add_test(tc, s21_add_45);
    tcase_add_test(tc, s21_add_46);
    tcase_add_test(tc, s21_add_47);
    tcase_add_test(tc, s21_add_48);
    tcase_add_test(tc, s21_add_49);
    tcase_add_test(tc, s21_add_50);
    tcase_add_test(tc, s21_add_51);
    tcase_add_test(tc, s21_add_52);
    tcase_add_test(tc, s21_add_53);
    tcase_add_test(tc, s21_add_54);
    tcase_add_test(tc, s21_add_55);
    tcase_add_test(tc, s21_add_56);
    tcase_add_test(tc, s21_add_57);
    tcase_add_test(tc, s21_add_58);
    tcase_add_test(tc, s21_add_59);
    tcase_add_test(tc, s21_add_60);
    tcase_add_test(tc, s21_add_61);
    tcase_add_test(tc, s21_add_62);
    tcase_add_test(tc, s21_add_63);
    tcase_add_test(tc, s21_add_64);
    tcase_add_test(tc, s21_add_65);
    tcase_add_test(tc, s21_add_66);
    tcase_add_test(tc, s21_add_67);
    tcase_add_test(tc, s21_add_68);
    tcase_add_test(tc, s21_add_69);
    tcase_add_test(tc, s21_add_70);
    tcase_add_test(tc, s21_add_71);
    tcase_add_test(tc, s21_add_72);
    tcase_add_test(tc, s21_add_73);
    tcase_add_test(tc, s21_add_74);
    tcase_add_test(tc, s21_add_75);
    tcase_add_test(tc, s21_add_76);
    tcase_add_test(tc, s21_add_77);
    tcase_add_test(tc, s21_add_78);
    tcase_add_test(tc, s21_add_79);
    tcase_add_test(tc, s21_add_80);
    tcase_add_test(tc, s21_add_81);
    tcase_add_test(tc, s21_add_82);
    tcase_add_test(tc, s21_add_83);
    tcase_add_test(tc, s21_add_84);
    tcase_add_test(tc, s21_add_85);
    tcase_add_test(tc, s21_add_86);
    tcase_add_test(tc, s21_add_87);
    tcase_add_test(tc, s21_add_88);
    tcase_add_test(tc, s21_add_89);
    tcase_add_test(tc, s21_add_90);
    tcase_add_test(tc, s21_add_91);
    tcase_add_test(tc, s21_add_92);
    tcase_add_test(tc, s21_add_93);
    tcase_add_test(tc, s21_add_94);
    tcase_add_test(tc, s21_add_95);
    tcase_add_test(tc, s21_add_96);
    tcase_add_test(tc, s21_add_97);
    tcase_add_test(tc, s21_add_98);
    tcase_add_test(tc, s21_add_99);
    tcase_add_test(tc, s21_add_100);
    tcase_add_test(tc, fail_s21_add_1);
    tcase_add_test(tc, fail_s21_add_2);
    tcase_add_test(tc, fail_s21_add_3);
    tcase_add_test(tc, fail_s21_add_4);
    tcase_add_test(tc, fail_s21_add_5);
    tcase_add_test(tc, fail_s21_add_6);
    tcase_add_test(tc, fail_s21_add_7);
    tcase_add_test(tc, fail_s21_add_8);
    tcase_add_test(tc, fail_s21_add_9);
    tcase_add_test(tc, fail_s21_add_10);
    tcase_add_test(tc, fail_s21_add_11);
    tcase_add_test(tc, fail_s21_add_12);
    tcase_add_test(tc, fail_s21_add_13);
    tcase_add_test(tc, fail_s21_add_14);
    tcase_add_test(tc, fail_s21_add_15);
    tcase_add_test(tc, fail_s21_add_16);
    tcase_add_test(tc, fail_s21_add_17);
    tcase_add_test(tc, fail_s21_add_18);
    tcase_add_test(tc, fail_s21_add_19);
    tcase_add_test(tc, fail_s21_add_20);
    tcase_add_test(tc, fail_s21_add_21);
    tcase_add_test(tc, fail_s21_add_22);
    tcase_add_test(tc, fail_s21_add_23);
    tcase_add_test(tc, fail_s21_add_24);
    tcase_add_test(tc, fail_s21_add_25);
    tcase_add_test(tc, fail_s21_add_26);
    tcase_add_test(tc, fail_s21_add_27);
    tcase_add_test(tc, fail_s21_add_28);
    tcase_add_test(tc, fail_s21_add_29);
    tcase_add_test(tc, fail_s21_add_30);
    tcase_add_test(tc, fail_s21_add_31);
    tcase_add_test(tc, fail_s21_add_32);
    tcase_add_test(tc, fail_s21_add_33);

    suite_add_tcase(c, tc);
    return c;
}
