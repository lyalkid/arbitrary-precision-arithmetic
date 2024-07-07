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

// Печать числа в привычном виде
// -------------------------------------------
void output_digit(int a[], int size_a) {
    int size = get_real_len_of_number(a, size_a);
    int i;
    if (!size) {
       
        printf("%d\n", 0);
    } else {
        for (i = size - 1; i > 0; i--) {
            printf("%d", a[i]);
        }

        // for (i = 0; i < size; i++) {
        //     printf("%d", a[i]);
        // }
        printf("%d\n", a[i]);
    }
}
// -------------------------------------------

// разница
// -------------------------------------------
void take_a_rank(int a[], int index, int base, int size_a) {
    a[index] = a[index] + base;
    for (int i = index + 1; i < size_a; i++) {
        int get_digit = a[i];
        if (!get_digit) {
            a[i] = a[i] + (base - 1);
            continue;
        } else {
            a[i] -= 1;
            break;
        }
    }
}
void get_diff(int a[], int b[], int result[], int size, int base) {  // a больше чем b
    int len_b = get_real_len_of_number(b, size);
    int len_a = get_real_len_of_number(a, size);
    init_array(result, size);
    output_digit(a, size);
    output_digit(b, size);
    output_digit(result, size);

    for (int i = 0; i < len_a; i++) {
        if (a[i] < b[i]) {
            take_a_rank(a, i, base, len_a);
            printf("\n\nafter take a rank\n");
            output_digit(a, size);
            output_digit(b, size);
        }
        result[i] = a[i] - b[i];
    }
    printf("\n\n after end\n");
    output_digit(a, size);
    output_digit(b, size);
    printf("\n\n\n");
}

// занимаем у старших

// -------------------------------------------

int main() {
    int size = 10;
    int a[] = {5, 2, 0, 0, 0, 0, 0, 0, 0, 0};
    int b[] = {9, 1, 0, 0, 0, 0, 0, 0, 0, 0};
    int diff[size];

    get_diff(a, b, diff, size, 10);

    output_digit(a, size);
    printf("%c\n", '-');
    output_digit(b, size);
    printf("%c\n", '=');
    output_digit(diff, size);

    // printf("length = %d\n", get_real_len_of_number(mult, size));
}
