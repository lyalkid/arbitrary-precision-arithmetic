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
    // -384.156
    s21_decimal dec_1 = {{0x5dc9c, 0x0, 0x0, 0x80030000}};
    // -52.9049175792731617051028755
    s21_decimal dec_2 = {{0x5f882d13, 0x498cf7ed, 0x1b59e85, 0x80190000}};
    // -437.0609175792731617051028755
    s21_decimal dec_check = {{0xfe882d13, 0x2c89d220, 0xe1f487e, 0x80190000}};
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
    // -5622908
    s21_decimal dec_1 = {{0x55cc7c, 0x0, 0x0, 0x80000000}};
    // 0.0973452
    s21_decimal dec_2 = {{0xeda8c, 0x0, 0x0, 0x70000}};
    // -5622907.9026548
    s21_decimal dec_check = {{0xda480b74, 0x3323, 0x0, 0x80070000}};
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
    // 6975478698673281238697586187
    s21_decimal dec_1 = {{0xdee92e0b, 0xf61e1579, 0x1689fb11, 0x0}};
    // 3173312512410960601
    s21_decimal dec_2 = {{0xc78ec2d9, 0x2c09deea, 0x0, 0x0}};
    // 6975478701846593751108546788
    s21_decimal dec_check = {{0xa677f0e4, 0x2227f464, 0x1689fb12, 0x0}};
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
    // -1726229109804
    s21_decimal dec_1 = {{0xeb45dc2c, 0x191, 0x0, 0x80000000}};
    // 19127724293600
    s21_decimal dec_2 = {{0x85363de0, 0x1165, 0x0, 0x0}};
    // 17401495183796
    s21_decimal dec_check = {{0x99f061b4, 0xfd3, 0x0, 0x0}};
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
    // -8.2352191620
    s21_decimal dec_1 = {{0x2c92b884, 0x13, 0x0, 0x800a0000}};
    // -812645
    s21_decimal dec_2 = {{0xc6665, 0x0, 0x0, 0x80000000}};
    // -812653.2352191620
    s21_decimal dec_check = {{0xc21bac84, 0x1cdf09, 0x0, 0x800a0000}};
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
    // 9.5
    s21_decimal dec_1 = {{0x5f, 0x0, 0x0, 0x10000}};
    // 54582481
    s21_decimal dec_2 = {{0x340dcd1, 0x0, 0x0, 0x0}};
    // 54582490.5
    s21_decimal dec_check = {{0x2088a089, 0x0, 0x0, 0x10000}};
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
    // 5504104
    s21_decimal dec_1 = {{0x53fc68, 0x0, 0x0, 0x0}};
    // -56.892
    s21_decimal dec_2 = {{0xde3c, 0x0, 0x0, 0x80030000}};
    // 5504047.108
    s21_decimal dec_check = {{0x48111804, 0x1, 0x0, 0x30000}};
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
    // -1
    s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x80000000}};
    // -45915551606.83780157
    s21_decimal dec_2 = {{0x6f2b183d, 0x3fb87b17, 0x0, 0x80080000}};
    // -45915551607.83780157
    s21_decimal dec_check = {{0x7520f93d, 0x3fb87b17, 0x0, 0x80080000}};
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
    // 9356
    s21_decimal dec_1 = {{0x248c, 0x0, 0x0, 0x0}};
    // -603732689682438334424317.5538
    s21_decimal dec_2 = {{0xbb1cf072, 0xe08a2ad1, 0x1381f5b2, 0x80040000}};
    // -603732689682438334414961.5538
    s21_decimal dec_check = {{0xb58953b2, 0xe08a2ad1, 0x1381f5b2, 0x80040000}};
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
    // 7257934327681331
    s21_decimal dec_1 = {{0x85679133, 0x19c90d, 0x0, 0x0}};
    // 8.9
    s21_decimal dec_2 = {{0x59, 0x0, 0x0, 0x10000}};
    // 7257934327681339.9
    s21_decimal dec_check = {{0x360bac57, 0x101da87, 0x0, 0x10000}};
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
    // 0.90250854819875
    s21_decimal dec_1 = {{0x2a246823, 0x5215, 0x0, 0xe0000}};
    // -243775464053914526876714
    s21_decimal dec_2 = {{0xad9d042a, 0x1829b345, 0x339f, 0x80000000}};
    // -243775464053914526876713.09749
    s21_decimal dec_check = {{0xb67935b5, 0xa12c3209, 0x4ec4a23e, 0x80050000}};
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
    // -1976224331243858378218587.8699
    s21_decimal dec_1 = {{0x132fc4ab, 0xa06c473d, 0x3fdaf1cc, 0x80040000}};
    // -910388
    s21_decimal dec_2 = {{0xde434, 0x0, 0x0, 0x80000000}};
    // -1976224331243858379128975.8699
    s21_decimal dec_check = {{0x31d1f3eb, 0xa06c473f, 0x3fdaf1cc, 0x80040000}};
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
    // 7784034129089001.8176765268
    s21_decimal dec_1 = {{0xc560d54, 0x5b52a4f8, 0x406355, 0xa0000}};
    // 6671
    s21_decimal dec_2 = {{0x1a0f, 0x0, 0x0, 0x0}};
    // 7784034129095672.8176765268
    s21_decimal dec_check = {{0x2e306954, 0x5b52e1a4, 0x406355, 0xa0000}};
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
    // -9.220545166175972038794721
    s21_decimal dec_1 = {{0xddf7dde1, 0xc149df07, 0x7a086, 0x80180000}};
    // -573659598.2
    s21_decimal dec_2 = {{0x55ed820e, 0x1, 0x0, 0x80010000}};
    // -573659607.42054516617597203879
    s21_decimal dec_check = {{0x6314b5a7, 0x29a59dab, 0xb95c02b3, 0x80140000}};
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
    // -449659275.0
    s21_decimal dec_1 = {{0xc048f6e, 0x1, 0x0, 0x80010000}};
    // 15801266937.973921493
    s21_decimal dec_2 = {{0xb70f56d5, 0xdb49608f, 0x0, 0x90000}};
    // 15351607662.973921493
    s21_decimal dec_check = {{0x4ab9a8d5, 0xd50bddd5, 0x0, 0x90000}};
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
    // 48.867941442949445
    s21_decimal dec_1 = {{0x429c9145, 0xad9d22, 0x0, 0xf0000}};
    // -4
    s21_decimal dec_2 = {{0x4, 0x0, 0x0, 0x80000000}};
    // 44.867941442949445
    s21_decimal dec_check = {{0xaf829145, 0x9f6727, 0x0, 0xf0000}};
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
    // -98858654974553.4947142
    s21_decimal dec_1 = {{0xcfa4cf46, 0x9764f53c, 0x35, 0x80070000}};
    // 72426
    s21_decimal dec_2 = {{0x11aea, 0x0, 0x0, 0x0}};
    // -98858654902127.4947142
    s21_decimal dec_check = {{0x2e623e46, 0x9764f494, 0x35, 0x80070000}};
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
    // -91025494
    s21_decimal dec_1 = {{0x56cf056, 0x0, 0x0, 0x80000000}};
    // -6.099618834549477934905941
    s21_decimal dec_2 = {{0x11143a55, 0xffe4f91d, 0x50ba4, 0x80180000}};
    // -91025500.099618834549477934906
    s21_decimal dec_check = {{0x358b073a, 0xfab4318a, 0x261e8767, 0x80150000}};
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
    // -17367.803668899
    s21_decimal dec_1 = {{0xc1c4a9a3, 0xfcb, 0x0, 0x80090000}};
    // -24358626700296021758
    s21_decimal dec_2 = {{0x277d66fe, 0x520b39ed, 0x1, 0x80000000}};
    // -24358626700296039125.803668899
    s21_decimal dec_check = {{0x33d515a3, 0x5c78d921, 0x4eb4fbd7, 0x80090000}};
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
    // -94
    s21_decimal dec_1 = {{0x5e, 0x0, 0x0, 0x80000000}};
    // -695.69
    s21_decimal dec_2 = {{0x10fc1, 0x0, 0x0, 0x80020000}};
    // -789.69
    s21_decimal dec_check = {{0x13479, 0x0, 0x0, 0x80020000}};
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
    // -84.13214700955825693875857184
    s21_decimal dec_1 = {{0x52d96720, 0xd1733a51, 0x1b2f3f82, 0x801a0000}};
    // -21902.928963700534
    s21_decimal dec_2 = {{0xc6c0736, 0x4dd099, 0x0, 0x800c0000}};
    // -21987.061110710092256938758572
    s21_decimal dec_check = {{0xf8af11ac, 0x23e247a7, 0x470b454b, 0x80180000}};
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
    // 9354578
    s21_decimal dec_1 = {{0x8ebd52, 0x0, 0x0, 0x0}};
    // -51.046
    s21_decimal dec_2 = {{0xc766, 0x0, 0x0, 0x80030000}};
    // 9354526.954
    s21_decimal dec_check = {{0x2d92c0ea, 0x2, 0x0, 0x30000}};
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
    // 11210480447
    s21_decimal dec_1 = {{0x9c325b3f, 0x2, 0x0, 0x0}};
    // -63917
    s21_decimal dec_2 = {{0xf9ad, 0x0, 0x0, 0x80000000}};
    // 11210416530
    s21_decimal dec_check = {{0x9c316192, 0x2, 0x0, 0x0}};
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
    // -3504250830.2458
    s21_decimal dec_1 = {{0xf842687a, 0x1fde, 0x0, 0x80040000}};
    // -9661.73976199151736154973
    s21_decimal dec_2 = {{0x3996b5d, 0x656d5803, 0xcc98, 0x80140000}};
    // -3504260491.9855619915173615497
    s21_decimal dec_check = {{0xde285789, 0x2ed4cade, 0x713a903b, 0x80130000}};
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
    // -352894469260.63133606481
    s21_decimal dec_1 = {{0x59b54251, 0xb74cfc0, 0x779, 0x800b0000}};
    // -754
    s21_decimal dec_2 = {{0x2f2, 0x0, 0x0, 0x80000000}};
    // -352894470014.63133606481
    s21_decimal dec_check = {{0xc7ec9251, 0xb751453, 0x779, 0x800b0000}};
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
    // 89.09
    s21_decimal dec_1 = {{0x22cd, 0x0, 0x0, 0x20000}};
    // -7305.52630493360
    s21_decimal dec_2 = {{0xa07c0b0, 0x2986f, 0x0, 0x800b0000}};
    // -7216.43630493360
    s21_decimal dec_check = {{0xc03ffeb0, 0x29054, 0x0, 0x800b0000}};
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
    // 229946041883209251851357
    s21_decimal dec_1 = {{0x462a8c5d, 0x6660626f, 0x30b1, 0x0}};
    // 72215911
    s21_decimal dec_2 = {{0x44ded67, 0x0, 0x0, 0x0}};
    // 229946041883209324067268
    s21_decimal dec_check = {{0x4a7879c4, 0x6660626f, 0x30b1, 0x0}};
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
    // 64287971
    s21_decimal dec_1 = {{0x3d4f4e3, 0x0, 0x0, 0x0}};
    // 31824207524326
    s21_decimal dec_2 = {{0xa695b1e6, 0x1cf1, 0x0, 0x0}};
    // 31824271812297
    s21_decimal dec_check = {{0xaa6aa6c9, 0x1cf1, 0x0, 0x0}};
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
    // 75376.3971289082
    s21_decimal dec_1 = {{0x59c0cffa, 0x2ad8b, 0x0, 0xa0000}};
    // 4019588
    s21_decimal dec_2 = {{0x3d5584, 0x0, 0x0, 0x0}};
    // 4094964.3971289082
    s21_decimal dec_check = {{0xf6965ffa, 0x917b7b, 0x0, 0xa0000}};
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
    // -42400413
    s21_decimal dec_1 = {{0x286fa9d, 0x0, 0x0, 0x80000000}};
    // 197192056959163534
    s21_decimal dec_2 = {{0x8b945c8e, 0x2bc9121, 0x0, 0x0}};
    // 197192056916763121
    s21_decimal dec_check = {{0x890d61f1, 0x2bc9121, 0x0, 0x0}};
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
    // -43790.402023219044291
    s21_decimal dec_1 = {{0xed849fc3, 0x5fb6c2a0, 0x2, 0x800f0000}};
    // -6.322
    s21_decimal dec_2 = {{0x18b2, 0x0, 0x0, 0x80030000}};
    // -43796.724023219044291
    s21_decimal dec_check = {{0x41c9bfc3, 0x5fcd3874, 0x2, 0x800f0000}};
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
    // -683696186771862269
    s21_decimal dec_1 = {{0x3ad372fd, 0x97cfa0f, 0x0, 0x80000000}};
    // -568857284.516
    s21_decimal dec_2 = {{0x72894fa4, 0x84, 0x0, 0x80030000}};
    // -683696187340719553.516
    s21_decimal dec_check = {{0x3c827bec, 0x1030cc02, 0x25, 0x80030000}};
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
    // 3844795.1776740
    s21_decimal dec_1 = {{0xdc820be4, 0x22f7, 0x0, 0x70000}};
    // 79228162514264337592407527565
    s21_decimal dec_2 = {{0xbc43908d, 0xffffffff, 0xffffffff, 0x0}};
    // 79228162514264337592411372360
    s21_decimal dec_check = {{0xbc7e3b48, 0xffffffff, 0xffffffff, 0x0}};
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
    // 362216989914852.1
    s21_decimal dec_1 = {{0x2627a4e9, 0xcde58, 0x0, 0x10000}};
    // -18888187327
    s21_decimal dec_2 = {{0x65d2ddbf, 0x4, 0x0, 0x80000000}};
    // 362198101727525.1
    s21_decimal dec_check = {{0x2beafb73, 0xcde2c, 0x0, 0x10000}};
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
    // -746390370.05903
    s21_decimal dec_1 = {{0x4149804f, 0x43e2, 0x0, 0x80050000}};
    // 8864
    s21_decimal dec_2 = {{0x22a0, 0x0, 0x0, 0x0}};
    // -746381506.05903
    s21_decimal dec_check = {{0xc741c4f, 0x43e2, 0x0, 0x80050000}};
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
    // 4.96707120506901
    s21_decimal dec_1 = {{0xa379a815, 0x1c3c0, 0x0, 0xe0000}};
    // -7619708877840952001303
    s21_decimal dec_2 = {{0xd0430317, 0x10b3f572, 0x19d, 0x80000000}};
    // -7619708877840952001298.0329288
    s21_decimal dec_check = {{0x38031b48, 0x87f7a739, 0xf634c12b, 0x80070000}};
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
    // -0.934
    s21_decimal dec_1 = {{0x3a6, 0x0, 0x0, 0x80030000}};
    // 4984871613059445
    s21_decimal dec_2 = {{0xddbf5175, 0x11b5b6, 0x0, 0x0}};
    // 4984871613059444.066
    s21_decimal dec_check = {{0x33562d62, 0x452dd252, 0x0, 0x30000}};
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
    // 91281813426962
    s21_decimal dec_1 = {{0x34105312, 0x5305, 0x0, 0x0}};
    // 4928231200424842
    s21_decimal dec_2 = {{0x3e12838a, 0x118233, 0x0, 0x0}};
    // 5019513013851804
    s21_decimal dec_check = {{0x7222d69c, 0x11d538, 0x0, 0x0}};
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
    // -9166.672937348505771202341
    s21_decimal dec_1 = {{0x587c5725, 0x55ed9bc0, 0x7951e, 0x80150000}};
    // 55499641014
    s21_decimal dec_2 = {{0xec0950b6, 0xc, 0x0, 0x0}};
    // 55499631847.327062651494228798
    s21_decimal dec_check = {{0xe4d8633e, 0xd06c524, 0xb354382f, 0x120000}};
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
    // 4124289269677366075372187153
    s21_decimal dec_1 = {{0x2429ae11, 0x4ea0e810, 0xd538839, 0x0}};
    // -2
    s21_decimal dec_2 = {{0x2, 0x0, 0x0, 0x80000000}};
    // 4124289269677366075372187151
    s21_decimal dec_check = {{0x2429ae0f, 0x4ea0e810, 0xd538839, 0x0}};
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
    // 4970.8549822825267178
    s21_decimal dec_1 = {{0x594e7fea, 0xb1d83eb2, 0x2, 0x100000}};
    // -869687
    s21_decimal dec_2 = {{0xd4537, 0x0, 0x0, 0x80000000}};
    // -864716.1450177174732822
    s21_decimal dec_check = {{0xae288016, 0xc378c44f, 0x1d4, 0x80100000}};
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
    // -798310333359611963470390
    s21_decimal dec_1 = {{0xaf637236, 0x7d694125, 0xa90c, 0x80000000}};
    // -8868882173301.436325590
    s21_decimal dec_2 = {{0x1a821ed6, 0xc8770344, 0x1e0, 0x80090000}};
    // -798310333368480845643691.43633
    s21_decimal dec_check = {{0x9b96f751, 0xc756fce1, 0x1f2aedc, 0x80050000}};
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
    // -630826084843784
    s21_decimal dec_1 = {{0xa4b3c108, 0x23dbb, 0x0, 0x80000000}};
    // 69758
    s21_decimal dec_2 = {{0x1107e, 0x0, 0x0, 0x0}};
    // -630826084774026
    s21_decimal dec_check = {{0xa4b2b08a, 0x23dbb, 0x0, 0x80000000}};
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
    // -112341751376.64873577712231
    s21_decimal dec_1 = {{0xf6420a67, 0xdac19f5b, 0x94aed, 0x800e0000}};
    // 0.346
    s21_decimal dec_2 = {{0x15a, 0x0, 0x0, 0x30000}};
    // -112341751376.30273577712231
    s21_decimal dec_check = {{0x58c7a67, 0xdac17fe4, 0x94aed, 0x800e0000}};
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
    // -42509
    s21_decimal dec_1 = {{0xa60d, 0x0, 0x0, 0x80000000}};
    // -27876943729950827390
    s21_decimal dec_2 = {{0xbf45a37e, 0x82decc9f, 0x1, 0x80000000}};
    // -27876943729950869899
    s21_decimal dec_check = {{0xbf46498b, 0x82decc9f, 0x1, 0x80000000}};
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
    // -11572839978072951704.90290
    s21_decimal dec_1 = {{0xfb9a2fb2, 0x7dc14453, 0xf510, 0x80050000}};
    // 7046908.0838241612
    s21_decimal dec_2 = {{0x7302fd4c, 0xfa5b41, 0x0, 0xa0000}};
    // -11572839978065904796.819075839
    s21_decimal dec_check = {{0x11cd32ff, 0x4d640774, 0x2564d430, 0x80090000}};
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
    // -9816887174560821.263
    s21_decimal dec_1 = {{0x87c9300f, 0x883c96df, 0x0, 0x80030000}};
    // 6646043627128122829.511
    s21_decimal dec_2 = {{0xf06ceac7, 0x48621a9f, 0x168, 0x30000}};
    // 6636226739953562008.248
    s21_decimal dec_check = {{0x68a3bab8, 0xc02583c0, 0x167, 0x30000}};
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
    // 799111903148930131
    s21_decimal dec_1 = {{0xc2fa7453, 0xb17040a, 0x0, 0x0}};
    // -3
    s21_decimal dec_2 = {{0x3, 0x0, 0x0, 0x80000000}};
    // 799111903148930128
    s21_decimal dec_check = {{0xc2fa7450, 0xb17040a, 0x0, 0x0}};
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
    // -1.4433915
    s21_decimal dec_1 = {{0xdc3e7b, 0x0, 0x0, 0x80070000}};
    // 3.695
    s21_decimal dec_2 = {{0xe6f, 0x0, 0x0, 0x30000}};
    // 2.2516085
    s21_decimal dec_check = {{0x1579175, 0x0, 0x0, 0x70000}};
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
    // -1.865
    s21_decimal dec_1 = {{0x749, 0x0, 0x0, 0x80030000}};
    // -40
    s21_decimal dec_2 = {{0x28, 0x0, 0x0, 0x80000000}};
    // -41.865
    s21_decimal dec_check = {{0xa389, 0x0, 0x0, 0x80030000}};
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
    // -60123562827082709
    s21_decimal dec_1 = {{0xd4f06bd5, 0xd59a0f, 0x0, 0x80000000}};
    // 8394279279985187474696.6716204
    s21_decimal dec_2 = {{0x7c2faf2c, 0xe7adf497, 0xf3bd9cb, 0x70000}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_2) {
    // 94.97
    s21_decimal dec_1 = {{0x2519, 0x0, 0x0, 0x20000}};
    // 9943223247367767914968018422
    s21_decimal dec_2 = {{0x1506df6, 0x50b29b24, 0x2020d76c, 0x0}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_3) {
    // -8392.5381029
    s21_decimal dec_1 = {{0x8a57afa5, 0x13, 0x0, 0x80070000}};
    // 8228774231646504033760728
    s21_decimal dec_2 = {{0x93cb5d8, 0xbeb48818, 0x6ce82, 0x0}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_4) {
    // 94396986282191.75
    s21_decimal dec_1 = {{0x1b859127, 0x21895b, 0x0, 0x20000}};
    // 598.999244590216085376806
    s21_decimal dec_2 = {{0xb24a0f26, 0xd069d8c9, 0x7ed7, 0x150000}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_5) {
    // 966878680836743504960.4997
    s21_decimal dec_1 = {{0xb9a81785, 0xfbaf7e29, 0x7ff71, 0x40000}};
    // 2.1332852069538465
    s21_decimal dec_2 = {{0xada69aa1, 0x4bca1d, 0x0, 0x100000}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_6) {
    // 7961290497334970362979127316
    s21_decimal dec_1 = {{0x1b0b9014, 0xa6626467, 0x19b96cd6, 0x0}};
    // 835403580825.63
    s21_decimal dec_2 = {{0xc15e3003, 0x4bfa, 0x0, 0x20000}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_7) {
    // -7304657.460766880500627
    s21_decimal dec_1 = {{0x64cb0b93, 0xfc7c7ad5, 0x18b, 0x800f0000}};
    // 876586271648518
    s21_decimal dec_2 = {{0x25562b06, 0x31d40, 0x0, 0x0}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_8) {
    // 9106745391039668999
    s21_decimal dec_1 = {{0xfcd86307, 0x7e61a8ae, 0x0, 0x0}};
    // 5821232.29344754784601380356
    s21_decimal dec_2 = {{0x201c1604, 0x7ed8a1a9, 0x1e18563, 0x140000}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_9) {
    // 4096303358
    s21_decimal dec_1 = {{0xf428a0fe, 0x0, 0x0, 0x0}};
    // 79228162514264337592830269357
    s21_decimal dec_2 = {{0xd57617ad, 0xffffffff, 0xffffffff, 0x0}};
    s21_decimal result;
    // overflow
    int check = 1;  // Результат слишком велик или положительная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_10) {
    // 8893919553335131504892990065
    s21_decimal dec_1 = {{0xa2945271, 0x14f4f68c, 0x1cbce0b9, 0x0}};
    // 5.2791901797273116446907
    s21_decimal dec_2 = {{0xfa0190bb, 0xdacfa522, 0xb2d, 0x160000}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_11) {
    // -975522838975740115836804
    s21_decimal dec_1 = {{0xca0e5f84, 0x32f602eb, 0xce93, 0x80000000}};
    // -79228162514264337593063715051
    s21_decimal dec_2 = {{0xe36030eb, 0xffffffff, 0xffffffff, 0x80000000}};
    s21_decimal result;
    // overflow
    int check = 2;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_12) {
    // 79228162514264337591898920916
    s21_decimal dec_1 = {{0x9df2d7d4, 0xffffffff, 0xffffffff, 0x0}};
    // 997917744080.33554418232
    s21_decimal dec_2 = {{0x35144a38, 0xb911f8a0, 0x1521, 0xb0000}};
    s21_decimal result;
    // overflow
    int check = 1;  // Результат слишком велик или положительная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_13) {
    // -92.8890237192239904523430432
    s21_decimal dec_1 = {{0x449a2a20, 0xa8811cce, 0x3005c28, 0x80190000}};
    // 795031040468600000865705
    s21_decimal dec_2 = {{0xcf97e5a9, 0xb8148b35, 0xa85a, 0x0}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_14) {
    // 9127315397178761
    s21_decimal dec_1 = {{0xb8007589, 0x206d3e, 0x0, 0x0}};
    // -453.4246881400873897929
    s21_decimal dec_2 = {{0x1dd54fc9, 0xcd50eb2a, 0xf5, 0x80130000}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_15) {
    // 95733250190121325778987401
    s21_decimal dec_1 = {{0x4e106989, 0xe44a7985, 0x4f304d, 0x0}};
    // -316.266700019745
    s21_decimal dec_2 = {{0x944f1821, 0x11fa4, 0x0, 0x800c0000}};
    s21_decimal result;
    // overflow
    int check = 3;  // Результат слишком мал или отрицательная бесконечность.
    int return_value = s21_add(dec_1, dec_2, &result);
    ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_16) {
    // -7.332968419004404356
    s21_decimal dec_1 = {{0xe3ea5284, 0x65c3efec, 0x0, 0x80120000}};
    // 92152545967.549612730542611115
    s21_decimal dec_2 = {{0x5625aab, 0xe78573b5, 0x29c2cca6, 0x120000}};
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

    suite_add_tcase(c, tc);
    return c;
}
