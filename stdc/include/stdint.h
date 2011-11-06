/*===---- stdint.h - Standard header for sized integer types --------------===*\
 *
 * Copyright (c) 2010 mayingkui
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
\*===----------------------------------------------------------------------===*/

#ifndef __CLANG_STDINT_H
#define __CLANG_STDINT_H

typedef signed char int8_t;
typedef unsigned char uint8_t;
typedef short int16_t;
typedef unsigned short uint16_t;
typedef int int32_t;
typedef unsigned int uint32_t;
typedef long long int64_t;
typedef unsigned long long uint64_t;



/*
 * int8_t & uint8_t
 */
typedef int8_t        int_least8_t;
typedef int8_t        int_fast8_t;
typedef uint8_t       uint_least8_t;
typedef uint8_t       uint_fast8_t;
#define INT8_MIN         (-128)
#define INT8_MAX         (127)
#define INT_LEAST8_MIN   INT8_MIN
#define INT_LEAST8_MAX   INT8_MAX
#define INT_FAST8_MIN    INT8_MIN
#define INT_FAST8_MAX    INT8_MAX
#define UINT8_MAX           (255U)
#define UINT_LEAST8_MAX     UINT8_MAX
#define UINT_FAST8_MAX      UINT8_MAX
#define INT8_C(c)	c
#define INT_LEAST8_C(c)	 INT8_C(c)
#define INT_FAST8_C(c)	INT8_C(c)
#define UINT8_C(c)	c ## U
#define UINT_LEAST8_C(c)  UINT8_C(c)
#define UINT_FAST8_C(c)  UINT8_C(c)


/*
 * int16_t & uint16_t
 */
typedef int16_t       int_least16_t;
typedef int32_t       int_fast16_t;
typedef uint16_t      uint_least16_t;
typedef uint32_t      uint_fast16_t;
#define INT16_MIN	(-32768)
#define INT16_MAX	(32767)
#define INT_LEAST16_MIN	INT16_MIN
#define INT_LEAST16_MAX	INT16_MAX
#define INT_FAST16_MIN	INT32_MIN
#define INT_FAST16_MAX	INT32_MAX
#define UINT16_MAX	(65535U)
#define UINT_LEAST16_MAX UINT16_MAX
#define UINT_FAST16_MAX UINT32_MAX
#define INT16_C(c)	c
#define INT_LEAST16_C(c) INT16_C(c)
#define INT_FAST16_C(c)	 INT32_C(c)
#define UINT16_C(c)	c ## U
#define UINT_LEAST16_C(c) UINT16_C(c)
#define UINT_FAST16_C(c) UINT32_C(c)

/*
 * int32_t & uint32_t
 */
typedef int32_t       int_least32_t;
typedef int32_t       int_fast32_t;
typedef uint32_t      uint_least32_t;
typedef uint32_t      uint_fast32_t;
#define INT32_MIN	(-2147483647-1)
#define INT32_MAX	(2147483647)
#define INT_LEAST32_MIN	INT32_MIN
#define INT_LEAST32_MAX	INT32_MAX
#define INT_FAST32_MIN	INT32_MIN
#define INT_FAST32_MAX	INT32_MAX
#define UINT32_MAX	(4294967295U)
#define UINT_LEAST32_MAX UINT32_MAX
#define UINT_FAST32_MAX UINT32_MAX
#define INT32_C(c)	c
#define INT_LEAST32_C(c) INT32_C(c)
#define INT_FAST32_C(c)  INT32_C(c)
#define UINT32_C(c)	c ## U
#define UINT_LEAST32_C(c) UINT32_C(c)
#define UINT_FAST32_C(c) UINT32_C(c)


/*
 *  int64_t
 */
typedef int64_t       int_least64_t;
typedef int64_t       int_fast64_t;
typedef uint64_t      uint_least64_t;
typedef uint64_t      uint_fast64_t;
#define INT64_MIN        (__INT64_C(-9223372036854775807)-1)
#define INT64_MAX        (__INT64_C(9223372036854775807))
#define INT_LEAST64_MIN  INT64_MIN
#define INT_LEAST64_MAX  INT64_MAX
#define INT_FAST64_MIN   INT64_MIN
#define INT_FAST64_MAX   INT64_MAX
#define UINT64_MAX       (__UINT64_C(18446744073709551615))
#define UINT_LEAST64_MAX UINT64_MAX
#define UINT_FAST64_MAX UINT64_MAX
#define __INT64_C(c)     c ## LL
#define __UINT64_C(c)     c ## ULL
#define INT64_C(c)       __INT64_C(c)
#define INT_LEAST64_C(c) INT64_C(c)
#define INT_FAST64_C(c)  INT64_C(c)

#define UINT64_C(c)       __UINT64_C(c)
#define UINT_LEAST64_C(c) UINT64_C(c)
#define UINT_FAST64_C(c)  UINT64_C(c)


/*
 * intptr_t & uintptr_t
 */

typedef int           intptr_t;
typedef unsigned int  uintptr_t;
#define INTPTR_MIN    INT32_MIN
#define INTPTR_MAX    INT32_MAX
#define UINTPTR_MAX   UINT32_MAX
#define PTRDIFF_MIN   INT32_MIN
#define PTRDIFF_MAX   INT32_MAX
#define INTPTR_C(c)   INT32_C(c)
#define UINTPTR_C(c)  UINT32_C(c)
#define PTRDIFF_C(c)  INT32_C(c)


/*
 *  intmax_t & uintmax_t
 */
typedef uint64_t uintmax_t;
typedef int64_t  intmax_t;
#define INTMAX_MIN	INT64_MIN
#define INTMAX_MAX	INT64_MAX
#define UINTMAX_MAX	UINT64_MAX
#define INTMAX_C(c)	INT64_C(c)
#define UINTMAX_C(c)	UINT64_C(c)



#endif /* __CLANG_STDINT_H */
