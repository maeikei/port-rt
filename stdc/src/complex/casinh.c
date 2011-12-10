/*
   casinh.c
   Contributed by Danny Smith
   2003-10-20
*/

#include <stdc/include/math.h>
#include <stdc/include/complex.h>

/* casinh (z) = -I casin (I * z) */

double complex CLANG_PORT_DECL(casinh) (double complex Z)
{
  double complex Tmp;
  double complex Res;

  __real__ Tmp = - __imag__ Z;
  __imag__ Tmp =   __real__ Z;
  Tmp = CLANG_PORT_CALL(casin) (Tmp);
  __real__ Res =   __imag__ Tmp;
  __imag__ Res = - __real__ Tmp;
  return Res;
}
