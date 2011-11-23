/*
 * complex.h
 *
 *
 */

#ifndef _CLANG_PORT_COMPLEX_H_
#define _CLANG_PORT_COMPLEX_H_

#ifdef __IMPL_CLANG_PORT_API__
#include <stdc/include/_clang_port.h>
#else // __IMPL_CLANG_PORT_API__
#include <_clang_port.h>
#endif // __IMPL_CLANG_PORT_API__



#ifdef __STDC_NO_COMPLEX__
#undef __STDC_NO_COMPLEX__
#endif
#ifndef __cplusplus
#define complex _Complex
#endif
#define _Complex_I  (0.0F +  1.0iF)
#define imaginary _Imaginary_I
#define _Imaginary_I
#define I _Complex_I
__BEGIN_DECLS
/*
 * Trigonometric functions
 */
double complex CLANG_PORT_DECL(cacos)(double complex z); 
float complex CLANG_PORT_DECL(cacosf)(float complex z); 
long double complex CLANG_PORT_DECL(cacosl)(long double complex z);
double complex CLANG_PORT_DECL(casin)(double complex z); 
float complex CLANG_PORT_DECL(casinf)(float complex z); 
long double complex CLANG_PORT_DECL(casinl)(long double complex z);
double complex CLANG_PORT_DECL(catan)(double complex z); 
float complex CLANG_PORT_DECL(catanf)(float complex z); 
long double complex CLANG_PORT_DECL(catanl)(long double complex z);
double complex CLANG_PORT_DECL(ccos)(double complex z); 
float complex CLANG_PORT_DECL(ccosf)(float complex z); 
long double complex CLANG_PORT_DECL(ccosl)(long double complex z);
double complex CLANG_PORT_DECL(csin)(double complex z); 
float complex CLANG_PORT_DECL(csinf)(float complex z); 
long double complex CLANG_PORT_DECL(csinl)(long double complex z);
double complex CLANG_PORT_DECL(ctan)(double complex z); 
float complex CLANG_PORT_DECL(ctanf)(float complex z); 
long double complex CLANG_PORT_DECL(ctanl)(long double complex z);
/*
 * Hyperbolic functions
 */
double complex CLANG_PORT_DECL(cacosh)(double complex z); 
float complex CLANG_PORT_DECL(cacoshf)(float complex z); 
long double complex CLANG_PORT_DECL(cacoshl)(long double complex z);
double complex CLANG_PORT_DECL(casinh)(double complex z); 
float complex CLANG_PORT_DECL(casinhf)(float complex z); 
long double complex CLANG_PORT_DECL(casinhl)(long double complex z);
double complex CLANG_PORT_DECL(catanh)(double complex z); 
float complex CLANG_PORT_DECL(catanhf)(float complex z); 
long double complex CLANG_PORT_DECL(catanhl)(long double complex z);
double complex CLANG_PORT_DECL(ccosh)(double complex z); 
float complex CLANG_PORT_DECL(ccoshf)(float complex z); 
long double complex CLANG_PORT_DECL(ccoshl)(long double complex z);
double complex CLANG_PORT_DECL(csinh)(double complex z); 
float complex CLANG_PORT_DECL(csinhf)(float complex z); 
long double complex CLANG_PORT_DECL(csinhl)(long double complex z);
double complex CLANG_PORT_DECL(ctanh)(double complex z); 
float complex CLANG_PORT_DECL(ctanhf)(float complex z); 
long double complex CLANG_PORT_DECL(ctanhl)(long double complex z);
double complex CLANG_PORT_DECL(cexp)(double complex z); 
float complex CLANG_PORT_DECL(cexpf)(float complex z); 
long double complex CLANG_PORT_DECL(cexpl)(long double complex z);
double complex CLANG_PORT_DECL(clog)(double complex z); 
float complex CLANG_PORT_DECL(clogf)(float complex z); 
long double complex CLANG_PORT_DECL(clogl)(long double complex z);
/*
 * Power and absolute-value functions
 */
