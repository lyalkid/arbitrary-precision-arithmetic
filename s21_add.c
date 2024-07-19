#include <stdlib.h>
#include "s21_add.h"

// TODO сделать с нормализацией
/*
    mantissa1 = 12345 AND scale = 2 => 123,45
    mantissa2 = 12345 AND scale = 3 => 12,345
*/




 /*
 ЭТО НЕ ДОДЕЛАНО
 */
int s21_add(s21_decimal value_1, s21_decimal value_2, s21_decimal* result) {
    int sign1 = get_sign(value_1), sign2 = get_sign(value_2);
    
    int scale1 = get_scale(value_1), scale2 = get_scale(value_2);
    
    normalize_scale(&scale1, &scale2);
    
    int mantissa1[DEC_ARRAY] = {};
    int mantissa2[DEC_ARRAY] = {};
    int mantissa3[DEC_ARRAY];
    init_array(mantissa3, DEC_ARRAY);
    
    from_decimal_to_array(value_1, mantissa1);
    from_decimal_to_array(value_2, mantissa2);

    if (sign1 == sign2) {
        get_add(mantissa1, mantissa2, mantissa3, DEC_ARRAY, 2);  // сложение двух массивов столбиком
    }
}

void normalize_scale(int* scale1, int* scale2) {
    int max_scale = *scale1 > *scale2 ? *scale1 : *scale2;
    if (*scale1 == max_scale) {
        *scale2 = *scale1 - *scale2;
        *scale1 = 0;
    }
    else if(*scale2 == max_scale){
       *scale1 = *scale2 - *scale1;
        *scale2 = 0;
    }
}


/*
    скалдывает два числа, которые представлены в виде массива
*/
void get_add(const int value1[], const int value2[], int coef[], int size, int base) {
    for (int i = 0; i < size; i++) {
            coef[i] = value1[i] + value2[i];
    }
    add_normalize(coef, size, base);
}

/* 
    функция получает набор (массив) коэффициентов и нормализует их в соотвествии с выбранной 
    системой счисления. Например, сложили два числа 52 + 48, получили 100.
    Как это выглядит в виде массива: 
    [2, 5, 0]
    +
    [8, 4, 0]
    =
    [10, 9]
    после нормализации:
    [0, 0, 1]
*/
void add_normalize(int coef[], int size, int base) {
    int carry = 0;      // сколько данных перешло в след разряд
    int remainder = 0;  // остаток
    int i;
    for (i = 0; i < size; i++) {
        int a = coef[i];
        a += carry;
        carry = a / base;
        a %= base;
        coef[i] = a;
    }
    while (carry > 0) {
        coef[i++] = carry % base;
        carry /= base;
    }
}
