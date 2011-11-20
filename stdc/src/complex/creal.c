#include <complex.h>
double __attribute__ ((const)) CLANG_PORT_DECL(creal) (double complex _Z)
{
  return __real__ _Z;
}

