/* csinhf.c */
/*
   Contributed by Danny Smith
   2004-12-24
*/


#include <stdc/include/math.h>
#include <stdc/include/complex.h>

/* csinh (x + I * y) = sinh (x) * cos (y)
    + I * (cosh (x) * sin (y)) */ 


float complex CLANG_PORT_DECL(csinhf) (float complex Z)
{
  float complex Res;
  __real__ Res = sinhf (__real__ Z) * cosf (__imag__ Z);
  __imag__ Res = coshf (__real__ Z) * sinf (__imag__ Z);
  return Res;
}