double CLANG_PORT_DECL(cabs)(double complex z); 
float CLANG_PORT_DECL(cabsf)(float complex z); 
long double CLANG_PORT_DECL(cabsl)(long double complex z);
double complex CLANG_PORT_DECL(cpow)(double complex x, double complex y); 
float complex CLANG_PORT_DECL(cpowf)(float complex x, float complex y); 
long double complex CLANG_PORT_DECL(cpowl)(long double complex x, long double complex y);
double complex CLANG_PORT_DECL(csqrt)(double complex z); 
float complex CLANG_PORT_DECL(csqrtf)(float complex z); 
long double complex CLANG_PORT_DECL(csqrtl)(long double complex z);
/*
 * Manipulation functions
 */
double CLANG_PORT_DECL(carg)(double complex z); 
float CLANG_PORT_DECL(cargf)(float complex z); 
long double CLANG_PORT_DECL(cargl)(long double complex z);
double CLANG_PORT_DECL(cimag)(double complex z); 
float CLANG_PORT_DECL(cimagf)(float complex z); 
long double CLANG_PORT_DECL(cimagl)(long double complex z);
double complex CLANG_PORT_DECL(CMPLX)(double x, double y); 
float complex CLANG_PORT_DECL(CMPLXF)(float x, float y); 
long double complex CLANG_PORT_DECL(CMPLXL)(long double x, long double y);
double complex CLANG_PORT_DECL(conj)(double complex z); 
float complex CLANG_PORT_DECL(conjf)(float complex z); 
long double complex CLANG_PORT_DECL(conjl)(long double complex z);
double complex CLANG_PORT_DECL(cproj)(double complex z); 
float complex CLANG_PORT_DECL(cprojf)(float complex z); 
long double complex CLANG_PORT_DECL(cprojl)(long double complex z);
double CLANG_PORT_DECL(creal)(double complex z); 
float CLANG_PORT_DECL(crealf)(float complex z); 
long double CLANG_PORT_DECL(creall)(long double complex z);


									 
						

									 
#ifndef __IMPL_CLANG_PORT_API__
/*
 * Trigonometric functions
 */
CLANG_PORT_INLINE double complex cacos(double complex z)
{
	return CLANG_PORT_CALL(cacos)(z);
}
CLANG_PORT_INLINE float complex cacosf(float complex z)
{
	return CLANG_PORT_CALL(cacosf)(z);
}
CLANG_PORT_INLINE long double complex cacosl(long double complex z)
{
	return CLANG_PORT_CALL(cacosl)(z);
}
CLANG_PORT_INLINE double complex casin(double complex z)
{
	return CLANG_PORT_CALL(casin)(z);
}
CLANG_PORT_INLINE float complex casinf(float complex z)
{
	return CLANG_PORT_CALL(casinf)(z);
}
CLANG_PORT_INLINE long double complex casinl(long double complex z)
{
	return CLANG_PORT_CALL(casinl)(z);
}
CLANG_PORT_INLINE double complex catan(double complex z)
{
	return CLANG_PORT_CALL(catan)(z);
}
CLANG_PORT_INLINE float complex catanf(float complex z)
{
	return CLANG_PORT_CALL(catanf)(z);
}
CLANG_PORT_INLINE long double complex catanl(long double complex z)
{
	return CLANG_PORT_CALL(catanl)(z);
}
CLANG_PORT_INLINE double complex ccos(double complex z)
{
	return CLANG_PORT_CALL(ccos)(z);
}
CLANG_PORT_INLINE float complex ccosf(float complex z)
{
	return CLANG_PORT_CALL(ccosf)(z);
}
CLANG_PORT_INLINE long double complex ccosl(long double complex z)
{
	return CLANG_PORT_CALL(ccosl)(z);
}
CLANG_PORT_INLINE double complex csin(double complex z)
{
	return CLANG_PORT_CALL(csin)(z);
}
CLANG_PORT_INLINE float complex csinf(float complex z)
{
	return CLANG_PORT_CALL(csinf)(z);
}
CLANG_PORT_INLINE long double complex csinl(long double complex z)
{
	return CLANG_PORT_CALL(csinl)(z);
}
CLANG_PORT_INLINE double complex ctan(double complex z)
{
	return CLANG_PORT_CALL(ctan)(z);
}
CLANG_PORT_INLINE float complex ctanf(float complex z)
{
	return CLANG_PORT_CALL(ctanf)(z);
}
CLANG_PORT_INLINE long double complex ctanl(long double complex z)
{
	return CLANG_PORT_CALL(ctanl)(z);
}









