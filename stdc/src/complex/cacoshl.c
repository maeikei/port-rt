/*
   cacoshl.c
   Contributed by Danny Smith
   2005-01-04
*/

#include <stdc/include/math.h>
#include <stdc/include/complex.h>

#if 0
/* cacosh (z) = I * cacos (z)  */
long double complex cacoshl (long double complex Z)
{
  long double complex Tmp;
  long double complex Res;

  Tmp = CLANG_PORT_CALL(cacosl) (Z);
  __real__ Res = -__imag__ Tmp;
  __imag__ Res = __real__ Tmp;
  return Res;
}

#else

/* cacosh (z) = I * cacos (z) = I * (pi/2 - casin (z))  */
#ifndef _M_PI_2L
#define _M_PI_2L 1.5707963267948966192313L
#endif
long double complex CLANG_PORT_DECL(cacoshl) (long double complex Z)
{
  long double complex Tmp;
  long double complex Res;

  Tmp = CLANG_PORT_CALL(casinl) (Z);
  __real__ Res = __imag__ Tmp;
  __imag__ Res =  _M_PI_2L - __real__ Tmp;
  return Res;
}
#endif
