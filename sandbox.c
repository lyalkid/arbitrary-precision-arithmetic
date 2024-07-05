#include "sandbox.h"

#include <stdio.h>

void init_array(int a[], int n) {
    for (int i = 0; i < n; i++) {
        a[i] = 0;
    }
}

// нормализация массива с коэффициентами
// -------------------------------------------
void normalize(int coef[], int size, int base) {
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

void get_coef(const int value1[], const int value2[], int coef[], int size, int sign) {
    for (int i = 0; i < size; i++) {
        if (i >= size) {
            coef[i] = 0;
        } else {
            coef[i] = value1[i] + value2[i];
        }
    }
    int base = 10;
    normalize(coef, size, base);
}
// -------------------------------------------

// умножение большого числа на маленькое
// массив, число, результат, размер массива, основание системы
// -------------------------------------------
void simple_multiply(int a[], int b, int result[], int size_a, int base) {
    // size - размер числа a  , b - число : example a = 05678 , b = 3, result = 00000, size = 5, base -
    // основание системы счисления
    init_array(result, size_a);  // заполняем нулями массив result
    int carry = 0;  // нужно для хранения количества перехода в другой разряд
    int i = 0;  // индекс
    while (i < size_a) {
        int mult = a[i] * b + carry;
        int remainder = mult % base;  // остаток
        result[i] = remainder;
        carry = mult / base;
        i++;
    }
}
// -------------------------------------------

int get_real_len_of_number(int a[], int size) {
    int i = 0;
    int len = 0;
    int count = 0;
    for (i = size - 1; i >= 0; i--) {
        if (a[i] == 0) {
            count++;
        } else {
            break;
        }
    }

    return size - count;
}

// умножение большого числа на большое
// -------------------------------------------
void multiply(int a[], int b[], int result[], int size) {
    int base = 10;
    // size = 128 все три массива размера size
    int simple_mult[size];  // массив для промежуточных произведений
    init_array(simple_mult, size);
    int n = size, m = size;

    int current_index = 0;

    for (int i = 0; i < m; i++) {
        simple_multiply(a, b[i], simple_mult, size, base);
        current_index = i;
        int k = 0;
        int end_current_index = current_index + get_real_len_of_number(simple_mult, size);
        for (int j = current_index; j < end_current_index; j++) {
            result[j] += simple_mult[k];
            k++;
        }
        normalize(result, size, base);
    }
}

// -------------------------------------------

// базовый функционал для разности
// -------------------------------------------
void get_diff(int a[], int b[], int result[], int size) {
    // // a - большее число по модулю, b  то что вычитаем, result , size - размер массивов, base -  основание
    // системы счисления.
    int base = 10;
    int len_a = get_real_len_of_number(a, size);
    int len_b = get_real_len_of_number(b, size);
    int carry = 0;
    for (size_t i = 0; i < len_b || carry; ++i) {
        a[i] -= carry + (i < len_b ? b[i] : 0);
        carry = a[i] < 0;
        if (carry) a[i] += base;
    }
}

// -------------------------------------------

void output_digit(int a[], int size_a) {
    int size = get_real_len_of_number(a, size_a);
    int i;
    for (i = size - 1; i > 0; i--) {
        printf("%d", a[i]);
    }
    printf("%d\n", a[i]);
}

int main() {
    int size = 10;
    int a[] = {8, 7, 6, 5, 0, 0, 0, 0, 0, 0};
    int b[] = {1, 4, 3, 0, 0, 0, 0, 0, 0, 0};
    int mult[size];
    init_array(mult, size);
    int diff[size];
    init_array(mult, size);
    // simple_multiply(a, b, mult, size);
    get_diff(a, b, mult, size);
    int i;
    output_digit(a, size);
    printf("%c\n", '*');
    output_digit(b, size);
    printf("%c\n", '=');
    output_digit(mult, size);

    // printf("length = %d\n", get_real_len_of_number(mult, size));
}
