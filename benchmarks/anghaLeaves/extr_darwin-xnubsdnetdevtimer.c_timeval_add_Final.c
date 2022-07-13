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
struct timeval {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;

/* Variables and functions */
 scalar_t__ DEVTIMER_USECS_PER_SEC ; 

__attribute__((used)) static __inline__ void
timeval_add(struct timeval tv1, struct timeval tv2,
	    struct timeval * result)
{
    result->tv_sec = tv1.tv_sec + tv2.tv_sec;
    result->tv_usec = tv1.tv_usec + tv2.tv_usec;
    if (result->tv_usec > DEVTIMER_USECS_PER_SEC) {
	result->tv_usec -= DEVTIMER_USECS_PER_SEC;
	result->tv_sec++;
    }
    return;
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
          struct timeval tv1;
        tv1.tv_usec = ((-2 * (next_i()%2)) + 1) * next_i();
        tv1.tv_sec = ((-2 * (next_i()%2)) + 1) * next_i();
          struct timeval tv2;
        tv2.tv_usec = ((-2 * (next_i()%2)) + 1) * next_i();
        tv2.tv_sec = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_result0 = 1;
          struct timeval * result = (struct timeval *) malloc(_len_result0*sizeof(struct timeval));
          for(int _i0 = 0; _i0 < _len_result0; _i0++) {
            result[_i0].tv_usec = ((-2 * (next_i()%2)) + 1) * next_i();
        result[_i0].tv_sec = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          timeval_add(tv1,tv2,result);
          free(result);
        
        break;
    }
    // big-arr
    case 1:
    {
          struct timeval tv1;
        tv1.tv_usec = ((-2 * (next_i()%2)) + 1) * next_i();
        tv1.tv_sec = ((-2 * (next_i()%2)) + 1) * next_i();
          struct timeval tv2;
        tv2.tv_usec = ((-2 * (next_i()%2)) + 1) * next_i();
        tv2.tv_sec = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_result0 = 65025;
          struct timeval * result = (struct timeval *) malloc(_len_result0*sizeof(struct timeval));
          for(int _i0 = 0; _i0 < _len_result0; _i0++) {
            result[_i0].tv_usec = ((-2 * (next_i()%2)) + 1) * next_i();
        result[_i0].tv_sec = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          timeval_add(tv1,tv2,result);
          free(result);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          struct timeval tv1;
        tv1.tv_usec = ((-2 * (next_i()%2)) + 1) * next_i();
        tv1.tv_sec = ((-2 * (next_i()%2)) + 1) * next_i();
          struct timeval tv2;
        tv2.tv_usec = ((-2 * (next_i()%2)) + 1) * next_i();
        tv2.tv_sec = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_result0 = 100;
          struct timeval * result = (struct timeval *) malloc(_len_result0*sizeof(struct timeval));
          for(int _i0 = 0; _i0 < _len_result0; _i0++) {
            result[_i0].tv_usec = ((-2 * (next_i()%2)) + 1) * next_i();
        result[_i0].tv_sec = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          timeval_add(tv1,tv2,result);
          free(result);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
