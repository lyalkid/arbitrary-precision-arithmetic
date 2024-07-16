#include <stdio.h>
#define MAX_LEN_DEC 31

void my_pow(int digit, int exp, int pow_res[], int size_arr);
void from_binary_to_decimal(int binary[], int result[], int size);
void mult(int big_chislo[], int small_chislo, int result[], int size);
int get_real_len_of_number(int a[], int size);
void output_digit(int a[], int size_a);
void init_array(int array[], int size);
void get_coef(int value1[], const int value2[], int size);
void normalize(int coef[], int size);
void init_array(int array[], int size) {
    for (int i = 0; i < size; i++) {
        array[i] = 0;
    }
}

void from_binary_to_decimal(int binary[], int answer[], int size_binary) {
    int pow_res[MAX_LEN_DEC];
    int iter[MAX_LEN_DEC];
    init_array(pow_res, MAX_LEN_DEC);
    for (int i = 0; i < size_binary; i++) {
        int tmp = binary[i];
        if (tmp == 1) {  //   прибавляем в 2^i
            init_array(iter, MAX_LEN_DEC);
            iter[0] = 1;
            for (int j = 0; j < MAX_LEN_DEC; j++) {
                mult(iter, 2, pow_res, MAX_LEN_DEC);
            }
            get_coef(answer, pow_res, MAX_LEN_DEC);
        }
    }
}
void get_coef(int value1[], const int value2[], int size) {
    for (int i = 0; i < size; i++) {
        value1[i] = value1[i] + value2[i];
    }
    normalize(value1, size);
}
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

// void my_pow(int digit, int exp, int pow_res[], int size_arr) {
//     pow_res[0] = 1;
//     for(int i = 0; i < size_arr; i++){
//         mult(pow_res, digit);
//     }
// }

void mult(int big_chislo[], int small_chislo, int result[], int size) {
    int carry = 0;
    int i = 0;
    int base = 10;
    while (i < size) {
        int mult = big_chislo[i] * small_chislo + carry;
        result[i] = mult % base;
        carry = mult / base;
        i++;
    }
}

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

int main() {
    int size = MAX_LEN_DEC;
    int numbers[4] = {1, 2, 3, 5};
    int binary[] = {1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int result[size];
    init_array(result, size);

    int a[] = {1, 0, 0, 0, 0};
    int b = 2;
    int multi[] = {0, 0, 0, 0, 0};
    from_binary_to_decimal(binary, result, size);
    // mult(a, b, multi, size);
    output_digit(result, size);
    // func(binary, result, size);
}