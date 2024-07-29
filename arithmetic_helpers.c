#include "inc/arithmetic_helpers.h"

#include <stdio.h>
/*
    скалдывает два числа, которые представлены в виде массива в 2 системе счисления
*/
void get_add_binary(const int value1[], const int value2[], int coef[], int size) {
    int base = 2;
    for (int i = 0; i < size; i++) {
        coef[i] = value1[i] + value2[i];
    }
    add_normalize(coef, size, base);
}

/*
    скалдывает два числа, которые представлены в виде массива в 10 системе счисления
*/
void get_add(int value1[], const int value2[], int size) {
    int base = 10;
    for (int i = 0; i < size; i++) {
        value1[i] = value1[i] + value2[i];
    }
    add_normalize(value1, size, base);
}

/* 
    функция получает набор (массив) коэффициентов и нормализует их в соотвествии с выбранной
    системой счисления. Например, сложили два числа 52 + 48, получили 100.
    Как это выглядит в виде массива:
    [2, 5, 0]
    +
    [8, 4, 0]
    =
    [10, 9, 0]
    после нормализации:
    [0, 0, 1]
*/
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

// умножение большого числа на маленькое
// массив, число, результат, размер массива, основание системы
// -------------------------------------------
void simple_multiply(int a[], int b, int result[], int size_a,
                     int base) {  // size - размер числа a  , b - число : example a = 05678 , b = 3,
    // result = 00000, size = 5, base -  основание системы счисления
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

// получает длину числа без ведущих нулей
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


/**
 * 
 * @param a первое число
 * @param b второе число
 * @param result результат
 * @param size размер массивов
 * @param base размер системы счисления
 */
void multiply(int a[], int b[], int result[], int size, int base) {
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
        add_normalize(result, size, base);
    }
}

void init_array(int a[], int n) {
    for (int i = 0; i < n; i++) {
        a[i] = 0;
    }
}

void init_array_for_power(int a[], int n) {
    for (int i = 0; i < n; i++) {
        a[i] = 0;
    }
    a[0] = 1;
}

// инициализирует число 10 в 2 сс в виде массива 01010..0000
void init_ten_in_binary(int a[], int n) {
    for (int i = 0; i < n; i++) {
        if(i == 1 || i == 3) {
            a[i] = 1;
            continue;
        }
        a[i] = 0;
    }
}

void print_binary(const unsigned int number) {
    int i;
    for (i = 31; i > 0; i--) {
        printf("%d", (number >> i) & 1);
    }
    printf("%d\n", (number >> i) & 1);
};

void from_binary_to_10(int bin_arr[], int result[], int size_bin_arr, int size_res) {
    init_array(result, size_res);
    int tmp[size_res];
    int two_power[size_res];
    for (int i = 0; i < size_bin_arr; i++) {
        init_array(tmp, size_res);
        init_array(two_power, size_res);
        two_power[0] = 1;

        if (bin_arr[i] == 1) {
            my_power(two_power, size_res, i, 2, 10);
            get_add(result, two_power, size_res);
        }
    }
}

/**
 *
 * @param a - число которое хранит в себе изначально 1, то есть [1, 0, 0, ..., 0], в нем будет записан результат;
 * @param a_size - размер массива;
 * @param exp - степень, в которую мы хотим умножить число;
 * @param digit - само число в 10 сс;
 * @param base - база системы счисления, в которой производить операцию и получить результат
 */
void my_power(int a[], int a_size, int exp, int digit, int base) {
    // int save_a[a_size];
    // copy_array(a, save_a, a_size);
    int tmp[a_size];
    while (exp != 0) {
        init_array(tmp, a_size);
        // multiply(a, save_a, tmp, a_size);
        simple_multiply(a, digit, tmp, a_size, base);
        copy_array(tmp, a, a_size);
        exp--;
    }
}

void copy_array(int src[], int dest[], int size) {
    int *pA = src;
    int *pB = dest;
    for (int i = 0; i < size; i++) {
        *(pB + i) = *(pA + i);
    }
}

void output_array(int arr[], int size) {
    int i;
    int check;
    int len = get_real_len_of_number(arr, size);
    for (i = 0; i < len - 1; i++) {
        check = arr[i];
        printf("%d", check);
    }
    check = arr[i];
    printf("%d\n", check);
};

void output_reversed_array(int arr[], int size) {
    int i ;
    int check;
    int len = get_real_len_of_number(arr, size);

    for (i = (len != 0)*(len - 1); len != 0 && i > 0; i--) {
        check = arr[i];
        printf("%d", check);
    }
    check = arr[i];
    printf("%d\n", check);
};

