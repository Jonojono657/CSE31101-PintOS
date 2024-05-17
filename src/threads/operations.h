#include <stdint.h>

#define F (1 << 14)
#define INT_MAX ((1 << 31) - 1)
#define INT_MIN (-(1 << 31))

int int_to_fp (int n) {
  return n * F;
}

int fp_to_int_rounding_toward_zero (int x) {
  return x / F;
}

int fp_to_int_rounding_to_nearest (int x) {
  if (x >= 0) return (x + F / 2) / F;
  else return (x - F / 2) / F;
}

int add_fp (int x, int y) {
  return x + y;
}

int sub_fp (int x, int y) {
  return x - y;
}

int add_int (int x, int n) {
  return x + n * F;
}

int sub_int (int x, int n) {
  return x - n * F;
}

int mult_fp (int x, int y) {
  return ((int64_t) x) * y / F;
}

int mult_int (int x, int n) {
  return x * n;
}

int div_fp (int x, int y) {
  return ((int64_t) x) * F / y;
}

int div_int (int x, int n) {
  return x / n;
}