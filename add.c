#include <stdio.h>

#include "sandbox.h"
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

void get_coef(int value1[], int value2[], int coef[], int size) {
    for (int i = 0; i < size * 2; i++) {
        if (i >= size) {
            coef[i] = 0;
        } else {
            coef[i] = value1[i] + value2[i];
        }
    }
}

// в сложении не нужно учитывать запятую

/*



*/

int main() {
    int size = 5;
    int value1[] = {1, 1, 1, 1, 1};  // 65321 +
    int value2[] = {1, 0, 0, 0, 0};  // 99762 = 165083
    int coef[size * 2];
    get_coef(value1, value2, coef, size);
    normalize(coef, size);

    for (int i = 0; i < size * 2; i++) {
        printf("%d ", coef[i]);
    }
}