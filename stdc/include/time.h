/* 
 * time.h
 *
 */

#ifndef	_CLANG_PORT_TIME_H_
#define	_CLANG_PORT_TIME_H_

#ifdef __IMPL_CLANG_PORT_API__
#include <stdc/include/_clang_port.h>
#include <stdc/include/stddef.h>
#else // __IMPL_CLANG_PORT_API__
#include <_clang_port.h>
#include <stddef.h>
#endif // __IMPL_CLANG_PORT_API__




__BEGIN_DECLS

/*
 Components of time
 */
#define CLOCKS_PER_SEC     1000000
#define TIME_UTC     1
typedef size_t time_t;
typedef size_t clock_t;
//typedef size_t timer_t;
//typedef size_t suseconds_t;

struct timespec {
	time_t tv_sec;
	long tv_nsec;
};


struct tm {
	int     tm_sec;         /* seconds */
	int     tm_min;         /* minutes */
	int     tm_hour;        /* hours */
	int     tm_mday;        /* day of the month */
	int     tm_mon;         /* month */
	int     tm_year;        /* year */
	int     tm_wday;        /* day of the week */
	int     tm_yday;        /* day in the year */
	int     tm_isdst;       /* daylight saving time */
};
/*
 Time manipulation functions
 */
clock_t clock(void);
double difftime(time_t time1, time_t time0);
time_t mktime(struct tm *timeptr);
time_t time(time_t *timer);
int timespec_get(struct timespec *ts, int base);
/*
 Time conversion functions
 */
char *asctime(const struct tm *timeptr);
char *ctime(const time_t *timer);
struct tm *gmtime(const time_t *timer);
struct tm *localtime(const time_t *timer);
size_t strftime(char * restrict s,size_t maxsize,
				const char * restrict format,
				const struct tm * restrict timeptr);


__END_DECLS


#endif	/* _CLANG_PORT_TIME_H_ */

