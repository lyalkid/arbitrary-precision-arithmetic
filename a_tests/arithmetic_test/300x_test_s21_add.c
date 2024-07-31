#include <check.h>

#include "../inc/s21_add.h"

START_TEST(invalid_dec_s21_add_1) {
    // ссылка на результат - NULL
    s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x0}};
    s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x0}};
    int result_value = s21_add(dec_1, dec_2, NULL);

    ck_assert_int_eq(result_value, 1);
}

START_TEST(invalid_dec_s21_add_2) {
    // степень 56 (допустимое значение от 0 до 28)
    // биты 0-15 не пустые
    // биты 24-30 не пустые
    s21_decimal dec_1 = {{0x0, 0x0, 0x0, 0x380000}};
    s21_decimal dec_2 = {{0xFFFFFFFF, 0x0, 0xFFFFFFFF, 0x0}};
    s21_decimal result;
    int result_value = s21_add(dec_1, dec_2, &result);

    ck_assert_int_eq(result_value, 1);
}
END_TEST

START_TEST(invalid_dec_s21_add_3) {
    // степень 29 (допустимое значение от 0 до 28)
    s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x1D0000}};
    s21_decimal dec_2 = {{0xFFFFFFFF, 0x0, 0xFFFFFFFF, 0x0}};
    s21_decimal result;
    int result_value = s21_add(dec_1, dec_2, &result);

    ck_assert_int_eq(result_value, 1);
}
END_TEST

START_TEST(invalid_dec_s21_add_4) {
    // степень 28
    // биты 0-15 не пустые
    s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x1C0001}};
    s21_decimal dec_2 = {{0xFFFFFFFF, 0x0, 0xFFFFFFFF, 0x140000}};
    s21_decimal result;
    int result_value = s21_add(dec_1, dec_2, &result);

    ck_assert_int_eq(result_value, 1);
}
END_TEST

START_TEST(invalid_dec_s21_add_5) {
    // степень 28
    // биты 0-15 не пустые
    s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x1C8000}};
    s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0x0, 0x140000}};
    s21_decimal result;
    int result_value = s21_add(dec_1, dec_2, &result);

    ck_assert_int_eq(result_value, 1);
}
END_TEST

START_TEST(invalid_dec_s21_add_6) {
    // степень 28
    // биты 24-30 не пустые
    s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x11C0000}};
    s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x140000}};
    s21_decimal result;
    int result_value = s21_add(dec_1, dec_2, &result);

    ck_assert_int_eq(result_value, 1);
}
END_TEST

START_TEST(invalid_dec_s21_add_7) {
    // степень 28
    // биты 24-30 не пустые
    s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x401C0000}};
    s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x140000}};
    s21_decimal result;
    int result_value = s21_add(dec_1, dec_2, &result);

    ck_assert_int_eq(result_value, 1);
}
END_TEST

START_TEST(invalid_dec_s21_add_8) {
    // Все биты имеют максимальное значение
    s21_decimal dec_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF}};
    s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
    s21_decimal result;
    int result_value = s21_add(dec_1, dec_2, &result);

    ck_assert_int_eq(result_value, 1);
}
END_TEST

START_TEST(invalid_dec_s21_add_9) {
    // степень 56 (допустимое значение от 0 до 28)
    // биты 0-15 не пустые
    // биты 24-30 не пустые
    s21_decimal dec_2 = {{0xA, 0x0, 0x0, 0x380000}};
    s21_decimal dec_1 = {{0xFFFFFFFF, 0x0, 0xFFFFFFFF, 0x140000}};
    s21_decimal result;
    int result_value = s21_add(dec_1, dec_2, &result);

    ck_assert_int_eq(result_value, 1);
}
END_TEST

START_TEST(invalid_dec_s21_add_10) {
    // степень 29 (допустимое значение от 0 до 28)
    s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x1D0000}};
    s21_decimal dec_1 = {{0xFFFFFFFF, 0x0, 0xFFFFFFFF, 0x0}};
    s21_decimal result;
    int result_value = s21_add(dec_1, dec_2, &result);

    ck_assert_int_eq(result_value, 1);
}
END_TEST

START_TEST(invalid_dec_s21_add_11) {
    // степень 29 (допустимое значение от 0 до 28)
    s21_decimal dec_2 = {{0xA, 0x0, 0x0, 0x1D0000}};
    s21_decimal dec_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x20000}};
    s21_decimal result;
    int result_value = s21_add(dec_1, dec_2, &result);

    ck_assert_int_eq(result_value, 1);
}
END_TEST

START_TEST(invalid_dec_s21_add_12) {
    // степень 28
    // биты 0-15 не пустые
    s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x1C0001}};
    s21_decimal dec_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x20000}};
    s21_decimal result;
    int result_value = s21_add(dec_1, dec_2, &result);

    ck_assert_int_eq(result_value, 1);
}
END_TEST

START_TEST(invalid_dec_s21_add_13) {
    // степень 28
    // биты 0-15 не пустые
    s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x1C8000}};
    s21_decimal dec_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
    s21_decimal result;
    int result_value = s21_add(dec_1, dec_2, &result);

    ck_assert_int_eq(result_value, 1);
}
END_TEST

START_TEST(invalid_dec_s21_add_14) {
    // степень 28
    // биты 24-30 не пустые
    s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x11C0000}};
    s21_decimal dec_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
    s21_decimal result;
    int result_value = s21_add(dec_1, dec_2, &result);

    ck_assert_int_eq(result_value, 1);
}
END_TEST

START_TEST(invalid_dec_s21_add_15) {
    // степень 28
    // биты 24-30 не пустые
    s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x401C0000}};
    s21_decimal dec_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x140000}};
    s21_decimal result;
    int result_value = s21_add(dec_1, dec_2, &result);

    ck_assert_int_eq(result_value, 1);
}
END_TEST

START_TEST(invalid_dec_s21_add_16) {
    // Все биты имеют максимальное значение
    s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF}};
    s21_decimal dec_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x140000}};
    s21_decimal result;
    int result_value = s21_add(dec_1, dec_2, &result);

    ck_assert_int_eq(result_value, 1);
}
END_TEST

