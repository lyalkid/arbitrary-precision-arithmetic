#include "../inc/arithmetic_helpers.h"

#include <stdarg.h>
#include <stdio.h>
/*
    скалдывает два числа, которые представлены в виде массива в 2 системе счисления
*/
void get_add_binary(const int value1[], const int value2[], int coef[], int size) {
    init_array(coef, size);
    int base = 2;

    for (int i = 0; i < size; i++) {
        coef[i] = value1[i] + value2[i];
    }
    add_normalize(coef, size, base);
}

// вычитание происходит из большего по модулю
void subtract(int value1[], int value2[], int result[], int size) {
    init_array(result, size);
    int borrow = 0;
    int border =
        get_real_len_of_number(value1, size) == size ? size : get_real_len_of_number(value1, size) + 1;
    for (int i = 0; i < border; i++) {
        int a = value1[i];
        int b = value2[i];
        int diff = a - b - borrow;  // value1[i] - value2[i] - borrow;
        if (diff < 0) {
            diff += 10;
            borrow = 1;
        } else {
            borrow = 0;
        }
        result[i] = diff;
    }
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
int get_real_len_of_number(const int a[], int size) {
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

// TODO сделать так чтобы можно было передавать неограниченное количество массивов и инициализировать их все
void init_array(int a[], int n) {
    for (int i = 0; i < n; i++) {
        a[i] = 0;
    }
}

// void init_arrays(int num_arrays, ...) {
//     va_list args;
//     va_start(args, num_arrays); // Инициализация списка аргументов
//
//     for (int i = 0; i < num_arrays; i++) {
//         int *array = va_arg(args, int*); // Получаем указатель на массив
//         int size = va_arg(args, int); // Получаем размер массива
//
//         for (int j = 0; j < size; j++) {
//             array[j] = 0; // Заполняем массив нулями
//         }
//     }
//
//     va_end(args); // Завершаем работу со списком аргументов
// }

void init_array_for_power(int a[], int n) {
    for (int i = 0; i < n; i++) {
        a[i] = 0;
    }
    a[0] = 1;
}

// инициализирует число 10 в 2 сс в виде массива 01010..0000
void init_ten_in_binary(int a[], int n) {
    for (int i = 0; i < n; i++) {
        if (i == 1 || i == 3) {
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
 * @param a - число которое хранит в себе изначально 1, то есть [1, 0, 0, ..., 0], в нем будет записан
 * результат;
 * @param a_size - размер массива;
 * @param exp - степень, в которую мы хотим умножить число;
 * @param digit - само число в 10 сс;
 * @param base - база системы счисления, в которой производить операцию и получить результат
 */
void my_power(int a[], int a_size, int exp, int digit, int base) {
    // int save_a[a_size];
    // copy_array(a, save_a, a_size);
    init_array_for_power(a, a_size);
    int tmp[a_size];
    while (exp != 0) {
        init_array(tmp, a_size);
        // multiply(a, save_a, tmp, a_size);
        simple_multiply(a, digit, tmp, a_size, base);
        copy_array(tmp, a, a_size, a_size);
        exp--;
    }
}

void copy_array(int from[], int to[], int size_from, int size_to) {
    int *pA = from;
    int *pB = to;
    for (int i = 0; i < size_from; i++) {
        *(pB + i) = *(pA + i);
    }
    if (size_to > size_from) {
        for (int i = size_from; i < size_to; i++) {
            to[i] = 0;
        }
    }
}

// TODO тут тоже убрать дублирование кода
void output_array(const int arr[], int size) {
    int i;
    int check;
    int len = get_real_len_of_number(arr, size);
    for (i = 0; i < len - 1; i++) {
        check = arr[i];
        printf("%d", check);
    }

    if (len != 0) {
        check = arr[i];
        printf("%d\n", check);
    }
};

void output_reversed_array(const int arr[], int size) {
    int i;
    int check;
    int len = get_real_len_of_number(arr, size);  // size;
    for (i = (len != 0) * (len - 1); len != 0 && i > 0; i--) {
        check = arr[i];
        printf("%d", check);
    }
    if (len != 0) {
        check = arr[i];
        printf("%d\n", check);
    }

    printf("len: %d\n", get_real_len_of_number(arr, size));
};

void from_array_to_decimal(int array[], int size_array, int exp, int sign, s21_decimal *decimal) {}

void ten_to_two_base(int ten_base[], int binary_base[], int size_array, int size_binary) {
    init_array(binary_base, size_array);

    int two_powers[size_array];
    int size_of_len_two_powers = 256;
    int len_of_two_powers[size_of_len_two_powers];
    int copy_ten_base[size_of_len_two_powers];
    copy_array(ten_base, copy_ten_base, size_array, size_of_len_two_powers);
    init_array(len_of_two_powers, size_of_len_two_powers);
    int start = size_array;
    int status_code = -1;

    //output_reversed_array(copy_ten_base, size_of_len_two_powers);

    // в этом цикле мы выясняем с какой степени двойки нам начинать
    for (int i = 0; i < 120; i++) {  // до 100 потому что максимальное число децимала 2^96, больше мне не
                                     // нужно, 100 взято с запасом

        my_power(len_of_two_powers, size_of_len_two_powers, i, 2, 10);
        status_code = compare(copy_ten_base, len_of_two_powers, size_of_len_two_powers);
        if (status_code == LESS) {
            start = i - 1;
            break;
        } else if (status_code == EQUALS) {
            start = i;
            break;
        }
    }

    //output_reversed_array(len_of_two_powers, size_of_len_two_powers);
    //output_reversed_array(binary_base, size_array);

    for (int i = start; i >= 0 && !(is_zero(ten_base, size_array)); i--) {
        my_power(two_powers, size_array, i, 2, 10);
        //output_reversed_array(two_powers, size_array);
        int sub_res[size_array];
        status_code = compare(ten_base, two_powers, size_array);
        if (status_code == LESS) {
            continue;
        } else if (status_code == GREATER || status_code == EQUALS) {
            subtract(ten_base, two_powers, sub_res, size_array);
            binary_base[i] = 1;
            //printf("i = %d,  binary: ", i);
            //output_reversed_array(binary_base, size_array);

            copy_array(sub_res, ten_base, size_array, size_array);
        }
        //printf("subres: ");
        //output_reversed_array(sub_res, size_array);
        if(get_real_len_of_number(sub_res, size_array) == 0) {
            break;
        }

    }
    //output_reversed_array(binary_base, size_array);

}

void delete_not_necessary_zero(int array[], int size_array, int len_frac) {
    int real_size = get_real_len_of_number(array, size_array);
    for (int i = len_frac; i < real_size; i++) {
        int tmp = array[i];
        array[i - len_frac] = tmp;
        array[i] = 0;
    }
}

// сравнивается первое относительно второго
// == 0 EQUALS
// v1 > v2 1 GREATER
// v1 < v2 2 LESS
int compare(const int v1[], const int v2[], int size) {
    int len1 = get_real_len_of_number(v1, size);
    int len2 = get_real_len_of_number(v2, size);

    int res = len1 == len2 ? EQUALS : len1 > len2 ? GREATER : LESS;

    if (res == EQUALS) {
        int i = len1;
        int k = 0;
        while (--i > 0 && v1[i] == v2[i]) {
        }
        if (v1[i] > v2[i]) res = GREATER;
        if (v1[i] < v2[i]) res = LESS;
    }

    return res;
}

int is_zero(int array[], int size_array) {
    return (get_real_len_of_number(array, size_array) == 0 ? TRUE : FALSE);
}