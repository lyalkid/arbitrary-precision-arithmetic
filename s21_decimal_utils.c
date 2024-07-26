#include "s21_decimal_utils.h"

// size = DEC_ARRAY
void from_decimal_to_array(s21_decimal decimal, int array[], int size) {
    init_array(array, size);
    for (int i = 0; i < 96; i++) {
        array[i] = get_bit(decimal, i);
    }
}

void array_to_decimal(){}


void init_array(int array[], int size) {
    for (int i = 0; i < size; i++) {
        array[i] = 0;
    }
}

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
    return get_bit(value, index);
}

void set_sign(s21_decimal* decimal, int sign) {
    int index_sign = 127;
    set_bit(decimal, index_sign, sign);
}
