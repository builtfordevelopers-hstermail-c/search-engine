/* struct timespec comes from POSIX */
#ifndef _POSIX_C_SOURCE
#define _POSIX_C_SOURCE	199309L
#endif

#include <time.h>

struct timer {
	long begin_msec;
	long last_msec;
};

void delay(time_t, long, long);

void timer_reset(struct timer*);

long timer_tot_msec(struct timer*);

long timer_last_msec(struct timer*);
