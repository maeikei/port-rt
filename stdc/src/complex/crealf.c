#include <complex.h>
float __attribute__ ((const)) CLANG_PORT_DECL(crealf) (float complex _Z)
{
  return __real__ _Z;
}

