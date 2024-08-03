#include "../test.h"


START_TEST(s21_sub_1) {
  // 79798510023868544030
  s21_decimal dec_1 = {{0x7a21f41e, 0x536d4213, 0x4, 0x0}};
  // 974318548728880552845885280
  s21_decimal dec_2 = {{0xaee1bf60, 0x5c7a2577, 0x325effa, 0x0}};
  // -974318468930370528977341250
  s21_decimal dec_check = {{0x34bfcb42, 0x90ce364, 0x325eff6, 0x80000000}};
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
  // 344
  s21_decimal dec_1 = {{0x158, 0x0, 0x0, 0x0}};
  // -95929141564387413535159825
  s21_decimal dec_2 = {{0x972af611, 0x2f37638b, 0x4f59c9, 0x80000000}};
  // 95929141564387413535160169
  s21_decimal dec_check = {{0x972af769, 0x2f37638b, 0x4f59c9, 0x0}};
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
  // 9505502657.3
  s21_decimal dec_1 = {{0x21b8998d, 0x16, 0x0, 0x10000}};
  // 8188342
  s21_decimal dec_2 = {{0x7cf1b6, 0x0, 0x0, 0x0}};
  // 9497314315.3
  s21_decimal dec_check = {{0x1cd72871, 0x16, 0x0, 0x10000}};
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
  // -7373271500179465948948498207
  s21_decimal dec_1 = {{0xf00a871f, 0xf0e57a93, 0x17d306f8, 0x80000000}};
  // -109308
  s21_decimal dec_2 = {{0x1aafc, 0x0, 0x0, 0x80000000}};
  // -7373271500179465948948388899
  s21_decimal dec_check = {{0xf008dc23, 0xf0e57a93, 0x17d306f8, 0x80000000}};
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
  // 4345.779849684073
  s21_decimal dec_1 = {{0xb8366469, 0xf7076, 0x0, 0xc0000}};
  // -18704935937.1823298246
  s21_decimal dec_2 = {{0x95e936c6, 0x23d4d151, 0xa, 0x800a0000}};
  // 18704940282.962179508673
  s21_decimal dec_check = {{0x474fc9c1, 0xff313455, 0x3f5, 0xc0000}};
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
  // 316773707735272710269
  s21_decimal dec_1 = {{0xa056e07d, 0x2c1e48d8, 0x11, 0x0}};
  // -8314019508606959607047565288
  s21_decimal dec_2 = {{0x6564afe8, 0xaa7a2a1a, 0x1add321c, 0x80000000}};
  // 8314019825380667342320275557
  s21_decimal dec_check = {{0x5bb9065, 0xd69872f3, 0x1add322d, 0x0}};
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
  // 490196926764885289877707
  s21_decimal dec_1 = {{0x8d240cb, 0xa0ef0609, 0x67cd, 0x0}};
  // -800428844591174.33290676793
  s21_decimal dec_2 = {{0x5d0ada39, 0x760c8df6, 0x4235bd, 0x800b0000}};
  // 490196927565314134468881.33291
  s21_decimal dec_check = {{0x597212ab, 0xf66fc6a, 0x9e6423b5, 0x50000}};
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
  // -47889016.4095803190898793
  s21_decimal dec_1 = {{0x1abb7069, 0xb014a04d, 0x6568, 0x80100000}};
  // -536962
  s21_decimal dec_2 = {{0x83182, 0x0, 0x0, 0x80000000}};
  // -47352054.4095803190898793
  s21_decimal dec_check = {{0x69b97069, 0x99a233c4, 0x6445, 0x80100000}};
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
  // -946268.790990744963787
  s21_decimal dec_1 = {{0xf1b5cacb, 0x4c1e13db, 0x33, 0x800f0000}};
  // 53.9543660245
  s21_decimal dec_2 = {{0x9f4ee6d5, 0x7d, 0x0, 0xa0000}};
  // -946322.745356769463787
  s21_decimal dec_check = {{0xb6ae8deb, 0x4cddc311, 0x33, 0x800f0000}};
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
  // -190333284238214714601067
  s21_decimal dec_1 = {{0x737bae6b, 0xfcee71b2, 0x284d, 0x80000000}};
  // -20644737873.7280077779
  s21_decimal dec_2 = {{0xe1c4fd3, 0x31086d28, 0xb, 0x800a0000}};
  // -190333284238194069863193.27199
  s21_decimal dec_check = {{0xd6456fdf, 0x563595d5, 0x3d800011, 0x80050000}};
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
  // -472736.7818650630207643141848
  s21_decimal dec_1 = {{0xe29d46d8, 0xf4b96138, 0xf466312, 0x80160000}};
  // -0.2
  s21_decimal dec_2 = {{0x2, 0x0, 0x0, 0x80010000}};
  // -472736.5818650630207643141848
  s21_decimal dec_check = {{0x255d46d8, 0x892605ad, 0xf4662a6, 0x80160000}};
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
  // 537094353765
  s21_decimal dec_1 = {{0xd517365, 0x7d, 0x0, 0x0}};
  // -3576706342268345057109
  s21_decimal dec_2 = {{0x376cff55, 0xe4c58c17, 0xc1, 0x80000000}};
  // 3576706342805439410874
  s21_decimal dec_check = {{0x44be72ba, 0xe4c58c94, 0xc1, 0x0}};
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
  // 480.8
  s21_decimal dec_1 = {{0x12c8, 0x0, 0x0, 0x10000}};
  // 38471943577719846
  s21_decimal dec_2 = {{0x62c4d426, 0x88ae07, 0x0, 0x0}};
  // -38471943577719365.2
  s21_decimal dec_check = {{0xdbb036b4, 0x556cc49, 0x0, 0x80010000}};
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
  // 0
  s21_decimal dec_1 = {{0x0, 0x0, 0x0, 0x0}};
  // -56254820
  s21_decimal dec_2 = {{0x35a6164, 0x0, 0x0, 0x80000000}};
  // 56254820
  s21_decimal dec_check = {{0x35a6164, 0x0, 0x0, 0x0}};
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
  // -808699
  s21_decimal dec_1 = {{0xc56fb, 0x0, 0x0, 0x80000000}};
  // 5675723136148064
  s21_decimal dec_2 = {{0x455fa260, 0x142a0a, 0x0, 0x0}};
  // -5675723136956763
  s21_decimal dec_check = {{0x456bf95b, 0x142a0a, 0x0, 0x80000000}};
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
  // 550657148732730628588
  s21_decimal dec_1 = {{0xbd9d9ec, 0xd9e72f44, 0x1d, 0x0}};
  // 5212392742768600255494668034
  s21_decimal dec_2 = {{0x1fe0bf02, 0xc722778a, 0x10d79718, 0x0}};
  // -5212392192111451522764039446
  s21_decimal dec_check = {{0x1406e516, 0xed3b4846, 0x10d796fa, 0x80000000}};
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
  // -318760488954801445178680523
  s21_decimal dec_1 = {{0xa87a4cb, 0xbb3adbed, 0x107ac28, 0x80000000}};
  // -128.120491
  s21_decimal dec_2 = {{0x7a2f6ab, 0x0, 0x0, 0x80060000}};
  // -318760488954801445178680394.88
  s21_decimal dec_check = {{0x1cfc2d40, 0x22fde898, 0x66ff3fe9, 0x80020000}};
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
  // -28
  s21_decimal dec_1 = {{0x1c, 0x0, 0x0, 0x80000000}};
  // -79228162514264337592817166977
  s21_decimal dec_2 = {{0xd4ae2a81, 0xffffffff, 0xffffffff, 0x80000000}};
  // 79228162514264337592817166949
  s21_decimal dec_check = {{0xd4ae2a65, 0xffffffff, 0xffffffff, 0x0}};
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
  // 4547455735909628.23752013
  s21_decimal dec_1 = {{0x33fe94d, 0xce93abac, 0x604b, 0x80000}};
  // 88436
  s21_decimal dec_2 = {{0x15974, 0x0, 0x0, 0x0}};
  // 4547455735821192.23752013
  s21_decimal dec_check = {{0xf39cf54d, 0xce93a3a0, 0x604b, 0x80000}};
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
  // -604451014009733205
  s21_decimal dec_1 = {{0xa62cc055, 0x86370fe, 0x0, 0x80000000}};
  // -12861392891704359409163
  s21_decimal dec_2 = {{0xd45e560b, 0x37ae746c, 0x2b9, 0x80000000}};
  // 12860788440690349675958
  s21_decimal dec_check = {{0x2e3195b6, 0x2f4b036e, 0x2b9, 0x0}};
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
  // 2
  s21_decimal dec_1 = {{0x2, 0x0, 0x0, 0x0}};
  // -2720025244310
  s21_decimal dec_2 = {{0x4e237296, 0x279, 0x0, 0x80000000}};
  // 2720025244312
  s21_decimal dec_check = {{0x4e237298, 0x279, 0x0, 0x0}};
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
  // 6540623566511.78609540
  s21_decimal dec_1 = {{0xdc5a4b84, 0x74f04800, 0x23, 0x80000}};
  // 910734680459399987519
  s21_decimal dec_2 = {{0x436d013f, 0x5efb8e99, 0x31, 0x0}};
  // -910734673918776421007.21390460
  s21_decimal dec_check = {{0x5e09137c, 0x1a63149a, 0x264634e0, 0x80080000}};
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
  // -97101951998940628710541
  s21_decimal dec_1 = {{0x7fccf48d, 0xe8491ad8, 0x148f, 0x80000000}};
  // -3609887.549432
  s21_decimal dec_2 = {{0x7e10a7f8, 0x348, 0x0, 0x80060000}};
  // -97101951998940625100653.450568
  s21_decimal dec_check = {{0xa07bd548, 0x7de200cc, 0x39c0da25, 0x80060000}};
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
  // -395848303472316909733
  s21_decimal dec_1 = {{0xc07a08a5, 0x757faeb6, 0x15, 0x80000000}};
  // 12581225842
  s21_decimal dec_2 = {{0xede64572, 0x2, 0x0, 0x0}};
  // -395848303484898135575
  s21_decimal dec_check = {{0xae604e17, 0x757faeb9, 0x15, 0x80000000}};
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
  // -24466825.7
  s21_decimal dec_1 = {{0xe955761, 0x0, 0x0, 0x80010000}};
  // 146829.097197704
  s21_decimal dec_2 = {{0x502e6088, 0x858a, 0x0, 0x90000}};
  // -24613654.797197704
  s21_decimal dec_check = {{0x16cfa188, 0x5771fd, 0x0, 0x80090000}};
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
  // -18218
  s21_decimal dec_1 = {{0x472a, 0x0, 0x0, 0x80000000}};
  // 725457
  s21_decimal dec_2 = {{0xb11d1, 0x0, 0x0, 0x0}};
  // -743675
  s21_decimal dec_check = {{0xb58fb, 0x0, 0x0, 0x80000000}};
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
  // -626127552250
  s21_decimal dec_1 = {{0xc81c3efa, 0x91, 0x0, 0x80000000}};
  // 1
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x0}};
  // -626127552251
  s21_decimal dec_check = {{0xc81c3efb, 0x91, 0x0, 0x80000000}};
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
  // 1068766546124980.6617
  s21_decimal dec_1 = {{0x80019119, 0x9452371c, 0x0, 0x40000}};
  // -97689995233487.4364139014864
  s21_decimal dec_2 = {{0xd6a40ad0, 0x87f7aa5e, 0x328129c, 0x800d0000}};
  // 1166456541358468.0981139014864
  s21_decimal dec_check = {{0x1f2bc4d0, 0x201984c2, 0x25b0b3ce, 0xd0000}};
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
  // 2421341161754466.1754623863
  s21_decimal dec_1 = {{0x257eb777, 0xac8813f0, 0x140763, 0xa0000}};
  // 99143038463649.6951350882
  s21_decimal dec_2 = {{0x1fc79662, 0x8c811397, 0xd1f1, 0xa0000}};
  // 2322198123290816.4803272981
  s21_decimal dec_check = {{0x5b72115, 0x20070059, 0x133572, 0xa0000}};
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
  // 23023543020570122
  s21_decimal dec_1 = {{0x5736460a, 0x51cbca, 0x0, 0x0}};
  // -7438.595632204
  s21_decimal dec_2 = {{0xeed9ac4c, 0x6c3, 0x0, 0x80090000}};
  // 23023543020577560.595632204
  s21_decimal dec_check = {{0x3221904c, 0xc49fa85f, 0x130b6c, 0x90000}};
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
  // -452103703603478252581972
  s21_decimal dec_1 = {{0x23b57454, 0x97440748, 0x5fbc, 0x80000000}};
  // -996746453752699431
  s21_decimal dec_2 = {{0x630f5a27, 0xdd5279e, 0x0, 0x80000000}};
  // -452102706857024499882541
  s21_decimal dec_check = {{0xc0a61a2d, 0x896edfa9, 0x5fbc, 0x80000000}};
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
  // -9833984984818949442966882918
  s21_decimal dec_1 = {{0x156b8a66, 0x3c8d04a6, 0x1fc67b52, 0x80000000}};
  // 842617668533874592773224
  s21_decimal dec_2 = {{0xfdaef468, 0x6534ffd0, 0xb26e, 0x0}};
  // -9834827602487483317559656142
  s21_decimal dec_check = {{0x131a7ece, 0xa1c20477, 0x1fc72dc0, 0x80000000}};
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
  // 4445491832696
  s21_decimal dec_1 = {{0xbf62778, 0x40b, 0x0, 0x0}};
  // 70230034705.1
  s21_decimal dec_2 = {{0x845cdaab, 0xa3, 0x0, 0x10000}};
  // 4375261797990.9
  s21_decimal dec_check = {{0xf340b005, 0x27ca, 0x0, 0x10000}};
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
  // -7967652669183847
  s21_decimal dec_1 = {{0xb30a5767, 0x1c4e89, 0x0, 0x80000000}};
  // -311
  s21_decimal dec_2 = {{0x137, 0x0, 0x0, 0x80000000}};
  // -7967652669183536
  s21_decimal dec_check = {{0xb30a5630, 0x1c4e89, 0x0, 0x80000000}};
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
  // -1752370.2
  s21_decimal dec_1 = {{0x10b63f6, 0x0, 0x0, 0x80010000}};
  // 7.0
  s21_decimal dec_2 = {{0x46, 0x0, 0x0, 0x10000}};
  // -1752377.2
  s21_decimal dec_check = {{0x10b643c, 0x0, 0x0, 0x80010000}};
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
  // 7247195417723694.152626284298
  s21_decimal dec_1 = {{0x4a15270a, 0xd0ef474c, 0x176abd52, 0xc0000}};
  // 592078461761064535
  s21_decimal dec_2 = {{0x586d8e57, 0x8377c39, 0x0, 0x0}};
  // -584831266343340840.84737371570
  s21_decimal dec_check = {{0xef49edb2, 0x88d49a27, 0xbcf81bc7, 0x800b0000}};
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
  // 6022651023430516114805857457
  s21_decimal dec_1 = {{0x8df19cb1, 0x2faf6e4a, 0x1375d1f6, 0x0}};
  // 59701467921356.937757093
  s21_decimal dec_2 = {{0x62cc01a5, 0x6c4dba8a, 0xca4, 0x90000}};
  // 6022651023430456413337936100.1
  s21_decimal dec_check = {{0x3b8ec8e9, 0xdcd82fee, 0xc29a339d, 0x10000}};
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
  // 768710757392871199.864088
  s21_decimal dec_1 = {{0xd29ff518, 0xe4c6d4ab, 0xa2c7, 0x60000}};
  // -50154958037046.1
  s21_decimal dec_2 = {{0x1c93421d, 0x1c828, 0x0, 0x80010000}};
  // 768760912350908245.964088
  s21_decimal dec_check = {{0x5617538, 0x9cd10946, 0xa2ca, 0x60000}};
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
  // -3.05454681018678355
  s21_decimal dec_1 = {{0xfd193c53, 0x43d3169, 0x0, 0x80110000}};
  // 0.9844894
  s21_decimal dec_2 = {{0x96389e, 0x0, 0x0, 0x70000}};
  // -4.03903621018678355
  s21_decimal dec_check = {{0xe4ff453, 0x59af434, 0x0, 0x80110000}};
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
  // 55954405159.59865683321585
  s21_decimal dec_1 = {{0xe729a2f1, 0x702bf713, 0x4a0e1, 0xe0000}};
  // -5899430061575
  s21_decimal dec_2 = {{0x916ee607, 0x55d, 0x0, 0x80000000}};
  // 5955384466734.59865683321585
  s21_decimal dec_check = {{0xb00162f1, 0xe254674e, 0x1ec9e2b, 0xe0000}};
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
  // 1092350848041
  s21_decimal dec_1 = {{0x552f2c29, 0xfe, 0x0, 0x0}};
  // -61714612089531.825559
  s21_decimal dec_2 = {{0xa7927d97, 0x587658b7, 0x3, 0x80060000}};
  // 62806962937572.825559
  s21_decimal dec_check = {{0xb32719d7, 0x679f2806, 0x3, 0x60000}};
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
  // 9476166060292.09706707789
  s21_decimal dec_1 = {{0x4a943b4d, 0x662e7f9c, 0xc8aa, 0xb0000}};
  // 61608
  s21_decimal dec_2 = {{0xf0a8, 0x0, 0x0, 0x0}};
  // 9476165998684.09706707789
  s21_decimal dec_check = {{0x430bfb4d, 0x66189c65, 0xc8aa, 0xb0000}};
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
  // -925911.4292425198806440
  s21_decimal dec_1 = {{0x1a4a25a8, 0xf0060012, 0x1f5, 0x80100000}};
  // -778304805020452
  s21_decimal dec_2 = {{0x356e2324, 0x2c3dd, 0x0, 0x80000000}};
  // 778304804094540.57075748011936
  s21_decimal dec_check = {{0xd47a7fa0, 0x46a9d74a, 0xfb7bdd4d, 0xe0000}};
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
  // 1915120
  s21_decimal dec_1 = {{0x1d38f0, 0x0, 0x0, 0x0}};
  // -1430
  s21_decimal dec_2 = {{0x596, 0x0, 0x0, 0x80000000}};
  // 1916550
  s21_decimal dec_check = {{0x1d3e86, 0x0, 0x0, 0x0}};
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
  // -4.86
  s21_decimal dec_1 = {{0x1e6, 0x0, 0x0, 0x80020000}};
  // 5703480676107527.134125109
  s21_decimal dec_2 = {{0x12ac1c35, 0x4e96c813, 0x4b7c2, 0x90000}};
  // -5703480676107531.994125109
  s21_decimal dec_check = {{0x3459d335, 0x4e96c814, 0x4b7c2, 0x80090000}};
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
  // -4718.196204938
  s21_decimal dec_1 = {{0x8a68a58a, 0x44a, 0x0, 0x80090000}};
  // 747906298985890436700365.8867
  s21_decimal dec_2 = {{0xca5cea73, 0x168a4d3c, 0x182a8931, 0x40000}};
  // -747906298985890436705084.08290
  s21_decimal dec_check = {{0x3c08de2, 0xe1670460, 0xf1a95bea, 0x80050000}};
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
  // -2
  s21_decimal dec_1 = {{0x2, 0x0, 0x0, 0x80000000}};
  // -0.4
  s21_decimal dec_2 = {{0x4, 0x0, 0x0, 0x80010000}};
  // -1.6
  s21_decimal dec_check = {{0x10, 0x0, 0x0, 0x80010000}};
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
  // -76152.85
  s21_decimal dec_1 = {{0x743335, 0x0, 0x0, 0x80020000}};
  // 8398319198.67823594740
  s21_decimal dec_2 = {{0xe3f31cf4, 0x8702597f, 0x2d, 0xb0000}};
  // -8398395351.52823594740
  s21_decimal dec_check = {{0x993ceef4, 0x871d678f, 0x2d, 0x800b0000}};
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
  // -60985919091551933550818196
  s21_decimal dec_1 = {{0xd767f394, 0x4c6ac6f4, 0x327245, 0x80000000}};
  // -26267.565796849573
  s21_decimal dec_2 = {{0x406f77a5, 0x5d5236, 0x0, 0x800c0000}};
  // -60985919091551933550791928.434
  s21_decimal dec_check = {{0x6c7eaa72, 0x81192c69, 0xc50e5eb2, 0x80030000}};
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
  // -7740285965404420543831.9
  s21_decimal dec_1 = {{0x3fbfd56f, 0x476456d, 0x1064, 0x80010000}};
  // 7733855
  s21_decimal dec_2 = {{0x76025f, 0x0, 0x0, 0x0}};
  // -7740285965404428277686.9
  s21_decimal dec_check = {{0x445bed25, 0x476456d, 0x1064, 0x80010000}};
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
  // -772198823.3693524123
  s21_decimal dec_1 = {{0xbd0c709b, 0x6b2a0362, 0x0, 0x800a0000}};
  // 43044.720
  s21_decimal dec_2 = {{0x290cf70, 0x0, 0x0, 0x30000}};
  // -772241868.0893524123
  s21_decimal dec_check = {{0x97fc89b, 0x6b2b8ae0, 0x0, 0x800a0000}};
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
  // -84632
  s21_decimal dec_1 = {{0x14a98, 0x0, 0x0, 0x80000000}};
  // 7574688110780252750999
  s21_decimal dec_2 = {{0x47ad0497, 0x9fea1056, 0x19a, 0x0}};
  // -7574688110780252835631
  s21_decimal dec_check = {{0x47ae4f2f, 0x9fea1056, 0x19a, 0x80000000}};
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
  // -3
  s21_decimal dec_1 = {{0x3, 0x0, 0x0, 0x80000000}};
  // -640541
  s21_decimal dec_2 = {{0x9c61d, 0x0, 0x0, 0x80000000}};
  // 640538
  s21_decimal dec_check = {{0x9c61a, 0x0, 0x0, 0x0}};
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
  // -741017328
  s21_decimal dec_1 = {{0x2c2b06f0, 0x0, 0x0, 0x80000000}};
  // -702317498852.687193732956621
  s21_decimal dec_2 = {{0xf1a241cd, 0xe6cae59b, 0x244f183, 0x800f0000}};
  // 701576481524.687193732956621
  s21_decimal dec_check = {{0x508a41cd, 0x458d7bad, 0x2445499, 0xf0000}};
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
  // -868111090828
  s21_decimal dec_1 = {{0x1f74048c, 0xca, 0x0, 0x80000000}};
  // 506815932034039391832.74497
  s21_decimal dec_2 = {{0x7d332a01, 0xac3d22bb, 0x29ec3e, 0x50000}};
  // -506815932902150482660.74497
  s21_decimal dec_check = {{0xe4a34981, 0xad718cf9, 0x29ec3e, 0x80050000}};
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
  // 9204379104295896326
  s21_decimal dec_1 = {{0x4995c506, 0x7fbc8607, 0x0, 0x0}};
  // 9445801222957266522530398.47
  s21_decimal dec_2 = {{0xa2506ce7, 0x8b313fe, 0x30d569f, 0x20000}};
  // -9445792018578162226634072.47
  s21_decimal dec_check = {{0xe3cf768f, 0x230eb925, 0x30d566d, 0x80020000}};
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
  // 59575340130.4796739543
  s21_decimal dec_1 = {{0xc725b7d7, 0x4bbd420c, 0x20, 0xa0000}};
  // -100271610616276
  s21_decimal dec_2 = {{0x4dbb59d4, 0x5b32, 0x0, 0x80000000}};
  // 100331185956406.4796739543
  s21_decimal dec_check = {{0xf4287d7, 0xa5179376, 0xd475, 0xa0000}};
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
  // 0.281428530374
  s21_decimal dec_1 = {{0x867294c6, 0x41, 0x0, 0xc0000}};
  // -161
  s21_decimal dec_2 = {{0xa1, 0x0, 0x0, 0x80000000}};
  // 161.281428530374
  s21_decimal dec_check = {{0x4241a4c6, 0x92af, 0x0, 0xc0000}};
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
  // 4137474
  s21_decimal dec_1 = {{0x3f2202, 0x0, 0x0, 0x0}};
  // 622065
  s21_decimal dec_2 = {{0x97df1, 0x0, 0x0, 0x0}};
  // 3515409
  s21_decimal dec_check = {{0x35a411, 0x0, 0x0, 0x0}};
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
  // 29577.8342852145
  s21_decimal dec_1 = {{0x430ed631, 0x10d02, 0x0, 0xa0000}};
  // 85.23
  s21_decimal dec_2 = {{0x214b, 0x0, 0x0, 0x20000}};
  // 29492.6042852145
  s21_decimal dec_check = {{0xd204eb31, 0x10c3b, 0x0, 0xa0000}};
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
  // 2842710842617884558
  s21_decimal dec_1 = {{0x3563ef8e, 0x27735673, 0x0, 0x0}};
  // -50
  s21_decimal dec_2 = {{0x32, 0x0, 0x0, 0x80000000}};
  // 2842710842617884608
  s21_decimal dec_check = {{0x3563efc0, 0x27735673, 0x0, 0x0}};
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
  // -651.58573
  s21_decimal dec_1 = {{0x3e23dad, 0x0, 0x0, 0x80050000}};
  // 60041284990065969772
  s21_decimal dec_2 = {{0xae00a6c, 0x413d7e96, 0x3, 0x0}};
  // -60041284990065970423.58573
  s21_decimal dec_check = {{0x1fc9492d, 0x7547b258, 0x4f76c, 0x80050000}};
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
  // -77194412365640.379758
  s21_decimal dec_1 = {{0x93042d6e, 0x2f49a50d, 0x4, 0x80060000}};
  // 800667.289708680
  s21_decimal dec_2 = {{0xe162e888, 0x2d833, 0x0, 0x90000}};
  // -77194413166307.669466680
  s21_decimal dec_check = {{0x29b45e38, 0xb7af953a, 0x1058, 0x80090000}};
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
  // 28904
  s21_decimal dec_1 = {{0x70e8, 0x0, 0x0, 0x0}};
  // 16
  s21_decimal dec_2 = {{0x10, 0x0, 0x0, 0x0}};
  // 28888
  s21_decimal dec_check = {{0x70d8, 0x0, 0x0, 0x0}};
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
  // 967697.21092557856082141052779
  s21_decimal dec_1 = {{0x755eff6b, 0xf7e7a6a6, 0x38ae0983, 0x170000}};
  // 613319008505075034584821021.2
  s21_decimal dec_2 = {{0x9476c324, 0xb953688f, 0x13d14184, 0x10000}};
  // -613319008505075034583853323.99
  s21_decimal dec_check = {{0xc6df08af, 0x3d42159b, 0xc62c8f2f, 0x80020000}};
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
  // -2457356838014753
  s21_decimal dec_1 = {{0xf96a8f21, 0x8baf3, 0x0, 0x80000000}};
  // 14378774811085781.070126
  s21_decimal dec_2 = {{0x266bf12e, 0x7995f4ab, 0x30b, 0x60000}};
  // -16836131649100534.070126
  s21_decimal dec_check = {{0x5ce53b6e, 0xb0433535, 0x390, 0x80060000}};
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
  // 4.1220
  s21_decimal dec_1 = {{0xa104, 0x0, 0x0, 0x40000}};
  // 5305098205
  s21_decimal dec_2 = {{0x3c355fdd, 0x1, 0x0, 0x0}};
  // -5305098200.8780
  s21_decimal dec_check = {{0xe4f007cc, 0x303f, 0x0, 0x80040000}};
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
  // 23693452820201066
  s21_decimal dec_1 = {{0xded9be6a, 0x542d11, 0x0, 0x0}};
  // -65842222610370833
  s21_decimal dec_2 = {{0x11e9d111, 0xe9eb27, 0x0, 0x80000000}};
  // 89535675430571899
  s21_decimal dec_check = {{0xf0c38f7b, 0x13e1838, 0x0, 0x0}};
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
  // 7.9700694983541740858797449
  s21_decimal dec_1 = {{0xcb406d89, 0x551def69, 0x41ed47, 0x190000}};
  // 536236711982098702865640
  s21_decimal dec_2 = {{0xbecf14e8, 0x734dbbda, 0x718d, 0x0}};
  // -536236711982098702865632.02993
  s21_decimal dec_check = {{0xbb3a57b1, 0x7cc4a766, 0xad447610, 0x80050000}};
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
  // -3252104510
  s21_decimal dec_1 = {{0xc1d72d3e, 0x0, 0x0, 0x80000000}};
  // -6936.8233266
  s21_decimal dec_2 = {{0x26ab3d32, 0x10, 0x0, 0x80070000}};
  // -3252097573.1766734
  s21_decimal dec_check = {{0xb63db5ce, 0x7389a7, 0x0, 0x80070000}};
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
  // 3
  s21_decimal dec_1 = {{0x3, 0x0, 0x0, 0x0}};
  // -347.191
  s21_decimal dec_2 = {{0x54c37, 0x0, 0x0, 0x80030000}};
  // 350.191
  s21_decimal dec_check = {{0x557ef, 0x0, 0x0, 0x30000}};
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
  // -648961227.827
  s21_decimal dec_1 = {{0x191a7c33, 0x97, 0x0, 0x80030000}};
  // 695
  s21_decimal dec_2 = {{0x2b7, 0x0, 0x0, 0x0}};
  // -648961922.827
  s21_decimal dec_check = {{0x1925170b, 0x97, 0x0, 0x80030000}};
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
  // 3520002586641
  s21_decimal dec_1 = {{0x9080f811, 0x333, 0x0, 0x0}};
  // 65350.1
  s21_decimal dec_2 = {{0x9f8bd, 0x0, 0x0, 0x10000}};
  // 3520002521290.9
  s21_decimal dec_check = {{0xa4ffb7ed, 0x2003, 0x0, 0x10000}};
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
  // 737203.53328534637
  s21_decimal dec_1 = {{0x50dd146d, 0x105e845, 0x0, 0xb0000}};
  // 11.627865181
  s21_decimal dec_2 = {{0xb513245d, 0x2, 0x0, 0x90000}};
  // 737191.90542016537
  s21_decimal dec_check = {{0x9562e019, 0x105e736, 0x0, 0xb0000}};
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
  // 691649
  s21_decimal dec_1 = {{0xa8dc1, 0x0, 0x0, 0x0}};
  // 2
  s21_decimal dec_2 = {{0x2, 0x0, 0x0, 0x0}};
  // 691647
  s21_decimal dec_check = {{0xa8dbf, 0x0, 0x0, 0x0}};
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
  // -41782
  s21_decimal dec_1 = {{0xa336, 0x0, 0x0, 0x80000000}};
  // -856
  s21_decimal dec_2 = {{0x358, 0x0, 0x0, 0x80000000}};
  // -40926
  s21_decimal dec_check = {{0x9fde, 0x0, 0x0, 0x80000000}};
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
  // -32053147520195463248
  s21_decimal dec_1 = {{0x42718850, 0xbcd3a7d8, 0x1, 0x80000000}};
  // -3551810833664395742.40228480
  s21_decimal dec_2 = {{0xddc7f480, 0x1c4f2185, 0x125cc85, 0x80080000}};
  // -28501336686531067505.59771520
  s21_decimal dec_check = {{0xef965b80, 0xc579bf30, 0x9359347, 0x80080000}};
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
  // -988252402557317542204
  s21_decimal dec_1 = {{0xe73ff13c, 0x92c1d423, 0x35, 0x80000000}};
  // -8462980663038001125
  s21_decimal dec_2 = {{0x1613fe5, 0x75728c13, 0x0, 0x80000000}};
  // -979789421894279541079
  s21_decimal dec_check = {{0xe5deb157, 0x1d4f4810, 0x35, 0x80000000}};
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
  // -0.529116193449784928097324372
  s21_decimal dec_1 = {{0x1474cd54, 0x525fe726, 0x1b5acb6, 0x801b0000}};
  // -14991858.0035487109693490
  s21_decimal dec_2 = {{0xa2034032, 0x1a3dff98, 0x1fbf, 0x80100000}};
  // 14991857.474432517519564071903
  s21_decimal dec_check = {{0x9c87e3df, 0x2b2befa5, 0x3070f94e, 0x150000}};
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
  // -5884389815054342754472988839
  s21_decimal dec_1 = {{0x2cf690a7, 0xfc9e9d0, 0x13037403, 0x80000000}};
  // 560
  s21_decimal dec_2 = {{0x230, 0x0, 0x0, 0x0}};
  // -5884389815054342754472989399
  s21_decimal dec_check = {{0x2cf692d7, 0xfc9e9d0, 0x13037403, 0x80000000}};
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
  // -5570044006703792837155312379
  s21_decimal dec_1 = {{0x77f352fb, 0xa539505c, 0x11ff6eb2, 0x80000000}};
  // 13403392302202561453492
  s21_decimal dec_2 = {{0x24d35db4, 0x996f2ca3, 0x2d6, 0x0}};
  // -5570057410096095039716765871
  s21_decimal dec_check = {{0x9cc6b0af, 0x3ea87cff, 0x11ff7189, 0x80000000}};
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
  // -56384946813466.0104
  s21_decimal dec_1 = {{0x96f59808, 0x7d3321a, 0x0, 0x80040000}};
  // -518774426173039630853.6
  s21_decimal dec_2 = {{0x5b5c8438, 0x3a6a0032, 0x119, 0x80010000}};
  // 518774369788092817387.5896
  s21_decimal dec_check = {{0x4a6ee2b8, 0x263d929a, 0x44a8c, 0x40000}};
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
  // 86062428546545469.00
  s21_decimal dec_1 = {{0x4a6d93d4, 0x776f8447, 0x0, 0x20000}};
  // -6688711239266650483
  s21_decimal dec_2 = {{0xda6c973, 0x5cd3136f, 0x0, 0x80000000}};
  // 6774773667813195952.00
  s21_decimal dec_check = {{0x9f9444c0, 0xb9e31ba8, 0x24, 0x20000}};
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
  // -2231058982637324247948.78
  s21_decimal dec_1 = {{0x932fe2fe, 0x98509527, 0x2f3e, 0x80020000}};
  // -3061694974
  s21_decimal dec_2 = {{0xb67dc1fe, 0x0, 0x0, 0x80000000}};
  // -2231058982634262552974.78
  s21_decimal dec_check = {{0x4a101bc6, 0x985094e0, 0x2f3e, 0x80020000}};
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
  // 855.40216
  s21_decimal dec_1 = {{0x5193d78, 0x0, 0x0, 0x50000}};
  // -1876
  s21_decimal dec_2 = {{0x754, 0x0, 0x0, 0x80000000}};
  // 2731.40216
  s21_decimal dec_check = {{0x1047c9f8, 0x0, 0x0, 0x50000}};
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
  // 56146442310938970223084891
  s21_decimal dec_1 = {{0xc4e1055b, 0xbc8e0e5b, 0x2e7178, 0x0}};
  // -2.746629166726866
  s21_decimal dec_2 = {{0x6fcffed2, 0x9c20b, 0x0, 0x800f0000}};
  // 56146442310938970223084893.747
  s21_decimal dec_check = {{0xefcf633, 0x8ae81679, 0xb56b3fa0, 0x30000}};
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
  // -496681046536.12765622
  s21_decimal dec_1 = {{0x9183d1b6, 0xb1488e07, 0x2, 0x80080000}};
  // -344425776146975774926878
  s21_decimal dec_2 = {{0xfc92e81e, 0x5bd63fb3, 0x48ef, 0x80000000}};
  // 344425776146479093880341.87234
  s21_decimal dec_check = {{0xe2e31fe2, 0xca438e64, 0x6f4a3b81, 0x50000}};
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
  // -0.3756902710038
  s21_decimal dec_1 = {{0xb8d9fb16, 0x36a, 0x0, 0x800d0000}};
  // 14331252936777743600.172
  s21_decimal dec_2 = {{0x5f160a2c, 0xe61657c4, 0x308, 0x30000}};
  // -14331252936777743600.547690271
  s21_decimal dec_check = {{0x231a771f, 0x6cb823e6, 0x2e4e88da, 0x80090000}};
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
  // -1102893983983097
  s21_decimal dec_1 = {{0x8423e5f9, 0x3eb13, 0x0, 0x80000000}};
  // 5.196
  s21_decimal dec_2 = {{0x144c, 0x0, 0x0, 0x30000}};
  // -1102893983983102.196
  s21_decimal dec_check = {{0x2c3a68f4, 0xf4e443c, 0x0, 0x80030000}};
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
  // 432.04
  s21_decimal dec_1 = {{0xa8c4, 0x0, 0x0, 0x20000}};
  // -15084
  s21_decimal dec_2 = {{0x3aec, 0x0, 0x0, 0x80000000}};
  // 15516.04
  s21_decimal dec_check = {{0x17acf4, 0x0, 0x0, 0x20000}};
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
  // -41
  s21_decimal dec_1 = {{0x29, 0x0, 0x0, 0x80000000}};
  // -6032
  s21_decimal dec_2 = {{0x1790, 0x0, 0x0, 0x80000000}};
  // 5991
  s21_decimal dec_check = {{0x1767, 0x0, 0x0, 0x0}};
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
  // 6449489595627159079880162356
  s21_decimal dec_1 = {{0x5bf6fc34, 0x8cd21e95, 0x14d6e48b, 0x0}};
  // 18767048741694
  s21_decimal dec_2 = {{0x8b46133e, 0x1111, 0x0, 0x0}};
  // 6449489595627140312831420662
  s21_decimal dec_check = {{0xd0b0e8f6, 0x8cd20d83, 0x14d6e48b, 0x0}};
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
  // -557250790.515974802
  s21_decimal dec_1 = {{0x3b82a292, 0x7bbc0a4, 0x0, 0x80090000}};
  // 8453248.54981683
  s21_decimal dec_2 = {{0x87b37433, 0x300d1, 0x0, 0x80000}};
  // -565704039.065791632
  s21_decimal dec_check = {{0x88852c90, 0x7d9c8d3, 0x0, 0x80090000}};
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
  // 869696216283340954431
  s21_decimal dec_1 = {{0x95d55b3f, 0x2575a4dc, 0x2f, 0x0}};
  // 0.700251
  s21_decimal dec_2 = {{0xaaf5b, 0x0, 0x0, 0x60000}};
  // 869696216283340954430.299749
  s21_decimal dec_check = {{0xcf835e65, 0x5ad6dd46, 0x2cf6556, 0x60000}};
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
  // 498503438161964
  s21_decimal dec_1 = {{0xe059d82c, 0x1c562, 0x0, 0x0}};
  // 66.8114127284356100578698
  s21_decimal dec_2 = {{0x2dedd8a, 0x8a1700c4, 0x8d7a, 0x160000}};
  // 498503438161897.18858727156439
  s21_decimal dec_check = {{0xcebfead7, 0x3bad2db7, 0xa1133ce9, 0xe0000}};
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
  // -0.70
  s21_decimal dec_1 = {{0x46, 0x0, 0x0, 0x80020000}};
  // 4330.706
  s21_decimal dec_2 = {{0x4214d2, 0x0, 0x0, 0x30000}};
  // -4331.406
  s21_decimal dec_check = {{0x42178e, 0x0, 0x0, 0x80030000}};
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
  // 45960297.08955047388414596983
  s21_decimal dec_1 = {{0xc6cdd777, 0xc34a14fd, 0xed9bf25, 0x140000}};
  // -55354306813611306.4
  s21_decimal dec_2 = {{0xd82203a8, 0x7ae947c, 0x0, 0x80010000}};
  // 55354306859571603.489550473884
  s21_decimal dec_check = {{0xa4d39a9c, 0xadc86f5d, 0xb2dc026b, 0xc0000}};
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
  // -57110064083486774503
  s21_decimal dec_1 = {{0xac0614e7, 0x188fb4b3, 0x3, 0x80000000}};
  // 835375969314.90
  s21_decimal dec_2 = {{0x1cca5da2, 0x4bfa, 0x0, 0x20000}};
  // -57110064918862743817.90
  s21_decimal dec_check = {{0x4f2a87de, 0x9822e229, 0x135, 0x80020000}};
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
  // -3177081929367067
  s21_decimal dec_1 = {{0x7d27e1b, 0xb498a, 0x0, 0x80000000}};
  // 2681061665223310883064
  s21_decimal dec_2 = {{0xa8b4b8f8, 0x573473a5, 0x91, 0x0}};
  // -2681064842305240250131
  s21_decimal dec_check = {{0xb0873713, 0x573fbd2f, 0x91, 0x80000000}};
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
  // -66381888471153647.40
  s21_decimal dec_1 = {{0xf8456984, 0x5c1f9595, 0x0, 0x80020000}};
  // 51199101636064343292137503
  s21_decimal dec_2 = {{0xa00c501f, 0xdc74be2e, 0x2a59d4, 0x0}};
  // -51199101702446231763291150.40
  s21_decimal dec_check = {{0x7d14b5a0, 0x79b9dfcc, 0x108b1726, 0x80020000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_101) {
  // 60242914
  s21_decimal dec_1 = {{0x3973be2, 0x0, 0x0, 0x0}};
  // 2980074528050
  s21_decimal dec_2 = {{0xda489d32, 0x2b5, 0x0, 0x0}};
  // -2980014285136
  s21_decimal dec_check = {{0xd6b16150, 0x2b5, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_102) {
  // 531076038.6168
  s21_decimal dec_1 = {{0x81fc7e78, 0x4d4, 0x0, 0x40000}};
  // 82342.9442998367143
  s21_decimal dec_2 = {{0x3783f3a7, 0xb6d68b7, 0x0, 0xd0000}};
  // 530993695.6725001632857
  s21_decimal dec_check = {{0xc076bc59, 0xda2da8e3, 0x11f, 0xd0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_103) {
  // 502437475253488709
  s21_decimal dec_1 = {{0xc2540c45, 0x6f90438, 0x0, 0x0}};
  // -7
  s21_decimal dec_2 = {{0x7, 0x0, 0x0, 0x80000000}};
  // 502437475253488716
  s21_decimal dec_check = {{0xc2540c4c, 0x6f90438, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_104) {
  // 5338812727219434461697590.9
  s21_decimal dec_1 = {{0x3edfde25, 0x2dbd7788, 0x2c2960, 0x10000}};
  // -1168300922949517
  s21_decimal dec_2 = {{0x4180cf8d, 0x42690, 0x0, 0x80000000}};
  // 5338812728387735384647107.9
  s21_decimal dec_check = {{0xcde7f9a7, 0x2de6f92a, 0x2c2960, 0x10000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_105) {
  // -53181980910185126
  s21_decimal dec_1 = {{0xd89a6aa6, 0xbcf0ba, 0x0, 0x80000000}};
  // 1563745540285831497
  s21_decimal dec_2 = {{0xa7d69949, 0x15b38a48, 0x0, 0x0}};
  // -1616927521196016623
  s21_decimal dec_check = {{0x807103ef, 0x16707b03, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_106) {
  // 12182793922742
  s21_decimal dec_1 = {{0x871aa8b6, 0xb14, 0x0, 0x0}};
  // 8453892030026533.59
  s21_decimal dec_2 = {{0x45ec7aaf, 0xbbb6d00, 0x0, 0x20000}};
  // -8441709236103791.59
  s21_decimal dec_check = {{0x7f829397, 0xbb718fb, 0x0, 0x80020000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_107) {
  // 92825157472.50467013225896
  s21_decimal dec_1 = {{0xd7fd6da8, 0x2fdcf012, 0x7ada6, 0xe0000}};
  // -5941517
  s21_decimal dec_2 = {{0x5aa90d, 0x0, 0x0, 0x80000000}};
  // 92831098989.50467013225896
  s21_decimal dec_check = {{0xe272ada8, 0x655fcf45, 0x7adc6, 0xe0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_108) {
  // -6
  s21_decimal dec_1 = {{0x6, 0x0, 0x0, 0x80000000}};
  // 42648496.0
  s21_decimal dec_2 = {{0x196ba4e0, 0x0, 0x0, 0x10000}};
  // -42648502.0
  s21_decimal dec_check = {{0x196ba51c, 0x0, 0x0, 0x80010000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_109) {
  // -38962397345.900200
  s21_decimal dec_1 = {{0xd6666a8, 0x8a6c18, 0x0, 0x80060000}};
  // 2596514170
  s21_decimal dec_2 = {{0x9ac3a97a, 0x0, 0x0, 0x0}};
  // -41558911515.900200
  s21_decimal dec_check = {{0x1e283928, 0x93a59c, 0x0, 0x80060000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_110) {
  // -0.8622517387
  s21_decimal dec_1 = {{0x1f12c8b, 0x2, 0x0, 0x800a0000}};
  // -7755375007
  s21_decimal dec_2 = {{0xce41a19f, 0x1, 0x0, 0x80000000}};
  // 7755375006.1377482613
  s21_decimal dec_check = {{0x8fd56f75, 0x344644c8, 0x4, 0xa0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_111) {
  // -159
  s21_decimal dec_1 = {{0x9f, 0x0, 0x0, 0x80000000}};
  // -9805.2
  s21_decimal dec_2 = {{0x17f04, 0x0, 0x0, 0x80010000}};
  // 9646.2
  s21_decimal dec_check = {{0x178ce, 0x0, 0x0, 0x10000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_112) {
  // 85416040.31092
  s21_decimal dec_1 = {{0xbf462a74, 0x7c4, 0x0, 0x50000}};
  // -712901.7
  s21_decimal dec_2 = {{0x6cc7b9, 0x0, 0x0, 0x80010000}};
  // 86128942.01092
  s21_decimal dec_check = {{0x587fd504, 0x7d5, 0x0, 0x50000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_113) {
  // 4403
  s21_decimal dec_1 = {{0x1133, 0x0, 0x0, 0x0}};
  // 661144
  s21_decimal dec_2 = {{0xa1698, 0x0, 0x0, 0x0}};
  // -656741
  s21_decimal dec_check = {{0xa0565, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_114) {
  // 8026590194246836538164
  s21_decimal dec_1 = {{0x5453cb34, 0x1f50c6f8, 0x1b3, 0x0}};
  // -1042592385899713
  s21_decimal dec_2 = {{0x74ce9cc1, 0x3b43b, 0x0, 0x80000000}};
  // 8026591236839222437877
  s21_decimal dec_check = {{0xc92267f5, 0x1f547b33, 0x1b3, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_115) {
  // 797688.9369612888321
  s21_decimal dec_1 = {{0x485da901, 0x6eb39a9e, 0x0, 0xd0000}};
  // 34614102709741017723
  s21_decimal dec_2 = {{0x68ffda7b, 0xe05dff05, 0x1, 0x0}};
  // -34614102709740220034.063038711
  s21_decimal dec_check = {{0x3ba878f7, 0xd3ab909f, 0x6fd81d5b, 0x80090000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_116) {
  // 4
  s21_decimal dec_1 = {{0x4, 0x0, 0x0, 0x0}};
  // 4502337387528494342052
  s21_decimal dec_2 = {{0x24255fa4, 0x127b9f8d, 0xf4, 0x0}};
  // -4502337387528494342048
  s21_decimal dec_check = {{0x24255fa0, 0x127b9f8d, 0xf4, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_117) {
  // 0.581
  s21_decimal dec_1 = {{0x245, 0x0, 0x0, 0x30000}};
  // 1.15
  s21_decimal dec_2 = {{0x73, 0x0, 0x0, 0x20000}};
  // -0.569
  s21_decimal dec_check = {{0x239, 0x0, 0x0, 0x80030000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_118) {
  // -751539657329933275983991
  s21_decimal dec_1 = {{0xfc117077, 0xbe4c1d0, 0x9f25, 0x80000000}};
  // 8236730054630634909509227603
  s21_decimal dec_2 = {{0xb39a1453, 0xf8697435, 0x1a9d436e, 0x0}};
  // -8237481594287964842785211594
  s21_decimal dec_check = {{0xafab84ca, 0x44e3606, 0x1a9de294, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_119) {
  // 1408354508489
  s21_decimal dec_1 = {{0xe8785ec9, 0x147, 0x0, 0x0}};
  // 7534691.9132001
  s21_decimal dec_2 = {{0x12598b61, 0x4487, 0x0, 0x70000}};
  // 1408346973797.0867999
  s21_decimal dec_check = {{0xf8b79f1f, 0xc372891b, 0x0, 0x70000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_120) {
  // -584723710964350349190255
  s21_decimal dec_1 = {{0xeaf3a46f, 0xef964314, 0x7bd1, 0x80000000}};
  // -93943631059216.5002
  s21_decimal dec_2 = {{0xddf3148a, 0xd098c58, 0x0, 0x80040000}};
  // -584723710870406718131038.4998
  s21_decimal dec_check = {{0xef541b66, 0xd092d4c0, 0x12e4b89e, 0x80040000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_121) {
  // -910975345
  s21_decimal dec_1 = {{0x364c6171, 0x0, 0x0, 0x80000000}};
  // 11629.033
  s21_decimal dec_2 = {{0xb171e9, 0x0, 0x0, 0x30000}};
  // -910986974.033
  s21_decimal dec_check = {{0x1b0e1351, 0xd4, 0x0, 0x80030000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_122) {
  // 3421472
  s21_decimal dec_1 = {{0x343520, 0x0, 0x0, 0x0}};
  // 3604992742
  s21_decimal dec_2 = {{0xd6dfd2e6, 0x0, 0x0, 0x0}};
  // -3601571270
  s21_decimal dec_check = {{0xd6ab9dc6, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_123) {
  // -20206553.90127175711413899368
  s21_decimal dec_1 = {{0xc09a1068, 0x30e6c7a2, 0x687726c, 0x80140000}};
  // -81410.48
  s21_decimal dec_2 = {{0x7c38f8, 0x0, 0x0, 0x80020000}};
  // -20125143.42127175711413899368
  s21_decimal dec_check = {{0xb7ba1068, 0x1839688a, 0x680b67d, 0x80140000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_124) {
  // 9866.14624230
  s21_decimal dec_1 = {{0xb6d06fe6, 0xe5, 0x0, 0x80000}};
  // 22795798.3
  s21_decimal dec_2 = {{0xd965cdf, 0x0, 0x0, 0x10000}};
  // -22785932.15375770
  s21_decimal dec_check = {{0x5330a99a, 0x8185e, 0x0, 0x80080000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_125) {
  // -7.1
  s21_decimal dec_1 = {{0x47, 0x0, 0x0, 0x80010000}};
  // 972663550851190534686616472
  s21_decimal dec_2 = {{0x8d63ab98, 0xbf1bb0f4, 0x3249184, 0x0}};
  // -972663550851190534686616479.1
  s21_decimal dec_check = {{0x85e4b437, 0x7714e98d, 0x1f6daf2f, 0x80010000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_126) {
  // -16
  s21_decimal dec_1 = {{0x10, 0x0, 0x0, 0x80000000}};
  // 287133
  s21_decimal dec_2 = {{0x4619d, 0x0, 0x0, 0x0}};
  // -287149
  s21_decimal dec_check = {{0x461ad, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_127) {
  // 4360
  s21_decimal dec_1 = {{0x1108, 0x0, 0x0, 0x0}};
  // -588571097121151542991174303
  s21_decimal dec_2 = {{0x83beba9f, 0x1ba8eee7, 0x1e6dac7, 0x80000000}};
  // 588571097121151542991178663
  s21_decimal dec_check = {{0x83becba7, 0x1ba8eee7, 0x1e6dac7, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_128) {
  // 84741811339
  s21_decimal dec_1 = {{0xbb016c8b, 0x13, 0x0, 0x0}};
  // -4583390254685497
  s21_decimal dec_2 = {{0xb3ff5d39, 0x104891, 0x0, 0x80000000}};
  // 4583474996496836
  s21_decimal dec_check = {{0x6f00c9c4, 0x1048a5, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_129) {
  // 7368591567822703706
  s21_decimal dec_1 = {{0x8f02cc5a, 0x66427efd, 0x0, 0x0}};
  // -92136443.711435149187
  s21_decimal dec_2 = {{0x4fdd8f83, 0xfea66765, 0x4, 0x800c0000}};
  // 7368591567914840149.7114351492
  s21_decimal dec_check = {{0xbcbf1784, 0xbbad451, 0xee178f95, 0xa0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_130) {
  // -6539.612053917516
  s21_decimal dec_1 = {{0x15714f4c, 0x173bbe, 0x0, 0x800c0000}};
  // -6862892763
  s21_decimal dec_2 = {{0x990f6edb, 0x1, 0x0, 0x80000000}};
  // 6862886223.387946082484
  s21_decimal dec_check = {{0xb0a360b4, 0x9adc30a, 0x174, 0xc0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_131) {
  // 7445.3714324655775609
  s21_decimal dec_1 = {{0xa1851f79, 0x940bab4, 0x4, 0x100000}};
  // 180016834388
  s21_decimal dec_2 = {{0xe9d6e754, 0x29, 0x0, 0x0}};
  // -180016826942.6285675344224391
  s21_decimal dec_check = {{0x30cee087, 0x6d756405, 0x5d11075, 0x80100000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_132) {
  // 4385065578953069
  s21_decimal dec_1 = {{0xa426796d, 0xf9431, 0x0, 0x0}};
  // 52376295932801588461884036
  s21_decimal dec_2 = {{0xd16cd284, 0xb11d5e03, 0x2b531c, 0x0}};
  // -52376295928416522882930967
  s21_decimal dec_check = {{0x2d465917, 0xb10dc9d2, 0x2b531c, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_133) {
  // -91
  s21_decimal dec_1 = {{0x5b, 0x0, 0x0, 0x80000000}};
  // -3569053981284736697210226
  s21_decimal dec_2 = {{0x36ad9572, 0xcdd3b00b, 0x2f3c6, 0x80000000}};
  // 3569053981284736697210135
  s21_decimal dec_check = {{0x36ad9517, 0xcdd3b00b, 0x2f3c6, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_134) {
  // 6507079656264.3589773388741
  s21_decimal dec_1 = {{0x6347ebc5, 0xf32e8c6a, 0x35d346, 0xd0000}};
  // 3189728252561943
  s21_decimal dec_2 = {{0x7b6c8a17, 0xb550a, 0x0, 0x0}};
  // -3183221172905678.6410226611259
  s21_decimal dec_check = {{0xf344743b, 0x9545ca49, 0x66dafd07, 0x800d0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_135) {
  // 1460368164201468834916564
  s21_decimal dec_1 = {{0xf5c0a8d4, 0xb7810b17, 0x1353e, 0x0}};
  // 5799.77
  s21_decimal dec_2 = {{0x8d989, 0x0, 0x0, 0x20000}};
  // 1460368164201468834910764.23
  s21_decimal dec_check = {{0xff391947, 0xae68555b, 0x78cc7f, 0x20000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_136) {
  // 660158
  s21_decimal dec_1 = {{0xa12be, 0x0, 0x0, 0x0}};
  // -7.5
  s21_decimal dec_2 = {{0x4b, 0x0, 0x0, 0x80010000}};
  // 660165.5
  s21_decimal dec_check = {{0x64bbb7, 0x0, 0x0, 0x10000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_137) {
  // -8.4575125867577266945400301
  s21_decimal dec_1 = {{0x14b01ded, 0xc29c040e, 0x45f57a, 0x80190000}};
  // -779457394599182690022886
  s21_decimal dec_2 = {{0xf349f5e6, 0x7853d5af, 0xa50e, 0x80000000}};
  // 779457394599182690022877.54249
  s21_decimal dec_check = {{0xbac92c09, 0xebef9a9a, 0xfbdb345a, 0x50000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_138) {
  // 572337710358836612288697865
  s21_decimal dec_1 = {{0x73d75609, 0x72c532af, 0x1d96d39, 0x0}};
  // -650913599.0479209172802236881
  s21_decimal dec_2 = {{0x6e1471d1, 0x18142234, 0x15083b29, 0x80130000}};
  // 572337710358836612939611464.05
  s21_decimal dec_check = {{0x67dcf025, 0xd507cc98, 0xb8eeaa70, 0x20000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_139) {
  // -5978.4083721
  s21_decimal dec_1 = {{0xeb68b909, 0xd, 0x0, 0x80070000}};
  // 2445371619446751731
  s21_decimal dec_2 = {{0x20f201f3, 0x21efb488, 0x0, 0x0}};
  // -2445371619446757709.4083721
  s21_decimal dec_check = {{0x59d61489, 0x9c75971d, 0x143a46, 0x80070000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_140) {
  // -5897303305.51653126724931775
  s21_decimal dec_1 = {{0x99d450bf, 0x473a6626, 0x1e7d041, 0x80110000}};
  // -40148056108.37234807382
  s21_decimal dec_2 = {{0x668df256, 0xa49ecfb4, 0xd9, 0x800b0000}};
  // 34250752802.85581680657068225
  s21_decimal dec_check = {{0xd52c70c1, 0xfd980bb4, 0xb1127e6, 0x110000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_141) {
  // 2628915409900563
  s21_decimal dec_1 = {{0x1126d413, 0x956fc, 0x0, 0x0}};
  // 150858875121250780202534
  s21_decimal dec_2 = {{0x8f0e4626, 0x13753633, 0x1ff2, 0x0}};
  // -150858872492335370301971
  s21_decimal dec_check = {{0x7de77213, 0x136bdf37, 0x1ff2, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_142) {
  // -905
  s21_decimal dec_1 = {{0x389, 0x0, 0x0, 0x80000000}};
  // -6596842.79794606944116190
  s21_decimal dec_2 = {{0xc2095dde, 0x8e748415, 0x8bb1, 0x80110000}};
  // 6595937.79794606944116190
  s21_decimal dec_check = {{0x152f5dde, 0xa683ed93, 0x8bac, 0x110000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_143) {
  // -261431171097445962157365
  s21_decimal dec_1 = {{0x43090d35, 0x36519f6b, 0x375c, 0x80000000}};
  // -3218046909725733721
  s21_decimal dec_2 = {{0x4cbef359, 0x2ca8cc9d, 0x0, 0x80000000}};
  // -261427953050536236423644
  s21_decimal dec_check = {{0xf64a19dc, 0x9a8d2cd, 0x375c, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_144) {
  // 3
  s21_decimal dec_1 = {{0x3, 0x0, 0x0, 0x0}};
  // 0.13624
  s21_decimal dec_2 = {{0x3538, 0x0, 0x0, 0x50000}};
  // 2.86376
  s21_decimal dec_check = {{0x45ea8, 0x0, 0x0, 0x50000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_145) {
  // -200637382
  s21_decimal dec_1 = {{0xbf57bc6, 0x0, 0x0, 0x80000000}};
  // -193004907425
  s21_decimal dec_2 = {{0xeffd2ba1, 0x2c, 0x0, 0x80000000}};
  // 192804270043
  s21_decimal dec_check = {{0xe407afdb, 0x2c, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_146) {
  // 388155710330872648194614518
  s21_decimal dec_1 = {{0xb3c064f6, 0x385d0423, 0x141132b, 0x0}};
  // -599
  s21_decimal dec_2 = {{0x257, 0x0, 0x0, 0x80000000}};
  // 388155710330872648194615117
  s21_decimal dec_check = {{0xb3c0674d, 0x385d0423, 0x141132b, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_147) {
  // -0.318
  s21_decimal dec_1 = {{0x13e, 0x0, 0x0, 0x80030000}};
  // -5.778
  s21_decimal dec_2 = {{0x1692, 0x0, 0x0, 0x80030000}};
  // 5.460
  s21_decimal dec_check = {{0x1554, 0x0, 0x0, 0x30000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_148) {
  // 1012783204046
  s21_decimal dec_1 = {{0xce9546ce, 0xeb, 0x0, 0x0}};
  // 219916825846.6984
  s21_decimal dec_2 = {{0xc2d8e4a8, 0x7d021, 0x0, 0x40000}};
  // 792866378199.3016
  s21_decimal dec_check = {{0xe444ea38, 0x1c2b13, 0x0, 0x40000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_149) {
  // 13440738094035.42
  s21_decimal dec_1 = {{0x91f61e96, 0x4c66d, 0x0, 0x20000}};
  // 377727
  s21_decimal dec_2 = {{0x5c37f, 0x0, 0x0, 0x0}};
  // 13440737716308.42
  s21_decimal dec_check = {{0x8fb5c0fa, 0x4c66d, 0x0, 0x20000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_150) {
  // -958625133
  s21_decimal dec_1 = {{0x3923756d, 0x0, 0x0, 0x80000000}};
  // 8.9
  s21_decimal dec_2 = {{0x59, 0x0, 0x0, 0x10000}};
  // -958625141.9
  s21_decimal dec_check = {{0x3b62969b, 0x2, 0x0, 0x80010000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_151) {
  // -23340.95
  s21_decimal dec_1 = {{0x239d8f, 0x0, 0x0, 0x80020000}};
  // -678643509730
  s21_decimal dec_2 = {{0x24e29e2, 0x9e, 0x0, 0x80000000}};
  // 678643486389.05
  s21_decimal dec_check = {{0xe664beb9, 0x3db8, 0x0, 0x20000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_152) {
  // 20550541502591
  s21_decimal dec_1 = {{0xcbb9e87f, 0x12b0, 0x0, 0x0}};
  // -2585.910025716896
  s21_decimal dec_2 = {{0x188104a0, 0x92fdf, 0x0, 0x800c0000}};
  // 20550541505176.910025716896
  s21_decimal dec_check = {{0xbce3f4a0, 0x1658330e, 0x10ffbf, 0xc0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_153) {
  // -4920032098062523517157698
  s21_decimal dec_1 = {{0xf784c142, 0x7976ec9b, 0x411db, 0x80000000}};
  // 35
  s21_decimal dec_2 = {{0x23, 0x0, 0x0, 0x0}};
  // -4920032098062523517157733
  s21_decimal dec_check = {{0xf784c165, 0x7976ec9b, 0x411db, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_154) {
  // 42480645166397.809146176
  s21_decimal dec_1 = {{0xc2eb940, 0xe1612abc, 0x8fe, 0x90000}};
  // -20250.79001018358482
  s21_decimal dec_2 = {{0x41cd5ad2, 0x1c1a869f, 0x0, 0x800e0000}};
  // 42480645186648.59915635958482
  s21_decimal dec_check = {{0xd38a2d2, 0xffefb6b6, 0xdb9eaa6, 0xe0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_155) {
  // -45.4928640887
  s21_decimal dec_1 = {{0xebdc2b77, 0x69, 0x0, 0x800a0000}};
  // -56043978334
  s21_decimal dec_2 = {{0xc7b3e5e, 0xd, 0x0, 0x80000000}};
  // 56043978288.5071359113
  s21_decimal dec_check = {{0x5db98c89, 0x61aa1532, 0x1e, 0xa0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_156) {
  // -258437.936112614
  s21_decimal dec_1 = {{0x4560e3e6, 0xeb0c, 0x0, 0x80090000}};
  // 2079024504
  s21_decimal dec_2 = {{0x7beb6578, 0x0, 0x0, 0x0}};
  // -2079282941.936112614
  s21_decimal dec_check = {{0xb5a193e6, 0x1cdb18d1, 0x0, 0x80090000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_157) {
  // -354104262123928360083824
  s21_decimal dec_1 = {{0xcee86170, 0x7cfc4ec, 0x4afc, 0x80000000}};
  // 90144.7731158
  s21_decimal dec_2 = {{0xe278c7d6, 0xd1, 0x0, 0x70000}};
  // -354104262123928360173968.77312
  s21_decimal dec_check = {{0x6efb8800, 0x67dbd739, 0x726ad16b, 0x80050000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_158) {
  // -6897
  s21_decimal dec_1 = {{0x1af1, 0x0, 0x0, 0x80000000}};
  // 30.5629
  s21_decimal dec_2 = {{0x4a9dd, 0x0, 0x0, 0x40000}};
  // -6927.5629
  s21_decimal dec_check = {{0x4210fed, 0x0, 0x0, 0x80040000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_159) {
  // -0.953940
  s21_decimal dec_1 = {{0xe8e54, 0x0, 0x0, 0x80060000}};
  // -46239786059896
  s21_decimal dec_2 = {{0xa05c878, 0x2a0e, 0x0, 0x80000000}};
  // 46239786059895.046060
  s21_decimal dec_check = {{0xbe1a7fac, 0x81b4b86e, 0x2, 0x60000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_160) {
  // 7
  s21_decimal dec_1 = {{0x7, 0x0, 0x0, 0x0}};
  // -33579868.33134705
  s21_decimal dec_2 = {{0x3c597471, 0xbee12, 0x0, 0x80080000}};
  // 33579875.33134705
  s21_decimal dec_check = {{0x66129b71, 0xbee12, 0x0, 0x80000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_161) {
  // -2238.1228
  s21_decimal dec_1 = {{0x15582ac, 0x0, 0x0, 0x80040000}};
  // -62383115773090654660.9619
  s21_decimal dec_2 = {{0xa3cb9dd3, 0xf46f5521, 0x8419, 0x80040000}};
  // 62383115773090652422.8391
  s21_decimal dec_check = {{0xa2761b27, 0xf46f5521, 0x8419, 0x40000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_162) {
  // -2982.55181218013
  s21_decimal dec_1 = {{0xf22100dd, 0x10f42, 0x0, 0x800b0000}};
  // -79853360812571
  s21_decimal dec_2 = {{0x4f34921b, 0x48a0, 0x0, 0x80000000}};
  // 79853360809588.44818781987
  s21_decimal dec_check = {{0xa2b97723, 0xefb4a444, 0x69af5, 0xb0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_163) {
  // 89601196382253173216635
  s21_decimal dec_1 = {{0xc7f8957b, 0x4a64062c, 0x12f9, 0x0}};
  // -6763632805197659024080256296
  s21_decimal dec_2 = {{0x10683d28, 0x108186ed, 0x15dabef5, 0x80000000}};
  // 6763722406394041277253472931
  s21_decimal dec_check = {{0xd860d2a3, 0x5ae58d19, 0x15dad1ee, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_164) {
  // 969471099451531964
  s21_decimal dec_1 = {{0x16d0e2bc, 0xd7440d4, 0x0, 0x0}};
  // -701828
  s21_decimal dec_2 = {{0xab584, 0x0, 0x0, 0x80000000}};
  // 969471099452233792
  s21_decimal dec_check = {{0x16db9840, 0xd7440d4, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_165) {
  // -7360.57
  s21_decimal dec_1 = {{0xb3b39, 0x0, 0x0, 0x80020000}};
  // -96788124563553
  s21_decimal dec_2 = {{0x3dc87861, 0x5807, 0x0, 0x80000000}};
  // 96788124556192.43
  s21_decimal dec_check = {{0x2243caab, 0x2262d4, 0x0, 0x20000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_166) {
  // 27842152460
  s21_decimal dec_1 = {{0x7b85880c, 0x6, 0x0, 0x0}};
  // -62927
  s21_decimal dec_2 = {{0xf5cf, 0x0, 0x0, 0x80000000}};
  // 27842215387
  s21_decimal dec_check = {{0x7b867ddb, 0x6, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_167) {
  // -1066345039
  s21_decimal dec_1 = {{0x3f8f224f, 0x0, 0x0, 0x80000000}};
  // -548975616506250267846
  s21_decimal dec_2 = {{0x6e1e0cc6, 0xc2912e9d, 0x1d, 0x80000000}};
  // 548975616505183922807
  s21_decimal dec_check = {{0x2e8eea77, 0xc2912e9d, 0x1d, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_168) {
  // 82858
  s21_decimal dec_1 = {{0x143aa, 0x0, 0x0, 0x0}};
  // 79526571674128363189
  s21_decimal dec_2 = {{0x79102eb5, 0x4fa72396, 0x4, 0x0}};
  // -79526571674128280331
  s21_decimal dec_check = {{0x790eeb0b, 0x4fa72396, 0x4, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_169) {
  // -52976213554262
  s21_decimal dec_1 = {{0x7c63f456, 0x302e, 0x0, 0x80000000}};
  // 734435464965.9
  s21_decimal dec_2 = {{0xfda6663b, 0x6ad, 0x0, 0x10000}};
  // -53710649019227.9
  s21_decimal dec_check = {{0xd98df197, 0x1e87e, 0x0, 0x80010000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_170) {
  // -33
  s21_decimal dec_1 = {{0x21, 0x0, 0x0, 0x80000000}};
  // 56264.75258249952
  s21_decimal dec_2 = {{0xdb1b02e0, 0x13fd3f, 0x0, 0xb0000}};
  // -56297.75258249952
  s21_decimal dec_check = {{0x326eeae0, 0x140040, 0x0, 0x800b0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_171) {
  // 614596573603
  s21_decimal dec_1 = {{0x18cf79a3, 0x8f, 0x0, 0x0}};
  // -9254487883.8309
  s21_decimal dec_2 = {{0x48a10225, 0x542b, 0x0, 0x80040000}};
  // 623851061486.8309
  s21_decimal dec_check = {{0x71207155, 0x1629e4, 0x0, 0x40000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_172) {
  // 4962580078.866701
  s21_decimal dec_1 = {{0xb6c5310d, 0x11a170, 0x0, 0x60000}};
  // -43532733.236567
  s21_decimal dec_2 = {{0xc119c557, 0x2797, 0x0, 0x80060000}};
  // 5006112812.103268
  s21_decimal dec_check = {{0x77def664, 0x11c908, 0x0, 0x60000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_173) {
  // -39658.291
  s21_decimal dec_1 = {{0x25d2333, 0x0, 0x0, 0x80030000}};
  // 1663759249780853790568659
  s21_decimal dec_2 = {{0x70bd70d3, 0x91d4ed63, 0x16050, 0x0}};
  // -1663759249780853790608317.291
  s21_decimal dec_check = {{0x665ddb6b, 0xa7bf4c70, 0x5603ab9, 0x80030000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_174) {
  // -513378934833192.72
  s21_decimal dec_1 = {{0xc8970fe8, 0xb6638a, 0x0, 0x80020000}};
  // -9312631.910206292243115902874
  s21_decimal dec_2 = {{0xe0af879a, 0x6e1feec8, 0x1e173a83, 0x80150000}};
  // -513378925520560.80979370775688
  s21_decimal dec_check = {{0x542d1488, 0xc9cfff22, 0xa5e1b59b, 0x800e0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_175) {
  // 1349237810855050056680
  s21_decimal dec_1 = {{0x84f193e8, 0x246fa067, 0x49, 0x0}};
  // -927326565096.5
  s21_decimal dec_2 = {{0x19b47d15, 0x86f, 0x0, 0x80010000}};
  // 1349237811782376621776.5
  s21_decimal dec_check = {{0x4b244425, 0x6c5c4c7a, 0x2db, 0x10000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_176) {
  // -4058214682123488721
  s21_decimal dec_1 = {{0x863ecdd1, 0x3851acc0, 0x0, 0x80000000}};
  // 0.272601254828925607526164
  s21_decimal dec_2 = {{0x4918bf14, 0xbe5ee38f, 0x39b9, 0x180000}};
  // -4058214682123488721.2726012548
  s21_decimal dec_check = {{0xfdc4ca84, 0x62ab736d, 0x8320c3db, 0x800a0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_177) {
  // 1263414
  s21_decimal dec_1 = {{0x134736, 0x0, 0x0, 0x0}};
  // -2.1
  s21_decimal dec_2 = {{0x15, 0x0, 0x0, 0x80010000}};
  // 1263416.1
  s21_decimal dec_check = {{0xc0c831, 0x0, 0x0, 0x10000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_178) {
  // -505714982053223674968894287
  s21_decimal dec_1 = {{0x1d016b4f, 0x1c2ad66c, 0x1a25150, 0x80000000}};
  // -4595733
  s21_decimal dec_2 = {{0x462015, 0x0, 0x0, 0x80000000}};
  // -505714982053223674964298554
  s21_decimal dec_check = {{0x1cbb4b3a, 0x1c2ad66c, 0x1a25150, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_179) {
  // 6595114819592411113966.2
  s21_decimal dec_1 = {{0xc0ea234e, 0x380a5408, 0xdf7, 0x10000}};
  // 201714172108209649407582
  s21_decimal dec_2 = {{0xe39cd65e, 0xf27a74ed, 0x2ab6, 0x0}};
  // -195119057288617238293615.8
  s21_decimal dec_check = {{0x23363c5e, 0x40be3d42, 0x19d2e, 0x80010000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_180) {
  // -4
  s21_decimal dec_1 = {{0x4, 0x0, 0x0, 0x80000000}};
  // -1233291081
  s21_decimal dec_2 = {{0x49828749, 0x0, 0x0, 0x80000000}};
  // 1233291077
  s21_decimal dec_check = {{0x49828745, 0x0, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_181) {
  // 781841626267053
  s21_decimal dec_1 = {{0xb0677dad, 0x2c714, 0x0, 0x0}};
  // -8241585151173
  s21_decimal dec_2 = {{0xe4c15cc5, 0x77e, 0x0, 0x80000000}};
  // 790083211418226
  s21_decimal dec_check = {{0x9528da72, 0x2ce93, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_182) {
  // 980683782597567.7531498430
  s21_decimal dec_1 = {{0x8314a7be, 0xbe6a1f38, 0x81cad, 0xa0000}};
  // -81.13
  s21_decimal dec_2 = {{0x1fb1, 0x0, 0x0, 0x80020000}};
  // 980683782597648.8831498430
  s21_decimal dec_check = {{0x685438be, 0xbe6a1ff5, 0x81cad, 0xa0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_183) {
  // -75349078554
  s21_decimal dec_1 = {{0x8b27b21a, 0x11, 0x0, 0x80000000}};
  // -3935420724305591233
  s21_decimal dec_2 = {{0x49f1fbc1, 0x369d6c4c, 0x0, 0x80000000}};
  // 3935420648956512679
  s21_decimal dec_check = {{0xbeca49a7, 0x369d6c3a, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_184) {
  // 7.49802875457509059
  s21_decimal dec_1 = {{0x1b3616c3, 0xa67d5be, 0x0, 0x110000}};
  // 37488
  s21_decimal dec_2 = {{0x9270, 0x0, 0x0, 0x0}};
  // -37480.50197124542490941
  s21_decimal dec_check = {{0x8529e93d, 0x2ea53443, 0xcb, 0x80110000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_185) {
  // 47241439806
  s21_decimal dec_1 = {{0xffcf2a3e, 0xa, 0x0, 0x0}};
  // 502576
  s21_decimal dec_2 = {{0x7ab30, 0x0, 0x0, 0x0}};
  // 47240937230
  s21_decimal dec_check = {{0xffc77f0e, 0xa, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_186) {
  // -2193816691
  s21_decimal dec_1 = {{0x82c2fc73, 0x0, 0x0, 0x80000000}};
  // 9570177396354836802766
  s21_decimal dec_2 = {{0x2c72cce, 0xcce42503, 0x206, 0x0}};
  // -9570177396357030619457
  s21_decimal dec_check = {{0x858a2941, 0xcce42503, 0x206, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_187) {
  // 0.23640945
  s21_decimal dec_1 = {{0x168bb71, 0x0, 0x0, 0x80000}};
  // -90559835899417443
  s21_decimal dec_2 = {{0xe1b3d363, 0x141bbb0, 0x0, 0x80000000}};
  // 90559835899417443.23640945
  s21_decimal dec_check = {{0x4af1be71, 0xdaa6fa99, 0x77dad, 0x80000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_188) {
  // -539521292188351535
  s21_decimal dec_1 = {{0xb9a57c2f, 0x77cc3c1, 0x0, 0x80000000}};
  // -936588488171
  s21_decimal dec_2 = {{0x11062deb, 0xda, 0x0, 0x80000000}};
  // -539520355599863364
  s21_decimal dec_check = {{0xa89f4e44, 0x77cc2e7, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_189) {
  // -9.5203
  s21_decimal dec_1 = {{0x173e3, 0x0, 0x0, 0x80040000}};
  // 3809242171887972.96358952
  s21_decimal dec_2 = {{0x1a7b3628, 0xf174fe36, 0x50a9, 0x80000}};
  // -3809242171887982.48388952
  s21_decimal dec_check = {{0x533a0958, 0xf174fe36, 0x50a9, 0x80080000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_190) {
  // 70138.110099
  s21_decimal dec_1 = {{0x548ea093, 0x10, 0x0, 0x60000}};
  // -3652694918719532327154
  s21_decimal dec_2 = {{0xb00e60f2, 0x35333c4, 0xc6, 0x80000000}};
  // 3652694918719532397292.110099
  s21_decimal dec_check = {{0xbb534113, 0x50abf777, 0xbcd703c, 0x60000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_191) {
  // -7787365138173
  s21_decimal dec_1 = {{0x2321fefd, 0x715, 0x0, 0x80000000}};
  // 914879370
  s21_decimal dec_2 = {{0x3687f38a, 0x0, 0x0, 0x0}};
  // -7788280017543
  s21_decimal dec_check = {{0x59a9f287, 0x715, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_192) {
  // 8947322881
  s21_decimal dec_1 = {{0x154d5001, 0x2, 0x0, 0x0}};
  // -22407057253192429484765422935
  s21_decimal dec_2 = {{0xb2352557, 0xa55ab93a, 0x4866aeef, 0x80000000}};
  // 22407057253192429493712745816
  s21_decimal dec_check = {{0xc7827558, 0xa55ab93c, 0x4866aeef, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_193) {
  // -613497401849555983598646
  s21_decimal dec_1 = {{0xd3d10436, 0xc2c375a0, 0x81e9, 0x80000000}};
  // -1512587672466684.7916992
  s21_decimal dec_2 = {{0x447ef3c0, 0xf9b524c1, 0x333, 0x80070000}};
  // -613497400336968311131961.20830
  s21_decimal dec_check = {{0x79e2aafe, 0x4c396fcc, 0xc63b50c7, 0x80050000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_194) {
  // -863627577516083228
  s21_decimal dec_1 = {{0xc013c81c, 0xbfc38b4, 0x0, 0x80000000}};
  // 27.5125008211076015
  s21_decimal dec_2 = {{0xbf3f63af, 0x3d170bc, 0x0, 0x100000}};
  // -863627577516083255.51250082111
  s21_decimal dec_check = {{0x9d8a093f, 0xce80e47c, 0x170d994e, 0x800b0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_195) {
  // -9.967806693846
  s21_decimal dec_1 = {{0xcf93c1d6, 0x910, 0x0, 0x800c0000}};
  // 76639929721378793238918.1180
  s21_decimal dec_2 = {{0xd3b686fc, 0x26ca83d8, 0x279f35d, 0x40000}};
  // -76639929721378793238928.085807
  s21_decimal dec_check = {{0xb3e4d32f, 0x271b80b2, 0xf7a31063, 0x80060000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_196) {
  // -6829
  s21_decimal dec_1 = {{0x1aad, 0x0, 0x0, 0x80000000}};
  // -80370447
  s21_decimal dec_2 = {{0x4ca5b0f, 0x0, 0x0, 0x80000000}};
  // 80363618
  s21_decimal dec_check = {{0x4ca4062, 0x0, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_197) {
  // 17469031688373619309903.5
  s21_decimal dec_1 = {{0xbf2b651b, 0xfb2658ca, 0x24fd, 0x10000}};
  // -81658476161552000
  s21_decimal dec_2 = {{0x90824e80, 0x1221bf3, 0x0, 0x80000000}};
  // 17469113346849780861903.5
  s21_decimal dec_check = {{0x6442761b, 0x67b704e, 0x24fe, 0x10000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_198) {
  // -713
  s21_decimal dec_1 = {{0x2c9, 0x0, 0x0, 0x80000000}};
  // -9525342605.8
  s21_decimal dec_2 = {{0x2d8bef8a, 0x16, 0x0, 0x80010000}};
  // 9525341892.8
  s21_decimal dec_check = {{0x2d8bd3b0, 0x16, 0x0, 0x10000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_199) {
  // 478624
  s21_decimal dec_1 = {{0x74da0, 0x0, 0x0, 0x0}};
  // 0.531001961
  s21_decimal dec_2 = {{0x1fa67269, 0x0, 0x0, 0x90000}};
  // 478623.468998039
  s21_decimal dec_check = {{0x35d9cd97, 0x1b34e, 0x0, 0x90000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_200) {
  // 77746635
  s21_decimal dec_1 = {{0x4a251cb, 0x0, 0x0, 0x0}};
  // 51484150229312214.482218421
  s21_decimal dec_2 = {{0x8cf6edb5, 0x605918f2, 0x2a9631, 0x90000}};
  // -51484150151565579.482218421
  s21_decimal dec_check = {{0x7b4ebfb5, 0x5f44e2cb, 0x2a9631, 0x80090000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_201) {
  // 893925880156.14594
  s21_decimal dec_1 = {{0xce393a82, 0x13d9615, 0x0, 0x50000}};
  // 969165736818679864591
  s21_decimal dec_2 = {{0xc521dd0f, 0x89e05ec6, 0x34, 0x0}};
  // -969165735924753984434.85406
  s21_decimal dec_check = {{0xfdb5c8de, 0xfb607676, 0x502ae1, 0x80050000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_202) {
  // 6314372603334271595320
  s21_decimal dec_1 = {{0xadca7338, 0x4d85ebc0, 0x156, 0x0}};
  // -827473
  s21_decimal dec_2 = {{0xca051, 0x0, 0x0, 0x80000000}};
  // 6314372603334272422793
  s21_decimal dec_check = {{0xadd71389, 0x4d85ebc0, 0x156, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_203) {
  // -230
  s21_decimal dec_1 = {{0xe6, 0x0, 0x0, 0x80000000}};
  // 1.3609
  s21_decimal dec_2 = {{0x3529, 0x0, 0x0, 0x40000}};
  // -231.3609
  s21_decimal dec_check = {{0x234d89, 0x0, 0x0, 0x80040000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_204) {
  // -355437306097090407967
  s21_decimal dec_1 = {{0x2edbae1f, 0x44aefab5, 0x13, 0x80000000}};
  // 51763391257509
  s21_decimal dec_2 = {{0x1a8c5ba5, 0x2f14, 0x0, 0x0}};
  // -355437357860481665476
  s21_decimal dec_check = {{0x496809c4, 0x44af29c9, 0x13, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_205) {
  // 198246132255407412
  s21_decimal dec_1 = {{0x932dbd34, 0x2c04fce, 0x0, 0x0}};
  // -9.670009
  s21_decimal dec_2 = {{0x938d79, 0x0, 0x0, 0x80060000}};
  // 198246132255407421.670009
  s21_decimal dec_check = {{0xacd64279, 0xf1c1d544, 0x29fa, 0x60000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_206) {
  // -848.7
  s21_decimal dec_1 = {{0x2127, 0x0, 0x0, 0x80010000}};
  // -6178455015793475
  s21_decimal dec_2 = {{0xa87a2343, 0x15f345, 0x0, 0x80000000}};
  // 6178455015792626.3
  s21_decimal dec_check = {{0x94c53f77, 0xdb80b8, 0x0, 0x10000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_207) {
  // -286527
  s21_decimal dec_1 = {{0x45f3f, 0x0, 0x0, 0x80000000}};
  // 7161105037898611124
  s21_decimal dec_2 = {{0x3f34f9b4, 0x63615b17, 0x0, 0x0}};
  // -7161105037898897651
  s21_decimal dec_check = {{0x3f3958f3, 0x63615b17, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_208) {
  // 0.506125978343703
  s21_decimal dec_1 = {{0xa3269917, 0x1cc51, 0x0, 0xf0000}};
  // -1208842172514289
  s21_decimal dec_2 = {{0x80483ff1, 0x44b6f, 0x0, 0x80000000}};
  // 1208842172514289.5061259783437
  s21_decimal dec_check = {{0x79e00d0d, 0xd0e85007, 0x270f4ede, 0xd0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_209) {
  // -2
  s21_decimal dec_1 = {{0x2, 0x0, 0x0, 0x80000000}};
  // -1.15
  s21_decimal dec_2 = {{0x73, 0x0, 0x0, 0x80020000}};
  // -0.85
  s21_decimal dec_check = {{0x55, 0x0, 0x0, 0x80020000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_210) {
  // 1
  s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x0}};
  // 83734246115911657068122687.79
  s21_decimal dec_2 = {{0x179c20eb, 0xc064b4b8, 0x1b0e55a1, 0x20000}};
  // -83734246115911657068122686.79
  s21_decimal dec_check = {{0x179c2087, 0xc064b4b8, 0x1b0e55a1, 0x80020000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_211) {
  // -73736734457585375914085522353
  s21_decimal dec_1 = {{0x3671bb1, 0x8b87cce2, 0xee4198e0, 0x80000000}};
  // 631939264
  s21_decimal dec_2 = {{0x25aaa0c0, 0x0, 0x0, 0x0}};
  // -73736734457585375914717461617
  s21_decimal dec_check = {{0x2911bc71, 0x8b87cce2, 0xee4198e0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_212) {
  // -5244413892494094165041576
  s21_decimal dec_1 = {{0xc8ab61a8, 0x3f2d27b7, 0x4568c, 0x80000000}};
  // 68769.3787375977393104
  s21_decimal dec_2 = {{0x84246bd0, 0x47ab200f, 0x25, 0x100000}};
  // -5244413892494094165110345.3787
  s21_decimal dec_check = {{0xcf94125b, 0xd3df7b0e, 0xa974c663, 0x80040000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_213) {
  // -0.78574
  s21_decimal dec_1 = {{0x132ee, 0x0, 0x0, 0x80050000}};
  // 8168924616459
  s21_decimal dec_2 = {{0xf9d9970b, 0x76d, 0x0, 0x0}};
  // -8168924616459.78574
  s21_decimal dec_check = {{0xa41a5bce, 0xb562f5d, 0x0, 0x80050000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_214) {
  // 3679661
  s21_decimal dec_1 = {{0x3825ad, 0x0, 0x0, 0x0}};
  // 0.439543893451607927471949
  s21_decimal dec_2 = {{0xc400bf4d, 0xb8e2b2e1, 0x5d13, 0x180000}};
  // 3679660.5604561065483920725281
  s21_decimal dec_check = {{0xce3d521, 0xd3ef4605, 0x76e57052, 0x160000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_215) {
  // 35914.4346562906270556697728
  s21_decimal dec_1 = {{0x88873480, 0x9f9e79f, 0x12913c6, 0x160000}};
  // 9.70310544798127
  s21_decimal dec_2 = {{0x75831af, 0x3727e, 0x0, 0xe0000}};
  // 35904.7315508426457856697728
  s21_decimal dec_check = {{0xd616580, 0xf99762cb, 0x128ff39, 0x160000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_216) {
  // 8837870861
  s21_decimal dec_1 = {{0xec7350d, 0x2, 0x0, 0x0}};
  // 32291195582326074710200684097
  s21_decimal dec_2 = {{0xcbf80e41, 0x2028271a, 0x6856a6a4, 0x0}};
  // -32291195582326074701362813236
  s21_decimal dec_check = {{0xbd30d934, 0x20282718, 0x6856a6a4, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_217) {
  // -7705787101492732921548608
  s21_decimal dec_1 = {{0x6b1e8f40, 0x8e4965cf, 0x65fc3, 0x80000000}};
  // -872126964234983418992427
  s21_decimal dec_2 = {{0x86e9972b, 0x18f37d06, 0xb8ae, 0x80000000}};
  // -6833660137257749502556181
  s21_decimal dec_check = {{0xe434f815, 0x7555e8c8, 0x5a715, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_218) {
  // -79.893
  s21_decimal dec_1 = {{0x13815, 0x0, 0x0, 0x80030000}};
  // -2245968391186.855
  s21_decimal dec_2 = {{0x442229a7, 0x7fab2, 0x0, 0x80030000}};
  // 2245968391106.962
  s21_decimal dec_check = {{0x4420f192, 0x7fab2, 0x0, 0x30000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_219) {
  // 96518561484363975606630
  s21_decimal dec_1 = {{0xe0bc166, 0x481da4c6, 0x1470, 0x0}};
  // -1
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x80000000}};
  // 96518561484363975606631
  s21_decimal dec_check = {{0xe0bc167, 0x481da4c6, 0x1470, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_220) {
  // -905950
  s21_decimal dec_1 = {{0xdd2de, 0x0, 0x0, 0x80000000}};
  // -57629889
  s21_decimal dec_2 = {{0x36f5cc1, 0x0, 0x0, 0x80000000}};
  // 56723939
  s21_decimal dec_check = {{0x36189e3, 0x0, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_221) {
  // 87911.0794180689741284010078
  s21_decimal dec_1 = {{0x67b2685e, 0xa532e883, 0x2d72ef3, 0x160000}};
  // 744514988
  s21_decimal dec_2 = {{0x2c6065ac, 0x0, 0x0, 0x0}};
  // -744427076.92058193102587159899
  s21_decimal dec_check = {{0xe045e55b, 0x458a694a, 0xf0899086, 0x80140000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_222) {
  // -85118530018737.6
  s21_decimal dec_1 = {{0x574a8f0, 0x30626, 0x0, 0x80010000}};
  // -246292015069505884592217757
  s21_decimal dec_2 = {{0x4c471e9d, 0xe3e4c5cd, 0xcbba5c, 0x80000000}};
  // 246292015069420766062199019.4
  s21_decimal dec_check = {{0xf5528932, 0xe6ecb3de, 0x7f547a0, 0x10000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_223) {
  // 0.102599877837
  s21_decimal dec_1 = {{0xe36de4cd, 0x17, 0x0, 0xc0000}};
  // -69443546030506276432592614
  s21_decimal dec_2 = {{0xa1573ee6, 0x2c6efdeb, 0x39713e, 0x80000000}};
  // 69443546030506276432592614.103
  s21_decimal dec_check = {{0x3ccdb2d7, 0x918fe06e, 0xe0625add, 0x30000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_224) {
  // -179966974721.67645
  s21_decimal dec_1 = {{0xa7f56edd, 0x3fefe6, 0x0, 0x80050000}};
  // -83041774194
  s21_decimal dec_2 = {{0x55acea72, 0x13, 0x0, 0x80000000}};
  // -96925200527.67645
  s21_decimal dec_check = {{0xaeb93b9d, 0x226f4b, 0x0, 0x80050000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_225) {
  // 45925922028211408889317
  s21_decimal dec_1 = {{0xe45e65e5, 0xa63366b1, 0x9b9, 0x0}};
  // 756820522
  s21_decimal dec_2 = {{0x2d1c2a2a, 0x0, 0x0, 0x0}};
  // 45925922028210652068795
  s21_decimal dec_check = {{0xb7423bbb, 0xa63366b1, 0x9b9, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_226) {
  // 7112231.449
  s21_decimal dec_1 = {{0xa7ec0a19, 0x1, 0x0, 0x30000}};
  // 78952900
  s21_decimal dec_2 = {{0x4b4b9c4, 0x0, 0x0, 0x0}};
  // -71840668.551
  s21_decimal dec_check = {{0xba099b87, 0x10, 0x0, 0x80030000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_227) {
  // 90146
  s21_decimal dec_1 = {{0x16022, 0x0, 0x0, 0x0}};
  // 837
  s21_decimal dec_2 = {{0x345, 0x0, 0x0, 0x0}};
  // 89309
  s21_decimal dec_check = {{0x15cdd, 0x0, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_228) {
  // -8329747338728842284429783602
  s21_decimal dec_1 = {{0xfca0b232, 0xb960710, 0x1aea349c, 0x80000000}};
  // 9200753226154
  s21_decimal dec_2 = {{0x37a0b1aa, 0x85e, 0x0, 0x0}};
  // -8329747338728851485183009756
  s21_decimal dec_check = {{0x344163dc, 0xb960f6f, 0x1aea349c, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_229) {
  // 66099089983152273842700700063
  s21_decimal dec_1 = {{0x85e499f, 0xf3d2417c, 0xd593e2bf, 0x0}};
  // -8834255074731529
  s21_decimal dec_2 = {{0x4b95a609, 0x1f62b5, 0x0, 0x80000000}};
  // 66099089983161108097775431592
  s21_decimal dec_check = {{0x53f3efa8, 0xf3f1a431, 0xd593e2bf, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_230) {
  // 4605471517
  s21_decimal dec_1 = {{0x1281eb1d, 0x1, 0x0, 0x0}};
  // 0.9
  s21_decimal dec_2 = {{0x9, 0x0, 0x0, 0x10000}};
  // 4605471516.1
  s21_decimal dec_check = {{0xb9132f19, 0xa, 0x0, 0x10000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_231) {
  // -4758188595782690356176
  s21_decimal dec_1 = {{0x95fd3bd0, 0xf121b5e6, 0x101, 0x80000000}};
  // 58195340374.528013479961342
  s21_decimal dec_2 = {{0xd097e2fe, 0xb91f0967, 0x302357, 0xf0000}};
  // -4758188595840885696550.5280135
  s21_decimal dec_check = {{0x753ae887, 0x5a6ca112, 0x99bed046, 0x80070000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_232) {
  // -1645975943700343703575.03
  s21_decimal dec_1 = {{0xa67c28ff, 0xda7d041d, 0x22da, 0x80020000}};
  // -507634296773337
  s21_decimal dec_2 = {{0xd1ef5ad9, 0x1cdb0, 0x0, 0x80000000}};
  // -1645975436066046930238.03
  s21_decimal dec_check = {{0xa4fcac3b, 0xd9c8ab0b, 0x22da, 0x80020000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_233) {
  // -38024277611215779856
  s21_decimal dec_1 = {{0xb15af810, 0xfb15f06, 0x2, 0x80000000}};
  // -1238814593822
  s21_decimal dec_2 = {{0x6f1a931e, 0x120, 0x0, 0x80000000}};
  // -38024276372401186034
  s21_decimal dec_check = {{0x424064f2, 0xfb15de6, 0x2, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_234) {
  // -860090844592387141115259
  s21_decimal dec_1 = {{0xda339d7b, 0x9e3c982d, 0xb621, 0x80000000}};
  // -8
  s21_decimal dec_2 = {{0x8, 0x0, 0x0, 0x80000000}};
  // -860090844592387141115251
  s21_decimal dec_check = {{0xda339d73, 0x9e3c982d, 0xb621, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_235) {
  // -91046768722.82201
  s21_decimal dec_1 = {{0xc6c46059, 0x2058a7, 0x0, 0x80050000}};
  // 465822079067952077285071156
  s21_decimal dec_2 = {{0xd2ef9934, 0x81800078, 0x18151a9, 0x0}};
  // -465822079067952168331839878.82
  s21_decimal dec_check = {{0x3e9fb8aa, 0x9600377a, 0x9683e636, 0x80020000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_236) {
  // 74930324587589.12
  s21_decimal dec_1 = {{0x91feab00, 0x1a9edf, 0x0, 0x20000}};
  // 751801996776297279.9545785
  s21_decimal dec_2 = {{0x27aa31b9, 0xadd8f781, 0x63800, 0x70000}};
  // -751727066451709690.8345785
  s21_decimal dec_check = {{0xeffd51b9, 0xf2d135b, 0x637d8, 0x80070000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_237) {
  // 9334522332.362
  s21_decimal dec_1 = {{0x5ce344ca, 0x87d, 0x0, 0x30000}};
  // 2537589394359490620
  s21_decimal dec_2 = {{0x498983c, 0x2337541c, 0x0, 0x0}};
  // -2537589385024968287.638
  s21_decimal dec_check = {{0x972f6596, 0x902084f4, 0x89, 0x80030000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_238) {
  // -1804.936
  s21_decimal dec_1 = {{0x1b8a88, 0x0, 0x0, 0x80030000}};
  // -3048357921550607034
  s21_decimal dec_2 = {{0xf645a2ba, 0x2a4df160, 0x0, 0x80000000}};
  // 3048357921550605229.064
  s21_decimal dec_check = {{0xffe81c08, 0x4076e2c1, 0xa5, 0x30000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_239) {
  // 278326746956436695332513009
  s21_decimal dec_1 = {{0x829964f1, 0x2f802da7, 0xe639fb, 0x0}};
  // -30.669
  s21_decimal dec_2 = {{0x77cd, 0x0, 0x0, 0x80030000}};
  // 278326746956436695332513039.67
  s21_decimal dec_check = {{0x3eb7a1f, 0x8e11d56f, 0x59eea61e, 0x20000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_240) {
  // -159152538805752329
  s21_decimal dec_1 = {{0xc9e5209, 0x2356c64, 0x0, 0x80000000}};
  // -870548195057
  s21_decimal dec_2 = {{0xb0b746f1, 0xca, 0x0, 0x80000000}};
  // -159151668257557272
  s21_decimal dec_check = {{0x5be70b18, 0x2356b99, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_241) {
  // 3872540184749452475421
  s21_decimal dec_1 = {{0xb0b2bc1d, 0xee4a7c6e, 0xd1, 0x0}};
  // -86.750839537671803858817686
  s21_decimal dec_2 = {{0x123b9296, 0x6f40e9f8, 0x47c234, 0x80180000}};
  // 3872540184749452475507.7508395
  s21_decimal dec_check = {{0xf8842d2b, 0xabdffd00, 0x7d20e6d0, 0x70000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_242) {
  // 756703470143536970832409497
  s21_decimal dec_1 = {{0x6d91f399, 0x5016c010, 0x271ee31, 0x0}};
  // 58366050
  s21_decimal dec_2 = {{0x37a9862, 0x0, 0x0, 0x0}};
  // 756703470143536970774043447
  s21_decimal dec_check = {{0x6a175b37, 0x5016c010, 0x271ee31, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_243) {
  // 9.031806766473
  s21_decimal dec_1 = {{0xe1a24d89, 0x836, 0x0, 0xc0000}};
  // 5916683914233756703665155
  s21_decimal dec_2 = {{0x574a2c03, 0x13e33cb6, 0x4e4e8, 0x0}};
  // -5916683914233756703665145.9682
  s21_decimal dec_check = {{0xc155d462, 0xdc7392b1, 0xbf2da988, 0x80040000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_244) {
  // 765091.42229243251
  s21_decimal dec_1 = {{0xd4a4d573, 0x10fd0a8, 0x0, 0xb0000}};
  // 6574698531058873.441
  s21_decimal dec_2 = {{0xd10bf461, 0x5b3e057a, 0x0, 0x30000}};
  // -6574698530293782.01870756749
  s21_decimal dec_check = {{0x72f96b8d, 0x26606d49, 0x21fd8a8, 0x800b0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_245) {
  // -252884867748.809
  s21_decimal dec_1 = {{0x58b613c9, 0xe5ff, 0x0, 0x80030000}};
  // 8219654281964.2
  s21_decimal dec_2 = {{0xdfbc8d3a, 0x4ac1, 0x0, 0x10000}};
  // -8472539149713.009
  s21_decimal dec_check = {{0xbe5d3e71, 0x1e19ba, 0x0, 0x80030000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_246) {
  // 20998.35751546893246221
  s21_decimal dec_1 = {{0x11fa1f0d, 0xd51332a0, 0x71, 0x110000}};
  // 44703.752
  s21_decimal dec_2 = {{0x2aa2008, 0x0, 0x0, 0x30000}};
  // -23705.39448453106753779
  s21_decimal dec_check = {{0x39d7e0f3, 0x81d7ecb6, 0x80, 0x80110000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_247) {
  // -286716.08
  s21_decimal dec_1 = {{0x1b57e78, 0x0, 0x0, 0x80020000}};
  // 261492454253439299907637481
  s21_decimal dec_2 = {{0x2ef650e9, 0x59794edb, 0xd84d2e, 0x0}};
  // -261492454253439299907924197.08
  s21_decimal dec_check = {{0x59ed197c, 0xf362cd9e, 0x547e261a, 0x80020000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_248) {
  // -75050.04432823390157701
  s21_decimal dec_1 = {{0x6a29bb85, 0xd8dbe86f, 0x196, 0x80110000}};
  // 1.98
  s21_decimal dec_2 = {{0xc6, 0x0, 0x0, 0x20000}};
  // -75052.02432823390157701
  s21_decimal dec_check = {{0xdbb0bb85, 0xdb9b5862, 0x196, 0x80110000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_249) {
  // 0.49482035
  s21_decimal dec_1 = {{0x2f30933, 0x0, 0x0, 0x80000}};
  // 544851367238208.81184
  s21_decimal dec_2 = {{0xf9ef2520, 0xf422172c, 0x2, 0x50000}};
  // -544851367238208.31701965
  s21_decimal dec_check = {{0x4b35fbcd, 0xa52a87b0, 0xb89, 0x80080000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_250) {
  // -564750449814627979125624387
  s21_decimal dec_1 = {{0x3b048e43, 0x3ae52a26, 0x1d3268f, 0x80000000}};
  // -401302458206707
  s21_decimal dec_2 = {{0x827809f3, 0x16cfb, 0x0, 0x80000000}};
  // -564750449814226676667417680
  s21_decimal dec_check = {{0xb88c8450, 0x3ae3bd2a, 0x1d3268f, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_251) {
  // -21885.81093158781
  s21_decimal dec_1 = {{0xbe9eaf7d, 0x7c680, 0x0, 0x800b0000}};
  // 428690710477050.269099089039
  s21_decimal dec_2 = {{0xac3fdc8f, 0xfb2e858e, 0x1629ac9, 0xc0000}};
  // -428690710498936.080030676849
  s21_decimal dec_check = {{0x1e72b771, 0xfb7c4696, 0x1629ac9, 0x800c0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_252) {
  // -9766618477741208934.027089
  s21_decimal dec_1 = {{0x103c0f51, 0x72d57f36, 0x81429, 0x80060000}};
  // 145.59191943629791230101
  s21_decimal dec_2 = {{0x8eb6f895, 0x41605ed3, 0x315, 0x140000}};
  // -9766618477741209079.6190084363
  s21_decimal dec_check = {{0x25a22d0b, 0xb3b9312d, 0x3b939315, 0x800a0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_253) {
  // -428.7056272
  s21_decimal dec_1 = {{0xff874990, 0x0, 0x0, 0x80070000}};
  // 3489585653329536.613
  s21_decimal dec_2 = {{0xc001a665, 0x306d7fa9, 0x0, 0x30000}};
  // -3489585653329965.3186272
  s21_decimal dec_check = {{0x3ffb12e0, 0xb54ad6dd, 0x763, 0x80070000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_254) {
  // 9
  s21_decimal dec_1 = {{0x9, 0x0, 0x0, 0x0}};
  // -834442803457457056
  s21_decimal dec_2 = {{0x5767ba0, 0xb94894f, 0x0, 0x80000000}};
  // 834442803457457065
  s21_decimal dec_check = {{0x5767ba9, 0xb94894f, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_255) {
  // -30387.5
  s21_decimal dec_1 = {{0x4a303, 0x0, 0x0, 0x80010000}};
  // 49762
  s21_decimal dec_2 = {{0xc262, 0x0, 0x0, 0x0}};
  // -80149.5
  s21_decimal dec_check = {{0xc3ad7, 0x0, 0x0, 0x80010000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_256) {
  // 1
  s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x0}};
  // -4975427938224330130
  s21_decimal dec_2 = {{0x4f6a5592, 0x450c4559, 0x0, 0x80000000}};
  // 4975427938224330131
  s21_decimal dec_check = {{0x4f6a5593, 0x450c4559, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_257) {
  // 69312.815817452006467
  s21_decimal dec_1 = {{0x3d4dac43, 0xc1e896c0, 0x3, 0xf0000}};
  // -262955
  s21_decimal dec_2 = {{0x4032b, 0x0, 0x0, 0x80000000}};
  // 332267.815817452006467
  s21_decimal dec_check = {{0x3e252c43, 0x3246a0e, 0x12, 0xf0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_258) {
  // -83511183985805039768
  s21_decimal dec_1 = {{0xb6331898, 0x86f3535f, 0x4, 0x80000000}};
  // 4
  s21_decimal dec_2 = {{0x4, 0x0, 0x0, 0x0}};
  // -83511183985805039772
  s21_decimal dec_check = {{0xb633189c, 0x86f3535f, 0x4, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_259) {
  // -74884237050278249964716391
  s21_decimal dec_1 = {{0x8f274167, 0x9fef1014, 0x3df15a, 0x80000000}};
  // -8999.1
  s21_decimal dec_2 = {{0x15f87, 0x0, 0x0, 0x80010000}};
  // -74884237050278249964707391.9
  s21_decimal dec_check = {{0x97872e7f, 0x3f56a0cd, 0x26b6d8a, 0x80010000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_260) {
  // 8206454763062116267414808
  s21_decimal dec_1 = {{0xb5c55518, 0xcddb3034, 0x6c9c8, 0x0}};
  // 6227203013
  s21_decimal dec_2 = {{0x732b93c5, 0x1, 0x0, 0x0}};
  // 8206454763062110040211795
  s21_decimal dec_check = {{0x4299c153, 0xcddb3033, 0x6c9c8, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_261) {
  // -1369337
  s21_decimal dec_1 = {{0x14e4f9, 0x0, 0x0, 0x80000000}};
  // -9840995022659.77
  s21_decimal dec_2 = {{0x85419679, 0x37f08, 0x0, 0x80020000}};
  // 9840993653322.77
  s21_decimal dec_check = {{0x7d182535, 0x37f08, 0x0, 0x20000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_262) {
  // -38719444264468.5
  s21_decimal dec_1 = {{0xbb367ccd, 0x16026, 0x0, 0x80010000}};
  // 0.98
  s21_decimal dec_2 = {{0x62, 0x0, 0x0, 0x20000}};
  // -38719444264469.48
  s21_decimal dec_check = {{0x5020e064, 0xdc183, 0x0, 0x80020000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_263) {
  // -759921453504453.6
  s21_decimal dec_1 = {{0x2eeedb8, 0x1aff72, 0x0, 0x80010000}};
  // -143075758954550540408
  s21_decimal dec_2 = {{0xa7663878, 0xc19334b8, 0x7, 0x80000000}};
  // 143074999033097035954.4
  s21_decimal dec_check = {{0x870f46f8, 0x8fa50fc4, 0x4d, 0x10000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_264) {
  // 375140207707
  s21_decimal dec_1 = {{0x58194c5b, 0x57, 0x0, 0x0}};
  // 1068.288702
  s21_decimal dec_2 = {{0x3faccabe, 0x0, 0x0, 0x60000}};
  // 375140206638.711298
  s21_decimal dec_check = {{0xc5aac202, 0x534c407, 0x0, 0x60000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_265) {
  // -8415059693067949139622.1527051
  s21_decimal dec_1 = {{0xff7fe40b, 0x68e47a5b, 0xfe7be08, 0x80070000}};
  // -0.8
  s21_decimal dec_2 = {{0x8, 0x0, 0x0, 0x80010000}};
  // -8415059693067949139621.3527051
  s21_decimal dec_check = {{0xff05d20b, 0x68e47a5b, 0xfe7be08, 0x80070000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_266) {
  // 81523038
  s21_decimal dec_1 = {{0x4dbf15e, 0x0, 0x0, 0x0}};
  // -4111814857.5
  s21_decimal dec_2 = {{0x92d527df, 0x9, 0x0, 0x80010000}};
  // 4193337895.5
  s21_decimal dec_check = {{0xc36c958b, 0x9, 0x0, 0x10000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_267) {
  // 2485.22392266234475020
  s21_decimal dec_1 = {{0xbf31320c, 0x78f0e709, 0xd, 0x110000}};
  // -238632001
  s21_decimal dec_2 = {{0xe393c41, 0x0, 0x0, 0x80000000}};
  // 238634486.22392266234475020
  s21_decimal dec_check = {{0xd73b320c, 0x2458203f, 0x13bd48, 0x110000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_268) {
  // 4.10
  s21_decimal dec_1 = {{0x19a, 0x0, 0x0, 0x20000}};
  // -443505830418719347
  s21_decimal dec_2 = {{0xf5ec2273, 0x627a633, 0x0, 0x80000000}};
  // 443505830418719351.10
  s21_decimal dec_check = {{0x103d7686, 0x677cec4c, 0x2, 0x20000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_269) {
  // -2271
  s21_decimal dec_1 = {{0x8df, 0x0, 0x0, 0x80000000}};
  // 8820.0846020485
  s21_decimal dec_2 = {{0xdc188f85, 0x5037, 0x0, 0xa0000}};
  // -11091.0846020485
  s21_decimal dec_check = {{0x71942b85, 0x64df, 0x0, 0x800a0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_270) {
  // -417654408
  s21_decimal dec_1 = {{0x18e4e688, 0x0, 0x0, 0x80000000}};
  // -33770759
  s21_decimal dec_2 = {{0x2034d07, 0x0, 0x0, 0x80000000}};
  // -383883649
  s21_decimal dec_check = {{0x16e19981, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_271) {
  // 5817636450531643817505262730
  s21_decimal dec_1 = {{0xe5b70c8a, 0xeb7c2a2c, 0x12cc3c6f, 0x0}};
  // -777308828478.8473488662647
  s21_decimal dec_2 = {{0xc0eae077, 0xf5d3e455, 0x66e03, 0x800d0000}};
  // 5817636450531644594814091208.8
  s21_decimal dec_check = {{0xc950fdd8, 0x32d9acd2, 0xbbfa5c5f, 0x10000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_272) {
  // -286561
  s21_decimal dec_1 = {{0x45f61, 0x0, 0x0, 0x80000000}};
  // -612.53079334795415
  s21_decimal dec_2 = {{0xe3263897, 0xd99d59, 0x0, 0x800e0000}};
  // -285948.46920665204585
  s21_decimal dec_check = {{0xb8ec0769, 0x8cd54dc5, 0x1, 0x800e0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_273) {
  // -659487244219845
  s21_decimal dec_1 = {{0xd6ecf5c5, 0x257cc, 0x0, 0x80000000}};
  // -552533475
  s21_decimal dec_2 = {{0x20eefde3, 0x0, 0x0, 0x80000000}};
  // -659486691686370
  s21_decimal dec_check = {{0xb5fdf7e2, 0x257cc, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_274) {
  // 13482189896.20199
  s21_decimal dec_1 = {{0xb1f4abe7, 0x4ca32, 0x0, 0x50000}};
  // 6074042466
  s21_decimal dec_2 = {{0x6a0a8862, 0x1, 0x0, 0x0}};
  // 7408147430.20199
  s21_decimal dec_check = {{0x5f9a22a7, 0x2a1c4, 0x0, 0x50000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_275) {
  // -829333206665842324874
  s21_decimal dec_1 = {{0x8926f58a, 0xf54f6d77, 0x2c, 0x80000000}};
  // 7088.310774733501
  s21_decimal dec_2 = {{0xf5c91abd, 0x192ec7, 0x0, 0xc0000}};
  // -829333206665842331962.31077473
  s21_decimal dec_check = {{0xf6802e61, 0xe84a1544, 0xbf8d5c1, 0x80080000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_276) {
  // 619
  s21_decimal dec_1 = {{0x26b, 0x0, 0x0, 0x0}};
  // 676.061
  s21_decimal dec_2 = {{0xa50dd, 0x0, 0x0, 0x30000}};
  // -57.061
  s21_decimal dec_check = {{0xdee5, 0x0, 0x0, 0x80030000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_277) {
  // 381409802.366740526893641527
  s21_decimal dec_1 = {{0xa0242f37, 0xd110ea2c, 0x13b7eaa, 0x120000}};
  // 600153766342916961554
  s21_decimal dec_2 = {{0xea59f512, 0x88ce7ebc, 0x20, 0x0}};
  // -600153766342535551751.63325947
  s21_decimal dec_check = {{0xfa3a6dfb, 0x783c92d4, 0xc1eb8e56, 0x80080000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_278) {
  // 698045.253375197
  s21_decimal dec_1 = {{0x535d54dd, 0x27ade, 0x0, 0x90000}};
  // 603
  s21_decimal dec_2 = {{0x25b, 0x0, 0x0, 0x0}};
  // 697442.253375197
  s21_decimal dec_check = {{0xedc386dd, 0x27a51, 0x0, 0x90000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_279) {
  // 3683748014.4521909552
  s21_decimal dec_1 = {{0xa2bbd530, 0xff390504, 0x1, 0xa0000}};
  // 42277734115167819327
  s21_decimal dec_2 = {{0x42fdd63f, 0x4ab8af2e, 0x2, 0x0}};
  // -42277734111484071312.547809045
  s21_decimal dec_check = {{0x6e7a8715, 0x926000a2, 0x889b526e, 0x80090000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_280) {
  // 554723287892956.2286354880
  s21_decimal dec_1 = {{0x3e2af1c0, 0x18d07706, 0x496ac, 0xa0000}};
  // 3919589763016146210855140269
  s21_decimal dec_2 = {{0x76a93bad, 0xd0d1e05d, 0xcaa356a, 0x0}};
  // -3919589763015591487567247312.8
  s21_decimal dec_check = {{0xd5602e28, 0x281f0e78, 0x7ea6162c, 0x80010000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_281) {
  // -27
  s21_decimal dec_1 = {{0x1b, 0x0, 0x0, 0x80000000}};
  // 21798338
  s21_decimal dec_2 = {{0x14c9dc2, 0x0, 0x0, 0x0}};
  // -21798365
  s21_decimal dec_check = {{0x14c9ddd, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_282) {
  // 0.89063316478677
  s21_decimal dec_1 = {{0xab575ad5, 0x5100, 0x0, 0xe0000}};
  // 705282
  s21_decimal dec_2 = {{0xac302, 0x0, 0x0, 0x0}};
  // -705281.10936683521323
  s21_decimal dec_check = {{0x145d252b, 0xd2c62f39, 0x3, 0x800e0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_283) {
  // -1813707519
  s21_decimal dec_1 = {{0x6c1afaff, 0x0, 0x0, 0x80000000}};
  // -8568293
  s21_decimal dec_2 = {{0x82bde5, 0x0, 0x0, 0x80000000}};
  // -1805139226
  s21_decimal dec_check = {{0x6b983d1a, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_284) {
  // 8571.58499
  s21_decimal dec_1 = {{0x33173363, 0x0, 0x0, 0x50000}};
  // -3331.1065552290856
  s21_decimal dec_2 = {{0xd5558428, 0x76583c, 0x0, 0x800d0000}};
  // 11902.6915452290856
  s21_decimal dec_check = {{0x563e8728, 0x1a6de59, 0x0, 0xd0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_285) {
  // 0.2547135611953881144071391454
  s21_decimal dec_1 = {{0x7b5d88de, 0x346c7032, 0x83af0f2, 0x1c0000}};
  // 692228.0
  s21_decimal dec_2 = {{0x69a028, 0x0, 0x0, 0x10000}};
  // -692227.74528643880461188559286
  s21_decimal dec_check = {{0xb2f571b6, 0x78b40322, 0xdfabbcae, 0x80170000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_286) {
  // -0.75904741121
  s21_decimal dec_1 = {{0xac466f01, 0x11, 0x0, 0x800b0000}};
  // -43863387437565642.620389886
  s21_decimal dec_2 = {{0xcad9c9fe, 0xff63f72b, 0x24486e, 0x80090000}};
  // 43863387437565641.86134247479
  s21_decimal dec_check = {{0x90cc7837, 0xc30c8d09, 0xe2c4b5b, 0xb0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_287) {
  // -846438140894
  s21_decimal dec_1 = {{0x13a50bde, 0xc5, 0x0, 0x80000000}};
  // 44659084335502893
  s21_decimal dec_2 = {{0x59cfd62d, 0x9ea933, 0x0, 0x0}};
  // -44659930773643787
  s21_decimal dec_check = {{0x6d74e20b, 0x9ea9f8, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_288) {
  // -5.60843675
  s21_decimal dec_1 = {{0x216dcb9b, 0x0, 0x0, 0x80080000}};
  // 57505327005387413130298
  s21_decimal dec_2 = {{0x9a4a0c3a, 0x5eb9db1e, 0xc2d, 0x0}};
  // -57505327005387413130303.608437
  s21_decimal dec_check = {{0x61659675, 0x6fbfb5c4, 0xb9cf4aa7, 0x80060000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_289) {
  // 9604.5524570633944333
  s21_decimal dec_1 = {{0xdab03d0d, 0x34e63fb9, 0x5, 0x100000}};
  // 0.67339881878902931225
  s21_decimal dec_2 = {{0x70c5ff19, 0xa68751c9, 0x3, 0x140000}};
  // 9603.87905824460540398775
  s21_decimal dec_check = {{0x138accb7, 0xbb91fa25, 0xcb5e, 0x140000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_290) {
  // 8367554298766
  s21_decimal dec_1 = {{0x391a038e, 0x79c, 0x0, 0x0}};
  // -541061006046.13
  s21_decimal dec_2 = {{0x8ee81ec5, 0x3135, 0x0, 0x80020000}};
  // 8908615304812.13
  s21_decimal dec_check = {{0xdd11823d, 0x32a3b, 0x0, 0x20000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_291) {
  // 761054080456575
  s21_decimal dec_1 = {{0xb61ed77f, 0x2b42c, 0x0, 0x0}};
  // -2
  s21_decimal dec_2 = {{0x2, 0x0, 0x0, 0x80000000}};
  // 761054080456577
  s21_decimal dec_check = {{0xb61ed781, 0x2b42c, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_292) {
  // 981602307825
  s21_decimal dec_1 = {{0x8c0e8ef1, 0xe4, 0x0, 0x0}};
  // 770.2280965365070749
  s21_decimal dec_2 = {{0xc4d67b9d, 0x6ae3ffba, 0x0, 0x100000}};
  // 981602307054.7719034634929251
  s21_decimal dec_check = {{0x7dda8463, 0xe9ac2d0b, 0x1fb79fbc, 0x100000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_293) {
  // 499442705052684350678.180147
  s21_decimal dec_1 = {{0x75092133, 0x4ae1cbb6, 0x19d211b, 0x60000}};
  // 487270705253903107101605679
  s21_decimal dec_2 = {{0xe84cbf2f, 0xdc7a4f05, 0x1930f95, 0x0}};
  // -487270205811198054417255000.82
  s21_decimal dec_check = {{0x1da90ab2, 0xa3c9ddda, 0x9d720bf6, 0x80020000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_294) {
  // 9522145792456752302767
  s21_decimal dec_1 = {{0xb12f0aaf, 0x32519bbf, 0x204, 0x0}};
  // 53.3847
  s21_decimal dec_2 = {{0x82557, 0x0, 0x0, 0x40000}};
  // 9522145792456752302713.6153
  s21_decimal dec_check = {{0x3d892e99, 0x93d3eff9, 0x4ec3ed, 0x40000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_295) {
  // -601.6946598979
  s21_decimal dec_1 = {{0xedf6f443, 0x578, 0x0, 0x800a0000}};
  // -8864474
  s21_decimal dec_2 = {{0x8742da, 0x0, 0x0, 0x80000000}};
  // 8863872.3053401021
  s21_decimal dec_check = {{0xf0f133bd, 0x13ae872, 0x0, 0xa0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_296) {
  // 10
  s21_decimal dec_1 = {{0xa, 0x0, 0x0, 0x0}};
  // -5926628617820919996
  s21_decimal dec_2 = {{0xc8e158bc, 0x523f9d53, 0x0, 0x80000000}};
  // 5926628617820920006
  s21_decimal dec_check = {{0xc8e158c6, 0x523f9d53, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_297) {
  // 6500
  s21_decimal dec_1 = {{0x1964, 0x0, 0x0, 0x0}};
  // -26421390819983968421.275
  s21_decimal dec_2 = {{0x4f43c59b, 0x4e74943f, 0x598, 0x80030000}};
  // 26421390819983974921.275
  s21_decimal dec_check = {{0x4fa6f43b, 0x4e74943f, 0x598, 0x30000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_298) {
  // -327190.44435566
  s21_decimal dec_1 = {{0xff055e6e, 0x1dc1, 0x0, 0x80080000}};
  // -7799717461255121592.8775
  s21_decimal dec_2 = {{0x8f20d5c7, 0x3c3d275f, 0x1084, 0x80040000}};
  // 7799717461254794402.43314434
  s21_decimal dec_check = {{0xf3994f02, 0x14d1e704, 0x2852d71, 0x80000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_299) {
  // 526662009592451501335
  s21_decimal dec_1 = {{0x73710d17, 0x8ce75359, 0x1c, 0x0}};
  // 746152
  s21_decimal dec_2 = {{0xb62a8, 0x0, 0x0, 0x0}};
  // 526662009592450755183
  s21_decimal dec_check = {{0x7365aa6f, 0x8ce75359, 0x1c, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_300) {
  // -4548747160247
  s21_decimal dec_1 = {{0x16756ab7, 0x423, 0x0, 0x80000000}};
  // -55417730178
  s21_decimal dec_2 = {{0xe7277482, 0xc, 0x0, 0x80000000}};
  // -4493329430069
  s21_decimal dec_check = {{0x2f4df635, 0x416, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_301) {
  // -75635158.01862798
  s21_decimal dec_1 = {{0x409f828e, 0x1adefa, 0x0, 0x80080000}};
  // 3541840516.0750556
  s21_decimal dec_2 = {{0x121e0ddc, 0x7dd4da, 0x0, 0x70000}};
  // -3617475674.09368358
  s21_decimal dec_check = {{0xf5cc0d26, 0x5052f7e, 0x0, 0x80080000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_302) {
  // -706974302868
  s21_decimal dec_1 = {{0x9af3c294, 0xa4, 0x0, 0x80000000}};
  // 404685910225.446
  s21_decimal dec_2 = {{0x47ecb226, 0x1700f, 0x0, 0x30000}};
  // -1111660213093.446
  s21_decimal dec_check = {{0x901cc446, 0x3f30c, 0x0, 0x80030000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_303) {
  // -1387804.29534824303
  s21_decimal dec_1 = {{0xbc33076f, 0x1ed0c10, 0x0, 0x800b0000}};
  // -25
  s21_decimal dec_2 = {{0x19, 0x0, 0x0, 0x80000000}};
  // -1387779.29534824303
  s21_decimal dec_check = {{0xa8965f6f, 0x1ed09ca, 0x0, 0x800b0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_304) {
  // -0.173824
  s21_decimal dec_1 = {{0x2a700, 0x0, 0x0, 0x80060000}};
  // -3
  s21_decimal dec_2 = {{0x3, 0x0, 0x0, 0x80000000}};
  // 2.826176
  s21_decimal dec_check = {{0x2b1fc0, 0x0, 0x0, 0x60000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_305) {
  // -43641894699523898012676661324
  s21_decimal dec_1 = {{0x19ec204c, 0x3af9a13c, 0x8d03baac, 0x80000000}};
  // -407.32424828428207
  s21_decimal dec_2 = {{0xb0bd1faf, 0x90b5ec, 0x0, 0x800e0000}};
  // -43641894699523898012676660917
  s21_decimal dec_check = {{0x19ec1eb5, 0x3af9a13c, 0x8d03baac, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_306) {
  // 494.842186056249082775954
  s21_decimal dec_1 = {{0x627a0992, 0x72db3fe4, 0x68c9, 0x150000}};
  // -7.0186
  s21_decimal dec_2 = {{0x1122a, 0x0, 0x0, 0x80040000}};
  // 501.860786056249082775954
  s21_decimal dec_check = {{0x6f1e0992, 0xed7f79c1, 0x6a45, 0x150000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_307) {
  // -54
  s21_decimal dec_1 = {{0x36, 0x0, 0x0, 0x80000000}};
  // 1974080
  s21_decimal dec_2 = {{0x1e1f40, 0x0, 0x0, 0x0}};
  // -1974134
  s21_decimal dec_check = {{0x1e1f76, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_308) {
  // 8868.0666724976212
  s21_decimal dec_1 = {{0xb6964654, 0x13b0e98, 0x0, 0xd0000}};
  // 921361751407961
  s21_decimal dec_2 = {{0x3fe6fd59, 0x345f9, 0x0, 0x0}};
  // -921361751399092.9333275023788
  s21_decimal dec_check = {{0x976359ac, 0x418770bd, 0x1dc55366, 0x800d0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_309) {
  // 6233728645417796595755866
  s21_decimal dec_1 = {{0x6bce2b5a, 0x1b64819e, 0x5280b, 0x0}};
  // -6018001246645962926226123
  s21_decimal dec_2 = {{0x62247acb, 0x8053ff61, 0x4fa5c, 0x80000000}};
  // 12251729892063759521981989
  s21_decimal dec_check = {{0xcdf2a625, 0x9bb880ff, 0xa2267, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_310) {
  // -6797736360500999854728.779
  s21_decimal dec_1 = {{0xf323a64b, 0x6c8d4d8, 0x59f7a, 0x80030000}};
  // 92
  s21_decimal dec_2 = {{0x5c, 0x0, 0x0, 0x0}};
  // -6797736360500999854820.779
  s21_decimal dec_check = {{0xf3250dab, 0x6c8d4d8, 0x59f7a, 0x80030000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_311) {
  // 5172354394
  s21_decimal dec_1 = {{0x344bdd5a, 0x1, 0x0, 0x0}};
  // -1751489
  s21_decimal dec_2 = {{0x1ab9c1, 0x0, 0x0, 0x80000000}};
  // 5174105883
  s21_decimal dec_check = {{0x3466971b, 0x1, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_312) {
  // -33910789553703268368289
  s21_decimal dec_1 = {{0xa67fbfa1, 0x4ebde807, 0x72e, 0x80000000}};
  // -50578174982497528.84
  s21_decimal dec_2 = {{0x99ee7134, 0x4630fa37, 0x0, 0x80020000}};
  // -33910738975528285870760.16
  s21_decimal dec_check = {{0x6ff869b0, 0x7bfda8c5, 0x2ce16, 0x80020000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_313) {
  // 44274016.40
  s21_decimal dec_1 = {{0x7e4c9a8, 0x1, 0x0, 0x20000}};
  // -202402
  s21_decimal dec_2 = {{0x316a2, 0x0, 0x0, 0x80000000}};
  // 44476418.40
  s21_decimal dec_check = {{0x919a0f0, 0x1, 0x0, 0x20000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_314) {
  // -15960057035008424826909
  s21_decimal dec_1 = {{0x7b4c581d, 0x3248f155, 0x361, 0x80000000}};
  // -357644741700674611631.7468651
  s21_decimal dec_2 = {{0xf5fb57eb, 0xf7069612, 0xb8e5e32, 0x80070000}};
  // -15602412293307750215277.253135
  s21_decimal dec_check = {{0xc61a920f, 0x388f899f, 0x326a0351, 0x80060000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_315) {
  // -9888810912634602154474625
  s21_decimal dec_1 = {{0x5d8dbc81, 0x8384637c, 0x82e09, 0x80000000}};
  // 117616809595713921
  s21_decimal dec_2 = {{0x7b913981, 0x1a1dbdd, 0x0, 0x0}};
  // -9888811030251411750188546
  s21_decimal dec_check = {{0xd91ef602, 0x85263f59, 0x82e09, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_316) {
  // 1657790
  s21_decimal dec_1 = {{0x194bbe, 0x0, 0x0, 0x0}};
  // 8938786804460110
  s21_decimal dec_2 = {{0x7c33ea4e, 0x1fc1c7, 0x0, 0x0}};
  // -8938786802802320
  s21_decimal dec_check = {{0x7c1a9e90, 0x1fc1c7, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_317) {
  // -1643292432564703
  s21_decimal dec_1 = {{0xd5b481df, 0x5d690, 0x0, 0x80000000}};
  // 387395100299.5378
  s21_decimal dec_2 = {{0x81692ab2, 0xdc356, 0x0, 0x40000}};
  // -1643679827665002.5378
  s21_decimal dec_check = {{0x5c7a41a2, 0xe41b3cf2, 0x0, 0x80040000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_318) {
  // -76014335302928.0748
  s21_decimal dec_1 = {{0x27af43ec, 0xa8c925a, 0x0, 0x80040000}};
  // -31528223151518018
  s21_decimal dec_2 = {{0x7d587142, 0x7002c0, 0x0, 0x80000000}};
  // 31452208816215089.9252
  s21_decimal dec_check = {{0x2718de34, 0xcdeecc6, 0x11, 0x40000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_319) {
  // -59658888473145034589143
  s21_decimal dec_1 = {{0xc82ac3d7, 0x1d6523fc, 0xca2, 0x80000000}};
  // 2913136962.2
  s21_decimal dec_2 = {{0xc85d6c96, 0x6, 0x0, 0x10000}};
  // -59658888473147947726105.2
  s21_decimal dec_check = {{0x9a0912fc, 0x25f367e6, 0x7e55, 0x80010000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_320) {
  // -4.7321
  s21_decimal dec_1 = {{0xb8d9, 0x0, 0x0, 0x80040000}};
  // -5171
  s21_decimal dec_2 = {{0x1433, 0x0, 0x0, 0x80000000}};
  // 5166.2679
  s21_decimal dec_check = {{0x3144f57, 0x0, 0x0, 0x40000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_321) {
  // 2937316413.2
  s21_decimal dec_1 = {{0xd6c6ea64, 0x6, 0x0, 0x10000}};
  // 0.6124948
  s21_decimal dec_2 = {{0x5d7594, 0x0, 0x0, 0x70000}};
  // 2937316412.5875052
  s21_decimal dec_check = {{0xb5a6eb6c, 0x685abc, 0x0, 0x70000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_322) {
  // 3
  s21_decimal dec_1 = {{0x3, 0x0, 0x0, 0x0}};
  // 70608199445413345
  s21_decimal dec_2 = {{0x862c7de1, 0xfad9c8, 0x0, 0x0}};
  // -70608199445413342
  s21_decimal dec_check = {{0x862c7dde, 0xfad9c8, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_323) {
  // 6771194899856090692
  s21_decimal dec_1 = {{0xd6dbe644, 0x5df81de2, 0x0, 0x0}};
  // 940381143244363653468351
  s21_decimal dec_2 = {{0xf6f850bf, 0x29f6e3ea, 0xc722, 0x0}};
  // -940374372049463797377659
  s21_decimal dec_check = {{0x201c6a7b, 0xcbfec608, 0xc721, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_324) {
  // -805
  s21_decimal dec_1 = {{0x325, 0x0, 0x0, 0x80000000}};
  // -111069217847398784278338
  s21_decimal dec_2 = {{0xb91b9f42, 0x13098a45, 0x1785, 0x80000000}};
  // 111069217847398784277533
  s21_decimal dec_check = {{0xb91b9c1d, 0x13098a45, 0x1785, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_325) {
  // 187951045552469691860438083
  s21_decimal dec_1 = {{0x76cc43, 0x986f1d79, 0x9b782e, 0x0}};
  // -894513
  s21_decimal dec_2 = {{0xda631, 0x0, 0x0, 0x80000000}};
  // 187951045552469691861332596
  s21_decimal dec_check = {{0x847274, 0x986f1d79, 0x9b782e, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_326) {
  // 7751211204653.4277202333599
  s21_decimal dec_1 = {{0x9f464f9f, 0x384707d, 0x401dd4, 0xd0000}};
  // -780468206857.2918
  s21_decimal dec_2 = {{0x26483af6, 0x1bba51, 0x0, 0x80040000}};
  // 8531679411510.7195202333599
  s21_decimal dec_check = {{0xc7c86b9f, 0xad2c25bc, 0x469288, 0xd0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_327) {
  // -70792619016.44345
  s21_decimal dec_1 = {{0x1aeb6239, 0x19268d, 0x0, 0x80050000}};
  // -0.60
  s21_decimal dec_2 = {{0x3c, 0x0, 0x0, 0x80020000}};
  // -70792619015.84345
  s21_decimal dec_check = {{0x1aea77d9, 0x19268d, 0x0, 0x80050000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_328) {
  // -0.55073535557
  s21_decimal dec_1 = {{0xd2a37645, 0xc, 0x0, 0x800b0000}};
  // -5135.25
  s21_decimal dec_2 = {{0x7d5f5, 0x0, 0x0, 0x80020000}};
  // 5134.69926464443
  s21_decimal dec_check = {{0x8891dbbb, 0x1d2ff, 0x0, 0xb0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_329) {
  // -9.9713237
  s21_decimal dec_1 = {{0x5f180d5, 0x0, 0x0, 0x80070000}};
  // 5796456547
  s21_decimal dec_2 = {{0x597ee863, 0x1, 0x0, 0x0}};
  // -5796456556.9713237
  s21_decimal dec_check = {{0x1c57b455, 0xcdee77, 0x0, 0x80070000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_330) {
  // -253395
  s21_decimal dec_1 = {{0x3ddd3, 0x0, 0x0, 0x80000000}};
  // -16168961832436383930322742
  s21_decimal dec_2 = {{0x99ab0f36, 0x2d621996, 0xd5fe9, 0x80000000}};
  // 16168961832436383930069347
  s21_decimal dec_check = {{0x99a73163, 0x2d621996, 0xd5fe9, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_331) {
  // 274.5956991284604591
  s21_decimal dec_1 = {{0xba04eeaf, 0x261b9955, 0x0, 0x100000}};
  // 6275740799425433432964
  s21_decimal dec_2 = {{0x12f1f384, 0x35662ec7, 0x154, 0x0}};
  // -6275740799425433432689.4043009
  s21_decimal dec_check = {{0x305d1f81, 0x58b3484b, 0xcac7b610, 0x80070000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_332) {
  // -170.451866470
  s21_decimal dec_1 = {{0xafb91366, 0x27, 0x0, 0x80090000}};
  // 518744
  s21_decimal dec_2 = {{0x7ea58, 0x0, 0x0, 0x0}};
  // -518914.451866470
  s21_decimal dec_check = {{0x2f928366, 0x1d7f3, 0x0, 0x80090000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_333) {
  // 317004873949054.7
  s21_decimal dec_1 = {{0x7d09baf3, 0xb4324, 0x0, 0x10000}};
  // -521073
  s21_decimal dec_2 = {{0x7f371, 0x0, 0x0, 0x80000000}};
  // 317004874470127.7
  s21_decimal dec_check = {{0x7d593d5d, 0xb4324, 0x0, 0x10000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_334) {
  // -0.3386925489177107815224
  s21_decimal dec_1 = {{0xcda2db38, 0x9b0883b4, 0xb7, 0x80160000}};
  // 80.21
  s21_decimal dec_2 = {{0x1f55, 0x0, 0x0, 0x20000}};
  // -80.5486925489177107815224
  s21_decimal dec_check = {{0xa1f2db38, 0x88a247c5, 0xaa91, 0x80160000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_335) {
  // -17088432321388.8191355204966
  s21_decimal dec_1 = {{0x210cb566, 0xb93e8beb, 0x8d5a29, 0x800d0000}};
  // -335109202726228
  s21_decimal dec_2 = {{0xb0fd4d54, 0x130c7, 0x0, 0x80000000}};
  // 318020770404839.1808644795034
  s21_decimal dec_check = {{0x36afca9a, 0x158f74ef, 0xa469b2d, 0xd0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_336) {
  // 304742627
  s21_decimal dec_1 = {{0x122a00e3, 0x0, 0x0, 0x0}};
  // 9214860925285358034756141
  s21_decimal dec_2 = {{0x9038222d, 0x9c99816a, 0x79f52, 0x0}};
  // -9214860925285357730013514
  s21_decimal dec_check = {{0x7e0e214a, 0x9c99816a, 0x79f52, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_337) {
  // 0.22925854029400102471761560
  s21_decimal dec_1 = {{0x6de87e98, 0x9886eee, 0x12f6bd, 0x1a0000}};
  // -15548111.66355
  s21_decimal dec_2 = {{0x1f79e93, 0x16a, 0x0, 0x80050000}};
  // 15548111.892808540294001024718
  s21_decimal dec_check = {{0x16555ece, 0x9c8da622, 0x323d18c2, 0x150000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_338) {
  // -6056522780
  s21_decimal dec_1 = {{0x68ff341c, 0x1, 0x0, 0x80000000}};
  // -305903.94949
  s21_decimal dec_2 = {{0x1f546245, 0x7, 0x0, 0x80050000}};
  // -6056216876.05051
  s21_decimal dec_check = {{0x498ed73b, 0x226cf, 0x0, 0x80050000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_339) {
  // -50762407212880888047532825
  s21_decimal dec_1 = {{0x69c6fb19, 0x9bea0b0b, 0x29fd5b, 0x80000000}};
  // -0.1
  s21_decimal dec_2 = {{0x1, 0x0, 0x0, 0x80010000}};
  // -50762407212880888047532824.9
  s21_decimal dec_check = {{0x21c5cef9, 0x17246e72, 0x1a3e594, 0x80010000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_340) {
  // -1317723673817.8247
  s21_decimal dec_1 = {{0x82e67cc7, 0x2ed0a0, 0x0, 0x80040000}};
  // -4914127985462991271096.0
  s21_decimal dec_2 = {{0x6b660f30, 0xf4412220, 0xa67, 0x80010000}};
  // 4914127984145267597278.1753
  s21_decimal dec_check = {{0x3c4d6b9, 0x1e3e7e03, 0x28a612, 0x40000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_341) {
  // -7
  s21_decimal dec_1 = {{0x7, 0x0, 0x0, 0x80000000}};
  // 4581.308570582
  s21_decimal dec_2 = {{0xab451bd6, 0x42a, 0x0, 0x90000}};
  // -4588.308570582
  s21_decimal dec_check = {{0x4c80a1d6, 0x42c, 0x0, 0x80090000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_342) {
  // 9686594971018514508054
  s21_decimal dec_1 = {{0x93cda916, 0x1c82745c, 0x20d, 0x0}};
  // 5.04
  s21_decimal dec_2 = {{0x1f8, 0x0, 0x0, 0x20000}};
  // 9686594971018514508048.96
  s21_decimal dec_check = {{0xbc560aa0, 0x22f57429, 0xcd1f, 0x20000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_343) {
  // 3
  s21_decimal dec_1 = {{0x3, 0x0, 0x0, 0x0}};
  // 0.23
  s21_decimal dec_2 = {{0x17, 0x0, 0x0, 0x20000}};
  // 2.77
  s21_decimal dec_check = {{0x115, 0x0, 0x0, 0x20000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_344) {
  // 279456988227719.065281417
  s21_decimal dec_1 = {{0xb294a389, 0x64c8b687, 0x3b2d, 0x90000}};
  // 7119718415
  s21_decimal dec_2 = {{0xa85e480f, 0x1, 0x0, 0x0}};
  // 279449868509304.065281417
  s21_decimal dec_check = {{0x7fb2cd89, 0x1fa645a, 0x3b2d, 0x90000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_345) {
  // 0.27962
  s21_decimal dec_1 = {{0x6d3a, 0x0, 0x0, 0x50000}};
  // 81398159265480530587
  s21_decimal dec_2 = {{0x5a35a9b, 0x69a05a96, 0x4, 0x0}};
  // -81398159265480530586.72038
  s21_decimal dec_check = {{0x622055a6, 0x4e392a5a, 0x6bbac, 0x80050000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_346) {
  // 455051839808157838
  s21_decimal dec_1 = {{0xc227388e, 0x650ab3c, 0x0, 0x0}};
  // -1.17
  s21_decimal dec_2 = {{0x75, 0x0, 0x0, 0x80020000}};
  // 455051839808157839.17
  s21_decimal dec_check = {{0xd75217ed, 0x7782e3bb, 0x2, 0x20000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_347) {
  // 10566.723
  s21_decimal dec_1 = {{0xa13c43, 0x0, 0x0, 0x30000}};
  // 3.933640
  s21_decimal dec_2 = {{0x3c05c8, 0x0, 0x0, 0x60000}};
  // 10562.789360
  s21_decimal dec_check = {{0x75975ff0, 0x2, 0x0, 0x60000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_348) {
  // 405328584508541
  s21_decimal dec_1 = {{0xea4c047d, 0x170a4, 0x0, 0x0}};
  // 67
  s21_decimal dec_2 = {{0x43, 0x0, 0x0, 0x0}};
  // 405328584508474
  s21_decimal dec_check = {{0xea4c043a, 0x170a4, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_349) {
  // -72685918100224866
  s21_decimal dec_1 = {{0x18897b62, 0x1023b75, 0x0, 0x80000000}};
  // -354547273443398362
  s21_decimal dec_2 = {{0xe1ad52da, 0x4eb9add, 0x0, 0x80000000}};
  // 281861355343173496
  s21_decimal dec_check = {{0xc923d778, 0x3e95f68, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_350) {
  // -617517059143070124873
  s21_decimal dec_1 = {{0x86940b49, 0x79c54d8b, 0x21, 0x80000000}};
  // -11765.67005769381589419
  s21_decimal dec_2 = {{0x30f631ab, 0xc825b207, 0x3f, 0x80110000}};
  // -617517059143070113107.32994231
  s21_decimal dec_check = {{0x66ec66b7, 0x5950501d, 0xc787d05d, 0x80080000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_351) {
  // -502919711791171092
  s21_decimal dec_1 = {{0x33dac614, 0x6fabad0, 0x0, 0x80000000}};
  // 8157303404484853
  s21_decimal dec_2 = {{0x33bfd8f5, 0x1cfb06, 0x0, 0x0}};
  // -511077015195655945
  s21_decimal dec_check = {{0x679a9f09, 0x717b5d6, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_352) {
  // -16254
  s21_decimal dec_1 = {{0x3f7e, 0x0, 0x0, 0x80000000}};
  // -43.547529639
  s21_decimal dec_2 = {{0x23a291a7, 0xa, 0x0, 0x80090000}};
  // -16210.452470361
  s21_decimal dec_check = {{0x4a42da59, 0xebe, 0x0, 0x80090000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_353) {
  // 3291706050918683051.83205
  s21_decimal dec_1 = {{0x6ed6d1e5, 0x5fcf5e71, 0x45b4, 0x50000}};
  // 918873058187279576158
  s21_decimal dec_2 = {{0xf1a3ac5e, 0xcfece205, 0x31, 0x0}};
  // -915581352136360893106.16795
  s21_decimal dec_check = {{0xf00c1cdb, 0x7492f364, 0x4bbc30, 0x80050000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_354) {
  // -3514720957567971900.9538392092
  s21_decimal dec_1 = {{0x63d9c01c, 0xf01149ad, 0x71911720, 0x800a0000}};
  // -73714317613875953021816289
  s21_decimal dec_2 = {{0x5e190de1, 0x2a3e4305, 0x3cf99d, 0x80000000}};
  // 73714314099154995453844388.046
  s21_decimal dec_check = {{0x461df8ce, 0x7aa893d9, 0xee2f0d2e, 0x30000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_355) {
  // -1094406000
  s21_decimal dec_1 = {{0x413b4f70, 0x0, 0x0, 0x80000000}};
  // -518561.680
  s21_decimal dec_2 = {{0x1ee89f90, 0x0, 0x0, 0x80030000}};
  // -1093887438.320
  s21_decimal dec_check = {{0xb0c5adf0, 0xfe, 0x0, 0x80030000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_356) {
  // 534432339505187176599143
  s21_decimal dec_1 = {{0x1b904e67, 0xa29af414, 0x712b, 0x0}};
  // -286.74338415147
  s21_decimal dec_2 = {{0x43c1622b, 0x1a14, 0x0, 0x800b0000}};
  // 534432339505187176599429.74338
  s21_decimal dec_check = {{0x13577382, 0xb0af2e8f, 0xacaf34fd, 0x50000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_357) {
  // -568633388547116.4298088
  s21_decimal dec_1 = {{0xf817368, 0x41bc2d59, 0x134, 0x80070000}};
  // 444
  s21_decimal dec_2 = {{0x1bc, 0x0, 0x0, 0x0}};
  // -568633388547560.4298088
  s21_decimal dec_check = {{0x18267968, 0x41bc2d5a, 0x134, 0x80070000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_358) {
  // -94.338662804179
  s21_decimal dec_1 = {{0xee7c2ad3, 0x55cc, 0x0, 0x800c0000}};
  // 591.32034719882749
  s21_decimal dec_2 = {{0xb4531dfd, 0xd21445, 0x0, 0xe0000}};
  // -685.65901000300649
  s21_decimal dec_check = {{0xdcd3d869, 0xf39852, 0x0, 0x800e0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_359) {
  // -6807
  s21_decimal dec_1 = {{0x1a97, 0x0, 0x0, 0x80000000}};
  // 7994714908067246269307157
  s21_decimal dec_2 = {{0x1b349915, 0x5d140034, 0x69cf2, 0x0}};
  // -7994714908067246269313964
  s21_decimal dec_check = {{0x1b34b3ac, 0x5d140034, 0x69cf2, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_360) {
  // 8548443848
  s21_decimal dec_1 = {{0xfd86e6c8, 0x1, 0x0, 0x0}};
  // 0.01778
  s21_decimal dec_2 = {{0x6f2, 0x0, 0x0, 0x50000}};
  // 8548443847.98222
  s21_decimal dec_check = {{0xf7e4e60e, 0x30979, 0x0, 0x50000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_361) {
  // 84
  s21_decimal dec_1 = {{0x54, 0x0, 0x0, 0x0}};
  // 9317
  s21_decimal dec_2 = {{0x2465, 0x0, 0x0, 0x0}};
  // -9233
  s21_decimal dec_check = {{0x2411, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_362) {
  // 9.3
  s21_decimal dec_1 = {{0x5d, 0x0, 0x0, 0x10000}};
  // 4
  s21_decimal dec_2 = {{0x4, 0x0, 0x0, 0x0}};
  // 5.3
  s21_decimal dec_check = {{0x35, 0x0, 0x0, 0x10000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_363) {
  // -3
  s21_decimal dec_1 = {{0x3, 0x0, 0x0, 0x80000000}};
  // 2365026894003
  s21_decimal dec_2 = {{0xa69680b3, 0x226, 0x0, 0x0}};
  // -2365026894006
  s21_decimal dec_check = {{0xa69680b6, 0x226, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_364) {
  // 218127007.87385
  s21_decimal dec_1 = {{0xaa4832b9, 0x13d6, 0x0, 0x50000}};
  // 270146.75832
  s21_decimal dec_2 = {{0x4a333d78, 0x6, 0x0, 0x50000}};
  // 217856861.11553
  s21_decimal dec_check = {{0x6014f541, 0x13d0, 0x0, 0x50000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_365) {
  // -52836075427307466794
  s21_decimal dec_1 = {{0xe268302a, 0xdd3f72a9, 0x2, 0x80000000}};
  // -54748206981807
  s21_decimal dec_2 = {{0xf6de2af, 0x31cb, 0x0, 0x80000000}};
  // -52836020679100484987
  s21_decimal dec_check = {{0xd2fa4d7b, 0xdd3f40de, 0x2, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_366) {
  // -422079817330672153636937022
  s21_decimal dec_1 = {{0xae289d3e, 0xbee04bb2, 0x15d22e0, 0x80000000}};
  // 757.402811820847166052
  s21_decimal dec_2 = {{0x7fa07264, 0xf135475, 0x29, 0x120000}};
  // -422079817330672153636937779.40
  s21_decimal dec_check = {{0x7de9414, 0x8f9d91cc, 0x88619fca, 0x80020000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_367) {
  // -988377857828108819
  s21_decimal dec_1 = {{0xcfb4ba13, 0xdb76c6c, 0x0, 0x80000000}};
  // -3856592480.3223285905
  s21_decimal dec_2 = {{0xa8cf091, 0x1735b047, 0x2, 0x800a0000}};
  // -988377853971516338.6776714095
  s21_decimal dec_check = {{0x25fcfb6f, 0x4198e6ae, 0x1fefab84, 0x800a0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_368) {
  // -2476497777564517991104.9
  s21_decimal dec_1 = {{0x3e6a1b89, 0x831b4c79, 0x53e, 0x80010000}};
  // 6.85450
  s21_decimal dec_2 = {{0xa758a, 0x0, 0x0, 0x50000}};
  // -2476497777564517991111.75450
  s21_decimal dec_check = {{0x10de0d1a, 0x5a5b4016, 0xccd9e1, 0x80050000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_369) {
  // -83.435
  s21_decimal dec_1 = {{0x145eb, 0x0, 0x0, 0x80030000}};
  // 0.13628626
  s21_decimal dec_2 = {{0xcff4d2, 0x0, 0x0, 0x80000}};
  // -83.57128626
  s21_decimal dec_check = {{0xf21fa9b2, 0x1, 0x0, 0x80080000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_370) {
  // 58183905518
  s21_decimal dec_1 = {{0x8c07f0ee, 0xd, 0x0, 0x0}};
  // -440682258678996401500300757
  s21_decimal dec_2 = {{0xb439a5d5, 0x1c9d923f, 0x16c8619, 0x80000000}};
  // 440682258678996459684206275
  s21_decimal dec_check = {{0x404196c3, 0x1c9d924d, 0x16c8619, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_371) {
  // -0.79
  s21_decimal dec_1 = {{0x4f, 0x0, 0x0, 0x80020000}};
  // 39778
  s21_decimal dec_2 = {{0x9b62, 0x0, 0x0, 0x0}};
  // -39778.79
  s21_decimal dec_check = {{0x3cb297, 0x0, 0x0, 0x80020000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_372) {
  // 6807901167836978873098206014
  s21_decimal dec_1 = {{0x71e27b3e, 0xcfd056f8, 0x15ff5d25, 0x0}};
  // -200608353480217118283
  s21_decimal dec_2 = {{0x2456c64b, 0xe0000a9f, 0xa, 0x80000000}};
  // 6807901368445332353315324297
  s21_decimal dec_check = {{0x96394189, 0xafd06197, 0x15ff5d30, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_373) {
  // -36820.793364438912017
  s21_decimal dec_1 = {{0xe3710c11, 0xfefdbc7a, 0x1, 0x800f0000}};
  // 854047628516358208273
  s21_decimal dec_2 = {{0x864dbb11, 0x4c4ab132, 0x2e, 0x0}};
  // -854047628516358245093.79336444
  s21_decimal dec_check = {{0xfab6d8fc, 0x37b7786e, 0x13f529ff, 0x80080000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_374) {
  // -2447322450.461164
  s21_decimal dec_1 = {{0xa94f81ec, 0x8b1d3, 0x0, 0x80060000}};
  // -77.89
  s21_decimal dec_2 = {{0x1e6d, 0x0, 0x0, 0x80020000}};
  // -2447322372.571164
  s21_decimal dec_check = {{0xa4ab001c, 0x8b1d3, 0x0, 0x80060000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_375) {
  // -278266335660712460470684
  s21_decimal dec_1 = {{0x6aeac99c, 0xd9290d2f, 0x3aec, 0x80000000}};
  // -2871.1349929535968648685
  s21_decimal dec_2 = {{0x58101ded, 0x7205a1a9, 0x614, 0x80130000}};
  // -278266335660712460467812.86501
  s21_decimal dec_check = {{0x70c4a865, 0x43be7a84, 0x59e9a6dc, 0x80050000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_376) {
  // -386605145347064.009
  s21_decimal dec_1 = {{0xd4c000c9, 0x55d7f54, 0x0, 0x80030000}};
  // -55548897
  s21_decimal dec_2 = {{0x34f9be1, 0x0, 0x0, 0x80000000}};
  // -386605089798167.009
  s21_decimal dec_check = {{0xe5c719e1, 0x55d7f47, 0x0, 0x80030000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_377) {
  // -39223028341714625369.095109
  s21_decimal dec_1 = {{0xeefe3bc5, 0xa08196da, 0x2071cc, 0x80060000}};
  // 889645478295513132137
  s21_decimal dec_2 = {{0x4c8cec69, 0x3a4fa8f7, 0x30, 0x0}};
  // -928868506637227757506.095109
  s21_decimal dec_check = {{0x41536805, 0xa47912ac, 0x300578e, 0x80060000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_378) {
  // 33.86473940956307
  s21_decimal dec_1 = {{0xe84ab493, 0xc07fa, 0x0, 0xe0000}};
  // 3820997285871662837937950044
  s21_decimal dec_2 = {{0x66a74d5c, 0xeb8fd837, 0xc58a7a5, 0x0}};
  // -3820997285871662837937950010.1
  s21_decimal dec_check = {{0x2890445, 0x339e722a, 0x7b768c7b, 0x80010000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_379) {
  // -361106992878.90947
  s21_decimal dec_1 = {{0x5ba54c03, 0x804a7d, 0x0, 0x80050000}};
  // -9
  s21_decimal dec_2 = {{0x9, 0x0, 0x0, 0x80000000}};
  // -361106992869.90947
  s21_decimal dec_check = {{0x5b979063, 0x804a7d, 0x0, 0x80050000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_380) {
  // -21217049
  s21_decimal dec_1 = {{0x143bf19, 0x0, 0x0, 0x80000000}};
  // 77365800.9
  s21_decimal dec_2 = {{0x2e1d1599, 0x0, 0x0, 0x10000}};
  // -98582849.9
  s21_decimal dec_check = {{0x3ac28c93, 0x0, 0x0, 0x80010000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_381) {
  // 6505096216141921.4268903
  s21_decimal dec_1 = {{0xc10229e7, 0x6b73170a, 0xdc6, 0x70000}};
  // 68188037079
  s21_decimal dec_2 = {{0xe052dfd7, 0xf, 0x0, 0x0}};
  // 6505028028104842.4268903
  s21_decimal dec_check = {{0x20c24467, 0x61fc9075, 0xdc6, 0x70000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_382) {
  // 2564
  s21_decimal dec_1 = {{0xa04, 0x0, 0x0, 0x0}};
  // 5288
  s21_decimal dec_2 = {{0x14a8, 0x0, 0x0, 0x0}};
  // -2724
  s21_decimal dec_check = {{0xaa4, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_383) {
  // -4403495941658260613
  s21_decimal dec_1 = {{0x6c6a3485, 0x3d1c5c3a, 0x0, 0x80000000}};
  // 760382024567817512940279
  s21_decimal dec_2 = {{0x75fbf2f7, 0x6463cbcd, 0xa104, 0x0}};
  // -760386428063759171200892
  s21_decimal dec_check = {{0xe266277c, 0xa1802807, 0xa104, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_384) {
  // -2004218322098203972
  s21_decimal dec_1 = {{0xf4fe2d44, 0x1bd069f1, 0x0, 0x80000000}};
  // -1391591996.63799566
  s21_decimal dec_2 = {{0x7303d0e, 0x1ee648e, 0x0, 0x80080000}};
  // -2004218320706611975.36200434
  s21_decimal dec_check = {{0x4ac86f2, 0x4987b1e9, 0xa5c8f9, 0x80080000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_385) {
  // -8975
  s21_decimal dec_1 = {{0x230f, 0x0, 0x0, 0x80000000}};
  // 630.814
  s21_decimal dec_2 = {{0x9a01e, 0x0, 0x0, 0x30000}};
  // -9605.814
  s21_decimal dec_check = {{0x9292b6, 0x0, 0x0, 0x80030000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_386) {
  // -30592.68413735262461983198
  s21_decimal dec_1 = {{0xe4a979de, 0x45e4997d, 0x287d3, 0x80140000}};
  // -163266760311.801791321066
  s21_decimal dec_2 = {{0xde1713ea, 0xb574a736, 0x2292, 0x800c0000}};
  // 163266729719.11765396844138017
  s21_decimal dec_check = {{0x7af4e21, 0x47c55b0a, 0x34c11b7b, 0x110000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_387) {
  // -698811466256602029
  s21_decimal dec_1 = {{0x7b31d3ad, 0x9b2ad53, 0x0, 0x80000000}};
  // 9833
  s21_decimal dec_2 = {{0x2669, 0x0, 0x0, 0x0}};
  // -698811466256611862
  s21_decimal dec_check = {{0x7b31fa16, 0x9b2ad53, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_388) {
  // -171.1937
  s21_decimal dec_1 = {{0x1a1f41, 0x0, 0x0, 0x80040000}};
  // -51885450869952290134546671372
  s21_decimal dec_2 = {{0x5177670c, 0xadfada1d, 0xa7a6a397, 0x80000000}};
  // 51885450869952290134546671201
  s21_decimal dec_check = {{0x51776661, 0xadfada1d, 0xa7a6a397, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_389) {
  // -88445737918120586293
  s21_decimal dec_1 = {{0xeadfec35, 0xcb6e6207, 0x4, 0x80000000}};
  // -292361041837251450868801
  s21_decimal dec_2 = {{0x299f9441, 0xec807bcb, 0x3de8, 0x80000000}};
  // 292272596099333330282508
  s21_decimal dec_check = {{0x3ebfa80c, 0x211219c3, 0x3de4, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_390) {
  // -3.201670401
  s21_decimal dec_1 = {{0xbed59d01, 0x0, 0x0, 0x80090000}};
  // 4173809681294343845
  s21_decimal dec_2 = {{0x95a2bea5, 0x39ec59ca, 0x0, 0x0}};
  // -4173809681294343848.201670401
  s21_decimal dec_check = {{0xdf85cf01, 0x33345fe9, 0xd7c7e94, 0x80090000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_391) {
  // -771947.70199
  s21_decimal dec_1 = {{0xf92ab717, 0x11, 0x0, 0x80050000}};
  // -860
  s21_decimal dec_2 = {{0x35c, 0x0, 0x0, 0x80000000}};
  // -771087.70199
  s21_decimal dec_check = {{0xf40a7597, 0x11, 0x0, 0x80050000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_392) {
  // -467929868418859576851
  s21_decimal dec_1 = {{0xd566ae13, 0x5dd4d820, 0x19, 0x80000000}};
  // -64102657.766
  s21_decimal dec_2 = {{0xecd0eee6, 0xe, 0x0, 0x80030000}};
  // -467929868418795474193.234
  s21_decimal dec_check = {{0xac470b52, 0x876c4032, 0x6316, 0x80030000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_393) {
  // -8624
  s21_decimal dec_1 = {{0x21b0, 0x0, 0x0, 0x80000000}};
  // -2698.1314207376976168516
  s21_decimal dec_2 = {{0xe0ecc644, 0xa8f40e7a, 0x5b6, 0x80130000}};
  // -5925.8685792623023831484
  s21_decimal dec_check = {{0xd69339bc, 0x6b779a6a, 0xc8c, 0x80130000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_394) {
  // 0.68981366814738
  s21_decimal dec_1 = {{0xf9dd7812, 0x3ebc, 0x0, 0xe0000}};
  // 35115129335061480
  s21_decimal dec_2 = {{0x2a421be8, 0x7cc106, 0x0, 0x0}};
  // -35115129335061479.310186331853
  s21_decimal dec_check = {{0xa22d3ecd, 0x9bf1a7fb, 0x71768ddf, 0x800c0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_395) {
  // 5054242
  s21_decimal dec_1 = {{0x4d1f22, 0x0, 0x0, 0x0}};
  // -3665228391.046
  s21_decimal dec_2 = {{0x60a2e286, 0x355, 0x0, 0x80030000}};
  // 3670282633.046
  s21_decimal dec_check = {{0x8de47f56, 0x356, 0x0, 0x30000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_396) {
  // 527
  s21_decimal dec_1 = {{0x20f, 0x0, 0x0, 0x0}};
  // 96.8196558
  s21_decimal dec_2 = {{0x39b581ce, 0x0, 0x0, 0x70000}};
  // 430.1803442
  s21_decimal dec_check = {{0x684fb2, 0x1, 0x0, 0x70000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_397) {
  // -34
  s21_decimal dec_1 = {{0x22, 0x0, 0x0, 0x80000000}};
  // 379197.7907996789
  s21_decimal dec_2 = {{0xa833c875, 0xd78c8, 0x0, 0xa0000}};
  // -379231.7907996789
  s21_decimal dec_check = {{0xd1c81075, 0xd7917, 0x0, 0x800a0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_398) {
  // -72072170384.64448534032
  s21_decimal dec_1 = {{0xd0491610, 0xb43a8f02, 0x186, 0x800b0000}};
  // 6362254621042800
  s21_decimal dec_2 = {{0xd6a86870, 0x169a6f, 0x0, 0x0}};
  // -6362326693213184.64448534032
  s21_decimal dec_check = {{0x128e9610, 0x1d3d9a9b, 0x20e4782, 0x800b0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_399) {
  // -6618668.85847
  s21_decimal dec_1 = {{0x1a5732d7, 0x9a, 0x0, 0x80050000}};
  // 25137217
  s21_decimal dec_2 = {{0x17f9041, 0x0, 0x0, 0x0}};
  // -31755885.85847
  s21_decimal dec_check = {{0x5fd46177, 0x2e3, 0x0, 0x80050000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_400) {
  // -6564621.2979156866849
  s21_decimal dec_1 = {{0x60485721, 0x8f0632e5, 0x3, 0x800d0000}};
  // -17536680860828642138379
  s21_decimal dec_2 = {{0x3ab1590b, 0xaa55f99b, 0x3b6, 0x80000000}};
  // 17536680860828635573757.702084
  s21_decimal dec_check = {{0x2b046fc4, 0x5ff0d65c, 0x38aa009e, 0x60000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_401) {
  // -7317
  s21_decimal dec_1 = {{0x1c95, 0x0, 0x0, 0x80000000}};
  // 779773.48113146269
  s21_decimal dec_2 = {{0x26cfa19d, 0x11507fc, 0x0, 0xb0000}};
  // -787090.48113146269
  s21_decimal dec_check = {{0x5564a99d, 0x117a176, 0x0, 0x800b0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_402) {
  // -84.4877373602852425
  s21_decimal dec_1 = {{0xb45cee49, 0xbb99b7e, 0x0, 0x80100000}};
  // -603232313006338968820411.42665
  s21_decimal dec_2 = {{0x9cda3d89, 0x5fe89407, 0xc2ea3519, 0x80050000}};
  // 603232313006338968820326.93891
  s21_decimal dec_check = {{0x9c595283, 0x5fe89407, 0xc2ea3519, 0x50000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_403) {
  // -17952491055
  s21_decimal dec_1 = {{0x2e0d462f, 0x4, 0x0, 0x80000000}};
  // 28398
  s21_decimal dec_2 = {{0x6eee, 0x0, 0x0, 0x0}};
  // -17952519453
  s21_decimal dec_check = {{0x2e0db51d, 0x4, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_404) {
  // 1.405788389476595
  s21_decimal dec_1 = {{0x9d9588f3, 0x4fe8e, 0x0, 0xf0000}};
  // 579076977654304357218562775
  s21_decimal dec_2 = {{0xb224b2d7, 0xdc46e62b, 0x1df0051, 0x0}};
  // -579076977654304357218562773.59
  s21_decimal dec_check = {{0x9655db6f, 0xbb1e911, 0xbb1c1ffa, 0x80020000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_405) {
  // -20674301.750945
  s21_decimal dec_1 = {{0x9c696ea1, 0x12cd, 0x0, 0x80060000}};
  // 6996783938407721151.9
  s21_decimal dec_2 = {{0xdd82177f, 0xcaffb336, 0x3, 0x10000}};
  // -6996783938428395453.650945
  s21_decimal dec_check = {{0x3d839801, 0x6ad5aa8c, 0x5c9a0, 0x80060000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_406) {
  // -976.33695
  s21_decimal dec_1 = {{0x5d1c59f, 0x0, 0x0, 0x80050000}};
  // 41412185.071332077822
  s21_decimal dec_2 = {{0x457bb0fe, 0x3eb5a2e9, 0x2, 0xc0000}};
  // -41413161.408282077822
  s21_decimal dec_check = {{0x6e91aa7e, 0x3eb91ae2, 0x2, 0x800c0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_407) {
  // -7.5
  s21_decimal dec_1 = {{0x4b, 0x0, 0x0, 0x80010000}};
  // -424012530.95958905953452177677
  s21_decimal dec_2 = {{0xbbc2390d, 0x23274b51, 0x89017e98, 0x80140000}};
  // 424012523.45958905953452177677
  s21_decimal dec_check = {{0x54ca390d, 0x7ad008fd, 0x89017e6f, 0x140000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_408) {
  // 0.153205
  s21_decimal dec_1 = {{0x25675, 0x0, 0x0, 0x60000}};
  // 381262099232729092839382442
  s21_decimal dec_2 = {{0xac031daa, 0xd0504f84, 0x13b5f63, 0x0}};
  // -381262099232729092839382441.85
  s21_decimal dec_check = {{0x31379659, 0x5f5f0fd3, 0x7b3142fd, 0x80020000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_409) {
  // -660582161725257753247
  s21_decimal dec_1 = {{0xc1a1229f, 0xcf6b482c, 0x23, 0x80000000}};
  // 267777449832530605432489610
  s21_decimal dec_2 = {{0xee75c68a, 0xa47e58ac, 0xdd8014, 0x0}};
  // -267778110414692330690242857
  s21_decimal dec_check = {{0xb016e929, 0x73e9a0d9, 0xdd8038, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_410) {
  // 994436365
  s21_decimal dec_1 = {{0x3b45e50d, 0x0, 0x0, 0x0}};
  // -8589405977
  s21_decimal dec_2 = {{0xfff7ef19, 0x1, 0x0, 0x80000000}};
  // 9583842342
  s21_decimal dec_check = {{0x3b3dd426, 0x2, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_411) {
  // -2
  s21_decimal dec_1 = {{0x2, 0x0, 0x0, 0x80000000}};
  // -1213249179764
  s21_decimal dec_2 = {{0x7b495074, 0x11a, 0x0, 0x80000000}};
  // 1213249179762
  s21_decimal dec_check = {{0x7b495072, 0x11a, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_412) {
  // -56
  s21_decimal dec_1 = {{0x38, 0x0, 0x0, 0x80000000}};
  // -3265
  s21_decimal dec_2 = {{0xcc1, 0x0, 0x0, 0x80000000}};
  // 3209
  s21_decimal dec_check = {{0xc89, 0x0, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_413) {
  // 96343392.85704224805
  s21_decimal dec_1 = {{0x11fdb025, 0x85b40c89, 0x0, 0xb0000}};
  // -41413.66
  s21_decimal dec_2 = {{0x3f3136, 0x0, 0x0, 0x80020000}};
  // 96384806.51704224805
  s21_decimal dec_check = {{0xfb4e4c25, 0x85c2c315, 0x0, 0xb0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_414) {
  // -2220.8295353218
  s21_decimal dec_1 = {{0xc58e3b82, 0x1432, 0x0, 0x800a0000}};
  // 9536544124698774
  s21_decimal dec_2 = {{0xb4f00096, 0x21e16f, 0x0, 0x0}};
  // -9536544124700994.8295353218
  s21_decimal dec_check = {{0xc485d382, 0xedd31905, 0x4ee26a, 0x800a0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_415) {
  // 71093736642567691
  s21_decimal dec_1 = {{0x7655de0b, 0xfc9360, 0x0, 0x0}};
  // 4
  s21_decimal dec_2 = {{0x4, 0x0, 0x0, 0x0}};
  // 71093736642567687
  s21_decimal dec_check = {{0x7655de07, 0xfc9360, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_416) {
  // -18512080056715469
  s21_decimal dec_1 = {{0x83d588cd, 0x41c4a3, 0x0, 0x80000000}};
  // -477812
  s21_decimal dec_2 = {{0x74a74, 0x0, 0x0, 0x80000000}};
  // -18512080056237657
  s21_decimal dec_check = {{0x83ce3e59, 0x41c4a3, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_417) {
  // -8426887731951239911
  s21_decimal dec_1 = {{0xa10d02e7, 0x74f251be, 0x0, 0x80000000}};
  // -188926367
  s21_decimal dec_2 = {{0xb42c99f, 0x0, 0x0, 0x80000000}};
  // -8426887731762313544
  s21_decimal dec_check = {{0x95ca3948, 0x74f251be, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_418) {
  // 12678493.647987141
  s21_decimal dec_1 = {{0xd62ce1c5, 0x2d0b05, 0x0, 0x90000}};
  // 262.357051345853778603138502
  s21_decimal dec_2 = {{0x75e9ddc6, 0x40762e1a, 0xd90444, 0x180000}};
  // 12678231.290935795146221396861
  s21_decimal dec_check = {{0xb7a37d, 0x720021fd, 0x28f72fe7, 0x150000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_419) {
  // 61080957216310.44891
  s21_decimal dec_1 = {{0x5de6d51b, 0x54c450b2, 0x0, 0x50000}};
  // -88858548476090502647.39677536
  s21_decimal dec_2 = {{0x7ac68560, 0x822869dd, 0x1cb634f4, 0x80080000}};
  // 88858609557047718957.84568536
  s21_decimal dec_check = {{0x4876f6d8, 0xa103a29c, 0x1cb6363f, 0x80000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_420) {
  // -9104324039341399535724930
  s21_decimal dec_1 = {{0x54db2982, 0x6526cce8, 0x787ea, 0x80000000}};
  // 8266123793031413515043874850
  s21_decimal dec_2 = {{0xf2fa2822, 0xb8d0fbd0, 0x1ab593cc, 0x0}};
  // -8275228117070754914579599780
  s21_decimal dec_check = {{0x47d551a4, 0x1df7c8b9, 0x1abd1bb7, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_421) {
  // 368242649010854718995807220
  s21_decimal dec_1 = {{0x75a5bbf4, 0xc29866, 0x1309a6a, 0x0}};
  // 9000180879
  s21_decimal dec_2 = {{0x1873dc8f, 0x2, 0x0, 0x0}};
  // 368242649010854709995626341
  s21_decimal dec_check = {{0x5d31df65, 0xc29864, 0x1309a6a, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_422) {
  // -38140302149184173328
  s21_decimal dec_1 = {{0x8c30b510, 0x114d92ba, 0x2, 0x80000000}};
  // 3994199369373558306951293
  s21_decimal dec_2 = {{0xbf4ad07d, 0xfb4f6e05, 0x34dcd, 0x0}};
  // -3994237509675707491124621
  s21_decimal dec_check = {{0x4b7b858d, 0xc9d00c0, 0x34dd0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_423) {
  // -20255320516638745106839735
  s21_decimal dec_1 = {{0x21abf8b7, 0x201bf36e, 0x10c13b, 0x80000000}};
  // -75084602.151
  s21_decimal dec_2 = {{0x7b641b27, 0x11, 0x0, 0x80030000}};
  // -20255320516638745031755132.849
  s21_decimal dec_check = {{0xc5f6fb1, 0x6d2ee622, 0x4172cef5, 0x80030000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_424) {
  // -64093384497596611807871906611
  s21_decimal dec_1 = {{0xa3263333, 0xb64f746a, 0xcf18ce17, 0x80000000}};
  // -281452.3900193548
  s21_decimal dec_2 = {{0x69486b0c, 0x9ffcb, 0x0, 0x800a0000}};
  // -64093384497596611807871625159
  s21_decimal dec_check = {{0xa321e7c7, 0xb64f746a, 0xcf18ce17, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_425) {
  // 70.7085463541553
  s21_decimal dec_1 = {{0x29e15731, 0x28317, 0x0, 0xd0000}};
  // -693171569638811
  s21_decimal dec_2 = {{0x952d3d9b, 0x2766f, 0x0, 0x80000000}};
  // 693171569638881.7085463541553
  s21_decimal dec_check = {{0x19683731, 0xda94b0c6, 0x1665c7e4, 0xd0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_426) {
  // 843657384722479785
  s21_decimal dec_1 = {{0xe884baa9, 0xbb545eb, 0x0, 0x0}};
  // 795.588250389
  s21_decimal dec_2 = {{0x3cc14b15, 0xb9, 0x0, 0x90000}};
  // 843657384722478989.411749611
  s21_decimal dec_check = {{0xbb320eeb, 0x77ac9b9c, 0x2b9db66, 0x90000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_427) {
  // 7259429
  s21_decimal dec_1 = {{0x6ec525, 0x0, 0x0, 0x0}};
  // 7466494597741103067288790
  s21_decimal dec_2 = {{0x6d31d4d6, 0x7bb215b9, 0x62d17, 0x0}};
  // -7466494597741103060029361
  s21_decimal dec_check = {{0x6cc30fb1, 0x7bb215b9, 0x62d17, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_428) {
  // -4.78
  s21_decimal dec_1 = {{0x1de, 0x0, 0x0, 0x80020000}};
  // -227786.727431804214187303
  s21_decimal dec_2 = {{0x896a1527, 0x57de656b, 0x303c, 0x80120000}};
  // 227781.947431804214187303
  s21_decimal dec_check = {{0xdf0c1527, 0x15886cbe, 0x303c, 0x120000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_429) {
  // -26508866432.28609512840208980
  s21_decimal dec_1 = {{0x8d09a254, 0xe14bd306, 0x890c314, 0x80110000}};
  // 986878270191
  s21_decimal dec_2 = {{0xc6875aef, 0xe5, 0x0, 0x0}};
  // -1013387136623.2860951284020898
  s21_decimal dec_check = {{0xa3aff6a2, 0x8c4434b4, 0x20be8abb, 0x80100000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_430) {
  // 8441546834131594202219
  s21_decimal dec_1 = {{0x24ff4c6b, 0x9dfee869, 0x1c9, 0x0}};
  // -9398.505
  s21_decimal dec_2 = {{0x8f68e9, 0x0, 0x0, 0x80030000}};
  // 8441546834131594211617.505
  s21_decimal dec_check = {{0x85d1eae1, 0x2bbbdab8, 0x6fb91, 0x30000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_431) {
  // 9
  s21_decimal dec_1 = {{0x9, 0x0, 0x0, 0x0}};
  // 2246.166259217989103477
  s21_decimal dec_2 = {{0x5437ef75, 0xc3d1980f, 0x79, 0x120000}};
  // -2237.166259217989103477
  s21_decimal dec_check = {{0x71b3ef75, 0x46eb2bbe, 0x79, 0x80120000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_432) {
  // 2311472312882.711329645744199
  s21_decimal dec_1 = {{0xea9f5047, 0x29d30a35, 0x778014d, 0xf0000}};
  // 3357869049.0315069842
  s21_decimal dec_2 = {{0xea045992, 0xd1ff7917, 0x1, 0xa0000}};
  // 2308114443833.679822661544199
  s21_decimal dec_check = {{0x772e907, 0xb7acecc1, 0x7753a3e, 0xf0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_433) {
  // -267
  s21_decimal dec_1 = {{0x10b, 0x0, 0x0, 0x80000000}};
  // 2
  s21_decimal dec_2 = {{0x2, 0x0, 0x0, 0x0}};
  // -269
  s21_decimal dec_check = {{0x10d, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_434) {
  // 5.2
  s21_decimal dec_1 = {{0x34, 0x0, 0x0, 0x10000}};
  // -59297.4815540532862804343
  s21_decimal dec_2 = {{0xe1b06177, 0x3aaa5ae4, 0x7d91, 0x80130000}};
  // 59302.6815540532862804343
  s21_decimal dec_check = {{0xe2006177, 0xc4f7762, 0x7d94, 0x130000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_435) {
  // -983528107746401260
  s21_decimal dec_1 = {{0x60d61bec, 0xda6319a, 0x0, 0x80000000}};
  // 291682325304783188574370584
  s21_decimal dec_2 = {{0x93b07b18, 0x89dea406, 0xf14622, 0x0}};
  // -291682326288311296320771844
  s21_decimal dec_check = {{0xf4869704, 0x9784d5a0, 0xf14622, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_436) {
  // -7313
  s21_decimal dec_1 = {{0x1c91, 0x0, 0x0, 0x80000000}};
  // -79485112260
  s21_decimal dec_2 = {{0x81ae8fc4, 0x12, 0x0, 0x80000000}};
  // 79485104947
  s21_decimal dec_check = {{0x81ae7333, 0x12, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_437) {
  // 7657464
  s21_decimal dec_1 = {{0x74d7f8, 0x0, 0x0, 0x0}};
  // 653.86936542
  s21_decimal dec_2 = {{0x395d78de, 0xf, 0x0, 0x80000}};
  // 7656810.13063458
  s21_decimal dec_check = {{0xcb7f22, 0x2b862, 0x0, 0x80000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_438) {
  // -29713640899900679057
  s21_decimal dec_1 = {{0x6192391, 0x9c5c0ef8, 0x1, 0x80000000}};
  // -1041.79958585065475
  s21_decimal dec_2 = {{0xd02d8003, 0x1721f1e, 0x0, 0x800e0000}};
  // -29713640899900678015.200414149
  s21_decimal dec_check = {{0x163249c5, 0xce6b2a2f, 0x60028c34, 0x80090000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_439) {
  // -299828753346
  s21_decimal dec_1 = {{0xcf2fb3c2, 0x45, 0x0, 0x80000000}};
  // 5810010583526598.6104
  s21_decimal dec_2 = {{0xfba10e38, 0x264d0a6d, 0x3, 0x40000}};
  // -5810310412279944.6104
  s21_decimal dec_check = {{0x32fed858, 0x2657b15b, 0x3, 0x80040000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_440) {
  // 58816016483193176027321737
  s21_decimal dec_1 = {{0xbd405589, 0xa4746568, 0x30a6c6, 0x0}};
  // -0.9333194337782445
  s21_decimal dec_2 = {{0xa51f8aad, 0x21287d, 0x0, 0x80100000}};
  // 58816016483193176027321737.933
  s21_decimal dec_check = {{0x434e22cd, 0x66ac2123, 0xbe0b77f2, 0x30000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_441) {
  // 83100137690252720171415
  s21_decimal dec_1 = {{0xbb5b6997, 0xde13e1e2, 0x1198, 0x0}};
  // 8
  s21_decimal dec_2 = {{0x8, 0x0, 0x0, 0x0}};
  // 83100137690252720171407
  s21_decimal dec_check = {{0xbb5b698f, 0xde13e1e2, 0x1198, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_442) {
  // 70565567429689105
  s21_decimal dec_1 = {{0x7c053f11, 0xfab302, 0x0, 0x0}};
  // -596006677535.1630400
  s21_decimal dec_2 = {{0x86711a40, 0x52b66927, 0x0, 0x80070000}};
  // 70566163436366640.1630400
  s21_decimal dec_check = {{0xe1c98c0, 0xfe6d022e, 0x956d, 0x70000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_443) {
  // 80904654
  s21_decimal dec_1 = {{0x4d281ce, 0x0, 0x0, 0x0}};
  // -49318.769386025003
  s21_decimal dec_2 = {{0xd203702b, 0xaf3728, 0x0, 0x800c0000}};
  // 80953972.769386025003
  s21_decimal dec_check = {{0x3be6502b, 0x63764952, 0x4, 0xc0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_444) {
  // 91919885713909756439560519.1
  s21_decimal dec_1 = {{0xf7700cc7, 0xe48fdc01, 0x2f857ed, 0x10000}};
  // -9712995713235575343775923
  s21_decimal dec_2 = {{0x853580b3, 0x8d7c8aeb, 0x808ce, 0x80000000}};
  // 101632881427145331783336442.1
  s21_decimal dec_check = {{0x2b8713c5, 0x6b6d4935, 0x348afff, 0x10000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_445) {
  // 8632282667503768602055
  s21_decimal dec_1 = {{0xb8c85c7, 0xf4fcb64d, 0x1d3, 0x0}};
  // 734.967
  s21_decimal dec_2 = {{0xb36f7, 0x0, 0x0, 0x30000}};
  // 8632282667503768601320.033
  s21_decimal dec_check = {{0x1cdf5a61, 0xfb281cf5, 0x723f4, 0x30000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_446) {
  // 493440190270160139302141745
  s21_decimal dec_1 = {{0xbcaff31, 0x506ab843, 0x1982a06, 0x0}};
  // -408433.06
  s21_decimal dec_2 = {{0x26f382a, 0x0, 0x0, 0x80020000}};
  // 493440190270160139302550178.06
  s21_decimal dec_check = {{0x9dbae74e, 0x69affa30, 0x9f706a77, 0x20000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_447) {
  // 42905958
  s21_decimal dec_1 = {{0x28eb166, 0x0, 0x0, 0x0}};
  // -7450749630761
  s21_decimal dec_2 = {{0xc348f929, 0x6c6, 0x0, 0x80000000}};
  // 7450792536719
  s21_decimal dec_check = {{0xc5d7aa8f, 0x6c6, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_448) {
  // 849.7396648353670526
  s21_decimal dec_1 = {{0x4b7257e, 0x75ecd13b, 0x0, 0x100000}};
  // 30931095802.8227664
  s21_decimal dec_2 = {{0x72688450, 0x44ae4ad, 0x0, 0x70000}};
  // -30931094953.0831015646329474
  s21_decimal dec_check = {{0x7bcffa82, 0x2c38f469, 0xffdb24, 0x80100000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_449) {
  // -2476
  s21_decimal dec_1 = {{0x9ac, 0x0, 0x0, 0x80000000}};
  // -0.207220746522910274916275
  s21_decimal dec_2 = {{0x90f08fb3, 0x758cb404, 0x2be1, 0x80180000}};
  // -2475.792779253477089725083725
  s21_decimal dec_check = {{0x9b0f704d, 0x7e99564c, 0x7ffed83, 0x80180000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_450) {
  // 8559310939447804092
  s21_decimal dec_1 = {{0x43e6c0bc, 0x76c8c7f3, 0x0, 0x0}};
  // 1107629118880387927158
  s21_decimal dec_2 = {{0xb06f8c76, 0xb711f26, 0x3c, 0x0}};
  // -1099069807940940123066
  s21_decimal dec_check = {{0x6c88cbba, 0x94a85733, 0x3b, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_451) {
  // -36325341633604590999618161455
  s21_decimal dec_1 = {{0xd078b2f, 0xc5885d58, 0x755f9e4b, 0x80000000}};
  // -4532976259687840241.79425
  s21_decimal dec_2 = {{0x86292e1, 0x504458db, 0x5ffd, 0x80050000}};
  // -36325341629071614739930321213
  s21_decimal dec_check = {{0xd70e913d, 0x869fff73, 0x755f9e4b, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_452) {
  // -530786085194
  s21_decimal dec_1 = {{0x9550e94a, 0x7b, 0x0, 0x80000000}};
  // 50046
  s21_decimal dec_2 = {{0xc37e, 0x0, 0x0, 0x0}};
  // -530786135240
  s21_decimal dec_check = {{0x9551acc8, 0x7b, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_453) {
  // -722419469.245586
  s21_decimal dec_1 = {{0x63d7dc92, 0x29109, 0x0, 0x80060000}};
  // 63309629466243.2723543588
  s21_decimal dec_2 = {{0x1e43a624, 0x380a0b8e, 0x8610, 0xa0000}};
  // -63310351885712.5179403588
  s21_decimal dec_check = {{0x3e5bad44, 0x9c4b8a5a, 0x8610, 0x800a0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_454) {
  // -6058820191249187065
  s21_decimal dec_1 = {{0xe95f40f9, 0x541540dc, 0x0, 0x80000000}};
  // -8346856368145
  s21_decimal dec_2 = {{0x6768a811, 0x797, 0x0, 0x80000000}};
  // -6058811844392818920
  s21_decimal dec_check = {{0x81f698e8, 0x54153945, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_455) {
  // 2946.4
  s21_decimal dec_1 = {{0x7318, 0x0, 0x0, 0x10000}};
  // -9564088396157
  s21_decimal dec_2 = {{0xd017697d, 0x8b2, 0x0, 0x80000000}};
  // 9564088399103.4
  s21_decimal dec_check = {{0x20ea91fa, 0x56fc, 0x0, 0x10000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_456) {
  // -0.90073013151770
  s21_decimal dec_1 = {{0xc1f3e81a, 0x51eb, 0x0, 0x800e0000}};
  // 790976906
  s21_decimal dec_2 = {{0x2f25598a, 0x0, 0x0, 0x0}};
  // -790976906.90073013151770
  s21_decimal dec_check = {{0x641a681a, 0xe4f7ad18, 0x10bf, 0x800e0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_457) {
  // -10154605453737
  s21_decimal dec_1 = {{0x4da6a1a9, 0x93c, 0x0, 0x80000000}};
  // -88281.167248583082070
  s21_decimal dec_2 = {{0xa4c056, 0xc925b5e1, 0x4, 0x800f0000}};
  // -10154605365455.832751416917930
  s21_decimal dec_check = {{0x9ce5bfaa, 0xe5e3e591, 0x20cfb153, 0x800f0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_458) {
  // 78292331.4664298
  s21_decimal dec_1 = {{0x8a0e936a, 0x2c810, 0x0, 0x70000}};
  // 719
  s21_decimal dec_2 = {{0x2cf, 0x0, 0x0, 0x0}};
  // 78291612.4664298
  s21_decimal dec_check = {{0xdd7fe1ea, 0x2c80e, 0x0, 0x70000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_459) {
  // -467.22653086676838
  s21_decimal dec_1 = {{0x6431f766, 0xa5fe01, 0x0, 0x800e0000}};
  // -4088
  s21_decimal dec_2 = {{0xff8, 0x0, 0x0, 0x80000000}};
  // 3620.77346913323162
  s21_decimal dec_check = {{0xbbfc089a, 0x5065b6d, 0x0, 0xe0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_460) {
  // -39219369349
  s21_decimal dec_1 = {{0x21a81585, 0x9, 0x0, 0x80000000}};
  // -794188568356389887
  s21_decimal dec_2 = {{0x8d8f03ff, 0xb05864b, 0x0, 0x80000000}};
  // 794188529137020538
  s21_decimal dec_check = {{0x6be6ee7a, 0xb058642, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_461) {
  // 7126497
  s21_decimal dec_1 = {{0x6cbde1, 0x0, 0x0, 0x0}};
  // -712611922072344878189389848
  s21_decimal dec_2 = {{0x8bd42818, 0xb3d6bc7b, 0x24d7571, 0x80000000}};
  // 712611922072344878196516345
  s21_decimal dec_check = {{0x8c40e5f9, 0xb3d6bc7b, 0x24d7571, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_462) {
  // -8941321538483127
  s21_decimal dec_1 = {{0xa61fb3b7, 0x1fc415, 0x0, 0x80000000}};
  // 77245851843
  s21_decimal dec_2 = {{0xfc3628c3, 0x11, 0x0, 0x0}};
  // -8941398784334970
  s21_decimal dec_check = {{0xa255dc7a, 0x1fc427, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_463) {
  // -86.3
  s21_decimal dec_1 = {{0x35f, 0x0, 0x0, 0x80010000}};
  // -874950356.81424342
  s21_decimal dec_2 = {{0x7966c3d6, 0x136d845, 0x0, 0x80080000}};
  // 874950270.51424342
  s21_decimal dec_check = {{0x77036a56, 0x136d843, 0x0, 0x80000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_464) {
  // 76498
  s21_decimal dec_1 = {{0x12ad2, 0x0, 0x0, 0x0}};
  // 5071.0429304372
  s21_decimal dec_2 = {{0xf1200634, 0x2e1e, 0x0, 0xa0000}};
  // 71426.9570695628
  s21_decimal dec_check = {{0xd80901cc, 0x2899f, 0x0, 0xa0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_465) {
  // 1.650
  s21_decimal dec_1 = {{0x672, 0x0, 0x0, 0x30000}};
  // 3082872998232541533.4616
  s21_decimal dec_2 = {{0x2ce1d2d8, 0x3a92b550, 0x687, 0x40000}};
  // -3082872998232541531.8116
  s21_decimal dec_check = {{0x2ce19264, 0x3a92b550, 0x687, 0x80040000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_466) {
  // 62045836
  s21_decimal dec_1 = {{0x3b2be8c, 0x0, 0x0, 0x0}};
  // 4034378483518455675989
  s21_decimal dec_2 = {{0xecabfc55, 0xb43f9fb4, 0xda, 0x0}};
  // -4034378483518393630153
  s21_decimal dec_check = {{0xe8f93dc9, 0xb43f9fb4, 0xda, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_467) {
  // -0.163362
  s21_decimal dec_1 = {{0x27e22, 0x0, 0x0, 0x80060000}};
  // -678884
  s21_decimal dec_2 = {{0xa5be4, 0x0, 0x0, 0x80000000}};
  // 678883.836638
  s21_decimal dec_check = {{0x10a142de, 0x9e, 0x0, 0x60000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_468) {
  // -1004794509097794445473
  s21_decimal dec_1 = {{0x1d0aa0a1, 0x78533265, 0x36, 0x80000000}};
  // -862414819794716362497
  s21_decimal dec_2 = {{0x70968701, 0xc068ed55, 0x2e, 0x80000000}};
  // -142379689303078082976
  s21_decimal dec_check = {{0xac7419a0, 0xb7ea450f, 0x7, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_469) {
  // -68965844
  s21_decimal dec_1 = {{0x41c55d4, 0x0, 0x0, 0x80000000}};
  // -77195201243598137668858059541
  s21_decimal dec_2 = {{0x899c9b15, 0xb0308b41, 0xf96e5fb4, 0x80000000}};
  // 77195201243598137668789093697
  s21_decimal dec_check = {{0x85804541, 0xb0308b41, 0xf96e5fb4, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_470) {
  // 89832106.468610
  s21_decimal dec_1 = {{0xaacba502, 0x51b3, 0x0, 0x60000}};
  // 747096589327900076987
  s21_decimal dec_2 = {{0xd35febbb, 0x800c45b4, 0x28, 0x0}};
  // -747096589327810244880.531390
  s21_decimal dec_check = {{0xb7ea7fbe, 0x42a21c9e, 0x269fbdb, 0x80060000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_471) {
  // 0.835364258311705602
  s21_decimal dec_1 = {{0xf2ba1402, 0xb97cf5d, 0x0, 0x120000}};
  // -220130112773609341.8
  s21_decimal dec_2 = {{0x72606aea, 0x1e8c97b6, 0x0, 0x80010000}};
  // 220130112773609342.63536425831
  s21_decimal dec_check = {{0xb26f1b67, 0x7e3de0fe, 0x4720bc74, 0xb0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_472) {
  // -6862719.54275706
  s21_decimal dec_1 = {{0x240dcd7a, 0x27029, 0x0, 0x80080000}};
  // 32574663580227657019344231
  s21_decimal dec_2 = {{0xa83ac567, 0xd13cc9e, 0x1af1f4, 0x0}};
  // -32574663580227657026206950.543
  s21_decimal dec_check = {{0xbe9fe48f, 0x15574bc2, 0x69412153, 0x80030000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_473) {
  // 102337961279
  s21_decimal dec_1 = {{0xd3d15d3f, 0x17, 0x0, 0x0}};
  // -59053708214113231058637539
  s21_decimal dec_2 = {{0x89a612e3, 0xefdc2c6f, 0x30d91b, 0x80000000}};
  // 59053708214113333396598818
  s21_decimal dec_check = {{0x5d777022, 0xefdc2c87, 0x30d91b, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_474) {
  // -363373.3976
  s21_decimal dec_1 = {{0xd8966158, 0x0, 0x0, 0x80040000}};
  // 447376679927992060836214283
  s21_decimal dec_2 = {{0xe8c2760b, 0x6a3487e8, 0x1720fb2, 0x0}};
  // -447376679927992060836577656.40
  s21_decimal dec_check = {{0xee209308, 0x7c8516fa, 0x908e21b1, 0x80020000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_475) {
  // -599729880597.92125393
  s21_decimal dec_1 = {{0xcea72dd1, 0x404adae3, 0x3, 0x80080000}};
  // -0.34
  s21_decimal dec_2 = {{0x22, 0x0, 0x0, 0x80020000}};
  // -599729880597.58125393
  s21_decimal dec_check = {{0xcca06151, 0x404adae3, 0x3, 0x80080000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_476) {
  // -42046
  s21_decimal dec_1 = {{0xa43e, 0x0, 0x0, 0x80000000}};
  // 4402370
  s21_decimal dec_2 = {{0x432cc2, 0x0, 0x0, 0x0}};
  // -4444416
  s21_decimal dec_check = {{0x43d100, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_477) {
  // -0.9529008
  s21_decimal dec_1 = {{0x9166b0, 0x0, 0x0, 0x80070000}};
  // -2771279353246525.24
  s21_decimal dec_2 = {{0x8e5d03ec, 0x3d88e63, 0x0, 0x80020000}};
  // 2771279353246524.2870992
  s21_decimal dec_check = {{0xad8a94d0, 0x5044a91a, 0x5de, 0x70000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_478) {
  // 453203
  s21_decimal dec_1 = {{0x6ea53, 0x0, 0x0, 0x0}};
  // 36.9
  s21_decimal dec_2 = {{0x171, 0x0, 0x0, 0x10000}};
  // 453166.1
  s21_decimal dec_check = {{0x4525cd, 0x0, 0x0, 0x10000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_479) {
  // -678790
  s21_decimal dec_1 = {{0xa5b86, 0x0, 0x0, 0x80000000}};
  // -0.722
  s21_decimal dec_2 = {{0x2d2, 0x0, 0x0, 0x80030000}};
  // -678789.278
  s21_decimal dec_check = {{0x2875809e, 0x0, 0x0, 0x80030000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_480) {
  // -54896
  s21_decimal dec_1 = {{0xd670, 0x0, 0x0, 0x80000000}};
  // 854107964
  s21_decimal dec_2 = {{0x32e8a73c, 0x0, 0x0, 0x0}};
  // -854162860
  s21_decimal dec_check = {{0x32e97dac, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_481) {
  // -358
  s21_decimal dec_1 = {{0x166, 0x0, 0x0, 0x80000000}};
  // -57.10884165
  s21_decimal dec_2 = {{0x54652d45, 0x1, 0x0, 0x80080000}};
  // -300.89115835
  s21_decimal dec_check = {{0x17378bb, 0x7, 0x0, 0x80080000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_482) {
  // -5251067446089395683269
  s21_decimal dec_1 = {{0xe0173fc5, 0xa93324de, 0x11c, 0x80000000}};
  // 7589111
  s21_decimal dec_2 = {{0x73ccf7, 0x0, 0x0, 0x0}};
  // -5251067446089403272380
  s21_decimal dec_check = {{0xe08b0cbc, 0xa93324de, 0x11c, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_483) {
  // -1889092961951486.10651
  s21_decimal dec_1 = {{0x50e27c5b, 0x3da4a401, 0xa, 0x80050000}};
  // 3717142084321032391.83697164
  s21_decimal dec_2 = {{0x8c57050c, 0x9dc53bd2, 0x133798b, 0x80000}};
  // -3719031177282983877.94348164
  s21_decimal dec_check = {{0x810cc884, 0x68e5e0f6, 0x133a18c, 0x80080000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_484) {
  // 44775.8
  s21_decimal dec_1 = {{0x6d50e, 0x0, 0x0, 0x10000}};
  // -4.39951
  s21_decimal dec_2 = {{0x6b68f, 0x0, 0x0, 0x80050000}};
  // 44780.19951
  s21_decimal dec_check = {{0xae9296f, 0x1, 0x0, 0x50000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_485) {
  // -3.9613817826810
  s21_decimal dec_1 = {{0x4f8a2dfa, 0x2407, 0x0, 0x800d0000}};
  // 195194
  s21_decimal dec_2 = {{0x2fa7a, 0x0, 0x0, 0x0}};
  // -195197.9613817826810
  s21_decimal dec_check = {{0xe26a6dfa, 0x1b16d31d, 0x0, 0x800d0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_486) {
  // -150907951730658747413915
  s21_decimal dec_1 = {{0x5d88f59b, 0xbc885a70, 0x1ff4, 0x80000000}};
  // -7751347
  s21_decimal dec_2 = {{0x7646b3, 0x0, 0x0, 0x80000000}};
  // -150907951730658739662568
  s21_decimal dec_check = {{0x5d12aee8, 0xbc885a70, 0x1ff4, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_487) {
  // 483.326682332599
  s21_decimal dec_1 = {{0x4335fdb7, 0x1b795, 0x0, 0xc0000}};
  // 0.6
  s21_decimal dec_2 = {{0x6, 0x0, 0x0, 0x10000}};
  // 482.726682332599
  s21_decimal dec_check = {{0x906c8db7, 0x1b709, 0x0, 0xc0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_488) {
  // -0.17178
  s21_decimal dec_1 = {{0x431a, 0x0, 0x0, 0x80050000}};
  // -9893822.0894069792
  s21_decimal dec_2 = {{0xa719a420, 0x15f7fc9, 0x0, 0x800a0000}};
  // 9893821.9176269792
  s21_decimal dec_check = {{0x40b617e0, 0x15f7fc9, 0x0, 0xa0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_489) {
  // -4118.5
  s21_decimal dec_1 = {{0xa0e1, 0x0, 0x0, 0x80010000}};
  // -10736
  s21_decimal dec_2 = {{0x29f0, 0x0, 0x0, 0x80000000}};
  // 6617.5
  s21_decimal dec_check = {{0x1027f, 0x0, 0x0, 0x10000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_490) {
  // 5122955286696616682297
  s21_decimal dec_1 = {{0x91466339, 0xb74952ab, 0x115, 0x0}};
  // -72.8
  s21_decimal dec_2 = {{0x2d8, 0x0, 0x0, 0x80010000}};
  // 5122955286696616682369.8
  s21_decimal dec_check = {{0xacbfe312, 0x28dd3ab3, 0xad9, 0x10000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_491) {
  // -533856613855669586154221.8
  s21_decimal dec_1 = {{0xd96c3d4a, 0x4011a1ac, 0x46a7c, 0x80010000}};
  // 0.56450342
  s21_decimal dec_2 = {{0x35d5d26, 0x0, 0x0, 0x80000}};
  // -533856613855669586154222.36450
  s21_decimal dec_check = {{0x141af722, 0xb0bb6fed, 0xac7f9586, 0x80050000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_492) {
  // 701434220.5605919492305
  s21_decimal dec_1 = {{0xbad288d1, 0x3f8d806b, 0x17c, 0xd0000}};
  // -400141688063537675
  s21_decimal dec_2 = {{0xc8da320b, 0x58d96be, 0x0, 0x80000000}};
  // 400141688764971895.56059194923
  s21_decimal dec_check = {{0x4c21462b, 0x4e14d662, 0x814af1d9, 0xb0000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_493) {
  // -831977338399411881.43866
  s21_decimal dec_1 = {{0xd6574afa, 0x287f0ef0, 0x119e, 0x80050000}};
  // -39734552366698
  s21_decimal dec_2 = {{0x6be10e6a, 0x2423, 0x0, 0x80000000}};
  // -831937603847045183.43866
  s21_decimal dec_check = {{0x8db8ccba, 0xf15a8274, 0x119d, 0x80050000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_494) {
  // 46
  s21_decimal dec_1 = {{0x2e, 0x0, 0x0, 0x0}};
  // 54118349998
  s21_decimal dec_2 = {{0x99b47cae, 0xc, 0x0, 0x0}};
  // -54118349952
  s21_decimal dec_check = {{0x99b47c80, 0xc, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_495) {
  // -869405096299477049
  s21_decimal dec_1 = {{0x2ad83839, 0xc10bf54, 0x0, 0x80000000}};
  // -6219123.19865
  s21_decimal dec_2 = {{0xccdce779, 0x90, 0x0, 0x80050000}};
  // -869405096293257925.80135
  s21_decimal dec_check = {{0x5fed1227, 0xdf1cd4f, 0x1269, 0x80050000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_496) {
  // -880211591301203
  s21_decimal dec_1 = {{0x3b3a0853, 0x3208c, 0x0, 0x80000000}};
  // -99
  s21_decimal dec_2 = {{0x63, 0x0, 0x0, 0x80000000}};
  // -880211591301104
  s21_decimal dec_check = {{0x3b3a07f0, 0x3208c, 0x0, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_497) {
  // -624608111427
  s21_decimal dec_1 = {{0x6d8b6b43, 0x91, 0x0, 0x80000000}};
  // 54760325548651585556
  s21_decimal dec_2 = {{0x30202014, 0xf7f3c1f4, 0x2, 0x0}};
  // -54760326173259696983
  s21_decimal dec_check = {{0x9dab8b57, 0xf7f3c285, 0x2, 0x80000000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_498) {
  // -660044509259711293
  s21_decimal dec_1 = {{0xee5f433d, 0x928f2fb, 0x0, 0x80000000}};
  // 19907822719554.50949
  s21_decimal dec_2 = {{0xc10cbc45, 0x1ba0aded, 0x0, 0x50000}};
  // -660064417082430847.50949
  s21_decimal dec_check = {{0xdd05b065, 0x37645887, 0xdfa, 0x80050000}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_499) {
  // 766743902515548
  s21_decimal dec_1 = {{0x79f1715c, 0x2b959, 0x0, 0x0}};
  // 539
  s21_decimal dec_2 = {{0x21b, 0x0, 0x0, 0x0}};
  // 766743902515009
  s21_decimal dec_check = {{0x79f16f41, 0x2b959, 0x0, 0x0}};
  s21_decimal result;
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_uint_eq(dec_check.bits[0], result.bits[0]);
  ck_assert_uint_eq(dec_check.bits[1], result.bits[1]);
  ck_assert_uint_eq(dec_check.bits[2], result.bits[2]);
  ck_assert_uint_eq(dec_check.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_sub_500) {
  // -9409723707061277
  s21_decimal dec_1 = {{0x6fe741d, 0x216e18, 0x0, 0x80000000}};
  // -170692
  s21_decimal dec_2 = {{0x29ac4, 0x0, 0x0, 0x80000000}};
  // -9409723706890585
  s21_decimal dec_check = {{0x6fbd959, 0x216e18, 0x0, 0x80000000}};
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
  // -50.160
  s21_decimal dec_1 = {{0xc3f0, 0x0, 0x0, 0x80030000}};
  // -94295046495482728451212933
  s21_decimal dec_2 = {{0x52050685, 0xb697a177, 0x4dffc0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_2) {
  // 8055626155190271
  s21_decimal dec_1 = {{0x9f6c67ff, 0x1c9e8c, 0x0, 0x0}};
  // -0.850785975334954139720175
  s21_decimal dec_2 = {{0x9f6919ef, 0x333c4dda, 0xb429, 0x80180000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_3) {
  // 879743439097979960975
  s21_decimal dec_1 = {{0x73977e8f, 0xb0e48cc7, 0x2f, 0x0}};
  // 75277374956004883.471577330229
  s21_decimal dec_2 = {{0x58d33235, 0x50b8ce6d, 0xf33bfc31, 0xc0000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_4) {
  // 8860970457696.7067207759
  s21_decimal dec_1 = {{0x7ada884f, 0x8aad866a, 0x12c3, 0xa0000}};
  // -955.93301376782340583879
  s21_decimal dec_2 = {{0x92f9f1c7, 0x1f8d672a, 0x143e, 0x80140000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_5) {
  // -6.0223448235327174816780
  s21_decimal dec_1 = {{0xb9a5340c, 0xb83c5486, 0xcc0, 0x80160000}};
  // -83778927.2973
  s21_decimal dec_2 = {{0x1021cb8d, 0xc3, 0x0, 0x80040000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_6) {
  // -733049391.077910792853
  s21_decimal dec_1 = {{0xbf464a95, 0xbd1a9952, 0x27, 0x800c0000}};
  // -878042066949870119
  s21_decimal dec_2 = {{0x9a659227, 0xc2f6e9b, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_7) {
  // 9135999358579347174931166093
  s21_decimal dec_1 = {{0x8a9df38d, 0x9eb17307, 0x1d851f1d, 0x0}};
  // 7416231743124697743081908.8
  s21_decimal dec_2 = {{0x64d9110, 0x48a58935, 0x3d587b, 0x10000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_8) {
  // 241943651947517811416918.95278
  s21_decimal dec_1 = {{0x214a0dee, 0x4d896604, 0x4e2d1c1d, 0x50000}};
  // -942519863224449112408794913
  s21_decimal dec_2 = {{0x5dc32721, 0x2a7aad75, 0x30ba258, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_9) {
  // 936637108682891420557067
  s21_decimal dec_1 = {{0xd1cdf0b, 0x330c1701, 0xc657, 0x0}};
  // 2.2321504842447
  s21_decimal dec_2 = {{0x215df2cf, 0x144d, 0x0, 0xd0000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_10) {
  // -874149.7377995823683715815
  s21_decimal dec_1 = {{0x5383c2e7, 0x85bc0125, 0x73b15, 0x80130000}};
  // -973581060227532.26
  s21_decimal dec_2 = {{0x7d7db3ca, 0x159e2ae, 0x0, 0x80020000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_11) {
  // 975261823860177571355.55
  s21_decimal dec_1 = {{0x328182c3, 0xe7aa3439, 0x14a6, 0x20000}};
  // 984634810.691120747
  s21_decimal dec_2 = {{0xbcba6e6b, 0xdaa2024, 0x0, 0x90000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_12) {
  // -80.0564837
  s21_decimal dec_1 = {{0x2fb7a665, 0x0, 0x0, 0x80070000}};
  // -94349371158739992714775
  s21_decimal dec_2 = {{0x46a01e17, 0xb08d807b, 0x13fa, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_13) {
  // 1642795940754.39403596847324
  s21_decimal dec_1 = {{0xfdd18dc, 0xa3bb9b78, 0x87e38e, 0xe0000}};
  // -810940945019271819337864
  s21_decimal dec_2 = {{0x5c20a088, 0x325c11c2, 0xabb9, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_14) {
  // -0.7640
  s21_decimal dec_1 = {{0x1dd8, 0x0, 0x0, 0x80040000}};
  // -8392672552044830088013600911
  s21_decimal dec_2 = {{0x5aecd88f, 0xb1bf2d49, 0x1b1e418a, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_15) {
  // 79228162514264337593543925767
  s21_decimal dec_1 = {{0xffffa007, 0xffffffff, 0xffffffff, 0x0}};
  // -435286739174707854754380707
  s21_decimal dec_2 = {{0xc586fba3, 0x69d27351, 0x1680f8d, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1; // Результат слишком велик или положительная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_16) {
  // 8257477506829140549287.86
  s21_decimal dec_1 = {{0xf19ef992, 0xe0111705, 0xaedb, 0x20000}};
  // -908419376005073682771013031
  s21_decimal dec_2 = {{0x1a04eda7, 0xcb4a40d, 0x2ef6d49, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_17) {
  // 69936.340918805191534443
  s21_decimal dec_1 = {{0xdf71276b, 0x41b30709, 0xecf, 0x120000}};
  // -8850351277800
  s21_decimal dec_2 = {{0xa20b46e8, 0x80c, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_18) {
  // 9102422524121201464806933415
  s21_decimal dec_1 = {{0xfa8303a7, 0xc6d32cd0, 0x1d6958f1, 0x0}};
  // 18270608.235
  s21_decimal dec_2 = {{0x41035b6b, 0x4, 0x0, 0x30000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_19) {
  // 9645557527
  s21_decimal dec_1 = {{0x3eeb8717, 0x2, 0x0, 0x0}};
  // 0.711060383969085626091
  s21_decimal dec_2 = {{0x4a3616eb, 0x8bf1f3dc, 0x26, 0x150000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_20) {
  // 0.59465308
  s21_decimal dec_1 = {{0x38b5e5c, 0x0, 0x0, 0x80000}};
  // -9760453604896826807973759
  s21_decimal dec_2 = {{0x4f9a777f, 0x40096a24, 0x812db, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_21) {
  // 82260902210883306287175
  s21_decimal dec_1 = {{0xfcc67047, 0x5f5883db, 0x116b, 0x0}};
  // 40960.459422588634930767087
  s21_decimal dec_2 = {{0xff7664ef, 0xf4609560, 0x21e1b6, 0x150000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_22) {
  // 8821162352.41
  s21_decimal dec_1 = {{0x62398fe9, 0xcd, 0x0, 0x20000}};
  // 83.82488820627558806353
  s21_decimal dec_2 = {{0x14beb351, 0x6a66b208, 0x1c6, 0x140000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_23) {
  // 881039787917131183
  s21_decimal dec_1 = {{0xe7c93daf, 0xc3a1504, 0x0, 0x0}};
  // 75989449.276528491677290
  s21_decimal dec_2 = {{0x34dec66a, 0x6573e3a5, 0x1017, 0xf0000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_24) {
  // 96810894330079958
  s21_decimal dec_1 = {{0xd6eeaad6, 0x157f0fe, 0x0, 0x0}};
  // -46193865384.79621829695507
  s21_decimal dec_2 = {{0x279a1813, 0x722eec67, 0x3d231, 0x800e0000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_25) {
  // 8505831071983.3651057
  s21_decimal dec_1 = {{0x27c3771, 0x9c6bd2f1, 0x4, 0x70000}};
  // -241873023.7465862457126888
  s21_decimal dec_2 = {{0xb071efe8, 0xa0fff92d, 0x2002f, 0x80100000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_26) {
  // 8.123821476140522957364204
  s21_decimal dec_1 = {{0x409edbec, 0x3ea26aef, 0x6b849, 0x180000}};
  // -9522038456837319453
  s21_decimal dec_2 = {{0xcd65ab1d, 0x84251386, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_27) {
  // 8613842525047934
  s21_decimal dec_1 = {{0x7fdb4c7e, 0x1e9a3e, 0x0, 0x0}};
  // 4.0161483481591607241
  s21_decimal dec_2 = {{0x1cfc6fc9, 0x2d5a4071, 0x2, 0x130000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_28) {
  // 2.45186569673534874762894
  s21_decimal dec_1 = {{0x79eebe8e, 0x972feff5, 0x33eb, 0x170000}};
  // -8009248080353507758144
  s21_decimal dec_2 = {{0x3a195040, 0x2ea53644, 0x1b2, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_29) {
  // 9752373.29
  s21_decimal dec_1 = {{0x3a20f0d1, 0x0, 0x0, 0x20000}};
  // 148.8991706183071956453170
  s21_decimal dec_2 = {{0x2c77c732, 0x66f22d56, 0x13b4e, 0x160000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_30) {
  // 8137523
  s21_decimal dec_1 = {{0x7c2b33, 0x0, 0x0, 0x0}};
  // -8984.93426009898281643476529
  s21_decimal dec_2 = {{0x51c70631, 0x38e1b100, 0x2e73762, 0x80170000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_31) {
  // 9496594026291030276614922993
  s21_decimal dec_1 = {{0x47ec22f1, 0xb9d34468, 0x1eaf6601, 0x0}};
  // 0.8074417656568089
  s21_decimal dec_2 = {{0xdc301919, 0x1cafa3, 0x0, 0x100000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_32) {
  // -18378818261953410768.154040544
  s21_decimal dec_1 = {{0xdf0e98e0, 0x5dc6549d, 0x3b629a26, 0x80090000}};
  // -898830524833998662886995397
  s21_decimal dec_2 = {{0xa9f7b5c5, 0x62d52e2e, 0x2e77ec4, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_33) {
  // 7
  s21_decimal dec_1 = {{0x7, 0x0, 0x0, 0x0}};
  // -8385611858998.0307133755411680
  s21_decimal dec_2 = {{0x3d19cce0, 0x92ac0303, 0xef427d1, 0x80100000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_34) {
  // -8721715990218.39766683511127
  s21_decimal dec_1 = {{0xb701e957, 0x1f3a321b, 0x2d17185, 0x800e0000}};
  // -9127579717365036413785108078
  s21_decimal dec_2 = {{0x8bb26e6e, 0xf480c668, 0x1d7e282f, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_35) {
  // 738970233940515182.4029169
  s21_decimal dec_1 = {{0xa9c0a5f1, 0x910777ff, 0x61cd4, 0x70000}};
  // -79228162514264337591438590303
  s21_decimal dec_2 = {{0x8282c15f, 0xffffffff, 0xffffffff, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1; // Результат слишком велик или положительная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_36) {
  // 264.9047790648584950622508698
  s21_decimal dec_1 = {{0xeb7cd69a, 0x7b617934, 0x88f3db0, 0x190000}};
  // -82766
  s21_decimal dec_2 = {{0x1434e, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_37) {
  // 480594.41135924767
  s21_decimal dec_1 = {{0x9d02b61f, 0xaabdce, 0x0, 0xb0000}};
  // -95835768070211629096350413
  s21_decimal dec_2 = {{0xda43b2cd, 0x65ad64a4, 0x4f4603, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_38) {
  // 80788746651291518337163
  s21_decimal dec_1 = {{0x9bd9808b, 0x91155239, 0x111b, 0x0}};
  // -51.5058464
  s21_decimal dec_2 = {{0x1eb32b20, 0x0, 0x0, 0x80070000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_39) {
  // 17574.397287741
  s21_decimal dec_1 = {{0xdbb51d3d, 0xffb, 0x0, 0x90000}};
  // -979960409327689101839995
  s21_decimal dec_2 = {{0x66858e7b, 0xc29ee6c3, 0xcf83, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_40) {
  // 8599689274499
  s21_decimal dec_1 = {{0x456ca483, 0x7d2, 0x0, 0x0}};
  // -0.463787472089095971643
  s21_decimal dec_2 = {{0x1af5a33b, 0x2458189d, 0x19, 0x80150000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_41) {
  // -246199.49014482686912318
  s21_decimal dec_1 = {{0x750d273e, 0xa66da297, 0x536, 0x80110000}};
  // -96757195224689193.654829152642
  s21_decimal dec_2 = {{0x61eb7982, 0x4f83ce69, 0x38a3ad0f, 0x800c0000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_42) {
  // 535581559707428101902080
  s21_decimal dec_1 = {{0xe47d4f00, 0xef3d492f, 0x7169, 0x0}};
  // -987067302594542123271070612.85
  s21_decimal dec_2 = {{0x7a3de625, 0x4fe24c5a, 0x3ef04b29, 0x80020000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_43) {
  // 9783082938302.30414374658
  s21_decimal dec_1 = {{0x8faeb702, 0x32e9931b, 0xcf2a, 0xb0000}};
  // 25.585614096481462481380
  s21_decimal dec_2 = {{0x4c8771e4, 0xffb92e5b, 0x56a, 0x150000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_44) {
  // 84980771205625174029.10347
  s21_decimal dec_1 = {{0xfb5afe8b, 0xaf0db959, 0x70789, 0x50000}};
  // -976598640105.350877237
  s21_decimal dec_2 = {{0x38fdd035, 0xf10758ef, 0x34, 0x80090000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_45) {
  // 954096959142.765104856
  s21_decimal dec_1 = {{0x68e58ed8, 0xb8c15151, 0x33, 0x90000}};
  // 899134.63102348670984657
  s21_decimal dec_2 = {{0x4c72e1d1, 0x37f645a4, 0x130a, 0x110000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_46) {
  // 80904446063493529689652012
  s21_decimal dec_1 = {{0x77e7fb2c, 0xcf2d8d01, 0x42ec2e, 0x0}};
  // -6642994.1190208049738666509365
  s21_decimal dec_2 = {{0xbc2c8435, 0xd34cf7b6, 0xd6a58f37, 0x80160000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_47) {
  // 81544979934868867321088
  s21_decimal dec_1 = {{0x66fb0d00, 0x8feda6f1, 0x1144, 0x0}};
  // -8487080418536.54078139838
  s21_decimal dec_2 = {{0x9a712dbe, 0x8e1d99f9, 0xb3b8, 0x800b0000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_48) {
  // 5.75521066261691011
  s21_decimal dec_1 = {{0x4b483a83, 0x7fca95c, 0x0, 0x110000}};
  // -95144956126877139435611.7
  s21_decimal dec_2 = {{0xe93f0395, 0x2f1f021f, 0xc97a, 0x80010000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_49) {
  // 9970173210906364604
  s21_decimal dec_1 = {{0x9308abc, 0x8a5d2bb6, 0x0, 0x0}};
  // -6.553270508891063
  s21_decimal dec_2 = {{0x30ccabb7, 0x17482a, 0x0, 0x800f0000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_50) {
  // -390.957642327981
  s21_decimal dec_1 = {{0xeb64a7ad, 0x16392, 0x0, 0x800c0000}};
  // -9261047870706669146598
  s21_decimal dec_2 = {{0xeebd51e6, 0xadb7345, 0x1f6, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_51) {
  // 902491397510438294662504935
  s21_decimal dec_1 = {{0x8a1161e7, 0xb1071d4e, 0x2ea85fc, 0x0}};
  // 2175843.36
  s21_decimal dec_2 = {{0xcf812d0, 0x0, 0x0, 0x20000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_52) {
  // 92686.4656425518805754411789
  s21_decimal dec_1 = {{0x187d7b0d, 0xb46faad2, 0x2feaf39, 0x160000}};
  // -9059397087166869402.3707870
  s21_decimal dec_2 = {{0xa0a49cde, 0x6ca1aa, 0x4af005, 0x80070000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_53) {
  // 9540002259696528.1529801323381
  s21_decimal dec_1 = {{0x629db375, 0xbd637198, 0x34410c93, 0xd0000}};
  // 29
  s21_decimal dec_2 = {{0x1d, 0x0, 0x0, 0x0}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_54) {
  // 93330156880170049556.8285
  s21_decimal dec_1 = {{0x37612d9d, 0x6121ed82, 0xc5a2, 0x40000}};
  // 804902844798.854027691013471
  s21_decimal dec_2 = {{0x5d59b55f, 0xa6065349, 0x299ccce, 0xf0000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_55) {
  // 811148.518
  s21_decimal dec_1 = {{0x305924e6, 0x0, 0x0, 0x30000}};
  // -8342355515469581663897388.6041
  s21_decimal dec_2 = {{0x80e03e59, 0xc25fddfc, 0xd8e58f2, 0x80040000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_56) {
  // -2.4795975648092097315972634326
  s21_decimal dec_1 = {{0xaed0d6d6, 0x53f4e908, 0x501ec015, 0x801c0000}};
  // -79556260791151842904
  s21_decimal dec_2 = {{0xb2f15658, 0x50109dae, 0x4, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_57) {
  // 7779.79494742181007264
  s21_decimal dec_1 = {{0x5593cfa0, 0x2ca2648e, 0x2a, 0x110000}};
  // -8284647725781693995429516
  s21_decimal dec_2 = {{0x6502e8c, 0xa7336d97, 0x6da57, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_58) {
  // 84.220316719679162375995203508
  s21_decimal dec_1 = {{0x915d1fb4, 0xbea2b199, 0x102169c5, 0x1b0000}};
  // 3.9888558781203
  s21_decimal dec_2 = {{0x47607313, 0x2447, 0x0, 0xd0000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_59) {
  // 8498219217942552310414556
  s21_decimal dec_1 = {{0x9b37cdc, 0x630d07a1, 0x70791, 0x0}};
  // -301.7468096853
  s21_decimal dec_2 = {{0x8f1d3155, 0x2be, 0x0, 0x800a0000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_60) {
  // -7598.1361564889907620352
  s21_decimal dec_1 = {{0xb5466a00, 0xf53690c2, 0x1016, 0x80130000}};
  // -972937682298113
  s21_decimal dec_2 = {{0xb4f12501, 0x374e1, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_61) {
  // -20928207806367429618.171668
  s21_decimal dec_1 = {{0x9ab1ff14, 0x6b227603, 0x114fb8, 0x80060000}};
  // 79228162514264337592606464016
  s21_decimal dec_2 = {{0xc81f1810, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_62) {
  // 2.3038454670255391358941
  s21_decimal dec_1 = {{0xfc1bfdd, 0xeac90ba2, 0x4e0, 0x160000}};
  // -840994228158025315.791815953
  s21_decimal dec_2 = {{0xc39a4511, 0x75f94933, 0x2b7a774, 0x80090000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_63) {
  // 80843477009586750740295671
  s21_decimal dec_1 = {{0xa6a0eff7, 0xab95c0ae, 0x42df45, 0x0}};
  // 8.8288362381546837392
  s21_decimal dec_2 = {{0x710f5590, 0xc93f45d0, 0x4, 0x130000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_64) {
  // 61323378080226367798716769624
  s21_decimal dec_1 = {{0xb999a558, 0xefc304f4, 0xc625826a, 0x0}};
  // -65821538741548723531475378618
  s21_decimal dec_2 = {{0xa330e1ba, 0xff0d428a, 0xd4ae4cfc, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1; // Результат слишком велик или положительная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_65) {
  // 968856940264479086
  s21_decimal dec_1 = {{0x2a2d96e, 0xd721241, 0x0, 0x0}};
  // -2959.2518309278767
  s21_decimal dec_2 = {{0x15d5742f, 0x69223d, 0x0, 0x800d0000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_66) {
  // 96097097439691430.452542757909
  s21_decimal dec_1 = {{0xb6cedc15, 0xaee85743, 0x3681a7ea, 0xc0000}};
  // -4614998237264
  s21_decimal dec_2 = {{0x8354a050, 0x432, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_67) {
  // 68179850493.933494116502
  s21_decimal dec_1 = {{0x22f6a096, 0x97f77e7, 0xe70, 0xc0000}};
  // -8627337547832159199367
  s21_decimal dec_2 = {{0xf5796087, 0xb05c1e28, 0x1d3, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_68) {
  // 897870276496736293314331
  s21_decimal dec_1 = {{0xc95f1b, 0xa52d192d, 0xbe21, 0x0}};
  // -7030237757218151.482843427272
  s21_decimal dec_2 = {{0x74ef71c8, 0x7928ae8e, 0x16b746c0, 0x800c0000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_69) {
  // 8272012794221113661179
  s21_decimal dec_1 = {{0x8be856fb, 0x6d3d0157, 0x1c0, 0x0}};
  // 826329.0596254087092360133
  s21_decimal dec_2 = {{0x3eabd3c5, 0xe17d3727, 0x6d5d1, 0x130000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_70) {
  // 59.2494360073419844384
  s21_decimal dec_1 = {{0x2e936b20, 0x1e82d151, 0x20, 0x130000}};
  // -98561202949
  s21_decimal dec_2 = {{0xf2b49b05, 0x16, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_71) {
  // 80110538551460658978
  s21_decimal dec_1 = {{0x650c7f22, 0x57c1ce5e, 0x4, 0x0}};
  // 81.94752085713650
  s21_decimal dec_2 = {{0x671762f2, 0x1d1d15, 0x0, 0xe0000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_72) {
  // -63424167.390212936816510209
  s21_decimal dec_1 = {{0xc7f1c501, 0xedbdfe, 0x347697, 0x80120000}};
  // -9809105351529350
  s21_decimal dec_2 = {{0x500ad386, 0x22d954, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_73) {
  // 247648.3949377500401215993492
  s21_decimal dec_1 = {{0x1e9ff694, 0xe6eb553d, 0x8007fdf, 0x160000}};
  // -88961996
  s21_decimal dec_2 = {{0x54d73cc, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_74) {
  // 9705888367369113226.311862
  s21_decimal dec_1 = {{0x79cdf8b6, 0x433fa9b4, 0x8074d, 0x60000}};
  // -1658737.75164723272
  s21_decimal dec_2 = {{0xd63f1048, 0x24d4d51, 0x0, 0x800b0000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_75) {
  // 99698210055519078800019
  s21_decimal dec_1 = {{0x34555a93, 0xa69a9dbd, 0x151c, 0x0}};
  // -8.095968396653280477734991510
  s21_decimal dec_2 = {{0xd8c77696, 0x3386ab50, 0x1a28d3fe, 0x801b0000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_76) {
  // 5526580405902672337630127.62
  s21_decimal dec_1 = {{0x7ddf309a, 0x69981ff7, 0x1c925e4, 0x20000}};
  // -875945938145042074855114463
  s21_decimal dec_2 = {{0x114186df, 0x74b1a0e3, 0x2d490c4, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_77) {
  // -4447195879539389874643.49529
  s21_decimal dec_1 = {{0xc6e15759, 0x2b9a7b44, 0x16fdd09, 0x80050000}};
  // -7975786494684718787099179
  s21_decimal dec_2 = {{0xb6867a2b, 0x4092dbd3, 0x698f0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_78) {
  // 989112827526494103030
  s21_decimal dec_1 = {{0x4ae525f6, 0x9eb2ac17, 0x35, 0x0}};
  // 8326499475.77204790
  s21_decimal dec_2 = {{0x3b964036, 0xb8e2ab7, 0x0, 0x80000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_79) {
  // 998400054885443421304494
  s21_decimal dec_1 = {{0x8e7776ae, 0x601be81c, 0xd36b, 0x0}};
  // 5056.1203781
  s21_decimal dec_2 = {{0xc5aebe45, 0xb, 0x0, 0x70000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_80) {
  // 985849645669699846750975658
  s21_decimal dec_1 = {{0xe84db6aa, 0x61035ea2, 0x32f79c8, 0x0}};
  // -62282348784348.848094830
  s21_decimal dec_2 = {{0xbf367e6e, 0x55387956, 0xd30, 0x80090000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_81) {
  // 8968057.86363894333
  s21_decimal dec_1 = {{0x78bc1a3d, 0xc72181c, 0x0, 0xb0000}};
  // -913190788278978779449736224
  s21_decimal dec_2 = {{0x74893c20, 0xd3c9570e, 0x2f35fab, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_82) {
  // 921733018777975233
  s21_decimal dec_1 = {{0xa0279c1, 0xccaa74c, 0x0, 0x0}};
  // 0.6360352920901810496
  s21_decimal dec_2 = {{0x70787940, 0x58448348, 0x0, 0x130000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_83) {
  // 0.531499220
  s21_decimal dec_1 = {{0x1fae08d4, 0x0, 0x0, 0x90000}};
  // -819346373172997667717196
  s21_decimal dec_2 = {{0xb4c8804c, 0xdb1ba5b4, 0xad80, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_84) {
  // 82611482.88475683636520034633
  s21_decimal dec_1 = {{0xae3e2149, 0x145ae86c, 0x1ab17632, 0x140000}};
  // -997789927473468
  s21_decimal dec_2 = {{0x1230013c, 0x38b7c, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_85) {
  // 8612235745612673.091363362
  s21_decimal dec_1 = {{0x7eefe222, 0x3c3a7e26, 0x71fb6, 0x90000}};
  // 50304159.731698909177639
  s21_decimal dec_2 = {{0x86d9e727, 0xfe74611e, 0xaa6, 0xf0000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_86) {
  // -431562.959879062562011122637
  s21_decimal dec_1 = {{0xf9e08bcd, 0xeee9fa32, 0x164fb02, 0x80150000}};
  // -871608851.97480
  s21_decimal dec_2 = {{0xb999baa8, 0x4f45, 0x0, 0x80050000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_87) {
  // -827643281642348176630.0666
  s21_decimal dec_1 = {{0x4637cbfa, 0x526e94c0, 0x6d89a, 0x80040000}};
  // -8657666326163562751251034399
  s21_decimal dec_2 = {{0x6d65b11f, 0xf95bc4c2, 0x1bf97427, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_88) {
  // -6356839475982959116.6469190245
  s21_decimal dec_1 = {{0x7deeb265, 0x4cac2d, 0xcd668b31, 0x800a0000}};
  // -9619413886448630966270539941
  s21_decimal dec_2 = {{0x9303b8a5, 0xafad8a32, 0x1f14fe1f, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_89) {
  // 68838844
  s21_decimal dec_1 = {{0x41a65bc, 0x0, 0x0, 0x0}};
  // -8444836484149246.9704587620679
  s21_decimal dec_2 = {{0x9f9a3147, 0x332197f5, 0x10de0cd7, 0x800d0000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_90) {
  // 9273628276460947911198840
  s21_decimal dec_1 = {{0x2573c878, 0x656de4d8, 0x7abc4, 0x0}};
  // -36341463.0397
  s21_decimal dec_2 = {{0x9d332ffd, 0x54, 0x0, 0x80040000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_91) {
  // 8759737427106643367774640
  s21_decimal dec_1 = {{0xaa6949b0, 0x5143fb83, 0x73ef2, 0x0}};
  // -79228162514264337593535656081
  s21_decimal dec_2 = {{0xff817091, 0xffffffff, 0xffffffff, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1; // Результат слишком велик или положительная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_92) {
  // 87181926851284843264269
  s21_decimal dec_1 = {{0x3ac6790d, 0x24481199, 0x1276, 0x0}};
  // -4844.61624637243696434284100
  s21_decimal dec_2 = {{0x4f328644, 0x4bbea642, 0x190bcbd, 0x80170000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_93) {
  // -0.7051
  s21_decimal dec_1 = {{0x1b8b, 0x0, 0x0, 0x80040000}};
  // -980783210203443744466615791
  s21_decimal dec_2 = {{0x881d3def, 0x5caba441, 0x32b48ec, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_94) {
  // 0.45038895893933645511447
  s21_decimal dec_1 = {{0x32563b17, 0x903d853c, 0x989, 0x170000}};
  // -8860612009050510.58455
  s21_decimal dec_2 = {{0x71983117, 0x891bfab, 0x30, 0x80050000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_95) {
  // -7.8572993089863714
  s21_decimal dec_1 = {{0x8e0f8022, 0x11725b8, 0x0, 0x80100000}};
  // -80512945644471876515
  s21_decimal dec_2 = {{0xdf147ba3, 0x5d57717c, 0x4, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_96) {
  // -2714492891800783
  s21_decimal dec_1 = {{0x208fa4cf, 0x9a4d1, 0x0, 0x80000000}};
  // 79228162514264337592698370247
  s21_decimal dec_2 = {{0xcd9978c7, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_97) {
  // 0.769107405445535929
  s21_decimal dec_1 = {{0x3fb418b9, 0xaac6b1c, 0x0, 0x120000}};
  // -84526678529624
  s21_decimal dec_2 = {{0x66a5d658, 0x4ce0, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_98) {
  // 521.2996343116051992194108
  s21_decimal dec_1 = {{0xfe4aac3c, 0x1917b9b2, 0x44fe5, 0x160000}};
  // -924223807528756681189524
  s21_decimal dec_2 = {{0x89812894, 0x45e347ce, 0xc3b6, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_99) {
  // -1545731854.3891105271429403495
  s21_decimal dec_1 = {{0x81e31367, 0x4dea9226, 0x31f1fe85, 0x80130000}};
  // -86610737129.0
  s21_decimal dec_2 = {{0xa805af1a, 0xc9, 0x0, 0x80010000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_100) {
  // 42042256.728833435830
  s21_decimal dec_1 = {{0xd5e4a8b6, 0x477419be, 0x2, 0xc0000}};
  // -8845685363037482964831150233
  s21_decimal dec_2 = {{0x8dcfa099, 0x62eca405, 0x1c94fabc, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_101) {
  // -238041918945809525049848941
  s21_decimal dec_1 = {{0x13fef46d, 0x487eb297, 0xc4e756, 0x80000000}};
  // 79228162514264337592206144279
  s21_decimal dec_2 = {{0xb042b317, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_102) {
  // 805287289982987510058718885.04
  s21_decimal dec_1 = {{0x3420d878, 0x5f6288a9, 0x433cdaa, 0x20000}};
  // -579580873
  s21_decimal dec_2 = {{0x228bb3c9, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_103) {
  // -1188148265.41756372648
  s21_decimal dec_1 = {{0x570ad6a8, 0x70e30f3b, 0x6, 0x800b0000}};
  // -9414575736476950396434
  s21_decimal dec_2 = {{0x834fe12, 0x5d7bffc4, 0x1fe, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_104) {
  // 813896.4
  s21_decimal dec_1 = {{0x7c30d4, 0x0, 0x0, 0x10000}};
  // 41.16027333197851516553942339
  s21_decimal dec_2 = {{0xbe6c5543, 0xd548c117, 0xd4cb2b0, 0x1a0000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_105) {
  // 1350617895.463
  s21_decimal dec_1 = {{0x77199227, 0x13a, 0x0, 0x30000}};
  // -8256605233679602235766812796
  s21_decimal dec_2 = {{0xb595307c, 0x95e5544c, 0x1aadb42a, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_106) {
  // 8964957998917.57835252148
  s21_decimal dec_1 = {{0xaee471b4, 0x227b433c, 0xbdd7, 0xb0000}};
  // -91778243.5243447267361897
  s21_decimal dec_2 = {{0xbfc80469, 0x15e3da2b, 0xc259, 0x80100000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_107) {
  // -2.39423831196137956663436788
  s21_decimal dec_1 = {{0x38e125f4, 0xe5795767, 0xc60bf7, 0x801a0000}};
  // -8196.79094465594
  s21_decimal dec_2 = {{0x6941643a, 0x2e97e, 0x0, 0x800b0000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_108) {
  // 34560.59558696819466758
  s21_decimal dec_1 = {{0x7d35a206, 0x5a7611a5, 0xbb, 0x110000}};
  // -932660474403473
  s21_decimal dec_2 = {{0xf045da91, 0x3503f, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_109) {
  // -1.43595194785604186471131512
  s21_decimal dec_1 = {{0x9b53e978, 0x1b74d69e, 0x76c777, 0x801a0000}};
  // -9256911685240969647
  s21_decimal dec_2 = {{0xebf359af, 0x80772821, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_110) {
  // 83522944753248066295641.9
  s21_decimal dec_1 = {{0x67b16983, 0xe10b2f85, 0xb0dd, 0x10000}};
  // -5407209.5926932395363
  s21_decimal dec_2 = {{0x61a6d563, 0xee66acc2, 0x2, 0x800d0000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_111) {
  // 966935357073786.38483711937633
  s21_decimal dec_1 = {{0x3e7d4c61, 0xf654c279, 0x386f04a1, 0xe0000}};
  // 20709588
  s21_decimal dec_2 = {{0x13c00d4, 0x0, 0x0, 0x0}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_112) {
  // -5947586038153.628780
  s21_decimal dec_1 = {{0x73384c6c, 0x528a11fd, 0x0, 0x80060000}};
  // -86957056314359896860025
  s21_decimal dec_2 = {{0x33fbe579, 0xf3936fae, 0x1269, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_113) {
  // 79228162514264337592504260811
  s21_decimal dec_1 = {{0xc20798cb, 0xffffffff, 0xffffffff, 0x0}};
  // -15176899288535904630269886
  s21_decimal dec_2 = {{0xb59ae7be, 0x5be828ba, 0xc8dd5, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1; // Результат слишком велик или положительная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_114) {
  // 841242802080531787547
  s21_decimal dec_1 = {{0x9856af1b, 0x9a96cf65, 0x2d, 0x0}};
  // -83744.002178579281418704
  s21_decimal dec_2 = {{0xacaf19d0, 0xc57e0ead, 0x11bb, 0x80120000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_115) {
  // 817204857036107878806056
  s21_decimal dec_1 = {{0x821cb228, 0xc399f971, 0xad0c, 0x0}};
  // 87308770.514827695070181
  s21_decimal dec_2 = {{0x539f9be5, 0x497498b, 0x127d, 0xf0000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_116) {
  // 0.0051577
  s21_decimal dec_1 = {{0xc979, 0x0, 0x0, 0x70000}};
  // -874168166662088192.22437074791
  s21_decimal dec_2 = {{0x87ca9767, 0x1043ace9, 0x1a757ef7, 0x800b0000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_117) {
  // -7.70190628948586053533578909
  s21_decimal dec_1 = {{0x85d2369d, 0xa81d9a4d, 0x27d1635, 0x801a0000}};
  // -946711808701279590
  s21_decimal dec_2 = {{0xc64ead66, 0xd23655f, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_118) {
  // 932515559117929259814
  s21_decimal dec_1 = {{0xacf32326, 0x8d40c856, 0x32, 0x0}};
  // -80.6507530379613526
  s21_decimal dec_2 = {{0x68f45556, 0xb314a53, 0x0, 0x80100000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_119) {
  // -48.521299704039535472174
  s21_decimal dec_1 = {{0xd6c6ee2e, 0x584d2bf5, 0xa46, 0x80150000}};
  // -856714361517669744843467498
  s21_decimal dec_2 = {{0x32a0aaea, 0x990ca9ac, 0x2c4a852, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_120) {
  // 3828033.0330781368127348806
  s21_decimal dec_1 = {{0x5746046, 0xdd8b2b2e, 0x1faa2c, 0x130000}};
  // -9479469087076122109701553650
  s21_decimal dec_2 = {{0xf16c7df2, 0xe92dd5fa, 0x1ea13ba8, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_121) {
  // 81223290222581700668
  s21_decimal dec_1 = {{0x3570d83c, 0x6733181e, 0x4, 0x0}};
  // 58.014280544863873303607
  s21_decimal dec_2 = {{0xd2728437, 0xf5e00eb8, 0xc48, 0x150000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_122) {
  // -0.1774374072901440954
  s21_decimal dec_1 = {{0x79f415ba, 0x189fd7d1, 0x0, 0x80130000}};
  // -920822135768
  s21_decimal dec_2 = {{0x6546bbd8, 0xd6, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_123) {
  // -539606.6654281781203103320940
  s21_decimal dec_1 = {{0x7e130b6c, 0x78f22341, 0x116f858f, 0x80160000}};
  // -85582439823671606476453039
  s21_decimal dec_2 = {{0xecd6b4af, 0x5bf2adc8, 0x46cac9, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_124) {
  // 175.999280453157940122448
  s21_decimal dec_1 = {{0xadc45350, 0xf0ab1ffe, 0x2544, 0x150000}};
  // -8085245482.93
  s21_decimal dec_2 = {{0x3fd188c5, 0xbc, 0x0, 0x80020000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_125) {
  // 79228162514264337593174145564
  s21_decimal dec_1 = {{0xe9f53a1c, 0xffffffff, 0xffffffff, 0x0}};
  // -1220633148622
  s21_decimal dec_2 = {{0x3367bcce, 0x11c, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1; // Результат слишком велик или положительная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_126) {
  // 9382738179321032363011.285
  s21_decimal dec_1 = {{0xccc8ecd5, 0x4182470c, 0x7c2df, 0x30000}};
  // 7262738.57819797
  s21_decimal dec_2 = {{0xcf4e1495, 0x2948a, 0x0, 0x80000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_127) {
  // 98067443720.7165211021958
  s21_decimal dec_1 = {{0xa1709286, 0x77bf8410, 0xcfaa, 0xd0000}};
  // 4504835215.959848706625614704
  s21_decimal dec_2 = {{0x7d65b370, 0x6442c35f, 0xe8e4ff6, 0x120000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_128) {
  // -917786457540236.98198797961898
  s21_decimal dec_1 = {{0x90d34aaa, 0xb6e981e1, 0x288d8433, 0x800e0000}};
  // -8417239169241323389678999
  s21_decimal dec_2 = {{0x32f17597, 0x731e4c8c, 0x6f66b, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_129) {
  // 9547911994982032272196
  s21_decimal dec_1 = {{0x2b44eb44, 0x97e58c6e, 0x205, 0x0}};
  // 77.5428483148507440750
  s21_decimal dec_2 = {{0x2c2e66e, 0x93b6107, 0x2a, 0x130000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_130) {
  // 1254.669676920
  s21_decimal dec_1 = {{0x2023f178, 0x124, 0x0, 0x90000}};
  // -93724585374185.050534726678205
  s21_decimal dec_2 = {{0xff9936bd, 0xe6549846, 0x2ed728f1, 0x800f0000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_131) {
  // 15882533.3131316626357714490
  s21_decimal dec_1 = {{0x2fdb7e3a, 0x8fb3accb, 0x836092, 0x130000}};
  // -866476772091026078412266
  s21_decimal dec_2 = {{0xe6dbadea, 0xccc89218, 0xb77b, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_132) {
  // -68612611
  s21_decimal dec_1 = {{0x416f203, 0x0, 0x0, 0x80000000}};
  // -9737213856.7484277457281379207
  s21_decimal dec_2 = {{0xb2b86b87, 0xb8a734bb, 0x3aa05860, 0x80130000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_133) {
  // 7977595177488203820991320758
  s21_decimal dec_1 = {{0xd33112b6, 0x21d34072, 0x19c6e97d, 0x0}};
  // -26.6906011701070019099317430
  s21_decimal dec_2 = {{0x28a354b6, 0xe3047a5f, 0xdcc78b, 0x80190000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_134) {
  // 676994602061020.62131854904
  s21_decimal dec_1 = {{0x92683e38, 0x1771a104, 0x37ffeb, 0xb0000}};
  // -8974527699836656270888
  s21_decimal dec_2 = {{0x7365be28, 0x829751ea, 0x1e6, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_135) {
  // -9060885685757.1403
  s21_decimal dec_1 = {{0x767ff04b, 0x141e846, 0x0, 0x80040000}};
  // -79482469366896900460532825
  s21_decimal dec_2 = {{0xff985459, 0x4c509dcc, 0x41bf11, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_136) {
  // 89586555231859000
  s21_decimal dec_1 = {{0x513ef138, 0x13e467f, 0x0, 0x0}};
  // 0.09870796111663242912179295
  s21_decimal dec_2 = {{0x6fefa45f, 0xedee8e8a, 0x82a38, 0x1a0000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_137) {
  // 838733255554189016507874598.10
  s21_decimal dec_1 = {{0xc2eee2e2, 0x9d85a9d, 0xf026389, 0x20000}};
  // 2258205106886125646294970
  s21_decimal dec_2 = {{0x18e4afba, 0x8b4cc580, 0x1de31, 0x0}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_138) {
  // -0.3
  s21_decimal dec_1 = {{0x3, 0x0, 0x0, 0x80010000}};
  // -8803734352283313648893554923
  s21_decimal dec_2 = {{0xf591f0eb, 0x895acbe4, 0x1c724743, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_139) {
  // 7503.68
  s21_decimal dec_1 = {{0xb7320, 0x0, 0x0, 0x20000}};
  // -8407232444711902023398937046
  s21_decimal dec_2 = {{0x9d0351d6, 0xeaf59b8, 0x1b2a4cb8, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_140) {
  // 846464584708252
  s21_decimal dec_1 = {{0xe4e2f09c, 0x301da, 0x0, 0x0}};
  // 65462644.35913233163353
  s21_decimal dec_2 = {{0x1d266459, 0xdfab34de, 0x162, 0xe0000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_141) {
  // 8627753232479340066.0269129196
  s21_decimal dec_1 = {{0xbf6ddec, 0x2955e5da, 0x16c71a1f, 0xa0000}};
  // 80167.3011
  s21_decimal dec_2 = {{0x2fc88f33, 0x0, 0x0, 0x40000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_142) {
  // 0.9496182403229759996
  s21_decimal dec_1 = {{0x32d339fc, 0x83c93795, 0x0, 0x130000}};
  // -8688133360371.1164
  s21_decimal dec_2 = {{0xd30fb8bc, 0x134aa1c, 0x0, 0x80040000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_143) {
  // -0.81511059951955363978241226
  s21_decimal dec_1 = {{0x65f64ca, 0x6a00d6eb, 0x436ca3, 0x801a0000}};
  // -894190875262998.01341
  s21_decimal dec_2 = {{0xb0a996fd, 0xd8f06a57, 0x4, 0x80050000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_144) {
  // 943663110490456391997
  s21_decimal dec_1 = {{0xe7d9013d, 0x27f4d73f, 0x33, 0x0}};
  // 688757.0223493093
  s21_decimal dec_2 = {{0x68896fe5, 0x187835, 0x0, 0xa0000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_145) {
  // 83957647144753876018672
  s21_decimal dec_1 = {{0x83bda5f0, 0x5a697379, 0x11c7, 0x0}};
  // 91.414923288008655474018252657
  s21_decimal dec_2 = {{0x67987771, 0x529ed092, 0x2760a6f9, 0x1b0000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_146) {
  // 9804262675085411874671
  s21_decimal dec_1 = {{0xbf01f76f, 0x7d7a1dc7, 0x213, 0x0}};
  // 9097936393.56985400166575077
  s21_decimal dec_2 = {{0x9c29ebe5, 0x3e54076, 0x2f0904c, 0x110000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_147) {
  // 7906.464935
  s21_decimal dec_1 = {{0xd74314a7, 0x1, 0x0, 0x60000}};
  // -889.30530403521304545319676745
  s21_decimal dec_2 = {{0xdf3f6b49, 0x3075f862, 0x1f599c51, 0x801a0000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_148) {
  // -23187.5159047
  s21_decimal dec_1 = {{0xfcd62407, 0x35, 0x0, 0x80070000}};
  // -9572174561479956337354619850
  s21_decimal dec_2 = {{0xfa9c3bca, 0xbf940705, 0x1eedeace, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_149) {
  // 87775598303286992567502
  s21_decimal dec_1 = {{0xd13ffcce, 0x5320c1c9, 0x1296, 0x0}};
  // 0.9943367605261
  s21_decimal dec_2 = {{0x1ee4dc0d, 0x90b, 0x0, 0xd0000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_150) {
  // -243180852812.374779212728
  s21_decimal dec_1 = {{0x26f5b3b8, 0xdc46357a, 0x337e, 0x800c0000}};
  // -80706932351922506.36496
  s21_decimal dec_2 = {{0xbe3e18d0, 0x835e410a, 0x1b5, 0x80050000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_151) {
  // 79228162514264337592992135116
  s21_decimal dec_1 = {{0xdf1bf7cc, 0xffffffff, 0xffffffff, 0x0}};
  // -4577011303738.2709082944271
  s21_decimal dec_2 = {{0x505730f, 0xccac279a, 0x25dc32, 0x800d0000}};
  s21_decimal result;
  // overflow
  int check = 1; // Результат слишком велик или положительная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_152) {
  // 85474503638597287030829747.970
  s21_decimal dec_1 = {{0x8f260f02, 0xdab7c51c, 0x142eda2e, 0x30000}};
  // 61
  s21_decimal dec_2 = {{0x3d, 0x0, 0x0, 0x0}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_153) {
  // 92666116851050761007436750
  s21_decimal dec_1 = {{0x593c93ce, 0x42a20dbb, 0x4ca6d0, 0x0}};
  // -3395.5219918073053051310697
  s21_decimal dec_2 = {{0x4f675269, 0x28fd9e0b, 0x1c164c, 0x80160000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_154) {
  // 79137.604169475596
  s21_decimal dec_1 = {{0x50e5a60c, 0x119273b, 0x0, 0xc0000}};
  // -92806842608673527518
  s21_decimal dec_2 = {{0xf9296de, 0x7f423a4, 0x5, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_155) {
  // 0.6754217770999522220720974561
  s21_decimal dec_1 = {{0xd196eae1, 0x9b36e92, 0x15d2f53f, 0x1c0000}};
  // -87294248749598349914
  s21_decimal dec_2 = {{0xa6659a5a, 0xbb7378bb, 0x4, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_156) {
  // 12404123074.71713089887
  s21_decimal dec_1 = {{0xd212b95f, 0x3e2dc5a8, 0x43, 0xb0000}};
  // -9280641189125867299695955
  s21_decimal dec_2 = {{0xb3a06d53, 0x9124a595, 0x7ad40, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_157) {
  // 994830406.327759634127
  s21_decimal dec_1 = {{0xbba17ecf, 0xee0b97b7, 0x35, 0xc0000}};
  // 3810514.3254744196982431456263
  s21_decimal dec_2 = {{0x56569c07, 0xfbb6597f, 0x7b1fd5f2, 0x160000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_158) {
  // -0.4
  s21_decimal dec_1 = {{0x4, 0x0, 0x0, 0x80010000}};
  // -9599011040742691244477018150
  s21_decimal dec_2 = {{0x14587026, 0x344b977b, 0x1f041da7, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_159) {
  // -79228162514264337592030965008
  s21_decimal dec_1 = {{0xa5d1ad10, 0xffffffff, 0xffffffff, 0x80000000}};
  // 194018450319363858434735.826
  s21_decimal dec_2 = {{0x9f21bed2, 0x44554786, 0xa07d01, 0x30000}};
  s21_decimal result;
  // overflow
  int check = 2; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_160) {
  // 95197202354147453013370
  s21_decimal dec_1 = {{0xd3178d7a, 0xa692fcb3, 0x1428, 0x0}};
  // 4600822.42444668992260637286
  s21_decimal dec_2 = {{0x861b8266, 0x56ca624a, 0x17c9234, 0x140000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_161) {
  // 0.28203124836768564201707
  s21_decimal dec_1 = {{0x42f948eb, 0xe4fb647b, 0x5f8, 0x170000}};
  // -95588637356281846201235379
  s21_decimal dec_2 = {{0x2d12b7b3, 0x6a119025, 0x4f11ae, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_162) {
  // 85695161484094264068350
  s21_decimal dec_1 = {{0xf71848fe, 0x8b44695b, 0x1225, 0x0}};
  // 4.8985590585
  s21_decimal dec_2 = {{0x67c4cb39, 0xb, 0x0, 0xa0000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_163) {
  // 1.84735401372651374728408403
  s21_decimal dec_1 = {{0x88c36d53, 0x2cd751c2, 0x98cf3e, 0x1a0000}};
  // -8882305881.782444982265172646
  s21_decimal dec_2 = {{0x15f7d2a6, 0xaf7aa32e, 0x1cb3456e, 0x80120000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_164) {
  // 3793546620709133.44512512752
  s21_decimal dec_1 = {{0xb658d2f0, 0x7020134d, 0x139cb79, 0xb0000}};
  // -9805674292290081095
  s21_decimal dec_2 = {{0xef215147, 0x8814c0d0, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_165) {
  // -65114.1352748545389
  s21_decimal dec_1 = {{0x4524f56d, 0x909519c, 0x0, 0x800d0000}};
  // -8626400875462536638575131
  s21_decimal dec_2 = {{0xde01321b, 0x20e51286, 0x722b6, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_166) {
  // 8501263771679356833770014925
  s21_decimal dec_1 = {{0xe2488cd, 0x81a063bd, 0x1b7814a0, 0x0}};
  // 9.4328
  s21_decimal dec_2 = {{0x17078, 0x0, 0x0, 0x40000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

Suite *s21_sub_cases500(void) {
  Suite *c = suite_create("s21_sub_cases500");
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
  tcase_add_test(tc, s21_sub_101);
  tcase_add_test(tc, s21_sub_102);
  tcase_add_test(tc, s21_sub_103);
  tcase_add_test(tc, s21_sub_104);
  tcase_add_test(tc, s21_sub_105);
  tcase_add_test(tc, s21_sub_106);
  tcase_add_test(tc, s21_sub_107);
  tcase_add_test(tc, s21_sub_108);
  tcase_add_test(tc, s21_sub_109);
  tcase_add_test(tc, s21_sub_110);
  tcase_add_test(tc, s21_sub_111);
  tcase_add_test(tc, s21_sub_112);
  tcase_add_test(tc, s21_sub_113);
  tcase_add_test(tc, s21_sub_114);
  tcase_add_test(tc, s21_sub_115);
  tcase_add_test(tc, s21_sub_116);
  tcase_add_test(tc, s21_sub_117);
  tcase_add_test(tc, s21_sub_118);
  tcase_add_test(tc, s21_sub_119);
  tcase_add_test(tc, s21_sub_120);
  tcase_add_test(tc, s21_sub_121);
  tcase_add_test(tc, s21_sub_122);
  tcase_add_test(tc, s21_sub_123);
  tcase_add_test(tc, s21_sub_124);
  tcase_add_test(tc, s21_sub_125);
  tcase_add_test(tc, s21_sub_126);
  tcase_add_test(tc, s21_sub_127);
  tcase_add_test(tc, s21_sub_128);
  tcase_add_test(tc, s21_sub_129);
  tcase_add_test(tc, s21_sub_130);
  tcase_add_test(tc, s21_sub_131);
  tcase_add_test(tc, s21_sub_132);
  tcase_add_test(tc, s21_sub_133);
  tcase_add_test(tc, s21_sub_134);
  tcase_add_test(tc, s21_sub_135);
  tcase_add_test(tc, s21_sub_136);
  tcase_add_test(tc, s21_sub_137);
  tcase_add_test(tc, s21_sub_138);
  tcase_add_test(tc, s21_sub_139);
  tcase_add_test(tc, s21_sub_140);
  tcase_add_test(tc, s21_sub_141);
  tcase_add_test(tc, s21_sub_142);
  tcase_add_test(tc, s21_sub_143);
  tcase_add_test(tc, s21_sub_144);
  tcase_add_test(tc, s21_sub_145);
  tcase_add_test(tc, s21_sub_146);
  tcase_add_test(tc, s21_sub_147);
  tcase_add_test(tc, s21_sub_148);
  tcase_add_test(tc, s21_sub_149);
  tcase_add_test(tc, s21_sub_150);
  tcase_add_test(tc, s21_sub_151);
  tcase_add_test(tc, s21_sub_152);
  tcase_add_test(tc, s21_sub_153);
  tcase_add_test(tc, s21_sub_154);
  tcase_add_test(tc, s21_sub_155);
  tcase_add_test(tc, s21_sub_156);
  tcase_add_test(tc, s21_sub_157);
  tcase_add_test(tc, s21_sub_158);
  tcase_add_test(tc, s21_sub_159);
  tcase_add_test(tc, s21_sub_160);
  tcase_add_test(tc, s21_sub_161);
  tcase_add_test(tc, s21_sub_162);
  tcase_add_test(tc, s21_sub_163);
  tcase_add_test(tc, s21_sub_164);
  tcase_add_test(tc, s21_sub_165);
  tcase_add_test(tc, s21_sub_166);
  tcase_add_test(tc, s21_sub_167);
  tcase_add_test(tc, s21_sub_168);
  tcase_add_test(tc, s21_sub_169);
  tcase_add_test(tc, s21_sub_170);
  tcase_add_test(tc, s21_sub_171);
  tcase_add_test(tc, s21_sub_172);
  tcase_add_test(tc, s21_sub_173);
  tcase_add_test(tc, s21_sub_174);
  tcase_add_test(tc, s21_sub_175);
  tcase_add_test(tc, s21_sub_176);
  tcase_add_test(tc, s21_sub_177);
  tcase_add_test(tc, s21_sub_178);
  tcase_add_test(tc, s21_sub_179);
  tcase_add_test(tc, s21_sub_180);
  tcase_add_test(tc, s21_sub_181);
  tcase_add_test(tc, s21_sub_182);
  tcase_add_test(tc, s21_sub_183);
  tcase_add_test(tc, s21_sub_184);
  tcase_add_test(tc, s21_sub_185);
  tcase_add_test(tc, s21_sub_186);
  tcase_add_test(tc, s21_sub_187);
  tcase_add_test(tc, s21_sub_188);
  tcase_add_test(tc, s21_sub_189);
  tcase_add_test(tc, s21_sub_190);
  tcase_add_test(tc, s21_sub_191);
  tcase_add_test(tc, s21_sub_192);
  tcase_add_test(tc, s21_sub_193);
  tcase_add_test(tc, s21_sub_194);
  tcase_add_test(tc, s21_sub_195);
  tcase_add_test(tc, s21_sub_196);
  tcase_add_test(tc, s21_sub_197);
  tcase_add_test(tc, s21_sub_198);
  tcase_add_test(tc, s21_sub_199);
  tcase_add_test(tc, s21_sub_200);
  tcase_add_test(tc, s21_sub_201);
  tcase_add_test(tc, s21_sub_202);
  tcase_add_test(tc, s21_sub_203);
  tcase_add_test(tc, s21_sub_204);
  tcase_add_test(tc, s21_sub_205);
  tcase_add_test(tc, s21_sub_206);
  tcase_add_test(tc, s21_sub_207);
  tcase_add_test(tc, s21_sub_208);
  tcase_add_test(tc, s21_sub_209);
  tcase_add_test(tc, s21_sub_210);
  tcase_add_test(tc, s21_sub_211);
  tcase_add_test(tc, s21_sub_212);
  tcase_add_test(tc, s21_sub_213);
  tcase_add_test(tc, s21_sub_214);
  tcase_add_test(tc, s21_sub_215);
  tcase_add_test(tc, s21_sub_216);
  tcase_add_test(tc, s21_sub_217);
  tcase_add_test(tc, s21_sub_218);
  tcase_add_test(tc, s21_sub_219);
  tcase_add_test(tc, s21_sub_220);
  tcase_add_test(tc, s21_sub_221);
  tcase_add_test(tc, s21_sub_222);
  tcase_add_test(tc, s21_sub_223);
  tcase_add_test(tc, s21_sub_224);
  tcase_add_test(tc, s21_sub_225);
  tcase_add_test(tc, s21_sub_226);
  tcase_add_test(tc, s21_sub_227);
  tcase_add_test(tc, s21_sub_228);
  tcase_add_test(tc, s21_sub_229);
  tcase_add_test(tc, s21_sub_230);
  tcase_add_test(tc, s21_sub_231);
  tcase_add_test(tc, s21_sub_232);
  tcase_add_test(tc, s21_sub_233);
  tcase_add_test(tc, s21_sub_234);
  tcase_add_test(tc, s21_sub_235);
  tcase_add_test(tc, s21_sub_236);
  tcase_add_test(tc, s21_sub_237);
  tcase_add_test(tc, s21_sub_238);
  tcase_add_test(tc, s21_sub_239);
  tcase_add_test(tc, s21_sub_240);
  tcase_add_test(tc, s21_sub_241);
  tcase_add_test(tc, s21_sub_242);
  tcase_add_test(tc, s21_sub_243);
  tcase_add_test(tc, s21_sub_244);
  tcase_add_test(tc, s21_sub_245);
  tcase_add_test(tc, s21_sub_246);
  tcase_add_test(tc, s21_sub_247);
  tcase_add_test(tc, s21_sub_248);
  tcase_add_test(tc, s21_sub_249);
  tcase_add_test(tc, s21_sub_250);
  tcase_add_test(tc, s21_sub_251);
  tcase_add_test(tc, s21_sub_252);
  tcase_add_test(tc, s21_sub_253);
  tcase_add_test(tc, s21_sub_254);
  tcase_add_test(tc, s21_sub_255);
  tcase_add_test(tc, s21_sub_256);
  tcase_add_test(tc, s21_sub_257);
  tcase_add_test(tc, s21_sub_258);
  tcase_add_test(tc, s21_sub_259);
  tcase_add_test(tc, s21_sub_260);
  tcase_add_test(tc, s21_sub_261);
  tcase_add_test(tc, s21_sub_262);
  tcase_add_test(tc, s21_sub_263);
  tcase_add_test(tc, s21_sub_264);
  tcase_add_test(tc, s21_sub_265);
  tcase_add_test(tc, s21_sub_266);
  tcase_add_test(tc, s21_sub_267);
  tcase_add_test(tc, s21_sub_268);
  tcase_add_test(tc, s21_sub_269);
  tcase_add_test(tc, s21_sub_270);
  tcase_add_test(tc, s21_sub_271);
  tcase_add_test(tc, s21_sub_272);
  tcase_add_test(tc, s21_sub_273);
  tcase_add_test(tc, s21_sub_274);
  tcase_add_test(tc, s21_sub_275);
  tcase_add_test(tc, s21_sub_276);
  tcase_add_test(tc, s21_sub_277);
  tcase_add_test(tc, s21_sub_278);
  tcase_add_test(tc, s21_sub_279);
  tcase_add_test(tc, s21_sub_280);
  tcase_add_test(tc, s21_sub_281);
  tcase_add_test(tc, s21_sub_282);
  tcase_add_test(tc, s21_sub_283);
  tcase_add_test(tc, s21_sub_284);
  tcase_add_test(tc, s21_sub_285);
  tcase_add_test(tc, s21_sub_286);
  tcase_add_test(tc, s21_sub_287);
  tcase_add_test(tc, s21_sub_288);
  tcase_add_test(tc, s21_sub_289);
  tcase_add_test(tc, s21_sub_290);
  tcase_add_test(tc, s21_sub_291);
  tcase_add_test(tc, s21_sub_292);
  tcase_add_test(tc, s21_sub_293);
  tcase_add_test(tc, s21_sub_294);
  tcase_add_test(tc, s21_sub_295);
  tcase_add_test(tc, s21_sub_296);
  tcase_add_test(tc, s21_sub_297);
  tcase_add_test(tc, s21_sub_298);
  tcase_add_test(tc, s21_sub_299);
  tcase_add_test(tc, s21_sub_300);
  tcase_add_test(tc, s21_sub_301);
  tcase_add_test(tc, s21_sub_302);
  tcase_add_test(tc, s21_sub_303);
  tcase_add_test(tc, s21_sub_304);
  tcase_add_test(tc, s21_sub_305);
  tcase_add_test(tc, s21_sub_306);
  tcase_add_test(tc, s21_sub_307);
  tcase_add_test(tc, s21_sub_308);
  tcase_add_test(tc, s21_sub_309);
  tcase_add_test(tc, s21_sub_310);
  tcase_add_test(tc, s21_sub_311);
  tcase_add_test(tc, s21_sub_312);
  tcase_add_test(tc, s21_sub_313);
  tcase_add_test(tc, s21_sub_314);
  tcase_add_test(tc, s21_sub_315);
  tcase_add_test(tc, s21_sub_316);
  tcase_add_test(tc, s21_sub_317);
  tcase_add_test(tc, s21_sub_318);
  tcase_add_test(tc, s21_sub_319);
  tcase_add_test(tc, s21_sub_320);
  tcase_add_test(tc, s21_sub_321);
  tcase_add_test(tc, s21_sub_322);
  tcase_add_test(tc, s21_sub_323);
  tcase_add_test(tc, s21_sub_324);
  tcase_add_test(tc, s21_sub_325);
  tcase_add_test(tc, s21_sub_326);
  tcase_add_test(tc, s21_sub_327);
  tcase_add_test(tc, s21_sub_328);
  tcase_add_test(tc, s21_sub_329);
  tcase_add_test(tc, s21_sub_330);
  tcase_add_test(tc, s21_sub_331);
  tcase_add_test(tc, s21_sub_332);
  tcase_add_test(tc, s21_sub_333);
  tcase_add_test(tc, s21_sub_334);
  tcase_add_test(tc, s21_sub_335);
  tcase_add_test(tc, s21_sub_336);
  tcase_add_test(tc, s21_sub_337);
  tcase_add_test(tc, s21_sub_338);
  tcase_add_test(tc, s21_sub_339);
  tcase_add_test(tc, s21_sub_340);
  tcase_add_test(tc, s21_sub_341);
  tcase_add_test(tc, s21_sub_342);
  tcase_add_test(tc, s21_sub_343);
  tcase_add_test(tc, s21_sub_344);
  tcase_add_test(tc, s21_sub_345);
  tcase_add_test(tc, s21_sub_346);
  tcase_add_test(tc, s21_sub_347);
  tcase_add_test(tc, s21_sub_348);
  tcase_add_test(tc, s21_sub_349);
  tcase_add_test(tc, s21_sub_350);
  tcase_add_test(tc, s21_sub_351);
  tcase_add_test(tc, s21_sub_352);
  tcase_add_test(tc, s21_sub_353);
  tcase_add_test(tc, s21_sub_354);
  tcase_add_test(tc, s21_sub_355);
  tcase_add_test(tc, s21_sub_356);
  tcase_add_test(tc, s21_sub_357);
  tcase_add_test(tc, s21_sub_358);
  tcase_add_test(tc, s21_sub_359);
  tcase_add_test(tc, s21_sub_360);
  tcase_add_test(tc, s21_sub_361);
  tcase_add_test(tc, s21_sub_362);
  tcase_add_test(tc, s21_sub_363);
  tcase_add_test(tc, s21_sub_364);
  tcase_add_test(tc, s21_sub_365);
  tcase_add_test(tc, s21_sub_366);
  tcase_add_test(tc, s21_sub_367);
  tcase_add_test(tc, s21_sub_368);
  tcase_add_test(tc, s21_sub_369);
  tcase_add_test(tc, s21_sub_370);
  tcase_add_test(tc, s21_sub_371);
  tcase_add_test(tc, s21_sub_372);
  tcase_add_test(tc, s21_sub_373);
  tcase_add_test(tc, s21_sub_374);
  tcase_add_test(tc, s21_sub_375);
  tcase_add_test(tc, s21_sub_376);
  tcase_add_test(tc, s21_sub_377);
  tcase_add_test(tc, s21_sub_378);
  tcase_add_test(tc, s21_sub_379);
  tcase_add_test(tc, s21_sub_380);
  tcase_add_test(tc, s21_sub_381);
  tcase_add_test(tc, s21_sub_382);
  tcase_add_test(tc, s21_sub_383);
  tcase_add_test(tc, s21_sub_384);
  tcase_add_test(tc, s21_sub_385);
  tcase_add_test(tc, s21_sub_386);
  tcase_add_test(tc, s21_sub_387);
  tcase_add_test(tc, s21_sub_388);
  tcase_add_test(tc, s21_sub_389);
  tcase_add_test(tc, s21_sub_390);
  tcase_add_test(tc, s21_sub_391);
  tcase_add_test(tc, s21_sub_392);
  tcase_add_test(tc, s21_sub_393);
  tcase_add_test(tc, s21_sub_394);
  tcase_add_test(tc, s21_sub_395);
  tcase_add_test(tc, s21_sub_396);
  tcase_add_test(tc, s21_sub_397);
  tcase_add_test(tc, s21_sub_398);
  tcase_add_test(tc, s21_sub_399);
  tcase_add_test(tc, s21_sub_400);
  tcase_add_test(tc, s21_sub_401);
  tcase_add_test(tc, s21_sub_402);
  tcase_add_test(tc, s21_sub_403);
  tcase_add_test(tc, s21_sub_404);
  tcase_add_test(tc, s21_sub_405);
  tcase_add_test(tc, s21_sub_406);
  tcase_add_test(tc, s21_sub_407);
  tcase_add_test(tc, s21_sub_408);
  tcase_add_test(tc, s21_sub_409);
  tcase_add_test(tc, s21_sub_410);
  tcase_add_test(tc, s21_sub_411);
  tcase_add_test(tc, s21_sub_412);
  tcase_add_test(tc, s21_sub_413);
  tcase_add_test(tc, s21_sub_414);
  tcase_add_test(tc, s21_sub_415);
  tcase_add_test(tc, s21_sub_416);
  tcase_add_test(tc, s21_sub_417);
  tcase_add_test(tc, s21_sub_418);
  tcase_add_test(tc, s21_sub_419);
  tcase_add_test(tc, s21_sub_420);
  tcase_add_test(tc, s21_sub_421);
  tcase_add_test(tc, s21_sub_422);
  tcase_add_test(tc, s21_sub_423);
  tcase_add_test(tc, s21_sub_424);
  tcase_add_test(tc, s21_sub_425);
  tcase_add_test(tc, s21_sub_426);
  tcase_add_test(tc, s21_sub_427);
  tcase_add_test(tc, s21_sub_428);
  tcase_add_test(tc, s21_sub_429);
  tcase_add_test(tc, s21_sub_430);
  tcase_add_test(tc, s21_sub_431);
  tcase_add_test(tc, s21_sub_432);
  tcase_add_test(tc, s21_sub_433);
  tcase_add_test(tc, s21_sub_434);
  tcase_add_test(tc, s21_sub_435);
  tcase_add_test(tc, s21_sub_436);
  tcase_add_test(tc, s21_sub_437);
  tcase_add_test(tc, s21_sub_438);
  tcase_add_test(tc, s21_sub_439);
  tcase_add_test(tc, s21_sub_440);
  tcase_add_test(tc, s21_sub_441);
  tcase_add_test(tc, s21_sub_442);
  tcase_add_test(tc, s21_sub_443);
  tcase_add_test(tc, s21_sub_444);
  tcase_add_test(tc, s21_sub_445);
  tcase_add_test(tc, s21_sub_446);
  tcase_add_test(tc, s21_sub_447);
  tcase_add_test(tc, s21_sub_448);
  tcase_add_test(tc, s21_sub_449);
  tcase_add_test(tc, s21_sub_450);
  tcase_add_test(tc, s21_sub_451);
  tcase_add_test(tc, s21_sub_452);
  tcase_add_test(tc, s21_sub_453);
  tcase_add_test(tc, s21_sub_454);
  tcase_add_test(tc, s21_sub_455);
  tcase_add_test(tc, s21_sub_456);
  tcase_add_test(tc, s21_sub_457);
  tcase_add_test(tc, s21_sub_458);
  tcase_add_test(tc, s21_sub_459);
  tcase_add_test(tc, s21_sub_460);
  tcase_add_test(tc, s21_sub_461);
  tcase_add_test(tc, s21_sub_462);
  tcase_add_test(tc, s21_sub_463);
  tcase_add_test(tc, s21_sub_464);
  tcase_add_test(tc, s21_sub_465);
  tcase_add_test(tc, s21_sub_466);
  tcase_add_test(tc, s21_sub_467);
  tcase_add_test(tc, s21_sub_468);
  tcase_add_test(tc, s21_sub_469);
  tcase_add_test(tc, s21_sub_470);
  tcase_add_test(tc, s21_sub_471);
  tcase_add_test(tc, s21_sub_472);
  tcase_add_test(tc, s21_sub_473);
  tcase_add_test(tc, s21_sub_474);
  tcase_add_test(tc, s21_sub_475);
  tcase_add_test(tc, s21_sub_476);
  tcase_add_test(tc, s21_sub_477);
  tcase_add_test(tc, s21_sub_478);
  tcase_add_test(tc, s21_sub_479);
  tcase_add_test(tc, s21_sub_480);
  tcase_add_test(tc, s21_sub_481);
  tcase_add_test(tc, s21_sub_482);
  tcase_add_test(tc, s21_sub_483);
  tcase_add_test(tc, s21_sub_484);
  tcase_add_test(tc, s21_sub_485);
  tcase_add_test(tc, s21_sub_486);
  tcase_add_test(tc, s21_sub_487);
  tcase_add_test(tc, s21_sub_488);
  tcase_add_test(tc, s21_sub_489);
  tcase_add_test(tc, s21_sub_490);
  tcase_add_test(tc, s21_sub_491);
  tcase_add_test(tc, s21_sub_492);
  tcase_add_test(tc, s21_sub_493);
  tcase_add_test(tc, s21_sub_494);
  tcase_add_test(tc, s21_sub_495);
  tcase_add_test(tc, s21_sub_496);
  tcase_add_test(tc, s21_sub_497);
  tcase_add_test(tc, s21_sub_498);
  tcase_add_test(tc, s21_sub_499);
  tcase_add_test(tc, s21_sub_500);
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
  tcase_add_test(tc, fail_s21_sub_34);
  tcase_add_test(tc, fail_s21_sub_35);
  tcase_add_test(tc, fail_s21_sub_36);
  tcase_add_test(tc, fail_s21_sub_37);
  tcase_add_test(tc, fail_s21_sub_38);
  tcase_add_test(tc, fail_s21_sub_39);
  tcase_add_test(tc, fail_s21_sub_40);
  tcase_add_test(tc, fail_s21_sub_41);
  tcase_add_test(tc, fail_s21_sub_42);
  tcase_add_test(tc, fail_s21_sub_43);
  tcase_add_test(tc, fail_s21_sub_44);
  tcase_add_test(tc, fail_s21_sub_45);
  tcase_add_test(tc, fail_s21_sub_46);
  tcase_add_test(tc, fail_s21_sub_47);
  tcase_add_test(tc, fail_s21_sub_48);
  tcase_add_test(tc, fail_s21_sub_49);
  tcase_add_test(tc, fail_s21_sub_50);
  tcase_add_test(tc, fail_s21_sub_51);
  tcase_add_test(tc, fail_s21_sub_52);
  tcase_add_test(tc, fail_s21_sub_53);
  tcase_add_test(tc, fail_s21_sub_54);
  tcase_add_test(tc, fail_s21_sub_55);
  tcase_add_test(tc, fail_s21_sub_56);
  tcase_add_test(tc, fail_s21_sub_57);
  tcase_add_test(tc, fail_s21_sub_58);
  tcase_add_test(tc, fail_s21_sub_59);
  tcase_add_test(tc, fail_s21_sub_60);
  tcase_add_test(tc, fail_s21_sub_61);
  tcase_add_test(tc, fail_s21_sub_62);
  tcase_add_test(tc, fail_s21_sub_63);
  tcase_add_test(tc, fail_s21_sub_64);
  tcase_add_test(tc, fail_s21_sub_65);
  tcase_add_test(tc, fail_s21_sub_66);
  tcase_add_test(tc, fail_s21_sub_67);
  tcase_add_test(tc, fail_s21_sub_68);
  tcase_add_test(tc, fail_s21_sub_69);
  tcase_add_test(tc, fail_s21_sub_70);
  tcase_add_test(tc, fail_s21_sub_71);
  tcase_add_test(tc, fail_s21_sub_72);
  tcase_add_test(tc, fail_s21_sub_73);
  tcase_add_test(tc, fail_s21_sub_74);
  tcase_add_test(tc, fail_s21_sub_75);
  tcase_add_test(tc, fail_s21_sub_76);
  tcase_add_test(tc, fail_s21_sub_77);
  tcase_add_test(tc, fail_s21_sub_78);
  tcase_add_test(tc, fail_s21_sub_79);
  tcase_add_test(tc, fail_s21_sub_80);
  tcase_add_test(tc, fail_s21_sub_81);
  tcase_add_test(tc, fail_s21_sub_82);
  tcase_add_test(tc, fail_s21_sub_83);
  tcase_add_test(tc, fail_s21_sub_84);
  tcase_add_test(tc, fail_s21_sub_85);
  tcase_add_test(tc, fail_s21_sub_86);
  tcase_add_test(tc, fail_s21_sub_87);
  tcase_add_test(tc, fail_s21_sub_88);
  tcase_add_test(tc, fail_s21_sub_89);
  tcase_add_test(tc, fail_s21_sub_90);
  tcase_add_test(tc, fail_s21_sub_91);
  tcase_add_test(tc, fail_s21_sub_92);
  tcase_add_test(tc, fail_s21_sub_93);
  tcase_add_test(tc, fail_s21_sub_94);
  tcase_add_test(tc, fail_s21_sub_95);
  tcase_add_test(tc, fail_s21_sub_96);
  tcase_add_test(tc, fail_s21_sub_97);
  tcase_add_test(tc, fail_s21_sub_98);
  tcase_add_test(tc, fail_s21_sub_99);
  tcase_add_test(tc, fail_s21_sub_100);
  tcase_add_test(tc, fail_s21_sub_101);
  tcase_add_test(tc, fail_s21_sub_102);
  tcase_add_test(tc, fail_s21_sub_103);
  tcase_add_test(tc, fail_s21_sub_104);
  tcase_add_test(tc, fail_s21_sub_105);
  tcase_add_test(tc, fail_s21_sub_106);
  tcase_add_test(tc, fail_s21_sub_107);
  tcase_add_test(tc, fail_s21_sub_108);
  tcase_add_test(tc, fail_s21_sub_109);
  tcase_add_test(tc, fail_s21_sub_110);
  tcase_add_test(tc, fail_s21_sub_111);
  tcase_add_test(tc, fail_s21_sub_112);
  tcase_add_test(tc, fail_s21_sub_113);
  tcase_add_test(tc, fail_s21_sub_114);
  tcase_add_test(tc, fail_s21_sub_115);
  tcase_add_test(tc, fail_s21_sub_116);
  tcase_add_test(tc, fail_s21_sub_117);
  tcase_add_test(tc, fail_s21_sub_118);
  tcase_add_test(tc, fail_s21_sub_119);
  tcase_add_test(tc, fail_s21_sub_120);
  tcase_add_test(tc, fail_s21_sub_121);
  tcase_add_test(tc, fail_s21_sub_122);
  tcase_add_test(tc, fail_s21_sub_123);
  tcase_add_test(tc, fail_s21_sub_124);
  tcase_add_test(tc, fail_s21_sub_125);
  tcase_add_test(tc, fail_s21_sub_126);
  tcase_add_test(tc, fail_s21_sub_127);
  tcase_add_test(tc, fail_s21_sub_128);
  tcase_add_test(tc, fail_s21_sub_129);
  tcase_add_test(tc, fail_s21_sub_130);
  tcase_add_test(tc, fail_s21_sub_131);
  tcase_add_test(tc, fail_s21_sub_132);
  tcase_add_test(tc, fail_s21_sub_133);
  tcase_add_test(tc, fail_s21_sub_134);
  tcase_add_test(tc, fail_s21_sub_135);
  tcase_add_test(tc, fail_s21_sub_136);
  tcase_add_test(tc, fail_s21_sub_137);
  tcase_add_test(tc, fail_s21_sub_138);
  tcase_add_test(tc, fail_s21_sub_139);
  tcase_add_test(tc, fail_s21_sub_140);
  tcase_add_test(tc, fail_s21_sub_141);
  tcase_add_test(tc, fail_s21_sub_142);
  tcase_add_test(tc, fail_s21_sub_143);
  tcase_add_test(tc, fail_s21_sub_144);
  tcase_add_test(tc, fail_s21_sub_145);
  tcase_add_test(tc, fail_s21_sub_146);
  tcase_add_test(tc, fail_s21_sub_147);
  tcase_add_test(tc, fail_s21_sub_148);
  tcase_add_test(tc, fail_s21_sub_149);
  tcase_add_test(tc, fail_s21_sub_150);
  tcase_add_test(tc, fail_s21_sub_151);
  tcase_add_test(tc, fail_s21_sub_152);
  tcase_add_test(tc, fail_s21_sub_153);
  tcase_add_test(tc, fail_s21_sub_154);
  tcase_add_test(tc, fail_s21_sub_155);
  tcase_add_test(tc, fail_s21_sub_156);
  tcase_add_test(tc, fail_s21_sub_157);
  tcase_add_test(tc, fail_s21_sub_158);
  tcase_add_test(tc, fail_s21_sub_159);
  tcase_add_test(tc, fail_s21_sub_160);
  tcase_add_test(tc, fail_s21_sub_161);
  tcase_add_test(tc, fail_s21_sub_162);
  tcase_add_test(tc, fail_s21_sub_163);
  tcase_add_test(tc, fail_s21_sub_164);
  tcase_add_test(tc, fail_s21_sub_165);
  tcase_add_test(tc, fail_s21_sub_166);

  suite_add_tcase(c, tc);
  return c;
}
