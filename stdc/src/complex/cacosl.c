/*
   cacosl.c
   Contributed by Danny Smith
   2004-01-04
*/

#include <stdc/include/math.h>
#include <stdc/include/complex.h>

#if 0
/* cacos (Z) = -I * clog(Z + I * csqrt(1 - Z * Z)) */

long double complex cacosl (long double  complex Z)
{
  long double complex Res;
  long double x, y;

  x = __real__ Z;
  y = __imag__ Z;

  if (y == 0.0L)
    {
      __real__ Res = CLANG_PORT_CALL(acosl) (x);
      __imag__ Res = 0.0L;
    }

  else
    {
      long double complex ZZ;
      /* Z * Z = ((x - y) * (x + y)) + (2.0 * x * y) * I */
      /* caculate 1 - Z * Z */
      __real__ ZZ = 1.0L - (x - y) * (x + y);
      __imag__ ZZ = -2.0L * x * y;

       
       Res = CLANG_PORT_CALL(csqrtl)(ZZ);

      /* calculate ZZ + I * sqrt (ZZ) */
    
      __real__ ZZ = x - __imag__ Res;
      __imag__ ZZ = y + __real__ Res;
       
      ZZ = CLANG_PORT_CALL(clogl)(ZZ);

      /* mult by -I */

      __real__ Res  =  __imag__ ZZ;
      __imag__ Res = - __real__ ZZ;
    }
  return Res;
}

#else

/* cacos ( Z ) =  pi/2 - casin ( Z ) */
#ifndef _M_PI_2L
#define _M_PI_2L 1.5707963267948966192313L
#endif
long double complex CLANG_PORT_DECL(cacosl) (long double complex Z)
{
  long double complex Res  = casinl (Z);
  __real__ Res = _M_PI_2L - __real__ Res;
  __imag__ Res = - __imag__ Res;
  return Res;
}
#endif
