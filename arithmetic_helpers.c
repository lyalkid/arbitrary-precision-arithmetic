
/*
    скалдывает два числа, которые представлены в виде массива
*/
void get_add(const int value1[], const int value2[], int coef[], int size) {
    int base = 2;
    for (int i = 0; i < size; i++) {
            coef[i] = value1[i] + value2[i];
    }
    add_normalize(coef, size, base);
}

/* 
    функция получает набор (массив) коэффициентов и нормализует их в соотвествии с выбранной 
    системой счисления. Например, сложили два числа 52 + 48, получили 100.
    Как это выглядит в виде массива: 
    [2, 5, 0]
    +
    [8, 4, 0]
    =
    [10, 9]
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

