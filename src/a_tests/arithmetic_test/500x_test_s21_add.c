#include "../test.h"
//
// START_TEST(invalid_dec_s21_add_1) {
//   // ссылка на результат - NULL
//   s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x0}};
//   s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x0}};
//   int result_value = s21_add(dec_1, dec_2, NULL);
//
//   ck_assert_int_eq(result_value, 1);
// }
//
// START_TEST(invalid_dec_s21_add_2) {
//   // степень 56 (допустимое значение от 0 до 28)
//   // биты 0-15 не пустые
//   // биты 24-30 не пустые
//   s21_decimal dec_1 = {{0x0, 0x0, 0x0, 0x380000}};
//   s21_decimal dec_2 = {{0xFFFFFFFF, 0x0, 0xFFFFFFFF, 0x0}};
//   s21_decimal result;
//   int result_value = s21_add(dec_1, dec_2, &result);
//
//   ck_assert_int_eq(result_value, 1);
// }
// END_TEST
//
// START_TEST(invalid_dec_s21_add_3) {
//   // степень 29 (допустимое значение от 0 до 28)
//   s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x1D0000}};
//   s21_decimal dec_2 = {{0xFFFFFFFF, 0x0, 0xFFFFFFFF, 0x0}};
//   s21_decimal result;
//   int result_value = s21_add(dec_1, dec_2, &result);
//
//   ck_assert_int_eq(result_value, 1);
// }
// END_TEST
//
// START_TEST(invalid_dec_s21_add_4) {
//   // степень 28
//   // биты 0-15 не пустые
//   s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x1C0001}};
//   s21_decimal dec_2 = {{0xFFFFFFFF, 0x0, 0xFFFFFFFF, 0x140000}};
//   s21_decimal result;
//   int result_value = s21_add(dec_1, dec_2, &result);
//
//   ck_assert_int_eq(result_value, 1);
// }
// END_TEST
//
// START_TEST(invalid_dec_s21_add_5) {
//   // степень 28
//   // биты 0-15 не пустые
//   s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x1C8000}};
//   s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0x0, 0x140000}};
//   s21_decimal result;
//   int result_value = s21_add(dec_1, dec_2, &result);
//
//   ck_assert_int_eq(result_value, 1);
// }
// END_TEST
//
// START_TEST(invalid_dec_s21_add_6) {
//   // степень 28
//   // биты 24-30 не пустые
//   s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x11C0000}};
//   s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x140000}};
//   s21_decimal result;
//   int result_value = s21_add(dec_1, dec_2, &result);
//
//   ck_assert_int_eq(result_value, 1);
// }
// END_TEST
//
// START_TEST(invalid_dec_s21_add_7) {
//   // степень 28
//   // биты 24-30 не пустые
//   s21_decimal dec_1 = {{0xA, 0x0, 0x0, 0x401C0000}};
//   s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x140000}};
//   s21_decimal result;
//   int result_value = s21_add(dec_1, dec_2, &result);
//
//   ck_assert_int_eq(result_value, 1);
// }
// END_TEST
//
// START_TEST(invalid_dec_s21_add_8) {
//   // Все биты имеют максимальное значение
//   s21_decimal dec_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF}};
//   s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
//   s21_decimal result;
//   int result_value = s21_add(dec_1, dec_2, &result);
//
//   ck_assert_int_eq(result_value, 1);
// }
// END_TEST
//
// START_TEST(invalid_dec_s21_add_9) {
//   // степень 56 (допустимое значение от 0 до 28)
//   // биты 0-15 не пустые
//   // биты 24-30 не пустые
//   s21_decimal dec_2 = {{0xA, 0x0, 0x0, 0x380000}};
//   s21_decimal dec_1 = {{0xFFFFFFFF, 0x0, 0xFFFFFFFF, 0x140000}};
//   s21_decimal result;
//   int result_value = s21_add(dec_1, dec_2, &result);
//
//   ck_assert_int_eq(result_value, 1);
// }
// END_TEST
//
// START_TEST(invalid_dec_s21_add_10) {
//   // степень 29 (допустимое значение от 0 до 28)
//   s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x1D0000}};
//   s21_decimal dec_1 = {{0xFFFFFFFF, 0x0, 0xFFFFFFFF, 0x0}};
//   s21_decimal result;
//   int result_value = s21_add(dec_1, dec_2, &result);
//
//   ck_assert_int_eq(result_value, 1);
// }
// END_TEST
//
// START_TEST(invalid_dec_s21_add_11) {
//   // степень 29 (допустимое значение от 0 до 28)
//   s21_decimal dec_2 = {{0xA, 0x0, 0x0, 0x1D0000}};
//   s21_decimal dec_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x20000}};
//   s21_decimal result;
//   int result_value = s21_add(dec_1, dec_2, &result);
//
//   ck_assert_int_eq(result_value, 1);
// }
// END_TEST
//
// START_TEST(invalid_dec_s21_add_12) {
//   // степень 28
//   // биты 0-15 не пустые
//   s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x1C0001}};
//   s21_decimal dec_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x20000}};
//   s21_decimal result;
//   int result_value = s21_add(dec_1, dec_2, &result);
//
//   ck_assert_int_eq(result_value, 1);
// }
// END_TEST
//
// START_TEST(invalid_dec_s21_add_13) {
//   // степень 28
//   // биты 0-15 не пустые
//   s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x1C8000}};
//   s21_decimal dec_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
//   s21_decimal result;
//   int result_value = s21_add(dec_1, dec_2, &result);
//
//   ck_assert_int_eq(result_value, 1);
// }
// END_TEST
//
// START_TEST(invalid_dec_s21_add_14) {
//   // степень 28
//   // биты 24-30 не пустые
//   s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x11C0000}};
//   s21_decimal dec_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
//   s21_decimal result;
//   int result_value = s21_add(dec_1, dec_2, &result);
//
//   ck_assert_int_eq(result_value, 1);
// }
// END_TEST
//
// START_TEST(invalid_dec_s21_add_15) {
//   // степень 28
//   // биты 24-30 не пустые
//   s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x401C0000}};
//   s21_decimal dec_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x140000}};
//   s21_decimal result;
//   int result_value = s21_add(dec_1, dec_2, &result);
//
//   ck_assert_int_eq(result_value, 1);
// }
// END_TEST
//
// START_TEST(invalid_dec_s21_add_16) {
//   // Все биты имеют максимальное значение
//   s21_decimal dec_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF}};
//   s21_decimal dec_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x140000}};
//   s21_decimal result;
//   int result_value = s21_add(dec_1, dec_2, &result);
//
//   ck_assert_int_eq(result_value, 1);
// }
// END_TEST

