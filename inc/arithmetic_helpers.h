#ifndef ARITHMETIC_HELPERS_H_
#define ARITHMETIC_HELPERS_H_



void get_add_binary(const int value1[], const int value2[], int coef[], int size);
void get_add(int value1[], const int value2[], int size);

void add_normalize(int coef[], int size, int base) ;
void init_array(int a[], int n);
void simple_multiply(int a[], int b, int result[], int size_a,
                     int base);

// получает размер вектора (массива) коэффициентов
int get_real_len_of_number(int a[], int size);

void multiply(int a[], int b[], int result[], int size);

void print_binary(const unsigned int number);

void copy_array(int a[], int b[], int size) ;
void my_power(int a[], int a_size , int exp, int digit);

void from_binary_to_10(int bin_arr[], int result[], int size_bin_arr, int size_res);
#endif // ARITHMETIC_HELPERS_H_