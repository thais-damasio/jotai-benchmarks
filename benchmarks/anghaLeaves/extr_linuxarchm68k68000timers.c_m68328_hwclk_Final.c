// ========================================================================= //

// includes
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "string.h"
#include "limits.h"
#include "float.h"



#define JOTAI_NUM_RANDS_ 25

const unsigned rand_primes[JOTAI_NUM_RANDS_] = {179, 103, 479, 647, 229, 37, 271, 557, 263, 607, 18743, 50359, 21929, 48757, 98179, 12907, 52937, 64579, 49957, 52567, 507163, 149939, 412157, 680861, 757751};

int next_i() {
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
");

}


// ------------------------------------------------------------------------- //

#define NULL ((void*)0)
typedef unsigned long size_t;  // Customize by platform.
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;  // Either arithmetic or pointer type.
/* By default, we understand bool (as a convenience). */
typedef int bool;
#define false 0
#define true 1

/* Forward declarations */

/* Type definitions */
struct rtc_time {int tm_year; int tm_mday; long tm_hour; long tm_min; long tm_sec; scalar_t__ tm_mon; } ;

/* Variables and functions */
 long RTCTIME ; 

int m68328_hwclk(int set, struct rtc_time *t)
{
	if (!set) {
		long now = RTCTIME;
		t->tm_year = 1;
		t->tm_mon = 0;
		t->tm_mday = 1;
		t->tm_hour = (now >> 24) % 24;
		t->tm_min = (now >> 16) % 60;
		t->tm_sec = now % 60;
	}

	return 0;
}


// ------------------------------------------------------------------------- //




// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // int-bounds
    case 0:
    {
          int set = 100;
          int _len_t0 = 1;
          struct rtc_time * t = (struct rtc_time *) malloc(_len_t0*sizeof(struct rtc_time));
          for(int _i0 = 0; _i0 < _len_t0; _i0++) {
            t[_i0].tm_year = ((-2 * (next_i()%2)) + 1) * next_i();
        t[_i0].tm_mday = ((-2 * (next_i()%2)) + 1) * next_i();
        t[_i0].tm_hour = ((-2 * (next_i()%2)) + 1) * next_i();
        t[_i0].tm_min = ((-2 * (next_i()%2)) + 1) * next_i();
        t[_i0].tm_sec = ((-2 * (next_i()%2)) + 1) * next_i();
        t[_i0].tm_mon = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = m68328_hwclk(set,t);
          printf("%d\n", benchRet); 
          free(t);
        
        break;
    }
    // big-arr
    case 1:
    {
          int set = 255;
          int _len_t0 = 65025;
          struct rtc_time * t = (struct rtc_time *) malloc(_len_t0*sizeof(struct rtc_time));
          for(int _i0 = 0; _i0 < _len_t0; _i0++) {
            t[_i0].tm_year = ((-2 * (next_i()%2)) + 1) * next_i();
        t[_i0].tm_mday = ((-2 * (next_i()%2)) + 1) * next_i();
        t[_i0].tm_hour = ((-2 * (next_i()%2)) + 1) * next_i();
        t[_i0].tm_min = ((-2 * (next_i()%2)) + 1) * next_i();
        t[_i0].tm_sec = ((-2 * (next_i()%2)) + 1) * next_i();
        t[_i0].tm_mon = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = m68328_hwclk(set,t);
          printf("%d\n", benchRet); 
          free(t);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int set = 10;
          int _len_t0 = 100;
          struct rtc_time * t = (struct rtc_time *) malloc(_len_t0*sizeof(struct rtc_time));
          for(int _i0 = 0; _i0 < _len_t0; _i0++) {
            t[_i0].tm_year = ((-2 * (next_i()%2)) + 1) * next_i();
        t[_i0].tm_mday = ((-2 * (next_i()%2)) + 1) * next_i();
        t[_i0].tm_hour = ((-2 * (next_i()%2)) + 1) * next_i();
        t[_i0].tm_min = ((-2 * (next_i()%2)) + 1) * next_i();
        t[_i0].tm_sec = ((-2 * (next_i()%2)) + 1) * next_i();
        t[_i0].tm_mon = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = m68328_hwclk(set,t);
          printf("%d\n", benchRet); 
          free(t);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
