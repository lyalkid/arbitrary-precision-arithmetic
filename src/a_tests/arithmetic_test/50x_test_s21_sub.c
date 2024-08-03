#include "../test.h"


START_TEST(s21_sub_1) {
  // 8.9173451338062
  s21_decimal dec_1 = {{0x4fe3f14e, 0x511a, 0x0, 0xd0000}};
  // 5271.3843
  s21_decimal dec_2 = {{0x3245973, 0x0, 0x0, 0x40000}};
  // -5262.4669548661938
  s21_decimal dec_check = {{0xaedeccb2, 0xbaf5db, 0x0, 0x800d0000}};
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
  // -76189090
  s21_decimal dec_1 = {{0x48a8da2, 0x0, 0x0, 0x80000000}};
  // 4677788787989111747
  s21_decimal dec_2 = {{0x626563c3, 0x40ead81e, 0x0, 0x0}};
  // -4677788788065300837
  s21_decimal dec_check = {{0x66eff165, 0x40ead81e, 0x0, 0x80000000}};
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
  // -72592531612251.4911438
  s21_decimal dec_1 = {{0x71a570ce, 0x5a3ccce5, 0x27, 0x80070000}};
  // 69096921139976.1590070873389
  s21_decimal dec_2 = {{0xe8110d2d, 0x189ed92, 0x23b8e6c, 0xd0000}};
  // -141689452752227.6501508873389
  s21_decimal dec_check = {{0x94945cad, 0x3f01f6ed, 0x4940716, 0x800d0000}};
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
  // -35816
  s21_decimal dec_1 = {{0x8be8, 0x0, 0x0, 0x80000000}};
  // -8.5
  s21_decimal dec_2 = {{0x55, 0x0, 0x0, 0x80010000}};
  // -35807.5
  s21_decimal dec_check = {{0x576bb, 0x0, 0x0, 0x80010000}};
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
  // -5762989626.913
  s21_decimal dec_1 = {{0xccf31621, 0x53d, 0x0, 0x80030000}};
  // 5343970070444
  s21_decimal dec_2 = {{0x3d700fac, 0x4dc, 0x0, 0x0}};
  // -5349733060070.913
  s21_decimal dec_check = {{0xcab04e01, 0x13018d, 0x0, 0x80030000}};
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
  // 5896910267254096
  s21_decimal dec_1 = {{0x69c08550, 0x14f335, 0x0, 0x0}};
  // -0.374955940
  s21_decimal dec_2 = {{0x16595fa4, 0x0, 0x0, 0x80090000}};
  // 5896910267254096.374955940
  s21_decimal dec_check = {{0xa1aa7fa4, 0x256921fb, 0x4e0b8, 0x90000}};
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
  // 8447022
  s21_decimal dec_1 = {{0x80e42e, 0x0, 0x0, 0x0}};
  // -9310678396176441
  s21_decimal dec_2 = {{0x3e6c0839, 0x211403, 0x0, 0x80000000}};
  // 9310678404623463
  s21_decimal dec_check = {{0x3eecec67, 0x211403, 0x0, 0x0}};
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
  // 63420.0476597495
  s21_decimal dec_1 = {{0x4e1fbcf7, 0x240cd, 0x0, 0xa0000}};
  // -3000702419
  s21_decimal dec_2 = {{0xb2db15d3, 0x0, 0x0, 0x80000000}};
  // 3000765839.0476597495
  s21_decimal dec_check = {{0x99a0a8f7, 0xa0709e51, 0x1, 0xa0000}};
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
  // 7789196925888982.9
  s21_decimal dec_1 = {{0x56882265, 0x114ba55, 0x0, 0x10000}};
  // -215259065.662870549328063
  s21_decimal dec_2 = {{0xbc9270bf, 0x37a310f8, 0x2d95, 0x800f0000}};
  // 7789197141148048.5628705493281
  s21_decimal dec_check = {{0x7c17d121, 0x2ce04874, 0xfbaeba87, 0xd0000}};
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
  // -8718269443888997
  s21_decimal dec_1 = {{0x49425765, 0x1ef938, 0x0, 0x80000000}};
  // -1315621446223708149
  s21_decimal dec_2 = {{0x210cbff5, 0x124206bc, 0x0, 0x80000000}};
  // 1306903176779819152
  s21_decimal dec_check = {{0xd7ca6890, 0x12230d83, 0x0, 0x0}};
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
  // -2215
  s21_decimal dec_1 = {{0x8a7, 0x0, 0x0, 0x80000000}};
  // 3073184445168834018542907404
  s21_decimal dec_2 = {{0xd214700c, 0x98543ea0, 0x9ee141e, 0x0}};
  // -3073184445168834018542909619
  s21_decimal dec_check = {{0xd21478b3, 0x98543ea0, 0x9ee141e, 0x80000000}};
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
  // 4228
  s21_decimal dec_1 = {{0x1084, 0x0, 0x0, 0x0}};
  // 57574612215
  s21_decimal dec_2 = {{0x67b6dcf7, 0xd, 0x0, 0x0}};
  // -57574607987
  s21_decimal dec_check = {{0x67b6cc73, 0xd, 0x0, 0x80000000}};
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
  // -933735999666796867
  s21_decimal dec_1 = {{0xce223943, 0xcf54bf1, 0x0, 0x80000000}};
  // -27114046163994394
  s21_decimal dec_2 = {{0xd207471a, 0x605414, 0x0, 0x80000000}};
  // -906621953502802473
  s21_decimal dec_check = {{0xfc1af229, 0xc94f7dc, 0x0, 0x80000000}};
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
  // -63
  s21_decimal dec_1 = {{0x3f, 0x0, 0x0, 0x80000000}};
  // 67.61075965203364500
  s21_decimal dec_2 = {{0xc560ba94, 0x5dd42ac4, 0x0, 0x110000}};
  // -130.61075965203364500
  s21_decimal dec_check = {{0xca56ba94, 0xb5424363, 0x0, 0x80110000}};
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
  // 16985.16744932
  s21_decimal dec_1 = {{0x777cbae4, 0x18b, 0x0, 0x80000}};
  // 5771145256262789.708039279
  s21_decimal dec_2 = {{0xb636c46f, 0x694644f9, 0x4c616, 0x90000}};
  // -5771145256245804.540589959
  s21_decimal dec_check = {{0xb577787, 0x69463587, 0x4c616, 0x80090000}};
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
  // 9638173795317
  s21_decimal dec_1 = {{0xfece3f5, 0x8c4, 0x0, 0x0}};
  // 47479
  s21_decimal dec_2 = {{0xb977, 0x0, 0x0, 0x0}};
  // 9638173747838
  s21_decimal dec_check = {{0xfec2a7e, 0x8c4, 0x0, 0x0}};
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
  // 2888497544.9033346193606
  s21_decimal dec_1 = {{0xa7e918c6, 0xdb8f63bc, 0x61d, 0xd0000}};
  // 76538218385795617212128
  s21_decimal dec_2 = {{0x3b6946e0, 0x25276905, 0x1035, 0x0}};
  // -76538218385792728714583.096665
  s21_decimal dec_check = {{0x679e3d59, 0x9a31d2b8, 0xf74eee2c, 0x80060000}};
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
  // 254.483418395
  s21_decimal dec_1 = {{0x4064cd1b, 0x3b, 0x0, 0x90000}};
  // 4371
  s21_decimal dec_2 = {{0x1113, 0x0, 0x0, 0x0}};
  // -4116.516581605
  s21_decimal dec_check = {{0x738230e5, 0x3be, 0x0, 0x80090000}};
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
  // -15499.574
  s21_decimal dec_1 = {{0xec8136, 0x0, 0x0, 0x80030000}};
  // -9010031473740.7528734
  s21_decimal dec_2 = {{0xba118f1e, 0xe2649ee1, 0x4, 0x80070000}};
  // 9010031458241.1788734
  s21_decimal dec_check = {{0xa39a41be, 0xe2649ebd, 0x4, 0x70000}};
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
  // -29111298835662356035558751215
  s21_decimal dec_1 = {{0x4ebcbbef, 0x1332bf8d, 0x5e104d50, 0x80000000}};
  // 96397661790288308308223
  s21_decimal dec_2 = {{0xdc7f88ff, 0xba4ba590, 0x1469, 0x0}};
  // -29111395233324146323867059438
  s21_decimal dec_check = {{0x2b3c44ee, 0xcd7e651e, 0x5e1061b9, 0x80000000}};
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
  // 7
  s21_decimal dec_1 = {{0x7, 0x0, 0x0, 0x0}};
  // -30234544374
  s21_decimal dec_2 = {{0xa1e88f6, 0x7, 0x0, 0x80000000}};
  // 30234544381
  s21_decimal dec_check = {{0xa1e88fd, 0x7, 0x0, 0x0}};
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
  // -86655536483
  s21_decimal dec_1 = {{0x2d128d63, 0x14, 0x0, 0x80000000}};
  // 121
  s21_decimal dec_2 = {{0x79, 0x0, 0x0, 0x0}};
  // -86655536604
  s21_decimal dec_check = {{0x2d128ddc, 0x14, 0x0, 0x80000000}};
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
  // 0.0
  s21_decimal dec_1 = {{0x0, 0x0, 0x0, 0x10000}};
  // -600912625891447
  s21_decimal dec_2 = {{0xdf9b7877, 0x22286, 0x0, 0x80000000}};
  // 600912625891447.0
  s21_decimal dec_check = {{0xbc12b4a6, 0x155944, 0x0, 0x10000}};
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
  // -39311041253686571428427588
  s21_decimal dec_1 = {{0x80ab3744, 0xd105dcf2, 0x20846f, 0x80000000}};
  // 9.19252138033508
  s21_decimal dec_2 = {{0x11258164, 0x3440e, 0x0, 0xe0000}};
  // -39311041253686571428427597.193
  s21_decimal dec_check = {{0x9cd00589, 0x7ee71346, 0x7f0554c8, 0x80030000}};
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
  // 322869143122485240730
  s21_decimal dec_1 = {{0x2e7ce39a, 0x80b59f09, 0x11, 0x0}};
  // -5877075810847819339410.7527873
  s21_decimal dec_2 = {{0x5ba7b2c1, 0xfdd9ee92, 0xbde6081c, 0x80070000}};
  // 6199944953970304580140.7527873
  s21_decimal dec_check = {{0xeae5bbc1, 0x314c6e8d, 0xc854be1e, 0x70000}};
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
  // -13488314858895920220
  s21_decimal dec_1 = {{0x671d4c5c, 0xbb301ee6, 0x0, 0x80000000}};
  // -319799
  s21_decimal dec_2 = {{0x4e137, 0x0, 0x0, 0x80000000}};
  // -13488314858895600421
  s21_decimal dec_check = {{0x67186b25, 0xbb301ee6, 0x0, 0x80000000}};
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
  // -58
  s21_decimal dec_1 = {{0x3a, 0x0, 0x0, 0x80000000}};
  // 43959698.55818195464884539
  s21_decimal dec_2 = {{0xeb64113b, 0xde5c26, 0x3a2e2, 0x110000}};
  // -43959756.55818195464884539
  s21_decimal dec_check = {{0x1ca8113b, 0x515c196c, 0x3a2e2, 0x80110000}};
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
  // 6103550129696342712707000
  s21_decimal dec_1 = {{0xed46e7b8, 0x1d93044a, 0x50c7a, 0x0}};
  // 4039751.5119937
  s21_decimal dec_2 = {{0xc789dd41, 0x24bd, 0x0, 0x70000}};
  // 6103550129696342708667248.4880
  s21_decimal dec_check = {{0x39da5a10, 0x3ed7aecb, 0xc5376223, 0x40000}};
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
  // 4782.1059776287242056327835640
  s21_decimal dec_1 = {{0x7ef92ff8, 0x201b92, 0x9a84a74d, 0x190000}};
  // 87435.73350779812
  s21_decimal dec_2 = {{0xcfa40ba4, 0x1f103b, 0x0, 0xb0000}};
  // -82653.627530169395794367216436
  s21_decimal dec_check = {{0xa19bfb34, 0x99d279ca, 0xb117a6e, 0x80180000}};
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
  // -6285.3477172
  s21_decimal dec_1 = {{0xa25bf334, 0xe, 0x0, 0x80070000}};
  // 6454
  s21_decimal dec_2 = {{0x1936, 0x0, 0x0, 0x0}};
  // -12739.3477172
  s21_decimal dec_check = {{0xa93e3234, 0x1d, 0x0, 0x80070000}};
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
  // 450449906811.6
  s21_decimal dec_1 = {{0xc9111cd4, 0x418, 0x0, 0x10000}};
  // -4385132
  s21_decimal dec_2 = {{0x42e96c, 0x0, 0x0, 0x80000000}};
  // 450454291943.6
  s21_decimal dec_check = {{0xcbae3b0c, 0x418, 0x0, 0x10000}};
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
  // -610674214317637369923696
  s21_decimal dec_1 = {{0xa3110870, 0xb72a7f3c, 0x8150, 0x80000000}};
  // 4157809093628.247
  s21_decimal dec_2 = {{0x5e11d157, 0xec581, 0x0, 0x30000}};
  // -610674214321795179017324.247
  s21_decimal dec_check = {{0x589ac6d7, 0x7e0fca5e, 0x1f9234b, 0x80030000}};
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
  // -95
  s21_decimal dec_1 = {{0x5f, 0x0, 0x0, 0x80000000}};
  // 673823166
  s21_decimal dec_2 = {{0x2829b9be, 0x0, 0x0, 0x0}};
  // -673823261
  s21_decimal dec_check = {{0x2829ba1d, 0x0, 0x0, 0x80000000}};
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
  // 865444.5801578313833795973232
  s21_decimal dec_1 = {{0x721e7070, 0xfc88d769, 0x1bf6ca2e, 0x160000}};
  // 425314985936
  s21_decimal dec_2 = {{0x6bfa7d0, 0x63, 0x0, 0x0}};
  // -425314120491.41984216861662040
  s21_decimal dec_check = {{0xf0645b58, 0x20b72b9c, 0x896d28d3, 0x80110000}};
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
  // 375205
  s21_decimal dec_1 = {{0x5b9a5, 0x0, 0x0, 0x0}};
  // 630624672311
  s21_decimal dec_2 = {{0xd428da37, 0x92, 0x0, 0x0}};
  // -630624297106
  s21_decimal dec_check = {{0xd4232092, 0x92, 0x0, 0x80000000}};
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
  // -5558544
  s21_decimal dec_1 = {{0x54d110, 0x0, 0x0, 0x80000000}};
  // 22342879543707468471714
  s21_decimal dec_2 = {{0x496e9da2, 0x35bdc75a, 0x4bb, 0x0}};
  // -22342879543707474030258
  s21_decimal dec_check = {{0x49c36eb2, 0x35bdc75a, 0x4bb, 0x80000000}};
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
  // 725054585
  s21_decimal dec_1 = {{0x2b377479, 0x0, 0x0, 0x0}};
  // -845974923433495850.04503
  s21_decimal dec_2 = {{0x643e47d7, 0xa0c3d8d, 0x11ea, 0x80050000}};
  // 845974924158550435.04503
  s21_decimal dec_check = {{0xe2576977, 0xa0c7f7e, 0x11ea, 0x50000}};
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
  // 101339004814804939757.26
  s21_decimal dec_1 = {{0x5cdd48ae, 0x5c1edc33, 0x225, 0x20000}};
  // -9911.857
  s21_decimal dec_2 = {{0x973e31, 0x0, 0x0, 0x80030000}};
  // 101339004814804949669.117
  s21_decimal dec_check = {{0xa13c14fd, 0x99349a01, 0x1575, 0x30000}};
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
  // -843855.410436653522434823387
  s21_decimal dec_1 = {{0x782e94db, 0x76841c26, 0x2ba0555, 0x80150000}};
  // -366
  s21_decimal dec_2 = {{0x16e, 0x0, 0x0, 0x80000000}};
  // -843489.410436653522434823387
  s21_decimal dec_check = {{0x2f6e94db, 0x902dab42, 0x2b9b7d4, 0x80150000}};
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
  // -80160902752786447.97425298791
  s21_decimal dec_1 = {{0xedb7ad67, 0x909a1d45, 0x19e6c124, 0x800b0000}};
  // -0.45
  s21_decimal dec_2 = {{0x2d, 0x0, 0x0, 0x80020000}};
  // -80160902752786447.52425298791
  s21_decimal dec_check = {{0x73822b67, 0x909a1d3b, 0x19e6c124, 0x800b0000}};
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
  // 8235246191450
  s21_decimal dec_1 = {{0x6aec835a, 0x77d, 0x0, 0x0}};
  // 91
  s21_decimal dec_2 = {{0x5b, 0x0, 0x0, 0x0}};
  // 8235246191359
  s21_decimal dec_check = {{0x6aec82ff, 0x77d, 0x0, 0x0}};
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
  // -818225168319386560
  s21_decimal dec_1 = {{0x97f613c0, 0xb5aeb74, 0x0, 0x80000000}};
  // 919974503.379164
  s21_decimal dec_2 = {{0x4179f0dc, 0x344b6, 0x0, 0x60000}};
  // -818225169239361063.379164
  s21_decimal dec_check = {{0xd85660dc, 0x13471874, 0xad44, 0x80060000}};
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
  // 19843614778530963
  s21_decimal dec_1 = {{0x99ef1c93, 0x467fa9, 0x0, 0x0}};
  // -815370414231792.822
  s21_decimal dec_2 = {{0x5ca62cb6, 0xb50c712, 0x0, 0x80030000}};
  // 20658985192762755.822
  s21_decimal dec_check = {{0xaaadcaee, 0x1eb37593, 0x1, 0x30000}};
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
  // 749288784871611256976267611
  s21_decimal dec_1 = {{0x1d8d595b, 0x6b392ddd, 0x26bcc12, 0x0}};
  // -847413273253886548.34350
  s21_decimal dec_2 = {{0x7db0f2ae, 0xd628bfa5, 0x11f1, 0x80050000}};
  // 749288785719024530230154159.34
  s21_decimal dec_check = {{0xcc1bb07e, 0x7a5b9698, 0xf21bb736, 0x20000}};
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
  // 1165369.702314147
  s21_decimal dec_1 = {{0xc72370a3, 0x423e5, 0x0, 0x90000}};
  // 407788
  s21_decimal dec_2 = {{0x638ec, 0x0, 0x0, 0x0}};
  // 757581.702314147
  s21_decimal dec_check = {{0x3c4138a3, 0x2b104, 0x0, 0x90000}};
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
  // -2.3
  s21_decimal dec_1 = {{0x17, 0x0, 0x0, 0x80010000}};
  // -16.86680009
  s21_decimal dec_2 = {{0x6488b1c9, 0x0, 0x0, 0x80080000}};
  // 14.56680009
  s21_decimal dec_check = {{0x56d32c49, 0x0, 0x0, 0x80000}};
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
  // 646853
  s21_decimal dec_1 = {{0x9dec5, 0x0, 0x0, 0x0}};
  // -42131662142585458264357741800
  s21_decimal dec_2 = {{0x841424e8, 0x4554941c, 0x88227e7d, 0x80000000}};
  // 42131662142585458264358388653
  s21_decimal dec_check = {{0x841e03ad, 0x4554941c, 0x88227e7d, 0x0}};
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
  // -59262953
  s21_decimal dec_1 = {{0x38847e9, 0x0, 0x0, 0x80000000}};
  // -1.314
  s21_decimal dec_2 = {{0x522, 0x0, 0x0, 0x80030000}};
  // -59262951.686
  s21_decimal dec_check = {{0xcc58e106, 0xd, 0x0, 0x80030000}};
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
  // 23290781897040467
  s21_decimal dec_1 = {{0xbd83a253, 0x52bed7, 0x0, 0x0}};
  // -4481.22931256792957390
  s21_decimal dec_2 = {{0x93efc1ce, 0x4af477b8, 0x18, 0x80110000}};
  // 23290781897044948.229312567930
  s21_decimal dec_check = {{0x16f95a7a, 0x9546aafc, 0x4b41aee8, 0xc0000}};
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
  // -48.72659250343930452910
  s21_decimal dec_1 = {{0x8f275bae, 0x25bb2bbb, 0x108, 0x80140000}};
  // -59359397312
  s21_decimal dec_2 = {{0xd21885c0, 0xd, 0x0, 0x80000000}};
  // 59359397263.273407496560695471
  s21_decimal dec_check = {{0xdc49d8af, 0x8378745c, 0xbfccf14d, 0x120000}};
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
  // 962405884239918673323
  s21_decimal dec_1 = {{0xda102dab, 0x2c108cab, 0x34, 0x0}};
  // -93186813661.3893251182
  s21_decimal dec_2 = {{0x584a206e, 0x8444ad00, 0x32, 0x800a0000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_2) {
  // 9986805125823431926186215166
  s21_decimal dec_1 = {{0x6bff86fe, 0xae2bdd49, 0x2044e43e, 0x0}};
  // 252.617345104711
  s21_decimal dec_2 = {{0xf1e7b47, 0xe5c1, 0x0, 0xc0000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_3) {
  // 849689213422835825427177916
  s21_decimal dec_1 = {{0xc8b961bc, 0x8e788c0a, 0x2bed8b0, 0x0}};
  // 50.42389365186679
  s21_decimal dec_2 = {{0xc2ee6077, 0x11ea06, 0x0, 0xe0000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_4) {
  // -47.53519176577691922389
  s21_decimal dec_1 = {{0x98abafd5, 0xb05499df, 0x101, 0x80140000}};
  // -8531217358875120699
  s21_decimal dec_2 = {{0xd165d43b, 0x7664f8fc, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_5) {
  // 37418.889279412
  s21_decimal dec_1 = {{0x439a77b4, 0x2208, 0x0, 0x90000}};
  // -830565823938680196058481396
  s21_decimal dec_2 = {{0xb35e82f4, 0x890b285d, 0x2af0727, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_6) {
  // 0.06042131810462686843256
  s21_decimal dec_1 = {{0x8c491178, 0x8b6c5507, 0x147, 0x170000}};
  // -9576182
  s21_decimal dec_2 = {{0x921ef6, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_7) {
  // 0.179860954279330845730657100
  s21_decimal dec_1 = {{0xd9bdd34c, 0xde664a49, 0x94c709, 0x1b0000}};
  // -916539500.93139
  s21_decimal dec_2 = {{0xd9233753, 0x535b, 0x0, 0x80050000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_8) {
  // -584490463342613542.158764933
  s21_decimal dec_1 = {{0xafb88b85, 0x81f5bef2, 0x1e37aab, 0x80090000}};
  // -993233519512062501980680
  s21_decimal dec_2 = {{0xca9a0a08, 0x4c07037f, 0xd253, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_9) {
  // 83859921242.7253287864
  s21_decimal dec_1 = {{0x10c68bb8, 0x75e6e49d, 0x2d, 0xa0000}};
  // -4.5314079173774532225390
  s21_decimal dec_2 = {{0x554d296e, 0x7b2cec44, 0x998, 0x80160000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_10) {
  // 24944744212626262.4857416182
  s21_decimal dec_1 = {{0x8c10e1f6, 0xef07c500, 0xce568c, 0xa0000}};
  // -8071533547757423596468118
  s21_decimal dec_2 = {{0xca20f796, 0xb5dc03d2, 0x6ad36, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_11) {
  // 2938788467150153
  s21_decimal dec_1 = {{0x2a78d49, 0xa70d0, 0x0, 0x0}};
  // -79228162514264337591689456386
  s21_decimal dec_2 = {{0x9176ab02, 0xffffffff, 0xffffffff, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1; // Результат слишком велик или положительная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_12) {
  // -0.0717929011698691387
  s21_decimal dec_1 = {{0xe43f6d3b, 0x9f698a1, 0x0, 0x80130000}};
  // -8169969584271786
  s21_decimal dec_2 = {{0x46e571aa, 0x1d068b, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_13) {
  // -596.0820339837177359520278
  s21_decimal dec_1 = {{0xe74c5216, 0xb7d63637, 0x4ee40, 0x80160000}};
  // -87546440
  s21_decimal dec_2 = {{0x537da48, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_14) {
  // 21866545130.6944
  s21_decimal dec_1 = {{0x48cbfc0, 0xc6e0, 0x0, 0x40000}};
  // -918578278344119628085082929
  s21_decimal dec_2 = {{0x42183b31, 0x3fba2af2, 0x2f7d484, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_15) {
  // -867852.929494772313463380729
  s21_decimal dec_1 = {{0xd612daf9, 0x93eb2a0f, 0x2cddf01, 0x80150000}};
  // -8057836026.24306229029
  s21_decimal dec_2 = {{0xc04a2f25, 0xae7e6d5c, 0x2b, 0x800b0000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_16) {
  // -7571.19407756505
  s21_decimal dec_1 = {{0x995a14d9, 0x2b098, 0x0, 0x800b0000}};
  // -982065170199569026
  s21_decimal dec_2 = {{0xb0076282, 0xda0ff11, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

Suite *s21_sub_cases50(void) {
  Suite *c = suite_create("s21_sub_cases50");
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

  suite_add_tcase(c, tc);
  return c;
}
