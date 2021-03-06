/*
   ccosf.c
   Contributed by Danny Smith
   2003-12-24
*/

#include <stdc/include/math.h>
#include <stdc/include/complex.h>

/* ccos (x + I * y) = cos (x) * cosh (y)
    + I * (sin (x) * sinh (y)) */ 


float complex CLANG_PORT_DECL(ccosf) (float complex Z)
{
  float complex Res;
  __real__ Res = cosf (__real__ Z) * coshf ( __imag__ Z);
  __imag__ Res = -sinf (__real__ Z) * sinhf ( __imag__ Z);
  return Res;
}
