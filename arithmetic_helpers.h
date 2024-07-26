#ifndef ARITHMETIC_HELPERS_H_
#define ARITHMETIC_HELPERS_H_



void get_add(const int value1[], const int value2[], int coef[], int size);
void add_normalize(int coef[], int size, int base) ;
void init_array(int a[], int n);
void simple_multiply(int a[], int b, int result[], int size_a,
                     int base);
int get_real_len_of_number(int a[], int size);
void multiply(int a[], int b[], int result[], int size);
#endif // ARITHMETIC_HELPERS_H_