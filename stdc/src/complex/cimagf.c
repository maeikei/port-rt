#include <complex.h>
float __attribute__ ((const)) CLANG_PORT_DECL(cimagf) (float complex _Z)
{
  return __imag__ _Z;
}