/*
 * Hyperbolic functions
 */
CLANG_PORT_INLINE double complex cacosh(double complex z)
{
	return CLANG_PORT_CALL(cacosh)(z);
}
CLANG_PORT_INLINE float complex cacoshf(float complex z)
{
	return CLANG_PORT_CALL(cacoshf)(z);
}
CLANG_PORT_INLINE long double complex cacoshl(long double complex z)
{
	return CLANG_PORT_CALL(cacoshl)(z);
}
CLANG_PORT_INLINE double complex casinh(double complex z)
{
	return CLANG_PORT_CALL(casinh)(z);
}
CLANG_PORT_INLINE float complex casinhf(float complex z)
{
	return CLANG_PORT_CALL(casinhf)(z);
}
CLANG_PORT_INLINE long double complex casinhl(long double complex z)
{
	return CLANG_PORT_CALL(casinhl)(z);
}
CLANG_PORT_INLINE double complex catanh(double complex z)
{
	return CLANG_PORT_CALL(catanh)(z);
}
CLANG_PORT_INLINE float complex catanhf(float complex z)
{
	return CLANG_PORT_CALL(catanhf)(z);
}
CLANG_PORT_INLINE long double complex catanhl(long double complex z)
{
	return CLANG_PORT_CALL(catanhl)(z);
}
CLANG_PORT_INLINE double complex ccosh(double complex z)
{
	return CLANG_PORT_CALL(ccosh)(z);
}
CLANG_PORT_INLINE float complex ccoshf(float complex z)
{
	return CLANG_PORT_CALL(ccoshf)(z);
}
CLANG_PORT_INLINE long double complex ccoshl(long double complex z)
{
	return CLANG_PORT_CALL(ccoshl)(z);
}
CLANG_PORT_INLINE double complex csinh(double complex z)
{
	return CLANG_PORT_CALL(csinh)(z);
}
CLANG_PORT_INLINE float complex csinhf(float complex z)
{
	return CLANG_PORT_CALL(csinhf)(z);
}
CLANG_PORT_INLINE long double complex csinhl(long double complex z)
{
	return CLANG_PORT_CALL(csinhl)(z);
}
CLANG_PORT_INLINE double complex ctanh(double complex z)
{
	return CLANG_PORT_CALL(ctanh)(z);
}
CLANG_PORT_INLINE float complex ctanhf(float complex z)
{
	return CLANG_PORT_CALL(ctanhf)(z);
}
CLANG_PORT_INLINE long double complex ctanhl(long double complex z)
{
	return CLANG_PORT_CALL(ctanhl)(z);
}
CLANG_PORT_INLINE double complex cexp(double complex z)
{
	return CLANG_PORT_CALL(cexp)(z);
}
CLANG_PORT_INLINE float complex cexpf(float complex z)
{
	return CLANG_PORT_CALL(cexpf)(z);
}
CLANG_PORT_INLINE long double complex cexpl(long double complex z)
{
	return CLANG_PORT_CALL(cexpl)(z);
}
CLANG_PORT_INLINE double complex clog(double complex z)
{
	return CLANG_PORT_CALL(clog)(z);
}
CLANG_PORT_INLINE float complex clogf(float complex z)
{
	return CLANG_PORT_CALL(clogf)(z);
}
CLANG_PORT_INLINE long double complex clogl(long double complex z)
{
	return CLANG_PORT_CALL(clogl)(z);
}



