#ifndef S21_DECIMAL_H_
#define S21_DECIMAL_H_

// #include "arithmetic_helpers.h"
// #include "s21_arithmetic.h"
// #include "s21_normalize_scale.h"
// #include "s21_subfuncs.h"

#define S21_DECIMAL_MAX \
    ((s21_decimal){{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}})  // 79,228,162,514,264,337,593,543,950,335
#define S21_DECIMAL_MIN ((s21_decimal){{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}})

typedef struct {
    unsigned int bits[4];
} s21_decimal;

typedef struct {
    unsigned int bits[8];
} s21_big_decimal;

#endif  // S21_DECIMAL_H_