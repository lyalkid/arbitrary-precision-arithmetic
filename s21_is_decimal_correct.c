#include "inc/s21_is_decimal_correct.h"


/*
 * Двоичное представление
 * Двоичное представление Decimal состоит из 1-разрядного знака, 96-разрядного целого числа и коэффициента
 * масштабирования, используемого для деления целого числа и указания того, какая его часть является
 * десятичной дробью. Коэффициент масштабирования неявно равен числу 10, возведенному в степень в диапазоне от 0 до 28.
 *
 * Decimal число может быть реализовано в виде четырехэлементного массива 32-разрядных целых чисел со знаком (int bits[4];).
 * bits[0], bits[1], и bits[2] содержат младшие, средние и старшие 32 бита 96-разрядного целого числа соответственно.
 * bits[3] содержит коэффициент масштабирования и знак, и состоит из следующих частей:
 *
 * Биты от 0 до 15, младшее слово, не используются и должны быть равны нулю.
 * Биты с 16 по 23 должны содержать показатель степени от 0 до 28, который указывает степень 10 для разделения целого числа.
 * Биты с 24 по 30 не используются и должны быть равны нулю.
 * Бит 31 содержит знак; 0 означает положительный, а 1 означает отрицательный.
 *
 */
int s21_is_decimal_correct(s21_decimal decimal){
    int status_code = TRUE;
    for(int i = 0; i < 32; i++) {
        if (((i >= 0 && i <= 15) || (i >= 24 && i <= 30)) && i == 1) {
            status_code = FALSE;
            break;
        }
    }
    return status_code;
}