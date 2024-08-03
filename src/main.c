#include <stdio.h>

#include "inc/arithmetic_helpers.h"
#include "inc/my_banking_round.h"
#include "inc/s21_arithmetic.h"
#include "inc/s21_decimal.h"
int main() {
    // 61953400540630041175966.3717
    s21_decimal dec_1 = {{0x54bb9a65, 0xbac106e7, 0x200776d, 0x40000}};
    // 2145775567390.57
    s21_decimal dec_2 = {{0x3b0bd3f1, 0xc328, 0x0, 0x20000}};
    // 61953400542775816743356.9417
    s21_decimal dec_check = {{0x655a6489, 0xbb0d429e, 0x200776d, 0x40000}};
    s21_decimal result;
    int return_value = s21_add(dec_1, dec_2, &result);
    // out_decimal(dec_check);
    //
    // for (int i = 0; i < 8; i++) {
    //     print_binary(dec_check.bits[i]);
    // }
    //
    // printf("\n\n");
    // out_decimal(result);
    //
    // for (int i = 0; i < 8; i++) {
    //     print_binary(result.bits[i]);
    // }

}