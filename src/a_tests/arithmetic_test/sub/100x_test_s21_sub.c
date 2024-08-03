#include "../test.h"


START_TEST(s21_sub_1) {
  // -0.7
  s21_decimal dec_1 = {{0x7, 0x0, 0x0, 0x80010000}};
  // 32416.4366622684
  s21_decimal dec_2 = {{0x65ebdfdc, 0x126d3, 0x0, 0xa0000}};
  // -32417.1366622684
  s21_decimal dec_check = {{0x72765dc, 0x126d5, 0x0, 0x800a0000}};
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
  // -722087642942432471158293.08
  s21_decimal dec_1 = {{0x5655803c, 0xf4bd706e, 0x3bbacc, 0x80020000}};
  // 372863267860984513663617
  s21_decimal dec_2 = {{0x39bb9281, 0xf5500d4e, 0x4ef4, 0x0}};
  // -1094950910803416984821910.08
  s21_decimal dec_check = {{0xe39abaa0, 0xc802a2fc, 0x5a927c, 0x80020000}};
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
  // -12345645581511.63008382258
  s21_decimal dec_1 = {{0x71a5f532, 0xe0f91b1e, 0x1056d, 0x800b0000}};
  // 224578.5335
  s21_decimal dec_2 = {{0x85dbf6f7, 0x0, 0x0, 0x40000}};
  // -12345645806090.16358382258
  s21_decimal dec_check = {{0xe4fe2ab2, 0xe148e46a, 0x1056d, 0x800b0000}};
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
  // -4485725900464961323881326125
  s21_decimal dec_1 = {{0xebede62d, 0x52ab8ff9, 0xe7e8168, 0x80000000}};
  // 7
  s21_decimal dec_2 = {{0x7, 0x0, 0x0, 0x0}};
  // -4485725900464961323881326132
  s21_decimal dec_check = {{0xebede634, 0x52ab8ff9, 0xe7e8168, 0x80000000}};
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
  // 4534
  s21_decimal dec_1 = {{0x11b6, 0x0, 0x0, 0x0}};
  // 1181
  s21_decimal dec_2 = {{0x49d, 0x0, 0x0, 0x0}};
  // 3353
  s21_decimal dec_check = {{0xd19, 0x0, 0x0, 0x0}};
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
  // 248267218.84
  s21_decimal dec_1 = {{0xc7c9b65c, 0x5, 0x0, 0x20000}};
  // 48101983437090.6117743
  s21_decimal dec_2 = {{0xdb17d66f, 0x137dbece, 0x1a, 0x70000}};
  // -48101735169871.7717743
  s21_decimal dec_check = {{0xb135b4ef, 0x1374ecd4, 0x1a, 0x80070000}};
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
  // -41733.750809
  s21_decimal dec_1 = {{0xb7868019, 0x9, 0x0, 0x80060000}};
  // 369508311920626
  s21_decimal dec_2 = {{0xdbac6ff2, 0x15010, 0x0, 0x0}};
  // -369508311962359.750809
  s21_decimal dec_check = {{0xa6ace099, 0x7f53bfd, 0x14, 0x80060000}};
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
  // 3378456285
  s21_decimal dec_1 = {{0xc95f26dd, 0x0, 0x0, 0x0}};
  // 796841807037
  s21_decimal dec_2 = {{0x87790cbd, 0xb9, 0x0, 0x0}};
  // -793463350752
  s21_decimal dec_check = {{0xbe19e5e0, 0xb8, 0x0, 0x80000000}};
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
  // 2688213294.1004945274482
  s21_decimal dec_1 = {{0x12a0b672, 0x48896a33, 0x5b1, 0xd0000}};
  // 99615019375816443
  s21_decimal dec_2 = {{0x14306efb, 0x161e755, 0x0, 0x0}};
  // -99615016687603148.899505472552
  s21_decimal dec_check = {{0x1c0d0428, 0x3e73dfa2, 0x41df9c4b, 0x800c0000}};
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
  // -134643413670776
  s21_decimal dec_1 = {{0x1cd7db78, 0x7a75, 0x0, 0x80000000}};
  // 589.6
  s21_decimal dec_2 = {{0x1708, 0x0, 0x0, 0x10000}};
  // -134643413671365.6
  s21_decimal dec_check = {{0x206ea9b8, 0x4c893, 0x0, 0x80010000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_11) {
  // 672639861455649661574218630
  s21_decimal dec_1 = {{0x48dc8386, 0xf45bf5db, 0x22c6507, 0x0}};
  // 4275688002744419.246
  s21_decimal dec_2 = {{0xbdfb03ae, 0x3b564b95, 0x0, 0x30000}};
  // 672639861451373973571474210.75
  s21_decimal dec_check = {{0x7cbd7993, 0x6dfd0219, 0xd957771b, 0x20000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_12) {
  // -667674373487663.0
  s21_decimal dec_1 = {{0x8a92d9d6, 0x17b876, 0x0, 0x80010000}};
  // 8736.949939012626390137822027
  s21_decimal dec_2 = {{0xede1db4b, 0x3d1d5c31, 0x1c3b091d, 0x180000}};
  // -667674373496399.94993901262639
  s21_decimal dec_check = {{0xc6f7572f, 0x49d97967, 0xd7bcbacf, 0x800e0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_13) {
  // -894.00492399151094045736
  s21_decimal dec_1 = {{0x3a8a1c28, 0x69103ceb, 0x12ee, 0x80140000}};
  // 83.7
  s21_decimal dec_2 = {{0x345, 0x0, 0x0, 0x10000}};
  // -977.70492399151094045736
  s21_decimal dec_check = {{0x1e121c28, 0x2625bac2, 0x14b4, 0x80140000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_14) {
  // -6782619895788228628
  s21_decimal dec_1 = {{0xfef45014, 0x5e20b4db, 0x0, 0x80000000}};
  // -7.69895093491854714
  s21_decimal dec_2 = {{0x29e5ed7a, 0xaaf3782, 0x0, 0x80110000}};
  // -6782619895788228620.3010490651
  s21_decimal dec_check = {{0xab3f211b, 0x1418aded, 0xdb28844d, 0x800a0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_15) {
  // -71.55035761
  s21_decimal dec_1 = {{0xaa792e71, 0x1, 0x0, 0x80080000}};
  // 38963325381
  s21_decimal dec_2 = {{0x126529c5, 0x9, 0x0, 0x0}};
  // -38963325452.55035761
  s21_decimal dec_check = {{0x66b85371, 0x36128dce, 0x0, 0x80080000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_16) {
  // 52819032268835785
  s21_decimal dec_1 = {{0x47c38bc9, 0xbba6a1, 0x0, 0x0}};
  // -17.6221
  s21_decimal dec_2 = {{0x2b05d, 0x0, 0x0, 0x80040000}};
  // 52819032268835802.6221
  s21_decimal dec_check = {{0x46870bed, 0xa21cfc03, 0x1c, 0x40000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_17) {
  // -0.2383760
  s21_decimal dec_1 = {{0x245f90, 0x0, 0x0, 0x80070000}};
  // -2675237397394762
  s21_decimal dec_2 = {{0x3ec2f54a, 0x9811d, 0x0, 0x80000000}};
  // 2675237397394761.7616240
  s21_decimal dec_check = {{0x40ffa170, 0x3fc4f527, 0x5aa, 0x70000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_18) {
  // 653007
  s21_decimal dec_1 = {{0x9f6cf, 0x0, 0x0, 0x0}};
  // -8.3514053
  s21_decimal dec_2 = {{0x4fa52c5, 0x0, 0x0, 0x80070000}};
  // 653015.3514053
  s21_decimal dec_check = {{0x6b7b0445, 0x5f0, 0x0, 0x70000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_19) {
  // -64924195823959624950768521470
  s21_decimal dec_1 = {{0xc684d0fe, 0xf5e7b801, 0xd1c8093b, 0x80000000}};
  // -9130486162094.33192496
  s21_decimal dec_2 = {{0x513b6830, 0x7f184ee7, 0x31, 0x80080000}};
  // -64924195823959615820282359376
  s21_decimal dec_check = {{0xeb226e50, 0xf5e7afb3, 0xd1c8093b, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_20) {
  // 4557851188868297526303
  s21_decimal dec_1 = {{0xc2b80c1f, 0x14e443be, 0xf7, 0x0}};
  // 61
  s21_decimal dec_2 = {{0x3d, 0x0, 0x0, 0x0}};
  // 4557851188868297526242
  s21_decimal dec_check = {{0xc2b80be2, 0x14e443be, 0xf7, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_21) {
  // -83753149490.1
  s21_decimal dec_1 = {{0xc469f5, 0xc3, 0x0, 0x80010000}};
  // -92.7879702661998
  s21_decimal dec_2 = {{0xd4124b6e, 0x34be6, 0x0, 0x800d0000}};
  // -83753149397.3120297338002
  s21_decimal dec_check = {{0xa1760492, 0xac5b1084, 0xb15a, 0x800d0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_22) {
  // 370368084751505040
  s21_decimal dec_1 = {{0x8fc15690, 0x523cfcf, 0x0, 0x0}};
  // 191572297686072041863
  s21_decimal dec_2 = {{0x7fb62187, 0x629985c0, 0xa, 0x0}};
  // -191201929601320536823
  s21_decimal dec_check = {{0xeff4caf7, 0x5d75b5f0, 0xa, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_23) {
  // -8123996
  s21_decimal dec_1 = {{0x7bf65c, 0x0, 0x0, 0x80000000}};
  // -6448612605150075701418341519
  s21_decimal dec_2 = {{0x2649348f, 0xcd1201f0, 0x14d62ad5, 0x80000000}};
  // 6448612605150075701410217523
  s21_decimal dec_check = {{0x25cd3e33, 0xcd1201f0, 0x14d62ad5, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_24) {
  // 631917722428934612
  s21_decimal dec_1 = {{0xca689d4, 0x8c505d2, 0x0, 0x0}};
  // 64023066583612832027
  s21_decimal dec_2 = {{0x5b6cb91b, 0x787f9fd9, 0x3, 0x0}};
  // -63391148861183897415
  s21_decimal dec_check = {{0x4ec62f47, 0x6fba9a07, 0x3, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_25) {
  // 414014
  s21_decimal dec_1 = {{0x6513e, 0x0, 0x0, 0x0}};
  // -99835.125214
  s21_decimal dec_2 = {{0x3ea31dde, 0x17, 0x0, 0x80060000}};
  // 513849.125214
  s21_decimal dec_check = {{0xa3cb695e, 0x77, 0x0, 0x60000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_26) {
  // -2900568646164924
  s21_decimal dec_1 = {{0x43cd21bc, 0xa4e0d, 0x0, 0x80000000}};
  // -65157232035930655332.2157
  s21_decimal dec_2 = {{0xafe9eaad, 0xce6744ae, 0x89f9, 0x80040000}};
  // 65154331467284490408.2157
  s21_decimal dec_check = {{0x32f42aed, 0x3bde5e86, 0x89f8, 0x40000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_27) {
  // -0.9
  s21_decimal dec_1 = {{0x9, 0x0, 0x0, 0x80010000}};
  // -5412440480599988
  s21_decimal dec_2 = {{0x36cfb4, 0x133a96, 0x0, 0x80000000}};
  // 5412440480599987.1
  s21_decimal dec_check = {{0x2241cff, 0xc049dc, 0x0, 0x10000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_28) {
  // -96.9491517455855327192688
  s21_decimal dec_1 = {{0x94252670, 0x3d8f8be5, 0xcd4c, 0x80160000}};
  // 39190108728545720893436188
  s21_decimal dec_2 = {{0x806bf11c, 0xd199552, 0x206ad4, 0x0}};
  // -39190108728545720893436284.949
  s21_decimal dec_check = {{0xa5a75015, 0x2bef4a45, 0x7ea14c53, 0x80030000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_29) {
  // -91443483734
  s21_decimal dec_1 = {{0x4a74d456, 0x15, 0x0, 0x80000000}};
  // 1015428784451376
  s21_decimal dec_2 = {{0xeffdef30, 0x39b86, 0x0, 0x0}};
  // -1015520227935110
  s21_decimal dec_check = {{0x3a72c386, 0x39b9c, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_30) {
  // -6
  s21_decimal dec_1 = {{0x6, 0x0, 0x0, 0x80000000}};
  // -66535674472.270606
  s21_decimal dec_2 = {{0xe9cf8b0e, 0xec61d7, 0x0, 0x80060000}};
  // 66535674466.270606
  s21_decimal dec_check = {{0xe973fd8e, 0xec61d7, 0x0, 0x60000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_31) {
  // 2679
  s21_decimal dec_1 = {{0xa77, 0x0, 0x0, 0x0}};
  // 185206020818201039425
  s21_decimal dec_2 = {{0xac795241, 0xa3ff6ab, 0xa, 0x0}};
  // -185206020818201036746
  s21_decimal dec_check = {{0xac7947ca, 0xa3ff6ab, 0xa, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_32) {
  // -841753.69166361716059
  s21_decimal dec_1 = {{0xce5be55b, 0x902afc46, 0x4, 0x800e0000}};
  // 416508939.488653770
  s21_decimal dec_2 = {{0x77fef1ca, 0x5c7bcac, 0x0, 0x90000}};
  // -417350693.18031738716059
  s21_decimal dec_check = {{0x320cbf9b, 0x766fa6e0, 0x8d6, 0x800e0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_33) {
  // -7088865
  s21_decimal dec_1 = {{0x6c2ae1, 0x0, 0x0, 0x80000000}};
  // 554282114487630934316928
  s21_decimal dec_2 = {{0xf76c1780, 0xb1920dfe, 0x755f, 0x0}};
  // -554282114487630941405793
  s21_decimal dec_check = {{0xf7d84261, 0xb1920dfe, 0x755f, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_34) {
  // -4990466591263850
  s21_decimal dec_1 = {{0x8c6f8c6a, 0x11bacd, 0x0, 0x80000000}};
  // 94714235270680685510990
  s21_decimal dec_2 = {{0x9ffb014e, 0x780f3928, 0x140e, 0x0}};
  // -94714240261147276774840
  s21_decimal dec_check = {{0x2c6a8db8, 0x7820f3f6, 0x140e, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_35) {
  // -54291244850970
  s21_decimal dec_1 = {{0xaa5d1f1a, 0x3160, 0x0, 0x80000000}};
  // 749072961446409567485112
  s21_decimal dec_2 = {{0xcf183cb8, 0x539c8cdd, 0x9e9f, 0x0}};
  // -749072961500700812336082
  s21_decimal dec_check = {{0x79755bd2, 0x539cbe3e, 0x9e9f, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_36) {
  // -5730343.8355148
  s21_decimal dec_1 = {{0xff166acc, 0x341d, 0x0, 0x80070000}};
  // -435750659
  s21_decimal dec_2 = {{0x19f90703, 0x0, 0x0, 0x80000000}};
  // 430020315.1644852
  s21_decimal dec_check = {{0x1150d8b4, 0xf4703, 0x0, 0x70000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_37) {
  // 40
  s21_decimal dec_1 = {{0x28, 0x0, 0x0, 0x0}};
  // 316
  s21_decimal dec_2 = {{0x13c, 0x0, 0x0, 0x0}};
  // -276
  s21_decimal dec_check = {{0x114, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_38) {
  // 13962595
  s21_decimal dec_1 = {{0xd50d63, 0x0, 0x0, 0x0}};
  // -0.3351286492655290915455986516
  s21_decimal dec_2 = {{0x823b6b54, 0xcc43ce78, 0xad41e84, 0x801c0000}};
  // 13962595.335128649265529091546
  s21_decimal dec_check = {{0x9035f5da, 0xcb4b9dde, 0x2d1d9691, 0x150000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_39) {
  // -963933147844205945914316
  s21_decimal dec_1 = {{0x24d583cc, 0xebafcb9b, 0xcc1e, 0x80000000}};
  // 1917068992252.33384945393
  s21_decimal dec_2 = {{0x9c2236f1, 0x73ab32aa, 0x2898, 0xb0000}};
  // -963933147846123014906568.33385
  s21_decimal dec_check = {{0x98aef69, 0x20b6af7d, 0x3776ae61, 0x80050000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_40) {
  // -321945776
  s21_decimal dec_1 = {{0x133080b0, 0x0, 0x0, 0x80000000}};
  // -12681321874107410586
  s21_decimal dec_2 = {{0x5490289a, 0xaffd1b0e, 0x0, 0x80000000}};
  // 12681321873785464810
  s21_decimal dec_check = {{0x415fa7ea, 0xaffd1b0e, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_41) {
  // -3881697491
  s21_decimal dec_1 = {{0xe75e00d3, 0x0, 0x0, 0x80000000}};
  // 464401982277294481752880
  s21_decimal dec_2 = {{0x6e284330, 0x482ae60b, 0x6257, 0x0}};
  // -464401982277298363450371
  s21_decimal dec_check = {{0x55864403, 0x482ae60c, 0x6257, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_42) {
  // 14546697118514563
  s21_decimal dec_1 = {{0xda677d83, 0x33ae24, 0x0, 0x0}};
  // -1.3
  s21_decimal dec_2 = {{0xd, 0x0, 0x0, 0x80010000}};
  // 14546697118514564.3
  s21_decimal dec_check = {{0x880ae72b, 0x204cd70, 0x0, 0x10000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_43) {
  // 9.831313643
  s21_decimal dec_1 = {{0x49fdf0eb, 0x2, 0x0, 0x90000}};
  // 344143445514274813130.302
  s21_decimal dec_2 = {{0x476363e, 0xdb6591d, 0x48e0, 0x30000}};
  // -344143445514274813120.47068636
  s21_decimal dec_check = {{0xa5eaf5dc, 0x5db9e6ee, 0x6f32e0ec, 0x80080000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_44) {
  // -9528864304.80475046333
  s21_decimal dec_1 = {{0xceab41bd, 0xa7f4a7e9, 0x33, 0x800b0000}};
  // -390938789534657159365013
  s21_decimal dec_2 = {{0xe6000195, 0xd591274a, 0x52c8, 0x80000000}};
  // 390938789534647630500708.19525
  s21_decimal dec_check = {{0x9936c2c5, 0x9c91468e, 0x7e51b2e0, 0x50000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_45) {
  // 38933355839775
  s21_decimal dec_1 = {{0xe0d8411f, 0x2368, 0x0, 0x0}};
  // 61497
  s21_decimal dec_2 = {{0xf039, 0x0, 0x0, 0x0}};
  // 38933355778278
  s21_decimal dec_check = {{0xe0d750e6, 0x2368, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_46) {
  // -778064875736573852.59
  s21_decimal dec_1 = {{0x38b1792b, 0x37c82c36, 0x4, 0x80020000}};
  // 878674.23
  s21_decimal dec_2 = {{0x53cc01f, 0x0, 0x0, 0x20000}};
  // -778064875737452526.82
  s21_decimal dec_check = {{0x3dee394a, 0x37c82c36, 0x4, 0x80020000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_47) {
  // -95
  s21_decimal dec_1 = {{0x5f, 0x0, 0x0, 0x80000000}};
  // -78814880252917192530
  s21_decimal dec_2 = {{0xca141752, 0x45c6b402, 0x4, 0x80000000}};
  // 78814880252917192435
  s21_decimal dec_check = {{0xca1416f3, 0x45c6b402, 0x4, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_48) {
  // -32739025
  s21_decimal dec_1 = {{0x1f38ed1, 0x0, 0x0, 0x80000000}};
  // -9688814129830957892517489
  s21_decimal dec_2 = {{0xb5003e71, 0xaa9a67f0, 0x803af, 0x80000000}};
  // 9688814129830957859778464
  s21_decimal dec_check = {{0xb30cafa0, 0xaa9a67f0, 0x803af, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_49) {
  // 893601.50148205287
  s21_decimal dec_1 = {{0x46a8cae7, 0x13d7895, 0x0, 0xb0000}};
  // 6299417727183407304
  s21_decimal dec_2 = {{0x1090c8c8, 0x576c070c, 0x0, 0x0}};
  // -6299417727182513702.4985179471
  s21_decimal dec_check = {{0x12bfa54f, 0x9a3cc929, 0xcb8b8fe8, 0x800a0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_50) {
  // 7019
  s21_decimal dec_1 = {{0x1b6b, 0x0, 0x0, 0x0}};
  // 0.1588615857610198497
  s21_decimal dec_2 = {{0xa5688de1, 0x160be5b4, 0x0, 0x130000}};
  // 7018.8411384142389801503
  s21_decimal dec_check = {{0x768f721f, 0xebe137bc, 0xedc, 0x130000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_51) {
  // 1915995.9
  s21_decimal dec_1 = {{0x1245b97, 0x0, 0x0, 0x10000}};
  // -1.4
  s21_decimal dec_2 = {{0xe, 0x0, 0x0, 0x80010000}};
  // 1915997.3
  s21_decimal dec_check = {{0x1245ba5, 0x0, 0x0, 0x10000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_52) {
  // 5904833864503
  s21_decimal dec_1 = {{0xd3866337, 0x55e, 0x0, 0x0}};
  // -67300860618001
  s21_decimal dec_2 = {{0xb3e3e511, 0x3d35, 0x0, 0x80000000}};
  // 73205694482504
  s21_decimal dec_check = {{0x876a4848, 0x4294, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_53) {
  // 937.70368
  s21_decimal dec_1 = {{0x596d280, 0x0, 0x0, 0x50000}};
  // 36112185
  s21_decimal dec_2 = {{0x2270739, 0x0, 0x0, 0x0}};
  // -36111247.29632
  s21_decimal dec_check = {{0xc7ce8720, 0x348, 0x0, 0x80050000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_54) {
  // -2512617
  s21_decimal dec_1 = {{0x2656e9, 0x0, 0x0, 0x80000000}};
  // 9.95666852748767542
  s21_decimal dec_2 = {{0x30b8b136, 0xdd151ba, 0x0, 0x110000}};
  // -2512626.95666852748767542
  s21_decimal dec_check = {{0xaf52b136, 0xfa5fde2f, 0x3534, 0x80110000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_55) {
  // -632803826
  s21_decimal dec_1 = {{0x25b7d1f2, 0x0, 0x0, 0x80000000}};
  // -702993933594.56994145972437685
  s21_decimal dec_2 = {{0x22fac2b5, 0x3c9ff6a6, 0xe3264b96, 0x80110000}};
  // 702361129768.56994145972437685
  s21_decimal dec_check = {{0xc86c2b5, 0xd28136da, 0xe2f1f371, 0x110000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_56) {
  // 10411703769636594087644031565
  s21_decimal dec_1 = {{0xe3e6ea4d, 0x50d6aadd, 0x21a45c08, 0x0}};
  // -84273046373004818303136.380
  s21_decimal dec_2 = {{0x3f0fb27c, 0xff7b902b, 0x45b582, 0x80030000}};
  // 10411788042682967092462334701
  s21_decimal dec_check = {{0x167b2ed, 0xc44b4561, 0x21a46de0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_57) {
  // -19136375.4151820603795514272
  s21_decimal dec_1 = {{0xb73923a0, 0xe639ca09, 0x9e4ad9, 0x80130000}};
  // -61909582811.841476455920159469
  s21_decimal dec_2 = {{0x3885caed, 0x1d0d97a4, 0xc80a6819, 0x80120000}};
  // 61890446436.426294395540608042
  s21_decimal dec_check = {{0x7300142a, 0x1fa169d6, 0xc7fa93d0, 0x120000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_58) {
  // 568.6805683618493027725968359
  s21_decimal dec_1 = {{0x589583e7, 0xd587da9c, 0x126003f1, 0x190000}};
  // 429424374946491501386880
  s21_decimal dec_2 = {{0x43781c80, 0x245ae1fc, 0x5aef, 0x0}};
  // -429424374946491501386311.31943
  s21_decimal dec_check = {{0x23191327, 0x2d138c73, 0x8ac126d9, 0x80050000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_59) {
  // 78.859854
  s21_decimal dec_1 = {{0x4b34e4e, 0x0, 0x0, 0x60000}};
  // 4478910069202912034919257668
  s21_decimal dec_2 = {{0x6ab79644, 0x5eae7bdb, 0xe78de19, 0x0}};
  // -4478910069202912034919257589.1
  s21_decimal dec_check = {{0x2b2bdb93, 0xb2d0d692, 0x90b8acfd, 0x80010000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_60) {
  // 4664668
  s21_decimal dec_1 = {{0x472d5c, 0x0, 0x0, 0x0}};
  // 5995536
  s21_decimal dec_2 = {{0x5b7c10, 0x0, 0x0, 0x0}};
  // -1330868
  s21_decimal dec_check = {{0x144eb4, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_61) {
  // 1590902994595106.989
  s21_decimal dec_1 = {{0x38f250ad, 0x161405d8, 0x0, 0x30000}};
  // -635835392665548345
  s21_decimal dec_2 = {{0xbb737639, 0x8d2f0eb, 0x0, 0x80000000}};
  // 637426295660143451.989
  s21_decimal dec_check = {{0x73f81f55, 0x8e111eac, 0x22, 0x30000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_62) {
  // 39778212.3
  s21_decimal dec_1 = {{0x17b5ac6b, 0x0, 0x0, 0x10000}};
  // -98881695231838348735057829
  s21_decimal dec_2 = {{0x2cc68fa5, 0x70812266, 0x51cb03, 0x80000000}};
  // 98881695231838348774836041.3
  s21_decimal dec_check = {{0xd77748dd, 0x650b57fd, 0x331ee22, 0x10000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_63) {
  // 66479652324.12491
  s21_decimal dec_1 = {{0x628374b, 0x179e4a, 0x0, 0x50000}};
  // 17177.9569010090999869
  s21_decimal dec_2 = {{0x342c803d, 0x4feb9fe3, 0x9, 0x100000}};
  // 66479635146.1680089909000131
  s21_decimal dec_check = {{0xd28177c3, 0x6cfe9384, 0x225e81a, 0x100000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_64) {
  // 258261425863262.4046
  s21_decimal dec_1 = {{0x25a807ae, 0x23d749fc, 0x0, 0x40000}};
  // 35637836685
  s21_decimal dec_2 = {{0x4c2e3b8d, 0x8, 0x0, 0x0}};
  // 258225788026577.4046
  s21_decimal dec_check = {{0x57b1d3de, 0x23d605dc, 0x0, 0x40000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_65) {
  // -0.79
  s21_decimal dec_1 = {{0x4f, 0x0, 0x0, 0x80020000}};
  // 45099906.52
  s21_decimal dec_2 = {{0xcd0fefc, 0x1, 0x0, 0x20000}};
  // -45099907.31
  s21_decimal dec_check = {{0xcd0ff4b, 0x1, 0x0, 0x80020000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_66) {
  // -1
  s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x80000000}};
  // -6186460163181347291847590907
  s21_decimal dec_2 = {{0xb5ba03fb, 0x7220c06a, 0x13fd51e5, 0x80000000}};
  // 6186460163181347291847590906
  s21_decimal dec_check = {{0xb5ba03fa, 0x7220c06a, 0x13fd51e5, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_67) {
  // -85.17776
  s21_decimal dec_1 = {{0x81f890, 0x0, 0x0, 0x80050000}};
  // -5.9
  s21_decimal dec_2 = {{0x3b, 0x0, 0x0, 0x80010000}};
  // -79.27776
  s21_decimal dec_check = {{0x78f7e0, 0x0, 0x0, 0x80050000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_68) {
  // 44752755695006805
  s21_decimal dec_1 = {{0xe9ebb455, 0x9efe64, 0x0, 0x0}};
  // 544938562047312455198685622
  s21_decimal dec_2 = {{0xb559b9b6, 0xa4635cca, 0x1c2c33a, 0x0}};
  // -544938562002559699503678817
  s21_decimal dec_check = {{0xcb6e0561, 0xa3c45e65, 0x1c2c33a, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_69) {
  // -541231555786568427.4987
  s21_decimal dec_1 = {{0xb8410f2b, 0x66f78433, 0x125, 0x80040000}};
  // -44979060141936659142
  s21_decimal dec_2 = {{0xcb10cac6, 0x7035b8e3, 0x2, 0x80000000}};
  // 44437828586150090714.5013
  s21_decimal dec_check = {{0x87afc735, 0xcb8ebdf8, 0x5e19, 0x40000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_70) {
  // 711031659322768175510023650
  s21_decimal dec_1 = {{0x10df6de2, 0x7cb8375a, 0x24c26cf, 0x0}};
  // 424762625134925008.8
  s21_decimal dec_2 = {{0x1a4bd028, 0x3af29992, 0x0, 0x10000}};
  // 711031658898005550375098641.2
  s21_decimal dec_check = {{0x8e6e7aac, 0xa43f8ff2, 0x16f9841a, 0x10000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_71) {
  // -56.672906610173072070167462
  s21_decimal dec_1 = {{0x20284ba6, 0x6c63585f, 0x2ee0f4, 0x80180000}};
  // -520
  s21_decimal dec_2 = {{0x208, 0x0, 0x0, 0x80000000}};
  // 463.327093389826927929832538
  s21_decimal dec_check = {{0xe7d7b45a, 0xfacea4f, 0x17f4154, 0x180000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_72) {
  // -4204228076583132052626522418
  s21_decimal dec_1 = {{0xa22c132, 0xb67a0363, 0xd95a7ec, 0x80000000}};
  // -92736
  s21_decimal dec_2 = {{0x16a40, 0x0, 0x0, 0x80000000}};
  // -4204228076583132052626429682
  s21_decimal dec_check = {{0xa2156f2, 0xb67a0363, 0xd95a7ec, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_73) {
  // 484800605818
  s21_decimal dec_1 = {{0xe05e2e7a, 0x70, 0x0, 0x0}};
  // 42.26930059
  s21_decimal dec_2 = {{0xfbf1d58b, 0x0, 0x0, 0x80000}};
  // 484800605775.73069941
  s21_decimal dec_check = {{0xa7a96475, 0xa0cbc63c, 0x2, 0x80000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_74) {
  // -45926725214291340
  s21_decimal dec_1 = {{0xfe18458c, 0xa32a1c, 0x0, 0x80000000}};
  // -0.441
  s21_decimal dec_2 = {{0x1b9, 0x0, 0x0, 0x80030000}};
  // -45926725214291339.559
  s21_decimal dec_check = {{0x8ecfa927, 0x7d5c8140, 0x2, 0x80030000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_75) {
  // -7363967557393217712108
  s21_decimal dec_1 = {{0x13b76fec, 0x3394457a, 0x18f, 0x80000000}};
  // -0.9159049147817175
  s21_decimal dec_2 = {{0x4eef9cd7, 0x208a1b, 0x0, 0x80100000}};
  // -7363967557393217712107.0840951
  s21_decimal dec_check = {{0xcae07c77, 0xeb53f981, 0xedf14fdb, 0x80070000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_76) {
  // 0.2
  s21_decimal dec_1 = {{0x2, 0x0, 0x0, 0x10000}};
  // -95
  s21_decimal dec_2 = {{0x5f, 0x0, 0x0, 0x80000000}};
  // 95.2
  s21_decimal dec_check = {{0x3b8, 0x0, 0x0, 0x10000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_77) {
  // 91398
  s21_decimal dec_1 = {{0x16506, 0x0, 0x0, 0x0}};
  // -68426547708714223.5
  s21_decimal dec_2 = {{0x75d7a15b, 0x97effd3, 0x0, 0x80010000}};
  // 68426547708805621.5
  s21_decimal dec_check = {{0x75e59397, 0x97effd3, 0x0, 0x10000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_78) {
  // 58724723.38
  s21_decimal dec_1 = {{0x5e06d112, 0x1, 0x0, 0x20000}};
  // 33242.7
  s21_decimal dec_2 = {{0x5128b, 0x0, 0x0, 0x10000}};
  // 58691480.68
  s21_decimal dec_check = {{0x5dd417a4, 0x1, 0x0, 0x20000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_79) {
  // 42060511048761101533740
  s21_decimal dec_1 = {{0xbe0c422c, 0x1ad8f0b5, 0x8e8, 0x0}};
  // -579583406623129135040815439
  s21_decimal dec_2 = {{0x3145e14f, 0x6e0bc8a2, 0x1df6b8f, 0x80000000}};
  // 579625467134177896142349179
  s21_decimal dec_check = {{0xef52237b, 0x88e4b957, 0x1df7477, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_80) {
  // -268505450485767166090596824
  s21_decimal dec_1 = {{0xe5c8d1d8, 0xa315468e, 0xde1a3d, 0x80000000}};
  // -315682474887
  s21_decimal dec_2 = {{0x80244b87, 0x49, 0x0, 0x80000000}};
  // -268505450485766850408121937
  s21_decimal dec_check = {{0x65a48651, 0xa3154645, 0xde1a3d, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_81) {
  // 663073724
  s21_decimal dec_1 = {{0x2785b3bc, 0x0, 0x0, 0x0}};
  // -4387822.78196520515080899473
  s21_decimal dec_2 = {{0x4dd14b91, 0xf6a40675, 0x16af3c2, 0x80140000}};
  // 667461546.78196520515080899473
  s21_decimal dec_check = {{0x3d914b91, 0x5b92d35e, 0xd7ab2007, 0x140000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_82) {
  // -344331156.04
  s21_decimal dec_1 = {{0x45fa5d4, 0x8, 0x0, 0x80020000}};
  // -493
  s21_decimal dec_2 = {{0x1ed, 0x0, 0x0, 0x80000000}};
  // -344330663.04
  s21_decimal dec_check = {{0x45ee540, 0x8, 0x0, 0x80020000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_83) {
  // -608
  s21_decimal dec_1 = {{0x260, 0x0, 0x0, 0x80000000}};
  // 9406843230331
  s21_decimal dec_2 = {{0x338c987b, 0x88e, 0x0, 0x0}};
  // -9406843230939
  s21_decimal dec_check = {{0x338c9adb, 0x88e, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_84) {
  // -204414263502.23
  s21_decimal dec_1 = {{0x63f4d08f, 0x1297, 0x0, 0x80020000}};
  // -92839736
  s21_decimal dec_2 = {{0x5889f38, 0x0, 0x0, 0x80000000}};
  // -204321423766.23
  s21_decimal dec_check = {{0x3a969eaf, 0x1295, 0x0, 0x80020000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_85) {
  // -798.90179113756641438705456
  s21_decimal dec_1 = {{0xbdf7a730, 0x49ab43ea, 0x421567, 0x80170000}};
  // -5.650710002
  s21_decimal dec_2 = {{0x50cefdf2, 0x1, 0x0, 0x80090000}};
  // -793.25108113556641438705456
  s21_decimal dec_check = {{0xd9272730, 0xba3b5c7c, 0x419dbe, 0x80170000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_86) {
  // 945.4
  s21_decimal dec_1 = {{0x24ee, 0x0, 0x0, 0x10000}};
  // -831655136003960511858283
  s21_decimal dec_2 = {{0x9c97066b, 0x1d81b9d8, 0xb01c, 0x80000000}};
  // 831655136003960511859228.4
  s21_decimal dec_check = {{0x1de6651c, 0x27114276, 0x6e119, 0x10000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_87) {
  // -5438281457656690.12968594451
  s21_decimal dec_1 = {{0x79a85c13, 0xdada67af, 0x1c1d816, 0x800b0000}};
  // -16198266222152273521560
  s21_decimal dec_2 = {{0x72f26b98, 0x1c19faf4, 0x36e, 0x80000000}};
  // 16198260783870815864869.870314
  s21_decimal dec_check = {{0x6db3daea, 0x9e339276, 0x3456e324, 0x60000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_88) {
  // -7697688
  s21_decimal dec_1 = {{0x757518, 0x0, 0x0, 0x80000000}};
  // 7170020307810
  s21_decimal dec_2 = {{0x66837362, 0x685, 0x0, 0x0}};
  // -7170028005498
  s21_decimal dec_check = {{0x66f8e87a, 0x685, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_89) {
  // -0.69
  s21_decimal dec_1 = {{0x45, 0x0, 0x0, 0x80020000}};
  // 22
  s21_decimal dec_2 = {{0x16, 0x0, 0x0, 0x0}};
  // -22.69
  s21_decimal dec_check = {{0x8dd, 0x0, 0x0, 0x80020000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_90) {
  // -28742096
  s21_decimal dec_1 = {{0x1b691d0, 0x0, 0x0, 0x80000000}};
  // -69239.39343489237073471
  s21_decimal dec_2 = {{0xf3593e3f, 0x58f6044c, 0x177, 0x80110000}};
  // -28672856.60656510762926529
  s21_decimal dec_check = {{0x36c6c1c1, 0xddfba496, 0x25f2b, 0x80110000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_91) {
  // -83.19096467
  s21_decimal dec_1 = {{0xefdb5693, 0x1, 0x0, 0x80080000}};
  // 961458849821109
  s21_decimal dec_2 = {{0x1535b1b5, 0x36a71, 0x0, 0x0}};
  // -961458849821192.19096467
  s21_decimal dec_check = {{0xbc446b93, 0x1430bc81, 0x145c, 0x80080000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_92) {
  // -711411813157920
  s21_decimal dec_1 = {{0x78698c20, 0x28706, 0x0, 0x80000000}};
  // -17237156687918195423340
  s21_decimal dec_2 = {{0x98d6386c, 0x6d9a594a, 0x3a6, 0x80000000}};
  // 17237155976506382265420
  s21_decimal dec_check = {{0x206cac4c, 0x6d97d244, 0x3a6, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_93) {
  // -3133
  s21_decimal dec_1 = {{0xc3d, 0x0, 0x0, 0x80000000}};
  // -48762949097963875
  s21_decimal dec_2 = {{0xd32f4163, 0xad3da4, 0x0, 0x80000000}};
  // 48762949097960742
  s21_decimal dec_check = {{0xd32f3526, 0xad3da4, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_94) {
  // 730174253489898
  s21_decimal dec_1 = {{0xf100deea, 0x29816, 0x0, 0x0}};
  // 8426.40
  s21_decimal dec_2 = {{0xcdb90, 0x0, 0x0, 0x20000}};
  // 730174253481471.60
  s21_decimal dec_check = {{0x244a37d8, 0x10368f6, 0x0, 0x20000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_95) {
  // 0.0563
  s21_decimal dec_1 = {{0x233, 0x0, 0x0, 0x40000}};
  // -585048641210644373
  s21_decimal dec_2 = {{0xb3af7795, 0x81e82a3, 0x0, 0x80000000}};
  // 585048641210644373.0563
  s21_decimal dec_check = {{0xf62f2e83, 0x27cf1a9a, 0x13d, 0x40000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_96) {
  // -1
  s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x80000000}};
  // 291809484789298654856108
  s21_decimal dec_2 = {{0x7c1fc3ac, 0x61c36f4, 0x3dcb, 0x0}};
  // -291809484789298654856109
  s21_decimal dec_check = {{0x7c1fc3ad, 0x61c36f4, 0x3dcb, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_97) {
  // 64961.998623
  s21_decimal dec_1 = {{0x20096f1f, 0xf, 0x0, 0x60000}};
  // 333.0
  s21_decimal dec_2 = {{0xd02, 0x0, 0x0, 0x10000}};
  // 64628.998623
  s21_decimal dec_check = {{0xc3041df, 0xf, 0x0, 0x60000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_98) {
  // -217189738594
  s21_decimal dec_1 = {{0x91846862, 0x32, 0x0, 0x80000000}};
  // 907239743034321681
  s21_decimal dec_2 = {{0x51ad6b11, 0xc9729bd, 0x0, 0x0}};
  // -907239960224060275
  s21_decimal dec_check = {{0xe331d373, 0xc9729ef, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_99) {
  // 41339130009066633310648621559
  s21_decimal dec_1 = {{0xe62f59f7, 0x397b4ddd, 0x8592ed48, 0x0}};
  // -43006210453357410
  s21_decimal dec_2 = {{0xa9354362, 0x98c9eb, 0x0, 0x80000000}};
  // 41339130009109639521101978969
  s21_decimal dec_check = {{0x8f649d59, 0x3a1417c9, 0x8592ed48, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_100) {
  // 89487041
  s21_decimal dec_1 = {{0x55576c1, 0x0, 0x0, 0x0}};
  // -198319
  s21_decimal dec_2 = {{0x306af, 0x0, 0x0, 0x80000000}};
  // 89685360
  s21_decimal dec_check = {{0x5587d70, 0x0, 0x0, 0x0}};
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
  // 8694028696816003014692
  s21_decimal dec_1 = {{0xe2236024, 0x4de2acd0, 0x1d7, 0x0}};
  // 0.75635767322246011868
  s21_decimal dec_2 = {{0xe4925bdc, 0x19a839a4, 0x4, 0x140000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_2) {
  // 9247449240249810318941216.80
  s21_decimal dec_1 = {{0x61bfcd0, 0xc7f8e14e, 0x2fcee5a, 0x20000}};
  // -78062.07439173
  s21_decimal dec_2 = {{0x8638b145, 0x719, 0x0, 0x80080000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_3) {
  // 82502551154738238855
  s21_decimal dec_1 = {{0x71aa9587, 0x78f3f128, 0x4, 0x0}};
  // -17329166.5012254541993746
  s21_decimal dec_2 = {{0xfc0dd712, 0x28f4b60d, 0x24b2, 0x80100000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_4) {
  // 917489788756347635197
  s21_decimal dec_1 = {{0xfe48c5fd, 0xbcba85cd, 0x31, 0x0}};
  // 171.04474846957925340609863
  s21_decimal dec_2 = {{0xf8c8fd47, 0x707d7c8c, 0xe2603, 0x170000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_5) {
  // 997968390049326771395125942
  s21_decimal dec_1 = {{0xc34462b6, 0xd402c1c6, 0x3398006, 0x0}};
  // 50.3315227770024288
  s21_decimal dec_2 = {{0x7146f160, 0x6fc2288, 0x0, 0x100000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_6) {
  // -7.50961173159774827603
  s21_decimal dec_1 = {{0xdafcb453, 0xb5ae0839, 0x28, 0x80140000}};
  // -847134937274972554537640.14
  s21_decimal dec_2 = {{0x7998a9ae, 0xb268a8f1, 0x4612c7, 0x80020000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_7) {
  // 9634688195
  s21_decimal dec_1 = {{0x3e45acc3, 0x2, 0x0, 0x0}};
  // -47.19359668223297332225719
  s21_decimal dec_2 = {{0xf0bca6b7, 0x1079ee, 0x3e75d, 0x80170000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_8) {
  // 63544201698.8467431789364
  s21_decimal dec_1 = {{0x814d334, 0x6179d6ea, 0x868f, 0xd0000}};
  // -7961014296008086401796159229
  s21_decimal dec_2 = {{0x93f236fd, 0xbefa44c9, 0x19b93259, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_9) {
  // -7.8876722520124540704960
  s21_decimal dec_1 = {{0x4541d8c0, 0xea6b0944, 0x10b3, 0x80160000}};
  // -9204640561760146301171876359
  s21_decimal dec_2 = {{0x68d14207, 0xb34f32e7, 0x1dbde674, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_10) {
  // 8571614915431073876
  s21_decimal dec_1 = {{0xe9b58854, 0x76f47e59, 0x0, 0x0}};
  // -0.362609215508925
  s21_decimal dec_2 = {{0x897b91bd, 0x149ca, 0x0, 0x800f0000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_11) {
  // 9287594944536419740625
  s21_decimal dec_1 = {{0xd717abd1, 0x7b459a44, 0x1f7, 0x0}};
  // -9731.31304184
  s21_decimal dec_2 = {{0x93254cf8, 0xe2, 0x0, 0x80080000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_12) {
  // -161.0760351126086831153536614
  s21_decimal dec_1 = {{0x4dede66, 0x9a2b2584, 0x53463c5, 0x80190000}};
  // -933770007264466209670598781
  s21_decimal dec_2 = {{0xc87e907d, 0x861e1cba, 0x304657d, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_13) {
  // -808625.801350029
  s21_decimal dec_1 = {{0xdda54b8d, 0x2df70, 0x0, 0x80090000}};
  // -8917967782966033288449500.72
  s21_decimal dec_2 = {{0x41686a38, 0x38e48f72, 0x2e1ad50, 0x80020000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_14) {
  // -66.030614128895802341
  s21_decimal dec_1 = {{0x7db93be5, 0x945bddb4, 0x3, 0x80120000}};
  // -8564501402553604779.265
  s21_decimal dec_2 = {{0x6662d01, 0x485548f3, 0x1d0, 0x80030000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_15) {
  // -0.37286662959031
  s21_decimal dec_1 = {{0x7a4cefb7, 0x21e9, 0x0, 0x800e0000}};
  // -9806039608613512489731739312
  s21_decimal dec_2 = {{0x6599ceb0, 0x5b5cbc7b, 0x1faf5da8, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_16) {
  // 51259716655466.15230850
  s21_decimal dec_1 = {{0xb7709182, 0xe125a740, 0x115, 0x80000}};
  // -936145342968817855559708
  s21_decimal dec_2 = {{0x65f4f81c, 0x8a6d4f8a, 0xc63c, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_17) {
  // 7835651.90444734443448395918
  s21_decimal dec_1 = {{0xbb77688e, 0x1694ed78, 0x2882662, 0x140000}};
  // -9813509701736320001782544618
  s21_decimal dec_2 = {{0x693778ea, 0xeaa00c4d, 0x1fb58b82, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_18) {
  // 8128606100986344721755934680
  s21_decimal dec_1 = {{0x90280fd8, 0xb2cb6496, 0x1a43d34b, 0x0}};
  // 221.1113491199413
  s21_decimal dec_2 = {{0xfa3375b5, 0x7dafe, 0x0, 0xd0000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_19) {
  // 30910.4864058206
  s21_decimal dec_1 = {{0x159edb5e, 0x11921, 0x0, 0xa0000}};
  // -8032890491615407430955803
  s21_decimal dec_2 = {{0x8baff31b, 0xddb9de58, 0x6a507, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_20) {
  // -4389.2229695446427001741848108
  s21_decimal dec_1 = {{0xb2932e2c, 0x8d4210f1, 0x8dd2cd2b, 0x80190000}};
  // -9714110837
  s21_decimal dec_2 = {{0x43019175, 0x2, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_21) {
  // 0.3245746414623550562
  s21_decimal dec_1 = {{0xdaa26c62, 0x2d0b352a, 0x0, 0x130000}};
  // -8123006766621982352
  s21_decimal dec_2 = {{0xe098fe90, 0x70bab79d, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_22) {
  // 339
  s21_decimal dec_1 = {{0x153, 0x0, 0x0, 0x0}};
  // -840235.99572830896461410471992
  s21_decimal dec_2 = {{0x6e501038, 0xd88440a9, 0xf7eb14b, 0x80170000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_23) {
  // -3047476645.8346367738044298824
  s21_decimal dec_1 = {{0x49713648, 0x1a1d638, 0x627822d0, 0x80130000}};
  // -891781070357746140.644849437
  s21_decimal dec_2 = {{0x7f5f371d, 0xb173510f, 0x2e1a9fc, 0x80090000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_24) {
  // 9307875
  s21_decimal dec_1 = {{0x8e06e3, 0x0, 0x0, 0x0}};
  // 32.50664026707003481895465169
  s21_decimal dec_2 = {{0x227ff0d1, 0xfd22b02a, 0xa80e2e1, 0x1a0000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_25) {
  // 8189429650306204802057406
  s21_decimal dec_1 = {{0x232984be, 0xdef4379e, 0x6c62d, 0x0}};
  // 3656779.4421
  s21_decimal dec_2 = {{0x839c42f5, 0x8, 0x0, 0x40000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_26) {
  // 958880943888
  s21_decimal dec_1 = {{0x41c20f10, 0xdf, 0x0, 0x0}};
  // 0.422240894168891598310
  s21_decimal dec_2 = {{0x541725e6, 0xe3c5001e, 0x16, 0x150000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_27) {
  // 681834077699522209626.637773
  s21_decimal dec_1 = {{0x389ec5cd, 0x6a736a88, 0x233fffb, 0x60000}};
  // -8659222391807278501644103584
  s21_decimal dec_2 = {{0x90ca6fa0, 0x762d4f1d, 0x1bfabdaa, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_28) {
  // 9074301955586224796211858999.5
  s21_decimal dec_1 = {{0x450e0e2b, 0x49d2a37, 0x2534ddd3, 0x10000}};
  // -167132880140651660838.7109237
  s21_decimal dec_2 = {{0x7a19d175, 0xdf022d6d, 0x5667da3, 0x80070000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_29) {
  // 999137933262946860723344
  s21_decimal dec_1 = {{0xf48eec90, 0x603a8300, 0xd393, 0x0}};
  // -1.3741744
  s21_decimal dec_2 = {{0xd1aeb0, 0x0, 0x0, 0x80070000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_30) {
  // -69001915.754978294377689471683
  s21_decimal dec_1 = {{0x87595ac3, 0x5c472e43, 0xdef50c04, 0x80150000}};
  // -988685365272888714
  s21_decimal dec_2 = {{0xf7b7c58a, 0xdb88419, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_31) {
  // 16017.71407756887955841327808
  s21_decimal dec_1 = {{0x6b8da2c0, 0x1796e3e, 0x52cf44a, 0x170000}};
  // -83113927624253088828
  s21_decimal dec_2 = {{0x5b21a43c, 0x816ffcd1, 0x4, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_32) {
  // 5.7416543
  s21_decimal dec_1 = {{0x36c1b5f, 0x0, 0x0, 0x70000}};
  // -95583367173549274659243.478
  s21_decimal dec_2 = {{0x8d345d6, 0xb797477f, 0x4f1090, 0x80030000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_33) {
  // -98883416928929.2789849266513
  s21_decimal dec_1 = {{0x99501951, 0xba836694, 0x331f1c7, 0x800d0000}};
  // -9678465681900408307830950179
  s21_decimal dec_2 = {{0x14b70923, 0xeea0cc64, 0x1f45d6d3, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

Suite *s21_sub_cases100(void) {
  Suite *c = suite_create("s21_sub_cases100");
  TCase *tc = tcase_create("s21_sub_tc");

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
  tcase_add_test(tc, s21_sub_11);
  tcase_add_test(tc, s21_sub_12);
  tcase_add_test(tc, s21_sub_13);
  tcase_add_test(tc, s21_sub_14);
  tcase_add_test(tc, s21_sub_15);
  tcase_add_test(tc, s21_sub_16);
  tcase_add_test(tc, s21_sub_17);
  tcase_add_test(tc, s21_sub_18);
  tcase_add_test(tc, s21_sub_19);
  tcase_add_test(tc, s21_sub_20);
  tcase_add_test(tc, s21_sub_21);
  tcase_add_test(tc, s21_sub_22);
  tcase_add_test(tc, s21_sub_23);
  tcase_add_test(tc, s21_sub_24);
  tcase_add_test(tc, s21_sub_25);
  tcase_add_test(tc, s21_sub_26);
  tcase_add_test(tc, s21_sub_27);
  tcase_add_test(tc, s21_sub_28);
  tcase_add_test(tc, s21_sub_29);
  tcase_add_test(tc, s21_sub_30);
  tcase_add_test(tc, s21_sub_31);
  tcase_add_test(tc, s21_sub_32);
  tcase_add_test(tc, s21_sub_33);
  tcase_add_test(tc, s21_sub_34);
  tcase_add_test(tc, s21_sub_35);
  tcase_add_test(tc, s21_sub_36);
  tcase_add_test(tc, s21_sub_37);
  tcase_add_test(tc, s21_sub_38);
  tcase_add_test(tc, s21_sub_39);
  tcase_add_test(tc, s21_sub_40);
  tcase_add_test(tc, s21_sub_41);
  tcase_add_test(tc, s21_sub_42);
  tcase_add_test(tc, s21_sub_43);
  tcase_add_test(tc, s21_sub_44);
  tcase_add_test(tc, s21_sub_45);
  tcase_add_test(tc, s21_sub_46);
  tcase_add_test(tc, s21_sub_47);
  tcase_add_test(tc, s21_sub_48);
  tcase_add_test(tc, s21_sub_49);
  tcase_add_test(tc, s21_sub_50);
  tcase_add_test(tc, s21_sub_51);
  tcase_add_test(tc, s21_sub_52);
  tcase_add_test(tc, s21_sub_53);
  tcase_add_test(tc, s21_sub_54);
  tcase_add_test(tc, s21_sub_55);
  tcase_add_test(tc, s21_sub_56);
  tcase_add_test(tc, s21_sub_57);
  tcase_add_test(tc, s21_sub_58);
  tcase_add_test(tc, s21_sub_59);
  tcase_add_test(tc, s21_sub_60);
  tcase_add_test(tc, s21_sub_61);
  tcase_add_test(tc, s21_sub_62);
  tcase_add_test(tc, s21_sub_63);
  tcase_add_test(tc, s21_sub_64);
  tcase_add_test(tc, s21_sub_65);
  tcase_add_test(tc, s21_sub_66);
  tcase_add_test(tc, s21_sub_67);
  tcase_add_test(tc, s21_sub_68);
  tcase_add_test(tc, s21_sub_69);
  tcase_add_test(tc, s21_sub_70);
  tcase_add_test(tc, s21_sub_71);
  tcase_add_test(tc, s21_sub_72);
  tcase_add_test(tc, s21_sub_73);
  tcase_add_test(tc, s21_sub_74);
  tcase_add_test(tc, s21_sub_75);
  tcase_add_test(tc, s21_sub_76);
  tcase_add_test(tc, s21_sub_77);
  tcase_add_test(tc, s21_sub_78);
  tcase_add_test(tc, s21_sub_79);
  tcase_add_test(tc, s21_sub_80);
  tcase_add_test(tc, s21_sub_81);
  tcase_add_test(tc, s21_sub_82);
  tcase_add_test(tc, s21_sub_83);
  tcase_add_test(tc, s21_sub_84);
  tcase_add_test(tc, s21_sub_85);
  tcase_add_test(tc, s21_sub_86);
  tcase_add_test(tc, s21_sub_87);
  tcase_add_test(tc, s21_sub_88);
  tcase_add_test(tc, s21_sub_89);
  tcase_add_test(tc, s21_sub_90);
  tcase_add_test(tc, s21_sub_91);
  tcase_add_test(tc, s21_sub_92);
  tcase_add_test(tc, s21_sub_93);
  tcase_add_test(tc, s21_sub_94);
  tcase_add_test(tc, s21_sub_95);
  tcase_add_test(tc, s21_sub_96);
  tcase_add_test(tc, s21_sub_97);
  tcase_add_test(tc, s21_sub_98);
  tcase_add_test(tc, s21_sub_99);
  tcase_add_test(tc, s21_sub_100);
  tcase_add_test(tc, fail_s21_sub_1);
  tcase_add_test(tc, fail_s21_sub_2);
  tcase_add_test(tc, fail_s21_sub_3);
  tcase_add_test(tc, fail_s21_sub_4);
  tcase_add_test(tc, fail_s21_sub_5);
  tcase_add_test(tc, fail_s21_sub_6);
  tcase_add_test(tc, fail_s21_sub_7);
  tcase_add_test(tc, fail_s21_sub_8);
  tcase_add_test(tc, fail_s21_sub_9);
  tcase_add_test(tc, fail_s21_sub_10);
  tcase_add_test(tc, fail_s21_sub_11);
  tcase_add_test(tc, fail_s21_sub_12);
  tcase_add_test(tc, fail_s21_sub_13);
  tcase_add_test(tc, fail_s21_sub_14);
  tcase_add_test(tc, fail_s21_sub_15);
  tcase_add_test(tc, fail_s21_sub_16);
  tcase_add_test(tc, fail_s21_sub_17);
  tcase_add_test(tc, fail_s21_sub_18);
  tcase_add_test(tc, fail_s21_sub_19);
  tcase_add_test(tc, fail_s21_sub_20);
  tcase_add_test(tc, fail_s21_sub_21);
  tcase_add_test(tc, fail_s21_sub_22);
  tcase_add_test(tc, fail_s21_sub_23);
  tcase_add_test(tc, fail_s21_sub_24);
  tcase_add_test(tc, fail_s21_sub_25);
  tcase_add_test(tc, fail_s21_sub_26);
  tcase_add_test(tc, fail_s21_sub_27);
  tcase_add_test(tc, fail_s21_sub_28);
  tcase_add_test(tc, fail_s21_sub_29);
  tcase_add_test(tc, fail_s21_sub_30);
  tcase_add_test(tc, fail_s21_sub_31);
  tcase_add_test(tc, fail_s21_sub_32);
  tcase_add_test(tc, fail_s21_sub_33);

  suite_add_tcase(c, tc);
  return c;
}
