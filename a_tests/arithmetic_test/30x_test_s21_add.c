#include <check.h>

#include "../../inc/s21_add.h"

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
    // 162401650983332
    s21_decimal dec_1 = {{0x14b7c1a4, 0x93b4, 0x0, 0x0}};
    // 94812067111410751220
    s21_decimal dec_2 = {{0xb42256f4, 0x23c820b3, 0x5, 0x0}};
    // 94812229513061734552
    s21_decimal dec_check = {{0xc8da1898, 0x23c8b467, 0x5, 0x0}};
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
    // -138619550.247666
    s21_decimal dec_1 = {{0xe10d2af2, 0x7e12, 0x0, 0x80060000}};
    // 32980590167449929
    s21_decimal dec_2 = {{0x969e149, 0x752bac, 0x0, 0x0}};
    // 32980590028830378.752334
    s21_decimal dec_check = {{0xf8c6f94e, 0xe1a15490, 0x6fb, 0x60000}};
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
    // -320928103298491862747402
    s21_decimal dec_1 = {{0x6bd0090a, 0x8c1e8003, 0x43f5, 0x80000000}};
    // -6457591858698
    s21_decimal dec_2 = {{0x8678060a, 0x5df, 0x0, 0x80000000}};
    // -320928103304949454606100
    s21_decimal dec_check = {{0xf2480f14, 0x8c1e85e2, 0x43f5, 0x80000000}};
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
    // -830740421609266291
    s21_decimal dec_1 = {{0x12941c73, 0xb876203, 0x0, 0x80000000}};
    // 98158819701
    s21_decimal dec_2 = {{0xdab8b975, 0x16, 0x0, 0x0}};
    // -830740323450446590
    s21_decimal dec_check = {{0x37db62fe, 0xb8761ec, 0x0, 0x80000000}};
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
    // -42086538.79744229564892287
    s21_decimal dec_1 = {{0x987e447f, 0x957fe774, 0x37b37, 0x80110000}};
    // -3132
    s21_decimal dec_2 = {{0xc3c, 0x0, 0x0, 0x80000000}};
    // -42089670.79744229564892287
    s21_decimal dec_check = {{0xfcd6447f, 0x9005d40c, 0x37b48, 0x80110000}};
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
    // 169778.203116730371966706948
    s21_decimal dec_1 = {{0x3b1f2504, 0xd53efa53, 0x8c6fee, 0x150000}};
    // -2061219261493241166828
    s21_decimal dec_2 = {{0x39a3bbec, 0xbd29dd85, 0x6f, 0x80000000}};
    // -2061219261493240997049.7968833
    s21_decimal dec_check = {{0xa685ac1, 0xa3d50a0f, 0x429a0190, 0x80070000}};
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
    // 6038458500112216987257326
    s21_decimal dec_1 = {{0xac03c9ee, 0x7dc037c3, 0x4feb1, 0x0}};
    // 62.46299429220
    s21_decimal dec_2 = {{0x54756964, 0x5ae, 0x0, 0xb0000}};
    // 6038458500112216987257388.4630
    s21_decimal dec_check = {{0x540968d6, 0x24824b6f, 0xc31cf540, 0x40000}};
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
    // -7025928
    s21_decimal dec_1 = {{0x6b3508, 0x0, 0x0, 0x80000000}};
    // -170918564635118756.55631584882
    s21_decimal dec_2 = {{0x26f33e72, 0x7a3d6542, 0x373a0d63, 0x800b0000}};
    // -170918564642144684.55631584882
    s21_decimal dec_check = {{0xb27e72, 0x83fd81b0, 0x373a0d63, 0x800b0000}};
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
    // 395078.6261
    s21_decimal dec_1 = {{0xeb7c36d5, 0x0, 0x0, 0x40000}};
    // 745106171.0022010151
    s21_decimal dec_2 = {{0xd9606527, 0x67677d25, 0x0, 0xa0000}};
    // 745501249.6283010151
    s21_decimal dec_check = {{0xf50c0467, 0x6775865d, 0x0, 0xa0000}};
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
    // 260041.506364
    s21_decimal dec_1 = {{0x8bae7e3c, 0x3c, 0x0, 0x60000}};
    // 87344990.98765300462
    s21_decimal dec_2 = {{0x28e012ee, 0x79372ca7, 0x0, 0xb0000}};
    // 87605032.49401700462
    s21_decimal dec_check = {{0x4a3e606e, 0x79938f4a, 0x0, 0xb0000}};
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
    // -538618715407
    s21_decimal dec_1 = {{0x682d5d0f, 0x7d, 0x0, 0x80000000}};
    // 3
    s21_decimal dec_2 = {{0x3, 0x0, 0x0, 0x0}};
    // -538618715404
    s21_decimal dec_check = {{0x682d5d0c, 0x7d, 0x0, 0x80000000}};
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
    // -97231752.545346969059693162
    s21_decimal dec_1 = {{0x6b43926a, 0xde01997f, 0x506d9f, 0x80120000}};
    // 729316936272734.655
    s21_decimal dec_2 = {{0xb33669bf, 0xa1f0de3, 0x0, 0x30000}};
    // 729316839040982.10965303094031
    s21_decimal dec_check = {{0x14f06b0f, 0x97ac08fc, 0xeba7acca, 0xe0000}};
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
    // 17
    s21_decimal dec_1 = {{0x11, 0x0, 0x0, 0x0}};
    // 418642752016754576434
    s21_decimal dec_2 = {{0x169a8c32, 0xb1d5d4e5, 0x16, 0x0}};
    // 418642752016754576451
    s21_decimal dec_check = {{0x169a8c43, 0xb1d5d4e5, 0x16, 0x0}};
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
    // -8.959390483504852542324
    s21_decimal dec_1 = {{0xc9fea374, 0xb0851fdc, 0x1e5, 0x80150000}};
    // -24137954387052865115
    s21_decimal dec_2 = {{0x6cde265b, 0x4efb3da0, 0x1, 0x80000000}};
    // -24137954387052865123.959390484
    s21_decimal dec_check = {{0x6c074114, 0x4a394663, 0x4dfe72a9, 0x80090000}};
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
    // 584919014.4336990419
    s21_decimal dec_1 = {{0x28ec10d3, 0x512c7f72, 0x0, 0xa0000}};
    // -13595714378
    s21_decimal dec_2 = {{0x2a5e234a, 0x3, 0x0, 0x80000000}};
    // -13010795363.5663009581
    s21_decimal dec_check = {{0x7aafd72d, 0xd9c4e7d, 0x7, 0x800a0000}};
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
    // 953723145696093
    s21_decimal dec_1 = {{0xf950335d, 0x36367, 0x0, 0x0}};
    // -13919812409936868909197036564
    s21_decimal dec_2 = {{0x77100c14, 0xc5afae18, 0x2cfa32ee, 0x80000000}};
    // -13919812409935915186051340471
    s21_decimal dec_check = {{0x7dbfd8b7, 0xc5ac4ab0, 0x2cfa32ee, 0x80000000}};
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
    // -493560.5384
    s21_decimal dec_1 = {{0x262f5c88, 0x1, 0x0, 0x80040000}};
    // 469440.37058885113
    s21_decimal dec_2 = {{0x5d37b5f9, 0xa6c75a, 0x0, 0xb0000}};
    // -24120.16781114887
    s21_decimal dec_check = {{0x6b6e3e07, 0x891b7, 0x0, 0x800b0000}};
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
    // 165410986010262908563762199
    s21_decimal dec_1 = {{0xa3b62c17, 0x84ee8a11, 0x88d323, 0x0}};
    // 165134609490960721205605815
    s21_decimal dec_2 = {{0x3bc535b7, 0x1e3dea49, 0x88989d, 0x0}};
    // 330545595501223629769368014
    s21_decimal dec_check = {{0xdf7b61ce, 0xa32c745a, 0x1116bc0, 0x0}};
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
    // -97952587417587400654
    s21_decimal dec_1 = {{0xffb1bfce, 0x4f5d7f47, 0x5, 0x80000000}};
    // -238560795272
    s21_decimal dec_2 = {{0x8b54da88, 0x37, 0x0, 0x80000000}};
    // -97952587656148195926
    s21_decimal dec_check = {{0x8b069a56, 0x4f5d7f7f, 0x5, 0x80000000}};
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
    // 217009094102734226638145
    s21_decimal dec_1 = {{0xc61cc541, 0x16290afa, 0x2df4, 0x0}};
    // 78290205.1
    s21_decimal dec_2 = {{0x2eaa2323, 0x0, 0x0, 0x10000}};
    // 217009094102734304928350.1
    s21_decimal dec_check = {{0xebc9d7ad, 0xdd9a6dcb, 0x1cb88, 0x10000}};
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
    // 4953508067473641089996
    s21_decimal dec_1 = {{0x8612abcc, 0x87bbde8e, 0x10c, 0x0}};
    // -13539388610551202.85
    s21_decimal dec_2 = {{0x7cc9939d, 0x12ca2838, 0x0, 0x80020000}};
    // 4953494528085030538793.15
    s21_decimal dec_check = {{0xe2818813, 0xf298c773, 0x68e4, 0x20000}};
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
    // 1077838.1140730362680020
    s21_decimal dec_1 = {{0xfadb52d4, 0x4c161d2e, 0x248, 0x100000}};
    // -4467571436914.9667720828
    s21_decimal dec_2 = {{0x8c9d3e7c, 0xe0158ca9, 0x975, 0x800a0000}};
    // -4467570359076.8526990465319980
    s21_decimal dec_check = {{0x5fd4442c, 0x858000ab, 0x905ae038, 0x80100000}};
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
    // 0.216118
    s21_decimal dec_1 = {{0x34c36, 0x0, 0x0, 0x60000}};
    // -76649697108275291034505125
    s21_decimal dec_2 = {{0xa2f44fa5, 0x68007c1d, 0x3f6734, 0x80000000}};
    // -76649697108275291034505124.784
    s21_decimal dec_check = {{0x8a571bb0, 0x41e4d3c4, 0xf7ab24b6, 0x80030000}};
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
    // 556546880540
    s21_decimal dec_1 = {{0x94c7741c, 0x81, 0x0, 0x0}};
    // 4578568991951
    s21_decimal dec_2 = {{0x7fa74cf, 0x42a, 0x0, 0x0}};
    // 5135115872491
    s21_decimal dec_check = {{0x9cc1e8eb, 0x4ab, 0x0, 0x0}};
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
    // 86612530
    s21_decimal dec_1 = {{0x5299a32, 0x0, 0x0, 0x0}};
    // -350851803795433677532478.645
    s21_decimal dec_2 = {{0x5a40bcb5, 0x650fdde2, 0x12237c2, 0x80030000}};
    // -350851803795433590919948.645
    s21_decimal dec_check = {{0x2fbe6965, 0x650fddce, 0x12237c2, 0x80030000}};
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
    // 794591355885716
    s21_decimal dec_1 = {{0x37825894, 0x2d2ad, 0x0, 0x0}};
    // -67712785803874.344930935780048
    s21_decimal dec_2 = {{0x42e332d0, 0xae28c233, 0xdacab421, 0x800f0000}};
    // 726878570081841.65506906421995
    s21_decimal dec_check = {{0x52c97aeb, 0x1456bd65, 0xeaddfc70, 0xe0000}};
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
    // 9
    s21_decimal dec_1 = {{0x9, 0x0, 0x0, 0x0}};
    // -915729409760274073384874421
    s21_decimal dec_2 = {{0xb36f71b5, 0xc6073c11, 0x2f5793e, 0x80000000}};
    // -915729409760274073384874412
    s21_decimal dec_check = {{0xb36f71ac, 0xc6073c11, 0x2f5793e, 0x80000000}};
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
    // -412910511256377543
    s21_decimal dec_1 = {{0x1b7618c7, 0x5baf3ec, 0x0, 0x80000000}};
    // 9891142978598419229423
    s21_decimal dec_2 = {{0x85eeeaef, 0x332ef583, 0x218, 0x0}};
    // 9890730068087162851880
    s21_decimal dec_check = {{0x6a78d228, 0x2d740197, 0x218, 0x0}};
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
    // -0.04334440096260687
    s21_decimal dec_1 = {{0x7a3ce24f, 0xf6626, 0x0, 0x80110000}};
    // 11140404741563117224285205
    s21_decimal dec_2 = {{0xb8ff5415, 0x8d18b9a9, 0x93712, 0x0}};
    // 11140404741563117224285204.957
    s21_decimal dec_check = {{0xa56071dd, 0x28953efa, 0x23ff2077, 0x30000}};
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
    // -65638453910642028877145406
    s21_decimal dec_1 = {{0xa077653e, 0xb767a777, 0x364b7b, 0x80000000}};
    // 354564038606.2850590156350
    s21_decimal dec_2 = {{0x4e06a63e, 0x8cebac48, 0x2eed1, 0xd0000}};
    // -65638453910641674313106799.715
    s21_decimal dec_check = {{0x72d13c63, 0x6ce4e8d1, 0xd416db44, 0x80030000}};
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
    // 970899.65391804119399647
    s21_decimal dec_1 = {{0xae003cdf, 0x41f01f29, 0x148f, 0x110000}};
    // 978795768917
    s21_decimal dec_2 = {{0xe4c62c55, 0xe3, 0x0, 0x0}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_2) {
    // 79.483340647783691025
    s21_decimal dec_1 = {{0xc8837311, 0x4f0d8d32, 0x4, 0x120000}};
    // 84669885000979869
    s21_decimal dec_2 = {{0xd2a8159d, 0x12ccecf, 0x0, 0x0}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_3) {
    // 986581389937067714591702
    s21_decimal dec_1 = {{0xd016bbd6, 0xaf2f4788, 0xd0ea, 0x0}};
    // 5674.237011799
    s21_decimal dec_2 = {{0x22e1a757, 0x529, 0x0, 0x90000}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_4) {
    // 0.4199811156
    s21_decimal dec_1 = {{0xfa540854, 0x0, 0x0, 0xa0000}};
    // 8219669855590563620498
    s21_decimal dec_2 = {{0x75e6a692, 0x96d587fb, 0x1bd, 0x0}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_5) {
    // 41104.50878553472574939878
    s21_decimal dec_1 = {{0xeb8be2e6, 0xfd164642, 0x3666b, 0x140000}};
    // 956264413489221307231746093
    s21_decimal dec_2 = {{0xb76db82d, 0xba914b77, 0x31700dd, 0x0}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_6) {
    // -6659355709.2184436317074584850
    s21_decimal dec_1 = {{0xb5f97512, 0xa4e9c215, 0xd72ce63b, 0x80130000}};
    // 940699187953099.24842463
    s21_decimal dec_2 = {{0x42117bdf, 0x8a5f448b, 0x13eb, 0x80000}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_7) {
    // 6553.6408068475188533745
    s21_decimal dec_1 = {{0xbba5d9f1, 0xbc5d6781, 0xde0, 0x130000}};
    // 9961710366
    s21_decimal dec_2 = {{0x51c3a31e, 0x2, 0x0, 0x0}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_8) {
    // 974349957737955985595686
    s21_decimal dec_1 = {{0xf6821d26, 0x9df6cb58, 0xce53, 0x0}};
    // 585580208849931.683095042
    s21_decimal dec_2 = {{0xff85e202, 0x5de20418, 0x7c00, 0x90000}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_9) {
    // 9913299194173040095638.8542
    s21_decimal dec_1 = {{0x70cd14be, 0x42ebce30, 0x52003a, 0x40000}};
    // 32163.4591125
    s21_decimal dec_2 = {{0xe2ea6195, 0x4a, 0x0, 0x70000}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_10) {
    // 0.493461082284269723
    s21_decimal dec_1 = {{0x6808a09b, 0x6d9203d, 0x0, 0x120000}};
    // 845214125195530348167144.7007
    s21_decimal dec_2 = {{0xc6e471df, 0x604f990c, 0x1b4f7287, 0x40000}};
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

    suite_add_tcase(c, tc);
    return c;
}
