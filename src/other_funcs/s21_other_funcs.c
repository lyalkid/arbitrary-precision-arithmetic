#include "../inc/s21_other_funcs.h"

int s21_negate(s21_decimal value, s21_decimal *result) {
  if (result == NULL || &value == NULL) {
    return -1;
  }
  *result = value;
  set_bit(result, 127, get_bit(value, 127) ? 0 : 1);
  return 0;
}