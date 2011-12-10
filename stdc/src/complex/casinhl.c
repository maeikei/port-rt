/*
   casinhl.c
   Contributed by Danny Smith
   2005-01-04
*/

#include <stdc/include/math.h>
#include <stdc/include/complex.h>

/* casinh (z) = -I casin (I * z) */

long double complex CLANG_PORT_DECL(casinhl) (long double complex Z)
{
  long double complex Tmp;
  long double complex Res;

  __real__ Tmp = - __imag__ Z;
  __imag__ Tmp =   __real__ Z;
  Tmp = CLANG_PORT_CALL(casinl) (Tmp);
  __real__ Res =   __imag__ Tmp;
  __imag__ Res = - __real__ Tmp;
  return Res;
}
