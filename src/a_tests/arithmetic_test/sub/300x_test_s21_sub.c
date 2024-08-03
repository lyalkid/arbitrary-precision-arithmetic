#include "../test.h"


START_TEST(s21_sub_1) {
  // 10122880193925031141463457
  s21_decimal dec_1 = {{0x9c3e55a1, 0x6f55d0ed, 0x85f9a, 0x0}};
  // -335846734540089912201752
  s21_decimal dec_2 = {{0x6c581218, 0x49b7c7f3, 0x471e, 0x80000000}};
  // 10458726928465121053665209
  s21_decimal dec_check = {{0x89667b9, 0xb90d98e1, 0x8a6b8, 0x0}};
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
  // -6.56
  s21_decimal dec_1 = {{0x290, 0x0, 0x0, 0x80020000}};
  // -9791749707625430522359.06474
  s21_decimal dec_2 = {{0xef1e9daa, 0x86f72ad1, 0x329f45d, 0x80050000}};
  // 9791749707625430522352.50474
  s21_decimal dec_check = {{0xef149b2a, 0x86f72ad1, 0x329f45d, 0x50000}};
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
  // 4710361.619
  s21_decimal dec_1 = {{0x18c26a13, 0x1, 0x0, 0x30000}};
  // 8.167459983951332878
  s21_decimal dec_2 = {{0x14a3060e, 0x7158a595, 0x0, 0x120000}};
  // 4710353.451540016048667122
  s21_decimal dec_check = {{0x571879f2, 0xc5b34578, 0x3e574, 0x120000}};
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
  // -195146128060
  s21_decimal dec_1 = {{0x6f9d9abc, 0x2d, 0x0, 0x80000000}};
  // -959741614826278884196340533.9
  s21_decimal dec_2 = {{0x5efa401b, 0xe8e206c2, 0x1f02cbeb, 0x80010000}};
  // 959741614826278689050212473.9
  s21_decimal dec_check = {{0x2d234c3, 0xe8e204fc, 0x1f02cbeb, 0x10000}};
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
  // -2731108.797
  s21_decimal dec_1 = {{0xa2c969bd, 0x0, 0x0, 0x80030000}};
  // 264466961095856807113657
  s21_decimal dec_2 = {{0x3d1e73b9, 0xc85e46ab, 0x3800, 0x0}};
  // -264466961095856809844765.797
  s21_decimal dec_check = {{0x61bd7465, 0xb0440ce7, 0xdac30e, 0x80030000}};
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
  // 64697393431810446142464
  s21_decimal dec_1 = {{0x103f2c00, 0x40b2a0c0, 0xdb3, 0x0}};
  // -3458243059628266049057733
  s21_decimal dec_2 = {{0xa19933c5, 0xbb5e8ee8, 0x2dc4f, 0x80000000}};
  // 3522940453060076495200197
  s21_decimal dec_check = {{0xb1d85fc5, 0xfc112fa8, 0x2ea02, 0x0}};
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
  // 3574009694612
  s21_decimal dec_1 = {{0x23940994, 0x340, 0x0, 0x0}};
  // -962213.8169
  s21_decimal dec_2 = {{0x3d862d39, 0x2, 0x0, 0x80040000}};
  // 3574010656825.8169
  s21_decimal dec_check = {{0x43c5279, 0x7ef970, 0x0, 0x40000}};
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
  // -419157865065466840.47
  s21_decimal dec_1 = {{0x93d3a08f, 0x45b2c9bf, 0x2, 0x80020000}};
  // -83956935063643704836
  s21_decimal dec_2 = {{0x13054e04, 0x8d22f39e, 0x4, 0x80000000}};
  // 83537777198578237995.53
  s21_decimal dec_check = {{0xda3ed901, 0xdbf45fff, 0x1c4, 0x20000}};
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
  // 323441724.752805613142
  s21_decimal dec_1 = {{0xb6a5ce56, 0x88a7d6fe, 0x11, 0xc0000}};
  // -72961218.43025203
  s21_decimal dec_2 = {{0xbeb10533, 0x19ebc8, 0x0, 0x80080000}};
  // 396402943.183057643142
  s21_decimal dec_check = {{0x9980e686, 0x7d322897, 0x15, 0xc0000}};
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
  // 5372898163389
  s21_decimal dec_1 = {{0xf9afbabd, 0x4e2, 0x0, 0x0}};
  // -1424542750748
  s21_decimal dec_2 = {{0xad5d581c, 0x14b, 0x0, 0x80000000}};
  // 6797440914137
  s21_decimal dec_check = {{0xa70d12d9, 0x62e, 0x0, 0x0}};
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
  // -991522128445835169284
  s21_decimal dec_1 = {{0x193dce04, 0xc0223a83, 0x35, 0x80000000}};
  // -142836858054178845844
  s21_decimal dec_2 = {{0x40393494, 0xbe42759e, 0x7, 0x80000000}};
  // -848685270391656323440
  s21_decimal dec_check = {{0xd9049970, 0x1dfc4e4, 0x2e, 0x80000000}};
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
  // -5478127652909173
  s21_decimal dec_1 = {{0xfcc93075, 0x137653, 0x0, 0x80000000}};
  // 698993
  s21_decimal dec_2 = {{0xaaa71, 0x0, 0x0, 0x0}};
  // -5478127653608166
  s21_decimal dec_check = {{0xfcd3dae6, 0x137653, 0x0, 0x80000000}};
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
  // 78.10442
  s21_decimal dec_1 = {{0x772d8a, 0x0, 0x0, 0x50000}};
  // -463813.411
  s21_decimal dec_2 = {{0x1ba53b23, 0x0, 0x0, 0x80030000}};
  // 463891.51542
  s21_decimal dec_check = {{0xcd024736, 0xa, 0x0, 0x50000}};
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
  // 30.2
  s21_decimal dec_1 = {{0x12e, 0x0, 0x0, 0x10000}};
  // -61652738098790060025483521
  s21_decimal dec_2 = {{0x2df09101, 0xa11b1384, 0x32ff79, 0x80000000}};
  // 61652738098790060025483551.2
  s21_decimal dec_check = {{0xcb65ab38, 0x4b0ec329, 0x1fdfac0, 0x10000}};
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
  // 45276695
  s21_decimal dec_1 = {{0x2b2de17, 0x0, 0x0, 0x0}};
  // -8
  s21_decimal dec_2 = {{0x8, 0x0, 0x0, 0x80000000}};
  // 45276703
  s21_decimal dec_check = {{0x2b2de1f, 0x0, 0x0, 0x0}};
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
  // -7881.951518582642
  s21_decimal dec_1 = {{0xd866e772, 0x1c0097, 0x0, 0x800c0000}};
  // -41614840228962234.189676
  s21_decimal dec_2 = {{0x396ec76c, 0xf1ec1f5e, 0x8cf, 0x80060000}};
  // 41614840228954352.238157417358
  s21_decimal dec_check = {{0xc208cb8e, 0x31877f42, 0x8676fd31, 0xc0000}};
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
  // -6645103634
  s21_decimal dec_1 = {{0x8c143c12, 0x1, 0x0, 0x80000000}};
  // 77
  s21_decimal dec_2 = {{0x4d, 0x0, 0x0, 0x0}};
  // -6645103711
  s21_decimal dec_check = {{0x8c143c5f, 0x1, 0x0, 0x80000000}};
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
  // -46008513275298132335592205184
  s21_decimal dec_1 = {{0x3e13eb80, 0x4b9a1ca6, 0x94a959a6, 0x80000000}};
  // 31943637
  s21_decimal dec_2 = {{0x1e76bd5, 0x0, 0x0, 0x0}};
  // -46008513275298132335624148821
  s21_decimal dec_check = {{0x3ffb5755, 0x4b9a1ca6, 0x94a959a6, 0x80000000}};
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
  // 69989.23980874
  s21_decimal dec_1 = {{0x9060b04a, 0x65d, 0x0, 0x80000}};
  // 878481349004765653028
  s21_decimal dec_2 = {{0xb3036824, 0x9f60b486, 0x2f, 0x0}};
  // -878481349004765583038.76019126
  s21_decimal dec_check = {{0xcc9af3b6, 0x6512c043, 0x1bda4627, 0x80080000}};
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
  // 49411893.206699025220492
  s21_decimal dec_1 = {{0x91c38c, 0x9fc4e410, 0xa76, 0xf0000}};
  // -134372197.07
  s21_decimal dec_2 = {{0x20ebb37b, 0x3, 0x0, 0x80020000}};
  // 183784090.276699025220492
  s21_decimal dec_check = {{0xb784a38c, 0xf49b78d0, 0x26ea, 0xf0000}};
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
  // -95989599492542818903331789
  s21_decimal dec_1 = {{0x78313cd, 0x9d83bd0e, 0x4f6696, 0x80000000}};
  // 40283233404333132
  s21_decimal dec_2 = {{0x29782c4c, 0x8f1d63, 0x0, 0x0}};
  // -95989599532826052307664921
  s21_decimal dec_check = {{0x30fb4019, 0x9e12da71, 0x4f6696, 0x80000000}};
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
  // -705112
  s21_decimal dec_1 = {{0xac258, 0x0, 0x0, 0x80000000}};
  // 5408479094745056982264439
  s21_decimal dec_2 = {{0xc1c2ea77, 0x3d3d6845, 0x4794a, 0x0}};
  // -5408479094745056982969551
  s21_decimal dec_check = {{0xc1cdaccf, 0x3d3d6845, 0x4794a, 0x80000000}};
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
  // -78823955486538.0064
  s21_decimal dec_1 = {{0xe9a9bae0, 0xaf063b2, 0x0, 0x80040000}};
  // 95484329573
  s21_decimal dec_2 = {{0x3b4f3e65, 0x16, 0x0, 0x0}};
  // -78919439816111.0064
  s21_decimal dec_check = {{0xb11f0430, 0xaf3c81f, 0x0, 0x80040000}};
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
  // 77.022484
  s21_decimal dec_1 = {{0x4974514, 0x0, 0x0, 0x60000}};
  // -43235880934364264733149256914
  s21_decimal dec_2 = {{0x7685cd2, 0xeb09b4d8, 0x8bb3e1e9, 0x80000000}};
  // 43235880934364264733149256991
  s21_decimal dec_check = {{0x7685d1f, 0xeb09b4d8, 0x8bb3e1e9, 0x0}};
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
  // 2399051792467
  s21_decimal dec_1 = {{0x92a14053, 0x22e, 0x0, 0x0}};
  // -8846263019637559334
  s21_decimal dec_2 = {{0xcb2bd026, 0x7ac43d58, 0x0, 0x80000000}};
  // 8846265418689351801
  s21_decimal dec_check = {{0x5dcd1079, 0x7ac43f87, 0x0, 0x0}};
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
  // -225296643146112409296524.47
  s21_decimal dec_1 = {{0xc3f4eedf, 0x8cbd4d88, 0x12a2d7, 0x80020000}};
  // -641421490722891659.0
  s21_decimal dec_2 = {{0x62650b6e, 0x5903de79, 0x0, 0x80010000}};
  // -225296001724621686404865.47
  s21_decimal dec_check = {{0xec027c93, 0x12969cca, 0x12a2d4, 0x80020000}};
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
  // 985239665679656585
  s21_decimal dec_1 = {{0x8375e689, 0xdac4641, 0x0, 0x0}};
  // -908804032105454723819594
  s21_decimal dec_2 = {{0x5ba684a, 0x5d8435c9, 0xc072, 0x80000000}};
  // 908805017345120403476179
  s21_decimal dec_check = {{0x89304ed3, 0x6b307c0a, 0xc072, 0x0}};
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
  // 923138.151796769225895747735
  s21_decimal dec_1 = {{0xeeb6a097, 0x7beefec8, 0x2fb9a1b, 0x150000}};
  // -332796952321.1524849150793
  s21_decimal dec_2 = {{0xf3ea2b49, 0x96dfbea8, 0x2c0b9, 0x800d0000}};
  // 332797875459.30428168430519575
  s21_decimal dec_check = {{0x75158517, 0xdb919614, 0x6b886521, 0x110000}};
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
  // 6115.4
  s21_decimal dec_1 = {{0xeee2, 0x0, 0x0, 0x10000}};
  // 219
  s21_decimal dec_2 = {{0xdb, 0x0, 0x0, 0x0}};
  // 5896.4
  s21_decimal dec_check = {{0xe654, 0x0, 0x0, 0x10000}};
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
  // 6826367.488
  s21_decimal dec_1 = {{0x96e21a00, 0x1, 0x0, 0x30000}};
  // -580280109086
  s21_decimal dec_2 = {{0x1b63c81e, 0x87, 0x0, 0x80000000}};
  // 580286935453.488
  s21_decimal dec_check = {{0x94a7cf30, 0x20fc4, 0x0, 0x30000}};
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
  // 2690444689013359938426423
  s21_decimal dec_1 = {{0xb350d637, 0x4c80b6c3, 0x239b9, 0x0}};
  // 4
  s21_decimal dec_2 = {{0x4, 0x0, 0x0, 0x0}};
  // 2690444689013359938426419
  s21_decimal dec_check = {{0xb350d633, 0x4c80b6c3, 0x239b9, 0x0}};
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
  // 86288230
  s21_decimal dec_1 = {{0x524a766, 0x0, 0x0, 0x0}};
  // 287621543488555536822206
  s21_decimal dec_2 = {{0xd7372fbe, 0xfebfde97, 0x3ce7, 0x0}};
  // -287621543488555450533976
  s21_decimal dec_check = {{0xd2128858, 0xfebfde97, 0x3ce7, 0x80000000}};
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
  // 319.3
  s21_decimal dec_1 = {{0xc79, 0x0, 0x0, 0x10000}};
  // -2.8551574501
  s21_decimal dec_2 = {{0xa5ce73e5, 0x6, 0x0, 0x800a0000}};
  // 322.1551574501
  s21_decimal dec_check = {{0x136fede5, 0x2ee, 0x0, 0xa0000}};
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
  // 789000113802
  s21_decimal dec_1 = {{0xb4124e8a, 0xb7, 0x0, 0x0}};
  // 10942683004094985828019759061
  s21_decimal dec_2 = {{0x8a4067d5, 0x4b02039a, 0x235b9342, 0x0}};
  // -10942683004094985039019645259
  s21_decimal dec_check = {{0xd62e194b, 0x4b0202e2, 0x235b9342, 0x80000000}};
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
  // 0.5
  s21_decimal dec_1 = {{0x5, 0x0, 0x0, 0x10000}};
  // -87218972.56
  s21_decimal dec_2 = {{0x7dd9728, 0x2, 0x0, 0x80020000}};
  // 87218973.06
  s21_decimal dec_check = {{0x7dd975a, 0x2, 0x0, 0x20000}};
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
  // -236882817955147.460680
  s21_decimal dec_1 = {{0xa16b048, 0xd768d3df, 0xc, 0x80060000}};
  // 509.8313
  s21_decimal dec_2 = {{0x4dcb49, 0x0, 0x0, 0x40000}};
  // -236882817955657.291980
  s21_decimal dec_check = {{0x287a18cc, 0xd768d3df, 0xc, 0x80060000}};
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
  // 948
  s21_decimal dec_1 = {{0x3b4, 0x0, 0x0, 0x0}};
  // 823111416743
  s21_decimal dec_2 = {{0xa5437ba7, 0xbf, 0x0, 0x0}};
  // -823111415795
  s21_decimal dec_check = {{0xa54377f3, 0xbf, 0x0, 0x80000000}};
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
  // -3813426581091275.82588
  s21_decimal dec_1 = {{0x39c8e37c, 0xac31471c, 0x14, 0x80050000}};
  // -513754933916
  s21_decimal dec_2 = {{0x9e2e2a9c, 0x77, 0x0, 0x80000000}};
  // -3812912826157359.82588
  s21_decimal dec_check = {{0x80499fc, 0xab7ac15f, 0x14, 0x80050000}};
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
  // -66960044892258777809641150494
  s21_decimal dec_1 = {{0xf5a181e, 0x187f5fd9, 0xd85c0d0b, 0x80000000}};
  // -23
  s21_decimal dec_2 = {{0x17, 0x0, 0x0, 0x80000000}};
  // -66960044892258777809641150471
  s21_decimal dec_check = {{0xf5a1807, 0x187f5fd9, 0xd85c0d0b, 0x80000000}};
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
  // 4979044094453
  s21_decimal dec_1 = {{0x462791f5, 0x487, 0x0, 0x0}};
  // -945467368018838330451255.5
  s21_decimal dec_2 = {{0x9dda742b, 0xe3203349, 0x7d21a, 0x80010000}};
  // 945467368023817374545708.5
  s21_decimal dec_check = {{0x5b6627bd, 0xe3206092, 0x7d21a, 0x10000}};
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
  // -9302517249640.972
  s21_decimal dec_1 = {{0x142e8a0c, 0x210c97, 0x0, 0x80030000}};
  // -5153553498033250784490470209
  s21_decimal dec_2 = {{0xd736bb41, 0xedece688, 0x10a6eb66, 0x80000000}};
  // 5153553498033241481973220568.0
  s21_decimal dec_check = {{0x4bc6b070, 0x4b40acbd, 0xa6853205, 0x10000}};
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
  // 36853699
  s21_decimal dec_1 = {{0x23257c3, 0x0, 0x0, 0x0}};
  // 0.530
  s21_decimal dec_2 = {{0x212, 0x0, 0x0, 0x30000}};
  // 36853698.470
  s21_decimal dec_check = {{0x94a6cfa6, 0x8, 0x0, 0x30000}};
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
  // -9851152004895321886.26448892
  s21_decimal dec_1 = {{0xd232f1fc, 0x6a5757c, 0x32ede42, 0x80080000}};
  // 44407027045885
  s21_decimal dec_2 = {{0x511295fd, 0x2863, 0x0, 0x0}};
  // -9851196411922367771.26448892
  s21_decimal dec_check = {{0xa4274efc, 0xc1c6b375, 0x32edf32, 0x80080000}};
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
  // 499174
  s21_decimal dec_1 = {{0x79de6, 0x0, 0x0, 0x0}};
  // 491854125588210408756.40811
  s21_decimal dec_2 = {{0xb9f817eb, 0x8ebb2b61, 0x28af6a, 0x50000}};
  // -491854125588209909582.40811
  s21_decimal dec_check = {{0x1aa9042b, 0x8ebb2b56, 0x28af6a, 0x80050000}};
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
  // 6713760963
  s21_decimal dec_1 = {{0x902bdcc3, 0x1, 0x0, 0x0}};
  // 34161.862934023408459004537
  s21_decimal dec_2 = {{0x68713a79, 0x4ceb0345, 0x1c420e, 0x150000}};
  // 6713726801.1370659765915409955
  s21_decimal dec_check = {{0x1b6de23, 0xa22bd911, 0xd8eea57f, 0x130000}};
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
  // -88970426405507590349087899
  s21_decimal dec_1 = {{0xb323649b, 0x7ad38f62, 0x499838, 0x80000000}};
  // 5169140236212.788
  s21_decimal dec_2 = {{0x3f92da34, 0x125d4e, 0x0, 0x30000}};
  // -88970426405512759489324111.788
  s21_decimal dec_check = {{0x1d3d7ac, 0xca7a76da, 0x1f7a9c9f, 0x80030000}};
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
  // -694875352686431582
  s21_decimal dec_1 = {{0xa00c8d5e, 0x9a4b173, 0x0, 0x80000000}};
  // 13164233093211.01428067
  s21_decimal dec_2 = {{0x306cc563, 0x5d0b191e, 0x47, 0x80000}};
  // -694888516919524793.01428067
  s21_decimal dec_check = {{0x59a26363, 0x32ca238f, 0x397ad6, 0x80080000}};
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
  // -75553666.4959
  s21_decimal dec_1 = {{0xe97e997f, 0xaf, 0x0, 0x80040000}};
  // 7041333800456891575903510
  s21_decimal dec_2 = {{0x14192516, 0x785de22e, 0x5d30f, 0x0}};
  // -7041333800456891651457176.4959
  s21_decimal dec_check = {{0xffb744df, 0xd35328a0, 0xe3848c4d, 0x80040000}};
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
  // -66806983.981073938599456079
  s21_decimal dec_1 = {{0xc7592d4f, 0xdbc4f7a2, 0x3742ed, 0x80120000}};
  // -529696033899535328570504.49
  s21_decimal dec_2 = {{0xb5066551, 0xf41c2013, 0x2bd0bf, 0x80020000}};
  // 529696033899535261763520.50893
  s21_decimal dec_check = {{0xa8541ecd, 0x8ddd46e7, 0xab276dd1, 0x50000}};
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
  // 0.10225253
  s21_decimal dec_1 = {{0x9c0665, 0x0, 0x0, 0x80000}};
  // -91579
  s21_decimal dec_2 = {{0x165bb, 0x0, 0x0, 0x80000000}};
  // 91579.10225253
  s21_decimal dec_check = {{0x3dfc6165, 0x854, 0x0, 0x80000}};
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
  // 5630029.06
  s21_decimal dec_1 = {{0x218ebe1a, 0x0, 0x0, 0x20000}};
  // -63375652696425995.5
  s21_decimal dec_2 = {{0x17ca3c73, 0x8cb8e34, 0x0, 0x80010000}};
  // 63375652702056024.56
  s21_decimal dec_check = {{0xf751a98, 0x57f38e09, 0x0, 0x20000}};
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
  // 855
  s21_decimal dec_1 = {{0x357, 0x0, 0x0, 0x0}};
  // 8051652838470275592650
  s21_decimal dec_2 = {{0x8a6871ca, 0x7b212d1a, 0x1b4, 0x0}};
  // -8051652838470275591795
  s21_decimal dec_check = {{0x8a686e73, 0x7b212d1a, 0x1b4, 0x80000000}};
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
  // 32573968415039287816
  s21_decimal dec_1 = {{0x6f35f208, 0xc40dfbb0, 0x1, 0x0}};
  // -3766581017.028737299118409001
  s21_decimal dec_2 = {{0xae85c529, 0x13444c2a, 0xc2ba48e, 0x80120000}};
  // 32573968418805868833.028737299
  s21_decimal dec_check = {{0x93848913, 0x4ea32276, 0x69408e1e, 0x90000}};
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
  // -3973979086158.21
  s21_decimal dec_1 = {{0x692d728d, 0x1696e, 0x0, 0x80020000}};
  // 564811.2
  s21_decimal dec_2 = {{0x562ef0, 0x0, 0x0, 0x10000}};
  // -3973979650969.41
  s21_decimal dec_check = {{0x6c8b47ed, 0x1696e, 0x0, 0x80020000}};
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
  // -3544172419382007496.037498068
  s21_decimal dec_1 = {{0x9305fcd4, 0xd67dec74, 0xb73abb3, 0x80090000}};
  // -6.6214
  s21_decimal dec_2 = {{0x102a6, 0x0, 0x0, 0x80040000}};
  // -3544172419382007489.416098068
  s21_decimal dec_check = {{0x85b7114, 0xd67dec73, 0xb73abb3, 0x80090000}};
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
  // -292.75
  s21_decimal dec_1 = {{0x725b, 0x0, 0x0, 0x80020000}};
  // 81751280728
  s21_decimal dec_2 = {{0x8c18c58, 0x13, 0x0, 0x0}};
  // -81751281020.75
  s21_decimal dec_check = {{0x6b9b44bb, 0x76f, 0x0, 0x80020000}};
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
  // 730.9427985
  s21_decimal dec_1 = {{0xb3ad0511, 0x1, 0x0, 0x70000}};
  // 97660202
  s21_decimal dec_2 = {{0x5d22d2a, 0x0, 0x0, 0x0}};
  // -97659471.0572015
  s21_decimal dec_check = {{0x2cd02bef, 0x37835, 0x0, 0x80070000}};
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
  // 2087008257
  s21_decimal dec_1 = {{0x7c653801, 0x0, 0x0, 0x0}};
  // -815529.3050913082
  s21_decimal dec_2 = {{0x2156c13a, 0x1cf932, 0x0, 0x800a0000}};
  // 2087823786.3050913082
  s21_decimal dec_check = {{0x342a53a, 0x21be66b8, 0x1, 0xa0000}};
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
  // 140049980156344
  s21_decimal dec_1 = {{0xed5169b8, 0x7f5f, 0x0, 0x0}};
  // -0.6
  s21_decimal dec_2 = {{0x6, 0x0, 0x0, 0x80010000}};
  // 140049980156344.6
  s21_decimal dec_check = {{0x452e2136, 0x4f9bf, 0x0, 0x10000}};
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
  // 8384562004703647
  s21_decimal dec_1 = {{0xf7e3399f, 0x1dc9b6, 0x0, 0x0}};
  // 6714245731250111048730
  s21_decimal dec_2 = {{0x35bcec1a, 0xfae0a6f9, 0x16b, 0x0}};
  // -6714237346688106345083
  s21_decimal dec_check = {{0x3dd9b27b, 0xfac2dd42, 0x16b, 0x80000000}};
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
  // 23644163751341707793783527372
  s21_decimal dec_1 = {{0x3baf17cc, 0x4a56a6b4, 0x4c65fe6d, 0x0}};
  // 55291732307143927951558.159
  s21_decimal dec_2 = {{0xb948860f, 0xd07c2a72, 0x2dbc7a, 0x30000}};
  // 23644108459609400649855575814
  s21_decimal dec_check = {{0x7454a706, 0xeb68f582, 0x4c65f2b7, 0x0}};
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
  // -51.17868
  s21_decimal dec_1 = {{0x4e17ac, 0x0, 0x0, 0x80050000}};
  // 919113523813002067455258
  s21_decimal dec_2 = {{0x807a2d1a, 0x3e746bc5, 0xc2a1, 0x0}};
  // -919113523813002067455309.17868
  s21_decimal dec_check = {{0x6d5fe3ec, 0x64f23d2a, 0x28fb49ec, 0x80050000}};
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
  // -68148
  s21_decimal dec_1 = {{0x10a34, 0x0, 0x0, 0x80000000}};
  // 78377998605995.151631872111
  s21_decimal dec_2 = {{0xac18706f, 0xd174868b, 0x40d52f, 0xc0000}};
  // -78377998674143.151631872111
  s21_decimal dec_check = {{0x603fb06f, 0xd266a2ca, 0x40d52f, 0x800c0000}};
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
  // 547750127021026337651931
  s21_decimal dec_1 = {{0x68b47cdb, 0x9808d512, 0x73fd, 0x0}};
  // 8199547316739091375191744865
  s21_decimal dec_2 = {{0x512be161, 0xb5d6e9dd, 0x1a7e81ae, 0x0}};
  // -8198999566612070348854092934
  s21_decimal dec_check = {{0xe8776486, 0x1dce14ca, 0x1a7e0db1, 0x80000000}};
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
  // 9595369307.698161403501183
  s21_decimal dec_1 = {{0x56831a7f, 0x3309a0c, 0x7efe6, 0xf0000}};
  // -0.049210340440
  s21_decimal dec_2 = {{0x752a3458, 0xb, 0x0, 0x800c0000}};
  // 9595369307.747371743941183
  s21_decimal dec_check = {{0x35f923f, 0x330c6ce, 0x7efe6, 0xf0000}};
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
  // 0.137079852187162
  s21_decimal dec_1 = {{0x63e53e1a, 0x7cac, 0x0, 0xf0000}};
  // 48079937114469043342128194410
  s21_decimal dec_2 = {{0xd0f8236a, 0x9faa0e6b, 0x9b5acab5, 0x0}};
  // -48079937114469043342128194410
  s21_decimal dec_check = {{0xd0f8236a, 0x9faa0e6b, 0x9b5acab5, 0x80000000}};
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
  // -997084785
  s21_decimal dec_1 = {{0x3b6e4e71, 0x0, 0x0, 0x80000000}};
  // -94408479650091
  s21_decimal dec_2 = {{0x2fe4b12b, 0x55dd, 0x0, 0x80000000}};
  // 94407482565306
  s21_decimal dec_check = {{0xf47662ba, 0x55dc, 0x0, 0x0}};
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
  // -511029609445.7113147
  s21_decimal dec_1 = {{0xef2eaa3b, 0x46eb6b38, 0x0, 0x80070000}};
  // -0.2829671299604972517466
  s21_decimal dec_2 = {{0xe853385a, 0x6593eebf, 0x99, 0x80160000}};
  // -511029609445.42834757003950275
  s21_decimal dec_check = {{0x55b4b8c3, 0xd36518a2, 0xa51f60e7, 0x80110000}};
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
  // 59831517642468501
  s21_decimal dec_1 = {{0xc373ac95, 0xd49072, 0x0, 0x0}};
  // 79228162514264337592864629290
  s21_decimal dec_2 = {{0xd782622a, 0xffffffff, 0xffffffff, 0x0}};
  // -79228162514204506075222160789
  s21_decimal dec_check = {{0x140eb595, 0xff2b6f8d, 0xffffffff, 0x80000000}};
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
  // -91166111669964
  s21_decimal dec_1 = {{0x43b39ecc, 0x52ea, 0x0, 0x80000000}};
  // 89963813106995633783228840
  s21_decimal dec_2 = {{0x4d9ec9a8, 0x14ae4672, 0x4a6a94, 0x0}};
  // -89963813107086799894898804
  s21_decimal dec_check = {{0x91526874, 0x14ae995c, 0x4a6a94, 0x80000000}};
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
  // 0.510241
  s21_decimal dec_1 = {{0x7c921, 0x0, 0x0, 0x60000}};
  // -462677119987.4314
  s21_decimal dec_2 = {{0x1dd3550a, 0x107006, 0x0, 0x80040000}};
  // 462677119987.941641
  s21_decimal dec_check = {{0xa6950109, 0x66bc263, 0x0, 0x60000}};
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
  // 5751425081566714216
  s21_decimal dec_1 = {{0xab0e5968, 0x4fd12aa3, 0x0, 0x0}};
  // 5.4782458476
  s21_decimal dec_2 = {{0xc149fa6c, 0xc, 0x0, 0xa0000}};
  // 5751425081566714210.5217541524
  s21_decimal dec_check = {{0xfdcea594, 0x293f860f, 0xb9d6ac58, 0xa0000}};
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
  // 45439
  s21_decimal dec_1 = {{0xb17f, 0x0, 0x0, 0x0}};
  // 770.4301310936
  s21_decimal dec_2 = {{0xcc2493d8, 0x701, 0x0, 0xa0000}};
  // 44668.5698689064
  s21_decimal dec_check = {{0x1e658828, 0x19642, 0x0, 0xa0000}};
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
  // -358801419100895.897336
  s21_decimal dec_1 = {{0x2ef4e6f8, 0x735eb5a9, 0x13, 0x80060000}};
  // -19.6975162
  s21_decimal dec_2 = {{0xbbd9a3a, 0x0, 0x0, 0x80070000}};
  // -358801419100876.1998198
  s21_decimal dec_check = {{0xc9d36b76, 0x81b3189b, 0xc2, 0x80070000}};
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
  // 6475862742
  s21_decimal dec_1 = {{0x81fdd2d6, 0x1, 0x0, 0x0}};
  // -885.7
  s21_decimal dec_2 = {{0x2299, 0x0, 0x0, 0x80010000}};
  // 6475863627.7
  s21_decimal dec_check = {{0x13ea5ef5, 0xf, 0x0, 0x10000}};
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
  // -393741.2330450
  s21_decimal dec_1 = {{0xc01033d2, 0x394, 0x0, 0x80070000}};
  // 0.5
  s21_decimal dec_2 = {{0x5, 0x0, 0x0, 0x10000}};
  // -393741.7330450
  s21_decimal dec_check = {{0xc05c7f12, 0x394, 0x0, 0x80070000}};
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
  // -748
  s21_decimal dec_1 = {{0x2ec, 0x0, 0x0, 0x80000000}};
  // -82578174602427894514
  s21_decimal dec_2 = {{0x71e60af2, 0x7a009c48, 0x4, 0x80000000}};
  // 82578174602427893766
  s21_decimal dec_check = {{0x71e60806, 0x7a009c48, 0x4, 0x0}};
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
  // -8579042.5486
  s21_decimal dec_1 = {{0xf982018e, 0x13, 0x0, 0x80040000}};
  // -40933169789328
  s21_decimal dec_2 = {{0x7f0b7990, 0x253a, 0x0, 0x80000000}};
  // 40933161210285.4514
  s21_decimal dec_check = {{0xb6ba8772, 0x5ae3cee, 0x0, 0x40000}};
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
  // 90920392926014.636238600418
  s21_decimal dec_1 = {{0xc3f078e2, 0x606e2b22, 0x4b3524, 0xc0000}};
  // 36558828865571737464509245
  s21_decimal dec_2 = {{0xf60933d, 0x157fa4b0, 0x1e3da2, 0x0}};
  // -36558828865480817071583230.364
  s21_decimal dec_check = {{0x760d799c, 0xf9584c1e, 0x7620c123, 0x80030000}};
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
  // -706252493
  s21_decimal dec_1 = {{0x2a188ecd, 0x0, 0x0, 0x80000000}};
  // -764861870.2318519181528335
  s21_decimal dec_2 = {{0xe2664d0f, 0x735fa805, 0x653a8, 0x80100000}};
  // 58609377.2318519181528335
  s21_decimal dec_check = {{0x56d94d0f, 0x3501f9cd, 0x7c1c, 0x100000}};
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
  // 2
  s21_decimal dec_1 = {{0x2, 0x0, 0x0, 0x0}};
  // -273475
  s21_decimal dec_2 = {{0x42c43, 0x0, 0x0, 0x80000000}};
  // 273477
  s21_decimal dec_check = {{0x42c45, 0x0, 0x0, 0x0}};
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
  // -651428.5
  s21_decimal dec_1 = {{0x63666d, 0x0, 0x0, 0x80010000}};
  // -4537280895551889227
  s21_decimal dec_2 = {{0x59895f4b, 0x3ef7a8ef, 0x0, 0x80000000}};
  // 4537280895551237798.5
  s21_decimal dec_check = {{0x7efa5281, 0x75ac9959, 0x2, 0x10000}};
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
  // -1898000583330
  s21_decimal dec_1 = {{0xe9a68aa2, 0x1b9, 0x0, 0x80000000}};
  // -95965130073435
  s21_decimal dec_2 = {{0x9f7d255b, 0x5747, 0x0, 0x80000000}};
  // 94067129490105
  s21_decimal dec_check = {{0xb5d69ab9, 0x558d, 0x0, 0x0}};
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
  // 167284.3817957584197
  s21_decimal dec_1 = {{0xde11ed45, 0x17372296, 0x0, 0xd0000}};
  // 8964895357.0
  s21_decimal dec_2 = {{0xdf7e78e2, 0x14, 0x0, 0x10000}};
  // -8964728072.6182042415803
  s21_decimal dec_check = {{0x1b2632bb, 0xc9f080d0, 0x12fb, 0x800d0000}};
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
  // -380619805243
  s21_decimal dec_1 = {{0x9eb5523b, 0x58, 0x0, 0x80000000}};
  // 855.55893
  s21_decimal dec_2 = {{0x5197ab5, 0x0, 0x0, 0x50000}};
  // -380619806098.55893
  s21_decimal dec_check = {{0x71b2c195, 0x87392b, 0x0, 0x80050000}};
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
  // -60340938.13
  s21_decimal dec_1 = {{0x67a8f6f5, 0x1, 0x0, 0x80020000}};
  // 83.38238
  s21_decimal dec_2 = {{0x7f3b3e, 0x0, 0x0, 0x50000}};
  // -60341021.51238
  s21_decimal dec_check = {{0xec83e846, 0x57c, 0x0, 0x80050000}};
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
  // -4628.992867554622949193770961
  s21_decimal dec_1 = {{0x66a567d1, 0x2bcf43b3, 0xef5035e, 0x80180000}};
  // 9083718911501856061
  s21_decimal dec_2 = {{0xef90ed3d, 0x7e0fda38, 0x0, 0x0}};
  // -9083718911501860689.9928675546
  s21_decimal dec_check = {{0xffaab4da, 0xc8a9302, 0x2582c301, 0x800a0000}};
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
  // -3726282.0
  s21_decimal dec_1 = {{0x23895e4, 0x0, 0x0, 0x80010000}};
  // 8691.0756643964489
  s21_decimal dec_2 = {{0x68ec8649, 0x134c4df, 0x0, 0xd0000}};
  // -3734973.0756643964489
  s21_decimal dec_check = {{0x5e3ec649, 0x654e63c, 0x2, 0x800d0000}};
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
  // -1237200123909373575144705539
  s21_decimal dec_1 = {{0x21ac8e03, 0x1b6a8195, 0x3ff6351, 0x80000000}};
  // -61548215416.087467
  s21_decimal dec_2 = {{0x9c6f63ab, 0xdaa9c6, 0x0, 0x80060000}};
  // -1237200123909373513596490122.9
  s21_decimal dec_check = {{0x3252f6d, 0x12290f44, 0x27f9e12b, 0x80010000}};
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
  // 30182195463829039193562
  s21_decimal dec_1 = {{0x38299dda, 0x2e1aae3a, 0x664, 0x0}};
  // -11
  s21_decimal dec_2 = {{0xb, 0x0, 0x0, 0x80000000}};
  // 30182195463829039193573
  s21_decimal dec_check = {{0x38299de5, 0x2e1aae3a, 0x664, 0x0}};
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
  // -764351358958346794586070.6617
  s21_decimal dec_1 = {{0x5d8eb139, 0xf662b462, 0x18b290f5, 0x80040000}};
  // 0.162018
  s21_decimal dec_2 = {{0x278e2, 0x0, 0x0, 0x60000}};
  // -764351358958346794586070.82372
  s21_decimal dec_check = {{0xa7932b84, 0x9fdb0bd7, 0xf6f9a99b, 0x80050000}};
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
  // -526830072937445264.9
  s21_decimal dec_1 = {{0xc84baba9, 0x491cc399, 0x0, 0x80010000}};
  // -2860539.3
  s21_decimal dec_2 = {{0x1b47bd1, 0x0, 0x0, 0x80010000}};
  // -526830072934584725.6
  s21_decimal dec_check = {{0xc6972fd8, 0x491cc399, 0x0, 0x80010000}};
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
  // -32.803308
  s21_decimal dec_1 = {{0x1f489ec, 0x0, 0x0, 0x80060000}};
  // -1374878961192980
  s21_decimal dec_2 = {{0xf4175014, 0x4e271, 0x0, 0x80000000}};
  // 1374878961192947.196692
  s21_decimal dec_check = {{0xb7b0a314, 0x88474ac8, 0x4a, 0x60000}};
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
  // -593650.885322928678767483123
  s21_decimal dec_1 = {{0x1acd8f3, 0xfa6ecbd7, 0x1eb0e76, 0x80150000}};
  // -117.94013462436
  s21_decimal dec_2 = {{0x1fb9fa4, 0xaba, 0x0, 0x800b0000}};
  // -593532.945188304318767483123
  s21_decimal dec_check = {{0x3b72c8f3, 0x6e453c99, 0x1eaf57d, 0x80150000}};
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
  // -51498057168
  s21_decimal dec_1 = {{0xfd85fdd0, 0xb, 0x0, 0x80000000}};
  // -71995082063990.367712255486360
  s21_decimal dec_2 = {{0x81dd2998, 0x1a3f2e44, 0xe8a0efa3, 0x800f0000}};
  // 71943584006822.367712255486360
  s21_decimal dec_check = {{0xf4152998, 0xd45ac6e5, 0xe876567f, 0xf0000}};
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
  // 4144460007264158866300
  s21_decimal dec_1 = {{0x909db7c, 0xabefc251, 0xe0, 0x0}};
  // 5920.423
  s21_decimal dec_2 = {{0x5a56a7, 0x0, 0x0, 0x30000}};
  // 4144460007264158860379.577
  s21_decimal dec_check = {{0x4e2705b9, 0xa08f0c8b, 0x36d9f, 0x30000}};
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
  // -897985448869.397560170
  s21_decimal dec_1 = {{0x12247b6a, 0xae0d3004, 0x30, 0x80090000}};
  // -4164708.9733135753
  s21_decimal dec_2 = {{0xb578ed89, 0x93f5ce, 0x0, 0x800a0000}};
  // -897981284160.4242465947
  s21_decimal dec_check = {{0xfff3e49b, 0xcbefea59, 0x1e6, 0x800a0000}};
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
  // -0.4235126434
  s21_decimal dec_1 = {{0xfc6ee6a2, 0x0, 0x0, 0x800a0000}};
  // 465587442.6188161
  s21_decimal dec_2 = {{0x3d4ab181, 0x108a7e, 0x0, 0x70000}};
  // -465587443.0423287434
  s21_decimal dec_check = {{0x6834468a, 0x409cfd20, 0x0, 0x800a0000}};
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
  // 594739
  s21_decimal dec_1 = {{0x91333, 0x0, 0x0, 0x0}};
  // -11092042690641
  s21_decimal dec_2 = {{0x9143b051, 0xa16, 0x0, 0x80000000}};
  // 11092043285380
  s21_decimal dec_check = {{0x914cc384, 0xa16, 0x0, 0x0}};
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
  // -3947047985720618.0192639
  s21_decimal dec_1 = {{0x6940217f, 0xb2f1b290, 0x85b, 0x80070000}};
  // -509853417849703281235
  s21_decimal dec_2 = {{0x125eb253, 0xa3a33637, 0x1b, 0x80000000}};
  // 509849470801717560616.9807361
  s21_decimal dec_check = {{0x23ddaa01, 0xf12095f6, 0x1079603f, 0x70000}};
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
  // 5511135.41212895052648619
  s21_decimal dec_1 = {{0xc2fd50ab, 0xecc87071, 0x74b3, 0x110000}};
  // -179.085
  s21_decimal dec_2 = {{0x2bb8d, 0x0, 0x0, 0x80030000}};
  // 5511314.49712895052648619
  s21_decimal dec_check = {{0xa31290ab, 0xe550364f, 0x74b4, 0x110000}};
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
  // 4674
  s21_decimal dec_1 = {{0x1242, 0x0, 0x0, 0x0}};
  // -313.137589729188545
  s21_decimal dec_2 = {{0x91a15ac1, 0x4587cfa, 0x0, 0x800f0000}};
  // 4987.137589729188545
  s21_decimal dec_check = {{0x1ce5ac1, 0x4535df37, 0x0, 0xf0000}};
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
  // 271840533816
  s21_decimal dec_1 = {{0x4af55d38, 0x3f, 0x0, 0x0}};
  // -978860872221147705
  s21_decimal dec_2 = {{0xed454239, 0xd959cc6, 0x0, 0x80000000}};
  // 978861144061681521
  s21_decimal dec_check = {{0x383a9f71, 0xd959d06, 0x0, 0x0}};
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
  // 37111813703.4614592811870028
  s21_decimal dec_1 = {{0x71dca74c, 0x8565d583, 0x132fb52, 0x100000}};
  // 786304164122763
  s21_decimal dec_2 = {{0xb463508b, 0x2cb23, 0x0, 0x0}};
  // -786267052309059.53854071881300
  s21_decimal dec_check = {{0xd351be54, 0x56167b2f, 0xfe0e7c77, 0x800e0000}};
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
  // 1347895610279527266
  s21_decimal dec_1 = {{0x85050362, 0x12b4afea, 0x0, 0x0}};
  // -246386454136389504.677
  s21_decimal dec_2 = {{0x2b920ea5, 0x5b4c86a0, 0xd, 0x80030000}};
  // 1594282064415916770.677
  s21_decimal dec_check = {{0xc7274575, 0x6d1bb2b7, 0x56, 0x30000}};
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
  // 7518674.7976
  s21_decimal dec_1 = {{0x817aba48, 0x11, 0x0, 0x40000}};
  // 2938494
  s21_decimal dec_2 = {{0x2cd67e, 0x0, 0x0, 0x0}};
  // 4580180.7976
  s21_decimal dec_check = {{0xaa002068, 0xa, 0x0, 0x40000}};
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
  // -719808828410547
  s21_decimal dec_1 = {{0x8d860ab3, 0x28ea9, 0x0, 0x80000000}};
  // -71005992
  s21_decimal dec_2 = {{0x43b7728, 0x0, 0x0, 0x80000000}};
  // -719808757404555
  s21_decimal dec_check = {{0x894a938b, 0x28ea9, 0x0, 0x80000000}};
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
  // 36803271997289833854
  s21_decimal dec_1 = {{0xb28aa57e, 0xfebf7ce3, 0x1, 0x0}};
  // 996944261302439.710
  s21_decimal dec_2 = {{0xbcbcf1e, 0xdd5db86, 0x0, 0x30000}};
  // 36802275053028531414.290
  s21_decimal dec_check = {{0x61caa512, 0xe29fdeb, 0x7cb, 0x30000}};
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
  // -5893379216012099386080307
  s21_decimal dec_1 = {{0xad43fc33, 0xba3b15b2, 0x4dff8, 0x80000000}};
  // -769514105306
  s21_decimal dec_2 = {{0x2a9d69da, 0xb3, 0x0, 0x80000000}};
  // -5893379216011329871975001
  s21_decimal dec_check = {{0x82a69259, 0xba3b14ff, 0x4dff8, 0x80000000}};
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
  // -83603983068.51487
  s21_decimal dec_1 = {{0xeb42ba9f, 0x1db3bc, 0x0, 0x80050000}};
  // -426907643009514799.6
  s21_decimal dec_2 = {{0x6d063dc, 0x3b3ece65, 0x0, 0x80010000}};
  // 426907559405531731.08513
  s21_decimal dec_check = {{0x40fa0721, 0x4540969d, 0x90a, 0x50000}};
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
  // -25545918936000
  s21_decimal dec_1 = {{0xdf6c73c0, 0x173b, 0x0, 0x80000000}};
  // -5043446274947722
  s21_decimal dec_2 = {{0xd7a97a8a, 0x11eafc, 0x0, 0x80000000}};
  // 5017900356011722
  s21_decimal dec_check = {{0xf83d06ca, 0x11d3c0, 0x0, 0x0}};
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
  // 9969438178.7876
  s21_decimal dec_1 = {{0xe8366ae4, 0x5aab, 0x0, 0x40000}};
  // -29685
  s21_decimal dec_2 = {{0x73f5, 0x0, 0x0, 0x80000000}};
  // 9969467863.7876
  s21_decimal dec_check = {{0xf9e7fd34, 0x5aab, 0x0, 0x40000}};
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
  // 4778621950977485863010395134
  s21_decimal dec_1 = {{0xc6eb63fe, 0x96e0d01, 0xf70c88f, 0x0}};
  // 0
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x0}};
  // 4778621950977485863010395134
  s21_decimal dec_check = {{0xc6eb63fe, 0x96e0d01, 0xf70c88f, 0x0}};
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
  // -90299.44899051
  s21_decimal dec_1 = {{0x72a875eb, 0x836, 0x0, 0x80080000}};
  // -82.791775
  s21_decimal dec_2 = {{0x4ef4d5f, 0x0, 0x0, 0x80060000}};
  // -90216.65721551
  s21_decimal dec_check = {{0x852e3ccf, 0x834, 0x0, 0x80080000}};
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
  // 7153338194372
  s21_decimal dec_1 = {{0x842e99c4, 0x681, 0x0, 0x0}};
  // 32172202
  s21_decimal dec_2 = {{0x1eae8aa, 0x0, 0x0, 0x0}};
  // 7153306022170
  s21_decimal dec_check = {{0x8243b11a, 0x681, 0x0, 0x0}};
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
  // -740662045221525710326
  s21_decimal dec_1 = {{0xeb58e5f6, 0x26c02dee, 0x28, 0x80000000}};
  // 9499459030281994968
  s21_decimal dec_2 = {{0x6255c2d8, 0x83d4dba8, 0x0, 0x0}};
  // -750161504251807705294
  s21_decimal dec_check = {{0x4daea8ce, 0xaa950997, 0x28, 0x80000000}};
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
  // -500.64112322939024
  s21_decimal dec_1 = {{0x7f010890, 0xb1dd0b, 0x0, 0x800e0000}};
  // 81388912836404726040668619
  s21_decimal dec_2 = {{0x67dca9cb, 0xce4098c4, 0x4352c5, 0x0}};
  // -81388912836404726040669119.641
  s21_decimal dec_check = {{0xb5fee499, 0xac54bf35, 0x6fb54ad, 0x80030000}};
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
  // 3073283916970906491449
  s21_decimal dec_1 = {{0x6bfa1a39, 0x9a61cf87, 0xa6, 0x0}};
  // 46619618062073085340543
  s21_decimal dec_2 = {{0xaf0ab7f, 0x412aca22, 0x9df, 0x0}};
  // -43546334145102178849094
  s21_decimal dec_check = {{0x9ef69146, 0xa6c8fa9a, 0x938, 0x80000000}};
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
  // 72957124936713.83
  s21_decimal dec_1 = {{0x6f9193d7, 0x19eb69, 0x0, 0x20000}};
  // 9451683796.542511139517999222
  s21_decimal dec_2 = {{0x879a876, 0x4af9a14e, 0x1e8a3fe5, 0x120000}};
  // 72947673252917.287488860482001
  s21_decimal dec_check = {{0x4e8069d1, 0xedc4ae4f, 0xebb4e6aa, 0xf0000}};
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
  // -0.13170
  s21_decimal dec_1 = {{0x3372, 0x0, 0x0, 0x80050000}};
  // 6521895300796.14
  s21_decimal dec_2 = {{0xb544417e, 0x25129, 0x0, 0x20000}};
  // -6521895300796.27170
  s21_decimal dec_check = {{0x12a007a2, 0x90d0aec, 0x0, 0x80050000}};
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
  // -7854420090440678269431728
  s21_decimal dec_1 = {{0x64eafb0, 0xf75e5aa4, 0x67f3c, 0x80000000}};
  // 7317184109204715806694
  s21_decimal dec_2 = {{0x2b1fe6, 0xaa541338, 0x18c, 0x0}};
  // -7861737274549882985238422
  s21_decimal dec_check = {{0x679cf96, 0xa1b26ddc, 0x680c9, 0x80000000}};
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
  // 57803190.912
  s21_decimal dec_1 = {{0x7556b280, 0xd, 0x0, 0x30000}};
  // -742037997616838053149771
  s21_decimal dec_2 = {{0xfb4f3c4b, 0xf5e052b4, 0x9d21, 0x80000000}};
  // 742037997616838110952961.912
  s21_decimal dec_check = {{0x22da3778, 0x74431303, 0x265cca8, 0x30000}};
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
  // 375.082511528126608842273828
  s21_decimal dec_1 = {{0x8b55b424, 0xb168d26d, 0x13642cf, 0x180000}};
  // 2725202096015
  s21_decimal dec_2 = {{0x82b3ef8f, 0x27a, 0x0, 0x0}};
  // -2725202095639.9174884718733912
  s21_decimal dec_check = {{0xc8daea58, 0x47054222, 0x580e57e8, 0x80100000}};
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
  // 3851.2
  s21_decimal dec_1 = {{0x9670, 0x0, 0x0, 0x10000}};
  // -650347778313453220567.07820359
  s21_decimal dec_2 = {{0x16694b47, 0x97c41a58, 0xd22381e2, 0x80080000}};
  // 650347778313453224418.27820359
  s21_decimal dec_check = {{0xc15a2347, 0x97c41ab1, 0xd22381e2, 0x80000}};
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
  // -26669816658598895
  s21_decimal dec_1 = {{0x94291bef, 0x5ec00e, 0x0, 0x80000000}};
  // -170053049522816010434521
  s21_decimal dec_2 = {{0x9e8837d9, 0x98232954, 0x2402, 0x80000000}};
  // 170053022852999351835626
  s21_decimal dec_check = {{0xa5f1bea, 0x97c46946, 0x2402, 0x0}};
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
  // 2123.1023
  s21_decimal dec_1 = {{0x143f5af, 0x0, 0x0, 0x40000}};
  // 496655034752016587106
  s21_decimal dec_2 = {{0x3f3c1962, 0xec7922b7, 0x1a, 0x0}};
  // -496655034752016584982.8977
  s21_decimal dec_check = {{0x1a5b8e71, 0x3bdc1616, 0x41bb5, 0x80040000}};
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
  // 7884619761
  s21_decimal dec_1 = {{0xd5f5bff1, 0x1, 0x0, 0x0}};
  // 72167419521674
  s21_decimal dec_2 = {{0xc967aa8a, 0x41a2, 0x0, 0x0}};
  // -72159534901913
  s21_decimal dec_check = {{0xf371ea99, 0x41a0, 0x0, 0x80000000}};
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
  // 29415862380435460
  s21_decimal dec_1 = {{0x2bf29804, 0x688192, 0x0, 0x0}};
  // 2432732158539443584763
  s21_decimal dec_2 = {{0x34cdbefb, 0xe0f0d106, 0x83, 0x0}};
  // -2432702742677063149303
  s21_decimal dec_check = {{0x8db26f7, 0xe0884f74, 0x83, 0x80000000}};
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
  // 464.605
  s21_decimal dec_1 = {{0x716dd, 0x0, 0x0, 0x30000}};
  // -278090270563633880
  s21_decimal dec_2 = {{0xb0700ad8, 0x3dbf9a0, 0x0, 0x80000000}};
  // 278090270563634344.605
  s21_decimal dec_check = {{0x35b1729d, 0x13471bb1, 0xf, 0x30000}};
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
  // 160.83492497065648435
  s21_decimal dec_1 = {{0x4b422133, 0xdf340b36, 0x0, 0x110000}};
  // -51019699733623486528.873
  s21_decimal dec_2 = {{0xb79bbd69, 0xc89121c6, 0xacd, 0x80030000}};
  // 51019699733623486689.707924971
  s21_decimal dec_check = {{0x996d9deb, 0x89a26f49, 0xa4da81a8, 0x90000}};
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
  // -7922196451493569594
  s21_decimal dec_1 = {{0xf422643a, 0x6df14bb2, 0x0, 0x80000000}};
  // -164392041
  s21_decimal dec_2 = {{0x9cc6c69, 0x0, 0x0, 0x80000000}};
  // -7922196451329177553
  s21_decimal dec_check = {{0xea55f7d1, 0x6df14bb2, 0x0, 0x80000000}};
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
  // -3659770242491156260822120
  s21_decimal dec_1 = {{0x71c19c68, 0x8ad9c3ee, 0x306fc, 0x80000000}};
  // 0
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x0}};
  // -3659770242491156260822120
  s21_decimal dec_check = {{0x71c19c68, 0x8ad9c3ee, 0x306fc, 0x80000000}};
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
  // -54399.808
  s21_decimal dec_1 = {{0x33e1340, 0x0, 0x0, 0x80030000}};
  // -32489459168783415384296733.24
  s21_decimal dec_2 = {{0x2c021f6c, 0x1180b822, 0xa7f770f, 0x80020000}};
  // 32489459168783415384242333.432
  s21_decimal dec_check = {{0xb4d726f8, 0xaf073155, 0x68faa696, 0x30000}};
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
  // 721000585702844838056
  s21_decimal dec_1 = {{0x2a6b0a8, 0x15e4a4ac, 0x27, 0x0}};
  // -7
  s21_decimal dec_2 = {{0x7, 0x0, 0x0, 0x80000000}};
  // 721000585702844838063
  s21_decimal dec_check = {{0x2a6b0af, 0x15e4a4ac, 0x27, 0x0}};
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
  // -526672687056385383514290518
  s21_decimal dec_1 = {{0x8a40b956, 0x9323d5fc, 0x1b3a747, 0x80000000}};
  // 25
  s21_decimal dec_2 = {{0x19, 0x0, 0x0, 0x0}};
  // -526672687056385383514290543
  s21_decimal dec_check = {{0x8a40b96f, 0x9323d5fc, 0x1b3a747, 0x80000000}};
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
  // 3914692
  s21_decimal dec_1 = {{0x3bbbc4, 0x0, 0x0, 0x0}};
  // -604614036977077886120196
  s21_decimal dec_2 = {{0x9393f104, 0x314f9031, 0x8008, 0x80000000}};
  // 604614036977077890034888
  s21_decimal dec_check = {{0x93cfacc8, 0x314f9031, 0x8008, 0x0}};
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
  // 99160619232273.9117733569
  s21_decimal dec_1 = {{0x2f6fb6c1, 0x145372c2, 0xd1fb, 0xa0000}};
  // 7432.132500980161
  s21_decimal dec_2 = {{0x31a501c1, 0x1a677c, 0x0, 0xc0000}};
  // 99160619224841.779272376739
  s21_decimal dec_check = {{0x55fe61a3, 0xf07e6c5e, 0x520613, 0xc0000}};
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
  // -973906404380661
  s21_decimal dec_1 = {{0x41470ff5, 0x375c3, 0x0, 0x80000000}};
  // -71778429073944086372618
  s21_decimal dec_2 = {{0x7ece10a, 0x1dced056, 0xf33, 0x80000000}};
  // 71778428100037681991957
  s21_decimal dec_check = {{0xc6a5d115, 0x1dcb5a92, 0xf33, 0x0}};
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
  // -69.48549324265526
  s21_decimal dec_1 = {{0x362d5836, 0x18afab, 0x0, 0x800e0000}};
  // -9788488
  s21_decimal dec_2 = {{0x955c48, 0x0, 0x0, 0x80000000}};
  // 9788418.51450675734474
  s21_decimal dec_check = {{0x9b34a7ca, 0x1028d5c4, 0x35, 0xe0000}};
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
  // -869800559634035423820
  s21_decimal dec_1 = {{0x16a6ba4c, 0x26e85896, 0x2f, 0x80000000}};
  // -390626.889
  s21_decimal dec_2 = {{0x17487e49, 0x0, 0x0, 0x80030000}};
  // -869800559634035033193.111
  s21_decimal dec_check = {{0x63ff3a97, 0xfb9a0a48, 0xb82f, 0x80030000}};
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
  // -0.8404191895427766134726067569
  s21_decimal dec_1 = {{0x1f460571, 0x8ce688a9, 0x1b27c8db, 0x801c0000}};
  // 6437715927796061
  s21_decimal dec_2 = {{0x8b0a895d, 0x16df11, 0x0, 0x0}};
  // -6437715927796061.8404191895428
  s21_decimal dec_check = {{0xd8237f84, 0x616944ce, 0xd00389bd, 0x800d0000}};
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
  // -8209471483856745040607
  s21_decimal dec_1 = {{0x74428adf, 0x94da2ec, 0x1bd, 0x80000000}};
  // -2
  s21_decimal dec_2 = {{0x2, 0x0, 0x0, 0x80000000}};
  // -8209471483856745040605
  s21_decimal dec_check = {{0x74428add, 0x94da2ec, 0x1bd, 0x80000000}};
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
  // 71923702575036792
  s21_decimal dec_1 = {{0xf6ea7978, 0xff8639, 0x0, 0x0}};
  // -54462239625606373.202
  s21_decimal dec_2 = {{0xdc789f52, 0xf3d0be62, 0x2, 0x80030000}};
  // 126385942200643165.202
  s21_decimal dec_check = {{0x60631c12, 0xd9f510cf, 0x6, 0x30000}};
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
  // -7184596515581.217
  s21_decimal dec_1 = {{0x3b2a6d21, 0x19865a, 0x0, 0x80030000}};
  // -2601.01
  s21_decimal dec_2 = {{0x3f805, 0x0, 0x0, 0x80020000}};
  // -7184596512980.207
  s21_decimal dec_check = {{0x3b02bcef, 0x19865a, 0x0, 0x80030000}};
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
  // -31412423832605654656288480070
  s21_decimal dec_1 = {{0x8802db46, 0x1e08f755, 0x657fbf7c, 0x80000000}};
  // 509319211
  s21_decimal dec_2 = {{0x1e5b982b, 0x0, 0x0, 0x0}};
  // -31412423832605654656797799281
  s21_decimal dec_check = {{0xa65e7371, 0x1e08f755, 0x657fbf7c, 0x80000000}};
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
  // 63480003621.980743745983
  s21_decimal dec_1 = {{0xc07d41bf, 0x420532b7, 0xd71, 0xc0000}};
  // 8
  s21_decimal dec_2 = {{0x8, 0x0, 0x0, 0x0}};
  // 63480003613.980743745983
  s21_decimal dec_check = {{0x1b54c1bf, 0x42052b71, 0xd71, 0xc0000}};
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
  // 0
  s21_decimal dec_1 = {{0x0, 0x0, 0x0, 0x0}};
  // -45997541532304784466074879002
  s21_decimal dec_2 = {{0x8a63441a, 0xea755c83, 0x94a0464a, 0x80000000}};
  // 45997541532304784466074879002
  s21_decimal dec_check = {{0x8a63441a, 0xea755c83, 0x94a0464a, 0x0}};
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
  // 28240622426912071351455
  s21_decimal dec_1 = {{0xd7e7fc9f, 0xed5d980b, 0x5fa, 0x0}};
  // -55661294082421.42375859390
  s21_decimal dec_2 = {{0x7acc54be, 0x7ad6a2b6, 0x49aac, 0x800b0000}};
  // 28240622482573365433876.423759
  s21_decimal dec_check = {{0x67b9244f, 0x65bf5b47, 0x5b40186c, 0x60000}};
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
  // 97597693
  s21_decimal dec_1 = {{0x5d138fd, 0x0, 0x0, 0x0}};
  // 5151338875884
  s21_decimal dec_2 = {{0x63b94bec, 0x4af, 0x0, 0x0}};
  // -5151241278191
  s21_decimal dec_check = {{0x5de812ef, 0x4af, 0x0, 0x80000000}};
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
  // 19829557274708754369258
  s21_decimal dec_1 = {{0xb6510aea, 0xf6635fd9, 0x432, 0x0}};
  // -8129441444937.17446338742894
  s21_decimal dec_2 = {{0x92af0a6e, 0x60e399d4, 0x2a0739e, 0x800e0000}};
  // 19829557282838195814195.174463
  s21_decimal dec_check = {{0x489a9c3f, 0x46215a1a, 0x4012a016, 0x60000}};
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
  // 62.48950
  s21_decimal dec_1 = {{0x5f59f6, 0x0, 0x0, 0x50000}};
  // -39685823898422324984
  s21_decimal dec_2 = {{0x342baef8, 0x26c05e92, 0x2, 0x80000000}};
  // 39685823898422325046.48950
  s21_decimal dec_check = {{0x283a84f6, 0x484dd6db, 0x34861, 0x50000}};
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
  // -279695.151
  s21_decimal dec_1 = {{0x10abcf2f, 0x0, 0x0, 0x80030000}};
  // 58863585286478429064647595488
  s21_decimal dec_2 = {{0x1ce2d5e0, 0x64efd170, 0xbe32d108, 0x0}};
  // -58863585286478429064647875183
  s21_decimal dec_check = {{0x1ce71a6f, 0x64efd170, 0xbe32d108, 0x80000000}};
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
  // 40.970
  s21_decimal dec_1 = {{0xa00a, 0x0, 0x0, 0x30000}};
  // 6412431920628119461222085
  s21_decimal dec_2 = {{0x7f94d6c5, 0xa186cae0, 0x54de2, 0x0}};
  // -6412431920628119461222044.030
  s21_decimal dec_check = {{0x5d66517e, 0xf6887cf2, 0x14b83d46, 0x80030000}};
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
  // 139872911237064330169033
  s21_decimal dec_1 = {{0x4311cac9, 0x86950baa, 0x1d9e, 0x0}};
  // -7.202
  s21_decimal dec_2 = {{0x1c22, 0x0, 0x0, 0x80030000}};
  // 139872911237064330169040.202
  s21_decimal dec_check = {{0xfd803d4a, 0xb6359115, 0x73b33d, 0x30000}};
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
  // 2595346754944387864388395731
  s21_decimal dec_1 = {{0x3ed762d3, 0x80d16b1b, 0x862d20d, 0x0}};
  // 106419647577789827.23963
  s21_decimal dec_2 = {{0x7a33617b, 0xe6edc3a7, 0x240, 0x50000}};
  // 2595346754837968216810605903.8
  s21_decimal dec_check = {{0x673051e, 0xf9696602, 0x53dc3486, 0x10000}};
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
  // 66007158340132
  s21_decimal dec_1 = {{0x7d39ba24, 0x3c08, 0x0, 0x0}};
  // -1.3637845619931701
  s21_decimal dec_2 = {{0x5fad7a35, 0x30738c, 0x0, 0x80100000}};
  // 66007158340133.363784561993170
  s21_decimal dec_check = {{0xbb4825d2, 0x992e5e94, 0xd547d777, 0xf0000}};
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
  // 977195235734.177122
  s21_decimal dec_1 = {{0xb623c562, 0xd8fb1e3, 0x0, 0x60000}};
  // 8485331552
  s21_decimal dec_2 = {{0xf9c3e260, 0x1, 0x0, 0x0}};
  // 968709904182.177122
  s21_decimal dec_check = {{0x812e6d62, 0xd718c86, 0x0, 0x60000}};
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
  // -59393.56117415291
  s21_decimal dec_1 = {{0x1b92b57b, 0x1519d0, 0x0, 0x800b0000}};
  // -55925054.0554
  s21_decimal dec_2 = {{0x35ee080a, 0x82, 0x0, 0x80040000}};
  // 55865660.49422584709
  s21_decimal dec_check = {{0x1a172b85, 0x4d877839, 0x0, 0xb0000}};
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
  // 391.65127595960
  s21_decimal dec_1 = {{0xd78497b8, 0x239e, 0x0, 0xb0000}};
  // -3804184873192030506458880627
  s21_decimal dec_2 = {{0x9e891a73, 0x33db469c, 0xc4abf7b, 0x80000000}};
  // 3804184873192030506458881018.7
  s21_decimal dec_check = {{0x315b17cb, 0x690c21e, 0x7aeb7ad0, 0x10000}};
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
  // 42619147.7085804467212654096
  s21_decimal dec_1 = {{0x3d0e1610, 0x447eed83, 0x160898e, 0x130000}};
  // -656
  s21_decimal dec_2 = {{0x290, 0x0, 0x0, 0x80000000}};
  // 42619803.7085804467212654096
  s21_decimal dec_check = {{0x9f8e1610, 0xe2c8a924, 0x1608af1, 0x130000}};
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
  // 180734.991021173301357888
  s21_decimal dec_1 = {{0x20bcad40, 0xa9dad6bc, 0x2645, 0x120000}};
  // 557092
  s21_decimal dec_2 = {{0x88024, 0x0, 0x0, 0x0}};
  // -376357.008978826698642112
  s21_decimal dec_check = {{0x695352c0, 0x5ab5e959, 0x4fb2, 0x80120000}};
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
  // -332896529406543580900428.1
  s21_decimal dec_1 = {{0xce11baf9, 0x91f87a78, 0x2c0ef, 0x80010000}};
  // -9246747132635
  s21_decimal dec_2 = {{0xed1402db, 0x868, 0x0, 0x80000000}};
  // -332896529397296833767793.1
  s21_decimal dec_check = {{0x8b499e6b, 0x91f8265f, 0x2c0ef, 0x80010000}};
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
  // -400377179011935358
  s21_decimal dec_1 = {{0x4b2dec7e, 0x58e6cec, 0x0, 0x80000000}};
  // 1.831
  s21_decimal dec_2 = {{0x727, 0x0, 0x0, 0x30000}};
  // -400377179011935359.831
  s21_decimal dec_check = {{0xab63d357, 0xb4597b05, 0x15, 0x80030000}};
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
  // 22731041129979560958171.5
  s21_decimal dec_1 = {{0x4077f893, 0x85a78efd, 0x3022, 0x10000}};
  // -8
  s21_decimal dec_2 = {{0x8, 0x0, 0x0, 0x80000000}};
  // 22731041129979560958179.5
  s21_decimal dec_check = {{0x4077f8e3, 0x85a78efd, 0x3022, 0x10000}};
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
  // -3360
  s21_decimal dec_1 = {{0xd20, 0x0, 0x0, 0x80000000}};
  // -909.941202764
  s21_decimal dec_2 = {{0xdcb8df4c, 0xd3, 0x0, 0x80090000}};
  // -2450.058797236
  s21_decimal dec_check = {{0x72e260b4, 0x23a, 0x0, 0x80090000}};
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
  // 25796.01
  s21_decimal dec_1 = {{0x275c91, 0x0, 0x0, 0x20000}};
  // -1.97643789336207
  s21_decimal dec_2 = {{0x87dafe8f, 0xb3c1, 0x0, 0x800e0000}};
  // 25797.98643789336207
  s21_decimal dec_check = {{0xbb190e8f, 0x23cd4932, 0x0, 0xe0000}};
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
  // 992
  s21_decimal dec_1 = {{0x3e0, 0x0, 0x0, 0x0}};
  // -758173860564485
  s21_decimal dec_2 = {{0x1ba30e05, 0x2b18e, 0x0, 0x80000000}};
  // 758173860565477
  s21_decimal dec_check = {{0x1ba311e5, 0x2b18e, 0x0, 0x0}};
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
  // -1653514.46979403877
  s21_decimal dec_1 = {{0xd44de065, 0x24b7243, 0x0, 0x800b0000}};
  // -4642572678.9789
  s21_decimal dec_2 = {{0x54f4289d, 0x2a39, 0x0, 0x80040000}};
  // 4640919164.50910596123
  s21_decimal dec_check = {{0xd2ca6c1b, 0x2891b325, 0x19, 0xb0000}};
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
  // 56051439506863349138019331640
  s21_decimal dec_1 = {{0xf3d02e38, 0x36cc398a, 0xb51caa00, 0x0}};
  // -69.9603697809159180234588
  s21_decimal dec_2 = {{0xd55faf5c, 0x97aaf22d, 0x9425, 0x80160000}};
  // 56051439506863349138019331710
  s21_decimal dec_check = {{0xf3d02e7e, 0x36cc398a, 0xb51caa00, 0x0}};
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
  // 16851706810340.76191499089
  s21_decimal dec_1 = {{0xcadca351, 0x49219f91, 0x164d9, 0xb0000}};
  // 5
  s21_decimal dec_2 = {{0x5, 0x0, 0x0, 0x0}};
  // 16851706810335.76191499089
  s21_decimal dec_check = {{0x608a1b51, 0x49219f1d, 0x164d9, 0xb0000}};
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
  // -95898907510722
  s21_decimal dec_1 = {{0x345107c2, 0x5738, 0x0, 0x80000000}};
  // -707.0
  s21_decimal dec_2 = {{0x1b9e, 0x0, 0x0, 0x80010000}};
  // -95898907510015.0
  s21_decimal dec_check = {{0xb2a31f6, 0x36832, 0x0, 0x80010000}};
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
  // -93.6
  s21_decimal dec_1 = {{0x3a8, 0x0, 0x0, 0x80010000}};
  // -231177674946
  s21_decimal dec_2 = {{0xd34360c2, 0x35, 0x0, 0x80000000}};
  // 231177674852.4
  s21_decimal dec_check = {{0x40a1c3ec, 0x21a, 0x0, 0x10000}};
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
  // -84517767824451741
  s21_decimal dec_1 = {{0x4862a89d, 0x12c4476, 0x0, 0x80000000}};
  // 0.41
  s21_decimal dec_2 = {{0x29, 0x0, 0x0, 0x20000}};
  // -84517767824451741.41
  s21_decimal dec_check = {{0x4689dd7d, 0x754abe34, 0x0, 0x80020000}};
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
  // 326263541424532884995
  s21_decimal dec_1 = {{0xaa3a0e03, 0xafd0f24e, 0x11, 0x0}};
  // 73217791029630
  s21_decimal dec_2 = {{0x586cf17e, 0x4297, 0x0, 0x0}};
  // 326263468206741855365
  s21_decimal dec_check = {{0x51cd1c85, 0xafd0afb7, 0x11, 0x0}};
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
  // 132
  s21_decimal dec_1 = {{0x84, 0x0, 0x0, 0x0}};
  // -6622
  s21_decimal dec_2 = {{0x19de, 0x0, 0x0, 0x80000000}};
  // 6754
  s21_decimal dec_check = {{0x1a62, 0x0, 0x0, 0x0}};
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
  // 2
  s21_decimal dec_1 = {{0x2, 0x0, 0x0, 0x0}};
  // -492315858607014
  s21_decimal dec_2 = {{0x37de9ba6, 0x1bfc2, 0x0, 0x80000000}};
  // 492315858607016
  s21_decimal dec_check = {{0x37de9ba8, 0x1bfc2, 0x0, 0x0}};
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
  // 56726578
  s21_decimal dec_1 = {{0x3619432, 0x0, 0x0, 0x0}};
  // -233953152143897164
  s21_decimal dec_2 = {{0xff9eb24c, 0x33f2b26, 0x0, 0x80000000}};
  // 233953152200623742
  s21_decimal dec_check = {{0x300467e, 0x33f2b27, 0x0, 0x0}};
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
  // 2579942045.74
  s21_decimal dec_1 = {{0x11a7259e, 0x3c, 0x0, 0x20000}};
  // -1446292634944846899
  s21_decimal dec_2 = {{0x1b26bc33, 0x1412437d, 0x0, 0x80000000}};
  // 1446292637524788944.74
  s21_decimal dec_check = {{0xacc8a98a, 0xd7225d1a, 0x7, 0x20000}};
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
  // 2
  s21_decimal dec_1 = {{0x2, 0x0, 0x0, 0x0}};
  // -56116596084
  s21_decimal dec_2 = {{0x10cf4d74, 0xd, 0x0, 0x80000000}};
  // 56116596086
  s21_decimal dec_check = {{0x10cf4d76, 0xd, 0x0, 0x0}};
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
  // 1923198.8644610056308
  s21_decimal dec_1 = {{0xde542074, 0xae5bfc6, 0x1, 0xd0000}};
  // -446236.98392741810719
  s21_decimal dec_2 = {{0xff8b921f, 0x6b473942, 0x2, 0x800e0000}};
  // 2369435.84838842373799
  s21_decimal dec_check = {{0xaed4d6a7, 0xd840b707, 0xc, 0xe0000}};
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
  // 6306.3
  s21_decimal dec_1 = {{0xf657, 0x0, 0x0, 0x10000}};
  // -3111084314727554285.240
  s21_decimal dec_2 = {{0x7970feb8, 0xa6f7cd03, 0xa8, 0x80030000}};
  // 3111084314727560591.540
  s21_decimal dec_check = {{0x79d138b4, 0xa6f7cd03, 0xa8, 0x30000}};
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
  // 52783316267387908718.3926056
  s21_decimal dec_1 = {{0x60119328, 0x1584052d, 0x1b49d05, 0x70000}};
  // -79.8401151
  s21_decimal dec_2 = {{0x2f96a27f, 0x0, 0x0, 0x80070000}};
  // 52783316267387908798.2327207
  s21_decimal dec_check = {{0x8fa835a7, 0x1584052d, 0x1b49d05, 0x70000}};
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
  // -6
  s21_decimal dec_1 = {{0x6, 0x0, 0x0, 0x80000000}};
  // -46140
  s21_decimal dec_2 = {{0xb43c, 0x0, 0x0, 0x80000000}};
  // 46134
  s21_decimal dec_check = {{0xb436, 0x0, 0x0, 0x0}};
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
  // 0.1010
  s21_decimal dec_1 = {{0x3f2, 0x0, 0x0, 0x40000}};
  // -75552978
  s21_decimal dec_2 = {{0x480d8d2, 0x0, 0x0, 0x80000000}};
  // 75552978.1010
  s21_decimal dec_check = {{0xe9158f12, 0xaf, 0x0, 0x40000}};
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
  // -169316.200
  s21_decimal dec_1 = {{0xa178f68, 0x0, 0x0, 0x80030000}};
  // -6171149626458639481185
  s21_decimal dec_2 = {{0xb3c0b961, 0x89e7b11c, 0x14e, 0x80000000}};
  // 6171149626458639311868.800
  s21_decimal dec_check = {{0x1ebc9380, 0xb10bd81e, 0x51aca, 0x30000}};
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
  // -91634976333
  s21_decimal dec_1 = {{0x55dec64d, 0x15, 0x0, 0x80000000}};
  // 6212630.3
  s21_decimal dec_2 = {{0x3b3f8df, 0x0, 0x0, 0x10000}};
  // -91641188963.3
  s21_decimal dec_check = {{0x5e67b7e1, 0xd5, 0x0, 0x80010000}};
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
  // -37813.4193885369
  s21_decimal dec_1 = {{0x3a4dd0b9, 0x157e9, 0x0, 0x800a0000}};
  // -45569368341756022408742
  s21_decimal dec_2 = {{0x530cc626, 0x52063df7, 0x9a6, 0x80000000}};
  // 45569368341756022370928.580611
  s21_decimal dec_check = {{0xdca65803, 0xbf071ef4, 0x933e1917, 0x60000}};
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
  // -763458633132
  s21_decimal dec_1 = {{0xc1ae3dac, 0xb1, 0x0, 0x80000000}};
  // -293
  s21_decimal dec_2 = {{0x125, 0x0, 0x0, 0x80000000}};
  // -763458632839
  s21_decimal dec_check = {{0xc1ae3c87, 0xb1, 0x0, 0x80000000}};
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
  // 2755037767099778095
  s21_decimal dec_1 = {{0x9ac4842f, 0x263bdc40, 0x0, 0x0}};
  // -957248
  s21_decimal dec_2 = {{0xe9b40, 0x0, 0x0, 0x80000000}};
  // 2755037767100735343
  s21_decimal dec_check = {{0x9ad31f6f, 0x263bdc40, 0x0, 0x0}};
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
  // -94736349828938526498
  s21_decimal dec_1 = {{0x1704ef22, 0x22bb203c, 0x5, 0x80000000}};
  // -1989144690954
  s21_decimal dec_2 = {{0x2243410a, 0x1cf, 0x0, 0x80000000}};
  // -94736347839793835544
  s21_decimal dec_check = {{0xf4c1ae18, 0x22bb1e6c, 0x5, 0x80000000}};
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
  // -63658159.3372149422190
  s21_decimal dec_1 = {{0xb20186e, 0x8258226b, 0x22, 0x800d0000}};
  // 1809436752974495
  s21_decimal dec_2 = {{0x52e7929f, 0x66dac, 0x0, 0x0}};
  // -1809436816632654.3372149422190
  s21_decimal dec_check = {{0x8391786e, 0xc8c0a5ef, 0x3a774f7f, 0x800d0000}};
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
  // -4244576084821966449
  s21_decimal dec_1 = {{0xddee7e71, 0x3ae7c375, 0x0, 0x80000000}};
  // 2597799083343
  s21_decimal dec_2 = {{0xd8e43d4f, 0x25c, 0x0, 0x0}};
  // -4244578682621049792
  s21_decimal dec_check = {{0xb6d2bbc0, 0x3ae7c5d2, 0x0, 0x80000000}};
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
  // -3677391442363
  s21_decimal dec_1 = {{0x359c51bb, 0x358, 0x0, 0x80000000}};
  // -2708497921239
  s21_decimal dec_2 = {{0x9f0e74d7, 0x276, 0x0, 0x80000000}};
  // -968893521124
  s21_decimal dec_check = {{0x968ddce4, 0xe1, 0x0, 0x80000000}};
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
  // 965434
  s21_decimal dec_1 = {{0xebb3a, 0x0, 0x0, 0x0}};
  // 381888359680993
  s21_decimal dec_2 = {{0x5005cbe1, 0x15b53, 0x0, 0x0}};
  // -381888358715559
  s21_decimal dec_check = {{0x4ff710a7, 0x15b53, 0x0, 0x80000000}};
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
  // 7.89267870
  s21_decimal dec_1 = {{0x2f0b459e, 0x0, 0x0, 0x80000}};
  // -67412684574337879
  s21_decimal dec_2 = {{0xbd68ab57, 0xef7f7a, 0x0, 0x80000000}};
  // 67412684574337886.89267870
  s21_decimal dec_check = {{0xdae5bc9e, 0xe53530fd, 0x59384, 0x80000}};
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
  // -23333730982616748560138.6160
  s21_decimal dec_1 = {{0x15938eb0, 0xe969ef8e, 0xc10318, 0x80040000}};
  // -667786.0019644512228
  s21_decimal dec_2 = {{0x9ab1b7e4, 0x5cac864e, 0x0, 0x800d0000}};
  // -23333730982616747892352.614036
  s21_decimal dec_check = {{0xf27dfe94, 0x2d6192e4, 0x4b6535bb, 0x80060000}};
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
  // -85.3509904351079553
  s21_decimal dec_1 = {{0x651fac81, 0xbd846bc, 0x0, 0x80100000}};
  // 985
  s21_decimal dec_2 = {{0x3d9, 0x0, 0x0, 0x0}};
  // -1070.3509904351079553
  s21_decimal dec_check = {{0x62b8ac81, 0x948a818c, 0x0, 0x80100000}};
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
  // -9374.948043904333905466
  s21_decimal dec_1 = {{0xd503fe3a, 0x378a2753, 0x1fc, 0x80120000}};
  // 300380839241505747164342031
  s21_decimal dec_2 = {{0x492e270f, 0xec86df2b, 0xf8781d, 0x0}};
  // -300380839241505747164351405.95
  s21_decimal dec_check = {{0x96158ff3, 0x64af2ce8, 0x610eebb0, 0x80020000}};
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
  // -280.6173264395420359492626629
  s21_decimal dec_1 = {{0x97c3e8c5, 0x7b3ddd57, 0x911364d, 0x80190000}};
  // 185639364820055857955024
  s21_decimal dec_2 = {{0x209600d0, 0x87b6b855, 0x274f, 0x0}};
  // -185639364820055857955304.61733
  s21_decimal dec_check = {{0xe4a99225, 0x2f04e4d8, 0x3bfbba75, 0x80050000}};
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
  // 5498230625213274560.184
  s21_decimal dec_1 = {{0xd32296b8, 0xf4726c1, 0x12a, 0x30000}};
  // -20
  s21_decimal dec_2 = {{0x14, 0x0, 0x0, 0x80000000}};
  // 5498230625213274580.184
  s21_decimal dec_check = {{0xd322e4d8, 0xf4726c1, 0x12a, 0x30000}};
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
  // -9643831242292493.730994938918
  s21_decimal dec_1 = {{0x17e36426, 0x32e82ba1, 0x1f2930b3, 0x800c0000}};
  // 58463608.888681702
  s21_decimal dec_2 = {{0xb018e4e6, 0xcfb457, 0x0, 0x90000}};
  // -9643831300756102.619676640918
  s21_decimal dec_check = {{0xf9218696, 0x5e40a228, 0x1f2930b6, 0x800c0000}};
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
  // -7438714935648496591812
  s21_decimal dec_1 = {{0xb15f23c4, 0x40e84df8, 0x193, 0x80000000}};
  // 724915088867776695775505.17
  s21_decimal dec_2 = {{0x53b2ab5, 0x9232f16f, 0x3bf6ac, 0x20000}};
  // -732353803803425192367317.17
  s21_decimal dec_check = {{0x4e652345, 0xecf16694, 0x3c9431, 0x80020000}};
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
  // -636077398
  s21_decimal dec_1 = {{0x25e9c556, 0x0, 0x0, 0x80000000}};
  // 438.5
  s21_decimal dec_2 = {{0x1121, 0x0, 0x0, 0x10000}};
  // -636077836.5
  s21_decimal dec_check = {{0x7b21c67d, 0x1, 0x0, 0x80010000}};
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
  // 1955122
  s21_decimal dec_1 = {{0x1dd532, 0x0, 0x0, 0x0}};
  // 8346381120073.6352313208797
  s21_decimal dec_2 = {{0x3d4eefdd, 0x4579adb2, 0x450a26, 0xd0000}};
  // -8346379164951.6352313208797
  s21_decimal dec_check = {{0x6bcbafdd, 0x3625cab1, 0x450a25, 0x800d0000}};
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
  // 8152457.78423456338973163765
  s21_decimal dec_1 = {{0x4a6a00f5, 0x342d6028, 0x2a25b02, 0x140000}};
  // -245295.252659470023
  s21_decimal dec_2 = {{0x8fdb7ec7, 0x36776bb, 0x0, 0x800c0000}};
  // 8397753.03689403341273163765
  s21_decimal dec_check = {{0x6c49e7f5, 0x6ed83022, 0x2b6a556, 0x140000}};
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
  // -48554812887915.822
  s21_decimal dec_1 = {{0x5651dd2e, 0xac8058, 0x0, 0x80030000}};
  // 45091100410525781079045448432
  s21_decimal dec_2 = {{0x1dc822f0, 0x3e21d34d, 0x91b27beb, 0x0}};
  // -45091100410525829633858336348
  s21_decimal dec_check = {{0x2a27f65c, 0x3e21ff76, 0x91b27beb, 0x80000000}};
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
  // 2572760
  s21_decimal dec_1 = {{0x2741d8, 0x0, 0x0, 0x0}};
  // 24690815043023.099238923433689
  s21_decimal dec_2 = {{0x39c8f6d9, 0x811157f1, 0x4fc7c375, 0xf0000}};
  // -24690812470263.099238923433689
  s21_decimal dec_check = {{0x4bccf6d9, 0x8d9b302, 0x4fc7c2ea, 0x800f0000}};
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
  // 7802578356.84554184526080
  s21_decimal dec_1 = {{0xff570900, 0xdcadd3e9, 0xa539, 0xe0000}};
  // 2144.28979547739
  s21_decimal dec_2 = {{0xa327ce5b, 0xc305, 0x0, 0xb0000}};
  // 7802576212.55574636787080
  s21_decimal dec_check = {{0xabd8f588, 0xd9b405e4, 0xa539, 0xe0000}};
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
  // -90998
  s21_decimal dec_1 = {{0x16376, 0x0, 0x0, 0x80000000}};
  // -73536.18817802263
  s21_decimal dec_2 = {{0xcd72e017, 0x1a2013, 0x0, 0x800b0000}};
  // -17461.81182197737
  s21_decimal dec_check = {{0x7d140fe9, 0x63424, 0x0, 0x800b0000}};
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
  // 68.8005300399832248
  s21_decimal dec_1 = {{0xedeafcb8, 0x98c492c, 0x0, 0x100000}};
  // -2326136709
  s21_decimal dec_2 = {{0x8aa60785, 0x0, 0x0, 0x80000000}};
  // 2326136777.8005300399832248
  s21_decimal dec_check = {{0x442ffcb8, 0x46248755, 0x133dc9, 0x100000}};
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
  // 391402317144
  s21_decimal dec_1 = {{0x21656558, 0x5b, 0x0, 0x0}};
  // 50401293339314553199
  s21_decimal dec_2 = {{0x2e1b016f, 0xbb755d41, 0x2, 0x0}};
  // -50401292947912236055
  s21_decimal dec_check = {{0xcb59c17, 0xbb755ce6, 0x2, 0x80000000}};
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
  // 473.60
  s21_decimal dec_1 = {{0xb900, 0x0, 0x0, 0x20000}};
  // -21.576
  s21_decimal dec_2 = {{0x5448, 0x0, 0x0, 0x80030000}};
  // 495.176
  s21_decimal dec_check = {{0x78e48, 0x0, 0x0, 0x30000}};
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
  // 17480139492405311569806224064
  s21_decimal dec_1 = {{0x8ab7eac0, 0xa6993208, 0x387b3b84, 0x0}};
  // 745837
  s21_decimal dec_2 = {{0xb616d, 0x0, 0x0, 0x0}};
  // 17480139492405311569805478227
  s21_decimal dec_check = {{0x8aac8953, 0xa6993208, 0x387b3b84, 0x0}};
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
  // 79228162514264337593430382772
  s21_decimal dec_1 = {{0xf93b18b4, 0xffffffff, 0xffffffff, 0x0}};
  // -90046400
  s21_decimal dec_2 = {{0x55dffc0, 0x0, 0x0, 0x80000000}};
  // 79228162514264337593520429172
  s21_decimal dec_check = {{0xfe991874, 0xffffffff, 0xffffffff, 0x0}};
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
  // 65001.255520005566523526812
  s21_decimal dec_1 = {{0x3e184e9c, 0x1f59215e, 0x35c48d, 0x150000}};
  // 8996937672937885834
  s21_decimal dec_2 = {{0x4dcad08a, 0x7cdb8b25, 0x0, 0x0}};
  // -8996937672937820832.7444799944
  s21_decimal dec_check = {{0x83521c8, 0x5ba16f52, 0x22b4ec95, 0x800a0000}};
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
  // 36285394466.28582
  s21_decimal dec_1 = {{0x2cc510e6, 0xce423, 0x0, 0x50000}};
  // 945256090676981346650
  s21_decimal dec_2 = {{0xfe7315a, 0x3e103e4a, 0x33, 0x0}};
  // -945256090640695952183.71418
  s21_decimal dec_check = {{0xf8e8e35a, 0x88fede60, 0x4e3093, 0x80050000}};
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
  // -131121964867756
  s21_decimal dec_1 = {{0x362360ac, 0x7741, 0x0, 0x80000000}};
  // -802746070540036781853796
  s21_decimal dec_2 = {{0x657b4c64, 0xf3a16933, 0xa9fc, 0x80000000}};
  // 802746070408914816986040
  s21_decimal dec_check = {{0x2f57ebb8, 0xf3a0f1f2, 0xa9fc, 0x0}};
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
  // 71646.436447337839949
  s21_decimal dec_1 = {{0x8a2bfd4d, 0xe24b4659, 0x3, 0xf0000}};
  // 28899824078386686136
  s21_decimal dec_2 = {{0xa784e8b8, 0x9110cce1, 0x1, 0x0}};
  // -28899824078386614489.563552662
  s21_decimal dec_check = {{0xc9ec5b96, 0x8304349b, 0x5d615fca, 0x80090000}};
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
  // 210310.7639040678
  s21_decimal dec_1 = {{0xe7bfdaa6, 0x778c3, 0x0, 0xa0000}};
  // -74
  s21_decimal dec_2 = {{0x4a, 0x0, 0x0, 0x80000000}};
  // 210384.7639040678
  s21_decimal dec_check = {{0x332fc2a6, 0x77970, 0x0, 0xa0000}};
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
  // 2.9
  s21_decimal dec_1 = {{0x1d, 0x0, 0x0, 0x10000}};
  // 449700872761247689291879
  s21_decimal dec_2 = {{0x3a4f3867, 0x554a0704, 0x5f3a, 0x0}};
  // -449700872761247689291876.1
  s21_decimal dec_check = {{0x471833e9, 0x54e4462a, 0x3b847, 0x80010000}};
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
  // -739514908.400799545
  s21_decimal dec_1 = {{0x1d55cf39, 0xa4348e4, 0x0, 0x80090000}};
  // -52.87
  s21_decimal dec_2 = {{0x14a7, 0x0, 0x0, 0x80020000}};
  // -739514855.530799545
  s21_decimal dec_check = {{0xce09a1b9, 0xa4348d7, 0x0, 0x80090000}};
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
  // -440607783507789389679.044
  s21_decimal dec_1 = {{0x726ec9c4, 0x6553743f, 0x5d4d, 0x80030000}};
  // -0.44
  s21_decimal dec_2 = {{0x2c, 0x0, 0x0, 0x80020000}};
  // -440607783507789389678.604
  s21_decimal dec_check = {{0x726ec80c, 0x6553743f, 0x5d4d, 0x80030000}};
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
  // 8881147872.55099707
  s21_decimal dec_1 = {{0x8e1ca13b, 0xc5337b1, 0x0, 0x80000}};
  // 5.1701736
  s21_decimal dec_2 = {{0x314e7e8, 0x0, 0x0, 0x70000}};
  // 8881147867.38082347
  s21_decimal dec_check = {{0x6f4b922b, 0xc5337b1, 0x0, 0x80000}};
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
  // -4812
  s21_decimal dec_1 = {{0x12cc, 0x0, 0x0, 0x80000000}};
  // -281166770129890
  s21_decimal dec_2 = {{0x3d74cbe2, 0xffb8, 0x0, 0x80000000}};
  // 281166770125078
  s21_decimal dec_check = {{0x3d74b916, 0xffb8, 0x0, 0x0}};
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
  // 904387544439
  s21_decimal dec_1 = {{0x91b2c577, 0xd2, 0x0, 0x0}};
  // 2343631195
  s21_decimal dec_2 = {{0x8bb0f95b, 0x0, 0x0, 0x0}};
  // 902043913244
  s21_decimal dec_check = {{0x601cc1c, 0xd2, 0x0, 0x0}};
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
  // -51.583170558
  s21_decimal dec_1 = {{0x298b7fe, 0xc, 0x0, 0x80090000}};
  // 25895861.460
  s21_decimal dec_2 = {{0x7837cd4, 0x6, 0x0, 0x30000}};
  // -25895913.043170558
  s21_decimal dec_check = {{0x1a1294fe, 0x5c0032, 0x0, 0x80090000}};
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
  // 2398
  s21_decimal dec_1 = {{0x95e, 0x0, 0x0, 0x0}};
  // -7609.857219548
  s21_decimal dec_2 = {{0xced61bdc, 0x6eb, 0x0, 0x80090000}};
  // 10007.857219548
  s21_decimal dec_check = {{0x22c647dc, 0x91a, 0x0, 0x90000}};
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
  // -84953950035848894665
  s21_decimal dec_1 = {{0xc90e98c9, 0x9af90f73, 0x4, 0x80000000}};
  // 24344477157
  s21_decimal dec_2 = {{0xab0b3de5, 0x5, 0x0, 0x0}};
  // -84953950060193371822
  s21_decimal dec_check = {{0x7419d6ae, 0x9af90f79, 0x4, 0x80000000}};
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
  // -66.928
  s21_decimal dec_1 = {{0x10570, 0x0, 0x0, 0x80030000}};
  // -41804685889850591445268
  s21_decimal dec_2 = {{0xc13c8114, 0x3c8f6619, 0x8da, 0x80000000}};
  // 41804685889850591445201.072
  s21_decimal dec_check = {{0xd45730b0, 0x9026d49a, 0x22947c, 0x30000}};
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
  // 543480.27335070561666468679
  s21_decimal dec_1 = {{0xc9de0b47, 0x772120f3, 0x2cf4a4, 0x140000}};
  // -3048209605706206965779
  s21_decimal dec_2 = {{0x7bfc7013, 0x3e67f648, 0xa5, 0x80000000}};
  // 3048209605706207509259.2733507
  s21_decimal dec_check = {{0xd6a7ad43, 0x59533fb7, 0x627e32ea, 0x70000}};
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
  // 1659034802839260551584
  s21_decimal dec_1 = {{0x3c58d9a0, 0xefbba33d, 0x59, 0x0}};
  // 617432256222489745713
  s21_decimal dec_2 = {{0xf1781931, 0x789805bc, 0x21, 0x0}};
  // 1041602546616770805871
  s21_decimal dec_check = {{0x4ae0c06f, 0x77239d80, 0x38, 0x0}};
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
  // -5920185383992542157
  s21_decimal dec_1 = {{0x8155c3cd, 0x5228b93d, 0x0, 0x80000000}};
  // 99305947996033356.1934670
  s21_decimal dec_2 = {{0x82e8b34e, 0xdcbe514d, 0xd249, 0x70000}};
  // -6019491331988575513.1934670
  s21_decimal dec_check = {{0xb03cb7ce, 0xca29c4c2, 0x31cac4, 0x80070000}};
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
  // -568246368040356757365
  s21_decimal dec_1 = {{0xcf593f75, 0xce00a508, 0x1e, 0x80000000}};
  // -27446954271.477351
  s21_decimal dec_2 = {{0x7848e67, 0x6182dc, 0x0, 0x80060000}};
  // -568246368012909803093.522649
  s21_decimal dec_check = {{0x890278d9, 0x55d82b07, 0x1d60ad9, 0x80060000}};
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
  // -79228162514264337592128547564
  s21_decimal dec_1 = {{0xaba2aaec, 0xffffffff, 0xffffffff, 0x80000000}};
  // -4.52254218533381951
  s21_decimal dec_2 = {{0xcbdaa73f, 0x646bad0, 0x0, 0x80110000}};
  // -79228162514264337592128547559
  s21_decimal dec_check = {{0xaba2aae7, 0xffffffff, 0xffffffff, 0x80000000}};
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
  // 88794089800797
  s21_decimal dec_1 = {{0xfc2e445d, 0x50c1, 0x0, 0x0}};
  // -39294542801551741494
  s21_decimal dec_2 = {{0x91dfd236, 0x2152427c, 0x2, 0x80000000}};
  // 39294631595641542291
  s21_decimal dec_check = {{0x8e0e1693, 0x2152933e, 0x2, 0x0}};
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
  // -6097205477546
  s21_decimal dec_1 = {{0x9dc440aa, 0x58b, 0x0, 0x80000000}};
  // -2685639708647239297.5547884
  s21_decimal dec_2 = {{0x41437dec, 0x340c688c, 0x163710, 0x80070000}};
  // 2685633611441761751.5547884
  s21_decimal dec_check = {{0xfc4f8cec, 0xe5e427c5, 0x16370c, 0x70000}};
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
  // 2.09988572844366993845391
  s21_decimal dec_1 = {{0x74d06c8f, 0x80db22cf, 0x2c77, 0x170000}};
  // 3852508
  s21_decimal dec_2 = {{0x3ac8dc, 0x0, 0x0, 0x0}};
  // -3852505.9001142715563300615461
  s21_decimal dec_check = {{0x9b7f525, 0x356416b8, 0x7c7b2e91, 0x80160000}};
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
  // 191261850880931779986900015
  s21_decimal dec_1 = {{0x3ba0c42f, 0xb6416352, 0x9e3545, 0x0}};
  // -360.3373904716124383
  s21_decimal dec_2 = {{0x8f8450df, 0x3201c179, 0x0, 0x80100000}};
  // 191261850880931779986900375.34
  s21_decimal dec_check = {{0x4acd2f1e, 0x318acc1f, 0x3dcccf3b, 0x20000}};
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
  // 760.76742333041
  s21_decimal dec_1 = {{0xff33d271, 0x4530, 0x0, 0xb0000}};
  // 691.84252088900876971
  s21_decimal dec_2 = {{0x92037aab, 0xc01fd6b8, 0x3, 0x110000}};
  // 68.92490244140123029
  s21_decimal dec_check = {{0xebd14395, 0x5fa70b5b, 0x0, 0x110000}};
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
  // 86681055
  s21_decimal dec_1 = {{0x52aa5df, 0x0, 0x0, 0x0}};
  // 51801383.7521157168
  s21_decimal dec_2 = {{0x362f7c30, 0x7305ad7, 0x0, 0xa0000}};
  // 34879671.2478842832
  s21_decimal dec_check = {{0x12201fd0, 0x4d72cc3, 0x0, 0xa0000}};
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
  // 919.55505
  s21_decimal dec_1 = {{0x57b2131, 0x0, 0x0, 0x50000}};
  // -2622921745.48
  s21_decimal dec_2 = {{0x11d4f6d4, 0x3d, 0x0, 0x80020000}};
  // 2622922665.03505
  s21_decimal dec_check = {{0xad5f4d51, 0xee8d, 0x0, 0x50000}};
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
  // -8130269262033387562266783
  s21_decimal dec_1 = {{0x4244f09f, 0xc7a38ea9, 0x6b9a6, 0x80000000}};
  // 837162607296494284486964
  s21_decimal dec_2 = {{0x7592b934, 0xad065292, 0xb146, 0x0}};
  // -8967431869329881846753747
  s21_decimal dec_check = {{0xb7d7a9d3, 0x74a9e13b, 0x76aed, 0x80000000}};
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
  // -365988026846
  s21_decimal dec_1 = {{0x369619de, 0x55, 0x0, 0x80000000}};
  // -275896673146
  s21_decimal dec_2 = {{0x3cb9237a, 0x40, 0x0, 0x80000000}};
  // -90091353700
  s21_decimal dec_check = {{0xf9dcf664, 0x14, 0x0, 0x80000000}};
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
  // -26
  s21_decimal dec_1 = {{0x1a, 0x0, 0x0, 0x80000000}};
  // -8663599641362317
  s21_decimal dec_2 = {{0x7b197f8d, 0x1ec77f, 0x0, 0x80000000}};
  // 8663599641362291
  s21_decimal dec_check = {{0x7b197f73, 0x1ec77f, 0x0, 0x0}};
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
  // 62481486
  s21_decimal dec_1 = {{0x3b9644e, 0x0, 0x0, 0x0}};
  // 3897286177767063704009
  s21_decimal dec_2 = {{0xd5b651c9, 0x45b5e9f8, 0xd3, 0x0}};
  // -3897286177767001222523
  s21_decimal dec_check = {{0xd1fced7b, 0x45b5e9f8, 0xd3, 0x80000000}};
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
  // 22622281578
  s21_decimal dec_1 = {{0x44649f6a, 0x5, 0x0, 0x0}};
  // -0.24
  s21_decimal dec_2 = {{0x18, 0x0, 0x0, 0x80020000}};
  // 22622281578.24
  s21_decimal dec_check = {{0xb74e4580, 0x20e, 0x0, 0x20000}};
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
  // 5
  s21_decimal dec_1 = {{0x5, 0x0, 0x0, 0x0}};
  // -75730461360357255610803772
  s21_decimal dec_2 = {{0x333ea63c, 0x8958d063, 0x3ea48c, 0x80000000}};
  // 75730461360357255610803777
  s21_decimal dec_check = {{0x333ea641, 0x8958d063, 0x3ea48c, 0x0}};
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
  // 7185237
  s21_decimal dec_1 = {{0x6da355, 0x0, 0x0, 0x0}};
  // 41288
  s21_decimal dec_2 = {{0xa148, 0x0, 0x0, 0x0}};
  // 7143949
  s21_decimal dec_check = {{0x6d020d, 0x0, 0x0, 0x0}};
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
  // -923391028639512892
  s21_decimal dec_1 = {{0x8ad7393c, 0xcd08b3f, 0x0, 0x80000000}};
  // -738809749822320807734551
  s21_decimal dec_2 = {{0x58ab6d17, 0xf4f03995, 0x9c72, 0x80000000}};
  // 738808826431292168221659
  s21_decimal dec_check = {{0xcdd433db, 0xe81fae55, 0x9c72, 0x0}};
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
  // -8692873899489379594.23
  s21_decimal dec_1 = {{0xeaf7ff, 0x1fc9337a, 0x2f, 0x80020000}};
  // -8478623
  s21_decimal dec_2 = {{0x815f9f, 0x0, 0x0, 0x80000000}};
  // -8692873899480900971.23
  s21_decimal dec_check = {{0xce619de3, 0x1fc93379, 0x2f, 0x80020000}};
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
  // 323.511
  s21_decimal dec_1 = {{0x4efb7, 0x0, 0x0, 0x30000}};
  // -5311074.184
  s21_decimal dec_2 = {{0x3c908f88, 0x1, 0x0, 0x80030000}};
  // 5311397.695
  s21_decimal dec_check = {{0x3c957f3f, 0x1, 0x0, 0x30000}};
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
  // 6500839
  s21_decimal dec_1 = {{0x6331e7, 0x0, 0x0, 0x0}};
  // 6992127155792
  s21_decimal dec_2 = {{0xfb415e50, 0x65b, 0x0, 0x0}};
  // -6992120654953
  s21_decimal dec_check = {{0xfade2c69, 0x65b, 0x0, 0x80000000}};
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
  // 461069
  s21_decimal dec_1 = {{0x7090d, 0x0, 0x0, 0x0}};
  // -64709449252741
  s21_decimal dec_2 = {{0x57bc7f85, 0x3ada, 0x0, 0x80000000}};
  // 64709449713810
  s21_decimal dec_check = {{0x57c38892, 0x3ada, 0x0, 0x0}};
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
  // -79228162514264337591473645231
  s21_decimal dec_1 = {{0x8499a6af, 0xffffffff, 0xffffffff, 0x80000000}};
  // -8936460631923
  s21_decimal dec_2 = {{0xae8fbf73, 0x820, 0x0, 0x80000000}};
  // -79228162514264328655013013308
  s21_decimal dec_check = {{0xd609e73c, 0xfffff7de, 0xffffffff, 0x80000000}};
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
  // 5452370276689761.4608
  s21_decimal dec_1 = {{0x9bea4f10, 0xf4ab1ac9, 0x2, 0x40000}};
  // -128630349834521.18860619
  s21_decimal dec_2 = {{0x662bc34b, 0x4e78562b, 0x2b9, 0x80080000}};
  // 5581000626524282.64940619
  s21_decimal dec_check = {{0xd6dc244b, 0xaa3eb985, 0x762e, 0x80000}};
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
  // -77224342193487156230.969511
  s21_decimal dec_1 = {{0xf85758a7, 0xfa8f2c28, 0x3fe0e3, 0x80060000}};
  // -466031
  s21_decimal dec_2 = {{0x71c6f, 0x0, 0x0, 0x80000000}};
  // -77224342193486690199.969511
  s21_decimal dec_check = {{0x76ba9ee7, 0xfa8f2bbc, 0x3fe0e3, 0x80060000}};
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
  // 451867253434497553
  s21_decimal dec_1 = {{0x76983a11, 0x6455adf, 0x0, 0x0}};
  // -781049297188206698563
  s21_decimal dec_2 = {{0xbb906043, 0x573c859d, 0x2a, 0x80000000}};
  // 781501164441641196116
  s21_decimal dec_check = {{0x32289a54, 0x5d81e07d, 0x2a, 0x0}};
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
  // -11.29454627
  s21_decimal dec_1 = {{0x43521c23, 0x0, 0x0, 0x80080000}};
  // 218295494142
  s21_decimal dec_2 = {{0xd36ce5fe, 0x32, 0x0, 0x0}};
  // -218295494153.29454627
  s21_decimal dec_check = {{0xb8c5a23, 0x2ef22389, 0x1, 0x80080000}};
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
  // 955835480843.0870084466
  s21_decimal dec_1 = {{0x4eb3b72, 0x28d1dfef, 0x206, 0xa0000}};
  // 8816.091260321914718
  s21_decimal dec_2 = {{0xa6e9df5e, 0x7a590c4a, 0x0, 0xf0000}};
  // 955835472026.995748124685282
  s21_decimal dec_check = {{0xc8aaf3e2, 0xc3f90a96, 0x316a608, 0xf0000}};
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
  // -64487656
  s21_decimal dec_1 = {{0x3d800e8, 0x0, 0x0, 0x80000000}};
  // -76790.4
  s21_decimal dec_2 = {{0xbb7a0, 0x0, 0x0, 0x80010000}};
  // -64410865.6
  s21_decimal dec_check = {{0x26645170, 0x0, 0x0, 0x80010000}};
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
  // -29597560445501269728
  s21_decimal dec_1 = {{0x1c4166e0, 0x9abfa869, 0x1, 0x80000000}};
  // -3
  s21_decimal dec_2 = {{0x3, 0x0, 0x0, 0x80000000}};
  // -29597560445501269725
  s21_decimal dec_check = {{0x1c4166dd, 0x9abfa869, 0x1, 0x80000000}};
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
  // 17
  s21_decimal dec_1 = {{0x11, 0x0, 0x0, 0x0}};
  // -73019728524893.6732436357
  s21_decimal dec_2 = {{0x2eb2a785, 0x12fb86e2, 0x9aa0, 0x800a0000}};
  // 73019728524910.6732436357
  s21_decimal dec_check = {{0xc37ccb85, 0x12fb8709, 0x9aa0, 0xa0000}};
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
  // 55399834
  s21_decimal dec_1 = {{0x34d559a, 0x0, 0x0, 0x0}};
  // 415179582407381234652415
  s21_decimal dec_2 = {{0x615a94ff, 0xee2593cf, 0x57ea, 0x0}};
  // -415179582407381179252581
  s21_decimal dec_check = {{0x5e0d3f65, 0xee2593cf, 0x57ea, 0x80000000}};
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
  // -22050249914671935660463064110
  s21_decimal dec_1 = {{0xe079842e, 0x11189072, 0x473f8a0b, 0x80000000}};
  // -789275931
  s21_decimal dec_2 = {{0x2f0b651b, 0x0, 0x0, 0x80000000}};
  // -22050249914671935659673788179
  s21_decimal dec_check = {{0xb16e1f13, 0x11189072, 0x473f8a0b, 0x80000000}};
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
  // -26251757796286.8
  s21_decimal dec_1 = {{0x22fb5574, 0xeec2, 0x0, 0x80010000}};
  // -4999.19130518123
  s21_decimal dec_2 = {{0x7e30e26b, 0x1c6ac, 0x0, 0x800b0000}};
  // -26251757791287.60869481877
  s21_decimal dec_check = {{0x15e66d95, 0x106bc43a, 0x22be7, 0x800b0000}};
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
  // -36.335
  s21_decimal dec_1 = {{0x8def, 0x0, 0x0, 0x80030000}};
  // 561323837366902961579602176.38
  s21_decimal dec_2 = {{0xd9e92426, 0xb49a6415, 0xb55f9e9b, 0x20000}};
  // -561323837366902961579602212.72
  s21_decimal dec_check = {{0xd9e93258, 0xb49a6415, 0xb55f9e9b, 0x80020000}};
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
  // -512
  s21_decimal dec_1 = {{0x200, 0x0, 0x0, 0x80000000}};
  // -44.8989
  s21_decimal dec_2 = {{0x6d9dd, 0x0, 0x0, 0x80040000}};
  // -467.1011
  s21_decimal dec_check = {{0x474623, 0x0, 0x0, 0x80040000}};
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
  // -522181574247324430304468535
  s21_decimal dec_1 = {{0x4feade37, 0xdc8e0c84, 0x1aff03f, 0x80000000}};
  // -1158559375611574787009
  s21_decimal dec_2 = {{0xde469bc1, 0xce3dbdce, 0x3e, 0x80000000}};
  // -522180415687948818729681526
  s21_decimal dec_check = {{0x71a44276, 0xe504eb5, 0x1aff001, 0x80000000}};
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
  // -77175585.920132902927126
  s21_decimal dec_1 = {{0xfe9bb16, 0xb267c495, 0x1057, 0x800f0000}};
  // 73632386
  s21_decimal dec_2 = {{0x4638a82, 0x0, 0x0, 0x0}};
  // -150807971.920132902927126
  s21_decimal dec_check = {{0x3db6bb16, 0x5108b67b, 0x1fef, 0x800f0000}};
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
  // -2.42970338
  s21_decimal dec_1 = {{0xe7b6ee2, 0x0, 0x0, 0x80080000}};
  // 648057839162461662973.8
  s21_decimal dec_2 = {{0x5195d5ea, 0x50177f9b, 0x15f, 0x10000}};
  // -648057839162461662976.22970338
  s21_decimal dec_check = {{0xa7ad7fe2, 0x94bd406d, 0xd1661689, 0x80080000}};
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
  // 17234651644029140480
  s21_decimal dec_1 = {{0x6df57e00, 0xef2dc85b, 0x0, 0x0}};
  // -0.8
  s21_decimal dec_2 = {{0x8, 0x0, 0x0, 0x80010000}};
  // 17234651644029140480.8
  s21_decimal dec_check = {{0x4b96ec08, 0x57c9d392, 0x9, 0x10000}};
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
  // -842634770334236910.3450426
  s21_decimal dec_1 = {{0xe4b0913a, 0x396bfe5d, 0x6f859, 0x80070000}};
  // 82975682.3807479603599
  s21_decimal dec_2 = {{0x4935618f, 0xfb306b03, 0x2c, 0xd0000}};
  // -842634770417212592.72579056036
  s21_decimal dec_check = {{0xd32c01a4, 0x7da7160e, 0x10451d53, 0x800b0000}};
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
  // 66298857
  s21_decimal dec_1 = {{0x3f3a3e9, 0x0, 0x0, 0x0}};
  // -793.7309530
  s21_decimal dec_2 = {{0xd919bb5a, 0x1, 0x0, 0x80070000}};
  // 66299650.7309530
  s21_decimal dec_check = {{0xe74e35da, 0x25afd, 0x0, 0x70000}};
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
  // -96658577691928
  s21_decimal dec_1 = {{0x14301518, 0x57e9, 0x0, 0x80000000}};
  // -0.5
  s21_decimal dec_2 = {{0x5, 0x0, 0x0, 0x80010000}};
  // -96658577691927.5
  s21_decimal dec_check = {{0xc9e0d2eb, 0x36f1a, 0x0, 0x80010000}};
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
  // -3160982563023348732456076
  s21_decimal dec_1 = {{0xce0aec8c, 0x35461a58, 0x29d5d, 0x80000000}};
  // -907.4000
  s21_decimal dec_2 = {{0x8a7550, 0x0, 0x0, 0x80040000}};
  // -3160982563023348732455168.6000
  s21_decimal dec_check = {{0x8a2da770, 0x2652cf0, 0x662308f1, 0x80040000}};
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
  // -165.7153544119964
  s21_decimal dec_1 = {{0x2055e69c, 0x5e32c, 0x0, 0x800d0000}};
  // 55.924348761
  s21_decimal dec_2 = {{0x559d759, 0xd, 0x0, 0x90000}};
  // -221.6397031729964
  s21_decimal dec_check = {{0x25c1eb2c, 0x7dfcd, 0x0, 0x800d0000}};
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
  // 756326627485
  s21_decimal dec_1 = {{0x1894789d, 0xb0, 0x0, 0x0}};
  // -2348922797
  s21_decimal dec_2 = {{0x8c01b7ad, 0x0, 0x0, 0x80000000}};
  // 758675550282
  s21_decimal dec_check = {{0xa496304a, 0xb0, 0x0, 0x0}};
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
  // -94225051502844811589007
  s21_decimal dec_1 = {{0x5f8eb58f, 0xf3455c1e, 0x13f3, 0x80000000}};
  // 5204495104199.273464246866896
  s21_decimal dec_2 = {{0x3d9893d0, 0xeee2ff4b, 0x10d10eb4, 0xf0000}};
  // -94225051508049306693206.273464
  s21_decimal dec_check = {{0x52ebedb8, 0x61188a50, 0x307522c5, 0x80060000}};
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
  // -8.77075990
  s21_decimal dec_1 = {{0x34471e16, 0x0, 0x0, 0x80080000}};
  // 0.9741077511
  s21_decimal dec_2 = {{0x449d0c07, 0x2, 0x0, 0xa0000}};
  // -9.7448676511
  s21_decimal dec_check = {{0xb064cc9f, 0x16, 0x0, 0x800a0000}};
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
  // -81.442064966679
  s21_decimal dec_1 = {{0x355a2417, 0x4a12, 0x0, 0x800c0000}};
  // -709936
  s21_decimal dec_2 = {{0xad530, 0x0, 0x0, 0x80000000}};
  // 709854.557935033321
  s21_decimal dec_check = {{0x9fe8dbe9, 0x9d9e8f5, 0x0, 0xc0000}};
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
  // 9.58098172
  s21_decimal dec_1 = {{0x391b6afc, 0x0, 0x0, 0x80000}};
  // -92194404.2671607135140
  s21_decimal dec_2 = {{0x14b83ba4, 0xfa8b3624, 0x31, 0x800d0000}};
  // 92194413.8481424335140
  s21_decimal dec_check = {{0x8ad70124, 0xfa8b8d47, 0x31, 0xd0000}};
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
  // 0.1
  s21_decimal dec_1 = {{0x1, 0x0, 0x0, 0x10000}};
  // -2600845220338053489
  s21_decimal dec_2 = {{0xb205b171, 0x24180ef2, 0x0, 0x80000000}};
  // 2600845220338053489.1
  s21_decimal dec_check = {{0xf438ee6b, 0x68f0957a, 0x1, 0x10000}};
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
  // -84.936643404109
  s21_decimal dec_1 = {{0xda75614d, 0x4d3f, 0x0, 0x800c0000}};
  // 738.810826324157925
  s21_decimal dec_2 = {{0x3b43a5e5, 0xa40c888, 0x0, 0xf0000}};
  // -823.747469728266925
  s21_decimal dec_check = {{0x95c7baad, 0xb6e89f5, 0x0, 0x800f0000}};
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
  // 3978455602237024150456134.86
  s21_decimal dec_1 = {{0xf610d7ae, 0x910cbc9, 0x1491713, 0x20000}};
  // 871484169982997902073346983
  s21_decimal dec_2 = {{0x6e8d3ba7, 0x84e4b293, 0x2d0dff3, 0x0}};
  // -867505714380760877922890848.14
  s21_decimal dec_check = {{0x391a758e, 0xe044f5cd, 0x184e640c, 0x80020000}};
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
  // 891135638358983189064
  s21_decimal dec_1 = {{0x6282248, 0x4efdc5a6, 0x30, 0x0}};
  // 79.0377
  s21_decimal dec_2 = {{0xc0f69, 0x0, 0x0, 0x40000}};
  // 891135638358983188984.9623
  s21_decimal dec_check = {{0x7faf0d17, 0x98f8a550, 0x75f0d, 0x40000}};
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
  // -9007610189094601448.47375
  s21_decimal dec_1 = {{0x997fa0f, 0x5a4935bd, 0xbebe, 0x80050000}};
  // 733.8
  s21_decimal dec_2 = {{0x1caa, 0x0, 0x0, 0x10000}};
  // -9007610189094602182.27375
  s21_decimal dec_check = {{0xdf7aaaf, 0x5a4935bd, 0xbebe, 0x80050000}};
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
  // 27729508743459665.5894
  s21_decimal dec_1 = {{0x7404a316, 0x83e0cd9, 0xf, 0x40000}};
  // 6654.83856
  s21_decimal dec_2 = {{0x27aa7a50, 0x0, 0x0, 0x50000}};
  // 27729508743453010.75084
  s21_decimal dec_check = {{0x6083e48c, 0x526c807e, 0x96, 0x50000}};
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
  // -457121399.67046
  s21_decimal dec_1 = {{0x2fdd5a46, 0x2993, 0x0, 0x80050000}};
  // 0
  s21_decimal dec_2 = {{0x0, 0x0, 0x0, 0x0}};
  // -457121399.67046
  s21_decimal dec_check = {{0x2fdd5a46, 0x2993, 0x0, 0x80050000}};
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
  // -57949090014304201785
  s21_decimal dec_1 = {{0x2fbcec39, 0x24348657, 0x3, 0x80000000}};
  // 392208670692275992882523
  s21_decimal dec_2 = {{0x36676d5b, 0xacb55007, 0x530d, 0x0}};
  // -392266619782290297084308
  s21_decimal dec_check = {{0x66245994, 0xd0e9d65e, 0x5310, 0x80000000}};
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
  // -33027283
  s21_decimal dec_1 = {{0x1f7f4d3, 0x0, 0x0, 0x80000000}};
  // -68977823776391
  s21_decimal dec_2 = {{0x26aefe87, 0x3ebc, 0x0, 0x80000000}};
  // 68977790749108
  s21_decimal dec_check = {{0x24b709b4, 0x3ebc, 0x0, 0x0}};
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
  // -19.4984092
  s21_decimal dec_1 = {{0xb9f389c, 0x0, 0x0, 0x80070000}};
  // -42666008282036085003494321
  s21_decimal dec_2 = {{0x5d9a3b1, 0xf18b67b2, 0x234ae0, 0x80000000}};
  // 42666008282036085003494301.502
  s21_decimal dec_check = {{0xda271f3e, 0x888d0f66, 0x89dc7eaf, 0x30000}};
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
  // -4295601053060052793
  s21_decimal dec_1 = {{0x10703739, 0x3b9d0a66, 0x0, 0x80000000}};
  // -18563849350149772516843
  s21_decimal dec_2 = {{0xd7499deb, 0x59298478, 0x3ee, 0x80000000}};
  // 18559553749096712464050
  s21_decimal dec_check = {{0xc6d966b2, 0x1d8c7a12, 0x3ee, 0x0}};
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
  // 901374853845
  s21_decimal dec_1 = {{0xde20c2d5, 0xd1, 0x0, 0x0}};
  // 9778110784096300208388641
  s21_decimal dec_2 = {{0x6bd67a21, 0x729f7c51, 0x81698, 0x0}};
  // -9778110784095398833534796
  s21_decimal dec_check = {{0x8db5b74c, 0x729f7b7f, 0x81698, 0x80000000}};
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
  // 552.553328409139992350686301
  s21_decimal dec_1 = {{0x4b37fc5d, 0xf429e5a7, 0x1c90fb7, 0x180000}};
  // -4584
  s21_decimal dec_2 = {{0x11e8, 0x0, 0x0, 0x80000000}};
  // 5136.553328409139992350686301
  s21_decimal dec_check = {{0x3337fc5d, 0xe32f64b2, 0x1098db79, 0x180000}};
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
  // 5998758.9510229466
  s21_decimal dec_1 = {{0x13b06dda, 0xd51e65, 0x0, 0xa0000}};
  // -4205837.122975
  s21_decimal dec_2 = {{0x3f6d7d9f, 0x3d3, 0x0, 0x80060000}};
  // 10204596.0739979466
  s21_decimal dec_check = {{0xb8ab80ca, 0x16a8a42, 0x0, 0xa0000}};
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
  // 1782362
  s21_decimal dec_1 = {{0x1b325a, 0x0, 0x0, 0x0}};
  // 451
  s21_decimal dec_2 = {{0x1c3, 0x0, 0x0, 0x0}};
  // 1781911
  s21_decimal dec_check = {{0x1b3097, 0x0, 0x0, 0x0}};
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
  // 56760286638.2754
  s21_decimal dec_1 = {{0x573967a2, 0x2043b, 0x0, 0x40000}};
  // -36088473746855.4247899595
  s21_decimal dec_2 = {{0x3f4789cb, 0x99cf465d, 0x4c6b, 0x800a0000}};
  // 36145234033493.7001899595
  s21_decimal dec_check = {{0xecd7364b, 0x5ee1be0c, 0x4c8a, 0xa0000}};
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
  // -90
  s21_decimal dec_1 = {{0x5a, 0x0, 0x0, 0x80000000}};
  // 75624698
  s21_decimal dec_2 = {{0x481f0fa, 0x0, 0x0, 0x0}};
  // -75624788
  s21_decimal dec_check = {{0x481f154, 0x0, 0x0, 0x80000000}};
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
  // 36202118494944164300598348
  s21_decimal dec_1 = {{0xcf222c4c, 0xc6aa8b73, 0x1df218, 0x0}};
  // 0.4951419330196159585
  s21_decimal dec_2 = {{0xa6583c61, 0x44b6f9a5, 0x0, 0x130000}};
  // 36202118494944164300598347.505
  s21_decimal dec_check = {{0x1d7d06f1, 0xa30bc61, 0x74f9b0c8, 0x30000}};
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
  // -550.416
  s21_decimal dec_1 = {{0x86610, 0x0, 0x0, 0x80030000}};
  // -6468251842042120507957776.7216
  s21_decimal dec_2 = {{0xcba2ad30, 0xa9a7c931, 0xd100200d, 0x80040000}};
  // 6468251842042120507957226.3056
  s21_decimal dec_check = {{0xcb4eb090, 0xa9a7c931, 0xd100200d, 0x40000}};
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
  // -5569.47280767016801403357423
  s21_decimal dec_1 = {{0xdba748ef, 0x969fb946, 0x1ccb22c, 0x80170000}};
  // -927074046622231251157134006
  s21_decimal dec_2 = {{0x22962ab6, 0xc527bbfb, 0x2fedb90, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_2) {
  // 1429464301352534471167698
  s21_decimal dec_1 = {{0xa9b14ed2, 0x6a40c5ab, 0x12eb3, 0x0}};
  // -794817963765439733086605563.49
  s21_decimal dec_2 = {{0xc361a23d, 0x3997dd3c, 0xd1cd0f, 0x80020000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_3) {
  // -688100989026640.6561696756580
  s21_decimal dec_1 = {{0x820cb364, 0x9896ff18, 0x163bd685, 0x800d0000}};
  // -83565346519221915617
  s21_decimal dec_2 = {{0x3aa5cfe1, 0x87b3bfe9, 0x4, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_4) {
  // 845196727477
  s21_decimal dec_1 = {{0xc9a694b5, 0xc4, 0x0, 0x0}};
  // 83.6700384167058242434311442
  s21_decimal dec_2 = {{0xb4992512, 0xb62ff11f, 0x2b41a32, 0x190000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_5) {
  // 5.2359
  s21_decimal dec_1 = {{0xcc87, 0x0, 0x0, 0x40000}};
  // -82556893488259614396885195
  s21_decimal dec_2 = {{0x479fa8cb, 0x29e70414, 0x444a1a, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_6) {
  // 6253.93140199742239351594975
  s21_decimal dec_1 = {{0x86815fdf, 0x10279faa, 0x2055026, 0x170000}};
  // -9130096.9688346
  s21_decimal dec_2 = {{0xa9ddad1a, 0x5309, 0x0, 0x80070000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_7) {
  // 680612693
  s21_decimal dec_1 = {{0x28915355, 0x0, 0x0, 0x0}};
  // -88343740349029763317914697.494
  s21_decimal dec_2 = {{0xa8787f16, 0x987dc7c9, 0x1d743ab0, 0x80030000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_8) {
  // 92907551080720295971286528
  s21_decimal dec_1 = {{0x5ca46e00, 0x6fa454cd, 0x4cd9f0, 0x0}};
  // -287594.520
  s21_decimal dec_2 = {{0x11245818, 0x0, 0x0, 0x80030000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_9) {
  // -651.478491217629848621195087
  s21_decimal dec_1 = {{0xe2229f4f, 0xc6792f81, 0x21ae3ef, 0x80180000}};
  // -9021121.9242740
  s21_decimal dec_2 = {{0xefad7ef4, 0x520b, 0x0, 0x80070000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_10) {
  // 99803242936.62922701059
  s21_decimal dec_1 = {{0xe3daf903, 0x8d2a30f, 0x21d, 0xb0000}};
  // 88903.13649153554854655330990
  s21_decimal dec_2 = {{0x2d688aae, 0x9fdea1bd, 0x1cb9e524, 0x170000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_11) {
  // -1321
  s21_decimal dec_1 = {{0x529, 0x0, 0x0, 0x80000000}};
  // -9894592075155290288461757958.7
  s21_decimal dec_2 = {{0xbf476c43, 0xdee056de, 0x3fb625b7, 0x80010000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_12) {
  // 99923178334769731448553250
  s21_decimal dec_1 = {{0x5df33f22, 0x5a032885, 0x52a78e, 0x0}};
  // 20361229382384697.70914525980
  s21_decimal dec_2 = {{0x21af731c, 0xa77f4772, 0x6943dcd, 0xb0000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_13) {
  // 914229249062516927471
  s21_decimal dec_1 = {{0x6b71abef, 0x8f7ac23a, 0x31, 0x0}};
  // 7.493308492
  s21_decimal dec_2 = {{0xbea2d04c, 0x1, 0x0, 0x90000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_14) {
  // 912602308363860081
  s21_decimal dec_1 = {{0xdb3ab871, 0xcaa36f6, 0x0, 0x0}};
  // 136529.16270164585603309
  s21_decimal dec_2 = {{0xcf39e0ed, 0x20466376, 0x2e4, 0x110000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_15) {
  // 97.2183901764516683
  s21_decimal dec_1 = {{0x9906fb4b, 0xd7de41b, 0x0, 0x100000}};
  // -855801863599.79837697505211515
  s21_decimal dec_2 = {{0x12d1b47b, 0xa9046b7f, 0x1486455e, 0x80110000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_16) {
  // -3.8536128377518818239778
  s21_decimal dec_1 = {{0xdb6ea522, 0xc366a31, 0x829, 0x80160000}};
  // -84348162
  s21_decimal dec_2 = {{0x5070d02, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_17) {
  // 9483864960213355439
  s21_decimal dec_1 = {{0x34a8baf, 0x839d74ef, 0x0, 0x0}};
  // -210777.6652830593675778
  s21_decimal dec_2 = {{0x25627202, 0x4346f245, 0x72, 0x80100000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_18) {
  // -53905201499352266670747.07
  s21_decimal dec_1 = {{0xa4af0493, 0xaed0864c, 0x4757c, 0x80020000}};
  // 79228162514264337592769149249
  s21_decimal dec_2 = {{0xd1d17941, 0xffffffff, 0xffffffff, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_19) {
  // 812922284
  s21_decimal dec_1 = {{0x307435ac, 0x0, 0x0, 0x0}};
  // -0.438228509577870590023
  s21_decimal dec_2 = {{0x7dd84047, 0xc1a46ba0, 0x17, 0x80150000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_20) {
  // 9307.6430127695
  s21_decimal dec_1 = {{0xb8e024f, 0x54a7, 0x0, 0xa0000}};
  // -965555594233723712169412
  s21_decimal dec_2 = {{0x7657e5c4, 0xdfa746c8, 0xcc76, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_21) {
  // 856462795116998737813.7
  s21_decimal dec_1 = {{0xd4b37bd9, 0x4a16e03e, 0x1d0, 0x10000}};
  // 6064.143107273
  s21_decimal dec_2 = {{0xeb1884c9, 0x583, 0x0, 0x90000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_22) {
  // 832133.0
  s21_decimal dec_1 = {{0x7ef932, 0x0, 0x0, 0x10000}};
  // -0.0678847237765412689686432
  s21_decimal dec_2 = {{0x82da2fa0, 0x61eb6cd4, 0x8fc0, 0x80190000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_23) {
  // 10921740045200457
  s21_decimal dec_1 = {{0xc3b92c49, 0x26cd43, 0x0, 0x0}};
  // -80090703789425090578.414948908
  s21_decimal dec_2 = {{0x565dd22c, 0x3829a245, 0x2c97a38, 0x80090000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_24) {
  // -65.81628870313765338340667902
  s21_decimal dec_1 = {{0x81f831fe, 0xfc000096, 0x1544321f, 0x801a0000}};
  // -983489239357676615121226564
  s21_decimal dec_2 = {{0x41bfcb44, 0x7f131e21, 0x32d85f2, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_25) {
  // 880835325.67972379200601897164
  s21_decimal dec_1 = {{0x7cd6b8cc, 0x8508e2d0, 0x1c9cfd8c, 0x140000}};
  // -290889.7879946907
  s21_decimal dec_2 = {{0x90d2769b, 0xa55a0, 0x0, 0x800a0000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_26) {
  // -74427.5020448789
  s21_decimal dec_1 = {{0x8358415, 0x2a4ea, 0x0, 0x800a0000}};
  // -9815753790633878805380
  s21_decimal dec_2 = {{0x3258db84, 0x1cf2c27d, 0x214, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_27) {
  // 43491670.14375162
  s21_decimal dec_1 = {{0x5af5eefa, 0xf738b, 0x0, 0x80000}};
  // -86596764827504409508831540
  s21_decimal dec_2 = {{0x3bc7e134, 0x71e8b86, 0x47a194, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_28) {
  // 766242931840980281.548865
  s21_decimal dec_1 = {{0x981d6041, 0x1cd13c53, 0xa242, 0x60000}};
  // -94508855338997471831877.624084
  s21_decimal dec_2 = {{0xdaee2114, 0xe20a124e, 0x315fe491, 0x80060000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_29) {
  // 837051726193775077159742764
  s21_decimal dec_1 = {{0x64e62d2c, 0x48323f, 0x2b46499, 0x0}};
  // 0.4081415309299799642
  s21_decimal dec_2 = {{0x7ba7d65a, 0x38a41999, 0x0, 0x130000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_30) {
  // 88950586717269020330
  s21_decimal dec_1 = {{0xc5664eaa, 0xd26ff756, 0x4, 0x0}};
  // -99670.7079075013
  s21_decimal dec_2 = {{0xf364b4c5, 0x38a7f, 0x0, 0x800a0000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_31) {
  // 19.6135685151986579147897240
  s21_decimal dec_1 = {{0x9db0b998, 0xcc145efb, 0xa23d58, 0x190000}};
  // -9836164033099
  s21_decimal dec_2 = {{0x29102a4b, 0x8f2, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_32) {
  // -2753912934.17306662841241
  s21_decimal dec_1 = {{0x2e332b99, 0xfdef256f, 0x3a50, 0x800e0000}};
  // -906328883432581
  s21_decimal dec_2 = {{0x23258c85, 0x3384d, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_33) {
  // -23.828357102029342
  s21_decimal dec_1 = {{0xb8a5ca1e, 0x54a7c3, 0x0, 0x800f0000}};
  // -8205588519105.6087253891644747
  s21_decimal dec_2 = {{0xd65f7d4b, 0x77dc6ab3, 0x9230991, 0x80100000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_34) {
  // 83.85
  s21_decimal dec_1 = {{0x20c1, 0x0, 0x0, 0x20000}};
  // -916790927627896295.34140884893
  s21_decimal dec_2 = {{0x6ec7e79d, 0x3eeeb9a9, 0x283b2b09, 0x800b0000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_35) {
  // 16276.78476340
  s21_decimal dec_1 = {{0xf9328834, 0x17a, 0x0, 0x80000}};
  // -9625849963933194055386949
  s21_decimal dec_2 = {{0x53250745, 0x5f44f25f, 0x7f65a, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_36) {
  // 707738.069787243
  s21_decimal dec_1 = {{0x1c3e626b, 0x283af, 0x0, 0x90000}};
  // -901895564677774433517275
  s21_decimal dec_2 = {{0x6d66fedb, 0xdb457af0, 0xbefb, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_37) {
  // -3538.181
  s21_decimal dec_1 = {{0x35fd05, 0x0, 0x0, 0x80030000}};
  // -82079052865581918421596069
  s21_decimal dec_2 = {{0x793537a5, 0x5f228ad6, 0x43e4ea, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_38) {
  // -494685.28945020899736778921652
  s21_decimal dec_1 = {{0xf8bf56b4, 0x97ba438d, 0x9fd76877, 0x80170000}};
  // -82780913941618
  s21_decimal dec_2 = {{0xeef83c72, 0x4b49, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_39) {
  // -24.577981873662921395
  s21_decimal dec_1 = {{0x5bab0ab3, 0x5516884b, 0x1, 0x80120000}};
  // -8222772012015412129833362631
  s21_decimal dec_2 = {{0x2d2324c7, 0xf6c91258, 0x1a91b7b3, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_40) {
  // 8304728
  s21_decimal dec_1 = {{0x7eb858, 0x0, 0x0, 0x0}};
  // 0.7671908850183903786554538
  s21_decimal dec_2 = {{0x2e03d4aa, 0x31a8f19, 0x65897, 0x190000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_41) {
  // 95596911459.821966291674093035
  s21_decimal dec_1 = {{0x84055eb, 0x61d5dd12, 0x34e3e96a, 0x120000}};
  // 0.2546956944373
  s21_decimal dec_2 = {{0x276c3f5, 0x251, 0x0, 0xd0000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_42) {
  // 893340792230515.1143173
  s21_decimal dec_1 = {{0xe2f20d05, 0x47f0861c, 0x1e4, 0x70000}};
  // -26245.9627239914996206812637
  s21_decimal dec_2 = {{0xe5fe3ddd, 0xe6f42066, 0xd919fc, 0x80160000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_43) {
  // 8920989952330871.47574
  s21_decimal dec_1 = {{0x170dce36, 0x5c5c4d9f, 0x30, 0x50000}};
  // -1.3388716076820648
  s21_decimal dec_2 = {{0x61c1e8a8, 0x2f90f7, 0x0, 0x80100000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_44) {
  // 66.0647307162501747405
  s21_decimal dec_1 = {{0xd74b92cd, 0xd052b99a, 0x23, 0x130000}};
  // -95029057276152208.083
  s21_decimal dec_2 = {{0x6d4d5ad3, 0x26cb081b, 0x5, 0x80030000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_45) {
  // 546.96732256097429616702667157
  s21_decimal dec_1 = {{0xfbaa3995, 0xfef5ec0e, 0xb0bc1394, 0x1a0000}};
  // -88443298096765665935419
  s21_decimal dec_2 = {{0x342003b, 0x8552f255, 0x12ba, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_46) {
  // 92631253291204731
  s21_decimal dec_1 = {{0x5385807b, 0x14917a2, 0x0, 0x0}};
  // 3708575.5459780114636381184
  s21_decimal dec_2 = {{0xe3bc9c00, 0xd4f69c75, 0x1ead36, 0x130000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_47) {
  // 86404630799625929100648405
  s21_decimal dec_1 = {{0x1bd45fd5, 0x6bd989c1, 0x4778e4, 0x0}};
  // 0.10028079385
  s21_decimal dec_2 = {{0x55b85919, 0x2, 0x0, 0xb0000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_48) {
  // -517.83499376888
  s21_decimal dec_1 = {{0xc915e8f8, 0x2f18, 0x0, 0x800b0000}};
  // -93969922930997788844563
  s21_decimal dec_2 = {{0xbd0aa213, 0x1ea697c0, 0x13e6, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_49) {
  // -49.99075976879667113
  s21_decimal dec_1 = {{0x5f19f7a9, 0x4560491d, 0x0, 0x80110000}};
  // -892049990209076762998
  s21_decimal dec_2 = {{0xceb49976, 0x5bae33cf, 0x30, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_50) {
  // -950359973196.842005247734683
  s21_decimal dec_1 = {{0xa71eb39b, 0x6110e5e4, 0x3121e8d, 0x800f0000}};
  // -98185601117338937
  s21_decimal dec_2 = {{0xb4a83d39, 0x15cd348, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_51) {
  // 8057175854541093961387869303
  s21_decimal dec_1 = {{0xfe9a0477, 0x4791427a, 0x1a08bd5a, 0x0}};
  // 5727.33861843251
  s21_decimal dec_2 = {{0xfe62d133, 0x208e5, 0x0, 0xb0000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_52) {
  // 8797617640222444743507740
  s21_decimal dec_1 = {{0x744f3f1c, 0xced3465d, 0x746f7, 0x0}};
  // 87313597.12307
  s21_decimal dec_2 = {{0xed981433, 0x7f0, 0x0, 0x50000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_53) {
  // 45.0076193700263101714591453
  s21_decimal dec_1 = {{0xfee6eedd, 0x59856378, 0x1744b57, 0x190000}};
  // -8041207236240.04700
  s21_decimal dec_2 = {{0xa8238c5c, 0xb28cf89, 0x0, 0x80050000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_54) {
  // 9957320259578955
  s21_decimal dec_1 = {{0x48fcac4b, 0x236021, 0x0, 0x0}};
  // 3836230815703.8275717681061
  s21_decimal dec_2 = {{0xe8dacfa5, 0xe46bdeb2, 0x1fbb88, 0xd0000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_55) {
  // 8268896001609391447062612
  s21_decimal dec_1 = {{0x9b01b854, 0xc01d7f17, 0x6d701, 0x0}};
  // -3349222974896.335834
  s21_decimal dec_2 = {{0xfc45ebda, 0x2e7ad48c, 0x0, 0x80060000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_56) {
  // 0.5481123291340093392508295
  s21_decimal dec_1 = {{0x54295587, 0x49fc5602, 0x488ac, 0x190000}};
  // -9968313898184934464337
  s21_decimal dec_2 = {{0x36689b51, 0x62252402, 0x21c, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_57) {
  // 85989403529169.1
  s21_decimal dec_1 = {{0xae849e2b, 0x30e11, 0x0, 0x10000}};
  // 0.07344998195082244670153
  s21_decimal dec_2 = {{0x827c42c9, 0x2c538ef5, 0x18e, 0x170000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_58) {
  // 0.24814533598529146508320907
  s21_decimal dec_1 = {{0xe94ca08b, 0x8fd48c92, 0x1486ae, 0x1a0000}};
  // -882
  s21_decimal dec_2 = {{0x372, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_59) {
  // -73530.82374
  s21_decimal dec_1 = {{0xb6472206, 0x1, 0x0, 0x80050000}};
  // -97189403001292058027166.467359
  s21_decimal dec_2 = {{0x5553051f, 0xd418c0ef, 0x3a09309d, 0x80060000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_60) {
  // -888.491278167806799792180731
  s21_decimal dec_1 = {{0x6ffa0dfb, 0xb381b545, 0x2def158, 0x80180000}};
  // -9496065
  s21_decimal dec_2 = {{0x90e601, 0x0, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_61) {
  // 883515352412663672732967677
  s21_decimal dec_1 = {{0xe154e2fd, 0x39bab723, 0x2dad3a7, 0x0}};
  // -341997.624
  s21_decimal dec_2 = {{0x14627838, 0x0, 0x0, 0x80030000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_62) {
  // -2143.6299382344584828220
  s21_decimal dec_1 = {{0x5670953c, 0x106a09dc, 0x48a, 0x80130000}};
  // -962180600094.2442602
  s21_decimal dec_2 = {{0x4fe5686a, 0x85878594, 0x0, 0x80070000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_63) {
  // 802764740180762089846535835.9
  s21_decimal dec_1 = {{0xb339a217, 0xa63d3c63, 0x19f05075, 0x10000}};
  // -0.56744004
  s21_decimal dec_2 = {{0x361d844, 0x0, 0x0, 0x80080000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_64) {
  // 8876138445050699236931480667
  s21_decimal dec_1 = {{0x1ec32c5b, 0x4532a0ae, 0x1cae2b6d, 0x0}};
  // -0.40057118478302914951
  s21_decimal dec_2 = {{0x38fb2987, 0x2be77906, 0x2, 0x80140000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_65) {
  // 8727331288560491093684659591
  s21_decimal dec_1 = {{0xbb382587, 0x2724755c, 0x1c331449, 0x0}};
  // -4711977686123.42766
  s21_decimal dec_2 = {{0xc1186bee, 0x68a07df, 0x0, 0x80050000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_66) {
  // -986893570257.87304
  s21_decimal dec_1 = {{0x84a23da8, 0x15e9d72, 0x0, 0x80050000}};
  // -987139430352575559394490412
  s21_decimal dec_2 = {{0x3409782c, 0xbf28edf9, 0x3308ae7, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_67) {
  // 8520676658017092920098
  s21_decimal dec_1 = {{0x9f5e6322, 0xe82483fc, 0x1cd, 0x0}};
  // -75492686952376959.59212262686
  s21_decimal dec_2 = {{0x4a60851e, 0xaf5f5c, 0x18649bd4, 0x800b0000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_68) {
  // 948768035923008547568920288
  s21_decimal dec_1 = {{0x312aa6e0, 0x49605b86, 0x310cd72, 0x0}};
  // 32578.484
  s21_decimal dec_2 = {{0x1f11bb4, 0x0, 0x0, 0x30000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_69) {
  // 9013432564918034143650863873
  s21_decimal dec_1 = {{0x5b4d5b01, 0x6bfa2f1a, 0x1d1fbc96, 0x0}};
  // 498660365.247788
  s21_decimal dec_2 = {{0x69ef252c, 0x1c587, 0x0, 0x60000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_70) {
  // -79228162514264337592272985011
  s21_decimal dec_1 = {{0xb43e9bb3, 0xffffffff, 0xffffffff, 0x80000000}};
  // 5586473766797848817469264
  s21_decimal dec_2 = {{0xb8508750, 0x59879018, 0x49efb, 0x0}};
  s21_decimal result;
  // overflow
  int check = 2; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_71) {
  // 1351979721186.8447444112
  s21_decimal dec_1 = {{0x1f650c90, 0xe8e07d3d, 0x2dc, 0xa0000}};
  // -813881196890561679397379.00
  s21_decimal dec_2 = {{0x4353092c, 0xcf1f2987, 0x43529a, 0x80020000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_72) {
  // 81596536502477178161925930.070
  s21_decimal dec_1 = {{0x2d433c56, 0x29f70e17, 0x7a712b3, 0x30000}};
  // -60646.470896
  s21_decimal dec_2 = {{0x1ecfb4f0, 0xe, 0x0, 0x80060000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_73) {
  // 828725798664862530113
  s21_decimal dec_1 = {{0xb5057a41, 0xece17b1b, 0x2c, 0x0}};
  // -4.0009327647
  s21_decimal dec_2 = {{0x50bde41f, 0x9, 0x0, 0x800a0000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_74) {
  // -659760308.0659176656239
  s21_decimal dec_1 = {{0xa1160d6f, 0xa822b642, 0x165, 0x800d0000}};
  // -8432329853379344
  s21_decimal dec_2 = {{0xc98a2310, 0x1df528, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_75) {
  // 455983.4034140
  s21_decimal dec_1 = {{0xab49afdc, 0x425, 0x0, 0x70000}};
  // -9467637594322473661560
  s21_decimal dec_2 = {{0xace53478, 0x3ddd9657, 0x201, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_76) {
  // 88747871107613820293707
  s21_decimal dec_1 = {{0x62b1924b, 0x81fa600, 0x12cb, 0x0}};
  // -0.216762603852324529
  s21_decimal dec_2 = {{0x9334deb1, 0x3021870, 0x0, 0x80120000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_77) {
  // -962
  s21_decimal dec_1 = {{0x3c2, 0x0, 0x0, 0x80000000}};
  // -897897292.73952327993897772950
  s21_decimal dec_2 = {{0x1e33e796, 0x490434de, 0x222052c1, 0x80140000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_78) {
  // 5127.91892
  s21_decimal dec_1 = {{0x1e909554, 0x0, 0x0, 0x50000}};
  // -93198842951608246992168704
  s21_decimal dec_2 = {{0xe2f4e700, 0x666a8eea, 0x4d179f, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_79) {
  // 30893.299971683813501328779903
  s21_decimal dec_1 = {{0x617d6a7f, 0x3a303656, 0x63d256bb, 0x180000}};
  // -971057214876
  s21_decimal dec_2 = {{0x1785359c, 0xe2, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_80) {
  // 84412989133995417288200
  s21_decimal dec_1 = {{0x418c3e08, 0x98d2a2f, 0x11e0, 0x0}};
  // -72364.34252128303545
  s21_decimal dec_2 = {{0xae93b9b9, 0x646cfa9c, 0x0, 0x800e0000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_81) {
  // 924227215281018286
  s21_decimal dec_1 = {{0x6a92d5ae, 0xcd383c1, 0x0, 0x0}};
  // 8180.981781094503997022880
  s21_decimal dec_2 = {{0x2174a2a0, 0xe937b64e, 0x6c463, 0x150000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_82) {
  // 79228162514264337592424970667
  s21_decimal dec_1 = {{0xbd4db9ab, 0xffffffff, 0xffffffff, 0x0}};
  // -8524708428205
  s21_decimal dec_2 = {{0xd037b9ad, 0x7c0, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 1; // Результат слишком велик или положительная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_83) {
  // 516598.83397422100465869970
  s21_decimal dec_1 = {{0xfaf46492, 0xe3f742a8, 0x2abb67, 0x140000}};
  // -829793446622643986.449
  s21_decimal dec_2 = {{0xe9c1a011, 0xfbb28744, 0x2c, 0x80030000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_84) {
  // 0.16033424391
  s21_decimal dec_1 = {{0xbbaaa407, 0x3, 0x0, 0xb0000}};
  // -8.8428414651338718829220223047
  s21_decimal dec_2 = {{0xa4745847, 0xb8b5b20c, 0x1dba452b, 0x801c0000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_85) {
  // 8883253512660756565934372.9429
  s21_decimal dec_1 = {{0x2a80b315, 0x9548afeb, 0x1f088d02, 0x40000}};
  // 72907.65457
  s21_decimal dec_2 = {{0xb2904091, 0x1, 0x0, 0x50000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_86) {
  // 462.748581020244
  s21_decimal dec_1 = {{0xccac254, 0x1a4de, 0x0, 0xc0000}};
  // -866709289783810532499908
  s21_decimal dec_2 = {{0xd1a6e1c4, 0x679d5bc0, 0xb788, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_87) {
  // -28159.51867154923288
  s21_decimal dec_1 = {{0xba5dff18, 0x2714454d, 0x0, 0x800e0000}};
  // -92828614604799942773427708
  s21_decimal dec_2 = {{0x5887cdfc, 0x47fa929d, 0x4cc939, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_88) {
  // -453122942.02374204570033
  s21_decimal dec_1 = {{0x4a8a39b1, 0x62676e3c, 0x998, 0x800e0000}};
  // -827348857017283144
  s21_decimal dec_2 = {{0xe7d73248, 0xb7b5566, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_89) {
  // 944657452563895224437428.36
  s21_decimal dec_1 = {{0x2a082e74, 0x4fc67566, 0x4e23e6, 0x20000}};
  // -711391201680976626.12850692194
  s21_decimal dec_2 = {{0xfa6d5062, 0xbf792831, 0xe5dce6a7, 0x800b0000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_90) {
  // 9721475717983597.85501790512
  s21_decimal dec_1 = {{0x37b69130, 0x774cb993, 0x3242441, 0xb0000}};
  // -1.15635369319590
  s21_decimal dec_2 = {{0x751c9ca6, 0x692b, 0x0, 0x800e0000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_91) {
  // 24728593052896908.5371409419
  s21_decimal dec_1 = {{0xe721e40b, 0x27bd2dc9, 0xcc8cd5, 0xa0000}};
  // -908358327514424161975.828749
  s21_decimal dec_2 = {{0xeeee810d, 0x9ab4d713, 0x2ef605b, 0x80060000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_92) {
  // -6467391754838827.4827055
  s21_decimal dec_1 = {{0x893e6f2f, 0xfae78928, 0xdb1, 0x80070000}};
  // -945499011334604076257622786
  s21_decimal dec_2 = {{0xe5e7bb02, 0x1bcccc3a, 0x30e1934, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_93) {
  // 84318924567787475560629837
  s21_decimal dec_1 = {{0xf065064d, 0xf55b9e6, 0x45bf3a, 0x0}};
  // 8602.232
  s21_decimal dec_2 = {{0x834278, 0x0, 0x0, 0x30000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_94) {
  // 61617288.19433725505302369
  s21_decimal dec_1 = {{0x8ab7ef61, 0xfd15dc88, 0x518cb, 0x110000}};
  // -92458211058526431828.301
  s21_decimal dec_2 = {{0x931594d, 0x2b6f2522, 0x1394, 0x80030000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_95) {
  // 8684941496263656478289
  s21_decimal dec_1 = {{0x44ca1651, 0xcfc6740f, 0x1d6, 0x0}};
  // 86153273391.4018182818679202
  s21_decimal dec_2 = {{0x3bfbc9a2, 0x16beb981, 0x2c8a4a7, 0x100000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_96) {
  // 564511107869.45057486865274309
  s21_decimal dec_1 = {{0xf1b595c5, 0xb8a63759, 0xb66743af, 0x110000}};
  // -9065884939370901432789207.3691
  s21_decimal dec_2 = {{0xfdcf5cdb, 0x628083fa, 0x24ef3e19, 0x80040000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_97) {
  // 90894838077351214761
  s21_decimal dec_1 = {{0x5d2b3ea9, 0xed6b55a6, 0x4, 0x0}};
  // -83.3796321105045741101
  s21_decimal dec_2 = {{0x1dc9de2d, 0x333f9867, 0x2d, 0x80130000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_98) {
  // 2.8867910965954
  s21_decimal dec_1 = {{0x55941ac2, 0x1a41, 0x0, 0xd0000}};
  // -972958158916061184693
  s21_decimal dec_2 = {{0xb5e342b5, 0xbe81c294, 0x34, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_99) {
  // 9928518469.2505212498790
  s21_decimal dec_1 = {{0x50123366, 0x42b9c261, 0x1506, 0xd0000}};
  // -8247246962563748058
  s21_decimal dec_2 = {{0xaa8810da, 0x72741b6a, 0x0, 0x80000000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

START_TEST(fail_s21_sub_100) {
  // 8003327015290947
  s21_decimal dec_1 = {{0xc7c48843, 0x1c6efb, 0x0, 0x0}};
  // 7.4723004150633069902194937283
  s21_decimal dec_2 = {{0x206a0dc3, 0xbcecb6cd, 0xf1716b9b, 0x1c0000}};
  s21_decimal result;
  // overflow
  int check = 3; // Результат слишком мал или отрицательная бесконечность.
  int return_value = s21_sub(dec_1, dec_2, &result);
  ck_assert_int_eq(return_value, check);
}
END_TEST

Suite *s21_sub_cases300(void) {
  Suite *c = suite_create("s21_sub_cases300");
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

  suite_add_tcase(c, tc);
  return c;
}
