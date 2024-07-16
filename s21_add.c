#include <stdlib.h>

#define MINUS 0x80000000
#define SC 0x00ff0000
#define DEC_ARRAY 512
#define SIZE_MANTISSA 100

typedef struct {
    int bits[4]
} s21_decimal;

/*
0 — OK;
1 — the number is too large or equal to infinity;
2 — the number is too small or equal to negative infinity;
3 — division by 0.
*/
enum errors { OK, INF, NINF, DIV_BY_ZERO };



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

void get_add(const int value1[], const int value2[], int coef[], int size, int base) {
    for (int i = 0; i < size; i++) {
        if (i >= size) {
            coef[i] = 0;
        } else {
            coef[i] = value1[i] + value2[i];
        }
    }
    add_normalize(coef, size, base);
}

// size = DEC_ARRAY
void from_decimal_to_array(s21_decimal decimal, int array[]) {
    init_array(array, DEC_ARRAY);
    for (int i = 0; i < 128; i++) {
        array[i] = get_bit(decimal, i);
    }
}

void init_array(int array[], int size) {
    for (int i = 0; i < size; i++) {
        array[i] = 0;
    }
}

int get_bit(s21_decimal decimal, int index) {
    int flag = 0;
    int result = 0;
    int size_of_int = 32;

    if (index < 0 || index > 127 || &decimal == NULL) {
        flag = -1;
    }

    if (flag != -1) {
        int part = 0;
        if (index < 32) {
        } else if (index < 64) {
            ++part;
        } else if (index < 96) {
            part += 2;
        } else {
            part += 3;
        }
        index = index - size_of_int * part;
        unsigned int mask = 1 << index;
        result = decimal.bits[part] & mask ? 1 : 0;
    } else {
        result = flag;
    }

    return result;
}

int set_bit(s21_decimal* decimal, int index, int value) {
    int flag = 0;
    int result = 0;
    int size_of_int = 32;

    if (index < 0 || index > 127 || decimal == NULL || value < 0 || value > 1) {
        flag = -1;
    }
    int part = 0;
    if (flag != -1) {
        if (index < 32) {
        } else if (index < 64) {
            ++part;

        } else if (index < 96) {
            part += 2;

        } else {
            part += 3;
        }
        index = index - size_of_int * part;
        unsigned int mask = 1 << index;
        if (value == 1) {
            decimal->bits[part] |= mask;
        } else {
            decimal->bits[part] &= ~mask;
        }
    }
    return flag;
}

int get_scale(s21_decimal value) { return ((value.bits[3] >> 16) & 0b11111111); }

void set_scale(s21_decimal* decimal, int scale) {  // scale от 0 до 28, bit[3] : от 16 до 23
    scale = scale << 16;
    int sign = get_sign(*decimal);
    decimal->bits[3] = scale;
    set_sign(decimal, sign);
}

int get_sign(s21_decimal value) {
    int index = 127;
    return check_bit(value, index);
}

void set_sign(s21_decimal* decimal, int sign) {
    int index_sign = 127;
    set_bit(decimal, index_sign, sign);
}
