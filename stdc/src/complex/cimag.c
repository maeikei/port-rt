#include <stdc/include/complex.h>
double __attribute__ ((const)) CLANG_PORT_DECL(cimag) (double complex _Z)
{
  return __imag__ _Z;
}

