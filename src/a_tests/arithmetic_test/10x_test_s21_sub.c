#include "../test.h"

//START_TEST(invalid_dec_s21_sub_1) {
//  // ссылка на результат - NULL
//  s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x0}};
//  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x0}};
//  int result_value = s21_sub(dec_1, dec_2, NULL);
//
//  ck_assert_int_eq(result_value, 1);
//}
//
//START_TEST(invalid_dec_s21_sub_2) {
//  // степень 56 (допустимое значение от 0 до 28)
//  // биты 0-15 не пустые
//  // биты 24-30 не пустые
//  s21_decimal dec_1 = {{0x0, 0x0, 0x0, 0x380000}};
//  s21_decimal dec_2 = {{0xFFFFFFFF, 0x0, 0xFFFFFFFF, 0x0}};
//  s21_decimal result;
//  int result_value = s21_sub(dec_1, dec_2, &result);
//
//  ck_assert_int_eq(result_value, 1);
//}
//END_TEST
//
//START_TEST(invalid_dec_s21_sub_3) {
//  // степень 29 (допустимое значение от 0 до 28)
//  s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x1D0000}};
//  s21_decimal dec_2 = {{0xFFFFFFFF, 0x0, 0xFFFFFFFF, 0x0}};
//  s21_decimal result;
//  int result_value = s21_sub(dec_1, dec_2, &result);
//
//  ck_assert_int_eq(result_value, 1);
//}
//END_TEST
//
//START_TEST(invalid_dec_s21_sub_4) {
//  // степень 28
//  // биты 0-15 не пустые
//  s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x1C0001}};
//  s21_decimal dec_2 = {{0xFFFFFFFF, 0x0, 0xFFFFFFFF, 0x140000}};
//  s21_decimal result;
//  int result_value = s21_sub(dec_1, dec_2, &result);
//
//  ck_assert_int_eq(result_value, 1);
//}
//END_TEST
//
//START_TEST(invalid_dec_s21_sub_5) {
//  // степень 28
//  // биты 0-15 не пустые
//  s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x1C8000}};
//  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0x0, 0x140000}};
//  s21_decimal result;
//  int result_value = s21_sub(dec_1, dec_2, &result);
//
//  ck_assert_int_eq(result_value, 1);
//}
//END_TEST
//
//START_TEST(invalid_dec_s21_sub_6) {
//  // степень 28
//  // биты 24-30 не пустые
//  s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x11C0000}};
//  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x140000}};
//  s21_decimal result;
//  int result_value = s21_sub(dec_1, dec_2, &result);
//
//  ck_assert_int_eq(result_value, 1);
//}
//END_TEST
//
//START_TEST(invalid_dec_s21_sub_7) {
//  // степень 28
//  // биты 24-30 не пустые
//  s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x401C0000}};
//  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x140000}};
//  s21_decimal result;
//  int result_value = s21_sub(dec_1, dec_2, &result);
//
//  ck_assert_int_eq(result_value, 1);
//}
//END_TEST
//
//START_TEST(invalid_dec_s21_sub_8) {
//  // Все биты имеют максимальное значение
//  s21_decimal dec_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF}};
//  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
//  s21_decimal result;
//  int result_value = s21_sub(dec_1, dec_2, &result);
//
//  ck_assert_int_eq(result_value, 1);
//}
//END_TEST
//
//START_TEST(invalid_dec_s21_sub_9) {
//  // степень 56 (допустимое значение от 0 до 28)
//  // биты 0-15 не пустые
//  // биты 24-30 не пустые
//  s21_decimal dec_2 = {{0xA, 0x0, 0x0, 0x380000}};
//  s21_decimal dec_1 = {{0xFFFFFFFF, 0x0, 0xFFFFFFFF, 0x140000}};
//  s21_decimal result;
//  int result_value = s21_sub(dec_1, dec_2, &result);
//
//  ck_assert_int_eq(result_value, 1);
//}
//END_TEST
//
//START_TEST(invalid_dec_s21_sub_10) {
//  // степень 29 (допустимое значение от 0 до 28)
//  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x1D0000}};
//  s21_decimal dec_1 = {{0xFFFFFFFF, 0x0, 0xFFFFFFFF, 0x0}};
//  s21_decimal result;
//  int result_value = s21_sub(dec_1, dec_2, &result);
//
//  ck_assert_int_eq(result_value, 1);
//}
//END_TEST
//
//START_TEST(invalid_dec_s21_sub_11) {
//  // степень 29 (допустимое значение от 0 до 28)
//  s21_decimal dec_2 = {{0xA, 0x0, 0x0, 0x1D0000}};
//  s21_decimal dec_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x20000}};
//  s21_decimal result;
//  int result_value = s21_sub(dec_1, dec_2, &result);
//
//  ck_assert_int_eq(result_value, 1);
//}
//END_TEST
//
//START_TEST(invalid_dec_s21_sub_12) {
//  // степень 28
//  // биты 0-15 не пустые
//  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x1C0001}};
//  s21_decimal dec_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x20000}};
//  s21_decimal result;
//  int result_value = s21_sub(dec_1, dec_2, &result);
//
//  ck_assert_int_eq(result_value, 1);
//}
//END_TEST
//
//START_TEST(invalid_dec_s21_sub_13) {
//  // степень 28
//  // биты 0-15 не пустые
//  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x1C8000}};
//  s21_decimal dec_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
//  s21_decimal result;
//  int result_value = s21_sub(dec_1, dec_2, &result);
//
//  ck_assert_int_eq(result_value, 1);
//}
//END_TEST
//
//START_TEST(invalid_dec_s21_sub_14) {
//  // степень 28
//  // биты 24-30 не пустые
//  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x11C0000}};
//  s21_decimal dec_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
//  s21_decimal result;
//  int result_value = s21_sub(dec_1, dec_2, &result);
//
//  ck_assert_int_eq(result_value, 1);
//}
//END_TEST
//
//START_TEST(invalid_dec_s21_sub_15) {
//  // степень 28
//  // биты 24-30 не пустые
//  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x401C0000}};
//  s21_decimal dec_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x140000}};
//  s21_decimal result;
//  int result_value = s21_sub(dec_1, dec_2, &result);
//
//  ck_assert_int_eq(result_value, 1);
//}
//END_TEST
//
//START_TEST(invalid_dec_s21_sub_16) {
//  // Все биты имеют максимальное значение
//  s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF}};
//  s21_decimal dec_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x140000}};
//  s21_decimal result;
//  int result_value = s21_sub(dec_1, dec_2, &result);
//
//  ck_assert_int_eq(result_value, 1);
//}
//END_TEST