START_TEST(s21_add_1) {
    // 0
    s21_decimal dec_1 = {{0x0, 0x0, 0x0, 0x0}};
    // -807077416817
    s21_decimal dec_2 = {{0xe9900f71, 0xbb, 0x0, 0x80000000}};
    // -807077416817
    s21_decimal dec_check = {{0xe9900f71, 0xbb, 0x0, 0x80000000}};
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
    // -910462050478831.33
    s21_decimal dec_1 = {{0x8606c57d, 0x143760a, 0x0, 0x80020000}};
    // -16355747599276
    s21_decimal dec_2 = {{0x1e8693ac, 0xee0, 0x0, 0x80000000}};
    // -926817798078107.33
    s21_decimal dec_check = {{0x729874ad, 0x1494596, 0x0, 0x80020000}};
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
    // -5019.13063
    s21_decimal dec_1 = {{0x1dea95e7, 0x0, 0x0, 0x80050000}};
    // -2521392766163609335430586987
    s21_decimal dec_2 = {{0x1b7f226b, 0xbcfa1675, 0x825a5af, 0x80000000}};
    // -2521392766163609335430592006.1
    s21_decimal dec_check = {{0x12f81c3d, 0x61c4e093, 0x517878dd, 0x80010000}};
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
    // -43532.3858632532866320
    s21_decimal dec_1 = {{0x4c7cb510, 0x995506fb, 0x17, 0x80100000}};
    // -856431
    s21_decimal dec_2 = {{0xd116f, 0x0, 0x0, 0x80000000}};
    // -899963.3858632532866320
    s21_decimal dec_check = {{0x922bb510, 0xdf025052, 0x1e7, 0x80100000}};
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
    // -258140.154691
    s21_decimal dec_1 = {{0x1a5a2b43, 0x3c, 0x0, 0x80060000}};
    // 1801048.1
    s21_decimal dec_2 = {{0x112d171, 0x0, 0x0, 0x10000}};
    // 1542907.945309
    s21_decimal dec_check = {{0x3c7ae15d, 0x167, 0x0, 0x60000}};
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
    // 5755718409654055087064656.0
    s21_decimal dec_1 = {{0x2410bf20, 0x33b504ad, 0x2f9c35, 0x10000}};
    // 3532
    s21_decimal dec_2 = {{0xdcc, 0x0, 0x0, 0x0}};
    // 5755718409654055087068188.0
    s21_decimal dec_check = {{0x24114918, 0x33b504ad, 0x2f9c35, 0x10000}};
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
    // 343357800932950.2
    s21_decimal dec_1 = {{0x2d8dff5e, 0xc32d2, 0x0, 0x10000}};
    // -185881590840858576
    s21_decimal dec_2 = {{0x705a97d0, 0x2946252, 0x0, 0x80000000}};
    // -185538233039925625.8
    s21_decimal dec_check = {{0x35fbeec2, 0x19bfa466, 0x0, 0x80010000}};
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
    // 147415919940607
    s21_decimal dec_1 = {{0xf18ad3ff, 0x8612, 0x0, 0x0}};
    // 0
    s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x0}};
    // 147415919940607
    s21_decimal dec_check = {{0xf18ad3ff, 0x8612, 0x0, 0x0}};
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
    // 635
    s21_decimal dec_1 = {{0x27b, 0x0, 0x0, 0x0}};
    // -9071608563263670012107
    s21_decimal dec_2 = {{0xa2c348cb, 0xc5dbd4d8, 0x1eb, 0x80000000}};
    // -9071608563263670011472
    s21_decimal dec_check = {{0xa2c34650, 0xc5dbd4d8, 0x1eb, 0x80000000}};
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
    // 632246587778829334549327290
    s21_decimal dec_1 = {{0x7a836dba, 0x3368c9e1, 0x20afb6c, 0x0}};
    // -6820770687428706678
    s21_decimal dec_2 = {{0x5e95c176, 0x5ea83ecd, 0x0, 0x80000000}};
    // 632246580958058647120620612
    s21_decimal dec_check = {{0x1bedac44, 0xd4c08b14, 0x20afb6b, 0x0}};
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
    // -999641
    s21_decimal dec_1 = {{0xf40d9, 0x0, 0x0, 0x80000000}};
    // 1266757493
    s21_decimal dec_2 = {{0x4b812f75, 0x0, 0x0, 0x0}};
    // 1265757852
    s21_decimal dec_check = {{0x4b71ee9c, 0x0, 0x0, 0x0}};
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
    // -1362009.63
    s21_decimal dec_1 = {{0x81e4303, 0x0, 0x0, 0x80020000}};
    // -314808865441808043170
    s21_decimal dec_2 = {{0xc2b6cca2, 0x10d9c330, 0x11, 0x80000000}};
    // -314808865441809405179.63
    s21_decimal dec_check = {{0x1786324b, 0x95103f0c, 0x6aa, 0x80020000}};
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
    // -5549342
    s21_decimal dec_1 = {{0x54ad1e, 0x0, 0x0, 0x80000000}};
    // -559811
    s21_decimal dec_2 = {{0x88ac3, 0x0, 0x0, 0x80000000}};
    // -6109153
    s21_decimal dec_check = {{0x5d37e1, 0x0, 0x0, 0x80000000}};
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
    // -6
    s21_decimal dec_1 = {{0x6, 0x0, 0x0, 0x80000000}};
    // -0.9478477070791247
    s21_decimal dec_2 = {{0xead0f24f, 0x21ac9f, 0x0, 0x80100000}};
    // -6.9478477070791247
    s21_decimal dec_check = {{0x8956f24f, 0xf6d64e, 0x0, 0x80100000}};
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
    // 765576406
    s21_decimal dec_1 = {{0x2da1c4d6, 0x0, 0x0, 0x0}};
    // 18572792981
    s21_decimal dec_2 = {{0x53065495, 0x4, 0x0, 0x0}};
    // 19338369387
    s21_decimal dec_check = {{0x80a8196b, 0x4, 0x0, 0x0}};
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
    // -62
    s21_decimal dec_1 = {{0x3e, 0x0, 0x0, 0x80000000}};
    // 873
    s21_decimal dec_2 = {{0x369, 0x0, 0x0, 0x0}};
    // 811
    s21_decimal dec_check = {{0x32b, 0x0, 0x0, 0x0}};
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
    // -3648367.75
    s21_decimal dec_1 = {{0x15bef7a7, 0x0, 0x0, 0x80020000}};
    // -560730751184423.606
    s21_decimal dec_2 = {{0xb6fc4ab6, 0x7c81da5, 0x0, 0x80030000}};
    // -560730754832791.356
    s21_decimal dec_check = {{0x9071f73c, 0x7c81da6, 0x0, 0x80030000}};
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
    // -47070342074
    s21_decimal dec_1 = {{0xf59c6bba, 0xa, 0x0, 0x80000000}};
    // -6494661654044880882355024.8
    s21_decimal dec_2 = {{0xb915f128, 0x232f1037, 0x35b8fb, 0x80010000}};
    // -6494661654044927952697098.8
    s21_decimal dec_check = {{0x5132266c, 0x232f10a5, 0x35b8fb, 0x80010000}};
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
    // -62917274995.78267620
    s21_decimal dec_1 = {{0x6beb57e4, 0x5750b4d3, 0x0, 0x80080000}};
    // 7
    s21_decimal dec_2 = {{0x7, 0x0, 0x0, 0x0}};
    // -62917274988.78267620
    s21_decimal dec_check = {{0x423230e4, 0x5750b4d3, 0x0, 0x80080000}};
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
    // -46147378992383297124
    s21_decimal dec_1 = {{0xbc548664, 0x806c6cb1, 0x2, 0x80000000}};
    // -8220476132381388304761754728
    s21_decimal dec_2 = {{0x57e01468, 0x1464654e, 0x1a8fd188, 0x80000000}};
    // -8220476178528767297145051852
    s21_decimal dec_check = {{0x14349acc, 0x94d0d200, 0x1a8fd18a, 0x80000000}};
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
    // -624272482975262664738544
    s21_decimal dec_1 = {{0xc6aec6f0, 0xe10d90a1, 0x8431, 0x80000000}};
    // 33877219.446477
    s21_decimal dec_2 = {{0xa7a18ecd, 0x1ecf, 0x0, 0x60000}};
    // -624272482975262630861324.55352
    s21_decimal dec_check = {{0xac5767b8, 0x52d0d6b5, 0xc9b69c07, 0x80050000}};
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
    // 44354597176005758280988
    s21_decimal dec_1 = {{0x8763e51c, 0x77b01ad9, 0x964, 0x0}};
    // 5.2919
    s21_decimal dec_2 = {{0xceb7, 0x0, 0x0, 0x40000}};
    // 44354597176005758280993.2919
    s21_decimal dec_check = {{0xae266477, 0x4f18d138, 0x16ee483, 0x40000}};
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
    // -68686537
    s21_decimal dec_1 = {{0x41812c9, 0x0, 0x0, 0x80000000}};
    // 6229513854958628667331338667
    s21_decimal dec_2 = {{0x9f0261ab, 0xc0f4c283, 0x1420eede, 0x0}};
    // 6229513854958628667262652130
    s21_decimal dec_check = {{0x9aea4ee2, 0xc0f4c283, 0x1420eede, 0x0}};
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
    // -330.8761500338641429774580760
    s21_decimal dec_1 = {{0x34e1bc18, 0x585d8f48, 0xab0f180, 0x80190000}};
    // -633263611758
    s21_decimal dec_2 = {{0x7173df6e, 0x93, 0x0, 0x80000000}};
    // -633263612088.87615003386414298
    s21_decimal dec_check = {{0x9d0784da, 0xe9f474bb, 0xcc9e5697, 0x80110000}};
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
    // -708658901823028865206711.52274
    s21_decimal dec_1 = {{0xfa33a892, 0x89e196e4, 0xe4fae3f4, 0x80050000}};
    // -2137566904390453893045297
    s21_decimal dec_2 = {{0xfb449c31, 0xbbec9446, 0x1c4a5, 0x80000000}};
    // -2846225806213482758252008.5227
    s21_decimal dec_check = {{0xa780caeb, 0x3d903d67, 0x5bf76d95, 0x80040000}};
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
    // 31517
    s21_decimal dec_1 = {{0x7b1d, 0x0, 0x0, 0x0}};
    // -122038965604815
    s21_decimal dec_2 = {{0x693191cf, 0x6efe, 0x0, 0x80000000}};
    // -122038965573298
    s21_decimal dec_check = {{0x693116b2, 0x6efe, 0x0, 0x80000000}};
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
    // 4902.90698447824161
    s21_decimal dec_1 = {{0xe5a92521, 0x6cddcca, 0x0, 0xe0000}};
    // -78959582790619193223
    s21_decimal dec_2 = {{0xc7e75f87, 0x47c8ca33, 0x4, 0x80000000}};
    // -78959582790619188320.093015522
    s21_decimal dec_check = {{0x998f0de2, 0x1c56b7a, 0xff21d608, 0x80090000}};
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
    // -1660439330161985.74
    s21_decimal dec_1 = {{0xcc8a0dae, 0x24de813, 0x0, 0x80020000}};
    // 587371805053581489546410
    s21_decimal dec_2 = {{0x9ca324aa, 0x7d465b08, 0x7c61, 0x0}};
    // 587371803393142159384424.26
    s21_decimal dec_check = {{0x633044ba, 0xed2da749, 0x309614, 0x20000}};
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
    // 367393528
    s21_decimal dec_1 = {{0x15e5faf8, 0x0, 0x0, 0x0}};
    // 2479
    s21_decimal dec_2 = {{0x9af, 0x0, 0x0, 0x0}};
    // 367396007
    s21_decimal dec_check = {{0x15e604a7, 0x0, 0x0, 0x0}};
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
    // -43
    s21_decimal dec_1 = {{0x2b, 0x0, 0x0, 0x80000000}};
    // 9529.5
    s21_decimal dec_2 = {{0x1743f, 0x0, 0x0, 0x10000}};
    // 9486.5
    s21_decimal dec_check = {{0x17291, 0x0, 0x0, 0x10000}};
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
    // 78483859511591
    s21_decimal dec_1 = {{0x72911927, 0x4761, 0x0, 0x0}};
    // 4771032207849779615554851
    s21_decimal dec_2 = {{0xe500dd23, 0x2c9ad35e, 0x3f24e, 0x0}};
    // 4771032207928263475066442
    s21_decimal dec_check = {{0x5791f64a, 0x2c9b1ac0, 0x3f24e, 0x0}};
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
    // 0.1832
    s21_decimal dec_1 = {{0x728, 0x0, 0x0, 0x40000}};
    // -85301235
    s21_decimal dec_2 = {{0x51597f3, 0x0, 0x0, 0x80000000}};
    // -85301234.8168
    s21_decimal dec_check = {{0x9b7f7d08, 0xc6, 0x0, 0x80040000}};
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
    // 20.873586253547730417035767
    s21_decimal dec_1 = {{0x33a529f7, 0x60d099e3, 0x114427, 0x180000}};
    // -0.5048182911976
    s21_decimal dec_2 = {{0x5f2633e8, 0x497, 0x0, 0x800d0000}};
    // 20.368767962350130417035767
    s21_decimal dec_check = {{0x67aae9f7, 0x1fb0279b, 0x10d941, 0x180000}};
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
    // -619527
    s21_decimal dec_1 = {{0x97407, 0x0, 0x0, 0x80000000}};
    // 0.46842675830
    s21_decimal dec_2 = {{0xe80a8276, 0xa, 0x0, 0xb0000}};
    // -619526.53157324170
    s21_decimal dec_check = {{0x1c55d58a, 0xdc199c, 0x0, 0x800b0000}};
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
    // -797923025181106634
    s21_decimal dec_1 = {{0x8a0661ca, 0xb12cac3, 0x0, 0x80000000}};
    // -986248861
    s21_decimal dec_2 = {{0x3ac8f69d, 0x0, 0x0, 0x80000000}};
    // -797923026167355495
    s21_decimal dec_check = {{0xc4cf5867, 0xb12cac3, 0x0, 0x80000000}};
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
    // 656
    s21_decimal dec_1 = {{0x290, 0x0, 0x0, 0x0}};
    // -1
    s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x80000000}};
    // 655
    s21_decimal dec_check = {{0x28f, 0x0, 0x0, 0x0}};
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
    // -25699850
    s21_decimal dec_1 = {{0x188260a, 0x0, 0x0, 0x80000000}};
    // -6.2457336917318671
    s21_decimal dec_2 = {{0xf492dc0f, 0xdde49d, 0x0, 0x80100000}};
    // -25699856.2457336917318671
    s21_decimal dec_check = {{0xf81cdc0f, 0xeb844634, 0x366b, 0x80100000}};
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
    // -9661.9733663738131
    s21_decimal dec_1 = {{0xc751e913, 0x1574322, 0x0, 0x800d0000}};
    // -79228162514264337591450322824
    s21_decimal dec_2 = {{0x8335c788, 0xffffffff, 0xffffffff, 0x80000000}};
    // -79228162514264337591450332486
    s21_decimal dec_check = {{0x8335ed46, 0xffffffff, 0xffffffff, 0x80000000}};
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
    // -239435164531
    s21_decimal dec_1 = {{0xbf72ab73, 0x37, 0x0, 0x80000000}};
    // -91684493931177
    s21_decimal dec_2 = {{0xf5b132a9, 0x5362, 0x0, 0x80000000}};
    // -91923929095708
    s21_decimal dec_check = {{0xb523de1c, 0x539a, 0x0, 0x80000000}};
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
    // 1435.76107550080812325788
    s21_decimal dec_1 = {{0x86c21b9c, 0x46c13dfa, 0x1e67, 0x140000}};
    // -79751468535837753173676
    s21_decimal dec_2 = {{0x6f8d66ac, 0x55f52bf4, 0x10e3, 0x80000000}};
    // -79751468535837753172240.238924
    s21_decimal dec_check = {{0x652094c, 0x45f28b27, 0x1b0de5c, 0x80060000}};
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
    // -8731.09617170140260442566
    s21_decimal dec_1 = {{0x7567a1c6, 0x5e00033b, 0xb8e3, 0x80140000}};
    // -67094.6896704335717898
    s21_decimal dec_2 = {{0x3ca3260a, 0x5f4237b9, 0x24, 0x80100000}};
    // -75825.78584213497439422566
    s21_decimal dec_check = {{0x1a658866, 0x68a0b70c, 0x645ac, 0x80140000}};
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
    // 321
    s21_decimal dec_1 = {{0x141, 0x0, 0x0, 0x0}};
    // 5
    s21_decimal dec_2 = {{0x5, 0x0, 0x0, 0x0}};
    // 326
    s21_decimal dec_check = {{0x146, 0x0, 0x0, 0x0}};
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
    // -44800390453015707346684.24385
    s21_decimal dec_1 = {{0x1984a4c1, 0x496b3a37, 0xe79cd2b, 0x80050000}};
    // -27817686666528118
    s21_decimal dec_2 = {{0xe43b4576, 0x62d409, 0x0, 0x80000000}};
    // -44800418270702373874802.24385
    s21_decimal dec_check = {{0xa61d281, 0x1636d218, 0xe79cdc2, 0x80050000}};
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
    // 4281739318.7743384418
    s21_decimal dec_1 = {{0x7bacc362, 0x5235f03f, 0x2, 0xa0000}};
    // -9523808847848.4232
    s21_decimal dec_2 = {{0x70d8e708, 0x1525a89, 0x0, 0x80040000}};
    // -9519527108529.6488615582
    s21_decimal dec_check = {{0x2f950e9e, 0x8bc5bdea, 0x1428, 0x800a0000}};
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
    // -956.12206595070196770
    s21_decimal dec_1 = {{0xb26b7c22, 0x2ee2cb52, 0x5, 0x80110000}};
    // 6357137044030481968943
    s21_decimal dec_2 = {{0x79ab2f2f, 0x9effbbfd, 0x158, 0x0}};
    // 6357137044030481967986.8779340
    s21_decimal dec_check = {{0xed407b4c, 0xf684c1a8, 0xcd690150, 0x70000}};
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
    // -319.9
    s21_decimal dec_1 = {{0xc7f, 0x0, 0x0, 0x80010000}};
    // -380244292929925490772
    s21_decimal dec_2 = {{0x95c92854, 0x9cf319cc, 0x14, 0x80000000}};
    // -380244292929925491091.9
    s21_decimal dec_check = {{0xd9db9fc7, 0x217f01fd, 0xce, 0x80010000}};
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
    // -41595910
    s21_decimal dec_1 = {{0x27ab406, 0x0, 0x0, 0x80000000}};
    // -746515345869399.86052829
    s21_decimal dec_2 = {{0x58fa86dd, 0xde28120a, 0xfce, 0x80080000}};
    // -746515387465309.86052829
    s21_decimal dec_check = {{0x98f1ccdd, 0xde36d92a, 0xfce, 0x80080000}};
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
    // -782773621
    s21_decimal dec_1 = {{0x2ea82d75, 0x0, 0x0, 0x80000000}};
    // 83926578781.655630
    s21_decimal dec_2 = {{0x5b7e924e, 0x12a2ac7, 0x0, 0x60000}};
    // 83143805160.655630
    s21_decimal dec_check = {{0xabe00b0e, 0x12762d9, 0x0, 0x60000}};
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
    // 8726887454872254015
    s21_decimal dec_1 = {{0x3679363f, 0x791c21e7, 0x0, 0x0}};
    // -83513699
    s21_decimal dec_2 = {{0x4fa5163, 0x0, 0x0, 0x80000000}};
    // 8726887454788740316
    s21_decimal dec_check = {{0x317ee4dc, 0x791c21e7, 0x0, 0x0}};
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
    // -9711804900388240
    s21_decimal dec_1 = {{0xc9372d90, 0x2280d5, 0x0, 0x80000000}};
    // 31808684704760300891819853
    s21_decimal dec_2 = {{0xe1a44f4d, 0x40c74112, 0x1a4fc0, 0x0}};
    // 31808684695048495991431613
    s21_decimal dec_check = {{0x186d21bd, 0x40a4c03d, 0x1a4fc0, 0x0}};
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
    // -2960.9029867
    s21_decimal dec_1 = {{0xe4d5f0eb, 0x6, 0x0, 0x80070000}};
    // -222877
    s21_decimal dec_2 = {{0x3669d, 0x0, 0x0, 0x80000000}};
    // -225837.9029867
    s21_decimal dec_check = {{0xd1e13d6b, 0x20d, 0x0, 0x80070000}};
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
    // -2612
    s21_decimal dec_1 = {{0xa34, 0x0, 0x0, 0x80000000}};
    // 4.37741148
    s21_decimal dec_2 = {{0x1a17665c, 0x0, 0x0, 0x80000}};
    // -2607.62258852
    s21_decimal dec_check = {{0xb6a44da4, 0x3c, 0x0, 0x80080000}};
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
    // -55384679028254963512667
    s21_decimal dec_1 = {{0x93edb55b, 0x68d2c797, 0xbba, 0x80000000}};
    // 552.45196557710802934480
    s21_decimal dec_2 = {{0x5959dad0, 0xd91d7fa4, 0xbb2, 0x140000}};
    // -55384679028254963512114.548034
    s21_decimal dec_check = {{0xc3960d42, 0x3e08a4f5, 0xb2f521fa, 0x80060000}};
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
    // 876533869546926342203.58
    s21_decimal dec_1 = {{0xc9161746, 0xb31ad3be, 0x128f, 0x20000}};
    // 1302205
    s21_decimal dec_2 = {{0x13debd, 0x0, 0x0, 0x0}};
    // 876533869546927644408.58
    s21_decimal dec_check = {{0xd0d9191a, 0xb31ad3be, 0x128f, 0x20000}};
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
    // 3
    s21_decimal dec_1 = {{0x3, 0x0, 0x0, 0x0}};
    // -333667922480.7060274813681243
    s21_decimal dec_2 = {{0x3a793e5b, 0x389d7ea9, 0xac8094f, 0x80100000}};
    // -333667922477.7060274813681243
    s21_decimal dec_check = {{0xeb363e5b, 0x3832e9d1, 0xac8094f, 0x80100000}};
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
    // -0.25281968534891844293
    s21_decimal dec_1 = {{0xd0d4d2c5, 0x5edb986e, 0x1, 0x80140000}};
    // 27302429912412532057460729
    s21_decimal dec_2 = {{0x3c3a4ff9, 0xb0f651e9, 0x169583, 0x0}};
    // 27302429912412532057460728.747
    s21_decimal dec_check = {{0x43c863ab, 0x422ff713, 0x58380a6b, 0x30000}};
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
    // -28
    s21_decimal dec_1 = {{0x1c, 0x0, 0x0, 0x80000000}};
    // 1.149303
    s21_decimal dec_2 = {{0x118977, 0x0, 0x0, 0x60000}};
    // -26.850697
    s21_decimal dec_check = {{0x199b589, 0x0, 0x0, 0x80060000}};
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
    // -8898163583747218549330211
    s21_decimal dec_1 = {{0x2a2d5123, 0x6a182ee8, 0x75c42, 0x80000000}};
    // 502535820170779713224121054
    s21_decimal dec_2 = {{0xb0411ade, 0x6627f530, 0x19fb019, 0x0}};
    // 493637656587032494674790843
    s21_decimal dec_check = {{0x8613c9bb, 0xfc0fc648, 0x19853d6, 0x0}};
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
    // 3601438379913236634054
    s21_decimal dec_1 = {{0xf2c6d9c6, 0x3bff654a, 0xc3, 0x0}};
    // -810772102006784747.32454
    s21_decimal dec_2 = {{0xdbc53a6, 0x3451b80c, 0x112b, 0x80050000}};
    // 3600627607811229849306.67546
    s21_decimal dec_check = {{0x9e4f6c1a, 0x5f9dc4a6, 0x129d641, 0x50000}};
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
    // 7
    s21_decimal dec_1 = {{0x7, 0x0, 0x0, 0x0}};
    // -90337565560277914.712318728
    s21_decimal dec_2 = {{0x9c40a308, 0x3deb8950, 0x4ab9b9, 0x80090000}};
    // -90337565560277907.712318728
    s21_decimal dec_check = {{0xfb051d08, 0x3deb894e, 0x4ab9b9, 0x80090000}};
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
    // -9496328607520352835295
    s21_decimal dec_1 = {{0x9e8716df, 0xcc088ad5, 0x202, 0x80000000}};
    // -946260022541694896557127133
    s21_decimal dec_2 = {{0xdd05f5dd, 0x9bd9f326, 0x30eba5a, 0x80000000}};
    // -946269518870302416909962428
    s21_decimal dec_check = {{0x7b8d0cbc, 0x67e27dfc, 0x30ebc5d, 0x80000000}};
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
    // 711875957508376743.3512723
    s21_decimal dec_1 = {{0x833c713, 0xbad67dfd, 0x5e374, 0x70000}};
    // -82378801659054955657859
    s21_decimal dec_2 = {{0x3a837a83, 0xc3877f50, 0x1171, 0x80000000}};
    // -82378089783097447281115.648728
    s21_decimal dec_check = {{0x99b5d2d8, 0x66ea1772, 0xa2d8f0b, 0x80060000}};
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
    // 3138467359175891.5654
    s21_decimal dec_1 = {{0x3c5f8846, 0xb38cc259, 0x1, 0x40000}};
    // -8811455493040
    s21_decimal dec_2 = {{0x93acb3b0, 0x803, 0x0, 0x80000000}};
    // 3129655903682851.5654
    s21_decimal dec_check = {{0xb2347d46, 0xb253b6a0, 0x1, 0x40000}};
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
    // 0.43084776710
    s21_decimal dec_1 = {{0x80d8506, 0xa, 0x0, 0xb0000}};
    // -78466118874650692692
    s21_decimal dec_2 = {{0x9b20cc54, 0x40efa762, 0x4, 0x80000000}};
    // -78466118874650692691.569152233
    s21_decimal dec_check = {{0xe1410e9, 0x8525af3a, 0xfd89a6fb, 0x80090000}};
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
    // 2285.173703990189745
    s21_decimal dec_1 = {{0x5c661eb1, 0x1fb69160, 0x0, 0xf0000}};
    // 413112711716647467178250992
    s21_decimal dec_2 = {{0x1813d2f0, 0xf9ea19f7, 0x155b804, 0x0}};
    // 413112711716647467178253277.17
    s21_decimal dec_check = {{0x67c1e265, 0x9f722485, 0x857be1f1, 0x20000}};
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
    // -2733698039594999
    s21_decimal dec_1 = {{0xac92bff7, 0x9b648, 0x0, 0x80000000}};
    // 3.949535452623577852299492
    s21_decimal dec_2 = {{0xf2f648e4, 0xbef3717c, 0x34458, 0x180000}};
    // -2733698039594995.0504645473764
    s21_decimal dec_check = {{0xbb64b5e4, 0xb96085ee, 0x58549ec4, 0x800d0000}};
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
    // 24069153453751568765
    s21_decimal dec_1 = {{0xd73a897d, 0x4e06cf8a, 0x1, 0x0}};
    // -4.2557248781742648185726381072
    s21_decimal dec_2 = {{0xcb632c10, 0x35650f61, 0x898287f7, 0x801c0000}};
    // 24069153453751568760.744275122
    s21_decimal dec_check = {{0xb7056cb2, 0x38e384b9, 0x4dc5897f, 0x90000}};
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
    // -9294373072298509
    s21_decimal dec_1 = {{0xdd62620d, 0x21052e, 0x0, 0x80000000}};
    // -605.1091180577
    s21_decimal dec_2 = {{0xe123ec21, 0x580, 0x0, 0x800a0000}};
    // -9294373072299114.1091180577
    s21_decimal dec_check = {{0xfb068021, 0xbd0a522c, 0x4ce199, 0x800a0000}};
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
    // -6074454869910226.32
    s21_decimal dec_1 = {{0xb8839a28, 0x86e1473, 0x0, 0x80020000}};
    // 604621.69844
    s21_decimal dec_2 = {{0x13d37ef4, 0xe, 0x0, 0x50000}};
    // -6074454869305604.62156
    s21_decimal dec_check = {{0xae3ead4c, 0xedffe3fa, 0x20, 0x80050000}};
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
    // -452591321
    s21_decimal dec_1 = {{0x1af9fed9, 0x0, 0x0, 0x80000000}};
    // -56
    s21_decimal dec_2 = {{0x38, 0x0, 0x0, 0x80000000}};
    // -452591377
    s21_decimal dec_check = {{0x1af9ff11, 0x0, 0x0, 0x80000000}};
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
    // 92710971.68638323481
    s21_decimal dec_1 = {{0x26d12b19, 0x80a98dc1, 0x0, 0xb0000}};
    // 748938892978
    s21_decimal dec_2 = {{0x603c96b2, 0xae, 0x0, 0x0}};
    // 749031603949.68638323481
    s21_decimal dec_check = {{0x956e7b19, 0x822a8545, 0xfdc, 0xb0000}};
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
    // -561330752.237082
    s21_decimal dec_1 = {{0x16ae1a, 0x1fe87, 0x0, 0x80060000}};
    // 20312155886672469531
    s21_decimal dec_2 = {{0x1778de1b, 0x19e34629, 0x1, 0x0}};
    // 20312155886111138778.762918
    s21_decimal dec_check = {{0xaf8cea6, 0x2d4e83e1, 0x10cd44, 0x60000}};
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
    // 0.145127456880
    s21_decimal dec_1 = {{0xca454070, 0x21, 0x0, 0xc0000}};
    // -7001512516
    s21_decimal dec_2 = {{0xa1529a44, 0x1, 0x0, 0x80000000}};
    // -7001512515.854872543120
    s21_decimal dec_check = {{0x1d32ff90, 0x8d814991, 0x17b, 0x800c0000}};
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
    // 45868327322.91
    s21_decimal dec_1 = {{0xf4892083, 0x42b, 0x0, 0x20000}};
    // 0.693356353232069071098717642
    s21_decimal dec_2 = {{0x6e95a5ca, 0x395acdbf, 0x23d87eb, 0x1b0000}};
    // 45868327323.603356353232069071
    s21_decimal dec_check = {{0x50eb61cf, 0xa0586a3e, 0x9435641e, 0x120000}};
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
    // -56446809085
    s21_decimal dec_1 = {{0x247df3fd, 0xd, 0x0, 0x80000000}};
    // 388162785840908
    s21_decimal dec_2 = {{0x30f70f0c, 0x16108, 0x0, 0x0}};
    // 388106339031823
    s21_decimal dec_check = {{0xc791b0f, 0x160fb, 0x0, 0x0}};
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
    // -673624
    s21_decimal dec_1 = {{0xa4758, 0x0, 0x0, 0x80000000}};
    // -63835.408
    s21_decimal dec_2 = {{0x3ce0d10, 0x0, 0x0, 0x80030000}};
    // -737459.408
    s21_decimal dec_check = {{0x2bf4bcd0, 0x0, 0x0, 0x80030000}};
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
    // 87
    s21_decimal dec_1 = {{0x57, 0x0, 0x0, 0x0}};
    // 85734584248
    s21_decimal dec_2 = {{0xf62defb8, 0x13, 0x0, 0x0}};
    // 85734584335
    s21_decimal dec_check = {{0xf62df00f, 0x13, 0x0, 0x0}};
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
    // -82275599970369
    s21_decimal dec_1 = {{0x47e8f041, 0x4ad4, 0x0, 0x80000000}};
    // -13853327575391418
    s21_decimal dec_2 = {{0x2d169cba, 0x313787, 0x0, 0x80000000}};
    // -13935603175361787
    s21_decimal dec_check = {{0x74ff8cfb, 0x31825b, 0x0, 0x80000000}};
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
    // -4693647037933.9
    s21_decimal dec_1 = {{0x3fa4db4b, 0x2ab0, 0x0, 0x80010000}};
    // 85484835668.9
    s21_decimal dec_2 = {{0x8eec151, 0xc7, 0x0, 0x10000}};
    // -4608162202265.0
    s21_decimal dec_check = {{0x36b619fa, 0x29e9, 0x0, 0x80010000}};
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
    // -113692
    s21_decimal dec_1 = {{0x1bc1c, 0x0, 0x0, 0x80000000}};
    // 851211739
    s21_decimal dec_2 = {{0x32bc75db, 0x0, 0x0, 0x0}};
    // 851098047
    s21_decimal dec_check = {{0x32bab9bf, 0x0, 0x0, 0x0}};
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
    // 9559220290367289483900
    s21_decimal dec_1 = {{0x58b6e27c, 0x34d4af2b, 0x206, 0x0}};
    // 844174
    s21_decimal dec_2 = {{0xce18e, 0x0, 0x0, 0x0}};
    // 9559220290367290328074
    s21_decimal dec_check = {{0x58c3c40a, 0x34d4af2b, 0x206, 0x0}};
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
    // -8290930.400586089798324897251
    s21_decimal dec_1 = {{0xeb22c5e3, 0x9cb11e30, 0x1aca18cd, 0x80150000}};
    // -37614433
    s21_decimal dec_2 = {{0x23df361, 0x0, 0x0, 0x80000000}};
    // -45905363.400586089798324897251
    s21_decimal dec_check = {{0x25c2c5e3, 0x61f2149c, 0x945406d0, 0x80150000}};
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
    // -895358159.92
    s21_decimal dec_1 = {{0xd8c02138, 0x14, 0x0, 0x80020000}};
    // -85949131
    s21_decimal dec_2 = {{0x51f7acb, 0x0, 0x0, 0x80000000}};
    // -981307290.92
    s21_decimal dec_check = {{0xd90c1884, 0x16, 0x0, 0x80020000}};
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
    // -65068531
    s21_decimal dec_1 = {{0x3e0ddf3, 0x0, 0x0, 0x80000000}};
    // -679781.6332
    s21_decimal dec_2 = {{0x952e720c, 0x1, 0x0, 0x80040000}};
    // -65748312.6332
    s21_decimal dec_check = {{0x150c563c, 0x99, 0x0, 0x80040000}};
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
    // -8
    s21_decimal dec_1 = {{0x8, 0x0, 0x0, 0x80000000}};
    // 28893771
    s21_decimal dec_2 = {{0x1b8e24b, 0x0, 0x0, 0x0}};
    // 28893763
    s21_decimal dec_check = {{0x1b8e243, 0x0, 0x0, 0x0}};
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
    // 703
    s21_decimal dec_1 = {{0x2bf, 0x0, 0x0, 0x0}};
    // 453699076412672547560.8
    s21_decimal dec_2 = {{0x498c0d18, 0xf36525f7, 0xf5, 0x10000}};
    // 453699076412672548263.8
    s21_decimal dec_check = {{0x498c288e, 0xf36525f7, 0xf5, 0x10000}};
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
    // 5161709258141115187372837
    s21_decimal dec_1 = {{0xc03ea325, 0xd1cf639d, 0x44508, 0x0}};
    // -320985060684023807850
    s21_decimal dec_2 = {{0x56713f6a, 0x6690040a, 0x11, 0x80000000}};
    // 5161388273080431163564987
    s21_decimal dec_check = {{0x69cd63bb, 0x6b3f5f93, 0x444f7, 0x0}};
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
    // 4119362638
    s21_decimal dec_1 = {{0xf5887c4e, 0x0, 0x0, 0x0}};
    // -70285277962653150820265143
    s21_decimal dec_2 = {{0xb5e16cb7, 0x8d943697, 0x3a237c, 0x80000000}};
    // -70285277962653146700902505
    s21_decimal dec_check = {{0xc058f069, 0x8d943696, 0x3a237c, 0x80000000}};
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
    // 24
    s21_decimal dec_1 = {{0x18, 0x0, 0x0, 0x0}};
    // 25272300472195727538217739
    s21_decimal dec_2 = {{0x988f630b, 0x275e537c, 0x14e79e, 0x0}};
    // 25272300472195727538217763
    s21_decimal dec_check = {{0x988f6323, 0x275e537c, 0x14e79e, 0x0}};
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
    // 0.303345995907440
    s21_decimal dec_1 = {{0x3e548170, 0x113e4, 0x0, 0xf0000}};
    // -0.81
    s21_decimal dec_2 = {{0x51, 0x0, 0x0, 0x80020000}};
    // -0.506654004092560
    s21_decimal dec_check = {{0x93f01e90, 0x1cccc, 0x0, 0x800f0000}};
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
    // 975589426849105487
    s21_decimal dec_1 = {{0x31f7c64f, 0xd89fd6a, 0x0, 0x0}};
    // 83211072551466445
    s21_decimal dec_2 = {{0x94cf35cd, 0x127a007, 0x0, 0x0}};
    // 1058800499400571932
    s21_decimal dec_check = {{0xc6c6fc1c, 0xeb19d71, 0x0, 0x0}};
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
    // 1795.246061
    s21_decimal dec_1 = {{0x6b0147ed, 0x0, 0x0, 0x60000}};
    // -87974078542
    s21_decimal dec_2 = {{0x7ba9e84e, 0x14, 0x0, 0x80000000}};
    // -87974076746.753939
    s21_decimal dec_check = {{0xe9eee793, 0x1388bf4, 0x0, 0x80060000}};
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
    // -1
    s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x80000000}};
    // 35513.93
    s21_decimal dec_2 = {{0x3630a1, 0x0, 0x0, 0x20000}};
    // 35512.93
    s21_decimal dec_check = {{0x36303d, 0x0, 0x0, 0x20000}};
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
    // 15990240204236441732860715
    s21_decimal dec_1 = {{0x7b2d4b2b, 0xa88ce582, 0xd3a10, 0x0}};
    // 0.9173320
    s21_decimal dec_2 = {{0x8bf948, 0x0, 0x0, 0x70000}};
    // 15990240204236441732860715.917
    s21_decimal dec_check = {{0x28eda38d, 0x666085b1, 0x33aad112, 0x30000}};
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
    // -595120109689957341
    s21_decimal dec_1 = {{0x30c2ebdd, 0x8424a96, 0x0, 0x80000000}};
    // -828
    s21_decimal dec_2 = {{0x33c, 0x0, 0x0, 0x80000000}};
    // -595120109689958169
    s21_decimal dec_check = {{0x30c2ef19, 0x8424a96, 0x0, 0x80000000}};
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
    // 828
    s21_decimal dec_1 = {{0x33c, 0x0, 0x0, 0x0}};
    // -24029990966425446367789477
    s21_decimal dec_2 = {{0x5d7e81a5, 0x6ba7df45, 0x13e08c, 0x80000000}};
    // -24029990966425446367788649
    s21_decimal dec_check = {{0x5d7e7e69, 0x6ba7df45, 0x13e08c, 0x80000000}};
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
    // 84.669630366057853602128039
    s21_decimal dec_1 = {{0x376a60a7, 0xdbfc79db, 0x46097d, 0x180000}};
    // -85.588697779749218459003169837
    s21_decimal dec_2 = {{0x5ef8ac2d, 0xa6851ca8, 0x148d4fbb, 0x801b0000}};
    // -0.919067413691364856875130837
    s21_decimal dec_check = {{0xe76f1fd5, 0x54491c57, 0x2f83c18, 0x801b0000}};
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
    // -6771126038949083606584584
    s21_decimal dec_1 = {{0xd9ca8d08, 0x7a6374e7, 0x599d7, 0x80000000}};
    // -8927559240244528754
    s21_decimal dec_2 = {{0x2a080672, 0x7be50fd4, 0x0, 0x80000000}};
    // -6771134966508323851113338
    s21_decimal dec_check = {{0x3d2937a, 0xf64884bc, 0x599d7, 0x80000000}};
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
    // -36
    s21_decimal dec_1 = {{0x24, 0x0, 0x0, 0x80000000}};
    // -9.86
    s21_decimal dec_2 = {{0x3da, 0x0, 0x0, 0x80020000}};
    // -45.86
    s21_decimal dec_check = {{0x11ea, 0x0, 0x0, 0x80020000}};
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
    // 4171171.163
    s21_decimal dec_1 = {{0xf89f055b, 0x0, 0x0, 0x30000}};
    // 26072066593060653740106281.9
    s21_decimal dec_2 = {{0x903655a3, 0x9ee5a43e, 0xd7a9bf, 0x10000}};
    // 26072066593060653744277453.063
    s21_decimal dec_check = {{0x4dd87907, 0x11b42871, 0x543e4eda, 0x30000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_101) {
    // 24631142191940440674563
    s21_decimal dec_1 = {{0x7a5fd103, 0x41c3ca2f, 0x537, 0x0}};
    // -50.83217988
    s21_decimal dec_2 = {{0x2efbc044, 0x1, 0x0, 0x80080000}};
    // 24631142191940440674512.167820
    s21_decimal dec_check = {{0x87fc638c, 0xc3daf508, 0x4f96673d, 0x60000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_102) {
    // 484620903399448574
    s21_decimal dec_1 = {{0xddda5ffe, 0x6b9b824, 0x0, 0x0}};
    // -710
    s21_decimal dec_2 = {{0x2c6, 0x0, 0x0, 0x80000000}};
    // 484620903399447864
    s21_decimal dec_check = {{0xddda5d38, 0x6b9b824, 0x0, 0x0}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_103) {
    // 58204010138
    s21_decimal dec_1 = {{0x8d3ab69a, 0xd, 0x0, 0x0}};
    // 1970566066072.747311
    s21_decimal dec_2 = {{0x86b47d2f, 0x1b58db65, 0x0, 0x60000}};
    // 2028770076210.747311
    s21_decimal dec_check = {{0xab7bd7af, 0x1c27a3a2, 0x0, 0x60000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_104) {
    // -227671381.9941480908726772
    s21_decimal dec_1 = {{0x3e3021f4, 0xe74ad1fb, 0x1e21c, 0x80100000}};
    // 607677986181242754689309371
    s21_decimal dec_2 = {{0x6ea69abb, 0xa3b40afc, 0x1f6a8d1, 0x0}};
    // 607677986181242754461637989.01
    s21_decimal dec_check = {{0xec0d7b75, 0xf2544a95, 0xc459f1e3, 0x20000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_105) {
    // -99
    s21_decimal dec_1 = {{0x63, 0x0, 0x0, 0x80000000}};
    // -34772129310641217
    s21_decimal dec_2 = {{0x3fa50c41, 0x7b8911, 0x0, 0x80000000}};
    // -34772129310641316
    s21_decimal dec_check = {{0x3fa50ca4, 0x7b8911, 0x0, 0x80000000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_106) {
    // -0.7
    s21_decimal dec_1 = {{0x7, 0x0, 0x0, 0x80010000}};
    // -9070745516006277713845390
    s21_decimal dec_2 = {{0x6fc55c8e, 0x1987a241, 0x780ce, 0x80000000}};
    // -9070745516006277713845390.7
    s21_decimal dec_check = {{0x5db59d93, 0xff4c568e, 0x4b080c, 0x80010000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_107) {
    // 2613527844662557
    s21_decimal dec_1 = {{0x5ecaad1d, 0x948fd, 0x0, 0x0}};
    // -125724230104
    s21_decimal dec_2 = {{0x45bf81d8, 0x1d, 0x0, 0x80000000}};
    // 2613402120432453
    s21_decimal dec_check = {{0x190b2b45, 0x948e0, 0x0, 0x0}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_108) {
    // 607481554
    s21_decimal dec_1 = {{0x24356ed2, 0x0, 0x0, 0x0}};
    // 247789899
    s21_decimal dec_2 = {{0xec4f94b, 0x0, 0x0, 0x0}};
    // 855271453
    s21_decimal dec_check = {{0x32fa681d, 0x0, 0x0, 0x0}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_109) {
    // -95946028340706251723011482
    s21_decimal dec_1 = {{0x9be4759a, 0x9e509b8d, 0x4f5d5c, 0x80000000}};
    // -657991993603332
    s21_decimal dec_2 = {{0xb30b3504, 0x25670, 0x0, 0x80000000}};
    // -95946028341364243716614814
    s21_decimal dec_check = {{0x4eefaa9e, 0x9e52f1fe, 0x4f5d5c, 0x80000000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_110) {
    // -9044965
    s21_decimal dec_1 = {{0x8a03e5, 0x0, 0x0, 0x80000000}};
    // 5564784221852
    s21_decimal dec_2 = {{0xa6fc9e9c, 0x50f, 0x0, 0x0}};
    // 5564775176887
    s21_decimal dec_check = {{0xa6729ab7, 0x50f, 0x0, 0x0}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_111) {
    // -9581214978877.1265
    s21_decimal dec_1 = {{0x815383c1, 0x15464a4, 0x0, 0x80040000}};
    // 2421338.185183933038
    s21_decimal dec_2 = {{0x28fa326e, 0x219a5240, 0x0, 0xc0000}};
    // -9581212557538.941316066962
    s21_decimal dec_check = {{0x1a876e92, 0x92d0a9ea, 0x7ece6, 0x800c0000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_112) {
    // -6923125733358886884501850
    s21_decimal dec_1 = {{0xd654695a, 0x65e4f5b9, 0x5ba07, 0x80000000}};
    // 90685143960704225
    s21_decimal dec_2 = {{0x702ed4e1, 0x1422da8, 0x0, 0x0}};
    // -6923125642673742923797625
    s21_decimal dec_check = {{0x66259479, 0x64a2c811, 0x5ba07, 0x80000000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_113) {
    // -6060958.228529
    s21_decimal dec_1 = {{0x2d432031, 0x583, 0x0, 0x80060000}};
    // -6.283351645652130
    s21_decimal dec_2 = {{0xced684a2, 0x1652ac, 0x0, 0x800f0000}};
    // -6060964.511880645652130
    s21_decimal dec_check = {{0x6eb72ea2, 0x90c78730, 0x148, 0x800f0000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_114) {
    // 461725.02669007823760
    s21_decimal dec_1 = {{0x88fca390, 0x80c5ae8b, 0x2, 0xe0000}};
    // 4654.780250113
    s21_decimal dec_2 = {{0xc685f801, 0x43b, 0x0, 0x90000}};
    // 466379.80694019123760
    s21_decimal dec_check = {{0xb4892a30, 0x873b6457, 0x2, 0xe0000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_115) {
    // -68262406
    s21_decimal dec_1 = {{0x4119a06, 0x0, 0x0, 0x80000000}};
    // -22316144
    s21_decimal dec_2 = {{0x1548470, 0x0, 0x0, 0x80000000}};
    // -90578550
    s21_decimal dec_check = {{0x5661e76, 0x0, 0x0, 0x80000000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_116) {
    // -1031490401.7069
    s21_decimal dec_1 = {{0xa03098ad, 0x961, 0x0, 0x80040000}};
    // 62313495065
    s21_decimal dec_2 = {{0x822c7a19, 0xe, 0x0, 0x0}};
    // 61282004663.2931
    s21_decimal dec_check = {{0x4930d7e3, 0x22d5b, 0x0, 0x40000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_117) {
    // -283446850259747050476.84605
    s21_decimal dec_1 = {{0xf51745fd, 0x74451272, 0x177238, 0x80050000}};
    // 34408
    s21_decimal dec_2 = {{0x8668, 0x0, 0x0, 0x0}};
    // -283446850259747016068.84605
    s21_decimal dec_check = {{0x2800d4fd, 0x74451272, 0x177238, 0x80050000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_118) {
    // -3288993620822
    s21_decimal dec_1 = {{0xc74be356, 0x2fd, 0x0, 0x80000000}};
    // -27777370300720740797758808
    s21_decimal dec_2 = {{0x40ffbd58, 0x42e47a34, 0x16fa16, 0x80000000}};
    // -27777370300724029791379630
    s21_decimal dec_check = {{0x84ba0ae, 0x42e47d32, 0x16fa16, 0x80000000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_119) {
    // -65.236817198597184864900954544
    s21_decimal dec_1 = {{0xc1a139b0, 0xa34ffe6e, 0xd2caa162, 0x801b0000}};
    // 6248.0898177084048836
    s21_decimal dec_2 = {{0xa47245c4, 0x6318bdda, 0x3, 0x100000}};
    // 6182.8530005098076987350990455
    s21_decimal dec_check = {{0x47e63e77, 0xa7d724c1, 0xc7c75c7f, 0x190000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_120) {
    // -0.2353469
    s21_decimal dec_1 = {{0x23e93d, 0x0, 0x0, 0x80070000}};
    // 848971640502
    s21_decimal dec_2 = {{0xaaa72eb6, 0xc5, 0x0, 0x0}};
    // 848971640501.7646531
    s21_decimal dec_check = {{0x4e215c3, 0x75d18817, 0x0, 0x70000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_121) {
    // -4
    s21_decimal dec_1 = {{0x4, 0x0, 0x0, 0x80000000}};
    // 0.7
    s21_decimal dec_2 = {{0x7, 0x0, 0x0, 0x10000}};
    // -3.3
    s21_decimal dec_check = {{0x21, 0x0, 0x0, 0x80010000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_122) {
    // 718423974889
    s21_decimal dec_1 = {{0x4567e3e9, 0xa7, 0x0, 0x0}};
    // 4422.24268735168942
    s21_decimal dec_2 = {{0x210441ae, 0x62318a1, 0x0, 0xe0000}};
    // 718423979311.24268735168942
    s21_decimal dec_check = {{0x470881ae, 0x3217bbe7, 0x3b6d38, 0xe0000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_123) {
    // -3.8372551484
    s21_decimal dec_1 = {{0xef2eab3c, 0x8, 0x0, 0x800a0000}};
    // 850327711472
    s21_decimal dec_2 = {{0xfb7b2ef0, 0xc5, 0x0, 0x0}};
    // 850327711468.1627448516
    s21_decimal dec_check = {{0x8aef14c4, 0xf6aceb82, 0x1cc, 0xa0000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_124) {
    // 703180088116131832
    s21_decimal dec_1 = {{0x854a37f8, 0x9c23290, 0x0, 0x0}};
    // 0.18926876129593
    s21_decimal dec_2 = {{0xc1ba7939, 0x1136, 0x0, 0xe0000}};
    // 703180088116131832.18926876130
    s21_decimal dec_check = {{0x3729f5e2, 0xeb98500b, 0xe335b18f, 0xb0000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_125) {
    // -73591.96
    s21_decimal dec_1 = {{0x704adc, 0x0, 0x0, 0x80020000}};
    // -46268.1852
    s21_decimal dec_2 = {{0x1b93f6fc, 0x0, 0x0, 0x80040000}};
    // -119860.1452
    s21_decimal dec_check = {{0x477134ec, 0x0, 0x0, 0x80040000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_126) {
    // 44537471686
    s21_decimal dec_1 = {{0x5ea3e2c6, 0xa, 0x0, 0x0}};
    // -8136167368.76927553041
    s21_decimal dec_2 = {{0x9dba8e11, 0x1b334f76, 0x2c, 0x800b0000}};
    // 36401304317.23072446959
    s21_decimal dec_check = {{0x1f0ce1ef, 0x54f52d6a, 0xc5, 0xb0000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_127) {
    // 496111
    s21_decimal dec_1 = {{0x791ef, 0x0, 0x0, 0x0}};
    // 625756.944588164373865193
    s21_decimal dec_2 = {{0x247ae2e9, 0x5a18a48d, 0x8482, 0x120000}};
    // 1121867.944588164373865193
    s21_decimal dec_check = {{0xed6e2e9, 0x95488bd2, 0xed90, 0x120000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_128) {
    // -1.841347
    s21_decimal dec_1 = {{0x1c18c3, 0x0, 0x0, 0x80060000}};
    // -56694307746
    s21_decimal dec_2 = {{0x333e7ba2, 0xd, 0x0, 0x80000000}};
    // -56694307747.841347
    s21_decimal dec_check = {{0x2a18c543, 0xc96b2c, 0x0, 0x80060000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_129) {
    // 63962767381441718507533248
    s21_decimal dec_1 = {{0x8f03f3c0, 0x9151fb84, 0x34e8a4, 0x0}};
    // -537500725784421.288168943989
    s21_decimal dec_2 = {{0x3447175, 0xbafb82b8, 0x1bc9c34, 0x800c0000}};
    // 63962767380904217781748826.712
    s21_decimal dec_check = {{0xb48b0258, 0xa0c8e7be, 0xceacc2d7, 0x30000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_130) {
    // 53.52432175418356615448622410
    s21_decimal dec_1 = {{0x109bf54a, 0xa22cb7c5, 0x114b6d99, 0x1a0000}};
    // -3.23432472084977494
    s21_decimal dec_2 = {{0xa7739756, 0x47d101e, 0x0, 0x80110000}};
    // 50.28999703333379121448622410
    s21_decimal dec_check = {{0xff76194a, 0x306c2839, 0x103fe41c, 0x1a0000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_131) {
    // 564849281570420108070236
    s21_decimal dec_1 = {{0xc0f08d5c, 0x8a79188a, 0x779c, 0x0}};
    // -40337864262847.73
    s21_decimal dec_2 = {{0x1709dae5, 0xe54b5, 0x0, 0x80020000}};
    // 564849281530082243807388.27
    s21_decimal dec_check = {{0x46ed5d0b, 0x173f417e, 0x2eb926, 0x20000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_132) {
    // 206430973
    s21_decimal dec_1 = {{0xc4de2fd, 0x0, 0x0, 0x0}};
    // 0.3
    s21_decimal dec_2 = {{0x3, 0x0, 0x0, 0x10000}};
    // 206430973.3
    s21_decimal dec_check = {{0x7b0adde5, 0x0, 0x0, 0x10000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_133) {
    // -42228833934825
    s21_decimal dec_1 = {{0x2aa55de9, 0x2668, 0x0, 0x80000000}};
    // -42835972035709368970286078366
    s21_decimal dec_2 = {{0x4dc2199e, 0x150c6a3d, 0x8a6915e9, 0x80000000}};
    // -42835972035709411199120013191
    s21_decimal dec_check = {{0x78677787, 0x150c90a5, 0x8a6915e9, 0x80000000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_134) {
    // -11714
    s21_decimal dec_1 = {{0x2dc2, 0x0, 0x0, 0x80000000}};
    // -32680
    s21_decimal dec_2 = {{0x7fa8, 0x0, 0x0, 0x80000000}};
    // -44394
    s21_decimal dec_check = {{0xad6a, 0x0, 0x0, 0x80000000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_135) {
    // -0.92
    s21_decimal dec_1 = {{0x5c, 0x0, 0x0, 0x80020000}};
    // -714456776109585
    s21_decimal dec_2 = {{0x6e58ee11, 0x289cb, 0x0, 0x80000000}};
    // -714456776109585.92
    s21_decimal dec_check = {{0x1abcff00, 0xfdd377, 0x0, 0x80020000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_136) {
    // -194838060448882636711.06756
    s21_decimal dec_1 = {{0x526b4cc4, 0x3dfac53a, 0x101ddb, 0x80050000}};
    // 0.64299643
    s21_decimal dec_2 = {{0x3d5227b, 0x0, 0x0, 0x80000}};
    // -194838060448882636710.42456357
    s21_decimal dec_check = {{0xef4ebb25, 0x1b926bd1, 0x3ef4a06a, 0x80080000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_137) {
    // -81335
    s21_decimal dec_1 = {{0x13db7, 0x0, 0x0, 0x80000000}};
    // -174.28819
    s21_decimal dec_2 = {{0x109f153, 0x0, 0x0, 0x80050000}};
    // -81509.28819
    s21_decimal dec_check = {{0xe5d54db3, 0x1, 0x0, 0x80050000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_138) {
    // -3
    s21_decimal dec_1 = {{0x3, 0x0, 0x0, 0x80000000}};
    // 85579552474.2043205695425611
    s21_decimal dec_2 = {{0xe607cc4b, 0x5b3f4f36, 0x2c3e5c0, 0x100000}};
    // 85579552471.2043205695425611
    s21_decimal dec_check = {{0x96c4cc4b, 0x5ad4ba5f, 0x2c3e5c0, 0x100000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_139) {
    // 685916071524508675786660
    s21_decimal dec_1 = {{0x84ac7a4, 0x95b1d071, 0x913f, 0x0}};
    // 471192456543482560688845
    s21_decimal dec_2 = {{0x9ecb2cd, 0x64edb5ab, 0x63c7, 0x0}};
    // 1157108528067991236475505
    s21_decimal dec_check = {{0x12377a71, 0xfa9f861c, 0xf506, 0x0}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_140) {
    // -558.0208235837423137
    s21_decimal dec_1 = {{0x45cc7e21, 0x4d70e1d3, 0x0, 0x80100000}};
    // -193445.952586906
    s21_decimal dec_2 = {{0x2549849a, 0xaff0, 0x0, 0x80090000}};
    // -194003.9734104897423137
    s21_decimal dec_check = {{0xb9b10721, 0x2b75b365, 0x69, 0x80100000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_141) {
    // 2874039270914699474060379
    s21_decimal dec_1 = {{0xab11445b, 0xfb27303f, 0x26099, 0x0}};
    // 309167814.68101
    s21_decimal dec_2 = {{0x5fc6e9c5, 0x1c1e, 0x0, 0x50000}};
    // 2874039270914699783228193.6810
    s21_decimal dec_check = {{0x28ded3aa, 0xaaccb9da, 0x5cdd7ee2, 0x40000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_142) {
    // -47083113620790221
    s21_decimal dec_1 = {{0xa6495bcd, 0xa745d7, 0x0, 0x80000000}};
    // 566.23752650488184591775
    s21_decimal dec_2 = {{0xaba0559f, 0x946c961e, 0xbfd, 0x140000}};
    // -47083113620789654.762473495118
    s21_decimal dec_check = {{0x123d9a4e, 0xc089967d, 0x98223d1f, 0x800c0000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_143) {
    // -7
    s21_decimal dec_1 = {{0x7, 0x0, 0x0, 0x80000000}};
    // -51069797
    s21_decimal dec_2 = {{0x30b4365, 0x0, 0x0, 0x80000000}};
    // -51069804
    s21_decimal dec_check = {{0x30b436c, 0x0, 0x0, 0x80000000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_144) {
    // 49405146730022761.5
    s21_decimal dec_1 = {{0x2130ca1f, 0x6db3931, 0x0, 0x10000}};
    // -42855077387563.7502
    s21_decimal dec_2 = {{0x85137cfe, 0x5f284a8, 0x0, 0x80040000}};
    // 49362291652635197.7498
    s21_decimal dec_check = {{0x21820c1a, 0xc264e341, 0x1a, 0x40000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_145) {
    // -5510144507320309
    s21_decimal dec_1 = {{0x7e0517f5, 0x139372, 0x0, 0x80000000}};
    // 576680307723894034.459259943
    s21_decimal dec_2 = {{0x50e3f427, 0x1f898f7d, 0x1dd04ce, 0x90000}};
    // 571170163216573725.459259943
    s21_decimal dec_check = {{0x6b9aa227, 0x97463c77, 0x1d875fc, 0x90000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_146) {
    // 800.050258681357190915614
    s21_decimal dec_1 = {{0x4ae9661e, 0xcfb9bec1, 0xa96a, 0x150000}};
    // 8
    s21_decimal dec_2 = {{0x8, 0x0, 0x0, 0x0}};
    // 808.050258681357190915614
    s21_decimal dec_check = {{0x3fe9661e, 0x7e072cf0, 0xab1c, 0x150000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_147) {
    // -48144409
    s21_decimal dec_1 = {{0x2dea019, 0x0, 0x0, 0x80000000}};
    // 806.83682
    s21_decimal dec_2 = {{0x4cf22a2, 0x0, 0x0, 0x50000}};
    // -48143602.16318
    s21_decimal dec_check = {{0xee3b02fe, 0x460, 0x0, 0x80050000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_148) {
    // 65301540916629587489829653
    s21_decimal dec_1 = {{0x9301b315, 0xa05d42b2, 0x360423, 0x0}};
    // -9.684130
    s21_decimal dec_2 = {{0x93c4a2, 0x0, 0x0, 0x80060000}};
    // 65301540916629587489829643.316
    s21_decimal dec_check = {{0x3ea36434, 0x6c4c898e, 0xd3002b2a, 0x30000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_149) {
    // -979927977075060611142.0
    s21_decimal dec_1 = {{0x3527f2bc, 0x385348b0, 0x213, 0x80010000}};
    // 56806893180767301457045093
    s21_decimal dec_2 = {{0x31ee6665, 0xd995788c, 0x2efd53, 0x0}};
    // 56805913252790226396433951.0
    s21_decimal dec_check = {{0xbe280d36, 0x47836cc9, 0x1d5e333, 0x10000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_150) {
    // 7777361590881426318847903185
    s21_decimal dec_1 = {{0xdfb405d1, 0xa6e6118b, 0x19214860, 0x0}};
    // -618641711737339697523974590
    s21_decimal dec_2 = {{0x5d11e1be, 0x648dcd9b, 0x1ffba7a, 0x80000000}};
    // 7158719879144086621323928595
    s21_decimal dec_check = {{0x82a22413, 0x425843f0, 0x17218de6, 0x0}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_151) {
    // -80.00213
    s21_decimal dec_1 = {{0x7a12d5, 0x0, 0x0, 0x80050000}};
    // 3.84
    s21_decimal dec_2 = {{0x180, 0x0, 0x0, 0x20000}};
    // -76.16213
    s21_decimal dec_check = {{0x7436d5, 0x0, 0x0, 0x80050000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_152) {
    // -6086869.95
    s21_decimal dec_1 = {{0x2447d393, 0x0, 0x0, 0x80020000}};
    // -95.3026503817
    s21_decimal dec_2 = {{0xe4ce6489, 0xdd, 0x0, 0x800a0000}};
    // -6086965.2526503817
    s21_decimal dec_check = {{0x60719789, 0xd840a0, 0x0, 0x800a0000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_153) {
    // -6.470810316
    s21_decimal dec_1 = {{0x81b0bacc, 0x1, 0x0, 0x80090000}};
    // 0.77687944830
    s21_decimal dec_2 = {{0x168ff67e, 0x12, 0x0, 0xb0000}};
    // -5.69393086770
    s21_decimal dec_check = {{0x92790132, 0x84, 0x0, 0x800b0000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_154) {
    // 3.04379082337
    s21_decimal dec_1 = {{0xde683661, 0x46, 0x0, 0xb0000}};
    // 968.5
    s21_decimal dec_2 = {{0x25d5, 0x0, 0x0, 0x10000}};
    // 971.54379082337
    s21_decimal dec_check = {{0x8440ea61, 0x585c, 0x0, 0xb0000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_155) {
    // 0.67011755051185469
    s21_decimal dec_1 = {{0xf99f53d, 0xee12d6, 0x0, 0x110000}};
    // 629358381668.88764205684
    s21_decimal dec_2 = {{0x7c44ea74, 0xc235246c, 0xd53, 0xb0000}};
    // 629358381669.55775960735185469
    s21_decimal dec_check = {{0xa2127a3d, 0x63f66e08, 0xcb5b4e1f, 0x110000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_156) {
    // -110.548
    s21_decimal dec_1 = {{0x1afd4, 0x0, 0x0, 0x80030000}};
    // 509400307998159481.02
    s21_decimal dec_2 = {{0xde7cb746, 0xc2ef581e, 0x2, 0x20000}};
    // 509400307998159370.472
    s21_decimal dec_check = {{0xb0dd78e8, 0x9d597134, 0x1b, 0x30000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_157) {
    // 42074907346052935109974668
    s21_decimal dec_1 = {{0x72421a8c, 0x4c2e9600, 0x22cdb5, 0x0}};
    // -346453893261190689315842
    s21_decimal dec_2 = {{0x12e1dc02, 0x4d9da9a8, 0x495d, 0x80000000}};
    // 41728453452791744420658826
    s21_decimal dec_check = {{0x5f603e8a, 0xfe90ec58, 0x228457, 0x0}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_158) {
    // -211.3668708581899
    s21_decimal dec_1 = {{0xd88c420b, 0x7825e, 0x0, 0x800d0000}};
    // 1.724
    s21_decimal dec_2 = {{0x6bc, 0x0, 0x0, 0x30000}};
    // -209.6428708581899
    s21_decimal dec_check = {{0xd878d20b, 0x772b0, 0x0, 0x800d0000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_159) {
    // 52450136069215440159
    s21_decimal dec_1 = {{0xba7d4d1f, 0xd7e450dc, 0x2, 0x0}};
    // 543.2836801
    s21_decimal dec_2 = {{0x43d282c1, 0x1, 0x0, 0x70000}};
    // 52450136069215440702.2836801
    s21_decimal dec_check = {{0xb8113c41, 0xbc987e09, 0x1b1db7b, 0x70000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_160) {
    // -448530548179267826.46
    s21_decimal dec_1 = {{0x19a61eb6, 0x6e760fb7, 0x2, 0x80020000}};
    // 0.56
    s21_decimal dec_2 = {{0x38, 0x0, 0x0, 0x20000}};
    // -448530548179267825.90
    s21_decimal dec_check = {{0x19a61e7e, 0x6e760fb7, 0x2, 0x80020000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_161) {
    // -829182631
    s21_decimal dec_1 = {{0x316c52a7, 0x0, 0x0, 0x80000000}};
    // 4250466481556716843725
    s21_decimal dec_2 = {{0xc88f2cd, 0x6b12690a, 0xe6, 0x0}};
    // 4250466481555887661094
    s21_decimal dec_check = {{0xdb1ca026, 0x6b126909, 0xe6, 0x0}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_162) {
    // 5893
    s21_decimal dec_1 = {{0x1705, 0x0, 0x0, 0x0}};
    // 82024050180563595
    s21_decimal dec_2 = {{0x660d228b, 0x1236870, 0x0, 0x0}};
    // 82024050180569488
    s21_decimal dec_check = {{0x660d3990, 0x1236870, 0x0, 0x0}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_163) {
    // 835.12476242186
    s21_decimal dec_1 = {{0x437b110a, 0x4bf4, 0x0, 0xb0000}};
    // 0.3211286722499067
    s21_decimal dec_2 = {{0xf45dd1fb, 0xb68a5, 0x0, 0x100000}};
    // 835.4458910941099067
    s21_decimal dec_check = {{0x9d3db43b, 0x73f1001d, 0x0, 0x100000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_164) {
    // -189.1764973
    s21_decimal dec_1 = {{0x70c20aed, 0x0, 0x0, 0x80070000}};
    // 95751068015
    s21_decimal dec_2 = {{0x4b35596f, 0x16, 0x0, 0x0}};
    // 95751067825.8235027
    s21_decimal dec_check = {{0x8639b693, 0xd49c2e3, 0x0, 0x70000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_165) {
    // 37080956605151542.7209
    s21_decimal dec_1 = {{0xc952e989, 0x1a0437b0, 0x14, 0x40000}};
    // 35169204739.909
    s21_decimal dec_2 = {{0x77f49f45, 0x1ffc, 0x0, 0x30000}};
    // 37080991774356282.6299
    s21_decimal dec_check = {{0x78e1223b, 0x1a05778d, 0x14, 0x40000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_166) {
    // -0.2386839076878400920193
    s21_decimal dec_1 = {{0xce5c9a81, 0x640bd667, 0x81, 0x80160000}};
    // 2364548470703817438
    s21_decimal dec_2 = {{0x627e82de, 0x20d0904e, 0x0, 0x0}};
    // 2364548470703817437.7613160923
    s21_decimal dec_check = {{0x95d371db, 0x713293d4, 0x4c671626, 0xa0000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_167) {
    // 7460121696950215141683346193
    s21_decimal dec_1 = {{0x1bbbb11, 0x8abf6f40, 0x181ade37, 0x0}};
    // -995
    s21_decimal dec_2 = {{0x3e3, 0x0, 0x0, 0x80000000}};
    // 7460121696950215141683345198
    s21_decimal dec_check = {{0x1bbb72e, 0x8abf6f40, 0x181ade37, 0x0}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_168) {
    // 7325875624233403668932482212
    s21_decimal dec_1 = {{0x259e54a4, 0x5b8d2bf6, 0x17abd281, 0x0}};
    // 654
    s21_decimal dec_2 = {{0x28e, 0x0, 0x0, 0x0}};
    // 7325875624233403668932482866
    s21_decimal dec_check = {{0x259e5732, 0x5b8d2bf6, 0x17abd281, 0x0}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_169) {
    // 19384254971429072688.56606
    s21_decimal dec_1 = {{0x52a17b1e, 0x41bb0907, 0x19a7a, 0x50000}};
    // -42607015104.4937353261424627
    s21_decimal dec_2 = {{0x68071ff3, 0x2b71f1c9, 0x1606fdd, 0x80100000}};
    // 19384254928822057584.072324674
    s21_decimal dec_check = {{0xd0cbf642, 0x4ac6278c, 0x3ea247a5, 0x90000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_170) {
    // 22
    s21_decimal dec_1 = {{0x16, 0x0, 0x0, 0x0}};
    // 152806864360567960.15
    s21_decimal dec_2 = {{0x614b8b6f, 0xd40fe75a, 0x0, 0x20000}};
    // 152806864360567982.15
    s21_decimal dec_check = {{0x614b9407, 0xd40fe75a, 0x0, 0x20000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_171) {
    // 86.14669
    s21_decimal dec_1 = {{0x83730d, 0x0, 0x0, 0x50000}};
    // 838034017689673104803
    s21_decimal dec_2 = {{0x86637da3, 0x6e0eeafe, 0x2d, 0x0}};
    // 838034017689673104889.14669
    s21_decimal dec_check = {{0x90184aed, 0x83529fcf, 0x45520f, 0x50000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_172) {
    // -10604986.62818601785
    s21_decimal dec_1 = {{0x42145b39, 0xeb7a5ea, 0x0, 0x800b0000}};
    // -91183615263578710
    s21_decimal dec_2 = {{0xd51f1a56, 0x143f303, 0x0, 0x80000000}};
    // -91183615274183696.62818601785
    s21_decimal dec_check = {{0xc5964b39, 0xe0737886, 0x1d768828, 0x800b0000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_173) {
    // 705442533149902259
    s21_decimal dec_1 = {{0xdda05b3, 0x9ca3c3f, 0x0, 0x0}};
    // -760572922831682
    s21_decimal dec_2 = {{0xaee42342, 0x2b3bc, 0x0, 0x80000000}};
    // 704681960227070577
    s21_decimal dec_check = {{0x5ef5e271, 0x9c78882, 0x0, 0x0}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_174) {
    // -3977962093
    s21_decimal dec_1 = {{0xed1ae26d, 0x0, 0x0, 0x80000000}};
    // -5712212
    s21_decimal dec_2 = {{0x572954, 0x0, 0x0, 0x80000000}};
    // -3983674305
    s21_decimal dec_check = {{0xed720bc1, 0x0, 0x0, 0x80000000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_175) {
    // 451560876
    s21_decimal dec_1 = {{0x1aea45ac, 0x0, 0x0, 0x0}};
    // 49055512.249
    s21_decimal dec_2 = {{0x6befb6b9, 0xb, 0x0, 0x30000}};
    // 500616388.249
    s21_decimal dec_check = {{0x8f0fde99, 0x74, 0x0, 0x30000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_176) {
    // -3274588
    s21_decimal dec_1 = {{0x31f75c, 0x0, 0x0, 0x80000000}};
    // 502715306251.4777917912579385
    s21_decimal dec_2 = {{0x123cfd39, 0x96fc14cf, 0x103e5d11, 0x100000}};
    // 502712031663.4777917912579385
    s21_decimal dec_check = {{0xb1e0fd39, 0x6e9c47ea, 0x103e5622, 0x100000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_177) {
    // 2762325584635317
    s21_decimal dec_1 = {{0xb39e5b5, 0x9d052, 0x0, 0x0}};
    // 181966836.97248
    s21_decimal dec_2 = {{0xbede2c60, 0x108c, 0x0, 0x50000}};
    // 2762325766602153.97248
    s21_decimal dec_check = {{0xf6ff7b80, 0xf97f40ed, 0xe, 0x50000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_178) {
    // 45910684486634492857852594682
    s21_decimal dec_1 = {{0x2e2b89fa, 0x908510a, 0x94586d99, 0x0}};
    // -800290563
    s21_decimal dec_2 = {{0x2fb37703, 0x0, 0x0, 0x80000000}};
    // 45910684486634492857052304119
    s21_decimal dec_check = {{0xfe7812f7, 0x9085109, 0x94586d99, 0x0}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_179) {
    // -3909478102
    s21_decimal dec_1 = {{0xe905e6d6, 0x0, 0x0, 0x80000000}};
    // 3265454553.4140017998130872
    s21_decimal dec_2 = {{0x69bd6eb8, 0x75e2272e, 0x1b02de, 0x100000}};
    // -644023548.5859982001869128
    s21_decimal dec_check = {{0x67989148, 0xdd814fa7, 0x553c5, 0x80100000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_180) {
    // 709657389910382825244202
    s21_decimal dec_1 = {{0x8f4d062a, 0x9aac657f, 0x9646, 0x0}};
    // 82946582063919
    s21_decimal dec_2 = {{0x818f2b2f, 0x4b70, 0x0, 0x0}};
    // 709657389993329407308121
    s21_decimal dec_check = {{0x10dc3159, 0x9aacb0f0, 0x9646, 0x0}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_181) {
    // -811.938042933332
    s21_decimal dec_1 = {{0xea0f054, 0x2e274, 0x0, 0x800c0000}};
    // 6.64396151
    s21_decimal dec_2 = {{0x2799e177, 0x0, 0x0, 0x80000}};
    // -805.294081423332
    s21_decimal dec_check = {{0x23a9b7e4, 0x2dc69, 0x0, 0x800c0000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_182) {
    // 177
    s21_decimal dec_1 = {{0xb1, 0x0, 0x0, 0x0}};
    // 0.055
    s21_decimal dec_2 = {{0x37, 0x0, 0x0, 0x30000}};
    // 177.055
    s21_decimal dec_check = {{0x2b39f, 0x0, 0x0, 0x30000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_183) {
    // 2213
    s21_decimal dec_1 = {{0x8a5, 0x0, 0x0, 0x0}};
    // -4148973342.631037
    s21_decimal dec_2 = {{0x2245247d, 0xebd78, 0x0, 0x80060000}};
    // -4148971129.631037
    s21_decimal dec_check = {{0x9e5d713d, 0xebd77, 0x0, 0x80060000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_184) {
    // 21354211911090352.80
    s21_decimal dec_1 = {{0x65e54510, 0x1da28a42, 0x0, 0x20000}};
    // -40142958869322267754275.54980
    s21_decimal dec_2 = {{0x73ef9ea4, 0x14a0b60b, 0xcf88c38, 0x80050000}};
    // -40142937515110356663922.74980
    s21_decimal dec_check = {{0x6c59d824, 0x51b4a2ad, 0xcf88bc4, 0x80050000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_185) {
    // 799756972187461339
    s21_decimal dec_1 = {{0x99e026db, 0xb194eba, 0x0, 0x0}};
    // 844912913308174025875
    s21_decimal dec_2 = {{0x2208493, 0xcd85aa1d, 0x2d, 0x0}};
    // 845712670280361487214
    s21_decimal dec_check = {{0x9c00ab6e, 0xd89ef8d7, 0x2d, 0x0}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_186) {
    // 6111.7697380993
    s21_decimal dec_1 = {{0x12a45281, 0x3796, 0x0, 0xa0000}};
    // -187
    s21_decimal dec_2 = {{0xbb, 0x0, 0x0, 0x80000000}};
    // 5924.7697380993
    s21_decimal dec_check = {{0xadf4c681, 0x35e2, 0x0, 0xa0000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_187) {
    // 26757621974679869
    s21_decimal dec_1 = {{0x58d5c13d, 0x5f0fea, 0x0, 0x0}};
    // 32672598244.069313
    s21_decimal dec_2 = {{0x143a0fc1, 0x74138e, 0x0, 0x60000}};
    // 26757654647278113.069313
    s21_decimal dec_check = {{0xb80f1901, 0x890dad91, 0x5aa, 0x60000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_188) {
    // -335431271655264214365267
    s21_decimal dec_1 = {{0x2998b453, 0xc4031b6b, 0x4707, 0x80000000}};
    // 636.1863849795114132733
    s21_decimal dec_2 = {{0x14d664fd, 0xe098b8ca, 0x158, 0x130000}};
    // -335431271655264214364630.81362
    s21_decimal dec_check = {{0x9e5c6792, 0x3db66458, 0x6c623977, 0x80050000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_189) {
    // 9178277787386225
    s21_decimal dec_1 = {{0x532ac171, 0x209b98, 0x0, 0x0}};
    // 3906.647460
    s21_decimal dec_2 = {{0xe8dab5a4, 0x0, 0x0, 0x60000}};
    // 9178277787390131.647460
    s21_decimal dec_check = {{0xf0933e4, 0x8e310b08, 0x1f1, 0x60000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_190) {
    // -389
    s21_decimal dec_1 = {{0x185, 0x0, 0x0, 0x80000000}};
    // -5814183311
    s21_decimal dec_2 = {{0x5a8d658f, 0x1, 0x0, 0x80000000}};
    // -5814183700
    s21_decimal dec_check = {{0x5a8d6714, 0x1, 0x0, 0x80000000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_191) {
    // 79130671640321103
    s21_decimal dec_1 = {{0x35f59c4f, 0x11920ed, 0x0, 0x0}};
    // -797
    s21_decimal dec_2 = {{0x31d, 0x0, 0x0, 0x80000000}};
    // 79130671640320306
    s21_decimal dec_check = {{0x35f59932, 0x11920ed, 0x0, 0x0}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_192) {
    // -957557448.2991490278
    s21_decimal dec_1 = {{0x3b00a4e6, 0x84e34642, 0x0, 0x800a0000}};
    // 5813200356045478.91807224923
    s21_decimal dec_2 = {{0x548d845b, 0x468d124f, 0x1e0db4e, 0xb0000}};
    // 5813199398488030.61892322143
    s21_decimal dec_check = {{0x687135f, 0x15ac53b9, 0x1e0db49, 0xb0000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_193) {
    // 43150974918460753
    s21_decimal dec_1 = {{0x43ba0551, 0x994d95, 0x0, 0x0}};
    // -98153435618981157269
    s21_decimal dec_2 = {{0x18b9995, 0x52270da8, 0x5, 0x80000000}};
    // -98110284644062696516
    s21_decimal dec_check = {{0xbdd19444, 0x518dc012, 0x5, 0x80000000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_194) {
    // 239793829706
    s21_decimal dec_1 = {{0xd4d3774a, 0x37, 0x0, 0x0}};
    // -35510570305306328631172.763029
    s21_decimal dec_2 = {{0xf1f98d95, 0x8f84ac9a, 0x72bda7c1, 0x80060000}};
    // -35510570305066534801466.763029
    s21_decimal dec_check = {{0x3b04a715, 0x8c30c163, 0x72bda7c1, 0x80060000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_195) {
    // 7342531466.910
    s21_decimal dec_1 = {{0x90fad69e, 0x6ad, 0x0, 0x30000}};
    // 2012303933944.66858896
    s21_decimal dec_2 = {{0xc14f2790, 0xe8a1f8a0, 0xa, 0x80000}};
    // 2019646465411.57858896
    s21_decimal dec_check = {{0x8109fe50, 0xf2d28ff9, 0xa, 0x80000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_196) {
    // 76
    s21_decimal dec_1 = {{0x4c, 0x0, 0x0, 0x0}};
    // 8430113578058
    s21_decimal dec_2 = {{0xc9ecdc4a, 0x7aa, 0x0, 0x0}};
    // 8430113578134
    s21_decimal dec_check = {{0xc9ecdc96, 0x7aa, 0x0, 0x0}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_197) {
    // 3.44982
    s21_decimal dec_1 = {{0x54396, 0x0, 0x0, 0x50000}};
    // -3627.6974351
    s21_decimal dec_2 = {{0x7246b30f, 0x8, 0x0, 0x80070000}};
    // -3624.2476151
    s21_decimal dec_check = {{0x70384c77, 0x8, 0x0, 0x80070000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_198) {
    // 51619073821722576713
    s21_decimal dec_1 = {{0xba708749, 0xcc5bca26, 0x2, 0x0}};
    // 58454652800105323
    s21_decimal dec_2 = {{0x6f9e7b6b, 0xcfac32, 0x0, 0x0}};
    // 51677528474522682036
    s21_decimal dec_check = {{0x2a0f02b4, 0xcd2b7659, 0x2, 0x0}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_199) {
    // 20316708947076510.9749934912
    s21_decimal dec_1 = {{0x9a6eeb40, 0xfd34df57, 0xa80e4d, 0xa0000}};
    // 933163927
    s21_decimal dec_2 = {{0x379ef397, 0x0, 0x0, 0x0}};
    // 20316709880240437.9749934912
    s21_decimal dec_check = {{0x2ede6740, 0x7eb583d1, 0xa80e4e, 0xa0000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_200) {
    // -17160020375452
    s21_decimal dec_1 = {{0x60eb379c, 0xf9b, 0x0, 0x80000000}};
    // 1846390474
    s21_decimal dec_2 = {{0x6e0daeca, 0x0, 0x0, 0x0}};
    // -17158173984978
    s21_decimal dec_check = {{0xf2dd88d2, 0xf9a, 0x0, 0x80000000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_201) {
    // -321305292838417119297.085
    s21_decimal dec_1 = {{0xb9bfbe3d, 0xfeacf023, 0x4409, 0x80030000}};
    // 47.96
    s21_decimal dec_2 = {{0x12bc, 0x0, 0x0, 0x20000}};
    // -321305292838417119249.125
    s21_decimal dec_check = {{0xb9bf02e5, 0xfeacf023, 0x4409, 0x80030000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_202) {
    // 65
    s21_decimal dec_1 = {{0x41, 0x0, 0x0, 0x0}};
    // -815956889406084426713337
    s21_decimal dec_2 = {{0xf42348f9, 0x1c924df3, 0xacc9, 0x80000000}};
    // -815956889406084426713272
    s21_decimal dec_check = {{0xf42348b8, 0x1c924df3, 0xacc9, 0x80000000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_203) {
    // 53943
    s21_decimal dec_1 = {{0xd2b7, 0x0, 0x0, 0x0}};
    // -211266.832762830133
    s21_decimal dec_2 = {{0xa7a67d35, 0x2ee9210, 0x0, 0x800c0000}};
    // -157323.832762830133
    s21_decimal dec_check = {{0x3e880d35, 0x22eed31, 0x0, 0x800c0000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_204) {
    // -9433403946028728608692225262
    s21_decimal dec_1 = {{0xf265c4ee, 0x9c62e2f3, 0x1e7b20fc, 0x80000000}};
    // 1
    s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x0}};
    // -9433403946028728608692225261
    s21_decimal dec_check = {{0xf265c4ed, 0x9c62e2f3, 0x1e7b20fc, 0x80000000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_205) {
    // 2629
    s21_decimal dec_1 = {{0xa45, 0x0, 0x0, 0x0}};
    // 772659066440065866344245
    s21_decimal dec_2 = {{0x8dbd2735, 0xee92640e, 0xa39d, 0x0}};
    // 772659066440065866346874
    s21_decimal dec_check = {{0x8dbd317a, 0xee92640e, 0xa39d, 0x0}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_206) {
    // 7459594538320795702813922409
    s21_decimal dec_1 = {{0x521a1469, 0x3725cc64, 0x181a6e96, 0x0}};
    // 1.2086933185369440397836836
    s21_decimal dec_2 = {{0x84544224, 0xf5fe68e3, 0x9ff81, 0x190000}};
    // 7459594538320795702813922410.2
    s21_decimal dec_check = {{0x3504cc26, 0x2779fbeb, 0xf10851de, 0x10000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_207) {
    // -96521293063190
    s21_decimal dec_1 = {{0x1d62e416, 0x57c9, 0x0, 0x80000000}};
    // 7595675412469231240731.24680
    s21_decimal dec_2 = {{0x12e95348, 0xeb20ceb7, 0x2744cae, 0x50000}};
    // 7595675315947938177541.24680
    s21_decimal dec_check = {{0xda14188, 0x652d8e40, 0x2744cae, 0x50000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_208) {
    // -26757024129.17
    s21_decimal dec_1 = {{0xfc4ab675, 0x26e, 0x0, 0x80020000}};
    // -382295688931298562.15806793649
    s21_decimal dec_2 = {{0x9ede57b1, 0x5b1490da, 0x7b86c21a, 0x800b0000}};
    // -382295715688322691.32806793649
    s21_decimal dec_check = {{0x4c38a9b1, 0x67e920ec, 0x7b86c2ab, 0x800b0000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_209) {
    // 53524439059.23741208198708
    s21_decimal dec_1 = {{0xaf5abe34, 0x90c79670, 0x46d6c, 0xe0000}};
    // 4867932201002
    s21_decimal dec_2 = {{0x675ea02a, 0x46d, 0x0, 0x0}};
    // 4921456640061.23741208198708
    s21_decimal dec_check = {{0x4b693e34, 0xe79ce941, 0x19717e5, 0xe0000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_210) {
    // -39748910247
    s21_decimal dec_1 = {{0x41383ca7, 0x9, 0x0, 0x80000000}};
    // 50
    s21_decimal dec_2 = {{0x32, 0x0, 0x0, 0x0}};
    // -39748910197
    s21_decimal dec_check = {{0x41383c75, 0x9, 0x0, 0x80000000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_211) {
    // 407.06540734
    s21_decimal dec_1 = {{0x7a4c84be, 0x9, 0x0, 0x80000}};
    // -136515820834070266689224
    s21_decimal dec_2 = {{0xecf4b6c8, 0x89980cc4, 0x1ce8, 0x80000000}};
    // -136515820834070266688816.93459
    s21_decimal dec_check = {{0xe4f9cb13, 0xa27bfc10, 0x2c1c52f3, 0x80050000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_212) {
    // -693302671175875.4
    s21_decimal dec_1 = {{0x125f67a2, 0x18a18d, 0x0, 0x80010000}};
    // 0
    s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x0}};
    // -693302671175875.4
    s21_decimal dec_check = {{0x125f67a2, 0x18a18d, 0x0, 0x80010000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_213) {
    // -7205.5968
    s21_decimal dec_1 = {{0x44b7ca0, 0x0, 0x0, 0x80040000}};
    // 4997760.4769001
    s21_decimal dec_2 = {{0x516104e9, 0x2d74, 0x0, 0x70000}};
    // 4990554.8801001
    s21_decimal dec_check = {{0x8a8233e9, 0x2d63, 0x0, 0x70000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_214) {
    // 88221150633.78098176173319221
    s21_decimal dec_1 = {{0x2284a435, 0xe1af514d, 0x1c817b87, 0x110000}};
    // -684358196992880756245492908
    s21_decimal dec_2 = {{0x34a574ac, 0x3267daf5, 0x236167c, 0x80000000}};
    // -684358196992880668024342274.22
    s21_decimal dec_check = {{0x8198bcde, 0xb0917fc2, 0xdd20c883, 0x80020000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_215) {
    // 0.71378
    s21_decimal dec_1 = {{0x116d2, 0x0, 0x0, 0x50000}};
    // 550920451396532159510404043
    s21_decimal dec_2 = {{0xc7cedbcb, 0x83776805, 0x1c7b5f1, 0x0}};
    // 550920451396532159510404043.71
    s21_decimal dec_check = {{0xccddb93, 0x5aa4a242, 0xb2031257, 0x20000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_216) {
    // -3.880663205427315355
    s21_decimal dec_1 = {{0xec6c829b, 0x35dae29f, 0x0, 0x80120000}};
    // 0.5351612184741497
    s21_decimal dec_2 = {{0x4f3f4679, 0x130343, 0x0, 0x100000}};
    // -3.345501986953165655
    s21_decimal dec_check = {{0xf7b4fb57, 0x2e6d9c54, 0x0, 0x80120000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_217) {
    // 0.146926571066543
    s21_decimal dec_1 = {{0x21394af, 0x85a1, 0x0, 0xf0000}};
    // -2907271.6191558
    s21_decimal dec_2 = {{0x4ebd746, 0x1a71, 0x0, 0x80070000}};
    // -2907271.472229228933457
    s21_decimal dec_check = {{0xaa1ef151, 0x9a7f209b, 0x9d, 0x800f0000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_218) {
    // 449197
    s21_decimal dec_1 = {{0x6daad, 0x0, 0x0, 0x0}};
    // -58.4
    s21_decimal dec_2 = {{0x248, 0x0, 0x0, 0x80010000}};
    // 449138.6
    s21_decimal dec_check = {{0x44887a, 0x0, 0x0, 0x10000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_219) {
    // -1737080166900.8291
    s21_decimal dec_1 = {{0xeef1eba3, 0x3db6a6, 0x0, 0x80040000}};
    // -321822411.82584966805
    s21_decimal dec_2 = {{0xc3ec8e95, 0xbe9e49d8, 0x1, 0x800b0000}};
    // -1737401989312.65494966805
    s21_decimal dec_check = {{0xe5bbe215, 0x799d4cf5, 0x24ca, 0x800b0000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_220) {
    // 1
    s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x0}};
    // 34858766063952132654864.3
    s21_decimal dec_2 = {{0x6d0cc6a3, 0xf9963710, 0x49d0, 0x10000}};
    // 34858766063952132654865.3
    s21_decimal dec_check = {{0x6d0cc6ad, 0xf9963710, 0x49d0, 0x10000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_221) {
    // -620445
    s21_decimal dec_1 = {{0x9779d, 0x0, 0x0, 0x80000000}};
    // 91833846206140278
    s21_decimal dec_2 = {{0x85798f76, 0x1464265, 0x0, 0x0}};
    // 91833846205519833
    s21_decimal dec_check = {{0x857017d9, 0x1464265, 0x0, 0x0}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_222) {
    // 4
    s21_decimal dec_1 = {{0x4, 0x0, 0x0, 0x0}};
    // 12951826
    s21_decimal dec_2 = {{0xc5a112, 0x0, 0x0, 0x0}};
    // 12951830
    s21_decimal dec_check = {{0xc5a116, 0x0, 0x0, 0x0}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_223) {
    // 0
    s21_decimal dec_1 = {{0x0, 0x0, 0x0, 0x0}};
    // -34364551
    s21_decimal dec_2 = {{0x20c5c87, 0x0, 0x0, 0x80000000}};
    // -34364551
    s21_decimal dec_check = {{0x20c5c87, 0x0, 0x0, 0x80000000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_224) {
    // 561552746726390348089396
    s21_decimal dec_1 = {{0xe55b8834, 0xd5dca9af, 0x76e9, 0x0}};
    // 6789442154
    s21_decimal dec_2 = {{0x94aeaa6a, 0x1, 0x0, 0x0}};
    // 561552746726397137531550
    s21_decimal dec_check = {{0x7a0a329e, 0xd5dca9b1, 0x76e9, 0x0}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_225) {
    // 4609160136554804124
    s21_decimal dec_1 = {{0x4c3d739c, 0x3ff706b9, 0x0, 0x0}};
    // -968264752
    s21_decimal dec_2 = {{0x39b68c30, 0x0, 0x0, 0x80000000}};
    // 4609160135586539372
    s21_decimal dec_check = {{0x1286e76c, 0x3ff706b9, 0x0, 0x0}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_226) {
    // 2421756.86849
    s21_decimal dec_1 = {{0x62cbb8c1, 0x38, 0x0, 0x50000}};
    // 16128257
    s21_decimal dec_2 = {{0xf61901, 0x0, 0x0, 0x0}};
    // 18550013.86849
    s21_decimal dec_check = {{0xe6b2df61, 0x1af, 0x0, 0x50000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_227) {
    // 1724897236
    s21_decimal dec_1 = {{0x66cfd7d4, 0x0, 0x0, 0x0}};
    // -4763182073542216.301
    s21_decimal dec_2 = {{0x5fe0a6d, 0x421a38dc, 0x0, 0x80030000}};
    // -4763180348644980.301
    s21_decimal dec_check = {{0x6a1af64d, 0x421a374a, 0x0, 0x80030000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_228) {
    // -279791181161352195319431
    s21_decimal dec_1 = {{0x12fda687, 0x82a4850a, 0x3b3f, 0x80000000}};
    // 9233407.441945
    s21_decimal dec_2 = {{0xd1f87c19, 0x865, 0x0, 0x60000}};
    // -279791181161352186086023.55806
    s21_decimal dec_check = {{0x4ed4185e, 0x49807e63, 0x5a67c8b8, 0x80050000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_229) {
    // 285557481.06707030801725
    s21_decimal dec_1 = {{0x5df47d3d, 0x29ce836, 0x60c, 0xe0000}};
    // -699
    s21_decimal dec_2 = {{0x2bb, 0x0, 0x0, 0x80000000}};
    // 285556782.06707030801725
    s21_decimal dec_check = {{0x6027bd3d, 0x1a49288, 0x60c, 0xe0000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_230) {
    // -17905163887783657009
    s21_decimal dec_1 = {{0xb87f3e31, 0xf87bebb0, 0x0, 0x80000000}};
    // 40402854053863720
    s21_decimal dec_2 = {{0x83cae128, 0x8f8a2e, 0x0, 0x0}};
    // -17864761033729793289
    s21_decimal dec_check = {{0x34b45d09, 0xf7ec6182, 0x0, 0x80000000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_231) {
    // -121567782598436505993237.2664
    s21_decimal dec_1 = {{0xcbf73eb8, 0xffad1bd9, 0x3ed95ca, 0x80040000}};
    // -11
    s21_decimal dec_2 = {{0xb, 0x0, 0x0, 0x80000000}};
    // -121567782598436505993248.2664
    s21_decimal dec_check = {{0xcbf8ec68, 0xffad1bd9, 0x3ed95ca, 0x80040000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_232) {
    // 214144095822962.89196
    s21_decimal dec_1 = {{0x837dcfac, 0x292f440e, 0x1, 0x50000}};
    // -498416456156042555012772
    s21_decimal dec_2 = {{0x1463b6a4, 0x35d1865c, 0x698b, 0x80000000}};
    // -498416455941898459189809.10804
    s21_decimal dec_check = {{0x23122ed4, 0xac74fc8e, 0xa10c0afd, 0x80050000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_233) {
    // 77456367476923242088081.5
    s21_decimal dec_1 = {{0xec7b41af, 0x2e527462, 0xa405, 0x10000}};
    // 9020.3755082087867
    s21_decimal dec_2 = {{0x5b12fdbb, 0x14077d6, 0x0, 0xd0000}};
    // 77456367476923242097101.875508
    s21_decimal dec_check = {{0xacc1a934, 0x90d77219, 0xfa4667ce, 0x60000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_234) {
    // -820160.1409
    s21_decimal dec_1 = {{0xe8da8181, 0x1, 0x0, 0x80040000}};
    // 7759496181255893
    s21_decimal dec_2 = {{0x7d850ed5, 0x1b9138, 0x0, 0x0}};
    // 7759496180435732.8591
    s21_decimal dec_check = {{0x34b8decf, 0x34d8aea5, 0x4, 0x40000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_235) {
    // -0.873807031732249109
    s21_decimal dec_1 = {{0xa0a3a215, 0xc2062dd, 0x0, 0x80120000}};
    // -61301589916754
    s21_decimal dec_2 = {{0xe37dbc52, 0x37c0, 0x0, 0x80000000}};
    // -61301589916754.873807031732249
    s21_decimal dec_check = {{0x1b4f8819, 0x3a61e6b8, 0xc6137c98, 0x800f0000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_236) {
    // 779028899881
    s21_decimal dec_1 = {{0x61bda829, 0xb5, 0x0, 0x0}};
    // 8639541418
    s21_decimal dec_2 = {{0x2f4f0aa, 0x2, 0x0, 0x0}};
    // 787668441299
    s21_decimal dec_check = {{0x64b298d3, 0xb7, 0x0, 0x0}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_237) {
    // -5204901655813403
    s21_decimal dec_1 = {{0x9a491d1b, 0x127dd4, 0x0, 0x80000000}};
    // -464442276380023.0
    s21_decimal dec_2 = {{0xf105e6a6, 0x108013, 0x0, 0x80010000}};
    // -5669343932193426.0
    s21_decimal dec_check = {{0xf7e109b4, 0xc96a61, 0x0, 0x80010000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_238) {
    // 419242663734484927921234
    s21_decimal dec_1 = {{0xf3b63c52, 0x30ba2fae, 0x58c7, 0x0}};
    // -21417513023194894
    s21_decimal dec_2 = {{0x57b8470e, 0x4c171d, 0x0, 0x80000000}};
    // 419242642316971904726340
    s21_decimal dec_check = {{0x9bfdf544, 0x306e1891, 0x58c7, 0x0}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_239) {
    // -244921669.40007903
    s21_decimal dec_1 = {{0xfe3d1ddf, 0x57037e, 0x0, 0x80080000}};
    // 745681
    s21_decimal dec_2 = {{0xb60d1, 0x0, 0x0, 0x0}};
    // -244175988.40007903
    s21_decimal dec_check = {{0x41206cdf, 0x56bfad, 0x0, 0x80080000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_240) {
    // -60043607770
    s21_decimal dec_1 = {{0xfae0beda, 0xd, 0x0, 0x80000000}};
    // -84357295006435604021223893
    s21_decimal dec_2 = {{0xf5a1d5, 0x2023f914, 0x45c75a, 0x80000000}};
    // -84357295006435664064831663
    s21_decimal dec_check = {{0xfbd660af, 0x2023f921, 0x45c75a, 0x80000000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_241) {
    // 1031235
    s21_decimal dec_1 = {{0xfbc43, 0x0, 0x0, 0x0}};
    // -1496836112527721
    s21_decimal dec_2 = {{0x50c63169, 0x5515d, 0x0, 0x80000000}};
    // -1496836111496486
    s21_decimal dec_check = {{0x50b67526, 0x5515d, 0x0, 0x80000000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_242) {
    // -875
    s21_decimal dec_1 = {{0x36b, 0x0, 0x0, 0x80000000}};
    // -36950139364782332145661966153
    s21_decimal dec_2 = {{0xff9cf749, 0xa59f0b36, 0x7764705c, 0x80000000}};
    // -36950139364782332145661967028
    s21_decimal dec_check = {{0xff9cfab4, 0xa59f0b36, 0x7764705c, 0x80000000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_243) {
    // -4.991817
    s21_decimal dec_1 = {{0x4c2b49, 0x0, 0x0, 0x80060000}};
    // 9
    s21_decimal dec_2 = {{0x9, 0x0, 0x0, 0x0}};
    // 4.008183
    s21_decimal dec_check = {{0x3d28f7, 0x0, 0x0, 0x60000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_244) {
    // -22535
    s21_decimal dec_1 = {{0x5807, 0x0, 0x0, 0x80000000}};
    // -71287524393050926
    s21_decimal dec_2 = {{0x305d632e, 0xfd43a0, 0x0, 0x80000000}};
    // -71287524393073461
    s21_decimal dec_check = {{0x305dbb35, 0xfd43a0, 0x0, 0x80000000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_245) {
    // 924715
    s21_decimal dec_1 = {{0xe1c2b, 0x0, 0x0, 0x0}};
    // -96435449168847.186533234735
    s21_decimal dec_2 = {{0x5ee7382f, 0x2cb76f0d, 0x4fc500, 0x800c0000}};
    // -96435448244132.186533234735
    s21_decimal dec_check = {{0xb96d882f, 0x1fe22fa8, 0x4fc500, 0x800c0000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_246) {
    // -775373712013
    s21_decimal dec_1 = {{0x87dfea8d, 0xb4, 0x0, 0x80000000}};
    // 517
    s21_decimal dec_2 = {{0x205, 0x0, 0x0, 0x0}};
    // -775373711496
    s21_decimal dec_check = {{0x87dfe888, 0xb4, 0x0, 0x80000000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_247) {
    // 2201230247078596488209421259
    s21_decimal dec_1 = {{0xae8cd3cb, 0xcd198940, 0x71cd0a2, 0x0}};
    // 712.8186336240216697677548
    s21_decimal dec_2 = {{0x691f26ec, 0xc16dcca8, 0x5e573, 0x160000}};
    // 2201230247078596488209421971.8
    s21_decimal dec_check = {{0xd18061c6, 0x2ff5c86, 0x4720265c, 0x10000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_248) {
    // -629876574144
    s21_decimal dec_1 = {{0xa791c7c0, 0x92, 0x0, 0x80000000}};
    // 894438861856373499000898404
    s21_decimal dec_2 = {{0x1a15c364, 0xdbe7e3c6, 0x2e3dccb, 0x0}};
    // 894438861856372869124324260
    s21_decimal dec_check = {{0x7283fba4, 0xdbe7e333, 0x2e3dccb, 0x0}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_249) {
    // -9554115914
    s21_decimal dec_1 = {{0x39783d4a, 0x2, 0x0, 0x80000000}};
    // -41.62
    s21_decimal dec_2 = {{0x1042, 0x0, 0x0, 0x80020000}};
    // -9554115955.62
    s21_decimal dec_check = {{0x72f8012a, 0xde, 0x0, 0x80020000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_250) {
    // 73.81457
    s21_decimal dec_1 = {{0x70a1d1, 0x0, 0x0, 0x50000}};
    // 1384.78656137337117
    s21_decimal dec_2 = {{0xa40a191d, 0x1ebf99a, 0x0, 0xe0000}};
    // 1458.60113137337117
    s21_decimal dec_check = {{0x673031d, 0x2063300, 0x0, 0xe0000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_251) {
    // 6856025313
    s21_decimal dec_1 = {{0x98a6a4e1, 0x1, 0x0, 0x0}};
    // 631887762020967948337
    s21_decimal dec_2 = {{0x585ca031, 0x41344bac, 0x22, 0x0}};
    // 631887762027823973650
    s21_decimal dec_check = {{0xf1034512, 0x41344bad, 0x22, 0x0}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_252) {
    // -76978846.2394822701
    s21_decimal dec_1 = {{0x2d3cd02d, 0xaaed687, 0x0, 0x800a0000}};
    // 4509452160986870
    s21_decimal dec_2 = {{0xa62feef6, 0x100552, 0x0, 0x0}};
    // 4509452084008023.7605177299
    s21_decimal dec_check = {{0x802847d3, 0xdf8381df, 0x254d22, 0xa0000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_253) {
    // -32.36920614249202241
    s21_decimal dec_1 = {{0x12768241, 0x2cebda26, 0x0, 0x80110000}};
    // 7703515908750765238686
    s21_decimal dec_2 = {{0x43dca99e, 0x9bc25808, 0x1a1, 0x0}};
    // 7703515908750765238653.6307939
    s21_decimal dec_check = {{0xdc3c3ce3, 0x5a926e9, 0xf8e9fd76, 0x70000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_254) {
    // -6345736.056096
    s21_decimal dec_1 = {{0x7b57ed20, 0x5c5, 0x0, 0x80060000}};
    // -35503329540
    s21_decimal dec_2 = {{0x4429d104, 0x8, 0x0, 0x80000000}};
    // -35509675276.056096
    s21_decimal dec_check = {{0x8ceb3620, 0x7e27dc, 0x0, 0x80060000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_255) {
    // -8128828513179140954.99221
    s21_decimal dec_1 = {{0xbe9eb7d5, 0x77b923b6, 0xac22, 0x80050000}};
    // 6.7
    s21_decimal dec_2 = {{0x43, 0x0, 0x0, 0x10000}};
    // -8128828513179140948.29221
    s21_decimal dec_check = {{0xbe947ea5, 0x77b923b6, 0xac22, 0x80050000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_256) {
    // -74754529
    s21_decimal dec_1 = {{0x474a9e1, 0x0, 0x0, 0x80000000}};
    // 5263890941.624093
    s21_decimal dec_2 = {{0x1db63f1d, 0x12b37b, 0x0, 0x60000}};
    // 5189136412.624093
    s21_decimal dec_check = {{0xf890c4dd, 0x126f7d, 0x0, 0x60000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_257) {
    // -352693049466884239819
    s21_decimal dec_1 = {{0x9ee8b1cb, 0x1e996bd7, 0x13, 0x80000000}};
    // 771018148146
    s21_decimal dec_2 = {{0x84434932, 0xb3, 0x0, 0x0}};
    // -352693048695866091673
    s21_decimal dec_check = {{0x1aa56899, 0x1e996b24, 0x13, 0x80000000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_258) {
    // 331269938461634719855
    s21_decimal dec_1 = {{0x333ff06f, 0xf54b3de3, 0x11, 0x0}};
    // 99
    s21_decimal dec_2 = {{0x63, 0x0, 0x0, 0x0}};
    // 331269938461634719954
    s21_decimal dec_check = {{0x333ff0d2, 0xf54b3de3, 0x11, 0x0}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_259) {
    // -17
    s21_decimal dec_1 = {{0x11, 0x0, 0x0, 0x80000000}};
    // -68604940098641
    s21_decimal dec_2 = {{0x55159c51, 0x3e65, 0x0, 0x80000000}};
    // -68604940098658
    s21_decimal dec_check = {{0x55159c62, 0x3e65, 0x0, 0x80000000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_260) {
    // -352.4089574856460215135
    s21_decimal dec_1 = {{0xb8ae235f, 0xa913ce7, 0xbf, 0x80130000}};
    // -8817213806472558777.1
    s21_decimal dec_2 = {{0xf2aab73b, 0xc7a25c69, 0x4, 0x80010000}};
    // -8817213806472559129.5089574856
    s21_decimal dec_check = {{0xb2e03c8, 0x1f94ef9c, 0x1ce6487e, 0x800a0000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_261) {
    // 72105296543663475311110
    s21_decimal dec_1 = {{0x4edac206, 0xd601583a, 0xf44, 0x0}};
    // 290310636370155976301.77
    s21_decimal dec_2 = {{0xca7f42e1, 0xc6f0e4b2, 0x625, 0x20000}};
    // 72395607180033631287411.77
    s21_decimal dec_check = {{0x97f30d39, 0x5f775b79, 0x5fd09, 0x20000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_262) {
    // -91.3583036957527
    s21_decimal dec_1 = {{0x20640357, 0x33ee6, 0x0, 0x800d0000}};
    // 392133971674872485503
    s21_decimal dec_2 = {{0x9bdd167f, 0x41f3b99f, 0x15, 0x0}};
    // 392133971674872485411.64169630
    s21_decimal dec_check = {{0x32c6e99e, 0xf9f0c402, 0x7eb48fd7, 0x80000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_263) {
    // -41433
    s21_decimal dec_1 = {{0xa1d9, 0x0, 0x0, 0x80000000}};
    // -693550886.82733553031255
    s21_decimal dec_2 = {{0xfef9857, 0xbf3441f0, 0xeaf, 0x800e0000}};
    // -693592319.82733553031255
    s21_decimal dec_check = {{0xe9cfd857, 0xf8b43755, 0xeaf, 0x800e0000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_264) {
    // 7.2080680
    s21_decimal dec_1 = {{0x44bdd28, 0x0, 0x0, 0x70000}};
    // -3052227842772.345
    s21_decimal dec_2 = {{0x2c578d79, 0xad7fc, 0x0, 0x80030000}};
    // -3052227842765.1369320
    s21_decimal dec_check = {{0x17ba6968, 0xa794ea84, 0x1, 0x80070000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_265) {
    // 38930823094381304.5368471646
    s21_decimal dec_1 = {{0xb8e9405e, 0x7cdfb584, 0x1420739, 0xa0000}};
    // -5.122704539511
    s21_decimal dec_2 = {{0xb8fbff77, 0x4a8, 0x0, 0x800c0000}};
    // 38930823094381299.414142625089
    s21_decimal dec_check = {{0x82212541, 0xc762e32f, 0x7dcad274, 0xc0000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_266) {
    // -15970149483377
    s21_decimal dec_1 = {{0x57164371, 0xe86, 0x0, 0x80000000}};
    // -53129992268279755
    s21_decimal dec_2 = {{0x4c11efcb, 0xbcc172, 0x0, 0x80000000}};
    // -53145962417763132
    s21_decimal dec_check = {{0xa328333c, 0xbccff8, 0x0, 0x80000000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_267) {
    // -2571236565066.7654
    s21_decimal dec_1 = {{0xa4f16886, 0x5b5942, 0x0, 0x80040000}};
    // 0.5
    s21_decimal dec_2 = {{0x5, 0x0, 0x0, 0x10000}};
    // -2571236565066.2654
    s21_decimal dec_check = {{0xa4f154fe, 0x5b5942, 0x0, 0x80040000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_268) {
    // -86021245
    s21_decimal dec_1 = {{0x520947d, 0x0, 0x0, 0x80000000}};
    // -38752064140044054
    s21_decimal dec_2 = {{0x9616716, 0x89accc, 0x0, 0x80000000}};
    // -38752064226065299
    s21_decimal dec_check = {{0xe81fb93, 0x89accc, 0x0, 0x80000000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_269) {
    // -0.23240308494
    s21_decimal dec_1 = {{0x693af70e, 0x5, 0x0, 0x800b0000}};
    // -165122712.7
    s21_decimal dec_2 = {{0x626bb9f7, 0x0, 0x0, 0x80010000}};
    // -165122712.93240308494
    s21_decimal dec_check = {{0x6477f30e, 0xe5275f41, 0x0, 0x800b0000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_270) {
    // -69.706061
    s21_decimal dec_1 = {{0x427a14d, 0x0, 0x0, 0x80060000}};
    // -67.0836055353251194206
    s21_decimal dec_2 = {{0x1ed1e55e, 0x5db86e1a, 0x24, 0x80130000}};
    // -136.7896665353251194206
    s21_decimal dec_check = {{0x2dec055e, 0x276131b6, 0x4a, 0x80130000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_271) {
    // -0.3
    s21_decimal dec_1 = {{0x3, 0x0, 0x0, 0x80010000}};
    // 7334845876394667807873.1
    s21_decimal dec_2 = {{0x510cd0b, 0x3a58c505, 0xf88, 0x10000}};
    // 7334845876394667807872.8
    s21_decimal dec_check = {{0x510cd08, 0x3a58c505, 0xf88, 0x10000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_272) {
    // -5166.7783
    s21_decimal dec_1 = {{0x3146347, 0x0, 0x0, 0x80040000}};
    // -15260026325302826
    s21_decimal dec_2 = {{0xc061fe2a, 0x3636e9, 0x0, 0x80000000}};
    // -15260026325307992.7783
    s21_decimal dec_check = {{0xf6ecabe7, 0x45c10aea, 0x8, 0x80040000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_273) {
    // -0.5
    s21_decimal dec_1 = {{0x5, 0x0, 0x0, 0x80010000}};
    // 613829222905811985
    s21_decimal dec_2 = {{0x100e1411, 0x884c26d, 0x0, 0x0}};
    // 613829222905811984.5
    s21_decimal dec_check = {{0xa08cc8a5, 0x552f9842, 0x0, 0x10000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_274) {
    // -430
    s21_decimal dec_1 = {{0x1ae, 0x0, 0x0, 0x80000000}};
    // 134984567693874052
    s21_decimal dec_2 = {{0xc78d9384, 0x1df8fbf, 0x0, 0x0}};
    // 134984567693873622
    s21_decimal dec_check = {{0xc78d91d6, 0x1df8fbf, 0x0, 0x0}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_275) {
    // -1986025099669250
    s21_decimal dec_1 = {{0x8094af02, 0x70e47, 0x0, 0x80000000}};
    // 8366.13729
    s21_decimal dec_2 = {{0x31ddb661, 0x0, 0x0, 0x50000}};
    // -1986025099660883.86271
    s21_decimal dec_check = {{0xadacb6df, 0xc429da92, 0xa, 0x80050000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_276) {
    // -35077208802304865
    s21_decimal dec_1 = {{0x1a5fa361, 0x7c9e89, 0x0, 0x80000000}};
    // 440146
    s21_decimal dec_2 = {{0x6b752, 0x0, 0x0, 0x0}};
    // -35077208801864719
    s21_decimal dec_check = {{0x1a58ec0f, 0x7c9e89, 0x0, 0x80000000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_277) {
    // 2082801005125.1645953
    s21_decimal dec_1 = {{0x431eae01, 0x210bf4ca, 0x1, 0x70000}};
    // -542148254628652
    s21_decimal dec_2 = {{0xba21fb2c, 0x1ed14, 0x0, 0x80000000}};
    // -540065453623526.8354047
    s21_decimal dec_check = {{0xd92aafff, 0xc5233ecf, 0x124, 0x80070000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_278) {
    // 929
    s21_decimal dec_1 = {{0x3a1, 0x0, 0x0, 0x0}};
    // -2406917.53206
    s21_decimal dec_2 = {{0xa58b0f6, 0x38, 0x0, 0x80050000}};
    // -2405988.53206
    s21_decimal dec_check = {{0x4cf2656, 0x38, 0x0, 0x80050000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_279) {
    // -19204189995415.947291953790637
    s21_decimal dec_1 = {{0x2ffcfead, 0xb155f716, 0x3e0d5569, 0x800f0000}};
    // 8395.2761265
    s21_decimal dec_2 = {{0x8bf979b1, 0x13, 0x0, 0x70000}};
    // -19204189987020.671165453790637
    s21_decimal dec_check = {{0xa36dad, 0x3cd3f3ee, 0x3e0d5569, 0x800f0000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_280) {
    // 56272574
    s21_decimal dec_1 = {{0x35aa6be, 0x0, 0x0, 0x0}};
    // 0.7588050442
    s21_decimal dec_2 = {{0xc448760a, 0x1, 0x0, 0xa0000}};
    // 56272574.7588050442
    s21_decimal dec_check = {{0x2f3ae0a, 0x7cf3416, 0x0, 0xa0000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_281) {
    // 27416.5280308340047522
    s21_decimal dec_1 = {{0xbc01bea2, 0xdccebdd9, 0xe, 0x100000}};
    // -3750996
    s21_decimal dec_2 = {{0x393c54, 0x0, 0x0, 0x80000000}};
    // -3723579.4719691659952478
    s21_decimal dec_check = {{0x2b52415e, 0x8e753ddd, 0x7e2, 0x80100000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_282) {
    // -24026895195870348016
    s21_decimal dec_1 = {{0x756442f0, 0x4d70ade1, 0x1, 0x80000000}};
    // -956402394707222
    s21_decimal dec_2 = {{0xc8ffb516, 0x365d7, 0x0, 0x80000000}};
    // -24027851598265055238
    s21_decimal dec_check = {{0x3e63f806, 0x4d7413b9, 0x1, 0x80000000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_283) {
    // -46842587202676797580
    s21_decimal dec_1 = {{0xcfcf308c, 0x8a124ce0, 0x2, 0x80000000}};
    // 986372738151463136.5057
    s21_decimal dec_2 = {{0x5985c1c1, 0xb6b73138, 0x216, 0x40000}};
    // -45856214464525334443.4943
    s21_decimal dec_check = {{0x33d29aff, 0xb423dc7d, 0x611a, 0x80040000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_284) {
    // -7115062341180
    s21_decimal dec_1 = {{0x9ac36e3c, 0x678, 0x0, 0x80000000}};
    // -4392454203399745951167
    s21_decimal dec_2 = {{0xb541d5bf, 0x1d8c21c5, 0xee, 0x80000000}};
    // -4392454210514808292347
    s21_decimal dec_check = {{0x500543fb, 0x1d8c283e, 0xee, 0x80000000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_285) {
    // -4057454395914554525924125.593
    s21_decimal dec_1 = {{0x7d7aeb99, 0x8a62dc77, 0xd1c3f63, 0x80030000}};
    // 53
    s21_decimal dec_2 = {{0x35, 0x0, 0x0, 0x0}};
    // -4057454395914554525924072.593
    s21_decimal dec_check = {{0x7d7a1c91, 0x8a62dc77, 0xd1c3f63, 0x80030000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_286) {
    // 562821401862870
    s21_decimal dec_1 = {{0x11bae2d6, 0x1ffe2, 0x0, 0x0}};
    // 1796441598566.7399225841
    s21_decimal dec_2 = {{0xce2c11f1, 0xda5a6768, 0x3cd, 0xa0000}};
    // 564617843461436.7399225841
    s21_decimal dec_check = {{0x3764a9f1, 0xf23d9a55, 0x4ab9f, 0xa0000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_287) {
    // 88160913090
    s21_decimal dec_1 = {{0x86ccc6c2, 0x14, 0x0, 0x0}};
    // -34164810851439130425
    s21_decimal dec_2 = {{0xda70b739, 0xda21ca74, 0x1, 0x80000000}};
    // -34164810763278217335
    s21_decimal dec_check = {{0x53a3f077, 0xda21ca60, 0x1, 0x80000000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_288) {
    // -410794.08897061109726374
    s21_decimal dec_1 = {{0x3ca17ca6, 0xeb51e7d7, 0x8b2, 0x80110000}};
    // 79917209.0379255130
    s21_decimal dec_2 = {{0x31763d5a, 0xb173ac8, 0x0, 0xa0000}};
    // 79506414.94895490190273626
    s21_decimal dec_check = {{0x33dfec5a, 0x239a2771, 0x6939d, 0x110000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_289) {
    // -664338.05389377353223
    s21_decimal dec_1 = {{0x2f44b607, 0x99f44a05, 0x3, 0x800e0000}};
    // 6656567807599568185566096
    s21_decimal dec_2 = {{0x44f1a390, 0x438fec0b, 0x58195, 0x0}};
    // 6656567807599568184901757.9461
    s21_decimal dec_check = {{0x930b37c5, 0x25f47833, 0xd715d69f, 0x40000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_290) {
    // -47019974
    s21_decimal dec_1 = {{0x2cd77c6, 0x0, 0x0, 0x80000000}};
    // 62172.8228
    s21_decimal dec_2 = {{0x250ed1e4, 0x0, 0x0, 0x40000}};
    // -46957801.1772
    s21_decimal dec_check = {{0x5507d47c, 0x6d, 0x0, 0x80040000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_291) {
    // 8
    s21_decimal dec_1 = {{0x8, 0x0, 0x0, 0x0}};
    // -121413881
    s21_decimal dec_2 = {{0x73ca0f9, 0x0, 0x0, 0x80000000}};
    // -121413873
    s21_decimal dec_check = {{0x73ca0f1, 0x0, 0x0, 0x80000000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_292) {
    // 1352555067799908522
    s21_decimal dec_1 = {{0x35e30aa, 0x12c53dab, 0x0, 0x0}};
    // 7853800394037145628223
    s21_decimal dec_2 = {{0xaefbee3f, 0xc1601728, 0x1a9, 0x0}};
    // 7855152949104945536745
    s21_decimal dec_check = {{0xb25a1ee9, 0xd42554d3, 0x1a9, 0x0}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_293) {
    // -25952.5057024
    s21_decimal dec_1 = {{0x6ce61a00, 0x3c, 0x0, 0x80070000}};
    // 10274.28
    s21_decimal dec_2 = {{0xfad64, 0x0, 0x0, 0x20000}};
    // -15678.2257024
    s21_decimal dec_check = {{0x80f36380, 0x24, 0x0, 0x80070000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_294) {
    // 6941.7678245565263406347096
    s21_decimal dec_1 = {{0xb0fab358, 0xe0cd9777, 0x396bc3, 0x160000}};
    // -489124834025515
    s21_decimal dec_2 = {{0x3ffba02b, 0x1bcdb, 0x0, 0x80000000}};
    // -489124834018573.23217544347366
    s21_decimal dec_check = {{0xdaf0fee6, 0x4c38f8a1, 0x9e0b753e, 0x800e0000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_295) {
    // 67.28152660894248662
    s21_decimal dec_1 = {{0xa3336ed6, 0x5d5f3332, 0x0, 0x110000}};
    // 12517001867944361
    s21_decimal dec_2 = {{0x99fde1a9, 0x2c7825, 0x0, 0x0}};
    // 12517001867944428.281526608942
    s21_decimal dec_check = {{0x7785e42e, 0xe959977b, 0x2871d23e, 0xc0000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_296) {
    // 78.31
    s21_decimal dec_1 = {{0x1e97, 0x0, 0x0, 0x20000}};
    // -1611217959205904.72334975
    s21_decimal dec_2 = {{0x8169ce7f, 0x6e1851ea, 0x221e, 0x80080000}};
    // -1611217959205826.41334975
    s21_decimal dec_check = {{0xaea63abf, 0x6e1851e8, 0x221e, 0x80080000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_297) {
    // 32
    s21_decimal dec_1 = {{0x20, 0x0, 0x0, 0x0}};
    // 361301964240179275501994189
    s21_decimal dec_2 = {{0x6e6500cd, 0xba459308, 0x12adcaa, 0x0}};
    // 361301964240179275501994221
    s21_decimal dec_check = {{0x6e6500ed, 0xba459308, 0x12adcaa, 0x0}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_298) {
    // -59238425.501338171331
    s21_decimal dec_1 = {{0x84b3f7c3, 0x36192a22, 0x3, 0x800c0000}};
    // 1770492749983331698409975
    s21_decimal dec_2 = {{0xcbc901f7, 0x9ab31538, 0x176ea, 0x0}};
    // 1770492749983331639171549.4987
    s21_decimal dec_check = {{0x6f025c4b, 0xf36cfa0e, 0x39352c3a, 0x40000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_299) {
    // 53495287051959971532
    s21_decimal dec_1 = {{0xc1a0aecc, 0xe6657024, 0x2, 0x0}};
    // -12.762064252848
    s21_decimal dec_2 = {{0x664e6fb0, 0xb9b, 0x0, 0x800c0000}};
    // 53495287051959971519.237935747
    s21_decimal dec_check = {{0xfbf75283, 0xf93983b7, 0xacda43a9, 0x90000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, 0);
    ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
    ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
    ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
    ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_300) {
    // -29.54072731
    s21_decimal dec_1 = {{0xb013929b, 0x0, 0x0, 0x80080000}};
    // 6437302159941744933916578356
    s21_decimal dec_2 = {{0xfbfb1234, 0x56750c19, 0x14cccfc1, 0x0}};
    // 6437302159941744933916578326.5
    s21_decimal dec_check = {{0xd7ceb4e1, 0x60927903, 0xd0001d8d, 0x10000}};
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
    // 8668497825281200308742047
    s21_decimal dec_1 = {{0xfad9e79f, 0x356e8766, 0x72ba0, 0x0}};
    // 19068.448808
    s21_decimal dec_2 = {{0x70917028, 0x4, 0x0, 0x60000}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_2) {
    // 92943120031456393482127
    s21_decimal dec_1 = {{0xdb10cf8f, 0x74e5e2da, 0x13ae, 0x0}};
    // 2.249684722653721160149
    s21_decimal dec_2 = {{0xbe3a69d5, 0xf4a5afe9, 0x79, 0x150000}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_3) {
    // -9966594.5593680
    s21_decimal dec_1 = {{0x49488750, 0x5aa5, 0x0, 0x80070000}};
    // 9057059655590599200366.370
    s21_decimal dec_2 = {{0xfe185f22, 0x301020fd, 0x77de8, 0x30000}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_4) {
    // 8464568185235993847167
    s21_decimal dec_1 = {{0x9048e57f, 0xdd7b2d44, 0x1ca, 0x0}};
    // 4708.4270642
    s21_decimal dec_2 = {{0xf670f432, 0xa, 0x0, 0x70000}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_5) {
    // 99114521060126780377.6142632
    s21_decimal dec_1 = {{0x6a9ccd28, 0x8774ba36, 0x333db29, 0x70000}};
    // -538.520979433602437944592
    s21_decimal dec_2 = {{0xf1c51510, 0x47e1f46d, 0x7209, 0x80150000}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_6) {
    // 979528997431904162747184329
    s21_decimal dec_1 = {{0xfb02f4c9, 0x59f61110, 0x32a3f55, 0x0}};
    // 7388343487.46
    s21_decimal dec_2 = {{0x5f57aca, 0xac, 0x0, 0x20000}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_7) {
    // 144.433517381079087981037533
    s21_decimal dec_1 = {{0x800487dd, 0xaa8d0792, 0x7778fc, 0x180000}};
    // 942718950554.11209117
    s21_decimal dec_2 = {{0x38b0639d, 0x1c490d14, 0x5, 0x80000}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_8) {
    // 9846609325374985765132436
    s21_decimal dec_1 = {{0xeff81894, 0xc2d81074, 0x82519, 0x0}};
    // 62563735030.62985009126
    s21_decimal dec_2 = {{0x2b7de7e6, 0x289fb959, 0x153, 0xb0000}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_9) {
    // 79963487105448158
    s21_decimal dec_1 = {{0x2bebf8de, 0x11c165e, 0x0, 0x0}};
    // 38888709.116036425903386799
    s21_decimal dec_2 = {{0x73ee30af, 0x253b6fb4, 0x202b01, 0x120000}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_10) {
    // 1923601546201171705.108576796
    s21_decimal dec_1 = {{0xa1c33a1c, 0xc4f6b24c, 0x6372a78, 0x90000}};
    // 79015490370662231652
    s21_decimal dec_2 = {{0xa09eee64, 0x488f69d9, 0x4, 0x0}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_11) {
    // -451.9760600625389173809
    s21_decimal dec_1 = {{0x27efc31, 0x4474f8d, 0xf5, 0x80130000}};
    // 81037875235.8221
    s21_decimal dec_2 = {{0x1aaf74d, 0x2e109, 0x0, 0x40000}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_12) {
    // 526.16518822039083367424252438
    s21_decimal dec_1 = {{0x12cada16, 0xc6224584, 0xaa035d40, 0x1a0000}};
    // 926534637.882
    s21_decimal dec_2 = {{0xb9c4993a, 0xd7, 0x0, 0x30000}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_13) {
    // -8372047.3675302
    s21_decimal dec_1 = {{0xb1180626, 0x4c24, 0x0, 0x80070000}};
    // 86148183393251376970901
    s21_decimal dec_2 = {{0x52173c95, 0x1a358b86, 0x123e, 0x0}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_14) {
    // 846479.74237042833341925894516
    s21_decimal dec_1 = {{0x955d2974, 0x37067867, 0x118329c6, 0x170000}};
    // -695.5
    s21_decimal dec_2 = {{0x1b2b, 0x0, 0x0, 0x80010000}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_15) {
    // 4000068530893542634812830433
    s21_decimal dec_1 = {{0x1b3772e1, 0x9074e9be, 0xcecc775, 0x0}};
    // 79228162514264337591761666923
    s21_decimal dec_2 = {{0x95c4836b, 0xffffffff, 0xffffffff, 0x0}};
    s21_decimal result;
    // overflow
    int check = 1;  // Результат слишком велик или положительная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_16) {
    // 834911
    s21_decimal dec_1 = {{0xcbd5f, 0x0, 0x0, 0x0}};
    // -0.27508666566690928989914
    s21_decimal dec_2 = {{0x553e16da, 0x3f6fff3e, 0x5d3, 0x80170000}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_17) {
    // -144.0895404906
    s21_decimal dec_1 = {{0x7c0f0b6a, 0x14f, 0x0, 0x800a0000}};
    // 9170978444862120851309
    s21_decimal dec_2 = {{0x30cf76d, 0x28e491ad, 0x1f1, 0x0}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_18) {
    // -665652015794609069595675
    s21_decimal dec_1 = {{0x9f459c1b, 0x116dd5aa, 0x8cf5, 0x80000000}};
    // -79228162514264337592169795412
    s21_decimal dec_2 = {{0xae180f54, 0xffffffff, 0xffffffff, 0x80000000}};
    s21_decimal result;
    // overflow
    int check = 2;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_19) {
    // 64559630.0454674219488832895
    s21_decimal dec_1 = {{0x47d8ed7f, 0x933851b4, 0x2160655, 0x130000}};
    // 846660800568596.7
    s21_decimal dec_2 = {{0xcaa1a2cf, 0x1e1455, 0x0, 0x10000}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_20) {
    // -28455522708628798183920508
    s21_decimal dec_1 = {{0xcda5537c, 0xfa1c5d22, 0x1789b0, 0x80000000}};
    // -79228162514264337592346311466
    s21_decimal dec_2 = {{0xb89d7b2a, 0xffffffff, 0xffffffff, 0x80000000}};
    s21_decimal result;
    // overflow
    int check = 2;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_21) {
    // 809819232756493919735305
    s21_decimal dec_1 = {{0x57cc4e09, 0x637991d9, 0xab7c, 0x0}};
    // -95.68083042644
    s21_decimal dec_2 = {{0xbe30e154, 0x8b3, 0x0, 0x800b0000}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_22) {
    // 79228162514264337592829463525
    s21_decimal dec_1 = {{0xd569cbe5, 0xffffffff, 0xffffffff, 0x0}};
    // 6624643847434142012
    s21_decimal dec_2 = {{0xf9ca013c, 0x5bef767a, 0x0, 0x0}};
    s21_decimal result;
    // overflow
    int check = 1;  // Результат слишком велик или положительная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_23) {
    // -478889954884
    s21_decimal dec_1 = {{0x8010ce44, 0x6f, 0x0, 0x80000000}};
    // 9635132681686421916.4249509734
    s21_decimal dec_2 = {{0x12ad4f66, 0xd5d30a06, 0x3753f314, 0xa0000}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_24) {
    // 8236500354241681700495449156
    s21_decimal dec_1 = {{0xd7865c44, 0xe3279815, 0x1a9d12ca, 0x0}};
    // 0.6458
    s21_decimal dec_2 = {{0x193a, 0x0, 0x0, 0x40000}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_25) {
    // 1.877788341184
    s21_decimal dec_1 = {{0x34e833c0, 0x1b5, 0x0, 0xc0000}};
    // 93472852055265329.31817149610
    s21_decimal dec_2 = {{0xb1b594aa, 0x556baa4c, 0x1e33e4a2, 0xb0000}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_26) {
    // -119950822.031561969107068298
    s21_decimal dec_1 = {{0xce1e58a, 0x1786e50b, 0x633893, 0x80120000}};
    // 903857336876137482643864
    s21_decimal dec_2 = {{0x90196998, 0x3454676f, 0xbf66, 0x0}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_27) {
    // -85.6656325688216122
    s21_decimal dec_1 = {{0xb33cca3a, 0xbe37463, 0x0, 0x80100000}};
    // 85968867805270
    s21_decimal dec_2 = {{0x2fd3c856, 0x4e30, 0x0, 0x0}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_28) {
    // 2738
    s21_decimal dec_1 = {{0xab2, 0x0, 0x0, 0x0}};
    // 841554927271394826.29074689560
    s21_decimal dec_2 = {{0x21d19e18, 0x1150830b, 0xfebcac2, 0xb0000}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_29) {
    // 16.623151664601717553
    s21_decimal dec_1 = {{0xa0075b31, 0xe6b14c5d, 0x0, 0x120000}};
    // 8617440047686.377634637
    s21_decimal dec_2 = {{0x73c97b4d, 0x27012237, 0x1d3, 0x90000}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_30) {
    // 3.7033
    s21_decimal dec_1 = {{0x90a9, 0x0, 0x0, 0x40000}};
    // 8920852576606881113358155.6
    s21_decimal dec_2 = {{0x843378f4, 0xdf3abd56, 0x49caa3, 0x10000}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_31) {
    // 841286280932078067740114
    s21_decimal dec_1 = {{0xec956dd2, 0x387e0df9, 0xb226, 0x0}};
    // 163.1968138906693635125
    s21_decimal dec_2 = {{0x40d18c35, 0x781b87cc, 0x58, 0x130000}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_32) {
    // -4.1053626960892749801
    s21_decimal dec_1 = {{0xa16967e9, 0x39bbc835, 0x2, 0x80130000}};
    // 9494717770
    s21_decimal dec_2 = {{0x35ede54a, 0x2, 0x0, 0x0}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_33) {
    // 8902955162831038399
    s21_decimal dec_1 = {{0xfbc627bf, 0x7b8da68c, 0x0, 0x0}};
    // 184729933.69178159673331580
    s21_decimal dec_2 = {{0x9e0d4f7c, 0xfa2711f8, 0xf47ce, 0x110000}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_34) {
    // -6.6525571842161
    s21_decimal dec_1 = {{0x31140071, 0x3c81, 0x0, 0x800d0000}};
    // 817695992882023051002465131
    s21_decimal dec_2 = {{0x87954b6b, 0x98845201, 0x2a461dc, 0x0}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_35) {
    // 93090033068
    s21_decimal dec_1 = {{0xac992dac, 0x15, 0x0, 0x0}};
    // -45.7935130831209971318620680
    s21_decimal dec_2 = {{0x265d8208, 0x2f6b5630, 0x17acb89, 0x80190000}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_36) {
    // 3291122462950.77454
    s21_decimal dec_1 = {{0x23a6224e, 0x4913dd8, 0x0, 0x50000}};
    // 8806692805279500720936584216
    s21_decimal dec_2 = {{0xdd80418, 0x98467048, 0x1c74b9bd, 0x0}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_37) {
    // -79228162514264337593319560809
    s21_decimal dec_1 = {{0xf2a01669, 0xffffffff, 0xffffffff, 0x80000000}};
    // -5476949625488157893327377
    s21_decimal dec_2 = {{0x2a5fa11, 0x8bc92b4, 0x487ca, 0x80000000}};
    s21_decimal result;
    // overflow
    int check = 2;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_38) {
    // 6696.5683774778058793
    s21_decimal dec_1 = {{0xc92829, 0xa155e698, 0x3, 0x100000}};
    // 93394258526673218126762
    s21_decimal dec_2 = {{0x3a2943aa, 0xe9b3ca05, 0x13c6, 0x0}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_39) {
    // 55674905106762
    s21_decimal dec_1 = {{0xd2f1194a, 0x32a2, 0x0, 0x0}};
    // 79228162514264337591407689832
    s21_decimal dec_2 = {{0x80ab4068, 0xffffffff, 0xffffffff, 0x0}};
    s21_decimal result;
    // overflow
    int check = 1;  // Результат слишком велик или положительная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_40) {
    // -8.383722882873773815882058926
    s21_decimal dec_1 = {{0xaa780cae, 0x280a6d17, 0x1b16da60, 0x801b0000}};
    // 97710380784020845579477
    s21_decimal dec_2 = {{0x449d4cd5, 0xe3ee5f48, 0x14b0, 0x0}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_41) {
    // 2323959730004643775.107996716
    s21_decimal dec_1 = {{0x65429c2c, 0x66e90451, 0x782559d, 0x90000}};
    // 79228162514264337592270058706
    s21_decimal dec_2 = {{0xb411f4d2, 0xffffffff, 0xffffffff, 0x0}};
    s21_decimal result;
    // overflow
    int check = 1;  // Результат слишком велик или положительная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_42) {
    // 942871405881455599741267.8
    s21_decimal dec_1 = {{0xa7411d46, 0x9d023fc2, 0x7cc9b, 0x10000}};
    // 83193598.000479
    s21_decimal dec_2 = {{0x4db3d5f, 0x4baa, 0x0, 0x60000}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_43) {
    // 813.84273168065609539
    s21_decimal dec_1 = {{0x5e7bf43, 0x696f0541, 0x4, 0x110000}};
    // 9647820918991355385900
    s21_decimal dec_2 = {{0x678182c, 0x269597a, 0x20b, 0x0}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_44) {
    // -26656.9205
    s21_decimal dec_1 = {{0xfe385f5, 0x0, 0x0, 0x80040000}};
    // 79341291694152511063199657
    s21_decimal dec_2 = {{0x72aa0fa9, 0xa878425, 0x41a12c, 0x0}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_45) {
    // 89556364009347810592014897
    s21_decimal dec_1 = {{0x4073c231, 0x388fa597, 0x4a144c, 0x0}};
    // 15.88968257
    s21_decimal dec_2 = {{0x5eb5bb41, 0x0, 0x0, 0x80000}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_46) {
    // 0.5205983176754
    s21_decimal dec_1 = {{0x1cc72832, 0x4bc, 0x0, 0xd0000}};
    // 97591389263192639
    s21_decimal dec_2 = {{0xfa2b623f, 0x15ab6d9, 0x0, 0x0}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_47) {
    // 862933585705.0026989
    s21_decimal dec_1 = {{0xe70203ed, 0x77c18f3d, 0x0, 0x70000}};
    // 508173.93166675043370587178
    s21_decimal dec_2 = {{0x882ad42a, 0x67503ac2, 0x2a0900, 0x140000}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_48) {
    // -71856449.205711
    s21_decimal dec_1 = {{0x622135cf, 0x415a, 0x0, 0x80060000}};
    // 87412026007628.452602064009432
    s21_decimal dec_2 = {{0xfc2df8d8, 0xf106be73, 0x1a718880, 0xf0000}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_49) {
    // 9050858
    s21_decimal dec_1 = {{0x8a1aea, 0x0, 0x0, 0x0}};
    // -337.389899469347853319657145
    s21_decimal dec_2 = {{0xd781d6b9, 0x1955e0c3, 0x1171517, 0x80180000}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_50) {
    // 848998254.301
    s21_decimal dec_1 = {{0xac3d46dd, 0xc5, 0x0, 0x30000}};
    // 0.88267385303391382069062484
    s21_decimal dec_2 = {{0xa682b54, 0x8b975018, 0x490358, 0x1a0000}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_51) {
    // 82929768198911734704
    s21_decimal dec_1 = {{0xd19eb3b0, 0x7ee1b8cb, 0x4, 0x0}};
    // -7636.97619774112164
    s21_decimal dec_2 = {{0x5e7281a4, 0xa9932f0, 0x0, 0x800e0000}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_52) {
    // 4400.3093243
    s21_decimal dec_1 = {{0x3ec9eafb, 0xa, 0x0, 0x70000}};
    // 855791525261891732108097969
    s21_decimal dec_2 = {{0x6d5e39b1, 0x8b4f779a, 0x2c3e4e7, 0x0}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_53) {
    // 91105551529261460193314
    s21_decimal dec_1 = {{0xbb758022, 0xd78321f6, 0x134a, 0x0}};
    // 3016.16956882724501
    s21_decimal dec_2 = {{0x353aa695, 0x42f8f06, 0x0, 0xe0000}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_54) {
    // 61.680233986339975080054
    s21_decimal dec_1 = {{0xd2422876, 0xb132feb0, 0xd0f, 0x150000}};
    // 9813822264481376
    s21_decimal dec_2 = {{0x8df69660, 0x22dd9e, 0x0, 0x0}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_55) {
    // 9.611014336675615249647
    s21_decimal dec_1 = {{0xc09a94ef, 0x39e19de, 0x209, 0x150000}};
    // 950756238967
    s21_decimal dec_2 = {{0x5d7ce677, 0xdd, 0x0, 0x0}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_56) {
    // 9875757882387220.1033234865611
    s21_decimal dec_1 = {{0xa36d5dcb, 0x83357485, 0x3f1a5ac3, 0xd0000}};
    // -811479559.6195577
    s21_decimal dec_2 = {{0x14efa6f9, 0x1cd45d, 0x0, 0x80070000}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_57) {
    // 859303.09168001559970096688
    s21_decimal dec_1 = {{0x99aea630, 0x64e4b719, 0x471473, 0x140000}};
    // 76.250574577495360477677310
    s21_decimal dec_2 = {{0x32d46fe, 0xee35dd91, 0x3f12af, 0x180000}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_58) {
    // 4049389123692755373
    s21_decimal dec_1 = {{0x130979ad, 0x383251f4, 0x0, 0x0}};
    // 79228162514264337592368195104
    s21_decimal dec_2 = {{0xb9eb6620, 0xffffffff, 0xffffffff, 0x0}};
    s21_decimal result;
    // overflow
    int check = 1;  // Результат слишком велик или положительная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_59) {
    // 8670198816368307222767331026
    s21_decimal dec_1 = {{0x19c1e6d2, 0xa11f98fa, 0x1c03d203, 0x0}};
    // -70.6068439
    s21_decimal dec_2 = {{0x2a15bfd7, 0x0, 0x0, 0x80070000}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_60) {
    // 95700528344787077812702.14288
    s21_decimal dec_1 = {{0x41b9690, 0xb27802e6, 0x1eec2983, 0x50000}};
    // -0.14865444896729732115
    s21_decimal dec_2 = {{0x81b81413, 0xce4cab5f, 0x0, 0x80140000}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_61) {
    // 98215497091148669202061121
    s21_decimal dec_1 = {{0xe50dd741, 0xc411ea28, 0x513df0, 0x0}};
    // -218761.601022566109
    s21_decimal dec_2 = {{0x5f721edd, 0x3093284, 0x0, 0x800c0000}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_62) {
    // 6335519.11215352435599754401
    s21_decimal dec_1 = {{0x21ac44a1, 0xed14fbac, 0x20c0fd5, 0x140000}};
    // 92839030765.04928168170333183
    s21_decimal dec_2 = {{0x7ff1a3ff, 0x3c0d1c9d, 0x1dff76f2, 0x110000}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_63) {
    // 222.05617275553326435184
    s21_decimal dec_1 = {{0x91620b70, 0xc4d83db6, 0x4b3, 0x140000}};
    // 88897914034667961720860
    s21_decimal dec_2 = {{0x1ca4201c, 0x2a633532, 0x12d3, 0x0}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_64) {
    // 3419974640.9836035362080497562
    s21_decimal dec_1 = {{0x9c7d1f9a, 0xccc4ce2b, 0x6e815dff, 0x130000}};
    // 8831493790825939
    s21_decimal dec_2 = {{0x623cfdd3, 0x1f6032, 0x0, 0x0}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_65) {
    // 95398826516824724117706
    s21_decimal dec_1 = {{0x256898ca, 0x94abe868, 0x1433, 0x0}};
    // 36474.1108054
    s21_decimal dec_2 = {{0xec43a156, 0x54, 0x0, 0x70000}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_66) {
    // -79228162514264337592738986433
    s21_decimal dec_1 = {{0xd00539c1, 0xffffffff, 0xffffffff, 0x80000000}};
    // -60995087751672.1264
    s21_decimal dec_2 = {{0x68d26c70, 0x876fb17, 0x0, 0x80040000}};
    s21_decimal result;
    // overflow
    int check = 2;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_67) {
    // 9707366369431753128465
    s21_decimal dec_1 = {{0xb900fa11, 0x3cc5492a, 0x20e, 0x0}};
    // -38785.7931938
    s21_decimal dec_2 = {{0x4e225ea2, 0x5a, 0x0, 0x80070000}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_68) {
    // 522551602063251365637030407
    s21_decimal dec_1 = {{0x41e28207, 0x1c113aac, 0x1b03e9b, 0x0}};
    // 79228162514264337591820434653
    s21_decimal dec_2 = {{0x99453cdd, 0xffffffff, 0xffffffff, 0x0}};
    s21_decimal result;
    // overflow
    int check = 1;  // Результат слишком велик или положительная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_69) {
    // -0.764858485
    s21_decimal dec_1 = {{0x2d96d075, 0x0, 0x0, 0x80090000}};
    // 943185640539802329762225
    s21_decimal dec_2 = {{0x7d0149b1, 0x322ecb41, 0xc7ba, 0x0}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_70) {
    // 4023228.4907937371899189
    s21_decimal dec_1 = {{0xec5dc535, 0xff1cebfc, 0x884, 0x100000}};
    // 928947650247361092866
    s21_decimal dec_2 = {{0xd7c4dd02, 0x5bbd061f, 0x32, 0x0}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_71) {
    // 82497229061880401471
    s21_decimal dec_1 = {{0x2369ce3f, 0x78e108be, 0x4, 0x0}};
    // 118073113143171.0228074289970
    s21_decimal dec_2 = {{0xbd515b32, 0xe417076d, 0x3d0ad8a, 0xd0000}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_72) {
    // 0.10990886013667250817652514
    s21_decimal dec_1 = {{0x5ae2d722, 0x1feae48b, 0x91769, 0x1a0000}};
    // 82617871249970.948129
    s21_decimal dec_2 = {{0x7179e821, 0x7a8da42c, 0x4, 0x60000}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_73) {
    // 1071.146
    s21_decimal dec_1 = {{0x10582a, 0x0, 0x0, 0x30000}};
    // 958750026505889829312260551
    s21_decimal dec_2 = {{0x4a8be9c7, 0x1495d150, 0x3190f37, 0x0}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_74) {
    // 46.63113875287447
    s21_decimal dec_1 = {{0xce156d97, 0x109113, 0x0, 0xe0000}};
    // 8522220107274855392638000
    s21_decimal dec_2 = {{0x75327430, 0x7a4cdd32, 0x70ca6, 0x0}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_75) {
    // 952132977904096099248335187
    s21_decimal dec_1 = {{0xda76953, 0x282ceff4, 0x3139600, 0x0}};
    // 23884705082.6816503480
    s21_decimal dec_2 = {{0xd6113eb8, 0xf2ab2f42, 0xc, 0xa0000}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_76) {
    // 97189047150314039266681
    s21_decimal dec_1 = {{0xe6cfcd79, 0xa0f93d91, 0x1494, 0x0}};
    // -1.430897
    s21_decimal dec_2 = {{0x15d571, 0x0, 0x0, 0x80060000}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_77) {
    // 87824884457302813
    s21_decimal dec_1 = {{0x60846b1d, 0x1380444, 0x0, 0x0}};
    // 4.806922317100113515
    s21_decimal dec_2 = {{0x15a65e6b, 0x42b59e61, 0x0, 0x120000}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_78) {
    // 89176486180631
    s21_decimal dec_1 = {{0x4c7f717, 0x511b, 0x0, 0x0}};
    // 13.37684558420275700332
    s21_decimal dec_2 = {{0xd5cd226c, 0x841a3a86, 0x48, 0x140000}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_79) {
    // -7295.1424747014159867864315805
    s21_decimal dec_1 = {{0xa6ea779d, 0xd4ce9427, 0xebb80113, 0x80190000}};
    // 8042607484881889
    s21_decimal dec_2 = {{0x7a344be1, 0x1c92b5, 0x0, 0x0}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_80) {
    // -6474.88823037394326882824
    s21_decimal dec_1 = {{0x2b78a08, 0x707e79b3, 0x891c, 0x80140000}};
    // 853357042246830644334
    s21_decimal dec_2 = {{0xe459dc6e, 0x42b53ca4, 0x2e, 0x0}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_81) {
    // 975975245827.24375783414
    s21_decimal dec_1 = {{0x148da7f6, 0xc5bc9a24, 0x14aa, 0xb0000}};
    // 146073667.80161165954187920
    s21_decimal dec_2 = {{0x68990290, 0xf09b2275, 0xc153a, 0x110000}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_82) {
    // 94024707950035464957
    s21_decimal dec_1 = {{0x5fb5f2fd, 0x18daddb7, 0x5, 0x0}};
    // 63.67122614302756571717652
    s21_decimal dec_2 = {{0xe9082014, 0x68966ef3, 0x5444a, 0x170000}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_83) {
    // 993719116812420.90047560281030
    s21_decimal dec_1 = {{0x27e0ebc6, 0x71280e97, 0x411684ce, 0xe0000}};
    // 97668616
    s21_decimal dec_2 = {{0x5d24e08, 0x0, 0x0, 0x0}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_84) {
    // 29277.85985816723173370585779
    s21_decimal dec_1 = {{0xabf962b3, 0x51db7b58, 0x975cecc, 0x170000}};
    // 916062327065258
    s21_decimal dec_2 = {{0x6198caaa, 0x34127, 0x0, 0x0}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_85) {
    // 530037455
    s21_decimal dec_1 = {{0x1f97bacf, 0x0, 0x0, 0x0}};
    // 79228162514264337593296075935
    s21_decimal dec_2 = {{0xf139bc9f, 0xffffffff, 0xffffffff, 0x0}};
    s21_decimal result;
    // overflow
    int check = 1;  // Результат слишком велик или положительная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_86) {
    // 977408654630472067394
    s21_decimal dec_1 = {{0x79bf2942, 0xfc4518da, 0x34, 0x0}};
    // -185.5048451003893367665540012
    s21_decimal dec_2 = {{0x8edb3bac, 0x83f367a, 0x5fe75ca, 0x80190000}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_87) {
    // 99557062347448856316571
    s21_decimal dec_1 = {{0xf22f8a9b, 0xffc93914, 0x1514, 0x0}};
    // -18996377163096.87275975299
    s21_decimal dec_2 = {{0x7bf57283, 0x91237faf, 0x19243, 0x800b0000}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_88) {
    // -92157209069980.59
    s21_decimal dec_1 = {{0x3b02c12b, 0x20bda6, 0x0, 0x80020000}};
    // 9822037895226319464712274823
    s21_decimal dec_2 = {{0x25aa8387, 0x36436d31, 0x1fbc996d, 0x0}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_89) {
    // -76.28364031675058569965936
    s21_decimal dec_1 = {{0xcffd7170, 0x715a33a3, 0x64f5e, 0x80170000}};
    // 97408728451092070.7542
    s21_decimal dec_2 = {{0xba4a8dd6, 0xce2d3853, 0x34, 0x40000}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_90) {
    // 5827472.423039159608493907422
    s21_decimal dec_1 = {{0x8a0e9dde, 0xed3ebf8, 0x12d45f49, 0x150000}};
    // 81937229
    s21_decimal dec_2 = {{0x4e2434d, 0x0, 0x0, 0x0}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_91) {
    // 954334841144723285024134446
    s21_decimal dec_1 = {{0xf0db552e, 0x6702c2f2, 0x3156843, 0x0}};
    // -326375940554851.133048
    s21_decimal dec_2 = {{0x85e8a678, 0xb16044b8, 0x11, 0x80060000}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_92) {
    // 920519276712513644676
    s21_decimal dec_1 = {{0xc4e22884, 0xe6c56d0c, 0x31, 0x0}};
    // -74.4391050861609938561667
    s21_decimal dec_2 = {{0xbd3aa83, 0x850cc5d1, 0x9da1, 0x80160000}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_93) {
    // -1664410.589087037973182451
    s21_decimal dec_1 = {{0x5e55b7f3, 0xe0fafd6b, 0x16073, 0x80120000}};
    // 910223266060322448
    s21_decimal dec_2 = {{0xe7d24690, 0xca1c33c, 0x0, 0x0}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_94) {
    // 60.620
    s21_decimal dec_1 = {{0xeccc, 0x0, 0x0, 0x30000}};
    // 89662063673740765529188951
    s21_decimal dec_2 = {{0xf46d2a57, 0x36132e28, 0x4a2aae, 0x0}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_95) {
    // 55139093371.69022146768
    s21_decimal dec_1 = {{0x2523d8d0, 0xe8dd2036, 0x12a, 0xb0000}};
    // 83285812595956004473355728
    s21_decimal dec_2 = {{0x18b53dd0, 0xf29baaff, 0x44e474, 0x0}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_96) {
    // 8194551795879660167124879
    s21_decimal dec_1 = {{0x91b4578f, 0x8b00dc62, 0x6c743, 0x0}};
    // -5191185.1148789386054642432566
    s21_decimal dec_2 = {{0x2c4bfa36, 0xa9bf8cd1, 0xa7bc7a11, 0x80160000}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_97) {
    // 8295077861504
    s21_decimal dec_1 = {{0x592b5880, 0x78b, 0x0, 0x0}};
    // 9.166031379782519741
    s21_decimal dec_2 = {{0xe8054bbd, 0x7f3448f9, 0x0, 0x120000}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_98) {
    // 0.18131837842974931654818173
    s21_decimal dec_1 = {{0x73ac397d, 0xe6268794, 0xeff90, 0x1a0000}};
    // 992191888432403064029094
    s21_decimal dec_2 = {{0xcf2fffa6, 0xd47e0758, 0xd21a, 0x0}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_99) {
    // 90437.015923008417
    s21_decimal dec_1 = {{0xa0a323a1, 0x1414bfc, 0x0, 0xc0000}};
    // 87230322682719730056505
    s21_decimal dec_2 = {{0x60e2bd39, 0xc3e899e0, 0x1278, 0x0}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_100) {
    // 81302285385787173819
    s21_decimal dec_1 = {{0xe746ebbb, 0x684bbdcc, 0x4, 0x0}};
    // -35475537.1052061160467642240
    s21_decimal dec_2 = {{0x4a10b780, 0x33249add, 0x125725f, 0x80130000}};
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

    tcase_add_test(tc, invalid_dec_s21_add_1);
    tcase_add_test(tc, invalid_dec_s21_add_2);
    tcase_add_test(tc, invalid_dec_s21_add_3);
    tcase_add_test(tc, invalid_dec_s21_add_4);
    tcase_add_test(tc, invalid_dec_s21_add_5);
    tcase_add_test(tc, invalid_dec_s21_add_6);
    tcase_add_test(tc, invalid_dec_s21_add_7);
    tcase_add_test(tc, invalid_dec_s21_add_8);
    tcase_add_test(tc, invalid_dec_s21_add_9);
    tcase_add_test(tc, invalid_dec_s21_add_10);
    tcase_add_test(tc, invalid_dec_s21_add_11);
    tcase_add_test(tc, invalid_dec_s21_add_12);
    tcase_add_test(tc, invalid_dec_s21_add_13);
    tcase_add_test(tc, invalid_dec_s21_add_14);
    tcase_add_test(tc, invalid_dec_s21_add_15);
    tcase_add_test(tc, invalid_dec_s21_add_16);
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
    tcase_add_test(tc, s21_add_101);
    tcase_add_test(tc, s21_add_102);
    tcase_add_test(tc, s21_add_103);
    tcase_add_test(tc, s21_add_104);
    tcase_add_test(tc, s21_add_105);
    tcase_add_test(tc, s21_add_106);
    tcase_add_test(tc, s21_add_107);
    tcase_add_test(tc, s21_add_108);
    tcase_add_test(tc, s21_add_109);
    tcase_add_test(tc, s21_add_110);
    tcase_add_test(tc, s21_add_111);
    tcase_add_test(tc, s21_add_112);
    tcase_add_test(tc, s21_add_113);
    tcase_add_test(tc, s21_add_114);
    tcase_add_test(tc, s21_add_115);
    tcase_add_test(tc, s21_add_116);
    tcase_add_test(tc, s21_add_117);
    tcase_add_test(tc, s21_add_118);
    tcase_add_test(tc, s21_add_119);
    tcase_add_test(tc, s21_add_120);
    tcase_add_test(tc, s21_add_121);
    tcase_add_test(tc, s21_add_122);
    tcase_add_test(tc, s21_add_123);
    tcase_add_test(tc, s21_add_124);
    tcase_add_test(tc, s21_add_125);
    tcase_add_test(tc, s21_add_126);
    tcase_add_test(tc, s21_add_127);
    tcase_add_test(tc, s21_add_128);
    tcase_add_test(tc, s21_add_129);
    tcase_add_test(tc, s21_add_130);
    tcase_add_test(tc, s21_add_131);
    tcase_add_test(tc, s21_add_132);
    tcase_add_test(tc, s21_add_133);
    tcase_add_test(tc, s21_add_134);
    tcase_add_test(tc, s21_add_135);
    tcase_add_test(tc, s21_add_136);
    tcase_add_test(tc, s21_add_137);
    tcase_add_test(tc, s21_add_138);
    tcase_add_test(tc, s21_add_139);
    tcase_add_test(tc, s21_add_140);
    tcase_add_test(tc, s21_add_141);
    tcase_add_test(tc, s21_add_142);
    tcase_add_test(tc, s21_add_143);
    tcase_add_test(tc, s21_add_144);
    tcase_add_test(tc, s21_add_145);
    tcase_add_test(tc, s21_add_146);
    tcase_add_test(tc, s21_add_147);
    tcase_add_test(tc, s21_add_148);
    tcase_add_test(tc, s21_add_149);
    tcase_add_test(tc, s21_add_150);
    tcase_add_test(tc, s21_add_151);
    tcase_add_test(tc, s21_add_152);
    tcase_add_test(tc, s21_add_153);
    tcase_add_test(tc, s21_add_154);
    tcase_add_test(tc, s21_add_155);
    tcase_add_test(tc, s21_add_156);
    tcase_add_test(tc, s21_add_157);
    tcase_add_test(tc, s21_add_158);
    tcase_add_test(tc, s21_add_159);
    tcase_add_test(tc, s21_add_160);
    tcase_add_test(tc, s21_add_161);
    tcase_add_test(tc, s21_add_162);
    tcase_add_test(tc, s21_add_163);
    tcase_add_test(tc, s21_add_164);
    tcase_add_test(tc, s21_add_165);
    tcase_add_test(tc, s21_add_166);
    tcase_add_test(tc, s21_add_167);
    tcase_add_test(tc, s21_add_168);
    tcase_add_test(tc, s21_add_169);
    tcase_add_test(tc, s21_add_170);
    tcase_add_test(tc, s21_add_171);
    tcase_add_test(tc, s21_add_172);
    tcase_add_test(tc, s21_add_173);
    tcase_add_test(tc, s21_add_174);
    tcase_add_test(tc, s21_add_175);
    tcase_add_test(tc, s21_add_176);
    tcase_add_test(tc, s21_add_177);
    tcase_add_test(tc, s21_add_178);
    tcase_add_test(tc, s21_add_179);
    tcase_add_test(tc, s21_add_180);
    tcase_add_test(tc, s21_add_181);
    tcase_add_test(tc, s21_add_182);
    tcase_add_test(tc, s21_add_183);
    tcase_add_test(tc, s21_add_184);
    tcase_add_test(tc, s21_add_185);
    tcase_add_test(tc, s21_add_186);
    tcase_add_test(tc, s21_add_187);
    tcase_add_test(tc, s21_add_188);
    tcase_add_test(tc, s21_add_189);
    tcase_add_test(tc, s21_add_190);
    tcase_add_test(tc, s21_add_191);
    tcase_add_test(tc, s21_add_192);
    tcase_add_test(tc, s21_add_193);
    tcase_add_test(tc, s21_add_194);
    tcase_add_test(tc, s21_add_195);
    tcase_add_test(tc, s21_add_196);
    tcase_add_test(tc, s21_add_197);
    tcase_add_test(tc, s21_add_198);
    tcase_add_test(tc, s21_add_199);
    tcase_add_test(tc, s21_add_200);
    tcase_add_test(tc, s21_add_201);
    tcase_add_test(tc, s21_add_202);
    tcase_add_test(tc, s21_add_203);
    tcase_add_test(tc, s21_add_204);
    tcase_add_test(tc, s21_add_205);
    tcase_add_test(tc, s21_add_206);
    tcase_add_test(tc, s21_add_207);
    tcase_add_test(tc, s21_add_208);
    tcase_add_test(tc, s21_add_209);
    tcase_add_test(tc, s21_add_210);
    tcase_add_test(tc, s21_add_211);
    tcase_add_test(tc, s21_add_212);
    tcase_add_test(tc, s21_add_213);
    tcase_add_test(tc, s21_add_214);
    tcase_add_test(tc, s21_add_215);
    tcase_add_test(tc, s21_add_216);
    tcase_add_test(tc, s21_add_217);
    tcase_add_test(tc, s21_add_218);
    tcase_add_test(tc, s21_add_219);
    tcase_add_test(tc, s21_add_220);
    tcase_add_test(tc, s21_add_221);
    tcase_add_test(tc, s21_add_222);
    tcase_add_test(tc, s21_add_223);
    tcase_add_test(tc, s21_add_224);
    tcase_add_test(tc, s21_add_225);
    tcase_add_test(tc, s21_add_226);
    tcase_add_test(tc, s21_add_227);
    tcase_add_test(tc, s21_add_228);
    tcase_add_test(tc, s21_add_229);
    tcase_add_test(tc, s21_add_230);
    tcase_add_test(tc, s21_add_231);
    tcase_add_test(tc, s21_add_232);
    tcase_add_test(tc, s21_add_233);
    tcase_add_test(tc, s21_add_234);
    tcase_add_test(tc, s21_add_235);
    tcase_add_test(tc, s21_add_236);
    tcase_add_test(tc, s21_add_237);
    tcase_add_test(tc, s21_add_238);
    tcase_add_test(tc, s21_add_239);
    tcase_add_test(tc, s21_add_240);
    tcase_add_test(tc, s21_add_241);
    tcase_add_test(tc, s21_add_242);
    tcase_add_test(tc, s21_add_243);
    tcase_add_test(tc, s21_add_244);
    tcase_add_test(tc, s21_add_245);
    tcase_add_test(tc, s21_add_246);
    tcase_add_test(tc, s21_add_247);
    tcase_add_test(tc, s21_add_248);
    tcase_add_test(tc, s21_add_249);
    tcase_add_test(tc, s21_add_250);
    tcase_add_test(tc, s21_add_251);
    tcase_add_test(tc, s21_add_252);
    tcase_add_test(tc, s21_add_253);
    tcase_add_test(tc, s21_add_254);
    tcase_add_test(tc, s21_add_255);
    tcase_add_test(tc, s21_add_256);
    tcase_add_test(tc, s21_add_257);
    tcase_add_test(tc, s21_add_258);
    tcase_add_test(tc, s21_add_259);
    tcase_add_test(tc, s21_add_260);
    tcase_add_test(tc, s21_add_261);
    tcase_add_test(tc, s21_add_262);
    tcase_add_test(tc, s21_add_263);
    tcase_add_test(tc, s21_add_264);
    tcase_add_test(tc, s21_add_265);
    tcase_add_test(tc, s21_add_266);
    tcase_add_test(tc, s21_add_267);
    tcase_add_test(tc, s21_add_268);
    tcase_add_test(tc, s21_add_269);
    tcase_add_test(tc, s21_add_270);
    tcase_add_test(tc, s21_add_271);
    tcase_add_test(tc, s21_add_272);
    tcase_add_test(tc, s21_add_273);
    tcase_add_test(tc, s21_add_274);
    tcase_add_test(tc, s21_add_275);
    tcase_add_test(tc, s21_add_276);
    tcase_add_test(tc, s21_add_277);
    tcase_add_test(tc, s21_add_278);
    tcase_add_test(tc, s21_add_279);
    tcase_add_test(tc, s21_add_280);
    tcase_add_test(tc, s21_add_281);
    tcase_add_test(tc, s21_add_282);
    tcase_add_test(tc, s21_add_283);
    tcase_add_test(tc, s21_add_284);
    tcase_add_test(tc, s21_add_285);
    tcase_add_test(tc, s21_add_286);
    tcase_add_test(tc, s21_add_287);
    tcase_add_test(tc, s21_add_288);
    tcase_add_test(tc, s21_add_289);
    tcase_add_test(tc, s21_add_290);
    tcase_add_test(tc, s21_add_291);
    tcase_add_test(tc, s21_add_292);
    tcase_add_test(tc, s21_add_293);
    tcase_add_test(tc, s21_add_294);
    tcase_add_test(tc, s21_add_295);
    tcase_add_test(tc, s21_add_296);
    tcase_add_test(tc, s21_add_297);
    tcase_add_test(tc, s21_add_298);
    tcase_add_test(tc, s21_add_299);
    tcase_add_test(tc, s21_add_300);
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
    tcase_add_test(tc, fail_s21_add_34);
    tcase_add_test(tc, fail_s21_add_35);
    tcase_add_test(tc, fail_s21_add_36);
    tcase_add_test(tc, fail_s21_add_37);
    tcase_add_test(tc, fail_s21_add_38);
    tcase_add_test(tc, fail_s21_add_39);
    tcase_add_test(tc, fail_s21_add_40);
    tcase_add_test(tc, fail_s21_add_41);
    tcase_add_test(tc, fail_s21_add_42);
    tcase_add_test(tc, fail_s21_add_43);
    tcase_add_test(tc, fail_s21_add_44);
    tcase_add_test(tc, fail_s21_add_45);
    tcase_add_test(tc, fail_s21_add_46);
    tcase_add_test(tc, fail_s21_add_47);
    tcase_add_test(tc, fail_s21_add_48);
    tcase_add_test(tc, fail_s21_add_49);
    tcase_add_test(tc, fail_s21_add_50);
    tcase_add_test(tc, fail_s21_add_51);
    tcase_add_test(tc, fail_s21_add_52);
    tcase_add_test(tc, fail_s21_add_53);
    tcase_add_test(tc, fail_s21_add_54);
    tcase_add_test(tc, fail_s21_add_55);
    tcase_add_test(tc, fail_s21_add_56);
    tcase_add_test(tc, fail_s21_add_57);
    tcase_add_test(tc, fail_s21_add_58);
    tcase_add_test(tc, fail_s21_add_59);
    tcase_add_test(tc, fail_s21_add_60);
    tcase_add_test(tc, fail_s21_add_61);
    tcase_add_test(tc, fail_s21_add_62);
    tcase_add_test(tc, fail_s21_add_63);
    tcase_add_test(tc, fail_s21_add_64);
    tcase_add_test(tc, fail_s21_add_65);
    tcase_add_test(tc, fail_s21_add_66);
    tcase_add_test(tc, fail_s21_add_67);
    tcase_add_test(tc, fail_s21_add_68);
    tcase_add_test(tc, fail_s21_add_69);
    tcase_add_test(tc, fail_s21_add_70);
    tcase_add_test(tc, fail_s21_add_71);
    tcase_add_test(tc, fail_s21_add_72);
    tcase_add_test(tc, fail_s21_add_73);
    tcase_add_test(tc, fail_s21_add_74);
    tcase_add_test(tc, fail_s21_add_75);
    tcase_add_test(tc, fail_s21_add_76);
    tcase_add_test(tc, fail_s21_add_77);
    tcase_add_test(tc, fail_s21_add_78);
    tcase_add_test(tc, fail_s21_add_79);
    tcase_add_test(tc, fail_s21_add_80);
    tcase_add_test(tc, fail_s21_add_81);
    tcase_add_test(tc, fail_s21_add_82);
    tcase_add_test(tc, fail_s21_add_83);
    tcase_add_test(tc, fail_s21_add_84);
    tcase_add_test(tc, fail_s21_add_85);
    tcase_add_test(tc, fail_s21_add_86);
    tcase_add_test(tc, fail_s21_add_87);
    tcase_add_test(tc, fail_s21_add_88);
    tcase_add_test(tc, fail_s21_add_89);
    tcase_add_test(tc, fail_s21_add_90);
    tcase_add_test(tc, fail_s21_add_91);
    tcase_add_test(tc, fail_s21_add_92);
    tcase_add_test(tc, fail_s21_add_93);
    tcase_add_test(tc, fail_s21_add_94);
    tcase_add_test(tc, fail_s21_add_95);
    tcase_add_test(tc, fail_s21_add_96);
    tcase_add_test(tc, fail_s21_add_97);
    tcase_add_test(tc, fail_s21_add_98);
    tcase_add_test(tc, fail_s21_add_99);
    tcase_add_test(tc, fail_s21_add_100);

    suite_add_tcase(c, tc);
    return c;
}
