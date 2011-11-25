/*  csinf.c */

/*
   Contributed by Danny Smith
   2004-12-24
*/

#include <stdc/include/math.h>
#include <stdc/include/complex.h>

/* csin (x + I * y) = sin (x) * cosh (y)
    + I * (cos (x) * sinh (y)) */ 

float complex CLANG_PORT_DECL(csinf) (float complex Z)
{
  float complex Res;
  __real__ Res = sinf (__real__ Z) * coshf ( __imag__ Z);
  __imag__ Res = cosf (__real__ Z) * sinhf ( __imag__ Z);
  return Res;
}