START_TEST(s21_sub_1) {
  // -29528408531391428309325962276
  s21_decimal dec_1 = {{0x8fd3dc24, 0xfd1bbcfa, 0x5f6953b9, 0x80000000}};
  // -357165626096332086599
  s21_decimal dec_2 = {{0xbdc9d47, 0x5cab3497, 0x13, 0x80000000}};
  // -29528408174225802212993875677
  s21_decimal dec_check = {{0x83f73edd, 0xa0708863, 0x5f6953a6, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_2) {
  // 330601069
  s21_decimal dec_1 = {{0x13b4926d, 0x0, 0x0, 0x0}};
  // 8
  s21_decimal dec_2 = {{0x8, 0x0, 0x0, 0x0}};
  // 330601061
  s21_decimal dec_check = {{0x13b49265, 0x0, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_3) {
  // 57915
  s21_decimal dec_1 = {{0xe23b, 0x0, 0x0, 0x0}};
  // 3352269
  s21_decimal dec_2 = {{0x3326cd, 0x0, 0x0, 0x0}};
  // -3294354
  s21_decimal dec_check = {{0x324492, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_4) {
  // -814
  s21_decimal dec_1 = {{0x32e, 0x0, 0x0, 0x80000000}};
  // -316
  s21_decimal dec_2 = {{0x13c, 0x0, 0x0, 0x80000000}};
  // -498
  s21_decimal dec_check = {{0x1f2, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_5) {
  // 30185173864623044292941.3
  s21_decimal dec_1 = {{0x77c76d05, 0x6a60dbb1, 0x3feb, 0x10000}};
  // 470296.3345407877091
  s21_decimal dec_2 = {{0xcab81fe3, 0x4144483e, 0x0, 0xd0000}};
  // 30185173864623043822644.965459
  s21_decimal dec_check = {{0x2ce13053, 0xb39aaf7, 0x61889732, 0x60000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_6) {
  // -47.053
  s21_decimal dec_1 = {{0xb7cd, 0x0, 0x0, 0x80030000}};
  // -63774745492725995258928
  s21_decimal dec_2 = {{0x1d4dc430, 0x3c62ac8d, 0xd81, 0x80000000}};
  // 63774745492725995258880.947
  s21_decimal dec_check = {{0x77c5a3b3, 0xe172073a, 0x34c0d3, 0x30000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_7) {
  // 0.4108
  s21_decimal dec_1 = {{0x100c, 0x0, 0x0, 0x40000}};
  // -840062458029.97432012326479
  s21_decimal dec_2 = {{0x3119464f, 0xb5c8fc74, 0x457d03, 0x800e0000}};
  // 840062458030.38512012326479
  s21_decimal dec_check = {{0xdfe7f64f, 0xb5c921d0, 0x457d03, 0xe0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_8) {
  // -57657317070
  s21_decimal dec_1 = {{0x6ca4d6ce, 0xd, 0x0, 0x80000000}};
  // -7224715221533443712954971992
  s21_decimal dec_2 = {{0x8c8cb758, 0xf0540e8e, 0x175824f4, 0x80000000}};
  // 7224715221533443655297654922
  s21_decimal dec_check = {{0x1fe7e08a, 0xf0540e81, 0x175824f4, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_9) {
  // -8030869186637284015165
  s21_decimal dec_1 = {{0xc98c7c3d, 0x5ab2cfe0, 0x1b3, 0x80000000}};
  // -394732963773600761373069574
  s21_decimal dec_2 = {{0x3c491106, 0xd7ffef1c, 0x14683f4, 0x80000000}};
  // 394724932904414124089054409
  s21_decimal dec_check = {{0x72bc94c9, 0x7d4d1f3b, 0x1468241, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_10) {
  // 422
  s21_decimal dec_1 = {{0x1a6, 0x0, 0x0, 0x0}};
  // 543335
  s21_decimal dec_2 = {{0x84a67, 0x0, 0x0, 0x0}};
  // -542913
  s21_decimal dec_check = {{0x848c1, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(fail_s21_sub_1) {
  // 0.940
  s21_decimal dec_1 = {{0x3ac, 0x0, 0x0, 0x30000}};
  // -970199057659248554576081528
  s21_decimal dec_2 = {{0xa7d67278, 0x4d895e45, 0x32287a4, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_2) {
  // 881420338624722.1
  s21_decimal dec_1 = {{0xa5d0b835, 0x1f5078, 0x0, 0x10000}};
  // -8655712223312756651440225745
  s21_decimal dec_2 = {{0xa2583dd1, 0xd8a3ed3c, 0x1bf7d65b, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_3) {
  // -0.39015241169052190936172
  s21_decimal dec_1 = {{0x5fe48c6c, 0x53cfba5, 0x843, 0x80170000}};
  // -927886483885195676272
  s21_decimal dec_2 = {{0xb74e4a70, 0x4d0300f0, 0x32, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

Suite *s21_sub_cases10(void) {
  Suite *c = suite_create("s21_sub_cases10");
  TCase *tc = tcase_create("s21_sub_tc");

//  tcase_add_test(tc, invalid_dec_s21_sub_1);
//  tcase_add_test(tc, invalid_dec_s21_sub_2);
//  tcase_add_test(tc, invalid_dec_s21_sub_3);
//  tcase_add_test(tc, invalid_dec_s21_sub_4);
//  tcase_add_test(tc, invalid_dec_s21_sub_5);
//  tcase_add_test(tc, invalid_dec_s21_sub_6);
//  tcase_add_test(tc, invalid_dec_s21_sub_7);
//  tcase_add_test(tc, invalid_dec_s21_sub_8);
//  tcase_add_test(tc, invalid_dec_s21_sub_9);
//  tcase_add_test(tc, invalid_dec_s21_sub_10);
//  tcase_add_test(tc, invalid_dec_s21_sub_11);
//  tcase_add_test(tc, invalid_dec_s21_sub_12);
//  tcase_add_test(tc, invalid_dec_s21_sub_13);
//  tcase_add_test(tc, invalid_dec_s21_sub_14);
//  tcase_add_test(tc, invalid_dec_s21_sub_15);
//  tcase_add_test(tc, invalid_dec_s21_sub_16);
  tcase_add_test(tc, s21_sub_1);
  tcase_add_test(tc, s21_sub_2);
  tcase_add_test(tc, s21_sub_3);
  tcase_add_test(tc, s21_sub_4);
  tcase_add_test(tc, s21_sub_5);
  tcase_add_test(tc, s21_sub_6);
  tcase_add_test(tc, s21_sub_7);
  tcase_add_test(tc, s21_sub_8);
  tcase_add_test(tc, s21_sub_9);
  tcase_add_test(tc, s21_sub_10);
  tcase_add_test(tc, fail_s21_sub_1);
  tcase_add_test(tc, fail_s21_sub_2);
  tcase_add_test(tc, fail_s21_sub_3);

  suite_add_tcase(c, tc);
  return c;
}
