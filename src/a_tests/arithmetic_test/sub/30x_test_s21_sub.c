#include "../test.h"


START_TEST(s21_sub_1) {
  // 6658963405124
  s21_decimal dec_1 = {{0x6925f944, 0x60e, 0x0, 0x0}};
  // 1820111207997
  s21_decimal dec_2 = {{0xc714fe3d, 0x1a7, 0x0, 0x0}};
  // 4838852197127
  s21_decimal dec_check = {{0xa210fb07, 0x466, 0x0, 0x0}};
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
  // 480847573737699296.310
  s21_decimal dec_1 = {{0xc0044436, 0x1119c0ac, 0x1a, 0x30000}};
  // -1657002901802178760.85
  s21_decimal dec_2 = {{0x4b08ae75, 0xfb8db000, 0x8, 0x80020000}};
  // 2137850475539878057.160
  s21_decimal dec_check = {{0xae5b14c8, 0xe4a2a0af, 0x73, 0x30000}};
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
  // -76723179302092
  s21_decimal dec_1 = {{0x81d92ccc, 0x45c7, 0x0, 0x80000000}};
  // 917481228962170472862645827
  s21_decimal dec_2 = {{0x9508fe43, 0x153098ec, 0x2f6ec35, 0x0}};
  // -917481228962247196041947919
  s21_decimal dec_check = {{0x16e22b0f, 0x1530deb4, 0x2f6ec35, 0x80000000}};
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
  // -6072121933612899.29546
  s21_decimal dec_1 = {{0xc97de34a, 0xeac310b6, 0x20, 0x80050000}};
  // -27869996512416026064154174
  s21_decimal dec_2 = {{0x1bf56e3e, 0x89cdc85d, 0x170db3, 0x80000000}};
  // 27869996506343904130541274.705
  s21_decimal dec_check = {{0x10dbc651, 0xf79228fb, 0x5a0d8551, 0x30000}};
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
  // 965254861205724159578192
  s21_decimal dec_1 = {{0x59689050, 0x9224ef2b, 0xcc66, 0x0}};
  // 225140514205
  s21_decimal dec_2 = {{0x6b6b9d9d, 0x34, 0x0, 0x0}};
  // 965254861205499019063987
  s21_decimal dec_check = {{0xedfcf2b3, 0x9224eef6, 0xcc66, 0x0}};
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
  // -32176509539517833
  s21_decimal dec_1 = {{0x6d370589, 0x72505d, 0x0, 0x80000000}};
  // -942222
  s21_decimal dec_2 = {{0xe608e, 0x0, 0x0, 0x80000000}};
  // -32176509538575611
  s21_decimal dec_check = {{0x6d28a4fb, 0x72505d, 0x0, 0x80000000}};
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
  // 9431814380499779843309
  s21_decimal dec_1 = {{0x965df4ed, 0x4cb7f72b, 0x1ff, 0x0}};
  // -18290
  s21_decimal dec_2 = {{0x4772, 0x0, 0x0, 0x80000000}};
  // 9431814380499779861599
  s21_decimal dec_check = {{0x965e3c5f, 0x4cb7f72b, 0x1ff, 0x0}};
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
  // 2229294336843899940066188782
  s21_decimal dec_1 = {{0x6d9e5dee, 0x27e1d09a, 0x7340770, 0x0}};
  // -881061341578501.724503333913
  s21_decimal dec_2 = {{0xf44cdc19, 0x818437b, 0x2d8cbff, 0x800c0000}};
  // 2229294336844781001407767283.7
  s21_decimal dec_check = {{0x13165d85, 0x8ef1733d, 0x48084a61, 0x10000}};
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
  // 406007417121661566950228220
  s21_decimal dec_1 = {{0x726c0fc, 0x2f369677, 0x14fd76a, 0x0}};
  // 4169305606302337
  s21_decimal dec_2 = {{0x1b9faa81, 0xecff6, 0x0, 0x0}};
  // 406007417117492261343925883
  s21_decimal dec_check = {{0xeb87167b, 0x2f27c680, 0x14fd76a, 0x0}};
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
  // 857742.69786696910770143593
  s21_decimal dec_1 = {{0x892e0169, 0x7b785298, 0x46f368, 0x140000}};
  // -43633019.8615910
  s21_decimal dec_2 = {{0xa7e4766, 0x18cd7, 0x0, 0x80070000}};
  // 44490762.55945796910770143593
  s21_decimal dec_check = {{0x5539c169, 0x1ccd26b4, 0xe60308b, 0x140000}};
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
  // -4238312381862.5149078277
  s21_decimal dec_1 = {{0x25728b05, 0x97ffbda0, 0x8f9, 0x800a0000}};
  // 9074960795108
  s21_decimal dec_2 = {{0xedd085e4, 0x840, 0x0, 0x0}};
  // -13313273176970.5149078277
  s21_decimal dec_check = {{0x6d7d9b05, 0x23cd411a, 0x1c31, 0x800a0000}};
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
  // -36495734695409367064714446541
  s21_decimal dec_1 = {{0xd94886cd, 0x292ee447, 0x75ec906e, 0x80000000}};
  // -7292461800.4742009
  s21_decimal dec_2 = {{0xbf8dbf79, 0x103148d, 0x0, 0x80070000}};
  // -36495734695409367057421984741
  s21_decimal dec_check = {{0x269e63e5, 0x292ee446, 0x75ec906e, 0x80000000}};
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
  // -6530558642278035190122033602
  s21_decimal dec_1 = {{0x11d031c2, 0x600600c2, 0x1519f395, 0x80000000}};
  // -73167199440086039719
  s21_decimal dec_2 = {{0xfc7cfca7, 0xf7661c3b, 0x3, 0x80000000}};
  // -6530558569110835750035993883
  s21_decimal dec_check = {{0x1553351b, 0x689fe486, 0x1519f391, 0x80000000}};
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
  // 941780670264
  s21_decimal dec_1 = {{0x46809738, 0xdb, 0x0, 0x0}};
  // 0.01734515507
  s21_decimal dec_2 = {{0x67629b33, 0x0, 0x0, 0xb0000}};
  // 941780670263.98265484493
  s21_decimal dec_check = {{0x957824cd, 0x673af7b9, 0x13f1, 0xb0000}};
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
  // -966922004439265193069.67
  s21_decimal dec_1 = {{0x63e15ad7, 0xb1d72684, 0x1479, 0x80020000}};
  // -37212.647814273
  s21_decimal dec_2 = {{0x3ea77481, 0x21d8, 0x0, 0x80090000}};
  // -966922004439265155857.02218573
  s21_decimal dec_check = {{0xf7b0cb4d, 0x2f7999aa, 0x386de9e1, 0x80080000}};
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
  // -8144101125870022
  s21_decimal dec_1 = {{0x4e9f51c6, 0x1cef04, 0x0, 0x80000000}};
  // -69941070
  s21_decimal dec_2 = {{0x42b374e, 0x0, 0x0, 0x80000000}};
  // -8144101055928952
  s21_decimal dec_check = {{0x4a741a78, 0x1cef04, 0x0, 0x80000000}};
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
  // 973.0649697
  s21_decimal dec_1 = {{0x43fdee61, 0x2, 0x0, 0x70000}};
  // 824066905.06194801480079849
  s21_decimal dec_2 = {{0x40a699e9, 0xa4ca09a3, 0x442a4b, 0x110000}};
  // -824065931.99697831480079849
  s21_decimal dec_check = {{0x62d35e9, 0x5e63ea32, 0x442a46, 0x80110000}};
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
  // 6928832584523436980228277
  s21_decimal dec_1 = {{0xdf18d0b5, 0xc45d27b0, 0x5bb3c, 0x0}};
  // -8.8
  s21_decimal dec_2 = {{0x58, 0x0, 0x0, 0x80010000}};
  // 6928832584523436980228285.8
  s21_decimal dec_check = {{0xb6f8276a, 0xaba38ce8, 0x39505f, 0x10000}};
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
  // 86
  s21_decimal dec_1 = {{0x56, 0x0, 0x0, 0x0}};
  // -0.1125366
  s21_decimal dec_2 = {{0x112bf6, 0x0, 0x0, 0x80070000}};
  // 86.1125366
  s21_decimal dec_check = {{0x3353baf6, 0x0, 0x0, 0x70000}};
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
  // -70333621.5447549725
  s21_decimal dec_1 = {{0xbf6b371d, 0x9c2c08f, 0x0, 0x800a0000}};
  // -82855646580228934.9900
  s21_decimal dec_2 = {{0x528c050c, 0xea87e3c4, 0x2c, 0x80040000}};
  // 82855646509895313.4452450275
  s21_decimal dec_check = {{0x489723e3, 0xf96fa401, 0x2ad5da7, 0xa0000}};
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
  // -208
  s21_decimal dec_1 = {{0xd0, 0x0, 0x0, 0x80000000}};
  // -562.043684937643063044680568
  s21_decimal dec_2 = {{0xf8f32b78, 0x36496750, 0x1d0e961, 0x80180000}};
  // 354.043684937643063044680568
  s21_decimal dec_check = {{0x28f32b78, 0x9e42e63e, 0x124dbaa, 0x180000}};
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
  // 0.639103
  s21_decimal dec_1 = {{0x9c07f, 0x0, 0x0, 0x60000}};
  // -172978506921581042552035
  s21_decimal dec_2 = {{0xe8d4ce3, 0x2f03adc5, 0x24a1, 0x80000000}};
  // 172978506921581042552035.63910
  s21_decimal dec_check = {{0x5b72d986, 0xfd06cf54, 0x37e4725c, 0x50000}};
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
  // 68249281879478871670
  s21_decimal dec_1 = {{0xe9d7a676, 0xb3262844, 0x3, 0x0}};
  // 0
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x0}};
  // 68249281879478871670
  s21_decimal dec_check = {{0xe9d7a676, 0xb3262844, 0x3, 0x0}};
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
  // -208651658298
  s21_decimal dec_1 = {{0x949ba43a, 0x30, 0x0, 0x80000000}};
  // -258
  s21_decimal dec_2 = {{0x102, 0x0, 0x0, 0x80000000}};
  // -208651658040
  s21_decimal dec_check = {{0x949ba338, 0x30, 0x0, 0x80000000}};
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
  // -322868929742415575644551
  s21_decimal dec_1 = {{0xa14ff987, 0xc27f27d2, 0x445e, 0x80000000}};
  // -2518569316674331233
  s21_decimal dec_2 = {{0x16926261, 0x22f3c173, 0x0, 0x80000000}};
  // -322866411173098901313318
  s21_decimal dec_check = {{0x8abd9726, 0x9f8b665f, 0x445e, 0x80000000}};
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
  // 0.85029712106
  s21_decimal dec_1 = {{0xcc2a70ea, 0x13, 0x0, 0xb0000}};
  // -558791747955488
  s21_decimal dec_2 = {{0xd7a3eb20, 0x1fc37, 0x0, 0x80000000}};
  // 558791747955488.85029712106
  s21_decimal dec_check = {{0xb9ff70ea, 0x22b03b0f, 0x2e38e0, 0xb0000}};
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
  // 939296618185011350.1
  s21_decimal dec_1 = {{0xf06ee5dd, 0x825a84f9, 0x0, 0x10000}};
  // -45819778784483232432021
  s21_decimal dec_2 = {{0x26b3bf95, 0xe52ad8e5, 0x9b3, 0x80000000}};
  // 45820718081101417443371.1
  s21_decimal dec_check = {{0x737461af, 0x7606fded, 0x6107, 0x10000}};
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
  // -2658943053847452
  s21_decimal dec_1 = {{0x6c33db9c, 0x9724b, 0x0, 0x80000000}};
  // 5414483135319308692074491450
  s21_decimal dec_2 = {{0x80676e3a, 0xe8f3881b, 0x117ec166, 0x0}};
  // -5414483135321967635128338902
  s21_decimal dec_check = {{0xec9b49d6, 0xe8fcfa66, 0x117ec166, 0x80000000}};
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
  // 0.373356493290567374169
  s21_decimal dec_1 = {{0x31c81559, 0x3d5cb885, 0x14, 0x150000}};
  // -39826296297972683435
  s21_decimal dec_2 = {{0x681dd2ab, 0x28b36d79, 0x2, 0x80000000}};
  // 39826296297972683435.373356493
  s21_decimal dec_check = {{0xc259e5cd, 0x6a694da5, 0x80af8a48, 0x90000}};
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
  // -44695347832231165
  s21_decimal dec_1 = {{0x9aa714fd, 0x9eca2e, 0x0, 0x80000000}};
  // -926379931
  s21_decimal dec_2 = {{0x37376f9b, 0x0, 0x0, 0x80000000}};
  // -44695346905851234
  s21_decimal dec_check = {{0x636fa562, 0x9eca2e, 0x0, 0x80000000}};
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
  // 8234276012994049052
  s21_decimal dec_1 = {{0x2107b41c, 0x72460668, 0x0, 0x0}};
  // 923080.916979019137
  s21_decimal dec_2 = {{0xb79ed81, 0xccf7134, 0x0, 0xc0000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_2) {
  // 82045567.347770980284180
  s21_decimal dec_1 = {{0x6d37b714, 0xb2f966c0, 0x115f, 0xf0000}};
  // -715.1576780550147495545622886
  s21_decimal dec_2 = {{0xb9c15166, 0x1bc48ea6, 0x171ba54a, 0x80190000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_3) {
  // 0.3096649475316936585681359060
  s21_decimal dec_1 = {{0x5008d0d4, 0x6da0dff1, 0xa017d08, 0x1c0000}};
  // -80108
  s21_decimal dec_2 = {{0x138ec, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_4) {
  // 9412120656363449561843574407
  s21_decimal dec_1 = {{0xfab52687, 0x2a8f2d23, 0x1e698613, 0x0}};
  // -0.93973312122
  s21_decimal dec_2 = {{0xe13ef27a, 0x15, 0x0, 0x800b0000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_5) {
  // -481.7124604255811063937672226
  s21_decimal dec_1 = {{0xe20ea422, 0xdaa11d7, 0xf90a1d0, 0x80190000}};
  // -94720720026434926
  s21_decimal dec_2 = {{0x360b7d6e, 0x15083fe, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_6) {
  // -179539058524070788445415.030
  s21_decimal dec_1 = {{0x38faa676, 0xdd696e12, 0x9482df, 0x80030000}};
  // -877142568132947041214739628
  s21_decimal dec_2 = {{0x9d2b34ac, 0xe5c01f0e, 0x2d58e29, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_7) {
  // 894305499118032
  s21_decimal dec_1 = {{0xb99879d0, 0x32d5d, 0x0, 0x0}};
  // 2542107.02232939546112376
  s21_decimal dec_2 = {{0x82017178, 0xca2f1ed5, 0x35d4, 0x110000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_8) {
  // 92524315069506306
  s21_decimal dec_1 = {{0xd4cde302, 0x148b65f, 0x0, 0x0}};
  // 4140.650159791827800
  s21_decimal dec_2 = {{0xd98e6b58, 0x39768b61, 0x0, 0xf0000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_9) {
  // 79228162514264337593028930065
  s21_decimal dec_1 = {{0xe14d6a11, 0xffffffff, 0xffffffff, 0x0}};
  // -5262967945244701322638
  s21_decimal dec_2 = {{0x1eb6d8e, 0x4e5a35cd, 0x11d, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1; // Результат слишком велик или положительная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_10) {
  // 923889691786491370.625363912
  s21_decimal dec_1 = {{0x7494efc8, 0x8c70a58e, 0x2fc3940, 0x90000}};
  // 87.46982880191449977405752
  s21_decimal dec_2 = {{0xb6154138, 0xe45eb0a1, 0x73c3e, 0x170000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

Suite *s21_sub_cases30(void) {
  Suite *c = suite_create("s21_sub_cases30");
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

  suite_add_tcase(c, tc);
  return c;
}
