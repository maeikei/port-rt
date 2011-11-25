/*
   cacosh.c
   Contributed by Danny Smith
   2003-10-20
*/

#include <stdc/include/math.h>
#include <stdc/include/complex.h>


#include <complex_internal.h>


#if 0
/* cacosh (z) = I * cacos (z)  */
double complex cacosh (double complex Z)
{
  double complex Tmp;
  double complex Res;

  Tmp = cacos (Z);
  __real__ Res = -__imag__ Tmp;
  __imag__ Res = __real__ Tmp;
  return Res;
}

#else

/* cacosh (z) = I * cacos (z) = I * (pi/2 - casin (z))  */

double complex CLANG_PORT_DECL(cacosh) (double complex Z)
{
  double complex Tmp;
  double complex Res;

  Tmp = casin (Z);
  __real__ Res = __imag__ Tmp;
  __imag__ Res =  M_PI_2 - __real__ Tmp;
  return Res;
}
#endif
