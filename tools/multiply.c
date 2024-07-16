#include <stdio.h>

#include "sandbox.h"

void init_array(int a[], int n) {
    for (int i = 0; i < n; i++) {
        a[i] = 0;
    }
}

//сложение двух массивов
// -------------------------------------------
void normalize(int coef[], int size) {
    int carry = 0;      // сколько данных перешло в след разряд
    int remainder = 0;  // остаток
    int base = 2;       // двоичная система счисления
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

void get_coef(const int value1[], const int value2[], int coef[], int size) {
    for (int i = 0; i < size * 2; i++) {
        if (i >= size) {
            coef[i] = 0;
        } else {
            coef[i] = value1[i] + value2[i];
        }
    }
}
// -------------------------------------------

// умножение большого числа на маленькое
// -------------------------------------------
void simple_multiply(int a[], int b, int result[], int size_a,
                     int size_result) {  // size - размер числа a  , b - число : example a = 05678 , b = 3,
                                         // result = 00000, size = 5
    init_array(result, size_result);  // заполняем нулями массив result
    int carry = 0;  // нужно для хранения количества перехода в другой разряд
    int i = 0;      // индекс
    int base = 10;  // основание системы счисления
    while (i < size_a) {
        int mult = a[i] * b + carry;
        int remainder = mult % base;  // остаток
        result[i] = remainder;
        carry = mult / base;
        i++;
    }
}
// -------------------------------------------

int main() {
    int size = 5;
    int a[] = {8, 7, 6, 5, 0};
    int b = 3;
    int mult[] = {0, 0, 0, 0, 0};
    simple_multiply(a, b, mult, size, size);

    int i;
    for (i = size - 1; i > 0; i--) {
        printf("%d", mult[i]);
    }
    printf("%d\n", mult[i]);
}