#include "../inc/s21_subfuncs.h"

#include "../inc/s21_arithmetic.h"
// size = DEC_ARRAY

// TODO  исправить дублирование кода
void from_decimal_to_array(s21_decimal decimal, int array[], int size) {
    init_array(array, size);
    for (int i = 0; i < 96; i++) {
        array[i] = get_bit(decimal, i);
    }
}

void from_big_decimal_to_array(s21_big_decimal bigDecimal, int array[], int size) {
    init_array(array, size);
    int t;
    for (int i = 0; i < 224; i++) {
        t = get_bit_from_big_decimal(bigDecimal, i);
        array[i] = t;
    }
}

int get_bit_from_big_decimal(s21_big_decimal bigDecimal, int index) {
    int flag = 0;
    int result = 0;
    int size_of_int = 32;

    if (index < 0 || index > 256 || &bigDecimal == NULL) {
        flag = -1;
    }

    if (flag != -1) {
        int part = 0;
        if (index < 32) {
        } else if (index < 64) {
            ++part;
        } else if (index < 96) {
            part += 2;
        } else if (index < 128) {
            part += 3;
        } else if (index < 160) {
            part += 4;
        } else if (index < 192) {
            part += 5;
        } else if (index < 224) {
            part += 6;
        } else if (index < 256) {
            part += 7;
        }
        index = index - size_of_int * part;
        unsigned int mask = 1 << index;
        result = bigDecimal.bits[part] & mask ? 1 : 0;
    } else {
        result = flag;
    }

    return result;
}

