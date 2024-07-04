#include "sandbox.h"

#include <stdio.h>
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

// void get_diff(int a[], const int b[], int b_size) {
//     int carry = 0;
//     int base = 10;
//     int i;
// }

void init_array(int a[], int n) {
    for (int i = 0; i < n; i++) {
        a[i] = 0;
    }
}

void karatsuba(int *a, int *b, int *c, int n) {
    // if (n <= 64) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            c[i + j] += a[i] * b[j];
        }
    }
    // } else {
    //     int k = n / 2;
    //     int l[k], r[k], t[n];
    //     init_array(t, n);
    //     for (int i = 0; i < k; i++) {
    //         l[i] = a[i] + a[k + i];
    //         r[i] = b[i] + b[k + i];
    //     }
    //     karatsuba(l, r, t, k);              // считает t
    //     karatsuba(a, b, c, k);              // считает p1
    //     karatsuba(a + k, b + k, c + n, k);  // считает p2
    //     int *t1 = t, *t2 = t + k;
    //     int *s1 = c, *s2 = c + k, *s3 = c + 2 * k, *s4 = c + 3 * k;
    //     for (int i = 0; i < k; i++) {
    //         int c1 = s2[i] + t1[i] - s1[i] - s3[i];
    //         int c2 = s3[i] + t2[i] - s2[i] - s4[i];
    //         c[k + i] = c1;
    //         c[n + i] = c2;
    //     }
    // }
}

// в сложении не нужно учитывать запятую

int main() {
    int size = 5;
    int value1[] = {1, 1, 4, 5, 0};
    int value2[] = {5, 5, 5, 0, 0};
    int mult[] = {0, 0, 0, 0, 0, 0, 0, 0};  // 36303105
    // int coef[size * 2];
    // get_coef(value1, value2, coef, size);
    // normalize(coef, size);
    // int result[] = {0,0,0,0,0};
    // get_diff(value1, value2, size);
    karatsuba(value1, value2, mult, 3);
    for (int i = 0; i < size + 3; i++) {
        printf("%d ", mult[i]);
    }
}