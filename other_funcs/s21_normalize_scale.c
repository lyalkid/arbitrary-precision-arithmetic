#include "../inc/s21_normalize_scale.h"

#include "../inc/arithmetic_helpers.h"
#include "../inc/s21_decimal.h"
#include "../inc/s21_decimal_utils.h"

void normalization(s21_decimal decimal_1, s21_decimal decimal_2) {
    int scale1 = get_scale(decimal_1), scale2 = get_scale(decimal_2);
    //    normalize_scale(&scale1, &scale2);
}

/**
 * делает нормализацию двух массивов, которые хранят в себе значащую часть децимала
 *
 * @param value1 значение первого децимала в виде массива из чисел 1 и 0
 * @param value2  значение второго децимала в виде массива из чисел 1 и 0
 * @param size размер каждого массива  размер массива 224-256 (для сложения достаточно 100, так как переход
 * максимум один бит, но нужно учитывать нормализацию)
 * @param scale1 - количество знаков после запятой в первом децимале
 * @param scale2 количество знаков после запятой во втором децимале
 */
void normalize_arrays(int value1[], int value2[], int size, int* scale1, int* scale2) {
    // допустим пришли два числа 1) 123/10^1 и 2) 123/10^2
    // умножим второе первое число на 10 в степени max_scale - min_scale

    int res1[size];
    int res2[size];
    init_array(res1, size);
    init_array(res2, size);

    const int max_scale = *scale1 > *scale2 ? *scale1 : *scale2;
    const int min_scale = *scale1 + *scale2 - max_scale;

    int resize_scale = max_scale - min_scale;
    int ten[size];
    init_array_for_power(ten, size);
    my_power(ten, size, resize_scale, 10, 2);

    // смотрим какой массив  нужно домножить на 10^resize_scale, чтобы был одинаковый scale
    if (min_scale == *scale1) {
        multiply(value1, ten, res1, size, 2);
        copy_array(res1, value1, size);
    } else {
        multiply(value2, ten, res2, size, 2);
        copy_array(res2, value2, size);
    }
}

//
// int normalize_scale(int* scale1, int* scale2) {
//     int max_scale = *scale1 > *scale2 ? *scale1 : *scale2;
//
//     if (*scale1 == *scale2) {
//     } else if (*scale1 == max_scale) {
//         *scale2 = *scale1 - *scale2;
//         *scale1 = 0;
//     } else if (*scale2 == max_scale) {
//         *scale1 = *scale2 - *scale1;
//         *scale2 = 0;
//     }
//
//     return  max_scale;
// }
