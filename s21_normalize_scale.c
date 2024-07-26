#include "s21_decimal.h"
#include "s21_normalize_scale.h"
#include "s21_decimal_utils.h"

void normalization(s21_decimal decimal_1, s21_decimal decimal_2){
    int scale1 = get_scale(decimal_1), scale2 = get_scale(decimal_2);
    normalize_scale(&scale1, &scale2);




}

void normalize_scale(int* scale1, int* scale2) {
    int max_scale = *scale1 > *scale2 ? *scale1 : *scale2;
    
    if(*scale1 == *scale2){
    }
    else if (*scale1 == max_scale) {
        *scale2 = *scale1 - *scale2;
        *scale1 = 0;
    }
    else if(*scale2 == max_scale){
       *scale1 = *scale2 - *scale1;
        *scale2 = 0;
    }
}


