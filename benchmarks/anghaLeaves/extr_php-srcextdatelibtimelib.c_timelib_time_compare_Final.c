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
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {scalar_t__ sse; scalar_t__ us; } ;
typedef  TYPE_1__ timelib_time ;

/* Variables and functions */

int timelib_time_compare(timelib_time *t1, timelib_time *t2)
{
	if (t1->sse == t2->sse) {
		if (t1->us == t2->us) {
			return 0;
		}

		return (t1->us < t2->us) ? -1 : 1;
	}

	return (t1->sse < t2->sse) ? -1 : 1;
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
          int _len_t10 = 1;
          struct TYPE_4__ * t1 = (struct TYPE_4__ *) malloc(_len_t10*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_t10; _i0++) {
            t1[_i0].sse = ((-2 * (next_i()%2)) + 1) * next_i();
        t1[_i0].us = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_t20 = 1;
          struct TYPE_4__ * t2 = (struct TYPE_4__ *) malloc(_len_t20*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_t20; _i0++) {
            t2[_i0].sse = ((-2 * (next_i()%2)) + 1) * next_i();
        t2[_i0].us = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = timelib_time_compare(t1,t2);
          printf("%d\n", benchRet); 
          free(t1);
          free(t2);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_t10 = 65025;
          struct TYPE_4__ * t1 = (struct TYPE_4__ *) malloc(_len_t10*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_t10; _i0++) {
            t1[_i0].sse = ((-2 * (next_i()%2)) + 1) * next_i();
        t1[_i0].us = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_t20 = 65025;
          struct TYPE_4__ * t2 = (struct TYPE_4__ *) malloc(_len_t20*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_t20; _i0++) {
            t2[_i0].sse = ((-2 * (next_i()%2)) + 1) * next_i();
        t2[_i0].us = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = timelib_time_compare(t1,t2);
          printf("%d\n", benchRet); 
          free(t1);
          free(t2);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_t10 = 100;
          struct TYPE_4__ * t1 = (struct TYPE_4__ *) malloc(_len_t10*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_t10; _i0++) {
            t1[_i0].sse = ((-2 * (next_i()%2)) + 1) * next_i();
        t1[_i0].us = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_t20 = 100;
          struct TYPE_4__ * t2 = (struct TYPE_4__ *) malloc(_len_t20*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_t20; _i0++) {
            t2[_i0].sse = ((-2 * (next_i()%2)) + 1) * next_i();
        t2[_i0].us = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = timelib_time_compare(t1,t2);
          printf("%d\n", benchRet); 
          free(t1);
          free(t2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