int get_bit(s21_decimal decimal, int index) {
    // unsigned int mask = 1u << (index % 32);
    // return (int)(decimal.bits[index / 32] & mask);

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

int get_scale(s21_decimal value) { return ((value.bits[3] >> 16) & 0b0000000011111111); }

void set_scale(s21_decimal* decimal, int scale) {  // scale от 0 до 28, bit[3] : от 16 до 23
    scale = scale << 16;
    int sign = get_sign(*decimal);
    decimal->bits[3] = scale;
    set_sign(decimal, sign);
}

void set_big_scale(s21_big_decimal* bigDecimal, int scale) {  // scale от 0 до 28, bit[3] : от 16 до 23
    scale = scale << 16;
    int sign = (int)((bigDecimal->bits[7] & CHECK_MINUS) >> 31);
    bigDecimal->bits[7] = scale;
    s21_set_sign_big(bigDecimal, sign);
}

int get_sign(s21_decimal value) {
    // return (int)(value.bits[3] & CHECK_MINUS) >> 31;
    int index = 127;
    return get_bit(value, index);
}

void set_sign(s21_decimal* decimal, int sign) {
    int index_sign = 127;
    set_bit(decimal, index_sign, sign);
}

void decimal_to_big_decimal(s21_decimal decimal, s21_big_decimal* bigDecimal) {
    for (int i = 0; i < 7; i++) {
        if (i < 3) {
            bigDecimal->bits[i] = decimal.bits[i];
            continue;
        } else if (i == 3) {
            bigDecimal->bits[3] = 0;
            bigDecimal->bits[7] = decimal.bits[i];
        } else {
            bigDecimal->bits[i] = 0;
        }
    }
}

int s21_is_decimal_correct(s21_decimal decimal) {
    int status_code = TRUE;
    for (int i = 64; i < 95; i++) {
        int serve = get_bit(decimal, i);
        if (((i >= 64 && i <= 79) || i >= 88) && serve == 1) {
            status_code = FALSE;
            break;
        }
    }
    return status_code;
}

void s21_set_bit_big(s21_big_decimal* num, int bit, unsigned value) {
    unsigned int serve = num->bits[bit / 32];
    if (value) {
         serve |= (1U << (bit % 32));
    } else {
        serve &= ~(1U << (bit % 32));
    }

    num->bits[bit/32] = serve;
    // print_binary(serve);
}

int s21_banking_round(s21_big_decimal* bigDecimal) {
    int status_code = OK;
    int remainder = 0;
    int sc = s21_get_scale_big(*bigDecimal);
    int check = s21_overflow_check(bigDecimal);

    while ((s21_overflow_check(bigDecimal) && s21_get_scale_big(*bigDecimal) > 0) ||
           s21_get_scale_big(*bigDecimal) > 28) {
        s21_div_10(bigDecimal, &remainder);
    }
    if (s21_overflow_check(bigDecimal)) status_code = INF;
    if (!status_code && (remainder > 5 || (remainder == 5 && s21_get_bit_big(*bigDecimal, 0)))) {
        for (int i = 0, temp = 1; i < 224; i++) {
            int result_bit = s21_get_bit_big(*bigDecimal, i) + temp;
            temp = result_bit / 2;
            result_bit %= 2;
            s21_set_bit_big(bigDecimal, i, result_bit);
        }
    }
    if (s21_overflow_check(bigDecimal)) status_code = INF;
    return status_code;
}

void s21_div_10(s21_big_decimal* bigDecimal, int* remainder) {
    int size = DEC_ARRAY;
    int bin_decimal[size];
    int bin_res[size];
    int ten_decimal[size];
   // out_big(*bigDecimal);

    from_big_decimal_to_array(*bigDecimal, bin_decimal, size);
    from_binary_to_10(bin_decimal, ten_decimal, size, size);
    output_reversed_array(ten_decimal, size);

    int last = ten_decimal[0];
    for (int i = 1; i < size; i++) {
        ten_decimal[i - 1] = ten_decimal[i];
    }

    output_reversed_array(ten_decimal, size);

    for(int i = 0; i <= 6; i++) {
        bigDecimal ->bits[i] = 0;
    }
    ten_to_two_base(ten_decimal, bin_res, size, size);
    for (int i = 0; i < 224; i++) {
        int t = bin_res[i];

        if(i < 100)s21_set_bit_big(bigDecimal, i, bin_res[i]);
        // out_big(*bigDecimal);
        // out_bin_big(*bigDecimal);
        // output_reversed_array(bin_res, size);
    }

    *remainder = last;
    if (s21_get_scale_big(*bigDecimal) > 0) {
        set_big_scale(bigDecimal, s21_get_scale_big(*bigDecimal) - 1);
    }


   // out_big(*bigDecimal);
}

void out_big(s21_big_decimal big_decimal) {
    printf("--------------------------\n");
    int size = DEC_ARRAY;
    int bin_decimal[size];
    int ten_decimal[size];
    from_big_decimal_to_array(big_decimal, bin_decimal, size);
    from_binary_to_10(bin_decimal, ten_decimal, size, size);
    output_reversed_array(ten_decimal, size);
    printf("scale: %d, sign: %d\n", s21_get_scale_big(big_decimal), s21_get_sign_big(big_decimal) );
    printf("--------------------------\n");
}

void out_bin_big(s21_big_decimal big_decimal) {
    for(int i = 0; i < 8; i++) {
        print_binary(big_decimal.bits[i]);
    }
}

void out_decimal(s21_decimal decimal) {
    printf("--------------------------\n");
    int size = DEC_ARRAY;
    int bin_decimal[size];
    int ten_decimal[size];
    from_decimal_to_array(decimal, bin_decimal, size);
    from_binary_to_10(bin_decimal, ten_decimal, size, size);
    output_reversed_array(ten_decimal, size);
    printf("scale: %d, sign: %d\n", get_scale(decimal), get_sign(decimal) );
    printf("--------------------------\n");
}



int s21_overflow_check(s21_big_decimal* value) {
    return value->bits[3] || value->bits[4] || value->bits[5] || value->bits[6];
}
int s21_get_scale_big(s21_big_decimal bigDecimal) {
    unsigned int serve = bigDecimal.bits[7];
    serve = (serve >> 16) & CHECK_SCALE;
    return (bigDecimal.bits[7] >> 16) & CHECK_SCALE;
}

int s21_big_decimal_to_decimal(s21_big_decimal src, s21_decimal* res) {
    int owerflow_code = OK;
    if ((owerflow_code = s21_overflow_check(&src)) && s21_get_scale_big(src) > 28) {
        owerflow_code = s21_banking_round(&src);
    }
    if (owerflow_code == OK) {
        for (int i = 0; i < 3; i++) {
            res->bits[i] = src.bits[i];
        }
        res->bits[3] = src.bits[7];
        //set_scale(res, s21_get_scale_big(src));
    }
    return owerflow_code;
}

void array_to_bigDecimal(int array[], int size, int sign, int exp, s21_big_decimal* bigDecimal) {
    unsigned int serve = (sign << 31) + (exp << 16);
    bigDecimal->bits[7] = serve;
    for (int i = 0; i < 224; i++) {
        s21_set_bit_big(bigDecimal, i, array[i]);
    }
}

int is_zero_decimal(s21_decimal decimal) {
    int flag = 1;
    for (int i = 0; i < 4; i++) {
        if (decimal.bits[i] != 0) {
            flag = 0;
            break;
        }
    }
    return flag;
}

// 0 - possitive, 1 - negative
void s21_set_sign_big(s21_big_decimal* num, unsigned value) { s21_set_bit_big(num, 255, value); }

// setters and getters for bit
int s21_get_bit_big(s21_big_decimal value, int bit) { return (value.bits[bit / 32] >> (bit % 32)) & 1; }

s21_decimal s21_decimal_init() {
    s21_decimal decimal = {{0}};
    ;
    for (int i = 0; i < 3; i++) {
        decimal.bits[i] = 0;
    }
    return decimal;
};
s21_big_decimal s21_bigdecimal_init() {
    s21_big_decimal bigDecimal = {{0}};
    ;
    for (int i = 0; i < 8; i++) {
        bigDecimal.bits[i] = 0;
    }

    return bigDecimal;
};

int s21_shift_left_big(s21_big_decimal value, int num, s21_big_decimal* result) {
    *result = s21_bigdecimal_init();
    for (int i = 0; i < 224 - num; i++) {
        s21_set_bit_big(result, i + num, s21_get_bit_big(value, i));
    }

    return OK;
}

int s21_get_sign_big(s21_big_decimal big_decimal) { return (big_decimal.bits[7] >> 31); }

void s21_set_scale_big(s21_big_decimal* num, unsigned value) {
    value = value << 16;
    unsigned int sign = (unsigned int)s21_get_sign_big(*num);
    num->bits[7] = value;
    s21_set_bit_big(num, 255, sign);
}

int s21_is_decimal_identical(s21_decimal v1, s21_decimal v2) {
    int is_eq = 1;

    for (int i = 0; i < 4; i++) {
        if (v1.bits[i] != v2.bits[i]) {
            is_eq = 0;
            break;
        }
    }

    return is_eq;
}
