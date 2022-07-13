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
struct watchdog_device {unsigned int timeout; } ;

/* Variables and functions */

__attribute__((used)) static int sun4v_wdt_set_timeout(struct watchdog_device *wdd,
				 unsigned int timeout)
{
	wdd->timeout = timeout;

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
          unsigned int timeout = 100;
          int _len_wdd0 = 1;
          struct watchdog_device * wdd = (struct watchdog_device *) malloc(_len_wdd0*sizeof(struct watchdog_device));
          for(int _i0 = 0; _i0 < _len_wdd0; _i0++) {
            wdd[_i0].timeout = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = sun4v_wdt_set_timeout(wdd,timeout);
          printf("%d\n", benchRet); 
          free(wdd);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int timeout = 255;
          int _len_wdd0 = 65025;
          struct watchdog_device * wdd = (struct watchdog_device *) malloc(_len_wdd0*sizeof(struct watchdog_device));
          for(int _i0 = 0; _i0 < _len_wdd0; _i0++) {
            wdd[_i0].timeout = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = sun4v_wdt_set_timeout(wdd,timeout);
          printf("%d\n", benchRet); 
          free(wdd);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int timeout = 10;
          int _len_wdd0 = 100;
          struct watchdog_device * wdd = (struct watchdog_device *) malloc(_len_wdd0*sizeof(struct watchdog_device));
          for(int _i0 = 0; _i0 < _len_wdd0; _i0++) {
            wdd[_i0].timeout = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = sun4v_wdt_set_timeout(wdd,timeout);
          printf("%d\n", benchRet); 
          free(wdd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
