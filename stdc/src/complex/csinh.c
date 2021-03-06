/* csinh.c */
/*
   Contributed by Danny Smith
   2003-10-20
*/


#include <stdc/include/math.h>
#include <stdc/include/complex.h>

/* csinh (x + I * y) = sinh (x) * cos (y)
    + I * (cosh (x) * sin (y)) */ 


double complex CLANG_PORT_DECL(csinh) (double complex Z)
{
  double complex Res;
  __real__ Res = sinh (__real__ Z) * cos (__imag__ Z);
  __imag__ Res = cosh (__real__ Z) * sin (__imag__ Z);
  return Res;
}