START_TEST(s21_add_1) {
  // 442877202810620
  s21_decimal dec_1 = {{0x625a46fc, 0x192cb, 0x0, 0x0}};
  // -484
  s21_decimal dec_2 = {{0x1e4, 0x0, 0x0, 0x80000000}};
  // 442877202810136
  s21_decimal dec_check = {{0x625a4518, 0x192cb, 0x0, 0x0}};
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
  // 64030847
  s21_decimal dec_1 = {{0x3d1087f, 0x0, 0x0, 0x0}};
  // -54698.9274312266312986651495
  s21_decimal dec_2 = {{0x400beb67, 0xfa0e5916, 0x1c4757b, 0x80160000}};
  // 63976148.072568773368701334850
  s21_decimal dec_check = {{0x37c53542, 0x606d623c, 0xceb7d450, 0x150000}};
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
  // -9
  s21_decimal dec_1 = {{0x9, 0x0, 0x0, 0x80000000}};
  // 907061124723
  s21_decimal dec_2 = {{0x310e5e73, 0xd3, 0x0, 0x0}};
  // 907061124714
  s21_decimal dec_check = {{0x310e5e6a, 0xd3, 0x0, 0x0}};
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
  // -554887321590937774012
  s21_decimal dec_1 = {{0x63c967bc, 0x149bc711, 0x1e, 0x80000000}};
  // 57320893722021959383722152
  s21_decimal dec_2 = {{0x91ed28a8, 0xe0074c13, 0x2f6a2b, 0x0}};
  // 57320338834700368445948140
  s21_decimal dec_check = {{0x2e23c0ec, 0xcb6b8502, 0x2f6a0d, 0x0}};
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
  // -6
  s21_decimal dec_1 = {{0x6, 0x0, 0x0, 0x80000000}};
  // -936587528448530.1
  s21_decimal dec_2 = {{0xc557a4b5, 0x214636, 0x0, 0x80010000}};
  // -936587528448536.1
  s21_decimal dec_check = {{0xc557a4f1, 0x214636, 0x0, 0x80010000}};
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
  // 529736.93
  s21_decimal dec_1 = {{0x328507d, 0x0, 0x0, 0x20000}};
  // -2
  s21_decimal dec_2 = {{0x2, 0x0, 0x0, 0x80000000}};
  // 529734.93
  s21_decimal dec_check = {{0x3284fb5, 0x0, 0x0, 0x20000}};
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
  // -28781406.00685235815090593
  s21_decimal dec_1 = {{0x6c0489a1, 0x508990c6, 0x26178, 0x80110000}};
  // -5363178.33
  s21_decimal dec_2 = {{0x1ff78f89, 0x0, 0x0, 0x80020000}};
  // -34144584.33685235815090593
  s21_decimal dec_check = {{0xfbbf09a1, 0x299f0c9c, 0x2d30a, 0x80110000}};
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
  // -1575461.6
  s21_decimal dec_1 = {{0xf06578, 0x0, 0x0, 0x80010000}};
  // -8066875151627.6459915162
  s21_decimal dec_2 = {{0xb841479a, 0xfd0f6b0, 0x1115, 0x800a0000}};
  // -8066876727089.2459915162
  s21_decimal dec_check = {{0x1a81f79a, 0x1008ef6e, 0x1115, 0x800a0000}};
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
  // 9241559487001259434
  s21_decimal dec_1 = {{0xb959edaa, 0x80409d63, 0x0, 0x0}};
  // 5342090205845257515225.06578
  s21_decimal dec_2 = {{0xa0013752, 0x8b14354, 0x1b9e329, 0x50000}};
  // 5351331765332258774659.06578
  s21_decimal dec_check = {{0x7846bd92, 0xa0d98e07, 0x1baa6db, 0x50000}};
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
  // 99679.8296061
  s21_decimal dec_1 = {{0x15ceeffd, 0xe8, 0x0, 0x70000}};
  // -387927435379950020538
  s21_decimal dec_2 = {{0x8238e7ba, 0x7931b26, 0x15, 0x80000000}};
  // -387927435379949920858.1703939
  s21_decimal dec_check = {{0xf4dbe903, 0x1a53746f, 0xc88dc4c, 0x80070000}};
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
  // -867823912
  s21_decimal dec_1 = {{0x33b9f128, 0x0, 0x0, 0x80000000}};
  // -360740389
  s21_decimal dec_2 = {{0x15807625, 0x0, 0x0, 0x80000000}};
  // -1228564301
  s21_decimal dec_check = {{0x493a674d, 0x0, 0x0, 0x80000000}};
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
  // -0.3423107382511895880936185425
  s21_decimal dec_1 = {{0x447de51, 0x9dcfdbb, 0xb0f872f, 0x801c0000}};
  // 4
  s21_decimal dec_2 = {{0x4, 0x0, 0x0, 0x0}};
  // 3.6576892617488104119063814575
  s21_decimal dec_check = {{0x3bb821af, 0xeeb70bc9, 0x762fb249, 0x1c0000}};
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
  // -42
  s21_decimal dec_1 = {{0x2a, 0x0, 0x0, 0x80000000}};
  // -2203489
  s21_decimal dec_2 = {{0x219f61, 0x0, 0x0, 0x80000000}};
  // -2203531
  s21_decimal dec_check = {{0x219f8b, 0x0, 0x0, 0x80000000}};
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
  // -4440962605605345552501
  s21_decimal dec_1 = {{0xdbcbe875, 0xbebc9891, 0xf0, 0x80000000}};
  // -8713227438
  s21_decimal dec_2 = {{0x7594cae, 0x2, 0x0, 0x80000000}};
  // -4440962605614058779939
  s21_decimal dec_check = {{0xe3253523, 0xbebc9893, 0xf0, 0x80000000}};
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
  // -519832066508900.124
  s21_decimal dec_1 = {{0xa31ec71c, 0x736d082, 0x0, 0x80030000}};
  // 92288143256848
  s21_decimal dec_2 = {{0x81feed10, 0x53ef, 0x0, 0x0}};
  // -427543923252052.124
  s21_decimal dec_check = {{0xd750c09c, 0x5eef0ee, 0x0, 0x80030000}};
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
  // 90185877382601976267061611
  s21_decimal dec_1 = {{0x52f6b96b, 0x3593cb75, 0x4a999a, 0x0}};
  // 129905116709404994032
  s21_decimal dec_2 = {{0x61bee9f0, 0xacbaf61, 0x7, 0x0}};
  // 90186007287718685672055643
  s21_decimal dec_check = {{0xb4b5a35b, 0x405f7ad6, 0x4a99a1, 0x0}};
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
  // 8236106489588443739290
  s21_decimal dec_1 = {{0xb0a7749a, 0x7af02f84, 0x1be, 0x0}};
  // 210176372637653251232004
  s21_decimal dec_2 = {{0x5bf99104, 0xaf1a07cc, 0x2c81, 0x0}};
  // 218412479127241694971294
  s21_decimal dec_check = {{0xca1059e, 0x2a0a3751, 0x2e40, 0x0}};
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
  // -2884827331424136479
  s21_decimal dec_1 = {{0x67dfad1f, 0x2808f72c, 0x0, 0x80000000}};
  // -4838965
  s21_decimal dec_2 = {{0x49d635, 0x0, 0x0, 0x80000000}};
  // -2884827331428975444
  s21_decimal dec_check = {{0x68298354, 0x2808f72c, 0x0, 0x80000000}};
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
  // -4642644241083593520578894813
  s21_decimal dec_1 = {{0x35451bdd, 0x9cee0da3, 0xf004e28, 0x80000000}};
  // -6.26
  s21_decimal dec_2 = {{0x272, 0x0, 0x0, 0x80020000}};
  // -4642644241083593520578894819.3
  s21_decimal dec_check = {{0x14b316e1, 0x214c8860, 0x96030d96, 0x80010000}};
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
  // -964.530
  s21_decimal dec_1 = {{0xeb7b2, 0x0, 0x0, 0x80030000}};
  // 3977514349124977999392017680.4
  s21_decimal dec_2 = {{0xe8c882a4, 0x34efce57, 0x80853a41, 0x10000}};
  // 3977514349124977999392016715.9
  s21_decimal dec_check = {{0xe8c85cf7, 0x34efce57, 0x80853a41, 0x10000}};
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
  // 3026685615653655
  s21_decimal dec_1 = {{0x28f7c317, 0xac0c1, 0x0, 0x0}};
  // 52888191870390635
  s21_decimal dec_2 = {{0xc13f516b, 0xbbe587, 0x0, 0x0}};
  // 55914877486044290
  s21_decimal dec_check = {{0xea371482, 0xc6a648, 0x0, 0x0}};
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
  // 78940159.23860843428897
  s21_decimal dec_1 = {{0x6a9e7c21, 0xef7a5a76, 0x1ab, 0xe0000}};
  // -466836775
  s21_decimal dec_2 = {{0x1bd35d27, 0x0, 0x0, 0x80000000}};
  // -387896615.76139156571103
  s21_decimal dec_check = {{0x414143df, 0xcab14710, 0x836, 0x800e0000}};
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
  // 98991609109562512765936
  s21_decimal dec_1 = {{0xb439f3f0, 0x588bc51f, 0x14f6, 0x0}};
  // -28315176638967718227113389
  s21_decimal dec_2 = {{0xbb7e75ad, 0xcd22e9ba, 0x176bf8, 0x80000000}};
  // -28216185029858155714347453
  s21_decimal dec_check = {{0x74481bd, 0x7497249b, 0x175702, 0x80000000}};
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
  // -89341.5775
  s21_decimal dec_1 = {{0x3540715f, 0x0, 0x0, 0x80040000}};
  // 858058754168803795
  s21_decimal dec_2 = {{0x6a551d3, 0xbe86fe4, 0x0, 0x0}};
  // 858058754168714453.4225
  s21_decimal dec_check = {{0x648bd0d1, 0x2792bb43, 0x1d1, 0x40000}};
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
  // -81553.736666269
  s21_decimal dec_1 = {{0x35810c9d, 0x4a2c, 0x0, 0x80090000}};
  // 4717550789583
  s21_decimal dec_2 = {{0x63f063cf, 0x44a, 0x0, 0x0}};
  // 4717550708029.263333731
  s21_decimal dec_check = {{0x38c64963, 0xbd2aee4c, 0xff, 0x90000}};
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
  // -306624652196258808956483715
  s21_decimal dec_1 = {{0x3a947883, 0xb3d31840, 0xfda24b, 0x80000000}};
  // -904.3054043
  s21_decimal dec_2 = {{0x1b020ddb, 0x2, 0x0, 0x80070000}};
  // -306624652196258808956484619.31
  s21_decimal dec_check = {{0xe200746b, 0x3e757916, 0x63136592, 0x80020000}};
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
  // 5
  s21_decimal dec_1 = {{0x5, 0x0, 0x0, 0x0}};
  // -69168830.3564234681085062
  s21_decimal dec_2 = {{0xed4dec86, 0x7f8189f9, 0x9278, 0x80100000}};
  // -69168825.3564234681085062
  s21_decimal dec_check = {{0xbe88ec86, 0x7ecfe73d, 0x9278, 0x80100000}};
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
  // 6
  s21_decimal dec_1 = {{0x6, 0x0, 0x0, 0x0}};
  // -897.6359
  s21_decimal dec_2 = {{0x88f7e7, 0x0, 0x0, 0x80040000}};
  // -891.6359
  s21_decimal dec_check = {{0x880d87, 0x0, 0x0, 0x80040000}};
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
  // 1293286880
  s21_decimal dec_1 = {{0x4d15fde0, 0x0, 0x0, 0x0}};
  // 2456474.909161640
  s21_decimal dec_2 = {{0xa25c38a8, 0x8ba26, 0x0, 0x90000}};
  // 1295743354.909161640
  s21_decimal dec_check = {{0x556ef8a8, 0x11fb67b7, 0x0, 0x90000}};
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
  // -92053901501815
  s21_decimal dec_1 = {{0xf8196577, 0x53b8, 0x0, 0x80000000}};
  // 9520098122553053626546739052
  s21_decimal dec_2 = {{0x6f7576c, 0x565d3388, 0x1ec2d731, 0x0}};
  // 9520098122552961572645237237
  s21_decimal dec_check = {{0xeddf1f5, 0x565cdfcf, 0x1ec2d731, 0x0}};
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
  // -577233.6406335022215469
  s21_decimal dec_1 = {{0xa5e0b12d, 0xeb428269, 0x138, 0x80100000}};
  // -36510.6512131009081755
  s21_decimal dec_2 = {{0xaea4f19b, 0xcadee65d, 0x13, 0x80100000}};
  // -613744.2918466031297224
  s21_decimal dec_check = {{0x5485a2c8, 0xb62168c7, 0x14c, 0x80100000}};
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
  // 16696237
  s21_decimal dec_1 = {{0xfec3ad, 0x0, 0x0, 0x0}};
  // 1443337255693253999757
  s21_decimal dec_2 = {{0xab8dfc8d, 0x3e5402ec, 0x4e, 0x0}};
  // 1443337255693270695994
  s21_decimal dec_check = {{0xac8cc03a, 0x3e5402ec, 0x4e, 0x0}};
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
  // -57195727669691530068730496762
  s21_decimal dec_1 = {{0xf5e2c6fa, 0xd18565e7, 0xb8cf3271, 0x80000000}};
  // 429360842092779742993
  s21_decimal dec_2 = {{0x3ab92711, 0x46942308, 0x17, 0x0}};
  // -57195727240330687975950753769
  s21_decimal dec_check = {{0xbb299fe9, 0x8af142df, 0xb8cf325a, 0x80000000}};
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
  // -0.826
  s21_decimal dec_1 = {{0x33a, 0x0, 0x0, 0x80030000}};
  // -861463
  s21_decimal dec_2 = {{0xd2517, 0x0, 0x0, 0x80000000}};
  // -861463.826
  s21_decimal dec_check = {{0x3358e512, 0x0, 0x0, 0x80030000}};
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
  // 39641.8684498607
  s21_decimal dec_1 = {{0x6adf32af, 0x1688a, 0x0, 0xa0000}};
  // 1785196650434.651499
  s21_decimal dec_2 = {{0x2b5fe56b, 0x18c64ae5, 0x0, 0x60000}};
  // 1785196690076.5199488607
  s21_decimal dec_check = {{0xbcd0d65f, 0xc1cf0078, 0x3c7, 0xa0000}};
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
  // 67882506897.84744202
  s21_decimal dec_1 = {{0x62eb890a, 0x5e34b609, 0x0, 0x80000}};
  // -30.085209
  s21_decimal dec_2 = {{0x1cb1059, 0x0, 0x0, 0x80060000}};
  // 67882506867.76223302
  s21_decimal dec_check = {{0xaf992646, 0x5e34b608, 0x0, 0x80000}};
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
  // -44593612487
  s21_decimal dec_1 = {{0x61fc86c7, 0xa, 0x0, 0x80000000}};
  // -72001119171820856788077773248
  s21_decimal dec_2 = {{0x7e0401c0, 0x5fb0f3f0, 0xe8a5ee0b, 0x80000000}};
  // -72001119171820856832671385735
  s21_decimal dec_check = {{0xe0008887, 0x5fb0f3fa, 0xe8a5ee0b, 0x80000000}};
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
  // -43452284272775443623174
  s21_decimal dec_1 = {{0x3911ad06, 0x8d94b605, 0x933, 0x80000000}};
  // -0.946
  s21_decimal dec_2 = {{0x3b2, 0x0, 0x0, 0x80030000}};
  // -43452284272775443623174.946
  s21_decimal dec_check = {{0xed0be322, 0xce70466, 0x23f161, 0x80030000}};
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
  // -1
  s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x80000000}};
  // 88362273361157335.594317
  s21_decimal dec_2 = {{0x70c8b54d, 0x20e14295, 0x12b6, 0x60000}};
  // 88362273361157334.594317
  s21_decimal dec_check = {{0x70b9730d, 0x20e14295, 0x12b6, 0x60000}};
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
  // 2448.9813607190902516930
  s21_decimal dec_1 = {{0x8d76acc2, 0x986fcb25, 0x52f, 0x130000}};
  // -0.769375330109102608787
  s21_decimal dec_2 = {{0xb5f5d193, 0xb53a4268, 0x29, 0x80150000}};
  // 2448.211985388981149084213
  s21_decimal dec_check = {{0x8c65aa35, 0xd6711842, 0x2066d, 0x150000}};
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
  // 70174575103922410
  s21_decimal dec_1 = {{0x7d5550ea, 0xf94f67, 0x0, 0x0}};
  // 33943088745110759274674
  s21_decimal dec_2 = {{0x8e57f8b2, 0xefbaf7c, 0x730, 0x0}};
  // 33943158919685863197084
  s21_decimal dec_check = {{0xbad499c, 0xff4fee4, 0x730, 0x0}};
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
  // 57869651.68586650334651075
  s21_decimal dec_1 = {{0xf745e2c3, 0x2a92e09, 0x4c970, 0x110000}};
  // -4293784374050951568
  s21_decimal dec_2 = {{0x856e1190, 0x3b969623, 0x0, 0x80000000}};
  // -4293784373993081916.3141334967
  s21_decimal dec_check = {{0x88b667b7, 0x3bdaae09, 0x8abd5a15, 0x800a0000}};
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
  // -5526333975639150088537547662
  s21_decimal dec_1 = {{0xf36ca38e, 0x1d0929ac, 0x11db46bd, 0x80000000}};
  // -26903.9380142151293695159543
  s21_decimal dec_2 = {{0xc4dfecf7, 0x58f075c, 0xde8b4e, 0x80160000}};
  // -5526333975639150088537574565.9
  s21_decimal dec_check = {{0x82427e7b, 0x225ba0c1, 0xb290c363, 0x80010000}};
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
  // -7909293942672142
  s21_decimal dec_1 = {{0xffe08b0e, 0x1c1975, 0x0, 0x80000000}};
  // -727136772.908
  s21_decimal dec_2 = {{0x4cbaa32c, 0xa9, 0x0, 0x80030000}};
  // -7909294669808914.908
  s21_decimal dec_check = {{0xd1d9d1dc, 0x6dc37598, 0x0, 0x80030000}};
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
  // 2372.562
  s21_decimal dec_1 = {{0x2433d2, 0x0, 0x0, 0x30000}};
  // 96.566487674
  s21_decimal dec_2 = {{0x7bcfaa7a, 0x16, 0x0, 0x90000}};
  // 2469.128487674
  s21_decimal dec_check = {{0xe386c2fa, 0x23e, 0x0, 0x90000}};
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
  // -5.6711279754869331
  s21_decimal dec_1 = {{0xc48bfa53, 0xc97a9b, 0x0, 0x80100000}};
  // -0.810782993
  s21_decimal dec_2 = {{0x30539111, 0x0, 0x0, 0x80090000}};
  // -6.4819109684869331
  s21_decimal dec_check = {{0x76c78d3, 0xe648a3, 0x0, 0x80100000}};
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
  // 0.5890103888528
  s21_decimal dec_1 = {{0x658cca90, 0x55b, 0x0, 0xd0000}};
  // -118013495160885534
  s21_decimal dec_2 = {{0x9c4511e, 0x1a344a6, 0x0, 0x80000000}};
  // -118013495160885533.41098961115
  s21_decimal dec_check = {{0x690a8db, 0x2e2179cc, 0x2621d8f7, 0x800b0000}};
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
  // 0.10
  s21_decimal dec_1 = {{0xa, 0x0, 0x0, 0x20000}};
  // 939691639095
  s21_decimal dec_2 = {{0xc9fc8137, 0xda, 0x0, 0x0}};
  // 939691639095.10
  s21_decimal dec_check = {{0xe6a27986, 0x5576, 0x0, 0x20000}};
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
  // 258356121937302914
  s21_decimal dec_1 = {{0x299ed582, 0x395dd86, 0x0, 0x0}};
  // -9
  s21_decimal dec_2 = {{0x9, 0x0, 0x0, 0x80000000}};
  // 258356121937302905
  s21_decimal dec_check = {{0x299ed579, 0x395dd86, 0x0, 0x0}};
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
  // 48.9969022292898279699487047
  s21_decimal dec_1 = {{0x94079947, 0xebc87cbf, 0x1954af9, 0x190000}};
  // -310734316.41463513262141
  s21_decimal dec_2 = {{0x77eda83d, 0x7e7da3d0, 0x694, 0x800e0000}};
  // -310734267.41773290333158203005
  s21_decimal dec_check = {{0xfbd75e7d, 0xffff3fe0, 0x6467560e, 0x80140000}};
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
  // -44176588768463951355427
  s21_decimal dec_1 = {{0xc505de23, 0xd1533351, 0x95a, 0x80000000}};
  // 87585243849617606212861.95
  s21_decimal dec_2 = {{0x5860d333, 0x8eec8fb7, 0x73eb0, 0x20000}};
  // 43408655081153654857434.95
  s21_decimal dec_check = {{0x62160d87, 0xca6c83c6, 0x39736, 0x20000}};
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
  // 0.353564636992022755652116
  s21_decimal dec_1 = {{0x6c0bb214, 0xc7022e83, 0x4ade, 0x180000}};
  // 0.841393
  s21_decimal dec_2 = {{0xcd6b1, 0x0, 0x0, 0x60000}};
  // 1.194957636992022755652116
  s21_decimal dec_check = {{0xc02fb214, 0xc8868757, 0xfd0a, 0x180000}};
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
  // 5756507
  s21_decimal dec_1 = {{0x57d65b, 0x0, 0x0, 0x0}};
  // 3.530041428
  s21_decimal dec_2 = {{0xd2682854, 0x0, 0x0, 0x90000}};
  // 5756510.530041428
  s21_decimal dec_check = {{0xd49f654, 0x147384, 0x0, 0x90000}};
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
  // -4996758525.326129090983192545
  s21_decimal dec_1 = {{0xa4cd67e1, 0x6d5d2877, 0x102538c6, 0x80120000}};
  // -7196933892
  s21_decimal dec_2 = {{0xacf87f04, 0x1, 0x0, 0x80000000}};
  // -12193692417.326129090983192545
  s21_decimal dec_check = {{0xde5d67e1, 0x79687c30, 0x276662ce, 0x80120000}};
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
  // -48640796176041600547245139691
  s21_decimal dec_1 = {{0x7f4226eb, 0x464217bb, 0x9d2ab93c, 0x80000000}};
  // 234.648
  s21_decimal dec_2 = {{0x39498, 0x0, 0x0, 0x30000}};
  // -48640796176041600547245139456
  s21_decimal dec_check = {{0x7f422600, 0x464217bb, 0x9d2ab93c, 0x80000000}};
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
  // -12059632351.49433937943
  s21_decimal dec_1 = {{0xbee22017, 0x601a14e6, 0x41, 0x800b0000}};
  // 57
  s21_decimal dec_2 = {{0x39, 0x0, 0x0, 0x0}};
  // -12059632294.49433937943
  s21_decimal dec_check = {{0x9c687817, 0x601a0fb7, 0x41, 0x800b0000}};
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
  // 6459075574538820587952
  s21_decimal dec_1 = {{0xdc8311b0, 0x25ae2564, 0x15e, 0x0}};
  // 9361959628774737108
  s21_decimal dec_2 = {{0x3aaa84d4, 0x81ec5cae, 0x0, 0x0}};
  // 6468437534167595325060
  s21_decimal dec_check = {{0x172d9684, 0xa79a8213, 0x15e, 0x0}};
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
  // 359.31738
  s21_decimal dec_1 = {{0x224465a, 0x0, 0x0, 0x50000}};
  // 180
  s21_decimal dec_2 = {{0xb4, 0x0, 0x0, 0x0}};
  // 539.31738
  s21_decimal dec_check = {{0x336eeda, 0x0, 0x0, 0x50000}};
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
  // -650883244647165
  s21_decimal dec_1 = {{0x909662fd, 0x24ff9, 0x0, 0x80000000}};
  // 8320.738908840972461885
  s21_decimal dec_2 = {{0x3d8f273d, 0x1172f06d, 0x1c3, 0x120000}};
  // -650883244638844.26109115902754
  s21_decimal dec_check = {{0x4b2b22, 0x5bf77b5c, 0xd24fccd3, 0x800e0000}};
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
  // 3326048009638311613431
  s21_decimal dec_1 = {{0xc293d3f7, 0x4e30429b, 0xb4, 0x0}};
  // 6914449
  s21_decimal dec_2 = {{0x698191, 0x0, 0x0, 0x0}};
  // 3326048009638318527880
  s21_decimal dec_check = {{0xc2fd5588, 0x4e30429b, 0xb4, 0x0}};
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
  // -42.754570
  s21_decimal dec_1 = {{0x28c620a, 0x0, 0x0, 0x80060000}};
  // -711893161196318699662
  s21_decimal dec_2 = {{0x2079308e, 0x97809256, 0x26, 0x80000000}};
  // -711893161196318699704.754570
  s21_decimal dec_check = {{0x37af218a, 0x98eab101, 0x24cdd3d, 0x80060000}};
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
  // -5091811529007402
  s21_decimal dec_1 = {{0xc173212a, 0x1216f9, 0x0, 0x80000000}};
  // 611251306451247757.96419477
  s21_decimal dec_2 = {{0xdb0e2b95, 0xf8d16708, 0x328fbf, 0x80000}};
  // 606159494922240355.96419477
  s21_decimal dec_check = {{0x1bb64195, 0x34d2812e, 0x3223ed, 0x80000}};
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
  // -358639626532597
  s21_decimal dec_1 = {{0x4b8ab6f5, 0x1462e, 0x0, 0x80000000}};
  // 31113329.7193389273
  s21_decimal dec_2 = {{0xd9020cd9, 0x4515e15, 0x0, 0xa0000}};
  // -358639595419267.2806610727
  s21_decimal dec_check = {{0xf2772727, 0xea0c0e19, 0x2f772, 0x800a0000}};
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
  // 541
  s21_decimal dec_1 = {{0x21d, 0x0, 0x0, 0x0}};
  // 106649133907633.6587087159645
  s21_decimal dec_2 = {{0xc4fe215d, 0x5692c3a1, 0x3722e53, 0xd0000}};
  // 106649133908174.6587087159645
  s21_decimal dec_check = {{0x8d3a415d, 0x56a5fbff, 0x3722e53, 0xd0000}};
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
  // 8131313359587
  s21_decimal dec_1 = {{0x380b5ae3, 0x765, 0x0, 0x0}};
  // -7189273446
  s21_decimal dec_2 = {{0xac839b66, 0x1, 0x0, 0x80000000}};
  // 8124124086141
  s21_decimal dec_check = {{0x8b87bf7d, 0x763, 0x0, 0x0}};
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
  // 2986430
  s21_decimal dec_1 = {{0x2d91be, 0x0, 0x0, 0x0}};
  // 7062766705751.86238874
  s21_decimal dec_2 = {{0xbb8f5d9a, 0x498ec9df, 0x26, 0x80000}};
  // 7062769692181.86238874
  s21_decimal dec_check = {{0xf97d5b9a, 0x498fd97c, 0x26, 0x80000}};
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
  // -267.5246448699041757009978233
  s21_decimal dec_1 = {{0x697ea379, 0x94a78c58, 0x8a4e978, 0x80190000}};
  // 59999060
  s21_decimal dec_2 = {{0x3938354, 0x0, 0x0, 0x0}};
  // 59998792.475355130095824299002
  s21_decimal dec_check = {{0x3e3463fa, 0x6a12bcdc, 0xc1ddd681, 0x150000}};
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
  // 82677737764611790435
  s21_decimal dec_1 = {{0x94959663, 0x7b625473, 0x4, 0x0}};
  // -13916061643048
  s21_decimal dec_2 = {{0x15e93128, 0xca8, 0x0, 0x80000000}};
  // 82677723848550147387
  s21_decimal dec_check = {{0x7eac653b, 0x7b6247cb, 0x4, 0x0}};
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
  // 94716653.3586490439815201063
  s21_decimal dec_1 = {{0xb4d0127, 0xabc6c757, 0x30f7a50, 0x130000}};
  // 334436922041109.7
  s21_decimal dec_2 = {{0xa3615ed9, 0xbe1af, 0x0, 0x10000}};
  // 334437016757763.05864904398152
  s21_decimal dec_check = {{0xae79d548, 0xa445b7a6, 0x6c0ffb4c, 0xe0000}};
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
  // -62424623115876612127942237
  s21_decimal dec_1 = {{0x4305665d, 0x9995bda4, 0x33a2ed, 0x80000000}};
  // 98222
  s21_decimal dec_2 = {{0x17fae, 0x0, 0x0, 0x0}};
  // -62424623115876612127844015
  s21_decimal dec_check = {{0x4303e6af, 0x9995bda4, 0x33a2ed, 0x80000000}};
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
  // 44279967127362.0
  s21_decimal dec_1 = {{0x551ce894, 0x192b9, 0x0, 0x10000}};
  // 2351179
  s21_decimal dec_2 = {{0x23e04b, 0x0, 0x0, 0x0}};
  // 44279969478541.0
  s21_decimal dec_check = {{0x5683ab82, 0x192b9, 0x0, 0x10000}};
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
  // -0.7
  s21_decimal dec_1 = {{0x7, 0x0, 0x0, 0x80010000}};
  // -5223497624772
  s21_decimal dec_2 = {{0x30b86cc4, 0x4c0, 0x0, 0x80000000}};
  // -5223497624772.7
  s21_decimal dec_check = {{0xe7343faf, 0x2f81, 0x0, 0x80010000}};
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
  // 7482616627690092218055
  s21_decimal dec_1 = {{0x3b45c6c7, 0xa22a7248, 0x195, 0x0}};
  // -992160628561182671.7821763906
  s21_decimal dec_2 = {{0x3df00142, 0x78662a9b, 0x200ef5da, 0x800a0000}};
  // 7481624467061531035383.2178236
  s21_decimal dec_check = {{0x4301723c, 0x74541756, 0xf1be8c0e, 0x70000}};
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
  // -6612268511346063258
  s21_decimal dec_1 = {{0x8248779a, 0x5bc37f2d, 0x0, 0x80000000}};
  // 6
  s21_decimal dec_2 = {{0x6, 0x0, 0x0, 0x0}};
  // -6612268511346063252
  s21_decimal dec_check = {{0x82487794, 0x5bc37f2d, 0x0, 0x80000000}};
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
  // -116152494.8
  s21_decimal dec_1 = {{0x453b76d4, 0x0, 0x0, 0x80010000}};
  // -2652149623.194553532
  s21_decimal dec_2 = {{0xd5b28cbc, 0x24ce5407, 0x0, 0x80090000}};
  // -2768302117.994553532
  s21_decimal dec_check = {{0xf606e0bc, 0x266afc1b, 0x0, 0x80090000}};
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
  // 311605
  s21_decimal dec_1 = {{0x4c135, 0x0, 0x0, 0x0}};
  // 247387006772487299726635
  s21_decimal dec_2 = {{0x6c4afd2b, 0xe062eb0a, 0x3462, 0x0}};
  // 247387006772487300038240
  s21_decimal dec_check = {{0x6c4fbe60, 0xe062eb0a, 0x3462, 0x0}};
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
  // -18458522061.184853025829694694
  s21_decimal dec_1 = {{0x2b502ce6, 0xfafc3e8a, 0x3ba48815, 0x80120000}};
  // 65639471175.29246901296
  s21_decimal dec_2 = {{0x4bfaa430, 0xd510b61c, 0x163, 0xb0000}};
  // 47180949114.107615987130305306
  s21_decimal dec_check = {{0x2ab60b1a, 0x78e080f2, 0x98732a98, 0x120000}};
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
  // 770130549.1426443870004019532
  s21_decimal dec_1 = {{0x3aa7814c, 0x3d2c241d, 0x18e25edf, 0x130000}};
  // 287307292189028275200
  s21_decimal dec_2 = {{0xd2645400, 0x93308c06, 0xf, 0x0}};
  // 287307292189798405749.14264439
  s21_decimal dec_check = {{0xb70f7d77, 0xd0c6e989, 0x5cd5808f, 0x80000}};
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
  // -1316082924146
  s21_decimal dec_1 = {{0x6ca7ba72, 0x132, 0x0, 0x80000000}};
  // 6933584282452614292396689
  s21_decimal dec_2 = {{0xfc075a91, 0x5b6b62b3, 0x5bc3e, 0x0}};
  // 6933584282451298209472543
  s21_decimal dec_check = {{0x8f5fa01f, 0x5b6b6181, 0x5bc3e, 0x0}};
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
  // -7.868991742
  s21_decimal dec_1 = {{0xd50748fe, 0x1, 0x0, 0x80090000}};
  // -949550500001133.671465
  s21_decimal dec_2 = {{0x1e20b429, 0x79a90cd1, 0x33, 0x80060000}};
  // -949550500001141.540456742
  s21_decimal dec_check = {{0x84c70926, 0x3c5a10df, 0xc913, 0x80090000}};
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
  // -455.923514414171
  s21_decimal dec_1 = {{0xf71f145b, 0x19ea8, 0x0, 0x800c0000}};
  // -999
  s21_decimal dec_2 = {{0x3e7, 0x0, 0x0, 0x80000000}};
  // -1454.923514414171
  s21_decimal dec_check = {{0xc740845b, 0x52b3e, 0x0, 0x800c0000}};
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
  // 79228162514264337593341976669
  s21_decimal dec_1 = {{0xf3f6205d, 0xffffffff, 0xffffffff, 0x0}};
  // -39760974736133291222574
  s21_decimal dec_2 = {{0x29cfa62e, 0x725ed3d7, 0x86b, 0x80000000}};
  // 79228122753289601460050754095
  s21_decimal dec_check = {{0xca267a2f, 0x8da12c28, 0xfffff794, 0x0}};
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
  // 64691718879694661664776.7
  s21_decimal dec_1 = {{0xfab78057, 0x7379b0a8, 0x88fd, 0x10000}};
  // 9719580143607
  s21_decimal dec_2 = {{0x41f2ff7, 0x8d7, 0x0, 0x0}};
  // 64691718889414241808383.7
  s21_decimal dec_check = {{0x23ef5ffd, 0x737a090f, 0x88fd, 0x10000}};
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
  // -22396329790.021483
  s21_decimal dec_1 = {{0xe1681f6b, 0x4f9157, 0x0, 0x80060000}};
  // -468.1
  s21_decimal dec_2 = {{0x1249, 0x0, 0x0, 0x80010000}};
  // -22396330258.121483
  s21_decimal dec_check = {{0xfd4ec30b, 0x4f9157, 0x0, 0x80060000}};
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
  // -325227427
  s21_decimal dec_1 = {{0x136293a3, 0x0, 0x0, 0x80000000}};
  // -4.8492688238724
  s21_decimal dec_2 = {{0x9574e884, 0x2c1a, 0x0, 0x800d0000}};
  // -325227431.8492688238724
  s21_decimal dec_check = {{0x9a50c884, 0x4e5f7561, 0xb0, 0x800d0000}};
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
  // 0.4104
  s21_decimal dec_1 = {{0x1008, 0x0, 0x0, 0x40000}};
  // 72579989391
  s21_decimal dec_2 = {{0xe61abf8f, 0x10, 0x0, 0x0}};
  // 72579989391.4104
  s21_decimal dec_check = {{0x74dad1f8, 0x2941c, 0x0, 0x40000}};
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
  // -5924217702491116.228563569567
  s21_decimal dec_1 = {{0xf8ce0b9f, 0x2a7843db, 0x132465e5, 0x800c0000}};
  // 51167015554795
  s21_decimal dec_2 = {{0x3fc94eeb, 0x2e89, 0x0, 0x0}};
  // -5873050686936321.228563569567
  s21_decimal dec_check = {{0xea685b9f, 0xb1d758cc, 0x12fa12db, 0x800c0000}};
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
  // -279.56134703
  s21_decimal dec_1 = {{0x8250c32f, 0x6, 0x0, 0x80080000}};
  // 4216332410095204
  s21_decimal dec_2 = {{0x638f0664, 0xefabb, 0x0, 0x0}};
  // 4216332410094924.43865297
  s21_decimal dec_check = {{0x440120d1, 0xc8a6c57b, 0x5948, 0x80000}};
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
  // 6548266340
  s21_decimal dec_1 = {{0x864e9d64, 0x1, 0x0, 0x0}};
  // -910024094
  s21_decimal dec_2 = {{0x363ddd9e, 0x0, 0x0, 0x80000000}};
  // 5638242246
  s21_decimal dec_check = {{0x5010bfc6, 0x1, 0x0, 0x0}};
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
  // -7419520725247289309076064
  s21_decimal dec_1 = {{0xf7951a60, 0x642bad7, 0x62325, 0x80000000}};
  // -2357603829232731333131170442
  s21_decimal dec_2 = {{0xde16f28a, 0xacfb909d, 0x79e2a07, 0x80000000}};
  // -2365023349957978622440246506
  s21_decimal dec_check = {{0xd5ac0cea, 0xb33e4b75, 0x7a44d2c, 0x80000000}};
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
  // 784457015384
  s21_decimal dec_1 = {{0xa5482058, 0xb6, 0x0, 0x0}};
  // 3898.566
  s21_decimal dec_2 = {{0x3b7cc6, 0x0, 0x0, 0x30000}};
  // 784457019282.566
  s21_decimal dec_check = {{0xa1f9d486, 0x2c975, 0x0, 0x30000}};
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
  // 6134597596164606686908133208
  s21_decimal dec_1 = {{0x72c02f58, 0xde6ab6a, 0x13d26b92, 0x0}};
  // 6729203565513232579237081
  s21_decimal dec_2 = {{0x679714d9, 0xdb32a1c8, 0x590f6, 0x0}};
  // 6141326799730119919487370289
  s21_decimal dec_check = {{0xda574431, 0xe9194d32, 0x13d7fc88, 0x0}};
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
  // 5
  s21_decimal dec_1 = {{0x5, 0x0, 0x0, 0x0}};
  // -4973659960.252521
  s21_decimal dec_2 = {{0x732a1869, 0x11ab84, 0x0, 0x80060000}};
  // -4973659955.252521
  s21_decimal dec_check = {{0x72ddcd29, 0x11ab84, 0x0, 0x80060000}};
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
  // -17522557385786287562729356072
  s21_decimal dec_1 = {{0x254e7b28, 0x4231b0a9, 0x389e51db, 0x80000000}};
  // 909.9148190838141327440
  s21_decimal dec_2 = {{0xc9ad9850, 0x440c3e36, 0x1ed, 0x130000}};
  // -17522557385786287562729355162
  s21_decimal dec_check = {{0x254e779a, 0x4231b0a9, 0x389e51db, 0x80000000}};
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
  // -3106940959507370630439886091
  s21_decimal dec_1 = {{0x59f1dd0b, 0xe773638f, 0xa0a0056, 0x80000000}};
  // -533701576187079327679017013
  s21_decimal dec_2 = {{0xb9407035, 0x6b053973, 0x1b977b4, 0x80000000}};
  // -3640642535694449958118903104
  s21_decimal dec_check = {{0x13324d40, 0x52789d03, 0xbc3780b, 0x80000000}};
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
  // 615
  s21_decimal dec_1 = {{0x267, 0x0, 0x0, 0x0}};
  // -6517218368.40068912211754
  s21_decimal dec_2 = {{0x72d7672a, 0xe95c83c3, 0x8a01, 0x800e0000}};
  // -6517217753.40068912211754
  s21_decimal dec_check = {{0xdd27a72a, 0xe88205d6, 0x8a01, 0x800e0000}};
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
  // 572431935.83779726
  s21_decimal dec_1 = {{0x9b5ebf8e, 0xcb5e61, 0x0, 0x80000}};
  // 5010428383.8203
  s21_decimal dec_2 = {{0xd00a36fb, 0x2d91, 0x0, 0x40000}};
  // 5582860319.65809726
  s21_decimal dec_check = {{0x2a626c3e, 0x7bf6e30, 0x0, 0x80000}};
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
  // -44213.427
  s21_decimal dec_1 = {{0x2a2a4b3, 0x0, 0x0, 0x80030000}};
  // 83237491987573690148
  s21_decimal dec_2 = {{0x99c0cf24, 0x8326f9f3, 0x4, 0x0}};
  // 83237491987573645934.573
  s21_decimal dec_check = {{0x96867fed, 0x50405f90, 0x11a0, 0x30000}};
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
  // -5703053
  s21_decimal dec_1 = {{0x57058d, 0x0, 0x0, 0x80000000}};
  // -324481997953326
  s21_decimal dec_2 = {{0x5a39592e, 0x1271d, 0x0, 0x80000000}};
  // -324482003656379
  s21_decimal dec_check = {{0x5a905ebb, 0x1271d, 0x0, 0x80000000}};
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
  // -64004706920
  s21_decimal dec_1 = {{0xe6fa5268, 0xe, 0x0, 0x80000000}};
  // -77465134652090
  s21_decimal dec_2 = {{0x41d55aba, 0x4674, 0x0, 0x80000000}};
  // -77529139359010
  s21_decimal dec_check = {{0x28cfad22, 0x4683, 0x0, 0x80000000}};
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
  // -7893138305196758541
  s21_decimal dec_1 = {{0xc48160d, 0x6d8a0f78, 0x0, 0x80000000}};
  // -500516344899131.0877
  s21_decimal dec_2 = {{0x6be5641d, 0x4575e9a3, 0x0, 0x80040000}};
  // -7893638821541657672.0877
  s21_decimal dec_check = {{0x2bc2bfed, 0x26722b03, 0x10b7, 0x80040000}};
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
  // 12949639
  s21_decimal dec_1 = {{0xc59887, 0x0, 0x0, 0x0}};
  // -9.1651
  s21_decimal dec_2 = {{0x16603, 0x0, 0x0, 0x80040000}};
  // 12949629.8349
  s21_decimal dec_check = {{0x2694b36d, 0x1e, 0x0, 0x40000}};
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
  // 83417287.5072193732
  s21_decimal dec_1 = {{0x6bf1c4c4, 0xb9393cf, 0x0, 0xa0000}};
  // 28737937.9
  s21_decimal dec_2 = {{0x11210fb3, 0x0, 0x0, 0x10000}};
  // 112155225.4072193732
  s21_decimal dec_check = {{0x350302c4, 0xf908dd5, 0x0, 0xa0000}};
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
  // 53713733
  s21_decimal dec_1 = {{0x3339b45, 0x0, 0x0, 0x0}};
  // -0.1
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x80010000}};
  // 53713732.9
  s21_decimal dec_check = {{0x200410b1, 0x0, 0x0, 0x10000}};
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
  // 0.7075
  s21_decimal dec_1 = {{0x1ba3, 0x0, 0x0, 0x40000}};
  // -7804753010566129275142
  s21_decimal dec_2 = {{0x96b05106, 0x18b4c7c1, 0x1a7, 0x80000000}};
  // -7804753010566129275141.2925
  s21_decimal dec_check = {{0x475cdebd, 0x15bafa0e, 0x408f35, 0x80040000}};
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
  // -128242493833777124456171673
  s21_decimal dec_1 = {{0xdbe28899, 0x855ebfb6, 0x6a1467, 0x80000000}};
  // 9295114003512467
  s21_decimal dec_2 = {{0x60537c93, 0x2105db, 0x0, 0x0}};
  // -128242493824482010452659206
  s21_decimal dec_check = {{0x7b8f0c06, 0x853db9db, 0x6a1467, 0x80000000}};
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
  // 194440
  s21_decimal dec_1 = {{0x2f788, 0x0, 0x0, 0x0}};
  // -811705.928319491
  s21_decimal dec_2 = {{0x3850203, 0x2e23e, 0x0, 0x80090000}};
  // -617265.928319491
  s21_decimal dec_check = {{0x6c63b203, 0x23166, 0x0, 0x80090000}};
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
  // -61906743791012178.21
  s21_decimal dec_1 = {{0x5670a41d, 0x55e9b18c, 0x0, 0x80020000}};
  // -29701.6
  s21_decimal dec_2 = {{0x48838, 0x0, 0x0, 0x80010000}};
  // -61906743791041879.81
  s21_decimal dec_check = {{0x569df64d, 0x55e9b18c, 0x0, 0x80020000}};
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
  // 911898826.003
  s21_decimal dec_1 = {{0x5167d513, 0xd4, 0x0, 0x30000}};
  // 7255179
  s21_decimal dec_2 = {{0x6eb48b, 0x0, 0x0, 0x0}};
  // 919154005.003
  s21_decimal dec_check = {{0x1d9140b, 0xd6, 0x0, 0x30000}};
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
  // 54.8395392
  s21_decimal dec_1 = {{0x20afd980, 0x0, 0x0, 0x70000}};
  // -7869.152
  s21_decimal dec_2 = {{0x7812e0, 0x0, 0x0, 0x80030000}};
  // -7814.3124608
  s21_decimal dec_check = {{0x31b17480, 0x12, 0x0, 0x80070000}};
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
  // 3288
  s21_decimal dec_1 = {{0xcd8, 0x0, 0x0, 0x0}};
  // 55415252.283301623
  s21_decimal dec_2 = {{0xdb7c1ef7, 0xc4dfe0, 0x0, 0x90000}};
  // 55418540.283301623
  s21_decimal dec_check = {{0x678e8ef7, 0xc4e2de, 0x0, 0x90000}};
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
  // 217319114439861.3443993783
  s21_decimal dec_1 = {{0xb41f60b7, 0xed915a62, 0x1cc30, 0xa0000}};
  // -40533647.26045671
  s21_decimal dec_2 = {{0x84a41be7, 0xe6683, 0x0, 0x80080000}};
  // 217319073906214.0839426683
  s21_decimal dec_check = {{0xe4047a7b, 0xe7f14f02, 0x1cc30, 0xa0000}};
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
  // -20.1
  s21_decimal dec_1 = {{0xc9, 0x0, 0x0, 0x80010000}};
  // 0.337162069709
  s21_decimal dec_2 = {{0x806ce6cd, 0x4e, 0x0, 0xc0000}};
  // -19.762837930291
  s21_decimal dec_check = {{0x64ef4133, 0x11f9, 0x0, 0x800c0000}};
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
  // -411065654156514.54349945
  s21_decimal dec_1 = {{0x669f279, 0x64313d9e, 0x8b4, 0x80080000}};
  // -13419347021752461430309227.52
  s21_decimal dec_2 = {{0xe4958e00, 0xf8bb12c3, 0x45605b9, 0x80020000}};
  // -13419347022163527084465742.063
  s21_decimal dec_check = {{0xc53460ef, 0xbd0321af, 0x2b5c3943, 0x80030000}};
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
  // 3682274077048107172196891844
  s21_decimal dec_1 = {{0x2045bcc4, 0xb37d4ccf, 0xbe5e7dd, 0x0}};
  // -261
  s21_decimal dec_2 = {{0x105, 0x0, 0x0, 0x80000000}};
  // 3682274077048107172196891583
  s21_decimal dec_check = {{0x2045bbbf, 0xb37d4ccf, 0xbe5e7dd, 0x0}};
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
  // 6165173605.161147849356
  s21_decimal dec_1 = {{0x84985a8c, 0x36f89967, 0x14e, 0xc0000}};
  // 72190570324.2386520434607
  s21_decimal dec_2 = {{0x40b067af, 0x962ab69c, 0x98de, 0xd0000}};
  // 78355743929.3997998928167
  s21_decimal dec_check = {{0x6ea3f127, 0xbbe0b4a7, 0xa5ec, 0xd0000}};
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
  // 0.8991398166019060883416805883
  s21_decimal dec_1 = {{0xe7c1f1fb, 0x4395a7ad, 0x1d0d829f, 0x1c0000}};
  // -9664846254181729234632
  s21_decimal dec_2 = {{0xd2a8eec8, 0xeeaf7da0, 0x20b, 0x80000000}};
  // -9664846254181729234631.1008602
  s21_decimal dec_check = {{0x1697615a, 0xc2d82026, 0x3849bc04, 0x80070000}};
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
  // -1753490655073618494572.151586
  s21_decimal dec_1 = {{0x59fb4322, 0xe218e53a, 0x5aa7416, 0x80060000}};
  // -81934
  s21_decimal dec_2 = {{0x1400e, 0x0, 0x0, 0x80000000}};
  // -1753490655073618576506.151586
  s21_decimal dec_check = {{0x6da0e2a2, 0xe218e54d, 0x5aa7416, 0x80060000}};
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
  // 33
  s21_decimal dec_1 = {{0x21, 0x0, 0x0, 0x0}};
  // 332639573572658
  s21_decimal dec_2 = {{0xaf9efc32, 0x12e88, 0x0, 0x0}};
  // 332639573572691
  s21_decimal dec_check = {{0xaf9efc53, 0x12e88, 0x0, 0x0}};
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
  // -775247945744027
  s21_decimal dec_1 = {{0x7a6b3e9b, 0x2c115, 0x0, 0x80000000}};
  // 0.2
  s21_decimal dec_2 = {{0x2, 0x0, 0x0, 0x10000}};
  // -775247945744026.8
  s21_decimal dec_check = {{0xc830720c, 0x1b8ad6, 0x0, 0x80010000}};
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
  // 913373359576669.8272156554
  s21_decimal dec_1 = {{0x6ef8eb8a, 0xb0bc3335, 0x78e24, 0xa0000}};
  // -62.90
  s21_decimal dec_2 = {{0x1892, 0x0, 0x0, 0x80020000}};
  // 913373359576606.9272156554
  s21_decimal dec_check = {{0xfba6998a, 0xb0bc32a2, 0x78e24, 0xa0000}};
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
  // -35758465951948301443887177
  s21_decimal dec_1 = {{0xfd7d7049, 0x52d068a0, 0x1d9426, 0x80000000}};
  // 602944766046112584520
  s21_decimal dec_2 = {{0x3f8c1348, 0xaf8a1e2e, 0x20, 0x0}};
  // -35757863007182255331302657
  s21_decimal dec_check = {{0xbdf15d01, 0xa3464a72, 0x1d9405, 0x80000000}};
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
  // 363
  s21_decimal dec_1 = {{0x16b, 0x0, 0x0, 0x0}};
  // -914736
  s21_decimal dec_2 = {{0xdf530, 0x0, 0x0, 0x80000000}};
  // -914373
  s21_decimal dec_check = {{0xdf3c5, 0x0, 0x0, 0x80000000}};
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
  // 595366384150230
  s21_decimal dec_1 = {{0x89d6a6d6, 0x21d7b, 0x0, 0x0}};
  // -5.5
  s21_decimal dec_2 = {{0x37, 0x0, 0x0, 0x80010000}};
  // 595366384150224.5
  s21_decimal dec_check = {{0x62628425, 0x1526d3, 0x0, 0x10000}};
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
  // 237624282133874621
  s21_decimal dec_1 = {{0x8e98c7bd, 0x34c3606, 0x0, 0x0}};
  // 312683047792254134647013
  s21_decimal dec_2 = {{0x3581f8e5, 0x94fd0544, 0x4236, 0x0}};
  // 312683285416536268521634
  s21_decimal dec_check = {{0xc41ac0a2, 0x98493b4a, 0x4236, 0x0}};
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
  // -5709430
  s21_decimal dec_1 = {{0x571e76, 0x0, 0x0, 0x80000000}};
  // -1040169705952436704373508
  s21_decimal dec_2 = {{0x2519eb04, 0xb6769c72, 0xdc43, 0x80000000}};
  // -1040169705952436710082938
  s21_decimal dec_check = {{0x2571097a, 0xb6769c72, 0xdc43, 0x80000000}};
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
  // -1602102022834.344046
  s21_decimal dec_1 = {{0x2cf9d06e, 0x163bcf4d, 0x0, 0x80060000}};
  // -905462.9435
  s21_decimal dec_2 = {{0x1bb2ae3b, 0x2, 0x0, 0x80040000}};
  // -1602102928297.287546
  s21_decimal dec_check = {{0xfec5df7a, 0x163bd01f, 0x0, 0x80060000}};
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
  // -637647811.13
  s21_decimal dec_1 = {{0xd8ad5839, 0xe, 0x0, 0x80020000}};
  // -47.9
  s21_decimal dec_2 = {{0x1df, 0x0, 0x0, 0x80010000}};
  // -637647859.03
  s21_decimal dec_check = {{0xd8ad6aef, 0xe, 0x0, 0x80020000}};
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
  // 86758409897219157
  s21_decimal dec_1 = {{0x6b339455, 0x1343a50, 0x0, 0x0}};
  // -778959004
  s21_decimal dec_2 = {{0x2e6df89c, 0x0, 0x0, 0x80000000}};
  // 86758409118260153
  s21_decimal dec_check = {{0x3cc59bb9, 0x1343a50, 0x0, 0x0}};
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
  // 8830056831681064504.8531320
  s21_decimal dec_1 = {{0x88e1978, 0x6668fdc6, 0x490a5f, 0x70000}};
  // 9883
  s21_decimal dec_2 = {{0x269b, 0x0, 0x0, 0x0}};
  // 8830056831681074387.8531320
  s21_decimal dec_check = {{0xb4838f8, 0x6668fddd, 0x490a5f, 0x70000}};
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
  // -26956
  s21_decimal dec_1 = {{0x694c, 0x0, 0x0, 0x80000000}};
  // -9402046152836736998834256
  s21_decimal dec_2 = {{0x2daa0050, 0xf177e58e, 0x7c6f5, 0x80000000}};
  // -9402046152836736998861212
  s21_decimal dec_check = {{0x2daa699c, 0xf177e58e, 0x7c6f5, 0x80000000}};
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
  // 0.34021
  s21_decimal dec_1 = {{0x84e5, 0x0, 0x0, 0x50000}};
  // 568.5870596
  s21_decimal dec_2 = {{0x52e78004, 0x1, 0x0, 0x70000}};
  // 568.9272696
  s21_decimal dec_check = {{0x531b6978, 0x1, 0x0, 0x70000}};
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
  // -4
  s21_decimal dec_1 = {{0x4, 0x0, 0x0, 0x80000000}};
  // 4916770285837405603
  s21_decimal dec_2 = {{0x5988cda3, 0x443be086, 0x0, 0x0}};
  // 4916770285837405599
  s21_decimal dec_check = {{0x5988cd9f, 0x443be086, 0x0, 0x0}};
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
  // -56
  s21_decimal dec_1 = {{0x38, 0x0, 0x0, 0x80000000}};
  // 240183549643134314181448
  s21_decimal dec_2 = {{0x1c837348, 0x60563d72, 0x32dc, 0x0}};
  // 240183549643134314181392
  s21_decimal dec_check = {{0x1c837310, 0x60563d72, 0x32dc, 0x0}};
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
  // 437563604583209
  s21_decimal dec_1 = {{0x3737c329, 0x18df6, 0x0, 0x0}};
  // -352693
  s21_decimal dec_2 = {{0x561b5, 0x0, 0x0, 0x80000000}};
  // 437563604230516
  s21_decimal dec_check = {{0x37326174, 0x18df6, 0x0, 0x0}};
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
  // 83503644187187.122220371
  s21_decimal dec_1 = {{0x7ca32d53, 0xbddaeefa, 0x11ae, 0x90000}};
  // -213414
  s21_decimal dec_2 = {{0x341a6, 0x0, 0x0, 0x80000000}};
  // 83503643973773.122220371
  s21_decimal dec_check = {{0x2afa3153, 0xbdda2ce1, 0x11ae, 0x90000}};
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
  // -7559764997407641828.1494394
  s21_decimal dec_1 = {{0x2264d77a, 0xd11c12d9, 0x3e886c, 0x80070000}};
  // 1001415.8
  s21_decimal dec_2 = {{0x98cdce, 0x0, 0x0, 0x10000}};
  // -7559764997406640412.3494394
  s21_decimal dec_check = {{0x881047fa, 0xd11c09bd, 0x3e886c, 0x80070000}};
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
  // 22.2851768988938604272826
  s21_decimal dec_1 = {{0x9e25cba, 0xd190082a, 0x2f30, 0x160000}};
  // -347274481.9801322478900749
  s21_decimal dec_2 = {{0x6960160d, 0xdfb84aaf, 0x2df61, 0x80100000}};
  // -347274459.69495534899621447272
  s21_decimal dec_check = {{0x3e62c668, 0x40001c41, 0x7035deba, 0x80140000}};
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
  // -31048532922557926676364
  s21_decimal dec_1 = {{0x8623178c, 0x24f39ee3, 0x693, 0x80000000}};
  // 978184801.2
  s21_decimal dec_2 = {{0x470b27cc, 0x2, 0x0, 0x10000}};
  // -31048532922556948491562.8
  s21_decimal dec_check = {{0xf653c3ac, 0x718434e0, 0x41bf, 0x80010000}};
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
  // -1659794048
  s21_decimal dec_1 = {{0x62ee7280, 0x0, 0x0, 0x80000000}};
  // 51685980816.7071
  s21_decimal dec_2 = {{0xcd43b49f, 0x1d614, 0x0, 0x40000}};
  // 50026186768.7071
  s21_decimal dec_check = {{0x4aeb0c9f, 0x1c6fc, 0x0, 0x40000}};
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
  // 619198139836
  s21_decimal dec_1 = {{0x2b15cdbc, 0x90, 0x0, 0x0}};
  // -205111272644157938456533134
  s21_decimal dec_2 = {{0xbb93188e, 0x5ebf1432, 0xa9aa00, 0x80000000}};
  // -205111272644157319258393298
  s21_decimal dec_check = {{0x907d4ad2, 0x5ebf13a2, 0xa9aa00, 0x80000000}};
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
  // -978
  s21_decimal dec_1 = {{0x3d2, 0x0, 0x0, 0x80000000}};
  // 23045749
  s21_decimal dec_2 = {{0x15fa675, 0x0, 0x0, 0x0}};
  // 23044771
  s21_decimal dec_check = {{0x15fa2a3, 0x0, 0x0, 0x0}};
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
  // -8632949280761726455637.54502
  s21_decimal dec_1 = {{0x4dade806, 0xd367502c, 0x2ca19cf, 0x80050000}};
  // -1475435969.48
  s21_decimal dec_2 = {{0x5a489f94, 0x22, 0x0, 0x80020000}};
  // -8632949280763201891607.02502
  s21_decimal dec_check = {{0xf95d4226, 0xd367d65c, 0x2ca19cf, 0x80050000}};
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
  // -0.8981782558
  s21_decimal dec_1 = {{0x175b201e, 0x2, 0x0, 0x800a0000}};
  // 4711218446264693
  s21_decimal dec_2 = {{0x5f2e975, 0x10bcd4, 0x0, 0x0}};
  // 4711218446264692.1018217442
  s21_decimal dec_check = {{0xac9813e2, 0xa3229e3e, 0x26f864, 0xa0000}};
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
  // -300797150
  s21_decimal dec_1 = {{0x11edccde, 0x0, 0x0, 0x80000000}};
  // -76.25391499431287327
  s21_decimal dec_2 = {{0xece29a1f, 0x69d2d52a, 0x0, 0x80110000}};
  // -300797226.25391499431287327
  s21_decimal dec_check = {{0x28e9a1f, 0x7e9c0d8, 0x18e1a1, 0x80110000}};
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
  // 0.88302589
  s21_decimal dec_1 = {{0x54363fd, 0x0, 0x0, 0x80000}};
  // -9345701928277124807
  s21_decimal dec_2 = {{0x5ba426c7, 0x81b29a63, 0x0, 0x80000000}};
  // -9345701928277124806.11697411
  s21_decimal dec_check = {{0x40448303, 0xab923c66, 0x3050eef, 0x80080000}};
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
  // 2908.966401
  s21_decimal dec_1 = {{0xad634e01, 0x0, 0x0, 0x60000}};
  // 6058790627018550556576
  s21_decimal dec_2 = {{0xc2f037a0, 0x729c566c, 0x148, 0x0}};
  // 6058790627018550559484.966401
  s21_decimal dec_check = {{0x9a287601, 0x5bd1186, 0x1393b6d2, 0x60000}};
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
  // -2281912390
  s21_decimal dec_1 = {{0x88033846, 0x0, 0x0, 0x80000000}};
  // 5612890
  s21_decimal dec_2 = {{0x55a55a, 0x0, 0x0, 0x0}};
  // -2276299500
  s21_decimal dec_check = {{0x87ad92ec, 0x0, 0x0, 0x80000000}};
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
  // -5868326495.4
  s21_decimal dec_1 = {{0xa9cb8fba, 0xd, 0x0, 0x80010000}};
  // 1334.447293780
  s21_decimal dec_2 = {{0xb341c554, 0x136, 0x0, 0x90000}};
  // -5868325160.952706220
  s21_decimal dec_check = {{0x6512b4ac, 0x51707aa4, 0x0, 0x80090000}};
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
  // -807886.5314664240
  s21_decimal dec_1 = {{0x6944cf30, 0x1cb3af, 0x0, 0x800a0000}};
  // -125042734361893755370332258
  s21_decimal dec_2 = {{0x133fe062, 0x36621e0c, 0x676ed4, 0x80000000}};
  // -125042734361893755371140144.53
  s21_decimal dec_check = {{0x89c462f5, 0x3e53bcb7, 0x28674ae5, 0x80020000}};
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
  // -452024
  s21_decimal dec_1 = {{0x6e5b8, 0x0, 0x0, 0x80000000}};
  // 4
  s21_decimal dec_2 = {{0x4, 0x0, 0x0, 0x0}};
  // -452020
  s21_decimal dec_check = {{0x6e5b4, 0x0, 0x0, 0x80000000}};
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
  // -9167956183492772401463
  s21_decimal dec_1 = {{0x18a69137, 0xfef356f9, 0x1f0, 0x80000000}};
  // 6854242304254384509.83
  s21_decimal dec_2 = {{0xe9bff527, 0x282c0a09, 0x25, 0x20000}};
  // -9161101941188518016953.17
  s21_decimal dec_check = {{0xb750c455, 0x6ee1ef43, 0xc1fe, 0x80020000}};
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
  // -392514725995
  s21_decimal dec_1 = {{0x63b3686b, 0x5b, 0x0, 0x80000000}};
  // 72613338963.34666208289460
  s21_decimal dec_2 = {{0x606aa2b4, 0xb303d88d, 0x601a5, 0xe0000}};
  // -319901387031.65333791710540
  s21_decimal dec_check = {{0xecae1d4c, 0xe4dd75f6, 0x1a762c, 0x800e0000}};
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
  // 234222419418927575023
  s21_decimal dec_1 = {{0x79bbafef, 0xb27d317f, 0xc, 0x0}};
  // 12.3247767183556351596609
  s21_decimal dec_2 = {{0xb2379841, 0x465c5ac9, 0x1a19, 0x160000}};
  // 234222419418927575035.32477672
  s21_decimal dec_check = {{0x49d22ce8, 0xe4e1350d, 0x4bae6ca7, 0x80000}};
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
  // 583053361354854344
  s21_decimal dec_1 = {{0x68a74fc8, 0x8176bf1, 0x0, 0x0}};
  // 310747329548633
  s21_decimal dec_2 = {{0x80315159, 0x11a9f, 0x0, 0x0}};
  // 583364108684402977
  s21_decimal dec_check = {{0xe8d8a121, 0x8188690, 0x0, 0x0}};
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
  // 26877306606020
  s21_decimal dec_1 = {{0xdc5011c4, 0x1871, 0x0, 0x0}};
  // -391933016940051915284464179
  s21_decimal dec_2 = {{0x3b54c233, 0x6bf8788c, 0x144330b, 0x80000000}};
  // -391933016940025037977858159
  s21_decimal dec_check = {{0x5f04b06f, 0x6bf8601a, 0x144330b, 0x80000000}};
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
  // -366991737.82
  s21_decimal dec_1 = {{0x8b70f396, 0x8, 0x0, 0x80020000}};
  // -0.939675836
  s21_decimal dec_2 = {{0x380250bc, 0x0, 0x0, 0x80090000}};
  // -366991738.759675836
  s21_decimal dec_check = {{0xc045ffbc, 0x517d10a, 0x0, 0x80090000}};
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
  // -78.334445665428
  s21_decimal dec_1 = {{0xa8cebc94, 0x473e, 0x0, 0x800c0000}};
  // 1
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x0}};
  // -77.334445665428
  s21_decimal dec_check = {{0xd429ac94, 0x4655, 0x0, 0x800c0000}};
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
  // -4387977041475816776
  s21_decimal dec_1 = {{0xe7bc4d48, 0x3ce539de, 0x0, 0x80000000}};
  // -0.033783575595718100
  s21_decimal dec_2 = {{0xa6a015d4, 0x7805fb, 0x0, 0x80120000}};
  // -4387977041475816776.0337835756
  s21_decimal dec_check = {{0xbb0f16ec, 0x97a0df66, 0x8dc87ed0, 0x800a0000}};
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
  // -2886511.72287
  s21_decimal dec_1 = {{0x34f359bf, 0x43, 0x0, 0x80050000}};
  // -990.78664166611147
  s21_decimal dec_2 = {{0x267898cb, 0x15fff85, 0x0, 0x800e0000}};
  // -2887502.50951166611147
  s21_decimal dec_check = {{0x2d2f4ecb, 0xa736f760, 0xf, 0x800e0000}};
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
  // -7067098369213407592814.714938
  s21_decimal dec_1 = {{0x2d7ba03a, 0x40e52fa2, 0x16d5c44a, 0x80060000}};
  // -912.8725720
  s21_decimal dec_2 = {{0x201d4cd8, 0x2, 0x0, 0x80070000}};
  // -7067098369213407593727.5875100
  s21_decimal dec_check = {{0xe6f18f1c, 0x88f3dc57, 0xe459aae6, 0x80070000}};
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
  // -0.45764
  s21_decimal dec_1 = {{0xb2c4, 0x0, 0x0, 0x80050000}};
  // -6423743009711037230.51
  s21_decimal dec_2 = {{0xce809e2b, 0xd2bbf749, 0x22, 0x80020000}};
  // -6423743009711037230.96764
  s21_decimal dec_check = {{0xa66a8abc, 0x2e3df84e, 0x8807, 0x80050000}};
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
  // 412869677536
  s21_decimal dec_1 = {{0x20f351e0, 0x60, 0x0, 0x0}};
  // 0.51
  s21_decimal dec_2 = {{0x33, 0x0, 0x0, 0x20000}};
  // 412869677536.51
  s21_decimal dec_check = {{0xdf0bfbb3, 0x258c, 0x0, 0x20000}};
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
  // 0.31402868798992290540
  s21_decimal dec_1 = {{0xc2212ec, 0xb3cd66cb, 0x1, 0x140000}};
  // -9163
  s21_decimal dec_2 = {{0x23cb, 0x0, 0x0, 0x80000000}};
  // -9162.68597131201007709460
  s21_decimal dec_check = {{0xb18ded14, 0x52a7bbd, 0xc207, 0x80140000}};
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
  // -58154953146415310639994249482
  s21_decimal dec_1 = {{0x42f4210a, 0x1b57e7a2, 0xbbe8a657, 0x80000000}};
  // -1719321166117667996124046
  s21_decimal dec_2 = {{0x5897438e, 0x96511e12, 0x16c14, 0x80000000}};
  // -58156672467581428307990373528
  s21_decimal dec_check = {{0x9b8b6498, 0xb1a905b4, 0xbbea126b, 0x80000000}};
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
  // -274
  s21_decimal dec_1 = {{0x112, 0x0, 0x0, 0x80000000}};
  // -297932225653128452591.02674
  s21_decimal dec_2 = {{0xa3fa59d2, 0xd4df55ae, 0x18a4f5, 0x80050000}};
  // -297932225653128452865.02674
  s21_decimal dec_check = {{0xa59c7112, 0xd4df55ae, 0x18a4f5, 0x80050000}};
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
  // 211376.16662550888198
  s21_decimal dec_1 = {{0xd9b93f06, 0x2557e65c, 0x1, 0xe0000}};
  // -3549379462721688526.4015
  s21_decimal dec_2 = {{0x2ac1ae8f, 0x1f59af45, 0x784, 0x80040000}};
  // -3549379462721477150.2348744911
  s21_decimal dec_check = {{0x5c8bb8cf, 0x3aa1a535, 0x72afc75e, 0x800a0000}};
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
  // -32821345.6136
  s21_decimal dec_1 = {{0x6b0be508, 0x4c, 0x0, 0x80040000}};
  // -66738871270184685
  s21_decimal dec_2 = {{0x5ac516ed, 0xed1aa6, 0x0, 0x80000000}};
  // -66738871303006030.6136
  s21_decimal dec_check = {{0x1ddb6ed8, 0x2de10286, 0x24, 0x80040000}};
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
  // 139
  s21_decimal dec_1 = {{0x8b, 0x0, 0x0, 0x0}};
  // -24142.79809703797890232758
  s21_decimal dec_2 = {{0x254431b6, 0x5ee862f5, 0x1ff3e, 0x80140000}};
  // -24003.79809703797890232758
  s21_decimal dec_check = {{0x5b9431b6, 0xd9a84050, 0x1fc4c, 0x80140000}};
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
  // 58093144537593
  s21_decimal dec_1 = {{0xdd3e79f9, 0x34d5, 0x0, 0x0}};
  // -9808135324848696707577016
  s21_decimal dec_2 = {{0xbcbcf4b8, 0x14d41dc9, 0x81cf4, 0x80000000}};
  // -9808135324790603563039423
  s21_decimal dec_check = {{0xdf7e7abf, 0x14d3e8f3, 0x81cf4, 0x80000000}};
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
  // 9562670.058676720
  s21_decimal dec_1 = {{0x9ff3a1f0, 0x21f932, 0x0, 0x90000}};
  // 1420085354433723.4
  s21_decimal dec_2 = {{0xdf047f52, 0x327399, 0x0, 0x10000}};
  // 1420085363996393.458676720
  s21_decimal dec_check = {{0x754b3f0, 0xfb59bc00, 0x12cb6, 0x90000}};
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
  // 2.8
  s21_decimal dec_1 = {{0x1c, 0x0, 0x0, 0x10000}};
  // 25699492310713181958
  s21_decimal dec_2 = {{0x47f12706, 0x64a6f018, 0x1, 0x0}};
  // 25699492310713181960.8
  s21_decimal dec_check = {{0xcf6b8658, 0xee8560f2, 0xd, 0x10000}};
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
  // -3714048239217272927331323
  s21_decimal dec_1 = {{0xd0f8a3fb, 0xf55f312e, 0x3127a, 0x80000000}};
  // -4286926804550
  s21_decimal dec_2 = {{0x20bfd646, 0x3e6, 0x0, 0x80000000}};
  // -3714048239221559854135873
  s21_decimal dec_check = {{0xf1b87a41, 0xf55f3514, 0x3127a, 0x80000000}};
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
  // 85820266032
  s21_decimal dec_1 = {{0xfb495630, 0x13, 0x0, 0x0}};
  // -2354193295539260
  s21_decimal dec_2 = {{0x571cfc3c, 0x85d20, 0x0, 0x80000000}};
  // -2354107475273228
  s21_decimal dec_check = {{0x5bd3a60c, 0x85d0c, 0x0, 0x80000000}};
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
  // -350955401
  s21_decimal dec_1 = {{0x14eb2789, 0x0, 0x0, 0x80000000}};
  // -18786610450437
  s21_decimal dec_2 = {{0x193e1005, 0x1116, 0x0, 0x80000000}};
  // -18786961405838
  s21_decimal dec_check = {{0x2e29378e, 0x1116, 0x0, 0x80000000}};
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
  // 35331107
  s21_decimal dec_1 = {{0x21b1c23, 0x0, 0x0, 0x0}};
  // -34935
  s21_decimal dec_2 = {{0x8877, 0x0, 0x0, 0x80000000}};
  // 35296172
  s21_decimal dec_check = {{0x21a93ac, 0x0, 0x0, 0x0}};
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
  // -6.1306
  s21_decimal dec_1 = {{0xef7a, 0x0, 0x0, 0x80040000}};
  // -52615041386
  s21_decimal dec_2 = {{0x4019d16a, 0xc, 0x0, 0x80000000}};
  // -52615041392.1306
  s21_decimal dec_check = {{0xf0852c1a, 0x1de87, 0x0, 0x80040000}};
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
  // -67
  s21_decimal dec_1 = {{0x43, 0x0, 0x0, 0x80000000}};
  // 8
  s21_decimal dec_2 = {{0x8, 0x0, 0x0, 0x0}};
  // -59
  s21_decimal dec_check = {{0x3b, 0x0, 0x0, 0x80000000}};
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
  // -44581950891201
  s21_decimal dec_1 = {{0xb58a4c1, 0x288c, 0x0, 0x80000000}};
  // 88310233
  s21_decimal dec_2 = {{0x54381d9, 0x0, 0x0, 0x0}};
  // -44581862580968
  s21_decimal dec_check = {{0x61522e8, 0x288c, 0x0, 0x80000000}};
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
  // -0.7
  s21_decimal dec_1 = {{0x7, 0x0, 0x0, 0x80010000}};
  // -0.927
  s21_decimal dec_2 = {{0x39f, 0x0, 0x0, 0x80030000}};
  // -1.627
  s21_decimal dec_check = {{0x65b, 0x0, 0x0, 0x80030000}};
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
  // 1581977743349266994
  s21_decimal dec_1 = {{0x3ae83a32, 0x15f45060, 0x0, 0x0}};
  // -42382775168885175758256933184
  s21_decimal dec_2 = {{0xa8b10940, 0xb4189328, 0x88f235bd, 0x80000000}};
  // -42382775167303198014907666190
  s21_decimal dec_check = {{0x6dc8cf0e, 0x9e2442c8, 0x88f235bd, 0x80000000}};
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
  // 43608497331.53094689939994788
  s21_decimal dec_1 = {{0xd4d338a4, 0xba76838a, 0xe1735d9, 0x110000}};
  // 28956694804166451
  s21_decimal dec_2 = {{0xe3abf733, 0x66dff5, 0x0, 0x0}};
  // 28956738412663782.530946899400
  s21_decimal dec_check = {{0xb7631dc8, 0xc156864d, 0x5d9073de, 0xc0000}};
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
  // -26.095607626295
  s21_decimal dec_1 = {{0xdb6c3a37, 0x17bb, 0x0, 0x800c0000}};
  // -956915430683996451733366316
  s21_decimal dec_2 = {{0x3909e62c, 0x710e4e89, 0x3178ab9, 0x80000000}};
  // -956915430683996451733366342.10
  s21_decimal dec_check = {{0x47ddf362, 0x2996ad9a, 0x35323070, 0x80020000}};
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
  // 25.787258256788304322
  s21_decimal dec_1 = {{0xff2031c2, 0x65debec1, 0x1, 0x120000}};
  // 891120.1749503
  s21_decimal dec_2 = {{0xcd03c9ff, 0x81a, 0x0, 0x70000}};
  // 891145.962208556788304322
  s21_decimal dec_check = {{0x41b949c2, 0x1e91bf05, 0xbcb5, 0x120000}};
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
  // 0.056423393985503725484
  s21_decimal dec_1 = {{0xc7dc87ac, 0xf0829e2, 0x3, 0x150000}};
  // 54124276
  s21_decimal dec_2 = {{0x339def4, 0x0, 0x0, 0x0}};
  // 54124276.056423393985503725484
  s21_decimal dec_check = {{0xb85c87ac, 0x3a9dd329, 0xaee28d44, 0x150000}};
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
  // -1505076907208
  s21_decimal dec_1 = {{0x6d930cc8, 0x15e, 0x0, 0x80000000}};
  // -5
  s21_decimal dec_2 = {{0x5, 0x0, 0x0, 0x80000000}};
  // -1505076907213
  s21_decimal dec_check = {{0x6d930ccd, 0x15e, 0x0, 0x80000000}};
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
  // -20596294991707
  s21_decimal dec_1 = {{0x72d8bf5b, 0x12bb, 0x0, 0x80000000}};
  // -20
  s21_decimal dec_2 = {{0x14, 0x0, 0x0, 0x80000000}};
  // -20596294991727
  s21_decimal dec_check = {{0x72d8bf6f, 0x12bb, 0x0, 0x80000000}};
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
  // 32609925022593677602604
  s21_decimal dec_1 = {{0xea412f2c, 0xc99eb142, 0x6e7, 0x0}};
  // 7005
  s21_decimal dec_2 = {{0x1b5d, 0x0, 0x0, 0x0}};
  // 32609925022593677609609
  s21_decimal dec_check = {{0xea414a89, 0xc99eb142, 0x6e7, 0x0}};
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
  // -422402287858558837
  s21_decimal dec_1 = {{0x901f2775, 0x5dcaca4, 0x0, 0x80000000}};
  // 4751217684
  s21_decimal dec_2 = {{0x1b31d414, 0x1, 0x0, 0x0}};
  // -422402283107341153
  s21_decimal dec_check = {{0x74ed5361, 0x5dcaca3, 0x0, 0x80000000}};
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
  // 5978957.344132975495066743
  s21_decimal dec_1 = {{0x94f5b477, 0xed557747, 0x4f217, 0x120000}};
  // -0.180296172789548417
  s21_decimal dec_2 = {{0xf57bc581, 0x2808a69, 0x0, 0x80120000}};
  // 5978957.163836802705518326
  s21_decimal dec_check = {{0x9f79eef6, 0xead4ecdd, 0x4f217, 0x120000}};
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
  // 15474311896482695103925
  s21_decimal dec_1 = {{0xcc4445b5, 0xdd378b6e, 0x346, 0x0}};
  // -9576849553
  s21_decimal dec_2 = {{0x3ad32091, 0x2, 0x0, 0x80000000}};
  // 15474311896473118254372
  s21_decimal dec_check = {{0x91712524, 0xdd378b6c, 0x346, 0x0}};
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
  // 752264880486
  s21_decimal dec_1 = {{0x267b2166, 0xaf, 0x0, 0x0}};
  // -1.1
  s21_decimal dec_2 = {{0xb, 0x0, 0x0, 0x80010000}};
  // 752264880484.9
  s21_decimal dec_check = {{0x80cf4df1, 0x6d7, 0x0, 0x10000}};
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
  // -306.6690
  s21_decimal dec_1 = {{0x2ecb42, 0x0, 0x0, 0x80040000}};
  // -99486795210201408722074074
  s21_decimal dec_2 = {{0x47679da, 0xf99b4e84, 0x524b25, 0x80000000}};
  // -99486795210201408722074380.669
  s21_decimal dec_check = {{0x6ed0a97d, 0x6aab3b1, 0x41758c57, 0x80030000}};
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
  // -4356391013347179010185045
  s21_decimal dec_1 = {{0xbe3d755, 0x6e175275, 0x39a80, 0x80000000}};
  // 28930052370
  s21_decimal dec_2 = {{0xbc5d9112, 0x6, 0x0, 0x0}};
  // -4356391013347150080132675
  s21_decimal dec_check = {{0x4f864643, 0x6e17526e, 0x39a80, 0x80000000}};
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
  // 93586159
  s21_decimal dec_1 = {{0x59402ef, 0x0, 0x0, 0x0}};
  // -2918130160372428994650615396
  s21_decimal dec_2 = {{0x5bf4ae64, 0xf93b6d8f, 0x96dd218, 0x80000000}};
  // -2918130160372428994557029237
  s21_decimal dec_check = {{0x5660ab75, 0xf93b6d8f, 0x96dd218, 0x80000000}};
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
  // -653057116978375808
  s21_decimal dec_1 = {{0xe3896c80, 0x9101ffc, 0x0, 0x80000000}};
  // 3322885701
  s21_decimal dec_2 = {{0xc60f3645, 0x0, 0x0, 0x0}};
  // -653057113655490107
  s21_decimal dec_check = {{0x1d7a363b, 0x9101ffc, 0x0, 0x80000000}};
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
  // -143208.4
  s21_decimal dec_1 = {{0x15da14, 0x0, 0x0, 0x80010000}};
  // -802055340127.3
  s21_decimal dec_2 = {{0x6e3c83b9, 0x74b, 0x0, 0x80010000}};
  // -802055483335.7
  s21_decimal dec_check = {{0x6e525dcd, 0x74b, 0x0, 0x80010000}};
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
  // -1597702195.19
  s21_decimal dec_1 = {{0x330c13ff, 0x25, 0x0, 0x80020000}};
  // -75282932893.3730651
  s21_decimal dec_2 = {{0x3797395b, 0xa729649, 0x0, 0x80070000}};
  // -76880635088.5630651
  s21_decimal dec_check = {{0x859a32bb, 0xaab594d, 0x0, 0x80070000}};
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
  // -39652539.9684786960151
  s21_decimal dec_1 = {{0xb7843717, 0x7ee53621, 0x15, 0x800d0000}};
  // 26410417062443631918.649428979
  s21_decimal dec_2 = {{0xc0f7cbf3, 0xc479a276, 0x55562f59, 0x90000}};
  // 26410417062403979378.680950283
  s21_decimal dec_check = {{0x59b46e0b, 0xc3ecc2b0, 0x55562f59, 0x90000}};
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
  // 0.275812
  s21_decimal dec_1 = {{0x43564, 0x0, 0x0, 0x60000}};
  // -318665780027186833897
  s21_decimal dec_2 = {{0x313d69e9, 0x46604692, 0x11, 0x80000000}};
  // -318665780027186833896.724188
  s21_decimal dec_check = {{0x594b56dc, 0x8cd437d7, 0x107981a, 0x80060000}};
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
  // 0
  s21_decimal dec_1 = {{0x0, 0x0, 0x0, 0x0}};
  // -1632400667122.459972096963475
  s21_decimal dec_2 = {{0x7b973393, 0x7ba906d5, 0x5464a49, 0x800f0000}};
  // -1632400667122.459972096963475
  s21_decimal dec_check = {{0x7b973393, 0x7ba906d5, 0x5464a49, 0x800f0000}};
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
  // -828090889.25528
  s21_decimal dec_1 = {{0x7e545f58, 0x4b50, 0x0, 0x80050000}};
  // -623745093951429910423108
  s21_decimal dec_2 = {{0xcf576644, 0x4a0f5dae, 0x8415, 0x80000000}};
  // -623745093951430738513997.25528
  s21_decimal dec_check = {{0x3abfe1d8, 0xb2532871, 0xc98afc21, 0x80050000}};
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
  // -380190.163146592249
  s21_decimal dec_1 = {{0x65734ff9, 0x546b4f0, 0x0, 0x800c0000}};
  // 216010491
  s21_decimal dec_2 = {{0xce00efb, 0x0, 0x0, 0x0}};
  // 215630300.836853407751
  s21_decimal dec_check = {{0x1f436007, 0xb078b827, 0xb, 0xc0000}};
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
  // -4.25433544
  s21_decimal dec_1 = {{0x195b99c8, 0x0, 0x0, 0x80080000}};
  // -10565712492
  s21_decimal dec_2 = {{0x75c3fa6c, 0x2, 0x0, 0x80000000}};
  // -10565712496.25433544
  s21_decimal dec_check = {{0x1dd085c8, 0xea9b1f4, 0x0, 0x80080000}};
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
  // 67489141269089511647
  s21_decimal dec_1 = {{0x543c68df, 0xa8999869, 0x3, 0x0}};
  // 23318
  s21_decimal dec_2 = {{0x5b16, 0x0, 0x0, 0x0}};
  // 67489141269089534965
  s21_decimal dec_check = {{0x543cc3f5, 0xa8999869, 0x3, 0x0}};
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
  // 4866544111323
  s21_decimal dec_1 = {{0x14a20edb, 0x46d, 0x0, 0x0}};
  // -9784786
  s21_decimal dec_2 = {{0x954dd2, 0x0, 0x0, 0x80000000}};
  // 4866534326537
  s21_decimal dec_check = {{0x140cc109, 0x46d, 0x0, 0x0}};
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
  // 56257754254145610.02319
  s21_decimal dec_1 = {{0x64fbf34f, 0xf9514ec7, 0x130, 0x50000}};
  // 9820064898081904855.88
  s21_decimal dec_2 = {{0x5172b454, 0x3c13e396, 0x35, 0x20000}};
  // 9876322652336050465.90319
  s21_decimal dec_check = {{0x8d0c5b6f, 0xa70251f5, 0xd123, 0x50000}};
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
  // -218923.2962
  s21_decimal dec_1 = {{0x827d0b42, 0x0, 0x0, 0x80040000}};
  // -699.3781
  s21_decimal dec_2 = {{0x6ab775, 0x0, 0x0, 0x80040000}};
  // -219622.6743
  s21_decimal dec_check = {{0x82e7c2b7, 0x0, 0x0, 0x80040000}};
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
  // 12
  s21_decimal dec_1 = {{0xc, 0x0, 0x0, 0x0}};
  // -64642126103900284374766765831
  s21_decimal dec_2 = {{0x20cac707, 0xcbe978b2, 0xd0deb6a5, 0x80000000}};
  // -64642126103900284374766765819
  s21_decimal dec_check = {{0x20cac6fb, 0xcbe978b2, 0xd0deb6a5, 0x80000000}};
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
  // 664161374523898
  s21_decimal dec_1 = {{0x1ecd51fa, 0x25c0d, 0x0, 0x0}};
  // 28.382
  s21_decimal dec_2 = {{0x6ede, 0x0, 0x0, 0x30000}};
  // 664161374523926.382
  s21_decimal dec_check = {{0x5208a76e, 0x9379340, 0x0, 0x30000}};
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
  // 1649025572834913.013418783118
  s21_decimal dec_1 = {{0x213d718e, 0x6d766d5d, 0x5540abf, 0xc0000}};
  // -1241742047769104443.255239309
  s21_decimal dec_2 = {{0x783328d, 0x4afb0adb, 0x403251b, 0x80090000}};
  // -1240093022196269530.2418205259
  s21_decimal dec_check = {{0x9a270a4b, 0x5fe96657, 0x2811cf1e, 0x800a0000}};
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
  // -279645971
  s21_decimal dec_1 = {{0x10ab0f13, 0x0, 0x0, 0x80000000}};
  // 525043.1
  s21_decimal dec_2 = {{0x501d7f, 0x0, 0x0, 0x10000}};
  // -279120927.9
  s21_decimal dec_check = {{0xa65e793f, 0x0, 0x0, 0x80010000}};
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
  // 7590496877895.191973
  s21_decimal dec_1 = {{0xbba78da5, 0x6956dcb1, 0x0, 0x60000}};
  // 605.7805296785
  s21_decimal dec_2 = {{0x71553491, 0x582, 0x0, 0xa0000}};
  // 7590496878500.9725026785
  s21_decimal dec_check = {{0xb26231e1, 0xd10ce434, 0x1012, 0xa0000}};
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
  // -66623533361611.01353
  s21_decimal dec_1 = {{0x82056629, 0x5c756f0f, 0x0, 0x80050000}};
  // -7.69642776
  s21_decimal dec_2 = {{0x2ddfd118, 0x0, 0x0, 0x80080000}};
  // -66623533361618.70995776
  s21_decimal dec_check = {{0x12f6e140, 0x2ab9d494, 0x169, 0x80080000}};
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
  // 6354897
  s21_decimal dec_1 = {{0x60f7d1, 0x0, 0x0, 0x0}};
  // 34348000848298.8430500
  s21_decimal dec_2 = {{0x54af14a4, 0x9ebe1fe1, 0x12, 0x70000}};
  // 34348007203195.8430500
  s21_decimal dec_check = {{0x7a777324, 0x9ebe59ad, 0x12, 0x70000}};
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
  // -900.0
  s21_decimal dec_1 = {{0x2328, 0x0, 0x0, 0x80010000}};
  // -5271.9
  s21_decimal dec_2 = {{0xcdef, 0x0, 0x0, 0x80010000}};
  // -6171.9
  s21_decimal dec_check = {{0xf117, 0x0, 0x0, 0x80010000}};
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
  // 94740.1865
  s21_decimal dec_1 = {{0x38783489, 0x0, 0x0, 0x40000}};
  // -65627448529393
  s21_decimal dec_2 = {{0x14c1d1f1, 0x3bb0, 0x0, 0x80000000}};
  // -65627448434652.8135
  s21_decimal dec_check = {{0x9aa0a187, 0x91b8e2a, 0x0, 0x80040000}};
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
  // -2629
  s21_decimal dec_1 = {{0xa45, 0x0, 0x0, 0x80000000}};
  // -720474900691823079566685
  s21_decimal dec_2 = {{0xf7e9ad5d, 0x5caeb96, 0x9891, 0x80000000}};
  // -720474900691823079569314
  s21_decimal dec_check = {{0xf7e9b7a2, 0x5caeb96, 0x9891, 0x80000000}};
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
  // 0.6
  s21_decimal dec_1 = {{0x6, 0x0, 0x0, 0x10000}};
  // 1574882031273495191628324730
  s21_decimal dec_2 = {{0xaf249f7a, 0xfc5a76f3, 0x516b63d, 0x0}};
  // 1574882031273495191628324730.6
  s21_decimal dec_check = {{0xd76e3aca, 0xdb88a584, 0x32e31e6b, 0x10000}};
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
  // 3863326594133098178505
  s21_decimal dec_1 = {{0x1f0727c9, 0x6e6d3c95, 0xd1, 0x0}};
  // 322555695.421387985227105
  s21_decimal dec_2 = {{0x4b1d8d61, 0xc77f4c6f, 0x444d, 0xf0000}};
  // 3863326594133420734200.4213880
  s21_decimal dec_check = {{0xd4b11878, 0x30b38c9d, 0x7cd4b047, 0x70000}};
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
  // 8159
  s21_decimal dec_1 = {{0x1fdf, 0x0, 0x0, 0x0}};
  // 5275704309560
  s21_decimal dec_2 = {{0x587b3738, 0x4cc, 0x0, 0x0}};
  // 5275704317719
  s21_decimal dec_check = {{0x587b5717, 0x4cc, 0x0, 0x0}};
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
  // 0.68385335
  s21_decimal dec_1 = {{0x4137a37, 0x0, 0x0, 0x80000}};
  // -78772782658306464
  s21_decimal dec_2 = {{0xb05141a0, 0x117db6d, 0x0, 0x80000000}};
  // -78772782658306463.31614665
  s21_decimal dec_check = {{0x54ba25c9, 0x1c46bc03, 0x68414, 0x80080000}};
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
  // -285497658893942693414
  s21_decimal dec_1 = {{0xf3189e26, 0x7a137021, 0xf, 0x80000000}};
  // 22935796380885557388516649
  s21_decimal dec_2 = {{0xe7881d29, 0x3608e1d, 0x12f8d8, 0x0}};
  // 22935510883226663445823235
  s21_decimal dec_check = {{0xf46f7f03, 0x894d1dfb, 0x12f8c8, 0x0}};
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
  // 32359785115
  s21_decimal dec_1 = {{0x88cb229b, 0x7, 0x0, 0x0}};
  // -75054119504064.184526
  s21_decimal dec_2 = {{0x17680ce, 0x1195cc09, 0x4, 0x80060000}};
  // -75021759718949.184526
  s21_decimal dec_check = {{0x68ace40e, 0x1122d4fb, 0x4, 0x80060000}};
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
  // 3117826941.25813312918
  s21_decimal dec_1 = {{0x735f2d96, 0xe6daa469, 0x10, 0xb0000}};
  // 4.01514984069510717432542869
  s21_decimal dec_2 = {{0xab463695, 0xe6931dae, 0x14c201a, 0x1a0000}};
  // 3117826945.2732829698751071743
  s21_decimal dec_check = {{0xf79a05ff, 0xbfe3bb72, 0x64be0f5d, 0x130000}};
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
  // 627534219.47
  s21_decimal dec_1 = {{0x9c653a7b, 0xe, 0x0, 0x20000}};
  // -1365560.8
  s21_decimal dec_2 = {{0xd05e38, 0x0, 0x0, 0x80010000}};
  // 626168658.67
  s21_decimal dec_check = {{0x94418c4b, 0xe, 0x0, 0x20000}};
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
  // 68420618152224197
  s21_decimal dec_1 = {{0x9046a5c5, 0xf31430, 0x0, 0x0}};
  // -1940.5
  s21_decimal dec_2 = {{0x4bcd, 0x0, 0x0, 0x80010000}};
  // 68420618152222256.5
  s21_decimal dec_check = {{0xa2c22de5, 0x97ec9e5, 0x0, 0x10000}};
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
  // -315174207122401660866337083
  s21_decimal dec_1 = {{0x4177193b, 0xf0dbd0, 0x104b4bc, 0x80000000}};
  // 3377
  s21_decimal dec_2 = {{0xd31, 0x0, 0x0, 0x0}};
  // -315174207122401660866333706
  s21_decimal dec_check = {{0x41770c0a, 0xf0dbd0, 0x104b4bc, 0x80000000}};
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
  // -83589875269311
  s21_decimal dec_1 = {{0x48d27ebf, 0x4c06, 0x0, 0x80000000}};
  // 707384656265087212420704.815
  s21_decimal dec_2 = {{0xce15aa2f, 0xe2690d8, 0x2492287, 0x30000}};
  // 707384656181497337151393.815
  s21_decimal dec_check = {{0x57d69017, 0xcfd984c, 0x2492287, 0x30000}};
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
  // 876226794559370274728
  s21_decimal dec_1 = {{0x671a7a8, 0x8016eb34, 0x2f, 0x0}};
  // 818
  s21_decimal dec_2 = {{0x332, 0x0, 0x0, 0x0}};
  // 876226794559370275546
  s21_decimal dec_check = {{0x671aada, 0x8016eb34, 0x2f, 0x0}};
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
  // -728319649624476692
  s21_decimal dec_1 = {{0xcecdcc14, 0xa1b82dc, 0x0, 0x80000000}};
  // 24818531511445.05
  s21_decimal dec_2 = {{0x77756a39, 0x8d13b, 0x0, 0x20000}};
  // -728294831092965246.95
  s21_decimal dec_check = {{0x50ee4d97, 0xf2b64d05, 0x3, 0x80020000}};
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
  // 8.80841938747114187
  s21_decimal dec_1 = {{0x8e49c2cb, 0xc396113, 0x0, 0x110000}};
  // -6051313032451
  s21_decimal dec_2 = {{0xee5d1d03, 0x580, 0x0, 0x80000000}};
  // -6051313032442.1915806125288581
  s21_decimal dec_check = {{0x9e086c85, 0x14f32281, 0xc38749c8, 0x80100000}};
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
  // -5289
  s21_decimal dec_1 = {{0x14a9, 0x0, 0x0, 0x80000000}};
  // -9592124101787.187724
  s21_decimal dec_2 = {{0xa07cfa0c, 0x851e120c, 0x0, 0x80060000}};
  // -9592124107076.187724
  s21_decimal dec_check = {{0xdbbcb64c, 0x851e120d, 0x0, 0x80060000}};
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
  // 3552071997452500645408
  s21_decimal dec_1 = {{0xc088b620, 0x8ee6c5ff, 0xc0, 0x0}};
  // -4527.496646178403038
  s21_decimal dec_2 = {{0x453c72de, 0x3ed4e636, 0x0, 0x800f0000}};
  // 3552071997452500640880.5033538
  s21_decimal dec_check = {{0xf778a642, 0x3b412bd1, 0x72c60d08, 0x70000}};
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
  // 7898441407040071
  s21_decimal dec_1 = {{0x32588a47, 0x1c0f97, 0x0, 0x0}};
  // -955739044681.78588017092346
  s21_decimal dec_2 = {{0x2273e6fa, 0xbe2c786b, 0x4f0e8f, 0x800e0000}};
  // 7897485667995389.2141198290765
  s21_decimal dec_check = {{0xd5652f4d, 0x34f54ea3, 0xff2e7867, 0xd0000}};
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
  // 2411794
  s21_decimal dec_1 = {{0x24cd12, 0x0, 0x0, 0x0}};
  // 50912842742411741882498
  s21_decimal dec_2 = {{0xf887e882, 0xfda0d66b, 0xac7, 0x0}};
  // 50912842742411744294292
  s21_decimal dec_check = {{0xf8acb594, 0xfda0d66b, 0xac7, 0x0}};
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
  // -5.7
  s21_decimal dec_1 = {{0x39, 0x0, 0x0, 0x80010000}};
  // -8
  s21_decimal dec_2 = {{0x8, 0x0, 0x0, 0x80000000}};
  // -13.7
  s21_decimal dec_check = {{0x89, 0x0, 0x0, 0x80010000}};
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
  // 3396.47828661419885788316
  s21_decimal dec_1 = {{0x9ef8fc9c, 0x587edc3d, 0x47ec, 0x140000}};
  // 270855345.87630379
  s21_decimal dec_2 = {{0x73a5b32b, 0x603a26, 0x0, 0x80000}};
  // 270858742.35459040419885788316
  s21_decimal dec_check = {{0x10e2ac9c, 0x7cd9649c, 0x5784e8f8, 0x140000}};
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
  // -281.41347978461158912
  s21_decimal dec_1 = {{0x1cd59e00, 0x868a26e3, 0x1, 0x80110000}};
  // -803617
  s21_decimal dec_2 = {{0xc4321, 0x0, 0x0, 0x80000000}};
  // -803898.41347978461158912
  s21_decimal dec_check = {{0x499f9e00, 0xf128fe5a, 0x1105, 0x80110000}};
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
  // -12382.60285162
  s21_decimal dec_1 = {{0x4e107eea, 0x120, 0x0, 0x80080000}};
  // -78749992821733752.087258
  s21_decimal dec_2 = {{0xe1e8a2da, 0xbb0b405, 0x10ad, 0x80060000}};
  // -78749992821746134.69010962
  s21_decimal dec_check = {{0x8cf01c12, 0x9106536c, 0x68398, 0x80080000}};
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
  // -3654273
  s21_decimal dec_1 = {{0x37c281, 0x0, 0x0, 0x80000000}};
  // -553294067.09963263745763154369
  s21_decimal dec_2 = {{0x59ed99c1, 0xdd22b51d, 0xb2c7699b, 0x80140000}};
  // -556948340.09963263745763154369
  s21_decimal dec_check = {{0x64fd99c1, 0x7db7d77e, 0xb3f5afd9, 0x80140000}};
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
  // -7.382952253
  s21_decimal dec_1 = {{0xb80ee93d, 0x1, 0x0, 0x80090000}};
  // -37302048.4327
  s21_decimal dec_2 = {{0xd9c0e2e7, 0x56, 0x0, 0x80040000}};
  // -37302055.815652253
  s21_decimal dec_check = {{0xaa48a39d, 0x848605, 0x0, 0x80090000}};
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
  // 6332200.95
  s21_decimal dec_1 = {{0x25be2bff, 0x0, 0x0, 0x20000}};
  // 74862677960323060
  s21_decimal dec_2 = {{0x7ec26ff4, 0x109f735, 0x0, 0x0}};
  // 74862677966655260.95
  s21_decimal dec_check = {{0xa9b1e74f, 0x67e490e5, 0x0, 0x20000}};
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
  // 60
  s21_decimal dec_1 = {{0x3c, 0x0, 0x0, 0x0}};
  // -113866374907656
  s21_decimal dec_2 = {{0x94d40708, 0x678f, 0x0, 0x80000000}};
  // -113866374907596
  s21_decimal dec_check = {{0x94d406cc, 0x678f, 0x0, 0x80000000}};
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
  // -43277290806477203248395882
  s21_decimal dec_1 = {{0xe07a366a, 0xa2b59945, 0x23cc52, 0x80000000}};
  // -401948762690872733421597.26
  s21_decimal dec_2 = {{0xb4934b6e, 0x9bd2e147, 0x213f98, 0x80020000}};
  // -43679239569168075981817479.26
  s21_decimal dec_check = {{0x64508cd6, 0x2ac2c093, 0xe1d0fe0, 0x80020000}};
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
  // 24718
  s21_decimal dec_1 = {{0x608e, 0x0, 0x0, 0x0}};
  // -482011128277.5699355085800
  s21_decimal dec_2 = {{0x48082be8, 0xc197a869, 0x3fcb2, 0x800d0000}};
  // -482011103559.5699355085800
  s21_decimal dec_check = {{0xc8736be8, 0xbe297f82, 0x3fcb2, 0x800d0000}};
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
  // -32513335111794731529
  s21_decimal dec_1 = {{0x69c2aa09, 0xc3369205, 0x1, 0x80000000}};
  // 0.6155572
  s21_decimal dec_2 = {{0x5ded34, 0x0, 0x0, 0x70000}};
  // -32513335111794731528.3844428
  s21_decimal dec_check = {{0xe5f05d4c, 0x480efa41, 0x10cf1aa, 0x80070000}};
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
  // 7
  s21_decimal dec_1 = {{0x7, 0x0, 0x0, 0x0}};
  // 5564222177939392017141367556
  s21_decimal dec_2 = {{0x5708304, 0xacfa6495, 0x11fa9de0, 0x0}};
  // 5564222177939392017141367563
  s21_decimal dec_check = {{0x570830b, 0xacfa6495, 0x11fa9de0, 0x0}};
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
  // 8366113.5560
  s21_decimal dec_1 = {{0x7a979ec8, 0x13, 0x0, 0x40000}};
  // -79228162514264337591955006133
  s21_decimal dec_2 = {{0xa14aa2b5, 0xffffffff, 0xffffffff, 0x80000000}};
  // -79228162514264337591946640019
  s21_decimal dec_check = {{0xa0cafa93, 0xffffffff, 0xffffffff, 0x80000000}};
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
  // 80.11072561625
  s21_decimal dec_1 = {{0x392261d9, 0x749, 0x0, 0xb0000}};
  // -772952841558959616660975776
  s21_decimal dec_2 = {{0xa161b0a0, 0x809a3b6d, 0x27f5f21, 0x80000000}};
  // -772952841558959616660975695.89
  s21_decimal dec_check = {{0xa28df35, 0x3c3f36d3, 0xf9c12916, 0x80020000}};
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
  // 7926073648041535724362671
  s21_decimal dec_1 = {{0x49d09baf, 0x503c93cd, 0x68e69, 0x0}};
  // 608919840029
  s21_decimal dec_2 = {{0xc673651d, 0x8d, 0x0, 0x0}};
  // 7926073648042144644202700
  s21_decimal dec_check = {{0x104400cc, 0x503c945b, 0x68e69, 0x0}};
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
  // 0.10017
  s21_decimal dec_1 = {{0x2721, 0x0, 0x0, 0x50000}};
  // -5811802882446207100418940049
  s21_decimal dec_2 = {{0x1f825c91, 0x8f6ed1d6, 0x12c76921, 0x80000000}};
  // -5811802882446207100418940048.9
  s21_decimal dec_check = {{0x3b179da9, 0x9a54325d, 0xbbca1b4f, 0x80010000}};
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
  // 9613916748285180730753183451
  s21_decimal dec_1 = {{0x73046edb, 0x3ab1fe71, 0x1f10720f, 0x0}};
  // 715445314
  s21_decimal dec_2 = {{0x2aa4d442, 0x0, 0x0, 0x0}};
  // 9613916748285180731468628765
  s21_decimal dec_check = {{0x9da9431d, 0x3ab1fe71, 0x1f10720f, 0x0}};
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
  // 51808091837698616644689979
  s21_decimal dec_1 = {{0x567d603b, 0x4940582e, 0x2adaca, 0x0}};
  // -1188686471644948
  s21_decimal dec_2 = {{0xa2e44714, 0x4391a, 0x0, 0x80000000}};
  // 51808091836509930173045031
  s21_decimal dec_check = {{0xb3991927, 0x493c1f13, 0x2adaca, 0x0}};
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
  // -12053562575334073014937935
  s21_decimal dec_1 = {{0xa5e3e94f, 0xefbfaaca, 0x9f870, 0x80000000}};
  // 6437
  s21_decimal dec_2 = {{0x1925, 0x0, 0x0, 0x0}};
  // -12053562575334073014931498
  s21_decimal dec_check = {{0xa5e3d02a, 0xefbfaaca, 0x9f870, 0x80000000}};
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
  // 0.9744261
  s21_decimal dec_1 = {{0x94af85, 0x0, 0x0, 0x70000}};
  // -69399634784700139961
  s21_decimal dec_2 = {{0x43e509b9, 0xc31d0824, 0x3, 0x80000000}};
  // -69399634784700139960.0255739
  s21_decimal dec_check = {{0xeb7a92fb, 0x66d1a1e7, 0x23e0f71, 0x80070000}};
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
  // -487312867137427090328234.2038
  s21_decimal dec_1 = {{0x8049896, 0x9d824888, 0xfbef522, 0x80040000}};
  // 88
  s21_decimal dec_2 = {{0x58, 0x0, 0x0, 0x0}};
  // -487312867137427090328146.2038
  s21_decimal dec_check = {{0x7f72b16, 0x9d824888, 0xfbef522, 0x80040000}};
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
  // -0.92135
  s21_decimal dec_1 = {{0x167e7, 0x0, 0x0, 0x80050000}};
  // 8313511468.8724
  s21_decimal dec_2 = {{0x66fab8d4, 0x4b9c, 0x0, 0x40000}};
  // 8313511467.95105
  s21_decimal dec_check = {{0x5c9d061, 0x2f41c, 0x0, 0x50000}};
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
  // -99
  s21_decimal dec_1 = {{0x63, 0x0, 0x0, 0x80000000}};
  // 634094353.557
  s21_decimal dec_2 = {{0xa2f7fc95, 0x93, 0x0, 0x30000}};
  // 634094254.557
  s21_decimal dec_check = {{0xa2f679dd, 0x93, 0x0, 0x30000}};
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
  // -3994409432505009700529
  s21_decimal dec_1 = {{0x3ac1feb1, 0x89910793, 0xd8, 0x80000000}};
  // -5369780849823740762.8098097062
  s21_decimal dec_2 = {{0x86494fa6, 0x9331d294, 0xad81c93f, 0x800a0000}};
  // -3999779213354833441291.8098097
  s21_decimal dec_check = {{0x5f0f08b1, 0x4a743d78, 0x813d65f0, 0x80070000}};
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
  // -5.0535202704
  s21_decimal dec_1 = {{0xc421ff90, 0xb, 0x0, 0x800a0000}};
  // -6
  s21_decimal dec_2 = {{0x6, 0x0, 0x0, 0x80000000}};
  // -11.0535202704
  s21_decimal dec_check = {{0xbc695790, 0x19, 0x0, 0x800a0000}};
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
  // -6.3030640069
  s21_decimal dec_1 = {{0xaceb3dc5, 0xe, 0x0, 0x800a0000}};
  // -0.6505411
  s21_decimal dec_2 = {{0x6343c3, 0x0, 0x0, 0x80070000}};
  // -6.9536051069
  s21_decimal dec_check = {{0x30abef7d, 0x10, 0x0, 0x800a0000}};
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
  // 9
  s21_decimal dec_1 = {{0x9, 0x0, 0x0, 0x0}};
  // 2044931.5439967402509688591
  s21_decimal dec_2 = {{0x86035f0f, 0x9c7dadb0, 0x10ea4f, 0x130000}};
  // 2044940.5439967402509688591
  s21_decimal dec_check = {{0x5f2b5f0f, 0x7d7de8d9, 0x10ea54, 0x130000}};
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
  // -609072147.4
  s21_decimal dec_1 = {{0x6b0908c2, 0x1, 0x0, 0x80010000}};
  // 950451453354737
  s21_decimal dec_2 = {{0x3940e2f1, 0x3606e, 0x0, 0x0}};
  // 950450844282589.6
  s21_decimal dec_check = {{0xd17fd4a8, 0x21c44c, 0x0, 0x10000}};
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
  // -825316.739317
  s21_decimal dec_1 = {{0x28b608f5, 0xc0, 0x0, 0x80060000}};
  // -3919586077
  s21_decimal dec_2 = {{0xe9a0231d, 0x0, 0x0, 0x80000000}};
  // -3920411393.739317
  s21_decimal dec_check = {{0xe87f4a35, 0xded97, 0x0, 0x80060000}};
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
  // -94
  s21_decimal dec_1 = {{0x5e, 0x0, 0x0, 0x80000000}};
  // 55608663323172404.24867201
  s21_decimal dec_2 = {{0x5f8b2581, 0x2afccdfc, 0x4998f, 0x80000}};
  // 55608663323172310.24867201
  s21_decimal dec_check = {{0x2f428781, 0x2afccdfa, 0x4998f, 0x80000}};
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
  // 86743231796797941.08360883
  s21_decimal dec_1 = {{0x7990e8b3, 0x76c8df, 0x72cdc, 0x80000}};
  // -625
  s21_decimal dec_2 = {{0x271, 0x0, 0x0, 0x80000000}};
  // 86743231796797316.08360883
  s21_decimal dec_check = {{0xec4697b3, 0x76c8d0, 0x72cdc, 0x80000}};
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
  // 7617.74186386
  s21_decimal dec_1 = {{0x5d479f92, 0xb1, 0x0, 0x80000}};
  // -1327807.570
  s21_decimal dec_2 = {{0x4f24bc52, 0x0, 0x0, 0x80030000}};
  // -1320189.82813614
  s21_decimal dec_check = {{0x1092ffae, 0x7812, 0x0, 0x80080000}};
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
  // 8051623338472581
  s21_decimal dec_1 = {{0xa4f47485, 0x1c9ae8, 0x0, 0x0}};
  // -87530718593601746
  s21_decimal dec_2 = {{0x8cb4d0d2, 0x136f8b9, 0x0, 0x80000000}};
  // -79479095255129165
  s21_decimal dec_check = {{0xe7c05c4d, 0x11a5dd0, 0x0, 0x80000000}};
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
  // 17
  s21_decimal dec_1 = {{0x11, 0x0, 0x0, 0x0}};
  // 481144047443917848
  s21_decimal dec_2 = {{0x41b03c18, 0x6ad5df6, 0x0, 0x0}};
  // 481144047443917865
  s21_decimal dec_check = {{0x41b03c29, 0x6ad5df6, 0x0, 0x0}};
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
  // 84807697673432.655
  s21_decimal dec_1 = {{0xd60b2e4f, 0x12d4c26, 0x0, 0x30000}};
  // -783009310500405792985898
  s21_decimal dec_2 = {{0x23cbd32a, 0x5100afe, 0xa5cf, 0x80000000}};
  // -783009310415598095312465.345
  s21_decimal dec_check = {{0xfe25adc1, 0xc57da494, 0x287b0ab, 0x80030000}};
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
  // -5812893407269407
  s21_decimal dec_1 = {{0xb6a8521f, 0x14a6cb, 0x0, 0x80000000}};
  // -2414911298969
  s21_decimal dec_2 = {{0x43ee1d99, 0x232, 0x0, 0x80000000}};
  // -5815308318568376
  s21_decimal dec_check = {{0xfa966fb8, 0x14a8fd, 0x0, 0x80000000}};
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
  // 55.6
  s21_decimal dec_1 = {{0x22c, 0x0, 0x0, 0x10000}};
  // 0.349623
  s21_decimal dec_2 = {{0x555b7, 0x0, 0x0, 0x60000}};
  // 55.949623
  s21_decimal dec_check = {{0x355b937, 0x0, 0x0, 0x60000}};
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
  // 567992876.73899765888915353
  s21_decimal dec_1 = {{0xf6831799, 0x8df93039, 0x2efbb7, 0x110000}};
  // 7547.40
  s21_decimal dec_2 = {{0xb8434, 0x0, 0x0, 0x20000}};
  // 568000424.13899765888915353
  s21_decimal dec_check = {{0x48d51799, 0x78184f71, 0x2efbe0, 0x110000}};
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
  // 80153252626.73723
  s21_decimal dec_1 = {{0x570a773b, 0x1c79e5, 0x0, 0x50000}};
  // -874208980
  s21_decimal dec_2 = {{0x341b5ed4, 0x0, 0x0, 0x80000000}};
  // 79279043646.73723
  s21_decimal dec_check = {{0x13783abb, 0x1c2a63, 0x0, 0x50000}};
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
  // 570109.49
  s21_decimal dec_1 = {{0x365eb05, 0x0, 0x0, 0x20000}};
  // -139912305718089243197791.9
  s21_decimal dec_2 = {{0x6c50dbf, 0x9ce7925d, 0x12846, 0x80010000}};
  // -139912305718089242627682.41
  s21_decimal dec_check = {{0x404c9e71, 0x210bb7a2, 0xb92c2, 0x80020000}};
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
  // -30963370
  s21_decimal dec_1 = {{0x1d876aa, 0x0, 0x0, 0x80000000}};
  // 38589155072882282652111201230
  s21_decimal dec_2 = {{0x8293e3ce, 0x384ea080, 0x7cb03370, 0x0}};
  // 38589155072882282652080237860
  s21_decimal dec_check = {{0x80bb6d24, 0x384ea080, 0x7cb03370, 0x0}};
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
  // 96
  s21_decimal dec_1 = {{0x60, 0x0, 0x0, 0x0}};
  // -1016754258137800520676
  s21_decimal dec_2 = {{0x96c33e4, 0x1e4cc2c8, 0x37, 0x80000000}};
  // -1016754258137800520580
  s21_decimal dec_check = {{0x96c3384, 0x1e4cc2c8, 0x37, 0x80000000}};
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
  // 2515.956
  s21_decimal dec_1 = {{0x2663f4, 0x0, 0x0, 0x30000}};
  // 799565505769989711060053
  s21_decimal dec_2 = {{0x83dbdc55, 0x886d7232, 0xa950, 0x0}};
  // 799565505769989711062568.956
  s21_decimal dec_check = {{0x12fb0ffc, 0xeb861553, 0x2956294, 0x30000}};
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
  // 10640483819681582795253675
  s21_decimal dec_1 = {{0x2f1ce7ab, 0xc89f3cf8, 0x8cd35, 0x0}};
  // 432225212123575.5632725828883
  s21_decimal dec_2 = {{0x1c2fa513, 0xfe62c009, 0xdf7487c, 0xd0000}};
  // 10640483820113808007377250.563
  s21_decimal dec_check = {{0x6080e903, 0xb405bc02, 0x22619a17, 0x30000}};
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
  // 715531
  s21_decimal dec_1 = {{0xaeb0b, 0x0, 0x0, 0x0}};
  // -190268131115446.29463
  s21_decimal dec_2 = {{0x715cc8d7, 0x80cd1b7, 0x1, 0x80050000}};
  // -190268130399915.29463
  s21_decimal dec_check = {{0xc8771ff7, 0x80cd1a6, 0x1, 0x80050000}};
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
  // 3243
  s21_decimal dec_1 = {{0xcab, 0x0, 0x0, 0x0}};
  // -641121616639227843
  s21_decimal dec_2 = {{0xa99af7c3, 0x8e5b8b6, 0x0, 0x80000000}};
  // -641121616639224600
  s21_decimal dec_check = {{0xa99aeb18, 0x8e5b8b6, 0x0, 0x80000000}};
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
  // -4
  s21_decimal dec_1 = {{0x4, 0x0, 0x0, 0x80000000}};
  // -19459992.68
  s21_decimal dec_2 = {{0x73fd97a4, 0x0, 0x0, 0x80020000}};
  // -19459996.68
  s21_decimal dec_check = {{0x73fd9934, 0x0, 0x0, 0x80020000}};
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
  // -740416.65702746035623469334
  s21_decimal dec_1 = {{0xd10aa116, 0xbd8f51da, 0x3d3eee, 0x80140000}};
  // -99889466.9740
  s21_decimal dec_2 = {{0x92c30fac, 0xe8, 0x0, 0x80040000}};
  // -100629883.63102746035623469334
  s21_decimal dec_check = {{0x35b6a116, 0x3fa5634d, 0x2083e8ac, 0x80140000}};
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
  // -26275.46060551711411589
  s21_decimal dec_1 = {{0x71c8cd85, 0x7086d4bc, 0x8e, 0x80110000}};
  // 15372
  s21_decimal dec_2 = {{0x3c0c, 0x0, 0x0, 0x0}};
  // -10903.46060551711411589
  s21_decimal dec_check = {{0xb750cd85, 0x1b975d2b, 0x3b, 0x80110000}};
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
  // 32.24
  s21_decimal dec_1 = {{0xc98, 0x0, 0x0, 0x20000}};
  // -894.21996667095302
  s21_decimal dec_2 = {{0xa72c906, 0x13db0d5, 0x0, 0x800e0000}};
  // -861.97996667095302
  s21_decimal dec_check = {{0xbb14906, 0x1323c9f, 0x0, 0x800e0000}};
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
  // -0.45180142577514564836400658
  s21_decimal dec_1 = {{0x88a81e12, 0x6fd14afc, 0x255f44, 0x801a0000}};
  // -922422240412127
  s21_decimal dec_2 = {{0x29f901df, 0x346f0, 0x0, 0x80000000}};
  // -922422240412127.45180142577515
  s21_decimal dec_check = {{0x6717276b, 0x4d4f10b, 0x2a0cfab9, 0x800e0000}};
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
  // 363845374
  s21_decimal dec_1 = {{0x15afd6fe, 0x0, 0x0, 0x0}};
  // -4085339
  s21_decimal dec_2 = {{0x3e565b, 0x0, 0x0, 0x80000000}};
  // 359760035
  s21_decimal dec_check = {{0x157180a3, 0x0, 0x0, 0x0}};
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
  // -797
  s21_decimal dec_1 = {{0x31d, 0x0, 0x0, 0x80000000}};
  // -68887658
  s21_decimal dec_2 = {{0x41b246a, 0x0, 0x0, 0x80000000}};
  // -68888455
  s21_decimal dec_check = {{0x41b2787, 0x0, 0x0, 0x80000000}};
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
  // -654.28833613544
  s21_decimal dec_1 = {{0xd662b6e8, 0x3b81, 0x0, 0x800b0000}};
  // 634.5852103187111095749283
  s21_decimal dec_2 = {{0x62b2caa3, 0x54f2a345, 0x53fc9, 0x160000}};
  // -19.7031258167288904250717
  s21_decimal dec_check = {{0xa1ff755d, 0x15fe0acd, 0x29b9, 0x80160000}};
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
  // 671308361214437052692572
  s21_decimal dec_1 = {{0xc9f4b85c, 0xb2fd9465, 0x8e27, 0x0}};
  // 68838267859813709735
  s21_decimal dec_2 = {{0xd162b7a7, 0xbb52a7e5, 0x3, 0x0}};
  // 671377199482296866402307
  s21_decimal dec_check = {{0x9b577003, 0x6e503c4b, 0x8e2b, 0x0}};
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
  // -637706720433510683254378.792
  s21_decimal dec_1 = {{0xc536d128, 0x95cb23eb, 0x20f7fa6, 0x80030000}};
  // -7
  s21_decimal dec_2 = {{0x7, 0x0, 0x0, 0x80000000}};
  // -637706720433510683254385.792
  s21_decimal dec_check = {{0xc536ec80, 0x95cb23eb, 0x20f7fa6, 0x80030000}};
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
  // 97607856
  s21_decimal dec_1 = {{0x5d160b0, 0x0, 0x0, 0x0}};
  // -4411528
  s21_decimal dec_2 = {{0x435088, 0x0, 0x0, 0x80000000}};
  // 93196328
  s21_decimal dec_check = {{0x58e1028, 0x0, 0x0, 0x0}};
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
  // -54845
  s21_decimal dec_1 = {{0xd63d, 0x0, 0x0, 0x80000000}};
  // -7765119
  s21_decimal dec_2 = {{0x767c7f, 0x0, 0x0, 0x80000000}};
  // -7819964
  s21_decimal dec_check = {{0x7752bc, 0x0, 0x0, 0x80000000}};
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
  // -9991931327669
  s21_decimal dec_1 = {{0x6d8474b5, 0x916, 0x0, 0x80000000}};
  // 238552616076320402695.896
  s21_decimal dec_2 = {{0x2081e6d8, 0xf6963f7c, 0x3283, 0x30000}};
  // 238552606084389075026.896
  s21_decimal dec_check = {{0x531a03d0, 0xf672bfe0, 0x3283, 0x30000}};
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
  // 5961650708453393
  s21_decimal dec_1 = {{0xf8c09811, 0x152e16, 0x0, 0x0}};
  // 65579622011462130883896
  s21_decimal dec_2 = {{0x34545d38, 0x14142bb2, 0xde3, 0x0}};
  // 65579627973112839337289
  s21_decimal dec_check = {{0x2d14f549, 0x142959c9, 0xde3, 0x0}};
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
  // 962
  s21_decimal dec_1 = {{0x3c2, 0x0, 0x0, 0x0}};
  // -0.61
  s21_decimal dec_2 = {{0x3d, 0x0, 0x0, 0x80020000}};
  // 961.39
  s21_decimal dec_check = {{0x1778b, 0x0, 0x0, 0x20000}};
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
  // 647.1048863874722208
  s21_decimal dec_1 = {{0x1772a9a0, 0x59cdc8a8, 0x0, 0x100000}};
  // 31.67
  s21_decimal dec_2 = {{0xc5f, 0x0, 0x0, 0x20000}};
  // 678.7748863874722208
  s21_decimal dec_check = {{0xefd069a0, 0x5e32eda0, 0x0, 0x100000}};
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
  // 52771137216998739
  s21_decimal dec_1 = {{0xd8366d53, 0xbb7b11, 0x0, 0x0}};
  // -344618109011280
  s21_decimal dec_2 = {{0xa7f88550, 0x1396d, 0x0, 0x80000000}};
  // 52426519107987459
  s21_decimal dec_check = {{0x303de803, 0xba41a4, 0x0, 0x0}};
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
  // -58680253309085551465549968
  s21_decimal dec_1 = {{0x25235090, 0xe7eeaaa6, 0x308a06, 0x80000000}};
  // -9293931800422555331.4904843140
  s21_decimal dec_2 = {{0x9020a384, 0x79a1cba5, 0x2c4d9a1c, 0x800a0000}};
  // -58680262603017351888105299.490
  s21_decimal dec_check = {{0x9efede22, 0xcf813c20, 0xbd9b2cf1, 0x80030000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_301) {
  // 350
  s21_decimal dec_1 = {{0x15e, 0x0, 0x0, 0x0}};
  // -8
  s21_decimal dec_2 = {{0x8, 0x0, 0x0, 0x80000000}};
  // 342
  s21_decimal dec_check = {{0x156, 0x0, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_302) {
  // 0.0610801
  s21_decimal dec_1 = {{0x951f1, 0x0, 0x0, 0x70000}};
  // -547040547775592035426
  s21_decimal dec_2 = {{0x5b447462, 0xa7b66fdb, 0x1d, 0x80000000}};
  // -547040547775592035425.9389199
  s21_decimal dec_check = {{0xd8924b0f, 0x2b00a5cc, 0x11ad036b, 0x80070000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_303) {
  // 7.17331478192798
  s21_decimal dec_1 = {{0xbff1a29e, 0x28c68, 0x0, 0xe0000}};
  // 59.14750788631586824330
  s21_decimal dec_2 = {{0x534a608a, 0xa3a80891, 0x140, 0x140000}};
  // 66.32082266824384824330
  s21_decimal dec_check = {{0x22e1c40a, 0x86a16366, 0x167, 0x140000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_304) {
  // 3
  s21_decimal dec_1 = {{0x3, 0x0, 0x0, 0x0}};
  // -89140.1
  s21_decimal dec_2 = {{0xd9a09, 0x0, 0x0, 0x80010000}};
  // -89137.1
  s21_decimal dec_check = {{0xd99eb, 0x0, 0x0, 0x80010000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_305) {
  // 24.98734461977
  s21_decimal dec_1 = {{0xc82e1419, 0x245, 0x0, 0xb0000}};
  // -1.6333361
  s21_decimal dec_2 = {{0xf93a31, 0x0, 0x0, 0x80070000}};
  // 23.35400851977
  s21_decimal dec_check = {{0xc0bcfa09, 0x21f, 0x0, 0xb0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_306) {
  // -69784652160861.0
  s21_decimal dec_1 = {{0xe0739a2, 0x27ab0, 0x0, 0x80010000}};
  // -0.55155950126960
  s21_decimal dec_2 = {{0xfed08770, 0x3229, 0x0, 0x800e0000}};
  // -69784652160861.55155950126960
  s21_decimal dec_check = {{0x88f9c770, 0x650ec6e5, 0x168c737d, 0x800e0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_307) {
  // -34005428027
  s21_decimal dec_1 = {{0xeae1a73b, 0x7, 0x0, 0x80000000}};
  // -65810.5
  s21_decimal dec_2 = {{0xa0ab9, 0x0, 0x0, 0x80010000}};
  // -34005493837.5
  s21_decimal dec_check = {{0x2cda9307, 0x4f, 0x0, 0x80010000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_308) {
  // -1957850410290842.8255192540390
  s21_decimal dec_1 = {{0x1585e4e6, 0x1e9680dd, 0x3f42f582, 0x800d0000}};
  // 68902371517862699467626646753
  s21_decimal dec_2 = {{0xe8a20ce1, 0x7418d89d, 0xdea2b4b4, 0x0}};
  // 68902371517860741617216355910
  s21_decimal dec_check = {{0x56677e46, 0x7411e3f6, 0xdea2b4b4, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_309) {
  // 661184178748310013519132963
  s21_decimal dec_1 = {{0x3534f923, 0x268d98b1, 0x222eb32, 0x0}};
  // 22615.0276
  s21_decimal dec_2 = {{0xd7ac784, 0x0, 0x0, 0x40000}};
  // 661184178748310013519155578.03
  s21_decimal dec_check = {{0xc8d3d3ab, 0xf4fa538, 0xd5a3df97, 0x20000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_310) {
  // 1697613
  s21_decimal dec_1 = {{0x19e74d, 0x0, 0x0, 0x0}};
  // 68410534416014.251
  s21_decimal dec_2 = {{0xc2c2dbab, 0xf30b04, 0x0, 0x30000}};
  // 68410536113627.251
  s21_decimal dec_check = {{0x27f26073, 0xf30b05, 0x0, 0x30000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_311) {
  // -86.28
  s21_decimal dec_1 = {{0x21b4, 0x0, 0x0, 0x80020000}};
  // 1648215715
  s21_decimal dec_2 = {{0x623dc6a3, 0x0, 0x0, 0x0}};
  // 1648215628.72
  s21_decimal dec_check = {{0x602175f8, 0x26, 0x0, 0x20000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_312) {
  // 505168
  s21_decimal dec_1 = {{0x7b550, 0x0, 0x0, 0x0}};
  // 454787719374
  s21_decimal dec_2 = {{0xe375e0ce, 0x69, 0x0, 0x0}};
  // 454788224542
  s21_decimal dec_check = {{0xe37d961e, 0x69, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_313) {
  // -4006269.04416789973368
  s21_decimal dec_1 = {{0x6b23c978, 0xb7d0aef4, 0x15, 0x800e0000}};
  // 22610113.3
  s21_decimal dec_2 = {{0xd7a078d, 0x0, 0x0, 0x10000}};
  // 18603844.25583210026632
  s21_decimal dec_check = {{0x2c5e5688, 0xda053254, 0x64, 0xe0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_314) {
  // -92069930.9
  s21_decimal dec_1 = {{0x36e0c1ad, 0x0, 0x0, 0x80010000}};
  // 5931273783947.75
  s21_decimal dec_2 = {{0x3ab21e97, 0x21b72, 0x0, 0x20000}};
  // 5931181714016.85
  s21_decimal dec_check = {{0x15ea8dd5, 0x21b70, 0x0, 0x20000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_315) {
  // -14955120498276.76291495
  s21_decimal dec_1 = {{0x7eee01a7, 0x12661dc1, 0x51, 0x80080000}};
  // -53023825009054830889396.36285
  s21_decimal dec_2 = {{0x26ed63d, 0x576f51bc, 0x1122072b, 0x80050000}};
  // -53023825024009951387673.125765
  s21_decimal dec_check = {{0xa1476385, 0x39e47433, 0xab5447b2, 0x80060000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_316) {
  // 786994594506984964
  s21_decimal dec_1 = {{0xfdbdce04, 0xaebf769, 0x0, 0x0}};
  // 187671300809760
  s21_decimal dec_2 = {{0xa1382420, 0xaaaf, 0x0, 0x0}};
  // 787182265807794724
  s21_decimal dec_check = {{0x9ef5f224, 0xaeca219, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_317) {
  // 6377358460124.5
  s21_decimal dec_1 = {{0x71db309d, 0x3a00, 0x0, 0x10000}};
  // 91480002293734705935777023
  s21_decimal dec_2 = {{0x9b497cff, 0xdc7da709, 0x4baba4, 0x0}};
  // 91480002293741083294237147.5
  s21_decimal dec_check = {{0x82ba1293, 0x9ce8c060, 0x2f4b470, 0x10000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_318) {
  // 372
  s21_decimal dec_1 = {{0x174, 0x0, 0x0, 0x0}};
  // 479938518549835.514887
  s21_decimal dec_2 = {{0x3e2b8407, 0x47c23cc, 0x1a, 0x60000}};
  // 479938518550207.514887
  s21_decimal dec_check = {{0x5457c907, 0x47c23cc, 0x1a, 0x60000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_319) {
  // -476429831686980.0846
  s21_decimal dec_1 = {{0xad04138e, 0x421e3013, 0x0, 0x80040000}};
  // -23534586540026.20793657169
  s21_decimal dec_2 = {{0xdc1c9751, 0x3fd09107, 0x1f25d, 0x800b0000}};
  // -499964418227006.29253657169
  s21_decimal dec_check = {{0x5deb9251, 0x8ac2dcaa, 0x295b28, 0x800b0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_320) {
  // -1356499526678706834478.8
  s21_decimal dec_1 = {{0xba63f9d4, 0x5c203cb7, 0x2df, 0x80010000}};
  // -9238253749553.080505
  s21_decimal dec_2 = {{0xbf0828b9, 0x8034ded6, 0x0, 0x80060000}};
  // -1356499535916960584031.880505
  s21_decimal dec_check = {{0x8c1d4539, 0x30dab79f, 0x46211f3, 0x80060000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_321) {
  // 401063968
  s21_decimal dec_1 = {{0x17e7c020, 0x0, 0x0, 0x0}};
  // 459837800
  s21_decimal dec_2 = {{0x1b689168, 0x0, 0x0, 0x0}};
  // 860901768
  s21_decimal dec_check = {{0x33505188, 0x0, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_322) {
  // 3898945.64544414
  s21_decimal dec_1 = {{0x6704ff9e, 0x1629b, 0x0, 0x80000}};
  // -41641.013990
  s21_decimal dec_2 = {{0xb1ff72e6, 0x9, 0x0, 0x80060000}};
  // 3857304.63145414
  s21_decimal dec_check = {{0xdf3c1dc6, 0x15ed1, 0x0, 0x80000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_323) {
  // -99.124
  s21_decimal dec_1 = {{0x18334, 0x0, 0x0, 0x80030000}};
  // -3829521893744796579045184570
  s21_decimal dec_2 = {{0xf45e143a, 0xd6c52324, 0xc5fb4cd, 0x80000000}};
  // -3829521893744796579045184669.1
  s21_decimal dec_check = {{0x8bacce23, 0x63b35f71, 0x7bbd100a, 0x80010000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_324) {
  // 86936.848136088817772458228147
  s21_decimal dec_1 = {{0x183d39b3, 0xe8d49378, 0x18e879ac, 0x180000}};
  // 2518008435661918333647405167
  s21_decimal dec_2 = {{0xa54b406f, 0xd06725f9, 0x822d906, 0x0}};
  // 2518008435661918333647492103.8
  s21_decimal dec_check = {{0x74fdc84e, 0x24077bc0, 0x515c7a44, 0x10000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_325) {
  // -8909695938082161921
  s21_decimal dec_1 = {{0x620c501, 0x7ba59940, 0x0, 0x80000000}};
  // 4538407843134132929038.67
  s21_decimal dec_2 = {{0x925cdbb, 0xc21a6d85, 0x601a, 0x20000}};
  // 4529498147196050767117.67
  s21_decimal dec_check = {{0xa458d957, 0x756a9082, 0x5fea, 0x20000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_326) {
  // 8205019148740166432
  s21_decimal dec_1 = {{0x97ef8320, 0x71de1571, 0x0, 0x0}};
  // 9648112971677837
  s21_decimal dec_2 = {{0x5a6e008d, 0x2246e8, 0x0, 0x0}};
  // 8214667261711844269
  s21_decimal dec_check = {{0xf25d83ad, 0x72005c59, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_327) {
  // -6873175
  s21_decimal dec_1 = {{0x68e057, 0x0, 0x0, 0x80000000}};
  // -5931505
  s21_decimal dec_2 = {{0x5a81f1, 0x0, 0x0, 0x80000000}};
  // -12804680
  s21_decimal dec_check = {{0xc36248, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_328) {
  // -4518136404333376.958195
  s21_decimal dec_1 = {{0xeb99eef3, 0xedbd01a0, 0xf4, 0x80060000}};
  // 86294905373.715
  s21_decimal dec_2 = {{0x192e4413, 0x4e7c, 0x0, 0x30000}};
  // -4518050109428003.243195
  s21_decimal dec_check = {{0x8ee004bb, 0xec8a6cde, 0xf4, 0x80060000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_329) {
  // 8096936869.02
  s21_decimal dec_1 = {{0x85812c76, 0xbc, 0x0, 0x20000}};
  // 5.68540604730391
  s21_decimal dec_2 = {{0xacc90c17, 0x20515, 0x0, 0xe0000}};
  // 8096936874.70540604730391
  s21_decimal dec_check = {{0x1f9e6c17, 0x952f1d71, 0xab75, 0xe0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_330) {
  // 69
  s21_decimal dec_1 = {{0x45, 0x0, 0x0, 0x0}};
  // -1196110998300313182.7
  s21_decimal dec_2 = {{0x2847bfb3, 0xa5fe6628, 0x0, 0x80010000}};
  // -1196110998300313113.7
  s21_decimal dec_check = {{0x2847bd01, 0xa5fe6628, 0x0, 0x80010000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_331) {
  // 89
  s21_decimal dec_1 = {{0x59, 0x0, 0x0, 0x0}};
  // -17909234734.5
  s21_decimal dec_2 = {{0xb2bc59d1, 0x29, 0x0, 0x80010000}};
  // -17909234645.5
  s21_decimal dec_check = {{0xb2bc5657, 0x29, 0x0, 0x80010000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_332) {
  // 1013480894532378680269470
  s21_decimal dec_1 = {{0x49f29a9e, 0xe8cd3549, 0xd69c, 0x0}};
  // 43414
  s21_decimal dec_2 = {{0xa996, 0x0, 0x0, 0x0}};
  // 1013480894532378680312884
  s21_decimal dec_check = {{0x49f34434, 0xe8cd3549, 0xd69c, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_333) {
  // -3138345183873268490872
  s21_decimal dec_1 = {{0x3c24a278, 0x2149dd11, 0xaa, 0x80000000}};
  // 96892074483.6886754423821
  s21_decimal dec_2 = {{0x1efaf40d, 0x4c7fdb07, 0xcd2d, 0xd0000}};
  // -3138345183776376416388.3113246
  s21_decimal dec_check = {{0x55411b1e, 0x21400b53, 0x6567c86d, 0x80070000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_334) {
  // -572240432551.5
  s21_decimal dec_1 = {{0x59e0888b, 0x534, 0x0, 0x80010000}};
  // -7
  s21_decimal dec_2 = {{0x7, 0x0, 0x0, 0x80000000}};
  // -572240432558.5
  s21_decimal dec_check = {{0x59e088d1, 0x534, 0x0, 0x80010000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_335) {
  // -783384518324486
  s21_decimal dec_1 = {{0xebeff106, 0x2c87b, 0x0, 0x80000000}};
  // 81645.28424
  s21_decimal dec_2 = {{0xe6a4d128, 0x1, 0x0, 0x50000}};
  // -783384518242840.71576
  s21_decimal dec_check = {{0x1880f698, 0x3f2a16e1, 0x4, 0x80050000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_336) {
  // 7444934280
  s21_decimal dec_1 = {{0xbbc0ae88, 0x1, 0x0, 0x0}};
  // 5549122845969900949057692897
  s21_decimal dec_2 = {{0xaa39e4e1, 0x3fdda1dc, 0x11ee2078, 0x0}};
  // 5549122845969900956502627177
  s21_decimal dec_check = {{0x65fa9369, 0x3fdda1de, 0x11ee2078, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_337) {
  // -7941279718258
  s21_decimal dec_1 = {{0xf9281b72, 0x738, 0x0, 0x80000000}};
  // -727.70557796477
  s21_decimal dec_2 = {{0x373f607d, 0x422f, 0x0, 0x800b0000}};
  // -7941279718985.70557796477
  s21_decimal dec_check = {{0x46aab07d, 0xc37c7b6e, 0xa829, 0x800b0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_338) {
  // -2625880
  s21_decimal dec_1 = {{0x281158, 0x0, 0x0, 0x80000000}};
  // -4875.97
  s21_decimal dec_2 = {{0x770ad, 0x0, 0x0, 0x80020000}};
  // -2630755.97
  s21_decimal dec_check = {{0xfae370d, 0x0, 0x0, 0x80020000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_339) {
  // -1
  s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x80000000}};
  // -98936
  s21_decimal dec_2 = {{0x18278, 0x0, 0x0, 0x80000000}};
  // -98937
  s21_decimal dec_check = {{0x18279, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_340) {
  // 92309444089237
  s21_decimal dec_1 = {{0x779fd595, 0x53f4, 0x0, 0x0}};
  // -1
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x80000000}};
  // 92309444089236
  s21_decimal dec_check = {{0x779fd594, 0x53f4, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_341) {
  // -0.8530506782446
  s21_decimal dec_1 = {{0x29d396ee, 0x7c2, 0x0, 0x800d0000}};
  // -4184.43
  s21_decimal dec_2 = {{0x6628b, 0x0, 0x0, 0x80020000}};
  // -4185.2830506782446
  s21_decimal dec_check = {{0x77338eee, 0x94b0ed, 0x0, 0x800d0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_342) {
  // -654389925941088422988900
  s21_decimal dec_1 = {{0xb2180c64, 0x8c8928ff, 0x8a92, 0x80000000}};
  // 9196235378299290.667946593707
  s21_decimal dec_2 = {{0xce13cdab, 0xcac0fd42, 0x1db6f296, 0xc0000}};
  // -654389916744853044689609.33205
  s21_decimal dec_check = {{0xc0fb7555, 0xefd809d7, 0xd371dd7e, 0x80050000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_343) {
  // -0.917779893949525874
  s21_decimal dec_1 = {{0x70db6f72, 0xcbc9bf3, 0x0, 0x80120000}};
  // 334
  s21_decimal dec_2 = {{0x14e, 0x0, 0x0, 0x0}};
  // 333.082220106050474126
  s21_decimal dec_check = {{0xf39c908e, 0xe71c270, 0x12, 0x120000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_344) {
  // 358897468707567.933267296300
  s21_decimal dec_1 = {{0x8c4ac02c, 0xc37c4057, 0x128df7e, 0xc0000}};
  // 58193499.76383421933530
  s21_decimal dec_2 = {{0x7bafe7da, 0x77b44348, 0x13b, 0xe0000}};
  // 358897526901067.69710151563530
  s21_decimal dec_check = {{0x48e2f90a, 0xd43d657b, 0x73f74ebf, 0xe0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_345) {
  // 58371370765226520889737130957
  s21_decimal dec_1 = {{0x6b10b3cd, 0xbb13ec90, 0xbc9baa8d, 0x0}};
  // 279
  s21_decimal dec_2 = {{0x117, 0x0, 0x0, 0x0}};
  // 58371370765226520889737131236
  s21_decimal dec_check = {{0x6b10b4e4, 0xbb13ec90, 0xbc9baa8d, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_346) {
  // 75736445999368943553791.6
  s21_decimal dec_1 = {{0x1b0a01fc, 0xcf44db60, 0xa060, 0x10000}};
  // 884854928675469.1006245
  s21_decimal dec_2 = {{0x156f3f25, 0xae4a16ae, 0x1df, 0x70000}};
  // 75736446884223872229260.700624
  s21_decimal dec_check = {{0xf438abd0, 0x6911bab9, 0xf4b7b874, 0x60000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_347) {
  // 0.181
  s21_decimal dec_1 = {{0xb5, 0x0, 0x0, 0x30000}};
  // -72.9
  s21_decimal dec_2 = {{0x2d9, 0x0, 0x0, 0x80010000}};
  // -72.719
  s21_decimal dec_check = {{0x11c0f, 0x0, 0x0, 0x80030000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_348) {
  // 7450
  s21_decimal dec_1 = {{0x1d1a, 0x0, 0x0, 0x0}};
  // -27959008770916636
  s21_decimal dec_2 = {{0x210011c, 0x635492, 0x0, 0x80000000}};
  // -27959008770909186
  s21_decimal dec_check = {{0x20fe402, 0x635492, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_349) {
  // -1077767861911
  s21_decimal dec_1 = {{0xeff87697, 0xfa, 0x0, 0x80000000}};
  // 6516737059017.056649051
  s21_decimal dec_2 = {{0xf778ff5b, 0x45e4e405, 0x161, 0x90000}};
  // 5438969197106.056649051
  s21_decimal dec_check = {{0xc60fd95b, 0xd8dc43df, 0x126, 0x90000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_350) {
  // 16
  s21_decimal dec_1 = {{0x10, 0x0, 0x0, 0x0}};
  // -1094507753893.1
  s21_decimal dec_2 = {{0x59757073, 0x9f4, 0x0, 0x80010000}};
  // -1094507753877.1
  s21_decimal dec_check = {{0x59756fd3, 0x9f4, 0x0, 0x80010000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_351) {
  // 39630716583407402118
  s21_decimal dec_1 = {{0x942e3c86, 0x25fc96c2, 0x2, 0x0}};
  // -0.1491808898977564
  s21_decimal dec_2 = {{0xd37f0f1c, 0x54cca, 0x0, 0x80100000}};
  // 39630716583407402117.850819110
  s21_decimal dec_check = {{0xbd796a26, 0xd82954af, 0x800dc2aa, 0x90000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_352) {
  // 0.16521856769053656
  s21_decimal dec_1 = {{0x8bbfd3d8, 0x3ab28a, 0x0, 0x110000}};
  // 4.7
  s21_decimal dec_2 = {{0x2f, 0x0, 0x0, 0x10000}};
  // 4.86521856769053656
  s21_decimal dec_check = {{0x102ed3d8, 0x6c0790d, 0x0, 0x110000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_353) {
  // 81.51605
  s21_decimal dec_1 = {{0x7c6235, 0x0, 0x0, 0x50000}};
  // 53
  s21_decimal dec_2 = {{0x35, 0x0, 0x0, 0x0}};
  // 134.51605
  s21_decimal dec_check = {{0xcd4155, 0x0, 0x0, 0x50000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_354) {
  // -87618775364340665882
  s21_decimal dec_1 = {{0x3e45ce1a, 0xbff46bf8, 0x4, 0x80000000}};
  // -8219603560964027196.20361016
  s21_decimal dec_2 = {{0x366a6b38, 0x30576bb0, 0x2a7e8e0, 0x80080000}};
  // -95838378925304693078.20361016
  s21_decimal dec_check = {{0x51714538, 0x31079040, 0x1ef7909d, 0x80080000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_355) {
  // -5622345507.535299880
  s21_decimal dec_1 = {{0x5d27a528, 0x4e069573, 0x0, 0x80090000}};
  // -1.19249
  s21_decimal dec_2 = {{0x1d1d1, 0x0, 0x0, 0x80050000}};
  // -5622345508.727789880
  s21_decimal dec_check = {{0xa43b9938, 0x4e069573, 0x0, 0x80090000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_356) {
  // -85348157566688.48195714274
  s21_decimal dec_1 = {{0x466b3ce2, 0x4a0cc26c, 0x70f51, 0x800b0000}};
  // 745622.50388970
  s21_decimal dec_2 = {{0x6072b5ea, 0x43d0, 0x0, 0x80000}};
  // -85348156821065.97806744274
  s21_decimal dec_check = {{0x8654a2d2, 0x4903dc73, 0x70f51, 0x800b0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_357) {
  // -32672701100322968018
  s21_decimal dec_1 = {{0x1943d1d2, 0xc56cc08b, 0x1, 0x80000000}};
  // -5958431.6
  s21_decimal dec_2 = {{0x38d2f3c, 0x0, 0x0, 0x80010000}};
  // -32672701100328926449.6
  s21_decimal dec_check = {{0x336170, 0xb63f856f, 0x11, 0x80010000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_358) {
  // -7189309798442126
  s21_decimal dec_1 = {{0xa0b7648e, 0x198aa3, 0x0, 0x80000000}};
  // -4974947818187524
  s21_decimal dec_2 = {{0x4d7aab04, 0x11acb0, 0x0, 0x80000000}};
  // -12164257616629650
  s21_decimal dec_check = {{0xee320f92, 0x2b3753, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_359) {
  // 635
  s21_decimal dec_1 = {{0x27b, 0x0, 0x0, 0x0}};
  // -27.24484977445839318048725
  s21_decimal dec_2 = {{0x3f4c5fd5, 0xa0670eed, 0x240ee, 0x80170000}};
  // 607.75515022554160681951275
  s21_decimal dec_check = {{0x3033a02b, 0x4564c604, 0x3245b7, 0x170000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_360) {
  // -56288768.6646
  s21_decimal dec_1 = {{0xeb879f6, 0x83, 0x0, 0x80040000}};
  // -0.51
  s21_decimal dec_2 = {{0x33, 0x0, 0x0, 0x80020000}};
  // -56288769.1746
  s21_decimal dec_check = {{0xeb88de2, 0x83, 0x0, 0x80040000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_361) {
  // 7837409247086179
  s21_decimal dec_1 = {{0xa21c663, 0x1bd815, 0x0, 0x0}};
  // 905.2
  s21_decimal dec_2 = {{0x235c, 0x0, 0x0, 0x10000}};
  // 7837409247087084.2
  s21_decimal dec_check = {{0x6551e33a, 0x11670d2, 0x0, 0x10000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_362) {
  // -98451091618002007179174686
  s21_decimal dec_1 = {{0x72d0a31e, 0x5eec1df8, 0x516fd4, 0x80000000}};
  // -287689881443275730.3428438537
  s21_decimal dec_2 = {{0x6a06da09, 0x3b40336b, 0x94bb705, 0x800a0000}};
  // -98451091905691888622450416.343
  s21_decimal dec_check = {{0xa3ae9ad7, 0x62d4d96d, 0x3e1cd5a2, 0x80030000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_363) {
  // 0.806
  s21_decimal dec_1 = {{0x326, 0x0, 0x0, 0x30000}};
  // 546109730
  s21_decimal dec_2 = {{0x208cf922, 0x0, 0x0, 0x0}};
  // 546109730.806
  s21_decimal dec_check = {{0x26ad2ff6, 0x7f, 0x0, 0x30000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_364) {
  // 785.0288595055
  s21_decimal dec_1 = {{0xc9a9c06f, 0x723, 0x0, 0xa0000}};
  // -51.977
  s21_decimal dec_2 = {{0xcb09, 0x0, 0x0, 0x80030000}};
  // 733.0518595055
  s21_decimal dec_check = {{0xc4f4f5ef, 0x6aa, 0x0, 0xa0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_365) {
  // -2403.36336313502994197
  s21_decimal dec_1 = {{0x49290f15, 0x7563085, 0xd, 0x80110000}};
  // 25093.47
  s21_decimal dec_2 = {{0x264a23, 0x0, 0x0, 0x20000}};
  // 22690.10663686497005803
  s21_decimal dec_check = {{0x9efa70eb, 0xd938e3, 0x7b, 0x110000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_366) {
  // -927376763
  s21_decimal dec_1 = {{0x3746a57b, 0x0, 0x0, 0x80000000}};
  // 295795677
  s21_decimal dec_2 = {{0x11a17bdd, 0x0, 0x0, 0x0}};
  // -631581086
  s21_decimal dec_check = {{0x25a5299e, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_367) {
  // 82.7286202208
  s21_decimal dec_1 = {{0x9e19a760, 0xc0, 0x0, 0xa0000}};
  // -1453162016151045692951134709
  s21_decimal dec_2 = {{0xdb481f5, 0xbe85226e, 0x4b20706, 0x80000000}};
  // -1453162016151045692951134626.3
  s21_decimal dec_check = {{0x890d1057, 0x7133584c, 0x2ef44643, 0x80010000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_368) {
  // -953365119
  s21_decimal dec_1 = {{0x38d3327f, 0x0, 0x0, 0x80000000}};
  // 9114333422.62226978062
  s21_decimal dec_2 = {{0x8310050e, 0x68adb3ce, 0x31, 0xb0000}};
  // 8160968303.62226978062
  s21_decimal dec_check = {{0x1ec2ed0e, 0x3d9e5f59, 0x2c, 0xb0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_369) {
  // 880321902774029
  s21_decimal dec_1 = {{0xea4d870d, 0x320a5, 0x0, 0x0}};
  // -80887739307216115
  s21_decimal dec_2 = {{0x68174cf3, 0x11f5ef8, 0x0, 0x80000000}};
  // -80007417404442086
  s21_decimal dec_check = {{0x7dc9c5e6, 0x11c3e52, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_370) {
  // -449.8335608517257
  s21_decimal dec_1 = {{0x6006b289, 0xffb36, 0x0, 0x800d0000}};
  // -1659274
  s21_decimal dec_2 = {{0x19518a, 0x0, 0x0, 0x80000000}};
  // -1659723.8335608517257
  s21_decimal dec_check = {{0x8e70f289, 0xe6553c54, 0x0, 0x800d0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_371) {
  // -712968945731603855.896788170
  s21_decimal dec_1 = {{0x282cbcca, 0xfe6ca41b, 0x24dc10b, 0x80090000}};
  // -3494094587.384069
  s21_decimal dec_2 = {{0x4ab15105, 0xc69dc, 0x0, 0x80060000}};
  // -712968949225698443.280857170
  s21_decimal dec_check = {{0xecd13852, 0x2eea289e, 0x24dc10c, 0x80090000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_372) {
  // 2264593635795652520877
  s21_decimal dec_1 = {{0xc2332bad, 0xc38cc96c, 0x7a, 0x0}};
  // 0.0517798
  s21_decimal dec_2 = {{0x7e6a6, 0x0, 0x0, 0x70000}};
  // 2264593635795652520877.0517798
  s21_decimal dec_check = {{0x3ed1b26, 0xdcfdbe8d, 0x492c478d, 0x70000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_373) {
  // -801085616938706.56163
  s21_decimal dec_1 = {{0x5ea00aa3, 0x57bac86d, 0x4, 0x80050000}};
  // -0.68844144074
  s21_decimal dec_2 = {{0x76e45ca, 0x10, 0x0, 0x800b0000}};
  // -801085616938707.25007144074
  s21_decimal dec_check = {{0x91bbf48a, 0xd4c6d92d, 0x4243a5, 0x800b0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_374) {
  // -53119142048975625994500602155
  s21_decimal dec_1 = {{0x258792b, 0x80d6932f, 0xaba31fdc, 0x80000000}};
  // -48399240047952073
  s21_decimal dec_2 = {{0x367500c9, 0xabf2da, 0x0, 0x80000000}};
  // -53119142049024025234548554228
  s21_decimal dec_check = {{0x38cd79f4, 0x81828609, 0xaba31fdc, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_375) {
  // 73322863210.6339
  s21_decimal dec_1 = {{0x1827e563, 0x29ade, 0x0, 0x40000}};
  // -138.4800
  s21_decimal dec_2 = {{0x152160, 0x0, 0x0, 0x80040000}};
  // 73322863072.1539
  s21_decimal dec_check = {{0x1812c403, 0x29ade, 0x0, 0x40000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_376) {
  // 5981431711.047112397152310973
  s21_decimal dec_1 = {{0xf3e3d6bd, 0xc8d8295b, 0x1353b96e, 0x120000}};
  // -42019.587180962807
  s21_decimal dec_2 = {{0x8787a3f7, 0x954897, 0x0, 0x800c0000}};
  // 5981389691.459931434345310973
  s21_decimal dec_check = {{0x7e3c2afd, 0xe5ee0196, 0x1353b088, 0x120000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_377) {
  // 4755
  s21_decimal dec_1 = {{0x1293, 0x0, 0x0, 0x0}};
  // 56415249
  s21_decimal dec_2 = {{0x35cd411, 0x0, 0x0, 0x0}};
  // 56420004
  s21_decimal dec_check = {{0x35ce6a4, 0x0, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_378) {
  // -922146572435457
  s21_decimal dec_1 = {{0xfae18001, 0x346af, 0x0, 0x80000000}};
  // 636
  s21_decimal dec_2 = {{0x27c, 0x0, 0x0, 0x0}};
  // -922146572434821
  s21_decimal dec_check = {{0xfae17d85, 0x346af, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_379) {
  // -9925557210464890924
  s21_decimal dec_1 = {{0xef93b02c, 0x89bea9b1, 0x0, 0x80000000}};
  // -77335024599.910
  s21_decimal dec_2 = {{0xf6ab8366, 0x4655, 0x0, 0x80030000}};
  // -9925557287799915523.910
  s21_decimal dec_check = {{0xcf93af46, 0x10c72565, 0x21a, 0x80030000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_380) {
  // -212439945967660
  s21_decimal dec_1 = {{0x8783f82c, 0xc136, 0x0, 0x80000000}};
  // 9456
  s21_decimal dec_2 = {{0x24f0, 0x0, 0x0, 0x0}};
  // -212439945958204
  s21_decimal dec_check = {{0x8783d33c, 0xc136, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_381) {
  // 29980474416087225286.9
  s21_decimal dec_1 = {{0x75a845c5, 0x40a06a61, 0x10, 0x10000}};
  // -675006631295774214776972
  s21_decimal dec_2 = {{0x5e7ee88c, 0x2ecc4919, 0x8ef0, 0x80000000}};
  // -674976650821358127551685.1
  s21_decimal dec_check = {{0x3b4ccfb3, 0x935a709c, 0x59551, 0x80010000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_382) {
  // -6174.702
  s21_decimal dec_1 = {{0x5e37ee, 0x0, 0x0, 0x80030000}};
  // 7238526262741668589062473025
  s21_decimal dec_2 = {{0xbb3a4541, 0xfb9efea9, 0x1763918e, 0x0}};
  // 7238526262741668589062466850.3
  s21_decimal dec_check = {{0x5045c357, 0xd435f2a1, 0xe9e3af95, 0x10000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_383) {
  // 2427991137
  s21_decimal dec_1 = {{0x90b83461, 0x0, 0x0, 0x0}};
  // -45024217460735489699772170
  s21_decimal dec_2 = {{0xaebc770a, 0xb8220b17, 0x253e3f, 0x80000000}};
  // -45024217460735487271781033
  s21_decimal dec_check = {{0x1e0442a9, 0xb8220b17, 0x253e3f, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_384) {
  // -568462791
  s21_decimal dec_1 = {{0x21e20dc7, 0x0, 0x0, 0x80000000}};
  // 6608
  s21_decimal dec_2 = {{0x19d0, 0x0, 0x0, 0x0}};
  // -568456183
  s21_decimal dec_check = {{0x21e1f3f7, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_385) {
  // 98404641.02292
  s21_decimal dec_1 = {{0x295e0394, 0x8f3, 0x0, 0x50000}};
  // 79228162514264337591874573372
  s21_decimal dec_2 = {{0x9c7f543c, 0xffffffff, 0xffffffff, 0x0}};
  // 79228162514264337591972978013
  s21_decimal dec_check = {{0xa25cdd5d, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_386) {
  // -4851283703542080175042
  s21_decimal dec_1 = {{0x3b217bc2, 0xfd15f92b, 0x106, 0x80000000}};
  // 6.7601291
  s21_decimal dec_2 = {{0x407838b, 0x0, 0x0, 0x70000}};
  // -4851283703542080175035.2398709
  s21_decimal dec_check = {{0xa66a0975, 0x5ca70624, 0x9cc0e0d5, 0x80070000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_387) {
  // -11214.78776328307
  s21_decimal dec_1 = {{0xa0161073, 0x3fbfa, 0x0, 0x800b0000}};
  // -481.4257358
  s21_decimal dec_2 = {{0x1ef3bcce, 0x1, 0x0, 0x80070000}};
  // -11696.21349908307
  s21_decimal dec_check = {{0xb1153f53, 0x427c3, 0x0, 0x800b0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_388) {
  // 0.7
  s21_decimal dec_1 = {{0x7, 0x0, 0x0, 0x10000}};
  // 865496665069570
  s21_decimal dec_2 = {{0x25469802, 0x3132a, 0x0, 0x0}};
  // 865496665069570.7
  s21_decimal dec_check = {{0x74c1f01b, 0x1ebfa5, 0x0, 0x10000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_389) {
  // -342487552344741871883921
  s21_decimal dec_1 = {{0x9dd01691, 0x499408b8, 0x4886, 0x80000000}};
  // 703
  s21_decimal dec_2 = {{0x2bf, 0x0, 0x0, 0x0}};
  // -342487552344741871883218
  s21_decimal dec_check = {{0x9dd013d2, 0x499408b8, 0x4886, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_390) {
  // 7582287.06
  s21_decimal dec_1 = {{0x2d31a6e2, 0x0, 0x0, 0x20000}};
  // -5566946590.317216992269
  s21_decimal dec_2 = {{0x45c30c0d, 0xc8e74cf2, 0x12d, 0x800c0000}};
  // -5559364303.257216992269
  s21_decimal dec_check = {{0xb96bc40d, 0x5fad9b09, 0x12d, 0x800c0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_391) {
  // -73016369129499027592.538386869
  s21_decimal dec_1 = {{0x86271b5, 0xdc3dd1e9, 0xebedb995, 0x80090000}};
  // -84480
  s21_decimal dec_2 = {{0x14a00, 0x0, 0x0, 0x80000000}};
  // -73016369129499112072.538386869
  s21_decimal dec_check = {{0x90c671b5, 0xdc3e1ebe, 0xebedb995, 0x80090000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_392) {
  // 41085127093619522349679053
  s21_decimal dec_1 = {{0x646dc1cd, 0x33dcc257, 0x21fc1d, 0x0}};
  // 5.5438
  s21_decimal dec_2 = {{0xd88e, 0x0, 0x0, 0x40000}};
  // 41085127093619522349679058.544
  s21_decimal dec_check = {{0x4cbd1e70, 0x96572560, 0x84c0d212, 0x30000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_393) {
  // -9063950019595771
  s21_decimal dec_1 = {{0x512e0dfb, 0x20339d, 0x0, 0x80000000}};
  // -728210235380930208
  s21_decimal dec_2 = {{0xd1af16a0, 0xa1b1f59, 0x0, 0x80000000}};
  // -737274185400525979
  s21_decimal dec_check = {{0x22dd249b, 0xa3b52f7, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_394) {
  // -297266
  s21_decimal dec_1 = {{0x48932, 0x0, 0x0, 0x80000000}};
  // 13012483891
  s21_decimal dec_2 = {{0x79abf33, 0x3, 0x0, 0x0}};
  // 13012186625
  s21_decimal dec_check = {{0x7963601, 0x3, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_395) {
  // 767718
  s21_decimal dec_1 = {{0xbb6e6, 0x0, 0x0, 0x0}};
  // 4770172197292461943355198
  s21_decimal dec_2 = {{0x7f6ef73e, 0x8d8f8e05, 0x3f21f, 0x0}};
  // 4770172197292461944122916
  s21_decimal dec_check = {{0x7f7aae24, 0x8d8f8e05, 0x3f21f, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_396) {
  // 754318556922008252493817
  s21_decimal dec_1 = {{0x46f4aff9, 0xb0df5991, 0x9fbb, 0x0}};
  // 981270024403092102443
  s21_decimal dec_2 = {{0x531dd2b, 0x31db7034, 0x35, 0x0}};
  // 755299826946411344596260
  s21_decimal dec_check = {{0x4c268d24, 0xe2bac9c5, 0x9ff0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_397) {
  // -3
  s21_decimal dec_1 = {{0x3, 0x0, 0x0, 0x80000000}};
  // -41023408611401237682075
  s21_decimal dec_2 = {{0x3f8e579b, 0xe228ecbc, 0x8af, 0x80000000}};
  // -41023408611401237682078
  s21_decimal dec_check = {{0x3f8e579e, 0xe228ecbc, 0x8af, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_398) {
  // 79194228293036546265
  s21_decimal dec_1 = {{0x23a218d9, 0x4b0a6b0b, 0x4, 0x0}};
  // -214132034447217500.6936137933
  s21_decimal dec_2 = {{0x7b9f00cd, 0x792418c5, 0x6eb4238, 0x800a0000}};
  // 78980096258589328764.306386207
  s21_decimal dec_check = {{0xb72eed1f, 0x557692e0, 0xff32cded, 0x90000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_399) {
  // -202765774853
  s21_decimal dec_1 = {{0x35c83005, 0x2f, 0x0, 0x80000000}};
  // 532.19
  s21_decimal dec_2 = {{0xcfe3, 0x0, 0x0, 0x20000}};
  // -202765774320.81
  s21_decimal dec_check = {{0x231f211, 0x1271, 0x0, 0x80020000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_400) {
  // 72985925
  s21_decimal dec_1 = {{0x459ad45, 0x0, 0x0, 0x0}};
  // 4299621935348
  s21_decimal dec_2 = {{0x157028f4, 0x3e9, 0x0, 0x0}};
  // 4299694921273
  s21_decimal dec_check = {{0x19c9d639, 0x3e9, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_401) {
  // 132237981336513
  s21_decimal dec_1 = {{0xde743c1, 0x7845, 0x0, 0x0}};
  // 59
  s21_decimal dec_2 = {{0x3b, 0x0, 0x0, 0x0}};
  // 132237981336572
  s21_decimal dec_check = {{0xde743fc, 0x7845, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_402) {
  // 7875225856824989687
  s21_decimal dec_1 = {{0x2a0657f7, 0x6d4a6c31, 0x0, 0x0}};
  // 1511966965.757041
  s21_decimal dec_2 = {{0x3de7f471, 0x55f20, 0x0, 0x60000}};
  // 7875225858336956652.757041
  s21_decimal dec_check = {{0x89a4a031, 0xd9668e9f, 0x683a4, 0x60000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_403) {
  // 84641866
  s21_decimal dec_1 = {{0x50b884a, 0x0, 0x0, 0x0}};
  // -5861947682875674081
  s21_decimal dec_2 = {{0x11ba8de1, 0x5159d25c, 0x0, 0x80000000}};
  // -5861947682791032215
  s21_decimal dec_check = {{0xcaf0597, 0x5159d25c, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_404) {
  // 73839124857
  s21_decimal dec_1 = {{0x3127a179, 0x11, 0x0, 0x0}};
  // -0.28116351
  s21_decimal dec_2 = {{0x1ad057f, 0x0, 0x0, 0x80080000}};
  // 73839124856.71883649
  s21_decimal dec_check = {{0xb90b5381, 0x6678ed48, 0x0, 0x80000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_405) {
  // -54816539286517.12649435
  s21_decimal dec_1 = {{0xbdcc58db, 0x293ae50f, 0x129, 0x80080000}};
  // -78214423018317756
  s21_decimal dec_2 = {{0x7451a7bc, 0x115df9a, 0x0, 0x80000000}};
  // -78269239557604273.12649435
  s21_decimal dec_check = {{0xb52494db, 0x65d88fb7, 0x6796a, 0x80080000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_406) {
  // 4163.5
  s21_decimal dec_1 = {{0xa2a3, 0x0, 0x0, 0x10000}};
  // -2.98
  s21_decimal dec_2 = {{0x12a, 0x0, 0x0, 0x80020000}};
  // 4160.52
  s21_decimal dec_check = {{0x65934, 0x0, 0x0, 0x20000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_407) {
  // -929409867864.8331774151147413
  s21_decimal dec_1 = {{0xe0f8bf95, 0xef2b96e7, 0x1e07e5f2, 0x80100000}};
  // 6963926551804249728355
  s21_decimal dec_2 = {{0xdb396563, 0x83e51e66, 0x179, 0x0}};
  // 6963926550874839860490.1668226
  s21_decimal dec_check = {{0xe89fd582, 0xbe765c73, 0xe1044013, 0x70000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_408) {
  // -1.9
  s21_decimal dec_1 = {{0x13, 0x0, 0x0, 0x80010000}};
  // 304554107682141.0
  s21_decimal dec_2 = {{0x4a0865a2, 0xad1e7, 0x0, 0x10000}};
  // 304554107682139.1
  s21_decimal dec_check = {{0x4a08658f, 0xad1e7, 0x0, 0x10000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_409) {
  // 447716354638602770783713761
  s21_decimal dec_1 = {{0x67ecb9e1, 0x37c3429a, 0x17257a0, 0x0}};
  // -1990284
  s21_decimal dec_2 = {{0x1e5e8c, 0x0, 0x0, 0x80000000}};
  // 447716354638602770781723477
  s21_decimal dec_check = {{0x67ce5b55, 0x37c3429a, 0x17257a0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_410) {
  // -9034864
  s21_decimal dec_1 = {{0x89dc70, 0x0, 0x0, 0x80000000}};
  // 58356014258138
  s21_decimal dec_2 = {{0x118017da, 0x3513, 0x0, 0x0}};
  // 58356005223274
  s21_decimal dec_check = {{0x10f63b6a, 0x3513, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_411) {
  // 346137880.9661222279684719
  s21_decimal dec_1 = {{0x792ba26f, 0xb8a497f7, 0x2dcf9, 0x100000}};
  // 597345077756257
  s21_decimal dec_2 = {{0x3d2b0161, 0x21f48, 0x0, 0x0}};
  // 597345423894137.96612222796847
  s21_decimal dec_check = {{0x5880c42f, 0x8d2ec11b, 0xc103415f, 0xe0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_412) {
  // 8
  s21_decimal dec_1 = {{0x8, 0x0, 0x0, 0x0}};
  // -5624150963335.7697945582327271
  s21_decimal dec_2 = {{0xc2b655e7, 0x6ae40a0e, 0xb5b9e2ea, 0x80100000}};
  // -5624150963327.7697945582327271
  s21_decimal dec_check = {{0x44ae55e7, 0x69c7d27b, 0xb5b9e2ea, 0x80100000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_413) {
  // 98653440350426484589859
  s21_decimal dec_1 = {{0x6ea24523, 0x382fe62, 0x14e4, 0x0}};
  // -481767
  s21_decimal dec_2 = {{0x759e7, 0x0, 0x0, 0x80000000}};
  // 98653440350426484108092
  s21_decimal dec_check = {{0x6e9aeb3c, 0x382fe62, 0x14e4, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_414) {
  // -49
  s21_decimal dec_1 = {{0x31, 0x0, 0x0, 0x80000000}};
  // 91169.0490482953414
  s21_decimal dec_2 = {{0xb6568cc6, 0xca6f9ab, 0x0, 0xd0000}};
  // 91120.0490482953414
  s21_decimal dec_check = {{0xb265ecc6, 0xca53c04, 0x0, 0xd0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_415) {
  // -65073.13
  s21_decimal dec_1 = {{0x634b31, 0x0, 0x0, 0x80020000}};
  // -0.2290085973
  s21_decimal dec_2 = {{0x887ff055, 0x0, 0x0, 0x800a0000}};
  // -65073.3590085973
  s21_decimal dec_check = {{0xb87b0155, 0x24fd6, 0x0, 0x800a0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_416) {
  // 67531
  s21_decimal dec_1 = {{0x107cb, 0x0, 0x0, 0x0}};
  // 23098920665148576728117
  s21_decimal dec_2 = {{0x36a78435, 0x31eb69a0, 0x4e4, 0x0}};
  // 23098920665148576795648
  s21_decimal dec_check = {{0x36a88c00, 0x31eb69a0, 0x4e4, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_417) {
  // 995
  s21_decimal dec_1 = {{0x3e3, 0x0, 0x0, 0x0}};
  // 351
  s21_decimal dec_2 = {{0x15f, 0x0, 0x0, 0x0}};
  // 1346
  s21_decimal dec_check = {{0x542, 0x0, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_418) {
  // 929432112137349646
  s21_decimal dec_1 = {{0xe6c9aa0e, 0xce60194, 0x0, 0x0}};
  // 6918156142596934
  s21_decimal dec_2 = {{0xbf615346, 0x189406, 0x0, 0x0}};
  // 936350268279946580
  s21_decimal dec_check = {{0xa62afd54, 0xcfe959b, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_419) {
  // -315563680392604452312674
  s21_decimal dec_1 = {{0x17fad662, 0xbdcbdd0a, 0x42d2, 0x80000000}};
  // -0.9630022
  s21_decimal dec_2 = {{0x92f146, 0x0, 0x0, 0x80070000}};
  // -315563680392604452312674.96300
  s21_decimal dec_check = {{0x1f60c16c, 0x322786d7, 0x65f6d0db, 0x80050000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_420) {
  // -723
  s21_decimal dec_1 = {{0x2d3, 0x0, 0x0, 0x80000000}};
  // -381
  s21_decimal dec_2 = {{0x17d, 0x0, 0x0, 0x80000000}};
  // -1104
  s21_decimal dec_check = {{0x450, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_421) {
  // -792646910784212
  s21_decimal dec_1 = {{0x7d8cb2d4, 0x2d0e8, 0x0, 0x80000000}};
  // 0.6082178
  s21_decimal dec_2 = {{0x5cce82, 0x0, 0x0, 0x70000}};
  // -792646910784211.3917822
  s21_decimal dec_check = {{0x64a4d37e, 0xb1db3959, 0x1ad, 0x80070000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_422) {
  // -47560533.925967
  s21_decimal dec_1 = {{0x8cbae04f, 0x2b41, 0x0, 0x80060000}};
  // -3513
  s21_decimal dec_2 = {{0xdb9, 0x0, 0x0, 0x80000000}};
  // -47564046.925967
  s21_decimal dec_check = {{0x5e1f008f, 0x2b42, 0x0, 0x80060000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_423) {
  // 7313019.71712877716031649841
  s21_decimal dec_1 = {{0xddc7b831, 0x52de1e1e, 0x25ceb37, 0x140000}};
  // 366971.47755
  s21_decimal dec_2 = {{0x8b52096b, 0x8, 0x0, 0x50000}};
  // 7679991.19467877716031649841
  s21_decimal dec_check = {{0xb73f3831, 0xb09044ed, 0x27b4623, 0x140000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_424) {
  // 0
  s21_decimal dec_1 = {{0x0, 0x0, 0x0, 0x0}};
  // 5409950139415651980
  s21_decimal dec_2 = {{0x1871e68c, 0x4b1400fd, 0x0, 0x0}};
  // 5409950139415651980
  s21_decimal dec_check = {{0x1871e68c, 0x4b1400fd, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_425) {
  // 7649614109
  s21_decimal dec_1 = {{0xc7f3d91d, 0x1, 0x0, 0x0}};
  // -18792
  s21_decimal dec_2 = {{0x4968, 0x0, 0x0, 0x80000000}};
  // 7649595317
  s21_decimal dec_check = {{0xc7f38fb5, 0x1, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_426) {
  // 125.46512910205303257572747679
  s21_decimal dec_1 = {{0x2252a99f, 0xb7d57640, 0x288a3b73, 0x1a0000}};
  // 6.84803031208241484723687437
  s21_decimal dec_2 = {{0xad70900d, 0xb54190db, 0x23674ae, 0x1a0000}};
  // 132.31315941413544742296435116
  s21_decimal dec_check = {{0xcfc339ac, 0x6d17071b, 0x2ac0b022, 0x1a0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_427) {
  // 26.84
  s21_decimal dec_1 = {{0xa7c, 0x0, 0x0, 0x20000}};
  // 298
  s21_decimal dec_2 = {{0x12a, 0x0, 0x0, 0x0}};
  // 324.84
  s21_decimal dec_check = {{0x7ee4, 0x0, 0x0, 0x20000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_428) {
  // -0.4
  s21_decimal dec_1 = {{0x4, 0x0, 0x0, 0x80010000}};
  // 2707199830351511882128
  s21_decimal dec_2 = {{0x63a10990, 0xc1f1de58, 0x92, 0x0}};
  // 2707199830351511882127.6
  s21_decimal dec_check = {{0xe44a5f9c, 0x9372af73, 0x5bb, 0x10000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_429) {
  // -5623878923284345454342400345
  s21_decimal dec_1 = {{0x8cdf6959, 0x522e2088, 0x122bf6af, 0x80000000}};
  // 759262283
  s21_decimal dec_2 = {{0x2d416c4b, 0x0, 0x0, 0x0}};
  // -5623878923284345453583138062
  s21_decimal dec_check = {{0x5f9dfd0e, 0x522e2088, 0x122bf6af, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_430) {
  // -79228162514264337592484414213
  s21_decimal dec_1 = {{0xc0d8c305, 0xffffffff, 0xffffffff, 0x80000000}};
  // 19773506079576988
  s21_decimal dec_2 = {{0x25d6539c, 0x463fe6, 0x0, 0x0}};
  // -79228162514244564086404837225
  s21_decimal dec_check = {{0x9b026f69, 0xffb9c019, 0xffffffff, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_431) {
  // 83062999
  s21_decimal dec_1 = {{0x4f370d7, 0x0, 0x0, 0x0}};
  // 574886969609502079615266
  s21_decimal dec_2 = {{0xf5248122, 0xaf60b222, 0x79bc, 0x0}};
  // 574886969609502162678265
  s21_decimal dec_check = {{0xfa17f1f9, 0xaf60b222, 0x79bc, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_432) {
  // 92391.8551
  s21_decimal dec_1 = {{0x3711e0d7, 0x0, 0x0, 0x40000}};
  // -1
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x80000000}};
  // 92390.8551
  s21_decimal dec_check = {{0x3711b9c7, 0x0, 0x0, 0x40000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_433) {
  // -8147966973609394.552
  s21_decimal dec_1 = {{0xef9a4178, 0x711364ca, 0x0, 0x80030000}};
  // -9453083367694467487.9
  s21_decimal dec_2 = {{0x23d2103f, 0x1fe0fc62, 0x5, 0x80010000}};
  // -9461231334668076882.452
  s21_decimal dec_check = {{0xeda89a14, 0xe4f5fb20, 0x200, 0x80030000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_434) {
  // -210180
  s21_decimal dec_1 = {{0x33504, 0x0, 0x0, 0x80000000}};
  // 6879274570.35484492
  s21_decimal dec_2 = {{0x9bd67d4c, 0x98c0260, 0x0, 0x80000}};
  // 6879064390.35484492
  s21_decimal dec_check = {{0xf969f94c, 0x98bef42, 0x0, 0x80000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_435) {
  // -6717564
  s21_decimal dec_1 = {{0x66807c, 0x0, 0x0, 0x80000000}};
  // -9
  s21_decimal dec_2 = {{0x9, 0x0, 0x0, 0x80000000}};
  // -6717573
  s21_decimal dec_check = {{0x668085, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_436) {
  // -26754.12
  s21_decimal dec_1 = {{0x28d2d4, 0x0, 0x0, 0x80020000}};
  // 92482265831960103124
  s21_decimal dec_2 = {{0x393a48d4, 0x37302c8, 0x5, 0x0}};
  // 92482265831960076369.88
  s21_decimal dec_check = {{0x5a9b9ffc, 0x58ed1636, 0x1f5, 0x20000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_437) {
  // -694594839725154005631
  s21_decimal dec_1 = {{0xdd30727f, 0xa770969b, 0x25, 0x80000000}};
  // 1980619007899019
  s21_decimal dec_2 = {{0xcc66b58b, 0x7095c, 0x0, 0x0}};
  // -694592859106146106612
  s21_decimal dec_check = {{0x10c9bcf4, 0xa7698d3f, 0x25, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_438) {
  // -0.844
  s21_decimal dec_1 = {{0x34c, 0x0, 0x0, 0x80030000}};
  // -150
  s21_decimal dec_2 = {{0x96, 0x0, 0x0, 0x80000000}};
  // -150.844
  s21_decimal dec_check = {{0x24d3c, 0x0, 0x0, 0x80030000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_439) {
  // -1282.749
  s21_decimal dec_1 = {{0x1392bd, 0x0, 0x0, 0x80030000}};
  // -96046878446242
  s21_decimal dec_2 = {{0xa81252a2, 0x575a, 0x0, 0x80000000}};
  // -96046878447524.749
  s21_decimal dec_check = {{0x87a65b8d, 0x1553a20, 0x0, 0x80030000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_440) {
  // 840.6
  s21_decimal dec_1 = {{0x20d6, 0x0, 0x0, 0x10000}};
  // -98599383370060
  s21_decimal dec_2 = {{0xf538894c, 0x59ac, 0x0, 0x80000000}};
  // -98599383369219.4
  s21_decimal dec_check = {{0x94353c22, 0x380c1, 0x0, 0x80010000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_441) {
  // -252365550528
  s21_decimal dec_1 = {{0xc228b3c0, 0x3a, 0x0, 0x80000000}};
  // -5108001425371.0
  s21_decimal dec_2 = {{0xfe1ace8e, 0x2e74, 0x0, 0x80010000}};
  // -5360366975899.0
  s21_decimal dec_check = {{0x93b1d40e, 0x30c0, 0x0, 0x80010000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_442) {
  // 28122144735565790562163730433
  s21_decimal dec_1 = {{0xaf25a801, 0xdcd41487, 0x5ade17c8, 0x0}};
  // 736216649842572181831
  s21_decimal dec_2 = {{0x8aa8c147, 0xe90ef663, 0x27, 0x0}};
  // 28122145471782440404735912264
  s21_decimal dec_check = {{0x39ce6948, 0xc5e30aeb, 0x5ade17f0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_443) {
  // 8
  s21_decimal dec_1 = {{0x8, 0x0, 0x0, 0x0}};
  // 66314.33019094474909919067502
  s21_decimal dec_2 = {{0x55f5bd6e, 0x4cba3e96, 0x156d6490, 0x170000}};
  // 66322.33019094474909919067502
  s21_decimal dec_check = {{0x9f5bd6e, 0x62f948ee, 0x156e0df8, 0x170000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_444) {
  // -1.6134
  s21_decimal dec_1 = {{0x3f06, 0x0, 0x0, 0x80040000}};
  // 22607.429245044890
  s21_decimal dec_2 = {{0x4d6f889a, 0x505156, 0x0, 0xc0000}};
  // 22605.815845044890
  s21_decimal dec_check = {{0xa74d429a, 0x504fde, 0x0, 0xc0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_445) {
  // 60
  s21_decimal dec_1 = {{0x3c, 0x0, 0x0, 0x0}};
  // -26.3
  s21_decimal dec_2 = {{0x107, 0x0, 0x0, 0x80010000}};
  // 33.7
  s21_decimal dec_check = {{0x151, 0x0, 0x0, 0x10000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_446) {
  // -6159.556987
  s21_decimal dec_1 = {{0x6f23617b, 0x1, 0x0, 0x80060000}};
  // 760156
  s21_decimal dec_2 = {{0xb995c, 0x0, 0x0, 0x0}};
  // 753996.443013
  s21_decimal dec_check = {{0x8db0ad85, 0xaf, 0x0, 0x60000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_447) {
  // -140605055214
  s21_decimal dec_1 = {{0xbcb6e0ee, 0x20, 0x0, 0x80000000}};
  // -972138669108107
  s21_decimal dec_2 = {{0xac0b6b8b, 0x37427, 0x0, 0x80000000}};
  // -972279274163321
  s21_decimal dec_check = {{0x68c24c79, 0x37448, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_448) {
  // -8559405033026653830.163
  s21_decimal dec_1 = {{0xc45cbc13, 0x19b57dd, 0x1d0, 0x80030000}};
  // 278.311
  s21_decimal dec_2 = {{0x43f27, 0x0, 0x0, 0x30000}};
  // -8559405033026653551.852
  s21_decimal dec_check = {{0xc4587cec, 0x19b57dd, 0x1d0, 0x80030000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_449) {
  // 382.882
  s21_decimal dec_1 = {{0x5d7a2, 0x0, 0x0, 0x30000}};
  // 93379471593862679964.07749268
  s21_decimal dec_2 = {{0xd3f85a94, 0xd68be032, 0x1e2c2b39, 0x80000}};
  // 93379471593862680346.95949268
  s21_decimal dec_check = {{0xbe1febd4, 0xd68be03b, 0x1e2c2b39, 0x80000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_450) {
  // -31
  s21_decimal dec_1 = {{0x1f, 0x0, 0x0, 0x80000000}};
  // 2512033262
  s21_decimal dec_2 = {{0x95ba95ee, 0x0, 0x0, 0x0}};
  // 2512033231
  s21_decimal dec_check = {{0x95ba95cf, 0x0, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_451) {
  // -34485711909673018.379631989
  s21_decimal dec_1 = {{0x70227d75, 0x3048ab2e, 0x1c86a2, 0x80090000}};
  // 7.98883154911
  s21_decimal dec_2 = {{0x1258bdf, 0xba, 0x0, 0xb0000}};
  // -34485711909673010.39080043989
  s21_decimal dec_check = {{0xcc5375d5, 0xdc62dd69, 0xb24975a, 0x800b0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_452) {
  // -330760266158585010
  s21_decimal dec_1 = {{0xaa3234b2, 0x49718b5, 0x0, 0x80000000}};
  // -23362026273730460
  s21_decimal dec_2 = {{0x9d476f9c, 0x52ffa3, 0x0, 0x80000000}};
  // -354122292432315470
  s21_decimal dec_check = {{0x4779a44e, 0x4ea1859, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_453) {
  // -611082839760.568838
  s21_decimal dec_1 = {{0xe8440206, 0x87b009a, 0x0, 0x80060000}};
  // 408.7223532827935
  s21_decimal dec_2 = {{0xe2cab51f, 0xe854e, 0x0, 0xd0000}};
  // -611082839351.8464847172065
  s21_decimal dec_check = {{0x4bf5d1e1, 0xabc6749e, 0x50e04, 0x800d0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_454) {
  // 868.751524725
  s21_decimal dec_1 = {{0x45a04375, 0xca, 0x0, 0x90000}};
  // 82931048340011.33121628
  s21_decimal dec_2 = {{0x8060305c, 0x91f2fbc5, 0x1c1, 0x80000}};
  // 82931048340880.082741005
  s21_decimal dec_check = {{0x4962270d, 0xb37dd681, 0x118f, 0x90000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_455) {
  // 5202209567377002.0264412280435
  s21_decimal dec_1 = {{0x6b697673, 0x56671cdd, 0xa817ab41, 0xd0000}};
  // 2
  s21_decimal dec_2 = {{0x2, 0x0, 0x0, 0x0}};
  // 5202209567377004.0264412280435
  s21_decimal dec_check = {{0x84eb673, 0x56672f0e, 0xa817ab41, 0xd0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_456) {
  // 350.71634181522433089328
  s21_decimal dec_1 = {{0xec599f30, 0x3cb27e9c, 0x76d, 0x140000}};
  // 2268102526194
  s21_decimal dec_2 = {{0x157204f2, 0x210, 0x0, 0x0}};
  // 2268102526544.7163418152243309
  s21_decimal dec_check = {{0xb4a7906d, 0x598de66a, 0x49494deb, 0x100000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_457) {
  // -516.6701882854866468
  s21_decimal dec_1 = {{0xf3e7fe24, 0x47b3cffc, 0x0, 0x80100000}};
  // 34759141
  s21_decimal dec_2 = {{0x21261e5, 0x0, 0x0, 0x0}};
  // 34758624.3298117145133532
  s21_decimal dec_check = {{0x24bd01dc, 0xb02120cb, 0x499a, 0x100000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_458) {
  // -85216867038534802.62459904
  s21_decimal dec_1 = {{0x828f6200, 0x8fd73b8c, 0x70c89, 0x80080000}};
  // -546188
  s21_decimal dec_2 = {{0x8558c, 0x0, 0x0, 0x80000000}};
  // -85216867039080990.62459904
  s21_decimal dec_check = {{0x70bb6e00, 0x8fd76d39, 0x70c89, 0x80080000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_459) {
  // 2.4973350768
  s21_decimal dec_1 = {{0xd0871770, 0x5, 0x0, 0xa0000}};
  // -111126285524902489230503
  s21_decimal dec_2 = {{0xbdfe0ca7, 0x2b02a89a, 0x1788, 0x80000000}};
  // -111126285524902489230500.50266
  s21_decimal dec_check = {{0xc60a82da, 0xee851e27, 0x23e826a0, 0x80050000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_460) {
  // 550.44001402329277579248
  s21_decimal dec_1 = {{0xd402bff0, 0xf0f8b7cc, 0xba7, 0x140000}};
  // -512.74850505875836731535470890
  s21_decimal dec_2 = {{0xdded312a, 0x9df3deb8, 0xa5ad8fef, 0x801a0000}};
  // 37.69150896453440847712529110
  s21_decimal dec_check = {{0x174eaad6, 0x849d4f4e, 0xc2dc4bf, 0x1a0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_461) {
  // -345187352464200113127096991
  s21_decimal dec_1 = {{0xe103029f, 0xdf707e58, 0x11d8843, 0x80000000}};
  // 5169621068642496817.9306
  s21_decimal dec_2 = {{0x60f9ae6a, 0x750ad90a, 0xaf2, 0x40000}};
  // -345187347294579044484600173.07
  s21_decimal dec_check = {{0x80bce9b, 0x41a70182, 0x6f893a67, 0x80020000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_462) {
  // -2127242237882661112277
  s21_decimal dec_1 = {{0xeb0489d5, 0x516a98bd, 0x73, 0x80000000}};
  // 13988291
  s21_decimal dec_2 = {{0xd571c3, 0x0, 0x0, 0x0}};
  // -2127242237882647123986
  s21_decimal dec_check = {{0xea2f1812, 0x516a98bd, 0x73, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_463) {
  // -4261431223385701.836608314866
  s21_decimal dec_1 = {{0x44bd1df2, 0x83bdefa0, 0xdc4f929, 0x800c0000}};
  // 71448306380439.187
  s21_decimal dec_2 = {{0x299bfe93, 0xfdd5db, 0x0, 0x30000}};
  // -4189982917005262.649608314866
  s21_decimal dec_check = {{0x286f1ff2, 0x10910548, 0xd89df65, 0x800c0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_464) {
  // 170335326737842915702062229
  s21_decimal dec_1 = {{0x612dbc95, 0x90a47cbb, 0x8ce5e8, 0x0}};
  // 41177.908155895045963143688
  s21_decimal dec_2 = {{0x51305a08, 0xdfc1d6cb, 0x220fc2, 0x150000}};
  // 170335326737842915702103406.91
  s21_decimal dec_check = {{0xf61c7f53, 0x8040b931, 0x3709ced8, 0x20000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_465) {
  // -948237342658925953.088164549
  s21_decimal dec_1 = {{0xb4d312c5, 0x58ddcdd2, 0x3105d11, 0x80090000}};
  // -79277142488747
  s21_decimal dec_2 = {{0x25eab6ab, 0x481a, 0x0, 0x80000000}};
  // -948316619801414700.088164549
  s21_decimal dec_check = {{0x34d400c5, 0xf83a5709, 0x3106dda, 0x80090000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_466) {
  // -672256.276306326907
  s21_decimal dec_1 = {{0x8343f57b, 0x9545585, 0x0, 0x800c0000}};
  // 300015838330419
  s21_decimal dec_2 = {{0xe1787e33, 0x110dc, 0x0, 0x0}};
  // 300015837658162.723693673093
  s21_decimal dec_check = {{0x977e3a85, 0x2600f1f5, 0xf82ad3, 0xc0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_467) {
  // -94866146446
  s21_decimal dec_1 = {{0x1676848e, 0x16, 0x0, 0x80000000}};
  // -9092312
  s21_decimal dec_2 = {{0x8abcd8, 0x0, 0x0, 0x80000000}};
  // -94875238758
  s21_decimal dec_check = {{0x17014166, 0x16, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_468) {
  // 987410067
  s21_decimal dec_1 = {{0x3adaae93, 0x0, 0x0, 0x0}};
  // -1468815245016039133.69154765
  s21_decimal dec_2 = {{0x99a074cd, 0x65ebeb4d, 0x797f5f, 0x80080000}};
  // -1468815244028629066.69154765
  s21_decimal dec_check = {{0x748241cd, 0x648d1ee1, 0x797f5f, 0x80080000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_469) {
  // -373349982
  s21_decimal dec_1 = {{0x1640de5e, 0x0, 0x0, 0x80000000}};
  // 1928339
  s21_decimal dec_2 = {{0x1d6c93, 0x0, 0x0, 0x0}};
  // -371421643
  s21_decimal dec_check = {{0x162371cb, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_470) {
  // 3738
  s21_decimal dec_1 = {{0xe9a, 0x0, 0x0, 0x0}};
  // -3.048902228544174
  s21_decimal dec_2 = {{0xde498aae, 0xad4f5, 0x0, 0x800f0000}};
  // 3734.951097771455826
  s21_decimal dec_check = {{0x1c1f7552, 0x33d5363c, 0x0, 0xf0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_471) {
  // -36329419
  s21_decimal dec_1 = {{0x22a57cb, 0x0, 0x0, 0x80000000}};
  // 444060286456087191601111874
  s21_decimal dec_2 = {{0xcd356342, 0x5d509c1a, 0x16f516c, 0x0}};
  // 444060286456087191564782455
  s21_decimal dec_check = {{0xcb0b0b77, 0x5d509c1a, 0x16f516c, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_472) {
  // -36469606594290975523840
  s21_decimal dec_1 = {{0x2d144400, 0x5763540, 0x7b9, 0x80000000}};
  // -0.43
  s21_decimal dec_2 = {{0x2b, 0x0, 0x0, 0x80020000}};
  // -36469606594290975523840.43
  s21_decimal dec_check = {{0x9bea902b, 0x222ccd11, 0x30446, 0x80020000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_473) {
  // -54646882699
  s21_decimal dec_1 = {{0xb935418b, 0xc, 0x0, 0x80000000}};
  // -438.667554695
  s21_decimal dec_2 = {{0x229faf87, 0x66, 0x0, 0x80090000}};
  // -54646883137.667554695
  s21_decimal dec_check = {{0x9ef55d87, 0xf660baae, 0x2, 0x80090000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_474) {
  // 804.9
  s21_decimal dec_1 = {{0x1f71, 0x0, 0x0, 0x10000}};
  // 367175235652
  s21_decimal dec_2 = {{0x7d597844, 0x55, 0x0, 0x0}};
  // 367175236456.9
  s21_decimal dec_check = {{0xe57ed219, 0x356, 0x0, 0x10000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_475) {
  // 22086821066
  s21_decimal dec_1 = {{0x247a24ca, 0x5, 0x0, 0x0}};
  // 6.3
  s21_decimal dec_2 = {{0x3f, 0x0, 0x0, 0x10000}};
  // 22086821072.3
  s21_decimal dec_check = {{0x6cc57023, 0x33, 0x0, 0x10000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_476) {
  // -5.71
  s21_decimal dec_1 = {{0x23b, 0x0, 0x0, 0x80020000}};
  // 0.594628341181479234434
  s21_decimal dec_2 = {{0x1dd9ab82, 0x3c203dd4, 0x20, 0x150000}};
  // -5.115371658818520765566
  s21_decimal dec_check = {{0x7a9e547e, 0x4e0add4b, 0x115, 0x80150000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_477) {
  // -99020838262920277663313449
  s21_decimal dec_1 = {{0x13366e29, 0x65f6f80a, 0x51e87a, 0x80000000}};
  // -16789298328854
  s21_decimal dec_2 = {{0x1029b516, 0xf45, 0x0, 0x80000000}};
  // -99020838262937066961642303
  s21_decimal dec_check = {{0x2360233f, 0x65f7074f, 0x51e87a, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_478) {
  // -87720
  s21_decimal dec_1 = {{0x156a8, 0x0, 0x0, 0x80000000}};
  // 968.44389684911909643447052453
  s21_decimal dec_2 = {{0x913a28a5, 0x7880acf1, 0x38ebcd34, 0x1a0000}};
  // -86751.556103150880903565529475
  s21_decimal dec_check = {{0x25d183, 0xad3d36fb, 0x184f348f, 0x80180000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_479) {
  // -22802807
  s21_decimal dec_1 = {{0x15bf177, 0x0, 0x0, 0x80000000}};
  // 6226555.6348
  s21_decimal dec_2 = {{0x7f50fd7c, 0xe, 0x0, 0x40000}};
  // -16576251.3652
  s21_decimal dec_check = {{0x98373af4, 0x26, 0x0, 0x80040000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_480) {
  // 8.620630
  s21_decimal dec_1 = {{0x838a56, 0x0, 0x0, 0x60000}};
  // 53993982633442641
  s21_decimal dec_2 = {{0xbadffd51, 0xbfd33d, 0x0, 0x0}};
  // 53993982633442649.620630
  s21_decimal dec_check = {{0x4f90c096, 0x508acbc, 0xb6f, 0x60000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_481) {
  // 79228162514264337592333578961
  s21_decimal dec_1 = {{0xb7db32d1, 0xffffffff, 0xffffffff, 0x0}};
  // -22495.689285318
  s21_decimal dec_2 = {{0xaf919ec6, 0x1475, 0x0, 0x80090000}};
  // 79228162514264337592333556465
  s21_decimal dec_check = {{0xb7dadaf1, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_482) {
  // 8583065516.3
  s21_decimal dec_1 = {{0xfbe7dcbb, 0x13, 0x0, 0x10000}};
  // 5749695.18253
  s21_decimal dec_2 = {{0xdeda98ad, 0x85, 0x0, 0x50000}};
  // 8588815211.48253
  s21_decimal dec_check = {{0xeff8e15d, 0x30d25, 0x0, 0x50000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_483) {
  // -8380344717238
  s21_decimal dec_1 = {{0x33784fb6, 0x79f, 0x0, 0x80000000}};
  // 85867660252.882
  s21_decimal dec_2 = {{0x9f6316d2, 0x4e18, 0x0, 0x30000}};
  // -8294477056985.118
  s21_decimal dec_check = {{0x6e94481e, 0x1d77c8, 0x0, 0x80030000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_484) {
  // -7959577921249931944517
  s21_decimal dec_1 = {{0xc053e245, 0x7d555bb9, 0x1af, 0x80000000}};
  // 6113399582160879937686132
  s21_decimal dec_2 = {{0x524c8a74, 0xe2f8427, 0x50e90, 0x0}};
  // 6105440004239630005741615
  s21_decimal dec_check = {{0x91f8a82f, 0x90da286d, 0x50ce0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_485) {
  // 375.3783941690
  s21_decimal dec_1 = {{0xfef55a3a, 0x369, 0x0, 0xa0000}};
  // 44721194
  s21_decimal dec_2 = {{0x2aa642a, 0x0, 0x0, 0x0}};
  // 44721569.3783941690
  s21_decimal dec_check = {{0xd5f8c23a, 0x634d44d, 0x0, 0xa0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_486) {
  // -57306547085013976924692272
  s21_decimal dec_1 = {{0x96761f30, 0x2471c10e, 0x2f6722, 0x80000000}};
  // -768065755727928338721149299
  s21_decimal dec_2 = {{0xd5f61173, 0xc70daee, 0x27b5440, 0x80000000}};
  // -825372302812942315645841571
  s21_decimal dec_check = {{0x6c6c30a3, 0x30e29bfd, 0x2aabb62, 0x80000000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_487) {
  // -5902663735376
  s21_decimal dec_1 = {{0x522cd850, 0x55e, 0x0, 0x80000000}};
  // -297.99156
  s21_decimal dec_2 = {{0x1c6b2f4, 0x0, 0x0, 0x80050000}};
  // -5902663735673.99156
  s21_decimal dec_check = {{0xaf57c4f4, 0x8310c23, 0x0, 0x80050000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_488) {
  // 62096553
  s21_decimal dec_1 = {{0x3b384a9, 0x0, 0x0, 0x0}};
  // 912080
  s21_decimal dec_2 = {{0xdead0, 0x0, 0x0, 0x0}};
  // 63008633
  s21_decimal dec_check = {{0x3c16f79, 0x0, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_489) {
  // 16
  s21_decimal dec_1 = {{0x10, 0x0, 0x0, 0x0}};
  // -92045.739748471
  s21_decimal dec_2 = {{0x119eec77, 0x53b7, 0x0, 0x80090000}};
  // -92029.739748471
  s21_decimal dec_check = {{0x57f24c77, 0x53b3, 0x0, 0x80090000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_490) {
  // -50.5
  s21_decimal dec_1 = {{0x1f9, 0x0, 0x0, 0x80010000}};
  // 6479389027960
  s21_decimal dec_2 = {{0x99ae6e78, 0x5e4, 0x0, 0x0}};
  // 6479389027909.5
  s21_decimal dec_check = {{0xd04eb7, 0x3aee, 0x0, 0x10000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_491) {
  // 656
  s21_decimal dec_1 = {{0x290, 0x0, 0x0, 0x0}};
  // 343712.8693
  s21_decimal dec_2 = {{0xccde6bf5, 0x0, 0x0, 0x40000}};
  // 344368.8693
  s21_decimal dec_check = {{0xcd4284f5, 0x0, 0x0, 0x40000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_492) {
  // -17341285374982069
  s21_decimal dec_1 = {{0xa2b977b5, 0x3d9bce, 0x0, 0x80000000}};
  // 117694716888369.10775231083181
  s21_decimal dec_2 = {{0x887872ad, 0xb3c22037, 0x26077a92, 0xe0000}};
  // -17223590658093699.892247689168
  s21_decimal dec_check = {{0x33b277d0, 0x79ae0264, 0x37a70530, 0x800c0000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_493) {
  // 85928002417254626
  s21_decimal dec_1 = {{0x1c56e0e2, 0x1314710, 0x0, 0x0}};
  // 9.867375782
  s21_decimal dec_2 = {{0x4c2434a6, 0x2, 0x0, 0x90000}};
  // 85928002417254635.867375782
  s21_decimal dec_check = {{0x378a88a6, 0x584bc876, 0x4713f6, 0x90000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_494) {
  // 556985.5316183499417671
  s21_decimal dec_1 = {{0xee842847, 0xf1452bb5, 0x12d, 0x100000}};
  // 79164.6346707244779
  s21_decimal dec_2 = {{0x733896eb, 0xafc7e28, 0x0, 0xd0000}};
  // 636150.1662890744196671
  s21_decimal dec_check = {{0x391ae3f, 0xdb91f9b8, 0x158, 0x100000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_495) {
  // -7852605.32701
  s21_decimal dec_1 = {{0xd52cd3dd, 0xb6, 0x0, 0x80050000}};
  // 4482.23
  s21_decimal dec_2 = {{0x6d6df, 0x0, 0x0, 0x20000}};
  // -7848123.09701
  s21_decimal dec_check = {{0xba757cc5, 0xb6, 0x0, 0x80050000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_496) {
  // 3175385718374323
  s21_decimal dec_1 = {{0x19c4bfb3, 0xb47ff, 0x0, 0x0}};
  // 89116
  s21_decimal dec_2 = {{0x15c1c, 0x0, 0x0, 0x0}};
  // 3175385718463439
  s21_decimal dec_check = {{0x19c61bcf, 0xb47ff, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_497) {
  // 6794497
  s21_decimal dec_1 = {{0x67ad01, 0x0, 0x0, 0x0}};
  // 4216473909804
  s21_decimal dec_2 = {{0xb96dfa2c, 0x3d5, 0x0, 0x0}};
  // 4216480704301
  s21_decimal dec_check = {{0xb9d5a72d, 0x3d5, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_498) {
  // -83.14851
  s21_decimal dec_1 = {{0x7edfe3, 0x0, 0x0, 0x80050000}};
  // 68.3356
  s21_decimal dec_2 = {{0xa6d5c, 0x0, 0x0, 0x40000}};
  // -14.81291
  s21_decimal dec_check = {{0x169a4b, 0x0, 0x0, 0x80050000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_499) {
  // -8902768571780787
  s21_decimal dec_1 = {{0x563d0eb3, 0x1fa105, 0x0, 0x80000000}};
  // -5806886.0738925
  s21_decimal dec_2 = {{0x35d11d6d, 0x34d0, 0x0, 0x80070000}};
  // -8902768577587673.0738925
  s21_decimal dec_check = {{0xd53d58ed, 0x33550c43, 0x12da, 0x80070000}};
  s21_decimal result;
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_add_500) {
  // 31371
  s21_decimal dec_1 = {{0x7a8b, 0x0, 0x0, 0x0}};
  // -387283841.4695839888505
  s21_decimal dec_2 = {{0x1080f479, 0xf26e02fd, 0xd1, 0x800d0000}};
  // -387252470.4695839888505
  s21_decimal dec_check = {{0xd8041479, 0xee137d67, 0xd1, 0x800d0000}};
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
  // 9126022740491263231
  s21_decimal dec_1 = {{0xab1e5cff, 0x7ea62554, 0x0, 0x0}};
  // 5958.741467361356540083428
  s21_decimal dec_2 = {{0x3a84fce4, 0x5af87cc, 0x4edd0, 0x150000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_2) {
  // 8851898.4583539425244928686760
  s21_decimal dec_1 = {{0x6c963aa8, 0x958f2ddc, 0x1e053019, 0x160000}};
  // 74613
  s21_decimal dec_2 = {{0x12375, 0x0, 0x0, 0x0}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_3) {
  // 184902567.02923429418969248017
  s21_decimal dec_1 = {{0x1b06b111, 0x5b30b7cc, 0x3bbec828, 0x140000}};
  // 804868895365
  s21_decimal dec_2 = {{0x65ecb285, 0xbb, 0x0, 0x0}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_4) {
  // 1.05277193301415952094253395
  s21_decimal dec_1 = {{0x40bad153, 0x15a3aa38, 0x571550, 0x1a0000}};
  // 87892.4996
  s21_decimal dec_2 = {{0x346354c4, 0x0, 0x0, 0x40000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_5) {
  // 9620787066334366
  s21_decimal dec_1 = {{0xb8c6c9e, 0x222e0e, 0x0, 0x0}};
  // 2882.770649665364273117
  s21_decimal dec_2 = {{0x1217a7dd, 0x467ab84c, 0x9c, 0x120000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_6) {
  // -7.3018513295168
  s21_decimal dec_1 = {{0xf28c0740, 0x4268, 0x0, 0x800d0000}};
  // 9569151127566165508284.055034
  s21_decimal dec_2 = {{0x11557dfa, 0x11458dad, 0x1eeb6a92, 0x60000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_7) {
  // 9144818510432290243925
  s21_decimal dec_1 = {{0xc57c8555, 0xbdd9cfe9, 0x1ef, 0x0}};
  // -913.6356591475026900
  s21_decimal dec_2 = {{0xd82aebd4, 0x7ecadbe9, 0x0, 0x80100000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_8) {
  // -729903945042389852998663
  s21_decimal dec_1 = {{0x503bcc07, 0x2c11c336, 0x9a90, 0x80000000}};
  // -79228162514264337592081768852
  s21_decimal dec_2 = {{0xa8d8e194, 0xffffffff, 0xffffffff, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_9) {
  // 8200487575081317072277268735
  s21_decimal dec_1 = {{0xcb3ee8ff, 0x3798f1ee, 0x1a7f48ca, 0x0}};
  // -2499.533422703845418
  s21_decimal dec_2 = {{0xa47aa02a, 0x22b02067, 0x0, 0x800f0000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_10) {
  // 970840116836786946115.27
  s21_decimal dec_1 = {{0xb5b31a47, 0xef504d2a, 0x148e, 0x20000}};
  // 202078083.7174911322285566178
  s21_decimal dec_2 = {{0xbd7a68e2, 0xb0693c3a, 0x6878cfc, 0x130000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_11) {
  // 940180235243135816040
  s21_decimal dec_1 = {{0x4e4dd168, 0xf79f2eaa, 0x32, 0x0}};
  // -0.904784959929247212932
  s21_decimal dec_2 = {{0xaad22584, 0xc69e74c, 0x31, 0x80150000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_12) {
  // 944788648861393874010252
  s21_decimal dec_1 = {{0x2823408c, 0x186462a4, 0xc811, 0x0}};
  // 82868271819.402419302
  s21_decimal dec_2 = {{0x31fe9c66, 0x7e073e2a, 0x4, 0x90000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_13) {
  // -911324754.97144676594742587
  s21_decimal dec_1 = {{0xa673f53b, 0x6559a849, 0x4b620d, 0x80110000}};
  // 97140844314789324
  s21_decimal dec_2 = {{0x4e9085cc, 0x1591d15, 0x0, 0x0}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_14) {
  // 20.15328475198386168
  s21_decimal dec_1 = {{0xdedeff8, 0x1bf7e292, 0x0, 0x110000}};
  // 913903562779
  s21_decimal dec_2 = {{0xc8e5b01b, 0xd4, 0x0, 0x0}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_15) {
  // 870418637641836360.3544125639
  s21_decimal dec_1 = {{0xb35330c7, 0xf39a7c7e, 0x1c1fef28, 0xa0000}};
  // 109043.04916822472
  s21_decimal dec_2 = {{0x5516f9c8, 0x26bd68, 0x0, 0xb0000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_16) {
  // 9134916412397352297771
  s21_decimal dec_1 = {{0xc5eaa52b, 0x346e7e36, 0x1ef, 0x0}};
  // 1.1937483
  s21_decimal dec_2 = {{0xb626cb, 0x0, 0x0, 0x70000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_17) {
  // -48624.6175728698915433482638
  s21_decimal dec_1 = {{0x83bc098e, 0x11fc7e0, 0x19236a2, 0x80160000}};
  // 864147391
  s21_decimal dec_2 = {{0x3381d7bf, 0x0, 0x0, 0x0}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_18) {
  // -96776236691142924883865.48033
  s21_decimal dec_1 = {{0xc77a9141, 0x53d9d6fd, 0x1f452486, 0x80050000}};
  // 89124265592289669529034514
  s21_decimal dec_2 = {{0x116d5f12, 0x1e6ac6be, 0x49b8cc, 0x0}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_19) {
  // 9036.480963186479824394363773
  s21_decimal dec_1 = {{0x6ff9a37d, 0x9874eec8, 0x1d32cd46, 0x180000}};
  // 833899419970049615827928811
  s21_decimal dec_2 = {{0x137986eb, 0x2367661d, 0x2b1c912, 0x0}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_20) {
  // 858152943189309985890602160
  s21_decimal dec_1 = {{0x3fcd8cb0, 0x443b921d, 0x2c5d8f4, 0x0}};
  // 1146637.4224140373786482649
  s21_decimal dec_2 = {{0x35b5d7d9, 0x64685957, 0x97c19, 0x130000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_21) {
  // 11194393904.090893243348090
  s21_decimal dec_1 = {{0x3133747a, 0x4f3cf1d5, 0x94281, 0xf0000}};
  // 9164256649226540911
  s21_decimal dec_2 = {{0x3fa8d76f, 0x7f2dfade, 0x0, 0x0}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_22) {
  // 0.90112106
  s21_decimal dec_1 = {{0x55f006a, 0x0, 0x0, 0x80000}};
  // 84023846861503073211451120
  s21_decimal dec_2 = {{0xc8506f0, 0xdd8a4cee, 0x4580bd, 0x0}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_23) {
  // 86325817115441413634809099.43
  s21_decimal dec_1 = {{0xc5bc5877, 0x4a6de944, 0x1be4b448, 0x20000}};
  // -211774.55920
  s21_decimal dec_2 = {{0xee465530, 0x4, 0x0, 0x80050000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_24) {
  // -32616661743020960249226
  s21_decimal dec_1 = {{0x1d8df58a, 0x271c54cc, 0x6e8, 0x80000000}};
  // -79228162514264337592185361134
  s21_decimal dec_2 = {{0xaf0592ee, 0xffffffff, 0xffffffff, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_25) {
  // 9617273475874013432218237512
  s21_decimal dec_1 = {{0x2c75ba48, 0xcbe6d8cd, 0x1f1338df, 0x0}};
  // 99495682135425.230701939
  s21_decimal dec_2 = {{0xdfd20573, 0xabf6e773, 0x1511, 0x90000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_26) {
  // -95968442.765312275955834698
  s21_decimal dec_1 = {{0x5d3fdf4a, 0xb4f18205, 0x4f621b, 0x80120000}};
  // 86074232346
  s21_decimal dec_2 = {{0xa6c8e1a, 0x14, 0x0, 0x0}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_27) {
  // 79228162514264337591675530017
  s21_decimal dec_1 = {{0x90a22b21, 0xffffffff, 0xffffffff, 0x0}};
  // 93967882358474921964995242
  s21_decimal dec_2 = {{0xf28402aa, 0x1c1edec0, 0x4dba79, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1; // Результат слишком велик или положительная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_28) {
  // 87457134.36627021424847
  s21_decimal dec_1 = {{0x2a6168cf, 0x1b27c1d6, 0x1da, 0xe0000}};
  // 948.02635975073403664627238207
  s21_decimal dec_2 = {{0xca0d853f, 0x138bbf17, 0x3252e70a, 0x1a0000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_29) {
  // 6094899.4954550751119210173344
  s21_decimal dec_1 = {{0x5c13d3a0, 0x6cf2b40, 0xc4efd3b5, 0x160000}};
  // 835757728197.600536506
  s21_decimal dec_2 = {{0xf172e7ba, 0x4e77e9c2, 0x2d, 0x90000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_30) {
  // 6
  s21_decimal dec_1 = {{0x6, 0x0, 0x0, 0x0}};
  // 935817395710842.80103337772686
  s21_decimal dec_2 = {{0x6600c68e, 0x65a93ea5, 0x2e61002b, 0xe0000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_31) {
  // 96890858077780068150
  s21_decimal dec_1 = {{0x6cde4736, 0x40a17a12, 0x5, 0x0}};
  // -932338.037829900880268
  s21_decimal dec_2 = {{0xebf2c98c, 0x8aca19aa, 0x32, 0x800f0000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_32) {
  // -9904.845845424477892071
  s21_decimal dec_1 = {{0x89a4ede7, 0xf159524a, 0x218, 0x80120000}};
  // 8448372611746618299787003
  s21_decimal dec_2 = {{0xc19e26fb, 0x326d5b10, 0x6fd03, 0x0}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_33) {
  // 97480270974450
  s21_decimal dec_1 = {{0x64ec8df2, 0x58a8, 0x0, 0x0}};
  // 0.945625605879384857711
  s21_decimal dec_2 = {{0x7a455c6f, 0x43310668, 0x33, 0x150000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_34) {
  // -23858751928.12019394589827275
  s21_decimal dec_1 = {{0xb62120cb, 0x5dc60b3c, 0x7b58cb9, 0x80110000}};
  // 931501710543
  s21_decimal dec_2 = {{0xe1d41ccf, 0xd8, 0x0, 0x0}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_35) {
  // 4718352308458775
  s21_decimal dec_1 = {{0x1455517, 0x10c351, 0x0, 0x0}};
  // 79228162514264337592545816751
  s21_decimal dec_2 = {{0xc481b0af, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1; // Результат слишком велик или положительная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_36) {
  // -15560647631.84693604924846
  s21_decimal dec_1 = {{0x6dd63dae, 0x70994406, 0x14982, 0x800e0000}};
  // 93396932016306719447
  s21_decimal dec_2 = {{0xa7450ad7, 0x10248ed4, 0x5, 0x0}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_37) {
  // 9000022
  s21_decimal dec_1 = {{0x895456, 0x0, 0x0, 0x0}};
  // -0.36380168727812632886150916
  s21_decimal dec_2 = {{0xb9588704, 0xe6045ec2, 0x1e17cc, 0x801a0000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_38) {
  // 899310507234628070120
  s21_decimal dec_1 = {{0x205deae8, 0xc070bd94, 0x30, 0x0}};
  // -66616859.480630294730393
  s21_decimal dec_2 = {{0x89ebd699, 0x4ea3ea62, 0xe1b, 0x800f0000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_39) {
  // 8928761327651047771285484767
  s21_decimal dec_1 = {{0x1da3f4df, 0x73c2cc7c, 0x1cd9b2c1, 0x0}};
  // -51154385592665736463.69326111
  s21_decimal dec_2 = {{0xee6f041f, 0xf569e216, 0x1087643f, 0x80080000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_40) {
  // -0.38
  s21_decimal dec_1 = {{0x26, 0x0, 0x0, 0x80020000}};
  // 9234750314130388137.1450825297
  s21_decimal dec_2 = {{0x88a35a51, 0x787e8737, 0x2a641070, 0xa0000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_41) {
  // 3.3272334153899
  s21_decimal dec_1 = {{0xd1a878ab, 0x1e42, 0x0, 0xd0000}};
  // 9879580383272224073450.2
  s21_decimal dec_2 = {{0x28ca8526, 0xbb33af42, 0x14eb, 0x10000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_42) {
  // 9816025199270916252606
  s21_decimal dec_1 = {{0xd9efe3be, 0x20b6ff34, 0x214, 0x0}};
  // 216448086349.021876840
  s21_decimal dec_2 = {{0x4a869268, 0xbbd213be, 0xb, 0x90000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_43) {
  // -0.9539028244145924456897461897
  s21_decimal dec_1 = {{0x413a3e89, 0x49018cdb, 0x1ed27fcd, 0x801c0000}};
  // 970284.8329709904024974092
  s21_decimal dec_2 = {{0xcb56330c, 0x76404976, 0x806a8, 0x130000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_44) {
  // 988787047967421820657545
  s21_decimal dec_1 = {{0x7c555f89, 0x40d6bc10, 0xd162, 0x0}};
  // 7584093927294779040801.717170
  s21_decimal dec_2 = {{0x71737bb2, 0x9d87f928, 0x18816a5b, 0x60000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_45) {
  // 7389976819805.67902326568853
  s21_decimal dec_1 = {{0x48773795, 0x9cfe39de, 0x26348d8, 0xe0000}};
  // 7975268278587985
  s21_decimal dec_2 = {{0xd8bbd251, 0x1c5576, 0x0, 0x0}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_46) {
  // 7319234876056737.06
  s21_decimal dec_1 = {{0xb9804eea, 0xa285088, 0x0, 0x20000}};
  // 79228162514264337593529678826
  s21_decimal dec_2 = {{0xff263bea, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1; // Результат слишком велик или положительная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_47) {
  // 79228162514264337592735241723
  s21_decimal dec_1 = {{0xcfcc15fb, 0xffffffff, 0xffffffff, 0x0}};
  // 52815148976904733
  s21_decimal dec_2 = {{0x21871a1d, 0xbba319, 0x0, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1; // Результат слишком велик или положительная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_48) {
  // 34.597208211956195600
  s21_decimal dec_1 = {{0x9de06110, 0xe021f990, 0x1, 0x120000}};
  // 92460431997675.345
  s21_decimal dec_2 = {{0xe5002751, 0x1487c45, 0x0, 0x30000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_49) {
  // 865971997939516907948165128
  s21_decimal dec_1 = {{0xb90d4808, 0x12e9ebc1, 0x2cc50b4, 0x0}};
  // 3.06801
  s21_decimal dec_2 = {{0x4ae71, 0x0, 0x0, 0x50000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_50) {
  // -79228162514264337592758540413
  s21_decimal dec_1 = {{0xd12f987d, 0xffffffff, 0xffffffff, 0x80000000}};
  // -27089787547585156237468373
  s21_decimal dec_2 = {{0x5adba2d5, 0x53581af2, 0x16687c, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_51) {
  // 8122879195595889059657.003296
  s21_decimal dec_1 = {{0x30f1b120, 0x88fd8657, 0x1a3f1693, 0x60000}};
  // 338812200.98141684690
  s21_decimal dec_2 = {{0x3a8f83d2, 0xd632462b, 0x1, 0xb0000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_52) {
  // 9715081716500372.068518230
  s21_decimal dec_1 = {{0x37184956, 0xa298e022, 0x8093f, 0x90000}};
  // 3.24295248028427
  s21_decimal dec_2 = {{0xdf0fa30b, 0x126f1, 0x0, 0xe0000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_53) {
  // 9958290319680049670807.4697085
  s21_decimal dec_1 = {{0xf599717d, 0x6b5341cd, 0x41c50bff, 0x70000}};
  // -0.1827759
  s21_decimal dec_2 = {{0x1be3af, 0x0, 0x0, 0x80070000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_54) {
  // 96729909413245092.736120118209
  s21_decimal dec_1 = {{0x84ebdbc1, 0x82212d7e, 0x388d1b10, 0xc0000}};
  // -387
  s21_decimal dec_2 = {{0x183, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_55) {
  // -0.6122
  s21_decimal dec_1 = {{0x17ea, 0x0, 0x0, 0x80040000}};
  // 801109068.92377472837219361817
  s21_decimal dec_2 = {{0x7781a419, 0x9ffec6f0, 0x2da3064, 0x140000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_56) {
  // 8768107852523866482961096197
  s21_decimal dec_1 = {{0xd0511e05, 0x1d5ba031, 0x1c54cf0f, 0x0}};
  // -4224.92
  s21_decimal dec_2 = {{0x6725c, 0x0, 0x0, 0x80020000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_57) {
  // 983323972309921546947288308
  s21_decimal dec_1 = {{0xec985cf4, 0x5a0de73d, 0x32d62f3, 0x0}};
  // 785682034.03683806
  s21_decimal dec_2 = {{0x5e8467de, 0x117215d, 0x0, 0x80000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_58) {
  // 8389651349589133538
  s21_decimal dec_1 = {{0xc1a308e2, 0x746e0773, 0x0, 0x0}};
  // -703135504.334935347922814
  s21_decimal dec_2 = {{0x3c57877e, 0xd544d0f, 0x94e5, 0x800f0000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_59) {
  // 967214422362085717
  s21_decimal dec_1 = {{0x8286d955, 0xd6c3c64, 0x0, 0x0}};
  // 189877830.31694169114
  s21_decimal dec_2 = {{0xd452141a, 0x7822810, 0x1, 0xb0000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_60) {
  // -9223725610.576393949211309543
  s21_decimal dec_1 = {{0xefd4b5e7, 0x451541d5, 0x1dcdafdf, 0x80120000}};
  // 823857493562.42
  s21_decimal dec_2 = {{0xed532ed2, 0x4aed, 0x0, 0x20000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_61) {
  // 1.5953380985000818436006
  s21_decimal dec_1 = {{0x252ce7a6, 0xd5a2d939, 0x360, 0x160000}};
  // 961975295125081101633643043
  s21_decimal dec_2 = {{0x8f98e223, 0x3e1b0643, 0x31bba31, 0x0}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_62) {
  // 9590115064298462254
  s21_decimal dec_1 = {{0x22a1dc2e, 0x8516eed7, 0x0, 0x0}};
  // 8447.187813801328268363126
  s21_decimal dec_2 = {{0x18994576, 0xf80d7d27, 0x6fcc2, 0x150000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_63) {
  // 9629286756922474.0
  s21_decimal dec_1 = {{0x55de0c24, 0x15619da, 0x0, 0x10000}};
  // -83.51107145677968896
  s21_decimal dec_2 = {{0xf35c9600, 0x73e517b3, 0x0, 0x80110000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_64) {
  // 94431464157286681474201980
  s21_decimal dec_1 = {{0x9bcb797c, 0xedf4c069, 0x4e1ca3, 0x0}};
  // 971853493.1250518
  s21_decimal dec_2 = {{0xbe507d56, 0x2286f4, 0x0, 0x70000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_65) {
  // 8512470046
  s21_decimal dec_1 = {{0xfb61fc1e, 0x1, 0x0, 0x0}};
  // -9.3623483964475345016
  s21_decimal dec_2 = {{0x91088878, 0x13496ea0, 0x5, 0x80130000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_66) {
  // -75193210946985.102
  s21_decimal dec_1 = {{0xb4041c8e, 0x10b23d3, 0x0, 0x80030000}};
  // 937106405354542718486.00047938
  s21_decimal dec_2 = {{0x17401142, 0xad691723, 0x2ecba002, 0x80000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_67) {
  // 9144434654282724497552515
  s21_decimal dec_1 = {{0x8ae1f483, 0xcbc12ae5, 0x79068, 0x0}};
  // -12.0316356716274840896268
  s21_decimal dec_2 = {{0xd9ee030c, 0x5cde4a12, 0x197a, 0x80160000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_68) {
  // -0.238700997713855991895634
  s21_decimal dec_1 = {{0xf411d652, 0x1cbb8a9, 0x328c, 0x80180000}};
  // 9180458658555755508.7
  s21_decimal dec_2 = {{0x17bfd78f, 0xfa0b6919, 0x4, 0x10000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_69) {
  // 71.052467221294265556144532313
  s21_decimal dec_1 = {{0x82d4ab59, 0x16d05b2c, 0xe595392e, 0x1b0000}};
  // 939164
  s21_decimal dec_2 = {{0xe549c, 0x0, 0x0, 0x0}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_70) {
  // 919899548229
  s21_decimal dec_1 = {{0x2e492a45, 0xd6, 0x0, 0x0}};
  // 564448135.86417981606535859539
  s21_decimal dec_2 = {{0xa53f8d53, 0xcbf38625, 0xb6620e33, 0x140000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_71) {
  // -0.749056471
  s21_decimal dec_1 = {{0x2ca5b1d7, 0x0, 0x0, 0x80090000}};
  // 918272022950214322639122726
  s21_decimal dec_2 = {{0x9bfcb126, 0x1c5b08b0, 0x2f793aa, 0x0}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_72) {
  // 90657581964429351924
  s21_decimal dec_1 = {{0xe1abdbf4, 0xea206e78, 0x4, 0x0}};
  // 7.323019894865959
  s21_decimal dec_2 = {{0x6f844027, 0x1a043f, 0x0, 0xf0000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_73) {
  // 99305557299109189439668428
  s21_decimal dec_1 = {{0xcdcf40cc, 0xc5573bf, 0x5224c5, 0x0}};
  // -4041827.27972
  s21_decimal dec_2 = {{0x1b2afd24, 0x5e, 0x0, 0x80050000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_74) {
  // -870230296.2779638903868112
  s21_decimal dec_1 = {{0x900ad0, 0xc9f4eef0, 0x732c8, 0x80100000}};
  // 88152540395672591.668939
  s21_decimal dec_2 = {{0x315c16cb, 0xc24015b0, 0x12aa, 0x60000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_75) {
  // 944486633850.1079263216992553
  s21_decimal dec_1 = {{0xdfa50129, 0x26e32fc4, 0x1e849c3e, 0x100000}};
  // -3890.562358959003075363803
  s21_decimal dec_2 = {{0x100443db, 0xcedee666, 0x337db, 0x80150000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_76) {
  // -9.1825645
  s21_decimal dec_1 = {{0x57925ed, 0x0, 0x0, 0x80070000}};
  // 8016904639796528462936260
  s21_decimal dec_2 = {{0x92afb8c4, 0x457771bf, 0x6a1a5, 0x0}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_77) {
  // 91580778888503705909855
  s21_decimal dec_1 = {{0x876ba5f, 0x9a9ddf55, 0x1364, 0x0}};
  // -71.47690483
  s21_decimal dec_2 = {{0xaa0919f3, 0x1, 0x0, 0x80080000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_78) {
  // 82462284366577.440614
  s21_decimal dec_1 = {{0x3d189766, 0x7864e2ba, 0x4, 0x60000}};
  // -9857751902.59690619220348136
  s21_decimal dec_2 = {{0xb1b94ce8, 0x24a1c4e9, 0x32f6a04, 0x80110000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_79) {
  // 9369296314477723138164973069
  s21_decimal dec_1 = {{0xb1f6de0d, 0xf0dc2077, 0x1e4619aa, 0x0}};
  // 57.229820
  s21_decimal dec_2 = {{0x36941fc, 0x0, 0x0, 0x60000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_80) {
  // 702402988198385580
  s21_decimal dec_1 = {{0xd8bcd7ac, 0x9bf6fcb, 0x0, 0x0}};
  // 79228162514264337592084037017
  s21_decimal dec_2 = {{0xa8fb7d99, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1; // Результат слишком велик или положительная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_81) {
  // 50483624620
  s21_decimal dec_1 = {{0xc10efaac, 0xb, 0x0, 0x0}};
  // 93634066137559.318634600535755
  s21_decimal dec_2 = {{0xaf6316cb, 0x3fe9c71e, 0x2e8c48c0, 0xf0000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_82) {
  // 798971361028056
  s21_decimal dec_1 = {{0x428e7d8, 0x2d6a9, 0x0, 0x0}};
  // -875939.81825060647448977773
  s21_decimal dec_2 = {{0x732da16d, 0x45027ed4, 0x4874bf, 0x80140000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_83) {
  // 879874852708016528
  s21_decimal dec_1 = {{0x4a75e190, 0xc35f184, 0x0, 0x0}};
  // -74185022.25841876156
  s21_decimal dec_2 = {{0x30bfecbc, 0x66f3d078, 0x0, 0x800b0000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_84) {
  // -1648579634273829943905740
  s21_decimal dec_1 = {{0xd14e0dcc, 0xae5946cc, 0x15d19, 0x80000000}};
  // -79228162514264337591589017883
  s21_decimal dec_2 = {{0x8b7a191b, 0xffffffff, 0xffffffff, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_85) {
  // 0.9620353
  s21_decimal dec_1 = {{0x92cb81, 0x0, 0x0, 0x70000}};
  // 9315984393847277814717
  s21_decimal dec_2 = {{0xddbf03bd, 0x5413000, 0x1f9, 0x0}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_86) {
  // -699.372831130899279853
  s21_decimal dec_1 = {{0x3c816fed, 0xe9bf6c7a, 0x25, 0x80120000}};
  // 8353504058234.054394163575
  s21_decimal dec_2 = {{0xed7eb177, 0x5cc59a86, 0x6e8ec, 0xc0000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_87) {
  // 922637059243959250152595
  s21_decimal dec_1 = {{0x7a456c93, 0x4154f1bc, 0xc360, 0x0}};
  // 99986.24975390
  s21_decimal dec_2 = {{0xfc7d6a1e, 0x917, 0x0, 0x80000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_88) {
  // 9087537616807198204797855958
  s21_decimal dec_1 = {{0x398f28d6, 0x559509be, 0x1d5d08f1, 0x0}};
  // -590496062496616.93
  s21_decimal dec_2 = {{0xd4a344fd, 0xd1c94d, 0x0, 0x80020000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_89) {
  // 5745.9176883821145141221
  s21_decimal dec_1 = {{0x9fcaafe5, 0xde43b011, 0xc2a, 0x130000}};
  // 8805861308922216765347
  s21_decimal dec_2 = {{0x110ed7a3, 0x5ddfed03, 0x1dd, 0x0}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_90) {
  // 8050947183056256881681699
  s21_decimal dec_1 = {{0xd7846523, 0xb8a88b58, 0x6a8da, 0x0}};
  // 9774.437017510282245525
  s21_decimal dec_2 = {{0x20f7b595, 0xdf90183d, 0x211, 0x120000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_91) {
  // -82387129.7278107384917248
  s21_decimal dec_1 = {{0x4fc9ad00, 0x270b693a, 0xae76, 0x80100000}};
  // 89402492302343.22313
  s21_decimal dec_2 = {{0xb3938589, 0x7c12254e, 0x0, 0x50000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_92) {
  // 797331260566091712010005
  s21_decimal dec_1 = {{0x5f6d9715, 0x6a0bf2ca, 0xa8d7, 0x0}};
  // -9163.0306124837313422173
  s21_decimal dec_2 = {{0xfbf5a35d, 0x49f1f65e, 0x1367, 0x80130000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_93) {
  // 90008376662506435277869409
  s21_decimal dec_1 = {{0x2a05d161, 0xe03f83af, 0x4a7403, 0x0}};
  // 0.08005024250
  s21_decimal dec_2 = {{0xdd22f9fa, 0x1, 0x0, 0xb0000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_94) {
  // 935917884263695237564915553
  s21_decimal dec_1 = {{0x6374df61, 0x2b59a777, 0x3062c52, 0x0}};
  // -22055155508122605.00310553
  s21_decimal dec_2 = {{0x6b590a19, 0x3cd22d8d, 0x1d309, 0x80080000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_95) {
  // 80585427492787909921502.722240
  s21_decimal dec_1 = {{0x9c3cf8c0, 0xeaed9043, 0x462b409, 0x60000}};
  // -3176.7313218
  s21_decimal dec_2 = {{0x657abb42, 0x7, 0x0, 0x80070000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_96) {
  // 8370660302
  s21_decimal dec_1 = {{0xf2ee23ce, 0x1, 0x0, 0x0}};
  // 0.6567893800577332841385063588
  s21_decimal dec_2 = {{0xc38c74a4, 0x5cac198a, 0x1538d59c, 0x1c0000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_97) {
  // 973445373515261741558648911.90
  s21_decimal dec_1 = {{0x220d5f36, 0xce595362, 0x3a898397, 0x20000}};
  // -89415889296.097896030187126690
  s21_decimal dec_2 = {{0x4797fa2, 0x7a464a2c, 0x20eb170f, 0x80120000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_98) {
  // -79228162514264337592328685758
  s21_decimal dec_1 = {{0xb79088be, 0xffffffff, 0xffffffff, 0x80000000}};
  // -83369885919491
  s21_decimal dec_2 = {{0x106f6903, 0x4bd3, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_99) {
  // 1.5783972743002431779036
  s21_decimal dec_1 = {{0x63ed70dc, 0xa69fdeb0, 0x357, 0x160000}};
  // 8573783942158791194901
  s21_decimal dec_2 = {{0xb07b915, 0xc9277d8a, 0x1d0, 0x0}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_100) {
  // -0.9342433735542282
  s21_decimal dec_1 = {{0xdc25060a, 0x2130e4, 0x0, 0x80100000}};
  // 917585084747749972027630786
  s21_decimal dec_2 = {{0xa4f3e4c2, 0x1dbea5f1, 0x2f70233, 0x0}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_101) {
  // 796780087795263398400455784
  s21_decimal dec_1 = {{0xbb037468, 0x1bea18a9, 0x29314bf, 0x0}};
  // -2570.6975223414415
  s21_decimal dec_2 = {{0x9670fe8f, 0x5b545b, 0x0, 0x800d0000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_102) {
  // 8412885286143386
  s21_decimal dec_1 = {{0x7f04459a, 0x1de379, 0x0, 0x0}};
  // -882363114.0786548935842000
  s21_decimal dec_2 = {{0x225558d0, 0xaa8ffc, 0x74c7a, 0x80100000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_103) {
  // 80840507556946316871825
  s21_decimal dec_1 = {{0x529fc891, 0x5f68ffad, 0x111e, 0x0}};
  // -563971559402407.5899357217353
  s21_decimal dec_2 = {{0xbabdc249, 0xf649d3bb, 0x1239103a, 0x800d0000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_104) {
  // 955408493647507931846964344
  s21_decimal dec_1 = {{0x50907478, 0x389faed4, 0x3164b9e, 0x0}};
  // -14087694.935
  s21_decimal dec_2 = {{0x47b12a57, 0x3, 0x0, 0x80030000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_105) {
  // -93594501770.329451892157352
  s21_decimal dec_1 = {{0xbf01aba8, 0x1b8bf796, 0x4d6b68, 0x800f0000}};
  // -79228162514264337591690433350
  s21_decimal dec_2 = {{0x91859346, 0xffffffff, 0xffffffff, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_106) {
  // 87739699285.1
  s21_decimal dec_1 = {{0x48efa353, 0xcc, 0x0, 0x10000}};
  // 644075.001311814948048206207
  s21_decimal dec_2 = {{0xf255f97f, 0xc885ef7f, 0x214c42f, 0x150000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_107) {
  // -70843189877530755.63214
  s21_decimal dec_1 = {{0xe0f4dace, 0xaacf907, 0x180, 0x80050000}};
  // 911217707061018777820102387
  s21_decimal dec_2 = {{0x3e647ef3, 0xe150e8c2, 0x2f1bdda, 0x0}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_108) {
  // -6.9146311413209
  s21_decimal dec_1 = {{0x61544dd9, 0x3ee3, 0x0, 0x800d0000}};
  // 947112356285995383035456343.98
  s21_decimal dec_2 = {{0x7143ee5e, 0x5d9ef09a, 0x32074c43, 0x20000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_109) {
  // 8431248894897962.5638
  s21_decimal dec_1 = {{0xcfa6ea6, 0x921221fe, 0x4, 0x40000}};
  // -717118001.14277501102410
  s21_decimal dec_2 = {{0xdf47e94a, 0x81253288, 0xf2f, 0x800e0000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_110) {
  // 895568174959401232
  s21_decimal dec_1 = {{0x9c999910, 0xc6db282, 0x0, 0x0}};
  // 0.2490964789113
  s21_decimal dec_2 = {{0xf9124779, 0x243, 0x0, 0xd0000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_111) {
  // 8276340617
  s21_decimal dec_1 = {{0xed4eef89, 0x1, 0x0, 0x0}};
  // 4375748.2566327699468142316
  s21_decimal dec_2 = {{0x4dab46ec, 0xe20f4451, 0x243201, 0x130000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_112) {
  // -0.36036626334513003225917138
  s21_decimal dec_1 = {{0x1f0fa6d2, 0x6d94725b, 0x1dcf0d, 0x801a0000}};
  // 89777328008635.794660225091
  s21_decimal dec_2 = {{0xc5d37043, 0xb40e7091, 0x4a4316, 0xc0000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_113) {
  // 5.203411034
  s21_decimal dec_1 = {{0x3625c05a, 0x1, 0x0, 0x90000}};
  // 8298380686538776745965.51420
  s21_decimal dec_2 = {{0x6c32cafc, 0xd7a00539, 0x2ae6d0b, 0x50000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_114) {
  // 90606957611286221574511255
  s21_decimal dec_1 = {{0xc69e1a97, 0x3a41d1c, 0x4af2c5, 0x0}};
  // 17857721.364072
  s21_decimal dec_2 = {{0xd3236e68, 0x103d, 0x0, 0x60000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_115) {
  // 979299410870749221025
  s21_decimal dec_1 = {{0xe451d0a1, 0x168269a2, 0x35, 0x0}};
  // -0.4284596218388352
  s21_decimal dec_2 = {{0x4b9a5f80, 0xf38d1, 0x0, 0x80100000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_116) {
  // 8734466543889662377544
  s21_decimal dec_1 = {{0x52c7e48, 0x7f12c47b, 0x1d9, 0x0}};
  // -0.3882870710
  s21_decimal dec_2 = {{0xe76fe7b6, 0x0, 0x0, 0x800a0000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_117) {
  // -97117454202838945257313263
  s21_decimal dec_1 = {{0xca2553ef, 0xbddcb505, 0x50556b, 0x80000000}};
  // -79228162514264337591426646478
  s21_decimal dec_2 = {{0x81cc81ce, 0xffffffff, 0xffffffff, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_118) {
  // 28.164196124244495217
  s21_decimal dec_1 = {{0x9a06cb71, 0x86db5327, 0x1, 0x120000}};
  // 945765404463214334424393.543
  s21_decimal dec_2 = {{0x612c2747, 0x4f1cbff9, 0x30e519d, 0x30000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_119) {
  // -351.42473100263775818220
  s21_decimal dec_1 = {{0x36d851ec, 0x13c8e3e3, 0x771, 0x80140000}};
  // 792562228913.5541
  s21_decimal dec_2 = {{0xbd2af7b5, 0x1c284f, 0x0, 0x40000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_120) {
  // 7997398637971431743244198.6
  s21_decimal dec_1 = {{0x7af8cc82, 0x7d1f6a7f, 0x422726, 0x10000}};
  // -3340317.25818912017
  s21_decimal dec_2 = {{0xb9259d11, 0x4a2b815, 0x0, 0x800b0000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_121) {
  // 79228162514264337593149192522
  s21_decimal dec_1 = {{0xe878794a, 0xffffffff, 0xffffffff, 0x0}};
  // 9963281440.3028646933
  s21_decimal dec_2 = {{0x80f1fc15, 0x66aedcd2, 0x5, 0xa0000}};
  s21_decimal result;
  // overflow
  int check = 1; // Результат слишком велик или положительная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_122) {
  // -9.8706471241
  s21_decimal dec_1 = {{0xfb5d3949, 0x16, 0x0, 0x800a0000}};
  // 94591467610197695849300640
  s21_decimal dec_2 = {{0xb4a802a0, 0xbbec905a, 0x4e3e85, 0x0}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_123) {
  // -915.265995834331595681054943
  s21_decimal dec_1 = {{0xf1c040df, 0xde59797, 0x2f5171d, 0x80180000}};
  // 803551148803519556084422029
  s21_decimal dec_2 = {{0x61add58d, 0xfd21ee6, 0x298ae93, 0x0}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_124) {
  // -2933808305334562517775
  s21_decimal dec_1 = {{0x1d5af30f, 0xac4e5b8, 0x9f, 0x80000000}};
  // -79228162514264337592298106066
  s21_decimal dec_2 = {{0xb5bdecd2, 0xffffffff, 0xffffffff, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_125) {
  // 7178666.5720862694
  s21_decimal dec_1 = {{0x95e6d7e6, 0xff0997, 0x0, 0xa0000}};
  // 83708777097076367278
  s21_decimal dec_2 = {{0xfd975fae, 0x89b15142, 0x4, 0x0}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_126) {
  // 9145770975768385909901623
  s21_decimal dec_1 = {{0x959f4937, 0x3cf0c9f8, 0x790b1, 0x0}};
  // -72.611379840264514
  s21_decimal dec_2 = {{0x4e07a942, 0x101f7aa, 0x0, 0x800f0000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_127) {
  // 896568045
  s21_decimal dec_1 = {{0x35708aed, 0x0, 0x0, 0x0}};
  // -174.1451942491779620786713
  s21_decimal dec_2 = {{0x9b51d219, 0x4c891072, 0x170c4, 0x80160000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_128) {
  // 836657568470990974
  s21_decimal dec_1 = {{0x2f5b007e, 0xb9c67a0, 0x0, 0x0}};
  // 292.04443401869573768401733
  s21_decimal dec_2 = {{0xd50cd345, 0xc9393ba, 0x182848, 0x170000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_129) {
  // -16614731.156816046797545336314
  s21_decimal dec_1 = {{0x7998edfa, 0xc62d3d78, 0x35af622c, 0x80150000}};
  // 9639198110850350686150.07
  s21_decimal dec_2 = {{0x21c2695f, 0x329a1bcd, 0xcc1e, 0x20000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_130) {
  // -939864.4497
  s21_decimal dec_1 = {{0x3033ef11, 0x2, 0x0, 0x80040000}};
  // 793456537725513269839129663
  s21_decimal dec_2 = {{0xff5bec3f, 0x19471ddf, 0x29054f5, 0x0}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_131) {
  // 0.3567176269305852
  s21_decimal dec_1 = {{0xf26217fc, 0xcac53, 0x0, 0x100000}};
  // 8760129417378528.940366
  s21_decimal dec_2 = {{0x70dad14e, 0xe3379bf3, 0x1da, 0x60000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_132) {
  // -5.46107091619191573948328
  s21_decimal dec_1 = {{0x206ba7a8, 0x86567c47, 0x73a4, 0x80170000}};
  // 892894072048
  s21_decimal dec_2 = {{0xe4a24cf0, 0xcf, 0x0, 0x0}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_133) {
  // -79228162514264337591840225684
  s21_decimal dec_1 = {{0x9a733994, 0xffffffff, 0xffffffff, 0x80000000}};
  // -35187411191
  s21_decimal dec_2 = {{0x315548f7, 0x8, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 2; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_134) {
  // 875443892972.12505541305
  s21_decimal dec_1 = {{0xec514ab9, 0xca755bc2, 0x1289, 0xb0000}};
  // -732427.618901051735539238
  s21_decimal dec_2 = {{0x11bfe26, 0xfb1466ab, 0x9b18, 0x80120000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_135) {
  // -9.775293140559534640300208920
  s21_decimal dec_1 = {{0x596eb318, 0xfbde9108, 0x1f95eed6, 0x801b0000}};
  // 8626132358403495070412808649
  s21_decimal dec_2 = {{0xc6eba1c9, 0x280bb8de, 0x1bdf5e94, 0x0}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_136) {
  // 99034619879935155029
  s21_decimal dec_1 = {{0xa95f9b55, 0x5e61a612, 0x5, 0x0}};
  // -0.0949953560037470
  s21_decimal dec_2 = {{0x4c7fc85e, 0x35ffa, 0x0, 0x80100000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_137) {
  // 87293019875787.595536227692786
  s21_decimal dec_1 = {{0x6934f0f2, 0x9b829860, 0x1a0f17f9, 0xf0000}};
  // -37288496
  s21_decimal dec_2 = {{0x238fa30, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_138) {
  // 481151.92846732083880911898
  s21_decimal dec_1 = {{0xd485e41a, 0xd4a8b586, 0x27ccc9, 0x140000}};
  // 832720894930721
  s21_decimal dec_2 = {{0xf123af21, 0x2f55a, 0x0, 0x0}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_139) {
  // -32196.695401802082310815844
  s21_decimal dec_1 = {{0x75220064, 0x5ae627cb, 0x1aa1ea, 0x80150000}};
  // 851002918007.1347556906
  s21_decimal dec_2 = {{0x3969122a, 0x54611335, 0x1cd, 0xa0000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_140) {
  // 0.3697952106823226343771094867
  s21_decimal dec_1 = {{0xc1a03f53, 0x65f401e8, 0xbf2dfd1, 0x1c0000}};
  // 98270713.01644751
  s21_decimal dec_2 = {{0x561df1cf, 0x22e9ab, 0x0, 0x80000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_141) {
  // 0.9365286849569
  s21_decimal dec_1 = {{0x86988c21, 0x884, 0x0, 0xd0000}};
  // 9108164458290603559629890
  s21_decimal dec_2 = {{0x5a23442, 0x95abbbcc, 0x788ba, 0x0}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_142) {
  // 332855913955.69613076459607
  s21_decimal dec_1 = {{0xa8587057, 0x86720121, 0x1b887f, 0xe0000}};
  // 8252186906545352068.24
  s21_decimal dec_2 = {{0x4c88c7a8, 0xbc35baf4, 0x2c, 0x20000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_143) {
  // 88004904902106422613055
  s21_decimal dec_1 = {{0x662943f, 0xc165727f, 0x12a2, 0x0}};
  // -2261417.248763
  s21_decimal dec_2 = {{0x86f8c7fb, 0x20e, 0x0, 0x80060000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_144) {
  // 8057.084498551383754
  s21_decimal dec_1 = {{0xc57626ca, 0x6fd083a9, 0x0, 0xf0000}};
  // 8363107169075034902
  s21_decimal dec_2 = {{0x1f3d7b16, 0x740fb9a9, 0x0, 0x0}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_145) {
  // 8402855740766359
  s21_decimal dec_1 = {{0x4f86f897, 0x1dda5a, 0x0, 0x0}};
  // -68641713.9787193008683109
  s21_decimal dec_2 = {{0x5a127865, 0xbf69e294, 0x915a, 0x80100000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_146) {
  // 872910037270771762849
  s21_decimal dec_1 = {{0xad5786a1, 0x520f6e05, 0x2f, 0x0}};
  // 79228162514264337592236096653
  s21_decimal dec_2 = {{0xb20bbc8d, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1; // Результат слишком велик или положительная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_147) {
  // 8954345473746618315521669.3747
  s21_decimal dec_1 = {{0xf49a39f3, 0xe931a06e, 0x21549c17, 0x40000}};
  // -1842919495121
  s21_decimal dec_2 = {{0x168fd5d1, 0x1ad, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_148) {
  // 97496064814452512020033382
  s21_decimal dec_1 = {{0xc960ef66, 0x43978691, 0x50a598, 0x0}};
  // -29429273.3655
  s21_decimal dec_2 = {{0x8536bed7, 0x44, 0x0, 0x80040000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_149) {
  // 79873877948213312364185479
  s21_decimal dec_1 = {{0x26f78787, 0x998d7589, 0x4211f3, 0x0}};
  // 0.5251
  s21_decimal dec_2 = {{0x1483, 0x0, 0x0, 0x40000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_150) {
  // -756.53960098800365676274083826
  s21_decimal dec_1 = {{0x220367f2, 0xd0035b1c, 0xf4737d32, 0x801a0000}};
  // 79597663629236181932277
  s21_decimal dec_2 = {{0x44c418f5, 0xff7c604b, 0x10da, 0x0}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_151) {
  // 42816016865298361839360256382
  s21_decimal dec_1 = {{0xdc7da97e, 0x206a6f58, 0x8a58943d, 0x0}};
  // 79228162514264337593310934991
  s21_decimal dec_2 = {{0xf21c77cf, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1; // Результат слишком велик или положительная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_152) {
  // 789656390144.7811821332458
  s21_decimal dec_1 = {{0xf715e7ea, 0x963c3225, 0x68829, 0xd0000}};
  // 80957177042212386033244984
  s21_decimal dec_2 = {{0x4ae61b38, 0x5c82f11b, 0x42f759, 0x0}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_153) {
  // 8694519259752984.5293448879526
  s21_decimal dec_1 = {{0x4b22dda6, 0x1214567e, 0x18ef60af, 0xd0000}};
  // 37237095
  s21_decimal dec_2 = {{0x2383167, 0x0, 0x0, 0x0}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_154) {
  // 9201653257848546533648165.7
  s21_decimal dec_1 = {{0xdeeb8779, 0x39ef6092, 0x4c1d42, 0x10000}};
  // 73388287747521744.5462717
  s21_decimal dec_2 = {{0xd1b3a2bd, 0xded97194, 0x9b67, 0x70000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_155) {
  // 85382329004950
  s21_decimal dec_1 = {{0x9f63f396, 0x4da7, 0x0, 0x0}};
  // 0.99868941302088798282943
  s21_decimal dec_2 = {{0xdc17a4bf, 0xe7f9d9eb, 0x1525, 0x170000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_156) {
  // 89188317795174627277358
  s21_decimal dec_1 = {{0x620dfa2e, 0xe88c9ec0, 0x12e2, 0x0}};
  // -57738552749935.62803974806
  s21_decimal dec_2 = {{0xa78f3296, 0x5256e251, 0x4c6a9, 0x800b0000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_157) {
  // -2140255.1025990
  s21_decimal dec_1 = {{0x2b738146, 0x1377, 0x0, 0x80070000}};
  // 8194273023392014516067396
  s21_decimal dec_2 = {{0xab39c44, 0x6e4207df, 0x6c734, 0x0}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_158) {
  // 691647.400
  s21_decimal dec_1 = {{0x2939b3a8, 0x0, 0x0, 0x30000}};
  // 975173718979835306310812174
  s21_decimal dec_2 = {{0x26a2c20e, 0x3bc26aa4, 0x326a511, 0x0}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_159) {
  // 81714882824.660948951036
  s21_decimal dec_1 = {{0x58591ffc, 0xc5cdf906, 0x114d, 0xc0000}};
  // 9608584312.709037623015773749
  s21_decimal dec_2 = {{0x8b1e1635, 0x51454ed0, 0x1f0c08df, 0x120000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_160) {
  // -81389022339651919.81896502
  s21_decimal dec_1 = {{0x127b1336, 0xc6310731, 0x6bb7a, 0x80080000}};
  // 931257552455610398956880084.8
  s21_decimal dec_2 = {{0xde7d0850, 0xc209388b, 0x1e172e92, 0x10000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_161) {
  // 9200004946623027
  s21_decimal dec_1 = {{0x12c67a33, 0x20af5b, 0x0, 0x0}};
  // -985.365717232874937570270483
  s21_decimal dec_2 = {{0x512b9d13, 0x90da4d20, 0x32f134e, 0x80180000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_162) {
  // 8953259887582216883079
  s21_decimal dec_1 = {{0x23d68b87, 0x5b70df5a, 0x1e5, 0x0}};
  // 460.5157731
  s21_decimal dec_2 = {{0x127d2163, 0x1, 0x0, 0x70000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_163) {
  // 890302056703101775713849
  s21_decimal dec_1 = {{0x1f391639, 0x5f071d03, 0xbc87, 0x0}};
  // 11.78947308025981882481088781
  s21_decimal dec_2 = {{0x3411990d, 0xa160eef5, 0x3cf33cd, 0x1a0000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_164) {
  // 93311240575484.396
  s21_decimal dec_1 = {{0x340d81ec, 0x14b8214, 0x0, 0x30000}};
  // 4877766.09125316840395760
  s21_decimal dec_2 = {{0x7f7813f0, 0x6c47703d, 0x674a, 0x110000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_165) {
  // 87597576615224770
  s21_decimal dec_1 = {{0x2555e5c2, 0x1373588, 0x0, 0x0}};
  // -326.58824708269017253
  s21_decimal dec_2 = {{0xce2008a5, 0xc53b7409, 0x1, 0x80110000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_add_166) {
  // 8216755635840753039356745494
  s21_decimal dec_1 = {{0x2d9c5716, 0x8edc8d06, 0x1a8cbdaf, 0x0}};
  // 79228162514264337592572792992
  s21_decimal dec_2 = {{0xc61d50a0, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  // overflow
  int check = 1; // Результат слишком велик или положительная бесконечность.
  int return_value = s21_add(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

Suite *s21_add_cases500(void) {
  Suite *c = suite_create("s21_add_cases500");
  TCase *tc = tcase_create("s21_add_tc");
  //
  // tcase_add_test(tc, invalid_dec_s21_add_1);
  // tcase_add_test(tc, invalid_dec_s21_add_2);
  // tcase_add_test(tc, invalid_dec_s21_add_3);
  // tcase_add_test(tc, invalid_dec_s21_add_4);
  // tcase_add_test(tc, invalid_dec_s21_add_5);
  // tcase_add_test(tc, invalid_dec_s21_add_6);
  // tcase_add_test(tc, invalid_dec_s21_add_7);
  // tcase_add_test(tc, invalid_dec_s21_add_8);
  // tcase_add_test(tc, invalid_dec_s21_add_9);
  // tcase_add_test(tc, invalid_dec_s21_add_10);
  // tcase_add_test(tc, invalid_dec_s21_add_11);
  // tcase_add_test(tc, invalid_dec_s21_add_12);
  // tcase_add_test(tc, invalid_dec_s21_add_13);
  // tcase_add_test(tc, invalid_dec_s21_add_14);
  // tcase_add_test(tc, invalid_dec_s21_add_15);
  // tcase_add_test(tc, invalid_dec_s21_add_16);
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
  tcase_add_test(tc, s21_add_301);
  tcase_add_test(tc, s21_add_302);
  tcase_add_test(tc, s21_add_303);
  tcase_add_test(tc, s21_add_304);
  tcase_add_test(tc, s21_add_305);
  tcase_add_test(tc, s21_add_306);
  tcase_add_test(tc, s21_add_307);
  tcase_add_test(tc, s21_add_308);
  tcase_add_test(tc, s21_add_309);
  tcase_add_test(tc, s21_add_310);
  tcase_add_test(tc, s21_add_311);
  tcase_add_test(tc, s21_add_312);
  tcase_add_test(tc, s21_add_313);
  tcase_add_test(tc, s21_add_314);
  tcase_add_test(tc, s21_add_315);
  tcase_add_test(tc, s21_add_316);
  tcase_add_test(tc, s21_add_317);
  tcase_add_test(tc, s21_add_318);
  tcase_add_test(tc, s21_add_319);
  tcase_add_test(tc, s21_add_320);
  tcase_add_test(tc, s21_add_321);
  tcase_add_test(tc, s21_add_322);
  tcase_add_test(tc, s21_add_323);
  tcase_add_test(tc, s21_add_324);
  tcase_add_test(tc, s21_add_325);
  tcase_add_test(tc, s21_add_326);
  tcase_add_test(tc, s21_add_327);
  tcase_add_test(tc, s21_add_328);
  tcase_add_test(tc, s21_add_329);
  tcase_add_test(tc, s21_add_330);
  tcase_add_test(tc, s21_add_331);
  tcase_add_test(tc, s21_add_332);
  tcase_add_test(tc, s21_add_333);
  tcase_add_test(tc, s21_add_334);
  tcase_add_test(tc, s21_add_335);
  tcase_add_test(tc, s21_add_336);
  tcase_add_test(tc, s21_add_337);
  tcase_add_test(tc, s21_add_338);
  tcase_add_test(tc, s21_add_339);
  tcase_add_test(tc, s21_add_340);
  tcase_add_test(tc, s21_add_341);
  tcase_add_test(tc, s21_add_342);
  tcase_add_test(tc, s21_add_343);
  tcase_add_test(tc, s21_add_344);
  tcase_add_test(tc, s21_add_345);
  tcase_add_test(tc, s21_add_346);
  tcase_add_test(tc, s21_add_347);
  tcase_add_test(tc, s21_add_348);
  tcase_add_test(tc, s21_add_349);
  tcase_add_test(tc, s21_add_350);
  tcase_add_test(tc, s21_add_351);
  tcase_add_test(tc, s21_add_352);
  tcase_add_test(tc, s21_add_353);
  tcase_add_test(tc, s21_add_354);
  tcase_add_test(tc, s21_add_355);
  tcase_add_test(tc, s21_add_356);
  tcase_add_test(tc, s21_add_357);
  tcase_add_test(tc, s21_add_358);
  tcase_add_test(tc, s21_add_359);
  tcase_add_test(tc, s21_add_360);
  tcase_add_test(tc, s21_add_361);
  tcase_add_test(tc, s21_add_362);
  tcase_add_test(tc, s21_add_363);
  tcase_add_test(tc, s21_add_364);
  tcase_add_test(tc, s21_add_365);
  tcase_add_test(tc, s21_add_366);
  tcase_add_test(tc, s21_add_367);
  tcase_add_test(tc, s21_add_368);
  tcase_add_test(tc, s21_add_369);
  tcase_add_test(tc, s21_add_370);
  tcase_add_test(tc, s21_add_371);
  tcase_add_test(tc, s21_add_372);
  tcase_add_test(tc, s21_add_373);
  tcase_add_test(tc, s21_add_374);
  tcase_add_test(tc, s21_add_375);
  tcase_add_test(tc, s21_add_376);
  tcase_add_test(tc, s21_add_377);
  tcase_add_test(tc, s21_add_378);
  tcase_add_test(tc, s21_add_379);
  tcase_add_test(tc, s21_add_380);
  tcase_add_test(tc, s21_add_381);
  tcase_add_test(tc, s21_add_382);
  tcase_add_test(tc, s21_add_383);
  tcase_add_test(tc, s21_add_384);
  tcase_add_test(tc, s21_add_385);
  tcase_add_test(tc, s21_add_386);
  tcase_add_test(tc, s21_add_387);
  tcase_add_test(tc, s21_add_388);
  tcase_add_test(tc, s21_add_389);
  tcase_add_test(tc, s21_add_390);
  tcase_add_test(tc, s21_add_391);
  tcase_add_test(tc, s21_add_392);
  tcase_add_test(tc, s21_add_393);
  tcase_add_test(tc, s21_add_394);
  tcase_add_test(tc, s21_add_395);
  tcase_add_test(tc, s21_add_396);
  tcase_add_test(tc, s21_add_397);
  tcase_add_test(tc, s21_add_398);
  tcase_add_test(tc, s21_add_399);
  tcase_add_test(tc, s21_add_400);
  tcase_add_test(tc, s21_add_401);
  tcase_add_test(tc, s21_add_402);
  tcase_add_test(tc, s21_add_403);
  tcase_add_test(tc, s21_add_404);
  tcase_add_test(tc, s21_add_405);
  tcase_add_test(tc, s21_add_406);
  tcase_add_test(tc, s21_add_407);
  tcase_add_test(tc, s21_add_408);
  tcase_add_test(tc, s21_add_409);
  tcase_add_test(tc, s21_add_410);
  tcase_add_test(tc, s21_add_411);
  tcase_add_test(tc, s21_add_412);
  tcase_add_test(tc, s21_add_413);
  tcase_add_test(tc, s21_add_414);
  tcase_add_test(tc, s21_add_415);
  tcase_add_test(tc, s21_add_416);
  tcase_add_test(tc, s21_add_417);
  tcase_add_test(tc, s21_add_418);
  tcase_add_test(tc, s21_add_419);
  tcase_add_test(tc, s21_add_420);
  tcase_add_test(tc, s21_add_421);
  tcase_add_test(tc, s21_add_422);
  tcase_add_test(tc, s21_add_423);
  tcase_add_test(tc, s21_add_424);
  tcase_add_test(tc, s21_add_425);
  tcase_add_test(tc, s21_add_426);
  tcase_add_test(tc, s21_add_427);
  tcase_add_test(tc, s21_add_428);
  tcase_add_test(tc, s21_add_429);
  tcase_add_test(tc, s21_add_430);
  tcase_add_test(tc, s21_add_431);
  tcase_add_test(tc, s21_add_432);
  tcase_add_test(tc, s21_add_433);
  tcase_add_test(tc, s21_add_434);
  tcase_add_test(tc, s21_add_435);
  tcase_add_test(tc, s21_add_436);
  tcase_add_test(tc, s21_add_437);
  tcase_add_test(tc, s21_add_438);
  tcase_add_test(tc, s21_add_439);
  tcase_add_test(tc, s21_add_440);
  tcase_add_test(tc, s21_add_441);
  tcase_add_test(tc, s21_add_442);
  tcase_add_test(tc, s21_add_443);
  tcase_add_test(tc, s21_add_444);
  tcase_add_test(tc, s21_add_445);
  tcase_add_test(tc, s21_add_446);
  tcase_add_test(tc, s21_add_447);
  tcase_add_test(tc, s21_add_448);
  tcase_add_test(tc, s21_add_449);
  tcase_add_test(tc, s21_add_450);
  tcase_add_test(tc, s21_add_451);
  tcase_add_test(tc, s21_add_452);
  tcase_add_test(tc, s21_add_453);
  tcase_add_test(tc, s21_add_454);
  tcase_add_test(tc, s21_add_455);
  tcase_add_test(tc, s21_add_456);
  tcase_add_test(tc, s21_add_457);
  tcase_add_test(tc, s21_add_458);
  tcase_add_test(tc, s21_add_459);
  tcase_add_test(tc, s21_add_460);
  tcase_add_test(tc, s21_add_461);
  tcase_add_test(tc, s21_add_462);
  tcase_add_test(tc, s21_add_463);
  tcase_add_test(tc, s21_add_464);
  tcase_add_test(tc, s21_add_465);
  tcase_add_test(tc, s21_add_466);
  tcase_add_test(tc, s21_add_467);
  tcase_add_test(tc, s21_add_468);
  tcase_add_test(tc, s21_add_469);
  tcase_add_test(tc, s21_add_470);
  tcase_add_test(tc, s21_add_471);
  tcase_add_test(tc, s21_add_472);
  tcase_add_test(tc, s21_add_473);
  tcase_add_test(tc, s21_add_474);
  tcase_add_test(tc, s21_add_475);
  tcase_add_test(tc, s21_add_476);
  tcase_add_test(tc, s21_add_477);
  tcase_add_test(tc, s21_add_478);
  tcase_add_test(tc, s21_add_479);
  tcase_add_test(tc, s21_add_480);
  tcase_add_test(tc, s21_add_481);
  tcase_add_test(tc, s21_add_482);
  tcase_add_test(tc, s21_add_483);
  tcase_add_test(tc, s21_add_484);
  tcase_add_test(tc, s21_add_485);
  tcase_add_test(tc, s21_add_486);
  tcase_add_test(tc, s21_add_487);
  tcase_add_test(tc, s21_add_488);
  tcase_add_test(tc, s21_add_489);
  tcase_add_test(tc, s21_add_490);
  tcase_add_test(tc, s21_add_491);
  tcase_add_test(tc, s21_add_492);
  tcase_add_test(tc, s21_add_493);
  tcase_add_test(tc, s21_add_494);
  tcase_add_test(tc, s21_add_495);
  tcase_add_test(tc, s21_add_496);
  tcase_add_test(tc, s21_add_497);
  tcase_add_test(tc, s21_add_498);
  tcase_add_test(tc, s21_add_499);
  tcase_add_test(tc, s21_add_500);
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
  tcase_add_test(tc, fail_s21_add_101);
  tcase_add_test(tc, fail_s21_add_102);
  tcase_add_test(tc, fail_s21_add_103);
  tcase_add_test(tc, fail_s21_add_104);
  tcase_add_test(tc, fail_s21_add_105);
  tcase_add_test(tc, fail_s21_add_106);
  tcase_add_test(tc, fail_s21_add_107);
  tcase_add_test(tc, fail_s21_add_108);
  tcase_add_test(tc, fail_s21_add_109);
  tcase_add_test(tc, fail_s21_add_110);
  tcase_add_test(tc, fail_s21_add_111);
  tcase_add_test(tc, fail_s21_add_112);
  tcase_add_test(tc, fail_s21_add_113);
  tcase_add_test(tc, fail_s21_add_114);
  tcase_add_test(tc, fail_s21_add_115);
  tcase_add_test(tc, fail_s21_add_116);
  tcase_add_test(tc, fail_s21_add_117);
  tcase_add_test(tc, fail_s21_add_118);
  tcase_add_test(tc, fail_s21_add_119);
  tcase_add_test(tc, fail_s21_add_120);
  tcase_add_test(tc, fail_s21_add_121);
  tcase_add_test(tc, fail_s21_add_122);
  tcase_add_test(tc, fail_s21_add_123);
  tcase_add_test(tc, fail_s21_add_124);
  tcase_add_test(tc, fail_s21_add_125);
  tcase_add_test(tc, fail_s21_add_126);
  tcase_add_test(tc, fail_s21_add_127);
  tcase_add_test(tc, fail_s21_add_128);
  tcase_add_test(tc, fail_s21_add_129);
  tcase_add_test(tc, fail_s21_add_130);
  tcase_add_test(tc, fail_s21_add_131);
  tcase_add_test(tc, fail_s21_add_132);
  tcase_add_test(tc, fail_s21_add_133);
  tcase_add_test(tc, fail_s21_add_134);
  tcase_add_test(tc, fail_s21_add_135);
  tcase_add_test(tc, fail_s21_add_136);
  tcase_add_test(tc, fail_s21_add_137);
  tcase_add_test(tc, fail_s21_add_138);
  tcase_add_test(tc, fail_s21_add_139);
  tcase_add_test(tc, fail_s21_add_140);
  tcase_add_test(tc, fail_s21_add_141);
  tcase_add_test(tc, fail_s21_add_142);
  tcase_add_test(tc, fail_s21_add_143);
  tcase_add_test(tc, fail_s21_add_144);
  tcase_add_test(tc, fail_s21_add_145);
  tcase_add_test(tc, fail_s21_add_146);
  tcase_add_test(tc, fail_s21_add_147);
  tcase_add_test(tc, fail_s21_add_148);
  tcase_add_test(tc, fail_s21_add_149);
  tcase_add_test(tc, fail_s21_add_150);
  tcase_add_test(tc, fail_s21_add_151);
  tcase_add_test(tc, fail_s21_add_152);
  tcase_add_test(tc, fail_s21_add_153);
  tcase_add_test(tc, fail_s21_add_154);
  tcase_add_test(tc, fail_s21_add_155);
  tcase_add_test(tc, fail_s21_add_156);
  tcase_add_test(tc, fail_s21_add_157);
  tcase_add_test(tc, fail_s21_add_158);
  tcase_add_test(tc, fail_s21_add_159);
  tcase_add_test(tc, fail_s21_add_160);
  tcase_add_test(tc, fail_s21_add_161);
  tcase_add_test(tc, fail_s21_add_162);
  tcase_add_test(tc, fail_s21_add_163);
  tcase_add_test(tc, fail_s21_add_164);
  tcase_add_test(tc, fail_s21_add_165);
  tcase_add_test(tc, fail_s21_add_166);

  suite_add_tcase(c, tc);
  return c;
}