/*
 * Power and absolute-value functions
 */
CLANG_PORT_INLINE double cabs(double complex z)
{
	return CLANG_PORT_CALL(cabs)(z);
}
CLANG_PORT_INLINE float cabsf(float complex z)
{
	return CLANG_PORT_CALL(cabsf)(z);
}
CLANG_PORT_INLINE long double cabsl(long double complex z)
{
	return CLANG_PORT_CALL(cabsl)(z);
}
CLANG_PORT_INLINE double complex cpow(double complex x, double complex y)
{
	return CLANG_PORT_CALL(cpow)(x,y);
}
CLANG_PORT_INLINE float complex cpowf(float complex x, float complex y)
{
	return CLANG_PORT_CALL(cpowf)(x,y);
}
CLANG_PORT_INLINE long double complex cpowl(long double complex x, long double complex y)
{
	return CLANG_PORT_CALL(cpowl)(x,y);
}
CLANG_PORT_INLINE double complex csqrt(double complex z)
{
	return CLANG_PORT_CALL(csqrt)(z);
}
CLANG_PORT_INLINE float complex csqrtf(float complex z)
{
	return CLANG_PORT_CALL(csqrtf)(z);
}
CLANG_PORT_INLINE long double complex csqrtl(long double complex z)
{
	return CLANG_PORT_CALL(csqrtl)(z);
}








/*
 * Manipulation functions
 */
CLANG_PORT_INLINE double carg(double complex z)
{
	return CLANG_PORT_CALL(carg)(z);
}
CLANG_PORT_INLINE float cargf(float complex z)
{
	return CLANG_PORT_CALL(cargf)(z);
}
CLANG_PORT_INLINE long double cargl(long double complex z)
{
	return CLANG_PORT_CALL(cargl)(z);
}
CLANG_PORT_INLINE double cimag(double complex z)
{
	return CLANG_PORT_CALL(cimag)(z);
}
CLANG_PORT_INLINE float cimagf(float complex z)
{
	return CLANG_PORT_CALL(cimagf)(z);
}
CLANG_PORT_INLINE long double cimagl(long double complex z)
{
	return CLANG_PORT_CALL(cimagl)(z);
}
CLANG_PORT_INLINE double complex CMPLX(double x, double y)
{
	return CLANG_PORT_CALL(CMPLX)(x,y);
}
CLANG_PORT_INLINE float complex CMPLXF(float x, float y)
{
	return CLANG_PORT_CALL(CMPLXF)(x,y);
}
CLANG_PORT_INLINE long double complex CMPLXL(long double x, long double y)
{
	return CLANG_PORT_CALL(CMPLXL)(x,y);
}
CLANG_PORT_INLINE double complex conj(double complex z)
{
	return CLANG_PORT_CALL(conj)(z);
}
CLANG_PORT_INLINE float complex conjf(float complex z)
{
	return CLANG_PORT_CALL(conjf)(z);
}
CLANG_PORT_INLINE long double complex conjl(long double complex z)
{
	return CLANG_PORT_CALL(conjl)(z);
}
CLANG_PORT_INLINE double complex cproj(double complex z)
{
	return CLANG_PORT_CALL(cproj)(z);
}
CLANG_PORT_INLINE float complex cprojf(float complex z)
{
	return CLANG_PORT_CALL(cprojf)(z);
}
CLANG_PORT_INLINE long double complex cprojl(long double complex z)
{
	return CLANG_PORT_CALL(cprojl)(z);
}
CLANG_PORT_INLINE double creal(double complex z)
{
	return CLANG_PORT_CALL(creal)(z);
}
CLANG_PORT_INLINE float crealf(float complex z)
{
	return CLANG_PORT_CALL(crealf)(z);
}
CLANG_PORT_INLINE long double creall(long double complex z)
{
	return CLANG_PORT_CALL(creall)(z);
}



#endif // __IMPL_CLANG_PORT_API__



__END_DECLS


#endif /* _CLANG_PORT_COMPLEX_H_ */
